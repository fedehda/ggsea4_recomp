// DolRecomp output
#include "../generated.h"

static void loop_7F0525A8(CPUState* ctx) {
label_7F0525A8:
    ctx->downcount -= 12;
    // 7F0525A8: add   r6, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    // 7F0525AC: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

    ctx->pc = 0x7F0525B0u;
    // 7F0525B0: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F0525B4: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

    ctx->pc = 0x7F0525B8u;
    // 7F0525B8: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F0525BCu;
    // 7F0525BC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F0525C0: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

    ctx->pc = 0x7F0525C4u;
    // 7F0525C4: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F0525C8u;
    // 7F0525C8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F0525CC: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

    ctx->pc = 0x7F0525D0u;
    // 7F0525D0: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F0525D4: bc    16, 0, 0x7F0525A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0525A8u;
                return;
            }
            goto label_7F0525A8;
        }
    }

    ctx->pc = 0x7F0525D8u;
}

static void loop_7F0526D4(CPUState* ctx) {
label_7F0526D4:
    ctx->downcount -= 12;
    // 7F0526D4: add   r6, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    // 7F0526D8: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

    ctx->pc = 0x7F0526DCu;
    // 7F0526DC: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F0526E0: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

    ctx->pc = 0x7F0526E4u;
    // 7F0526E4: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F0526E8u;
    // 7F0526E8: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F0526EC: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

    ctx->pc = 0x7F0526F0u;
    // 7F0526F0: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F0526F4u;
    // 7F0526F4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F0526F8: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

    ctx->pc = 0x7F0526FCu;
    // 7F0526FC: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F052700: bc    16, 0, 0x7F0526D4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0526D4u;
                return;
            }
            goto label_7F0526D4;
        }
    }

    ctx->pc = 0x7F052704u;
}

static void loop_7F052738(CPUState* ctx) {
label_7F052738:
    ctx->downcount -= 12;
    // 7F052738: add   r6, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    // 7F05273C: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

    ctx->pc = 0x7F052740u;
    // 7F052740: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F052744: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

    ctx->pc = 0x7F052748u;
    // 7F052748: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F05274Cu;
    // 7F05274C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F052750: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

    ctx->pc = 0x7F052754u;
    // 7F052754: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F052758u;
    // 7F052758: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F05275C: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

    ctx->pc = 0x7F052760u;
    // 7F052760: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F052764: bc    16, 0, 0x7F052738
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F052738u;
                return;
            }
            goto label_7F052738;
        }
    }

    ctx->pc = 0x7F052768u;
}

static void loop_7F052F54(CPUState* ctx) {
label_7F052F54:
    ctx->downcount -= 4;
    // 7F052F54: addi    r0, r3, 96
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(96);

    // 7F052F58: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F052F5Cu;
    // 7F052F5C: stwx    r4, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 7F052F60: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    ctx->pc = 0x7F052F64u;
    // 7F052F64: lwz     r0, 348(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F052F68: cmpw    r5, r0
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

    // 7F052F6C: bc    12, 0, 0x7F052F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F052F54u;
                return;
            }
            goto label_7F052F54;
        }
    }

    ctx->pc = 0x7F052F70u;
}

static void loop_7F05366C(CPUState* ctx) {
label_7F05366C:
    ctx->downcount -= 7;
    // 7F05366C: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

    // 7F053670: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F053674u;
    // 7F053674: lwzx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053678u;
    // 7F053678: stw     r5, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F05367Cu;
    // 7F05367C: lwzx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053680u;
    // 7F053680: stw     r5, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F053684: bc    16, 0, 0x7F05366C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F05366Cu;
                return;
            }
            goto label_7F05366C;
        }
    }

    ctx->pc = 0x7F053688u;
}

static void loop_7F053DFC(CPUState* ctx) {
label_7F053DFC:
    ctx->downcount -= 19;
    // 7F053DFC: addi    r7, r4, 32
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(32);

    ctx->pc = 0x7F053E00u;
    // 7F053E00: lwz     r6, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053E04u;
    // 7F053E04: lwzx    r5, r31, r7
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[7];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 7F053E08: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    ctx->pc = 0x7F053E0Cu;
    // 7F053E0C: lwz     r3, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053E10u;
    // 7F053E10: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053E14u;
    // 7F053E14: lwz     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053E18u;
    // 7F053E18: stw     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F053E1Cu;
    // 7F053E1C: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F053E20u;
    // 7F053E20: lwz     r3, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053E24u;
    // 7F053E24: lwz     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053E28u;
    // 7F053E28: stw     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F053E2Cu;
    // 7F053E2C: stw     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F053E30u;
    // 7F053E30: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053E34u;
    // 7F053E34: lwzx    r3, r31, r7
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[7];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053E38u;
    // 7F053E38: lha     r0, 42(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(42);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    ctx->pc = 0x7F053E3Cu;
    // 7F053E3C: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053E40u;
    // 7F053E40: sth     r0, 42(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

    // 7F053E44: bc    16, 0, 0x7F053DFC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053DFCu;
                return;
            }
            goto label_7F053DFC;
        }
    }

    ctx->pc = 0x7F053E48u;
}

static void loop_7F053F04(CPUState* ctx) {
label_7F053F04:
    ctx->downcount -= 14;
    // 7F053F04: addi    r0, r8, 32
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(32);

    ctx->pc = 0x7F053F08u;
    // 7F053F08: lwz     r5, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053F0Cu;
    // 7F053F0C: lwzx    r4, r9, r0
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 7F053F10: addi    r8, r8, 4
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(4);

    ctx->pc = 0x7F053F14u;
    // 7F053F14: lwz     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053F18u;
    // 7F053F18: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053F1Cu;
    // 7F053F1C: lwz     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053F20u;
    // 7F053F20: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F053F24u;
    // 7F053F24: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F053F28u;
    // 7F053F28: lwz     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053F2Cu;
    // 7F053F2C: lwz     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053F30u;
    // 7F053F30: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F053F34u;
    // 7F053F34: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F053F38: bc    16, 0, 0x7F053F04
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053F04u;
                return;
            }
            goto label_7F053F04;
        }
    }

    ctx->pc = 0x7F053F3Cu;
}

static void loop_7F053F8C(CPUState* ctx) {
label_7F053F8C:
    ctx->downcount -= 10;
    // 7F053F8C: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

    ctx->pc = 0x7F053F90u;
    // 7F053F90: lwz     r6, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053F94u;
    // 7F053F94: lwzx    r5, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 7F053F98: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F053F9Cu;
    // 7F053F9C: lwz     r4, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053FA0u;
    // 7F053FA0: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053FA4u;
    // 7F053FA4: lwz     r0, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053FA8u;
    // 7F053FA8: stw     r4, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F053FACu;
    // 7F053FAC: stw     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F053FB0: bc    16, 0, 0x7F053F8C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053F8Cu;
                return;
            }
            goto label_7F053F8C;
        }
    }

    ctx->pc = 0x7F053FB4u;
}

static void loop_7F053FEC(CPUState* ctx) {
label_7F053FEC:
    ctx->downcount -= 14;
    // 7F053FEC: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

    ctx->pc = 0x7F053FF0u;
    // 7F053FF0: lwz     r6, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F053FF4u;
    // 7F053FF4: lwzx    r5, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 7F053FF8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F053FFCu;
    // 7F053FFC: lwz     r4, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F054000u;
    // 7F054000: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F054004u;
    // 7F054004: lwz     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F054008u;
    // 7F054008: stw     r4, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F05400Cu;
    // 7F05400C: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F054010u;
    // 7F054010: lwz     r4, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F054014u;
    // 7F054014: lwz     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F054018u;
    // 7F054018: stw     r4, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F05401Cu;
    // 7F05401C: stw     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F054020: bc    16, 0, 0x7F053FEC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053FECu;
                return;
            }
            goto label_7F053FEC;
        }
    }

    ctx->pc = 0x7F054024u;
}

void func_7F0500EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F0500ECu: goto label_7F0500EC;
    case 0x7F0500F0u: goto label_7F0500F0;
    case 0x7F0500F4u: goto label_7F0500F4;
    case 0x7F0500F8u: goto label_7F0500F8;
    case 0x7F0500FCu: goto label_7F0500FC;
    case 0x7F050100u: goto label_7F050100;
    case 0x7F050104u: goto label_7F050104;
    case 0x7F050108u: goto label_7F050108;
    case 0x7F05010Cu: goto label_7F05010C;
    case 0x7F050110u: goto label_7F050110;
    case 0x7F050114u: goto label_7F050114;
    case 0x7F050118u: goto label_7F050118;
    case 0x7F05011Cu: goto label_7F05011C;
    case 0x7F050120u: goto label_7F050120;
    case 0x7F050124u: goto label_7F050124;
    case 0x7F050128u: goto label_7F050128;
    case 0x7F05012Cu: goto label_7F05012C;
    case 0x7F050130u: goto label_7F050130;
    case 0x7F050134u: goto label_7F050134;
    case 0x7F050138u: goto label_7F050138;
    case 0x7F05013Cu: goto label_7F05013C;
    case 0x7F050140u: goto label_7F050140;
    case 0x7F050144u: goto label_7F050144;
    case 0x7F050148u: goto label_7F050148;
    case 0x7F05014Cu: goto label_7F05014C;
    case 0x7F050150u: goto label_7F050150;
    case 0x7F050154u: goto label_7F050154;
    case 0x7F050158u: goto label_7F050158;
    case 0x7F05015Cu: goto label_7F05015C;
    case 0x7F050160u: goto label_7F050160;
    case 0x7F050164u: goto label_7F050164;
    case 0x7F050168u: goto label_7F050168;
    case 0x7F05016Cu: goto label_7F05016C;
    case 0x7F050170u: goto label_7F050170;
    case 0x7F050174u: goto label_7F050174;
    case 0x7F050178u: goto label_7F050178;
    case 0x7F05017Cu: goto label_7F05017C;
    case 0x7F050180u: goto label_7F050180;
    case 0x7F050184u: goto label_7F050184;
    case 0x7F050188u: goto label_7F050188;
    case 0x7F05018Cu: goto label_7F05018C;
    case 0x7F050190u: goto label_7F050190;
    case 0x7F050194u: goto label_7F050194;
    case 0x7F050198u: goto label_7F050198;
    case 0x7F05019Cu: goto label_7F05019C;
    case 0x7F0501A0u: goto label_7F0501A0;
    case 0x7F0501A4u: goto label_7F0501A4;
    case 0x7F0501A8u: goto label_7F0501A8;
    case 0x7F0501ACu: goto label_7F0501AC;
    case 0x7F0501B0u: goto label_7F0501B0;
    case 0x7F0501B4u: goto label_7F0501B4;
    case 0x7F0501B8u: goto label_7F0501B8;
    case 0x7F0501BCu: goto label_7F0501BC;
    case 0x7F0501C0u: goto label_7F0501C0;
    case 0x7F0501C4u: goto label_7F0501C4;
    case 0x7F0501C8u: goto label_7F0501C8;
    case 0x7F0501CCu: goto label_7F0501CC;
    case 0x7F0501D0u: goto label_7F0501D0;
    case 0x7F0501D4u: goto label_7F0501D4;
    case 0x7F0501D8u: goto label_7F0501D8;
    case 0x7F0501DCu: goto label_7F0501DC;
    case 0x7F0501E0u: goto label_7F0501E0;
    case 0x7F0501E4u: goto label_7F0501E4;
    case 0x7F0501E8u: goto label_7F0501E8;
    case 0x7F0501ECu: goto label_7F0501EC;
    case 0x7F0501F0u: goto label_7F0501F0;
    case 0x7F0501F4u: goto label_7F0501F4;
    case 0x7F0501F8u: goto label_7F0501F8;
    case 0x7F0501FCu: goto label_7F0501FC;
    case 0x7F050200u: goto label_7F050200;
    case 0x7F050204u: goto label_7F050204;
    case 0x7F050208u: goto label_7F050208;
    case 0x7F05020Cu: goto label_7F05020C;
    case 0x7F050210u: goto label_7F050210;
    case 0x7F050214u: goto label_7F050214;
    case 0x7F050218u: goto label_7F050218;
    case 0x7F05021Cu: goto label_7F05021C;
    case 0x7F050220u: goto label_7F050220;
    case 0x7F050224u: goto label_7F050224;
    case 0x7F050228u: goto label_7F050228;
    case 0x7F05022Cu: goto label_7F05022C;
    case 0x7F050230u: goto label_7F050230;
    case 0x7F050234u: goto label_7F050234;
    case 0x7F050238u: goto label_7F050238;
    case 0x7F05023Cu: goto label_7F05023C;
    case 0x7F050240u: goto label_7F050240;
    case 0x7F050244u: goto label_7F050244;
    case 0x7F050248u: goto label_7F050248;
    case 0x7F05024Cu: goto label_7F05024C;
    case 0x7F050250u: goto label_7F050250;
    case 0x7F050254u: goto label_7F050254;
    case 0x7F050258u: goto label_7F050258;
    case 0x7F05025Cu: goto label_7F05025C;
    case 0x7F050260u: goto label_7F050260;
    case 0x7F050264u: goto label_7F050264;
    case 0x7F050268u: goto label_7F050268;
    case 0x7F05026Cu: goto label_7F05026C;
    case 0x7F050270u: goto label_7F050270;
    case 0x7F050274u: goto label_7F050274;
    case 0x7F050278u: goto label_7F050278;
    case 0x7F05027Cu: goto label_7F05027C;
    case 0x7F050280u: goto label_7F050280;
    case 0x7F050284u: goto label_7F050284;
    case 0x7F050288u: goto label_7F050288;
    case 0x7F05028Cu: goto label_7F05028C;
    case 0x7F050290u: goto label_7F050290;
    case 0x7F050294u: goto label_7F050294;
    case 0x7F050298u: goto label_7F050298;
    case 0x7F05029Cu: goto label_7F05029C;
    case 0x7F0502A0u: goto label_7F0502A0;
    case 0x7F0502A4u: goto label_7F0502A4;
    case 0x7F0502A8u: goto label_7F0502A8;
    case 0x7F0502ACu: goto label_7F0502AC;
    case 0x7F0502B0u: goto label_7F0502B0;
    case 0x7F0502B4u: goto label_7F0502B4;
    case 0x7F0502B8u: goto label_7F0502B8;
    case 0x7F0502BCu: goto label_7F0502BC;
    case 0x7F0502C0u: goto label_7F0502C0;
    case 0x7F0502C4u: goto label_7F0502C4;
    case 0x7F0502C8u: goto label_7F0502C8;
    case 0x7F0502CCu: goto label_7F0502CC;
    case 0x7F0502D0u: goto label_7F0502D0;
    case 0x7F0502D4u: goto label_7F0502D4;
    case 0x7F0502D8u: goto label_7F0502D8;
    case 0x7F0502DCu: goto label_7F0502DC;
    case 0x7F0502E0u: goto label_7F0502E0;
    case 0x7F0502E4u: goto label_7F0502E4;
    case 0x7F0502E8u: goto label_7F0502E8;
    case 0x7F0502ECu: goto label_7F0502EC;
    case 0x7F0502F0u: goto label_7F0502F0;
    case 0x7F0502F4u: goto label_7F0502F4;
    case 0x7F0502F8u: goto label_7F0502F8;
    case 0x7F0502FCu: goto label_7F0502FC;
    case 0x7F050300u: goto label_7F050300;
    case 0x7F050304u: goto label_7F050304;
    case 0x7F050308u: goto label_7F050308;
    case 0x7F05030Cu: goto label_7F05030C;
    case 0x7F050310u: goto label_7F050310;
    case 0x7F050314u: goto label_7F050314;
    case 0x7F050318u: goto label_7F050318;
    case 0x7F05031Cu: goto label_7F05031C;
    case 0x7F050320u: goto label_7F050320;
    case 0x7F050324u: goto label_7F050324;
    case 0x7F050328u: goto label_7F050328;
    case 0x7F05032Cu: goto label_7F05032C;
    case 0x7F050330u: goto label_7F050330;
    case 0x7F050334u: goto label_7F050334;
    case 0x7F050338u: goto label_7F050338;
    case 0x7F05033Cu: goto label_7F05033C;
    case 0x7F050340u: goto label_7F050340;
    case 0x7F050344u: goto label_7F050344;
    case 0x7F050348u: goto label_7F050348;
    case 0x7F05034Cu: goto label_7F05034C;
    case 0x7F050350u: goto label_7F050350;
    case 0x7F050354u: goto label_7F050354;
    case 0x7F050358u: goto label_7F050358;
    case 0x7F05035Cu: goto label_7F05035C;
    case 0x7F050360u: goto label_7F050360;
    case 0x7F050364u: goto label_7F050364;
    case 0x7F050368u: goto label_7F050368;
    case 0x7F05036Cu: goto label_7F05036C;
    case 0x7F050370u: goto label_7F050370;
    case 0x7F050374u: goto label_7F050374;
    case 0x7F050378u: goto label_7F050378;
    case 0x7F05037Cu: goto label_7F05037C;
    case 0x7F050380u: goto label_7F050380;
    case 0x7F050384u: goto label_7F050384;
    case 0x7F050388u: goto label_7F050388;
    case 0x7F05038Cu: goto label_7F05038C;
    case 0x7F050390u: goto label_7F050390;
    case 0x7F050394u: goto label_7F050394;
    case 0x7F050398u: goto label_7F050398;
    case 0x7F05039Cu: goto label_7F05039C;
    case 0x7F0503A0u: goto label_7F0503A0;
    case 0x7F0503A4u: goto label_7F0503A4;
    case 0x7F0503A8u: goto label_7F0503A8;
    case 0x7F0503ACu: goto label_7F0503AC;
    case 0x7F0503B0u: goto label_7F0503B0;
    case 0x7F0503B4u: goto label_7F0503B4;
    case 0x7F0503B8u: goto label_7F0503B8;
    case 0x7F0503BCu: goto label_7F0503BC;
    case 0x7F0503C0u: goto label_7F0503C0;
    case 0x7F0503C4u: goto label_7F0503C4;
    case 0x7F0503C8u: goto label_7F0503C8;
    case 0x7F0503CCu: goto label_7F0503CC;
    case 0x7F0503D0u: goto label_7F0503D0;
    case 0x7F0503D4u: goto label_7F0503D4;
    case 0x7F0503D8u: goto label_7F0503D8;
    case 0x7F0503DCu: goto label_7F0503DC;
    case 0x7F0503E0u: goto label_7F0503E0;
    case 0x7F0503E4u: goto label_7F0503E4;
    case 0x7F0503E8u: goto label_7F0503E8;
    case 0x7F0503ECu: goto label_7F0503EC;
    case 0x7F0503F0u: goto label_7F0503F0;
    case 0x7F0503F4u: goto label_7F0503F4;
    case 0x7F0503F8u: goto label_7F0503F8;
    case 0x7F0503FCu: goto label_7F0503FC;
    case 0x7F050400u: goto label_7F050400;
    case 0x7F050404u: goto label_7F050404;
    case 0x7F050408u: goto label_7F050408;
    case 0x7F05040Cu: goto label_7F05040C;
    case 0x7F050410u: goto label_7F050410;
    case 0x7F050414u: goto label_7F050414;
    case 0x7F050418u: goto label_7F050418;
    case 0x7F05041Cu: goto label_7F05041C;
    case 0x7F050420u: goto label_7F050420;
    case 0x7F050424u: goto label_7F050424;
    case 0x7F050428u: goto label_7F050428;
    case 0x7F05042Cu: goto label_7F05042C;
    case 0x7F050430u: goto label_7F050430;
    case 0x7F050434u: goto label_7F050434;
    case 0x7F050438u: goto label_7F050438;
    case 0x7F05043Cu: goto label_7F05043C;
    case 0x7F050440u: goto label_7F050440;
    case 0x7F050444u: goto label_7F050444;
    case 0x7F050448u: goto label_7F050448;
    case 0x7F05044Cu: goto label_7F05044C;
    case 0x7F050450u: goto label_7F050450;
    case 0x7F050454u: goto label_7F050454;
    case 0x7F050458u: goto label_7F050458;
    case 0x7F05045Cu: goto label_7F05045C;
    case 0x7F050460u: goto label_7F050460;
    case 0x7F050464u: goto label_7F050464;
    case 0x7F050468u: goto label_7F050468;
    case 0x7F05046Cu: goto label_7F05046C;
    case 0x7F050470u: goto label_7F050470;
    case 0x7F050474u: goto label_7F050474;
    case 0x7F050478u: goto label_7F050478;
    case 0x7F05047Cu: goto label_7F05047C;
    case 0x7F050480u: goto label_7F050480;
    case 0x7F050484u: goto label_7F050484;
    case 0x7F050488u: goto label_7F050488;
    case 0x7F05048Cu: goto label_7F05048C;
    case 0x7F050490u: goto label_7F050490;
    case 0x7F050494u: goto label_7F050494;
    case 0x7F050498u: goto label_7F050498;
    case 0x7F05049Cu: goto label_7F05049C;
    case 0x7F0504A0u: goto label_7F0504A0;
    case 0x7F0504A4u: goto label_7F0504A4;
    case 0x7F0504A8u: goto label_7F0504A8;
    case 0x7F0504ACu: goto label_7F0504AC;
    case 0x7F0504B0u: goto label_7F0504B0;
    case 0x7F0504B4u: goto label_7F0504B4;
    case 0x7F0504B8u: goto label_7F0504B8;
    case 0x7F0504BCu: goto label_7F0504BC;
    case 0x7F0504C0u: goto label_7F0504C0;
    case 0x7F0504C4u: goto label_7F0504C4;
    case 0x7F0504C8u: goto label_7F0504C8;
    case 0x7F0504CCu: goto label_7F0504CC;
    case 0x7F0504D0u: goto label_7F0504D0;
    case 0x7F0504D4u: goto label_7F0504D4;
    case 0x7F0504D8u: goto label_7F0504D8;
    case 0x7F0504DCu: goto label_7F0504DC;
    case 0x7F0504E0u: goto label_7F0504E0;
    case 0x7F0504E4u: goto label_7F0504E4;
    case 0x7F0504E8u: goto label_7F0504E8;
    case 0x7F0504ECu: goto label_7F0504EC;
    case 0x7F0504F0u: goto label_7F0504F0;
    case 0x7F0504F4u: goto label_7F0504F4;
    case 0x7F0504F8u: goto label_7F0504F8;
    case 0x7F0504FCu: goto label_7F0504FC;
    case 0x7F050500u: goto label_7F050500;
    case 0x7F050504u: goto label_7F050504;
    case 0x7F050508u: goto label_7F050508;
    case 0x7F05050Cu: goto label_7F05050C;
    case 0x7F050510u: goto label_7F050510;
    case 0x7F050514u: goto label_7F050514;
    case 0x7F050518u: goto label_7F050518;
    case 0x7F05051Cu: goto label_7F05051C;
    case 0x7F050520u: goto label_7F050520;
    case 0x7F050524u: goto label_7F050524;
    case 0x7F050528u: goto label_7F050528;
    case 0x7F05052Cu: goto label_7F05052C;
    case 0x7F050530u: goto label_7F050530;
    case 0x7F050534u: goto label_7F050534;
    case 0x7F050538u: goto label_7F050538;
    case 0x7F05053Cu: goto label_7F05053C;
    case 0x7F050540u: goto label_7F050540;
    case 0x7F050544u: goto label_7F050544;
    case 0x7F050548u: goto label_7F050548;
    case 0x7F05054Cu: goto label_7F05054C;
    case 0x7F050550u: goto label_7F050550;
    case 0x7F050554u: goto label_7F050554;
    case 0x7F050558u: goto label_7F050558;
    case 0x7F05055Cu: goto label_7F05055C;
    case 0x7F050560u: goto label_7F050560;
    case 0x7F050564u: goto label_7F050564;
    case 0x7F050568u: goto label_7F050568;
    case 0x7F05056Cu: goto label_7F05056C;
    case 0x7F050570u: goto label_7F050570;
    case 0x7F050574u: goto label_7F050574;
    case 0x7F050578u: goto label_7F050578;
    case 0x7F05057Cu: goto label_7F05057C;
    case 0x7F050580u: goto label_7F050580;
    case 0x7F050584u: goto label_7F050584;
    case 0x7F050588u: goto label_7F050588;
    case 0x7F05058Cu: goto label_7F05058C;
    case 0x7F050590u: goto label_7F050590;
    case 0x7F050594u: goto label_7F050594;
    case 0x7F050598u: goto label_7F050598;
    case 0x7F05059Cu: goto label_7F05059C;
    case 0x7F0505A0u: goto label_7F0505A0;
    case 0x7F0505A4u: goto label_7F0505A4;
    case 0x7F0505A8u: goto label_7F0505A8;
    case 0x7F0505ACu: goto label_7F0505AC;
    case 0x7F0505B0u: goto label_7F0505B0;
    case 0x7F0505B4u: goto label_7F0505B4;
    case 0x7F0505B8u: goto label_7F0505B8;
    case 0x7F0505BCu: goto label_7F0505BC;
    case 0x7F0505C0u: goto label_7F0505C0;
    case 0x7F0505C4u: goto label_7F0505C4;
    case 0x7F0505C8u: goto label_7F0505C8;
    case 0x7F0505CCu: goto label_7F0505CC;
    case 0x7F0505D0u: goto label_7F0505D0;
    case 0x7F0505D4u: goto label_7F0505D4;
    case 0x7F0505D8u: goto label_7F0505D8;
    case 0x7F0505DCu: goto label_7F0505DC;
    case 0x7F0505E0u: goto label_7F0505E0;
    case 0x7F0505E4u: goto label_7F0505E4;
    case 0x7F0505E8u: goto label_7F0505E8;
    case 0x7F0505ECu: goto label_7F0505EC;
    case 0x7F0505F0u: goto label_7F0505F0;
    case 0x7F0505F4u: goto label_7F0505F4;
    case 0x7F0505F8u: goto label_7F0505F8;
    case 0x7F0505FCu: goto label_7F0505FC;
    case 0x7F050600u: goto label_7F050600;
    case 0x7F050604u: goto label_7F050604;
    case 0x7F050608u: goto label_7F050608;
    case 0x7F05060Cu: goto label_7F05060C;
    case 0x7F050610u: goto label_7F050610;
    case 0x7F050614u: goto label_7F050614;
    case 0x7F050618u: goto label_7F050618;
    case 0x7F05061Cu: goto label_7F05061C;
    case 0x7F050620u: goto label_7F050620;
    case 0x7F050624u: goto label_7F050624;
    case 0x7F050628u: goto label_7F050628;
    case 0x7F05062Cu: goto label_7F05062C;
    case 0x7F050630u: goto label_7F050630;
    case 0x7F050634u: goto label_7F050634;
    case 0x7F050638u: goto label_7F050638;
    case 0x7F05063Cu: goto label_7F05063C;
    case 0x7F050640u: goto label_7F050640;
    case 0x7F050644u: goto label_7F050644;
    case 0x7F050648u: goto label_7F050648;
    case 0x7F05064Cu: goto label_7F05064C;
    case 0x7F050650u: goto label_7F050650;
    case 0x7F050654u: goto label_7F050654;
    case 0x7F050658u: goto label_7F050658;
    case 0x7F05065Cu: goto label_7F05065C;
    case 0x7F050660u: goto label_7F050660;
    case 0x7F050664u: goto label_7F050664;
    case 0x7F050668u: goto label_7F050668;
    case 0x7F05066Cu: goto label_7F05066C;
    case 0x7F050670u: goto label_7F050670;
    case 0x7F050674u: goto label_7F050674;
    case 0x7F050678u: goto label_7F050678;
    case 0x7F05067Cu: goto label_7F05067C;
    case 0x7F050680u: goto label_7F050680;
    case 0x7F050684u: goto label_7F050684;
    case 0x7F050688u: goto label_7F050688;
    case 0x7F05068Cu: goto label_7F05068C;
    case 0x7F050690u: goto label_7F050690;
    case 0x7F050694u: goto label_7F050694;
    case 0x7F050698u: goto label_7F050698;
    case 0x7F05069Cu: goto label_7F05069C;
    case 0x7F0506A0u: goto label_7F0506A0;
    case 0x7F0506A4u: goto label_7F0506A4;
    case 0x7F0506A8u: goto label_7F0506A8;
    case 0x7F0506ACu: goto label_7F0506AC;
    case 0x7F0506B0u: goto label_7F0506B0;
    case 0x7F0506B4u: goto label_7F0506B4;
    case 0x7F0506B8u: goto label_7F0506B8;
    case 0x7F0506BCu: goto label_7F0506BC;
    case 0x7F0506C0u: goto label_7F0506C0;
    case 0x7F0506C4u: goto label_7F0506C4;
    case 0x7F0506C8u: goto label_7F0506C8;
    case 0x7F0506CCu: goto label_7F0506CC;
    case 0x7F0506D0u: goto label_7F0506D0;
    case 0x7F0506D4u: goto label_7F0506D4;
    case 0x7F0506D8u: goto label_7F0506D8;
    case 0x7F0506DCu: goto label_7F0506DC;
    case 0x7F0506E0u: goto label_7F0506E0;
    case 0x7F0506E4u: goto label_7F0506E4;
    case 0x7F0506E8u: goto label_7F0506E8;
    case 0x7F0506ECu: goto label_7F0506EC;
    case 0x7F0506F0u: goto label_7F0506F0;
    case 0x7F0506F4u: goto label_7F0506F4;
    case 0x7F0506F8u: goto label_7F0506F8;
    case 0x7F0506FCu: goto label_7F0506FC;
    case 0x7F050700u: goto label_7F050700;
    case 0x7F050704u: goto label_7F050704;
    case 0x7F050708u: goto label_7F050708;
    case 0x7F05070Cu: goto label_7F05070C;
    case 0x7F050710u: goto label_7F050710;
    case 0x7F050714u: goto label_7F050714;
    case 0x7F050718u: goto label_7F050718;
    case 0x7F05071Cu: goto label_7F05071C;
    case 0x7F050720u: goto label_7F050720;
    case 0x7F050724u: goto label_7F050724;
    case 0x7F050728u: goto label_7F050728;
    case 0x7F05072Cu: goto label_7F05072C;
    case 0x7F050730u: goto label_7F050730;
    case 0x7F050734u: goto label_7F050734;
    case 0x7F050738u: goto label_7F050738;
    case 0x7F05073Cu: goto label_7F05073C;
    case 0x7F050740u: goto label_7F050740;
    case 0x7F050744u: goto label_7F050744;
    case 0x7F050748u: goto label_7F050748;
    case 0x7F05074Cu: goto label_7F05074C;
    case 0x7F050750u: goto label_7F050750;
    case 0x7F050754u: goto label_7F050754;
    case 0x7F050758u: goto label_7F050758;
    case 0x7F05075Cu: goto label_7F05075C;
    case 0x7F050760u: goto label_7F050760;
    case 0x7F050764u: goto label_7F050764;
    case 0x7F050768u: goto label_7F050768;
    case 0x7F05076Cu: goto label_7F05076C;
    case 0x7F050770u: goto label_7F050770;
    case 0x7F050774u: goto label_7F050774;
    case 0x7F050778u: goto label_7F050778;
    case 0x7F05077Cu: goto label_7F05077C;
    case 0x7F050780u: goto label_7F050780;
    case 0x7F050784u: goto label_7F050784;
    case 0x7F050788u: goto label_7F050788;
    case 0x7F05078Cu: goto label_7F05078C;
    case 0x7F050790u: goto label_7F050790;
    case 0x7F050794u: goto label_7F050794;
    case 0x7F050798u: goto label_7F050798;
    case 0x7F05079Cu: goto label_7F05079C;
    case 0x7F0507A0u: goto label_7F0507A0;
    case 0x7F0507A4u: goto label_7F0507A4;
    case 0x7F0507A8u: goto label_7F0507A8;
    case 0x7F0507ACu: goto label_7F0507AC;
    case 0x7F0507B0u: goto label_7F0507B0;
    case 0x7F0507B4u: goto label_7F0507B4;
    case 0x7F0507B8u: goto label_7F0507B8;
    case 0x7F0507BCu: goto label_7F0507BC;
    case 0x7F0507C0u: goto label_7F0507C0;
    case 0x7F0507C4u: goto label_7F0507C4;
    case 0x7F0507C8u: goto label_7F0507C8;
    case 0x7F0507CCu: goto label_7F0507CC;
    case 0x7F0507D0u: goto label_7F0507D0;
    case 0x7F0507D4u: goto label_7F0507D4;
    case 0x7F0507D8u: goto label_7F0507D8;
    case 0x7F0507DCu: goto label_7F0507DC;
    case 0x7F0507E0u: goto label_7F0507E0;
    case 0x7F0507E4u: goto label_7F0507E4;
    case 0x7F0507E8u: goto label_7F0507E8;
    case 0x7F0507ECu: goto label_7F0507EC;
    case 0x7F0507F0u: goto label_7F0507F0;
    case 0x7F0507F4u: goto label_7F0507F4;
    case 0x7F0507F8u: goto label_7F0507F8;
    case 0x7F0507FCu: goto label_7F0507FC;
    case 0x7F050800u: goto label_7F050800;
    case 0x7F050804u: goto label_7F050804;
    case 0x7F050808u: goto label_7F050808;
    case 0x7F05080Cu: goto label_7F05080C;
    case 0x7F050810u: goto label_7F050810;
    case 0x7F050814u: goto label_7F050814;
    case 0x7F050818u: goto label_7F050818;
    case 0x7F05081Cu: goto label_7F05081C;
    case 0x7F050820u: goto label_7F050820;
    case 0x7F050824u: goto label_7F050824;
    case 0x7F050828u: goto label_7F050828;
    case 0x7F05082Cu: goto label_7F05082C;
    case 0x7F050830u: goto label_7F050830;
    case 0x7F050834u: goto label_7F050834;
    case 0x7F050838u: goto label_7F050838;
    case 0x7F05083Cu: goto label_7F05083C;
    case 0x7F050840u: goto label_7F050840;
    case 0x7F050844u: goto label_7F050844;
    case 0x7F050848u: goto label_7F050848;
    case 0x7F05084Cu: goto label_7F05084C;
    case 0x7F050850u: goto label_7F050850;
    case 0x7F050854u: goto label_7F050854;
    case 0x7F050858u: goto label_7F050858;
    case 0x7F05085Cu: goto label_7F05085C;
    case 0x7F050860u: goto label_7F050860;
    case 0x7F050864u: goto label_7F050864;
    case 0x7F050868u: goto label_7F050868;
    case 0x7F05086Cu: goto label_7F05086C;
    case 0x7F050870u: goto label_7F050870;
    case 0x7F050874u: goto label_7F050874;
    case 0x7F050878u: goto label_7F050878;
    case 0x7F05087Cu: goto label_7F05087C;
    case 0x7F050880u: goto label_7F050880;
    case 0x7F050884u: goto label_7F050884;
    case 0x7F050888u: goto label_7F050888;
    case 0x7F05088Cu: goto label_7F05088C;
    case 0x7F050890u: goto label_7F050890;
    case 0x7F050894u: goto label_7F050894;
    case 0x7F050898u: goto label_7F050898;
    case 0x7F05089Cu: goto label_7F05089C;
    case 0x7F0508A0u: goto label_7F0508A0;
    case 0x7F0508A4u: goto label_7F0508A4;
    case 0x7F0508A8u: goto label_7F0508A8;
    case 0x7F0508ACu: goto label_7F0508AC;
    case 0x7F0508B0u: goto label_7F0508B0;
    case 0x7F0508B4u: goto label_7F0508B4;
    case 0x7F0508B8u: goto label_7F0508B8;
    case 0x7F0508BCu: goto label_7F0508BC;
    case 0x7F0508C0u: goto label_7F0508C0;
    case 0x7F0508C4u: goto label_7F0508C4;
    case 0x7F0508C8u: goto label_7F0508C8;
    case 0x7F0508CCu: goto label_7F0508CC;
    case 0x7F0508D0u: goto label_7F0508D0;
    case 0x7F0508D4u: goto label_7F0508D4;
    case 0x7F0508D8u: goto label_7F0508D8;
    case 0x7F0508DCu: goto label_7F0508DC;
    case 0x7F0508E0u: goto label_7F0508E0;
    case 0x7F0508E4u: goto label_7F0508E4;
    case 0x7F0508E8u: goto label_7F0508E8;
    case 0x7F0508ECu: goto label_7F0508EC;
    case 0x7F0508F0u: goto label_7F0508F0;
    case 0x7F0508F4u: goto label_7F0508F4;
    case 0x7F0508F8u: goto label_7F0508F8;
    case 0x7F0508FCu: goto label_7F0508FC;
    case 0x7F050900u: goto label_7F050900;
    case 0x7F050904u: goto label_7F050904;
    case 0x7F050908u: goto label_7F050908;
    case 0x7F05090Cu: goto label_7F05090C;
    case 0x7F050910u: goto label_7F050910;
    case 0x7F050914u: goto label_7F050914;
    case 0x7F050918u: goto label_7F050918;
    case 0x7F05091Cu: goto label_7F05091C;
    case 0x7F050920u: goto label_7F050920;
    case 0x7F050924u: goto label_7F050924;
    case 0x7F050928u: goto label_7F050928;
    case 0x7F05092Cu: goto label_7F05092C;
    case 0x7F050930u: goto label_7F050930;
    case 0x7F050934u: goto label_7F050934;
    case 0x7F050938u: goto label_7F050938;
    case 0x7F05093Cu: goto label_7F05093C;
    case 0x7F050940u: goto label_7F050940;
    case 0x7F050944u: goto label_7F050944;
    case 0x7F050948u: goto label_7F050948;
    case 0x7F05094Cu: goto label_7F05094C;
    case 0x7F050950u: goto label_7F050950;
    case 0x7F050954u: goto label_7F050954;
    case 0x7F050958u: goto label_7F050958;
    case 0x7F05095Cu: goto label_7F05095C;
    case 0x7F050960u: goto label_7F050960;
    case 0x7F050964u: goto label_7F050964;
    case 0x7F050968u: goto label_7F050968;
    case 0x7F05096Cu: goto label_7F05096C;
    case 0x7F050970u: goto label_7F050970;
    case 0x7F050974u: goto label_7F050974;
    case 0x7F050978u: goto label_7F050978;
    case 0x7F05097Cu: goto label_7F05097C;
    case 0x7F050980u: goto label_7F050980;
    case 0x7F050984u: goto label_7F050984;
    case 0x7F050988u: goto label_7F050988;
    case 0x7F05098Cu: goto label_7F05098C;
    case 0x7F050990u: goto label_7F050990;
    case 0x7F050994u: goto label_7F050994;
    case 0x7F050998u: goto label_7F050998;
    case 0x7F05099Cu: goto label_7F05099C;
    case 0x7F0509A0u: goto label_7F0509A0;
    case 0x7F0509A4u: goto label_7F0509A4;
    case 0x7F0509A8u: goto label_7F0509A8;
    case 0x7F0509ACu: goto label_7F0509AC;
    case 0x7F0509B0u: goto label_7F0509B0;
    case 0x7F0509B4u: goto label_7F0509B4;
    case 0x7F0509B8u: goto label_7F0509B8;
    case 0x7F0509BCu: goto label_7F0509BC;
    case 0x7F0509C0u: goto label_7F0509C0;
    case 0x7F0509C4u: goto label_7F0509C4;
    case 0x7F0509C8u: goto label_7F0509C8;
    case 0x7F0509CCu: goto label_7F0509CC;
    case 0x7F0509D0u: goto label_7F0509D0;
    case 0x7F0509D4u: goto label_7F0509D4;
    case 0x7F0509D8u: goto label_7F0509D8;
    case 0x7F0509DCu: goto label_7F0509DC;
    case 0x7F0509E0u: goto label_7F0509E0;
    case 0x7F0509E4u: goto label_7F0509E4;
    case 0x7F0509E8u: goto label_7F0509E8;
    case 0x7F0509ECu: goto label_7F0509EC;
    case 0x7F0509F0u: goto label_7F0509F0;
    case 0x7F0509F4u: goto label_7F0509F4;
    case 0x7F0509F8u: goto label_7F0509F8;
    case 0x7F0509FCu: goto label_7F0509FC;
    case 0x7F050A00u: goto label_7F050A00;
    case 0x7F050A04u: goto label_7F050A04;
    case 0x7F050A08u: goto label_7F050A08;
    case 0x7F050A0Cu: goto label_7F050A0C;
    case 0x7F050A10u: goto label_7F050A10;
    case 0x7F050A14u: goto label_7F050A14;
    case 0x7F050A18u: goto label_7F050A18;
    case 0x7F050A1Cu: goto label_7F050A1C;
    case 0x7F050A20u: goto label_7F050A20;
    case 0x7F050A24u: goto label_7F050A24;
    case 0x7F050A28u: goto label_7F050A28;
    case 0x7F050A2Cu: goto label_7F050A2C;
    case 0x7F050A30u: goto label_7F050A30;
    case 0x7F050A34u: goto label_7F050A34;
    case 0x7F050A38u: goto label_7F050A38;
    case 0x7F050A3Cu: goto label_7F050A3C;
    case 0x7F050A40u: goto label_7F050A40;
    case 0x7F050A44u: goto label_7F050A44;
    case 0x7F050A48u: goto label_7F050A48;
    case 0x7F050A4Cu: goto label_7F050A4C;
    case 0x7F050A50u: goto label_7F050A50;
    case 0x7F050A54u: goto label_7F050A54;
    case 0x7F050A58u: goto label_7F050A58;
    case 0x7F050A5Cu: goto label_7F050A5C;
    case 0x7F050A60u: goto label_7F050A60;
    case 0x7F050A64u: goto label_7F050A64;
    case 0x7F050A68u: goto label_7F050A68;
    case 0x7F050A6Cu: goto label_7F050A6C;
    case 0x7F050A70u: goto label_7F050A70;
    case 0x7F050A74u: goto label_7F050A74;
    case 0x7F050A78u: goto label_7F050A78;
    case 0x7F050A7Cu: goto label_7F050A7C;
    case 0x7F050A80u: goto label_7F050A80;
    case 0x7F050A84u: goto label_7F050A84;
    case 0x7F050A88u: goto label_7F050A88;
    case 0x7F050A8Cu: goto label_7F050A8C;
    case 0x7F050A90u: goto label_7F050A90;
    case 0x7F050A94u: goto label_7F050A94;
    case 0x7F050A98u: goto label_7F050A98;
    case 0x7F050A9Cu: goto label_7F050A9C;
    case 0x7F050AA0u: goto label_7F050AA0;
    case 0x7F050AA4u: goto label_7F050AA4;
    case 0x7F050AA8u: goto label_7F050AA8;
    case 0x7F050AACu: goto label_7F050AAC;
    case 0x7F050AB0u: goto label_7F050AB0;
    case 0x7F050AB4u: goto label_7F050AB4;
    case 0x7F050AB8u: goto label_7F050AB8;
    case 0x7F050ABCu: goto label_7F050ABC;
    case 0x7F050AC0u: goto label_7F050AC0;
    case 0x7F050AC4u: goto label_7F050AC4;
    case 0x7F050AC8u: goto label_7F050AC8;
    case 0x7F050ACCu: goto label_7F050ACC;
    case 0x7F050AD0u: goto label_7F050AD0;
    case 0x7F050AD4u: goto label_7F050AD4;
    case 0x7F050AD8u: goto label_7F050AD8;
    case 0x7F050ADCu: goto label_7F050ADC;
    case 0x7F050AE0u: goto label_7F050AE0;
    case 0x7F050AE4u: goto label_7F050AE4;
    case 0x7F050AE8u: goto label_7F050AE8;
    case 0x7F050AECu: goto label_7F050AEC;
    case 0x7F050AF0u: goto label_7F050AF0;
    case 0x7F050AF4u: goto label_7F050AF4;
    case 0x7F050AF8u: goto label_7F050AF8;
    case 0x7F050AFCu: goto label_7F050AFC;
    case 0x7F050B00u: goto label_7F050B00;
    case 0x7F050B04u: goto label_7F050B04;
    case 0x7F050B08u: goto label_7F050B08;
    case 0x7F050B0Cu: goto label_7F050B0C;
    case 0x7F050B10u: goto label_7F050B10;
    case 0x7F050B14u: goto label_7F050B14;
    case 0x7F050B18u: goto label_7F050B18;
    case 0x7F050B1Cu: goto label_7F050B1C;
    case 0x7F050B20u: goto label_7F050B20;
    case 0x7F050B24u: goto label_7F050B24;
    case 0x7F050B28u: goto label_7F050B28;
    case 0x7F050B2Cu: goto label_7F050B2C;
    case 0x7F050B30u: goto label_7F050B30;
    case 0x7F050B34u: goto label_7F050B34;
    case 0x7F050B38u: goto label_7F050B38;
    case 0x7F050B3Cu: goto label_7F050B3C;
    case 0x7F050B40u: goto label_7F050B40;
    case 0x7F050B44u: goto label_7F050B44;
    case 0x7F050B48u: goto label_7F050B48;
    case 0x7F050B4Cu: goto label_7F050B4C;
    case 0x7F050B50u: goto label_7F050B50;
    case 0x7F050B54u: goto label_7F050B54;
    case 0x7F050B58u: goto label_7F050B58;
    case 0x7F050B5Cu: goto label_7F050B5C;
    case 0x7F050B60u: goto label_7F050B60;
    case 0x7F050B64u: goto label_7F050B64;
    case 0x7F050B68u: goto label_7F050B68;
    case 0x7F050B6Cu: goto label_7F050B6C;
    case 0x7F050B70u: goto label_7F050B70;
    case 0x7F050B74u: goto label_7F050B74;
    case 0x7F050B78u: goto label_7F050B78;
    case 0x7F050B7Cu: goto label_7F050B7C;
    case 0x7F050B80u: goto label_7F050B80;
    case 0x7F050B84u: goto label_7F050B84;
    case 0x7F050B88u: goto label_7F050B88;
    case 0x7F050B8Cu: goto label_7F050B8C;
    case 0x7F050B90u: goto label_7F050B90;
    case 0x7F050B94u: goto label_7F050B94;
    case 0x7F050B98u: goto label_7F050B98;
    case 0x7F050B9Cu: goto label_7F050B9C;
    case 0x7F050BA0u: goto label_7F050BA0;
    case 0x7F050BA4u: goto label_7F050BA4;
    case 0x7F050BA8u: goto label_7F050BA8;
    case 0x7F050BACu: goto label_7F050BAC;
    case 0x7F050BB0u: goto label_7F050BB0;
    case 0x7F050BB4u: goto label_7F050BB4;
    case 0x7F050BB8u: goto label_7F050BB8;
    case 0x7F050BBCu: goto label_7F050BBC;
    case 0x7F050BC0u: goto label_7F050BC0;
    case 0x7F050BC4u: goto label_7F050BC4;
    case 0x7F050BC8u: goto label_7F050BC8;
    case 0x7F050BCCu: goto label_7F050BCC;
    case 0x7F050BD0u: goto label_7F050BD0;
    case 0x7F050BD4u: goto label_7F050BD4;
    case 0x7F050BD8u: goto label_7F050BD8;
    case 0x7F050BDCu: goto label_7F050BDC;
    case 0x7F050BE0u: goto label_7F050BE0;
    case 0x7F050BE4u: goto label_7F050BE4;
    case 0x7F050BE8u: goto label_7F050BE8;
    case 0x7F050BECu: goto label_7F050BEC;
    case 0x7F050BF0u: goto label_7F050BF0;
    case 0x7F050BF4u: goto label_7F050BF4;
    case 0x7F050BF8u: goto label_7F050BF8;
    case 0x7F050BFCu: goto label_7F050BFC;
    case 0x7F050C00u: goto label_7F050C00;
    case 0x7F050C04u: goto label_7F050C04;
    case 0x7F050C08u: goto label_7F050C08;
    case 0x7F050C0Cu: goto label_7F050C0C;
    case 0x7F050C10u: goto label_7F050C10;
    case 0x7F050C14u: goto label_7F050C14;
    case 0x7F050C18u: goto label_7F050C18;
    case 0x7F050C1Cu: goto label_7F050C1C;
    case 0x7F050C20u: goto label_7F050C20;
    case 0x7F050C24u: goto label_7F050C24;
    case 0x7F050C28u: goto label_7F050C28;
    case 0x7F050C2Cu: goto label_7F050C2C;
    case 0x7F050C30u: goto label_7F050C30;
    case 0x7F050C34u: goto label_7F050C34;
    case 0x7F050C38u: goto label_7F050C38;
    case 0x7F050C3Cu: goto label_7F050C3C;
    case 0x7F050C40u: goto label_7F050C40;
    case 0x7F050C44u: goto label_7F050C44;
    case 0x7F050C48u: goto label_7F050C48;
    case 0x7F050C4Cu: goto label_7F050C4C;
    case 0x7F050C50u: goto label_7F050C50;
    case 0x7F050C54u: goto label_7F050C54;
    case 0x7F050C58u: goto label_7F050C58;
    case 0x7F050C5Cu: goto label_7F050C5C;
    case 0x7F050C60u: goto label_7F050C60;
    case 0x7F050C64u: goto label_7F050C64;
    case 0x7F050C68u: goto label_7F050C68;
    case 0x7F050C6Cu: goto label_7F050C6C;
    case 0x7F050C70u: goto label_7F050C70;
    case 0x7F050C74u: goto label_7F050C74;
    case 0x7F050C78u: goto label_7F050C78;
    case 0x7F050C7Cu: goto label_7F050C7C;
    case 0x7F050C80u: goto label_7F050C80;
    case 0x7F050C84u: goto label_7F050C84;
    case 0x7F050C88u: goto label_7F050C88;
    case 0x7F050C8Cu: goto label_7F050C8C;
    case 0x7F050C90u: goto label_7F050C90;
    case 0x7F050C94u: goto label_7F050C94;
    case 0x7F050C98u: goto label_7F050C98;
    case 0x7F050C9Cu: goto label_7F050C9C;
    case 0x7F050CA0u: goto label_7F050CA0;
    case 0x7F050CA4u: goto label_7F050CA4;
    case 0x7F050CA8u: goto label_7F050CA8;
    case 0x7F050CACu: goto label_7F050CAC;
    case 0x7F050CB0u: goto label_7F050CB0;
    case 0x7F050CB4u: goto label_7F050CB4;
    case 0x7F050CB8u: goto label_7F050CB8;
    case 0x7F050CBCu: goto label_7F050CBC;
    case 0x7F050CC0u: goto label_7F050CC0;
    case 0x7F050CC4u: goto label_7F050CC4;
    case 0x7F050CC8u: goto label_7F050CC8;
    case 0x7F050CCCu: goto label_7F050CCC;
    case 0x7F050CD0u: goto label_7F050CD0;
    case 0x7F050CD4u: goto label_7F050CD4;
    case 0x7F050CD8u: goto label_7F050CD8;
    case 0x7F050CDCu: goto label_7F050CDC;
    case 0x7F050CE0u: goto label_7F050CE0;
    case 0x7F050CE4u: goto label_7F050CE4;
    case 0x7F050CE8u: goto label_7F050CE8;
    case 0x7F050CECu: goto label_7F050CEC;
    case 0x7F050CF0u: goto label_7F050CF0;
    case 0x7F050CF4u: goto label_7F050CF4;
    case 0x7F050CF8u: goto label_7F050CF8;
    case 0x7F050CFCu: goto label_7F050CFC;
    case 0x7F050D00u: goto label_7F050D00;
    case 0x7F050D04u: goto label_7F050D04;
    case 0x7F050D08u: goto label_7F050D08;
    case 0x7F050D0Cu: goto label_7F050D0C;
    case 0x7F050D10u: goto label_7F050D10;
    case 0x7F050D14u: goto label_7F050D14;
    case 0x7F050D18u: goto label_7F050D18;
    case 0x7F050D1Cu: goto label_7F050D1C;
    case 0x7F050D20u: goto label_7F050D20;
    case 0x7F050D24u: goto label_7F050D24;
    case 0x7F050D28u: goto label_7F050D28;
    case 0x7F050D2Cu: goto label_7F050D2C;
    case 0x7F050D30u: goto label_7F050D30;
    case 0x7F050D34u: goto label_7F050D34;
    case 0x7F050D38u: goto label_7F050D38;
    case 0x7F050D3Cu: goto label_7F050D3C;
    case 0x7F050D40u: goto label_7F050D40;
    case 0x7F050D44u: goto label_7F050D44;
    case 0x7F050D48u: goto label_7F050D48;
    case 0x7F050D4Cu: goto label_7F050D4C;
    case 0x7F050D50u: goto label_7F050D50;
    case 0x7F050D54u: goto label_7F050D54;
    case 0x7F050D58u: goto label_7F050D58;
    case 0x7F050D5Cu: goto label_7F050D5C;
    case 0x7F050D60u: goto label_7F050D60;
    case 0x7F050D64u: goto label_7F050D64;
    case 0x7F050D68u: goto label_7F050D68;
    case 0x7F050D6Cu: goto label_7F050D6C;
    case 0x7F050D70u: goto label_7F050D70;
    case 0x7F050D74u: goto label_7F050D74;
    case 0x7F050D78u: goto label_7F050D78;
    case 0x7F050D7Cu: goto label_7F050D7C;
    case 0x7F050D80u: goto label_7F050D80;
    case 0x7F050D84u: goto label_7F050D84;
    case 0x7F050D88u: goto label_7F050D88;
    case 0x7F050D8Cu: goto label_7F050D8C;
    case 0x7F050D90u: goto label_7F050D90;
    case 0x7F050D94u: goto label_7F050D94;
    case 0x7F050D98u: goto label_7F050D98;
    case 0x7F050D9Cu: goto label_7F050D9C;
    case 0x7F050DA0u: goto label_7F050DA0;
    case 0x7F050DA4u: goto label_7F050DA4;
    case 0x7F050DA8u: goto label_7F050DA8;
    case 0x7F050DACu: goto label_7F050DAC;
    case 0x7F050DB0u: goto label_7F050DB0;
    case 0x7F050DB4u: goto label_7F050DB4;
    case 0x7F050DB8u: goto label_7F050DB8;
    case 0x7F050DBCu: goto label_7F050DBC;
    case 0x7F050DC0u: goto label_7F050DC0;
    case 0x7F050DC4u: goto label_7F050DC4;
    case 0x7F050DC8u: goto label_7F050DC8;
    case 0x7F050DCCu: goto label_7F050DCC;
    case 0x7F050DD0u: goto label_7F050DD0;
    case 0x7F050DD4u: goto label_7F050DD4;
    case 0x7F050DD8u: goto label_7F050DD8;
    case 0x7F050DDCu: goto label_7F050DDC;
    case 0x7F050DE0u: goto label_7F050DE0;
    case 0x7F050DE4u: goto label_7F050DE4;
    case 0x7F050DE8u: goto label_7F050DE8;
    case 0x7F050DECu: goto label_7F050DEC;
    case 0x7F050DF0u: goto label_7F050DF0;
    case 0x7F050DF4u: goto label_7F050DF4;
    case 0x7F050DF8u: goto label_7F050DF8;
    case 0x7F050DFCu: goto label_7F050DFC;
    case 0x7F050E00u: goto label_7F050E00;
    case 0x7F050E04u: goto label_7F050E04;
    case 0x7F050E08u: goto label_7F050E08;
    case 0x7F050E0Cu: goto label_7F050E0C;
    case 0x7F050E10u: goto label_7F050E10;
    case 0x7F050E14u: goto label_7F050E14;
    case 0x7F050E18u: goto label_7F050E18;
    case 0x7F050E1Cu: goto label_7F050E1C;
    case 0x7F050E20u: goto label_7F050E20;
    case 0x7F050E24u: goto label_7F050E24;
    case 0x7F050E28u: goto label_7F050E28;
    case 0x7F050E2Cu: goto label_7F050E2C;
    case 0x7F050E30u: goto label_7F050E30;
    case 0x7F050E34u: goto label_7F050E34;
    case 0x7F050E38u: goto label_7F050E38;
    case 0x7F050E3Cu: goto label_7F050E3C;
    case 0x7F050E40u: goto label_7F050E40;
    case 0x7F050E44u: goto label_7F050E44;
    case 0x7F050E48u: goto label_7F050E48;
    case 0x7F050E4Cu: goto label_7F050E4C;
    case 0x7F050E50u: goto label_7F050E50;
    case 0x7F050E54u: goto label_7F050E54;
    case 0x7F050E58u: goto label_7F050E58;
    case 0x7F050E5Cu: goto label_7F050E5C;
    case 0x7F050E60u: goto label_7F050E60;
    case 0x7F050E64u: goto label_7F050E64;
    case 0x7F050E68u: goto label_7F050E68;
    case 0x7F050E6Cu: goto label_7F050E6C;
    case 0x7F050E70u: goto label_7F050E70;
    case 0x7F050E74u: goto label_7F050E74;
    case 0x7F050E78u: goto label_7F050E78;
    case 0x7F050E7Cu: goto label_7F050E7C;
    case 0x7F050E80u: goto label_7F050E80;
    case 0x7F050E84u: goto label_7F050E84;
    case 0x7F050E88u: goto label_7F050E88;
    case 0x7F050E8Cu: goto label_7F050E8C;
    case 0x7F050E90u: goto label_7F050E90;
    case 0x7F050E94u: goto label_7F050E94;
    case 0x7F050E98u: goto label_7F050E98;
    case 0x7F050E9Cu: goto label_7F050E9C;
    case 0x7F050EA0u: goto label_7F050EA0;
    case 0x7F050EA4u: goto label_7F050EA4;
    case 0x7F050EA8u: goto label_7F050EA8;
    case 0x7F050EACu: goto label_7F050EAC;
    case 0x7F050EB0u: goto label_7F050EB0;
    case 0x7F050EB4u: goto label_7F050EB4;
    case 0x7F050EB8u: goto label_7F050EB8;
    case 0x7F050EBCu: goto label_7F050EBC;
    case 0x7F050EC0u: goto label_7F050EC0;
    case 0x7F050EC4u: goto label_7F050EC4;
    case 0x7F050EC8u: goto label_7F050EC8;
    case 0x7F050ECCu: goto label_7F050ECC;
    case 0x7F050ED0u: goto label_7F050ED0;
    case 0x7F050ED4u: goto label_7F050ED4;
    case 0x7F050ED8u: goto label_7F050ED8;
    case 0x7F050EDCu: goto label_7F050EDC;
    case 0x7F050EE0u: goto label_7F050EE0;
    case 0x7F050EE4u: goto label_7F050EE4;
    case 0x7F050EE8u: goto label_7F050EE8;
    case 0x7F050EECu: goto label_7F050EEC;
    case 0x7F050EF0u: goto label_7F050EF0;
    case 0x7F050EF4u: goto label_7F050EF4;
    case 0x7F050EF8u: goto label_7F050EF8;
    case 0x7F050EFCu: goto label_7F050EFC;
    case 0x7F050F00u: goto label_7F050F00;
    case 0x7F050F04u: goto label_7F050F04;
    case 0x7F050F08u: goto label_7F050F08;
    case 0x7F050F0Cu: goto label_7F050F0C;
    case 0x7F050F10u: goto label_7F050F10;
    case 0x7F050F14u: goto label_7F050F14;
    case 0x7F050F18u: goto label_7F050F18;
    case 0x7F050F1Cu: goto label_7F050F1C;
    case 0x7F050F20u: goto label_7F050F20;
    case 0x7F050F24u: goto label_7F050F24;
    case 0x7F050F28u: goto label_7F050F28;
    case 0x7F050F2Cu: goto label_7F050F2C;
    case 0x7F050F30u: goto label_7F050F30;
    case 0x7F050F34u: goto label_7F050F34;
    case 0x7F050F38u: goto label_7F050F38;
    case 0x7F050F3Cu: goto label_7F050F3C;
    case 0x7F050F40u: goto label_7F050F40;
    case 0x7F050F44u: goto label_7F050F44;
    case 0x7F050F48u: goto label_7F050F48;
    case 0x7F050F4Cu: goto label_7F050F4C;
    case 0x7F050F50u: goto label_7F050F50;
    case 0x7F050F54u: goto label_7F050F54;
    case 0x7F050F58u: goto label_7F050F58;
    case 0x7F050F5Cu: goto label_7F050F5C;
    case 0x7F050F60u: goto label_7F050F60;
    case 0x7F050F64u: goto label_7F050F64;
    case 0x7F050F68u: goto label_7F050F68;
    case 0x7F050F6Cu: goto label_7F050F6C;
    case 0x7F050F70u: goto label_7F050F70;
    case 0x7F050F74u: goto label_7F050F74;
    case 0x7F050F78u: goto label_7F050F78;
    case 0x7F050F7Cu: goto label_7F050F7C;
    case 0x7F050F80u: goto label_7F050F80;
    case 0x7F050F84u: goto label_7F050F84;
    case 0x7F050F88u: goto label_7F050F88;
    case 0x7F050F8Cu: goto label_7F050F8C;
    case 0x7F050F90u: goto label_7F050F90;
    case 0x7F050F94u: goto label_7F050F94;
    case 0x7F050F98u: goto label_7F050F98;
    case 0x7F050F9Cu: goto label_7F050F9C;
    case 0x7F050FA0u: goto label_7F050FA0;
    case 0x7F050FA4u: goto label_7F050FA4;
    case 0x7F050FA8u: goto label_7F050FA8;
    case 0x7F050FACu: goto label_7F050FAC;
    case 0x7F050FB0u: goto label_7F050FB0;
    case 0x7F050FB4u: goto label_7F050FB4;
    case 0x7F050FB8u: goto label_7F050FB8;
    case 0x7F050FBCu: goto label_7F050FBC;
    case 0x7F050FC0u: goto label_7F050FC0;
    case 0x7F050FC4u: goto label_7F050FC4;
    case 0x7F050FC8u: goto label_7F050FC8;
    case 0x7F050FCCu: goto label_7F050FCC;
    case 0x7F050FD0u: goto label_7F050FD0;
    case 0x7F050FD4u: goto label_7F050FD4;
    case 0x7F050FD8u: goto label_7F050FD8;
    case 0x7F050FDCu: goto label_7F050FDC;
    case 0x7F050FE0u: goto label_7F050FE0;
    case 0x7F050FE4u: goto label_7F050FE4;
    case 0x7F050FE8u: goto label_7F050FE8;
    case 0x7F050FECu: goto label_7F050FEC;
    case 0x7F050FF0u: goto label_7F050FF0;
    case 0x7F050FF4u: goto label_7F050FF4;
    case 0x7F050FF8u: goto label_7F050FF8;
    case 0x7F050FFCu: goto label_7F050FFC;
    case 0x7F051000u: goto label_7F051000;
    case 0x7F051004u: goto label_7F051004;
    case 0x7F051008u: goto label_7F051008;
    case 0x7F05100Cu: goto label_7F05100C;
    case 0x7F051010u: goto label_7F051010;
    case 0x7F051014u: goto label_7F051014;
    case 0x7F051018u: goto label_7F051018;
    case 0x7F05101Cu: goto label_7F05101C;
    case 0x7F051020u: goto label_7F051020;
    case 0x7F051024u: goto label_7F051024;
    case 0x7F051028u: goto label_7F051028;
    case 0x7F05102Cu: goto label_7F05102C;
    case 0x7F051030u: goto label_7F051030;
    case 0x7F051034u: goto label_7F051034;
    case 0x7F051038u: goto label_7F051038;
    case 0x7F05103Cu: goto label_7F05103C;
    case 0x7F051040u: goto label_7F051040;
    case 0x7F051044u: goto label_7F051044;
    case 0x7F051048u: goto label_7F051048;
    case 0x7F05104Cu: goto label_7F05104C;
    case 0x7F051050u: goto label_7F051050;
    case 0x7F051054u: goto label_7F051054;
    case 0x7F051058u: goto label_7F051058;
    case 0x7F05105Cu: goto label_7F05105C;
    case 0x7F051060u: goto label_7F051060;
    case 0x7F051064u: goto label_7F051064;
    case 0x7F051068u: goto label_7F051068;
    case 0x7F05106Cu: goto label_7F05106C;
    case 0x7F051070u: goto label_7F051070;
    case 0x7F051074u: goto label_7F051074;
    case 0x7F051078u: goto label_7F051078;
    case 0x7F05107Cu: goto label_7F05107C;
    case 0x7F051080u: goto label_7F051080;
    case 0x7F051084u: goto label_7F051084;
    case 0x7F051088u: goto label_7F051088;
    case 0x7F05108Cu: goto label_7F05108C;
    case 0x7F051090u: goto label_7F051090;
    case 0x7F051094u: goto label_7F051094;
    case 0x7F051098u: goto label_7F051098;
    case 0x7F05109Cu: goto label_7F05109C;
    case 0x7F0510A0u: goto label_7F0510A0;
    case 0x7F0510A4u: goto label_7F0510A4;
    case 0x7F0510A8u: goto label_7F0510A8;
    case 0x7F0510ACu: goto label_7F0510AC;
    case 0x7F0510B0u: goto label_7F0510B0;
    case 0x7F0510B4u: goto label_7F0510B4;
    case 0x7F0510B8u: goto label_7F0510B8;
    case 0x7F0510BCu: goto label_7F0510BC;
    case 0x7F0510C0u: goto label_7F0510C0;
    case 0x7F0510C4u: goto label_7F0510C4;
    case 0x7F0510C8u: goto label_7F0510C8;
    case 0x7F0510CCu: goto label_7F0510CC;
    case 0x7F0510D0u: goto label_7F0510D0;
    case 0x7F0510D4u: goto label_7F0510D4;
    case 0x7F0510D8u: goto label_7F0510D8;
    case 0x7F0510DCu: goto label_7F0510DC;
    case 0x7F0510E0u: goto label_7F0510E0;
    case 0x7F0510E4u: goto label_7F0510E4;
    case 0x7F0510E8u: goto label_7F0510E8;
    case 0x7F0510ECu: goto label_7F0510EC;
    case 0x7F0510F0u: goto label_7F0510F0;
    case 0x7F0510F4u: goto label_7F0510F4;
    case 0x7F0510F8u: goto label_7F0510F8;
    case 0x7F0510FCu: goto label_7F0510FC;
    case 0x7F051100u: goto label_7F051100;
    case 0x7F051104u: goto label_7F051104;
    case 0x7F051108u: goto label_7F051108;
    case 0x7F05110Cu: goto label_7F05110C;
    case 0x7F051110u: goto label_7F051110;
    case 0x7F051114u: goto label_7F051114;
    case 0x7F051118u: goto label_7F051118;
    case 0x7F05111Cu: goto label_7F05111C;
    case 0x7F051120u: goto label_7F051120;
    case 0x7F051124u: goto label_7F051124;
    case 0x7F051128u: goto label_7F051128;
    case 0x7F05112Cu: goto label_7F05112C;
    case 0x7F051130u: goto label_7F051130;
    case 0x7F051134u: goto label_7F051134;
    case 0x7F051138u: goto label_7F051138;
    case 0x7F05113Cu: goto label_7F05113C;
    case 0x7F051140u: goto label_7F051140;
    case 0x7F051144u: goto label_7F051144;
    case 0x7F051148u: goto label_7F051148;
    case 0x7F05114Cu: goto label_7F05114C;
    case 0x7F051150u: goto label_7F051150;
    case 0x7F051154u: goto label_7F051154;
    case 0x7F051158u: goto label_7F051158;
    case 0x7F05115Cu: goto label_7F05115C;
    case 0x7F051160u: goto label_7F051160;
    case 0x7F051164u: goto label_7F051164;
    case 0x7F051168u: goto label_7F051168;
    case 0x7F05116Cu: goto label_7F05116C;
    case 0x7F051170u: goto label_7F051170;
    case 0x7F051174u: goto label_7F051174;
    case 0x7F051178u: goto label_7F051178;
    case 0x7F05117Cu: goto label_7F05117C;
    case 0x7F051180u: goto label_7F051180;
    case 0x7F051184u: goto label_7F051184;
    case 0x7F051188u: goto label_7F051188;
    case 0x7F05118Cu: goto label_7F05118C;
    case 0x7F051190u: goto label_7F051190;
    case 0x7F051194u: goto label_7F051194;
    case 0x7F051198u: goto label_7F051198;
    case 0x7F05119Cu: goto label_7F05119C;
    case 0x7F0511A0u: goto label_7F0511A0;
    case 0x7F0511A4u: goto label_7F0511A4;
    case 0x7F0511A8u: goto label_7F0511A8;
    case 0x7F0511ACu: goto label_7F0511AC;
    case 0x7F0511B0u: goto label_7F0511B0;
    case 0x7F0511B4u: goto label_7F0511B4;
    case 0x7F0511B8u: goto label_7F0511B8;
    case 0x7F0511BCu: goto label_7F0511BC;
    case 0x7F0511C0u: goto label_7F0511C0;
    case 0x7F0511C4u: goto label_7F0511C4;
    case 0x7F0511C8u: goto label_7F0511C8;
    case 0x7F0511CCu: goto label_7F0511CC;
    case 0x7F0511D0u: goto label_7F0511D0;
    case 0x7F0511D4u: goto label_7F0511D4;
    case 0x7F0511D8u: goto label_7F0511D8;
    case 0x7F0511DCu: goto label_7F0511DC;
    case 0x7F0511E0u: goto label_7F0511E0;
    case 0x7F0511E4u: goto label_7F0511E4;
    case 0x7F0511E8u: goto label_7F0511E8;
    case 0x7F0511ECu: goto label_7F0511EC;
    case 0x7F0511F0u: goto label_7F0511F0;
    case 0x7F0511F4u: goto label_7F0511F4;
    case 0x7F0511F8u: goto label_7F0511F8;
    case 0x7F0511FCu: goto label_7F0511FC;
    case 0x7F051200u: goto label_7F051200;
    case 0x7F051204u: goto label_7F051204;
    case 0x7F051208u: goto label_7F051208;
    case 0x7F05120Cu: goto label_7F05120C;
    case 0x7F051210u: goto label_7F051210;
    case 0x7F051214u: goto label_7F051214;
    case 0x7F051218u: goto label_7F051218;
    case 0x7F05121Cu: goto label_7F05121C;
    case 0x7F051220u: goto label_7F051220;
    case 0x7F051224u: goto label_7F051224;
    case 0x7F051228u: goto label_7F051228;
    case 0x7F05122Cu: goto label_7F05122C;
    case 0x7F051230u: goto label_7F051230;
    case 0x7F051234u: goto label_7F051234;
    case 0x7F051238u: goto label_7F051238;
    case 0x7F05123Cu: goto label_7F05123C;
    case 0x7F051240u: goto label_7F051240;
    case 0x7F051244u: goto label_7F051244;
    case 0x7F051248u: goto label_7F051248;
    case 0x7F05124Cu: goto label_7F05124C;
    case 0x7F051250u: goto label_7F051250;
    case 0x7F051254u: goto label_7F051254;
    case 0x7F051258u: goto label_7F051258;
    case 0x7F05125Cu: goto label_7F05125C;
    case 0x7F051260u: goto label_7F051260;
    case 0x7F051264u: goto label_7F051264;
    case 0x7F051268u: goto label_7F051268;
    case 0x7F05126Cu: goto label_7F05126C;
    case 0x7F051270u: goto label_7F051270;
    case 0x7F051274u: goto label_7F051274;
    case 0x7F051278u: goto label_7F051278;
    case 0x7F05127Cu: goto label_7F05127C;
    case 0x7F051280u: goto label_7F051280;
    case 0x7F051284u: goto label_7F051284;
    case 0x7F051288u: goto label_7F051288;
    case 0x7F05128Cu: goto label_7F05128C;
    case 0x7F051290u: goto label_7F051290;
    case 0x7F051294u: goto label_7F051294;
    case 0x7F051298u: goto label_7F051298;
    case 0x7F05129Cu: goto label_7F05129C;
    case 0x7F0512A0u: goto label_7F0512A0;
    case 0x7F0512A4u: goto label_7F0512A4;
    case 0x7F0512A8u: goto label_7F0512A8;
    case 0x7F0512ACu: goto label_7F0512AC;
    case 0x7F0512B0u: goto label_7F0512B0;
    case 0x7F0512B4u: goto label_7F0512B4;
    case 0x7F0512B8u: goto label_7F0512B8;
    case 0x7F0512BCu: goto label_7F0512BC;
    case 0x7F0512C0u: goto label_7F0512C0;
    case 0x7F0512C4u: goto label_7F0512C4;
    case 0x7F0512C8u: goto label_7F0512C8;
    case 0x7F0512CCu: goto label_7F0512CC;
    case 0x7F0512D0u: goto label_7F0512D0;
    case 0x7F0512D4u: goto label_7F0512D4;
    case 0x7F0512D8u: goto label_7F0512D8;
    case 0x7F0512DCu: goto label_7F0512DC;
    case 0x7F0512E0u: goto label_7F0512E0;
    case 0x7F0512E4u: goto label_7F0512E4;
    case 0x7F0512E8u: goto label_7F0512E8;
    case 0x7F0512ECu: goto label_7F0512EC;
    case 0x7F0512F0u: goto label_7F0512F0;
    case 0x7F0512F4u: goto label_7F0512F4;
    case 0x7F0512F8u: goto label_7F0512F8;
    case 0x7F0512FCu: goto label_7F0512FC;
    case 0x7F051300u: goto label_7F051300;
    case 0x7F051304u: goto label_7F051304;
    case 0x7F051308u: goto label_7F051308;
    case 0x7F05130Cu: goto label_7F05130C;
    case 0x7F051310u: goto label_7F051310;
    case 0x7F051314u: goto label_7F051314;
    case 0x7F051318u: goto label_7F051318;
    case 0x7F05131Cu: goto label_7F05131C;
    case 0x7F051320u: goto label_7F051320;
    case 0x7F051324u: goto label_7F051324;
    case 0x7F051328u: goto label_7F051328;
    case 0x7F05132Cu: goto label_7F05132C;
    case 0x7F051330u: goto label_7F051330;
    case 0x7F051334u: goto label_7F051334;
    case 0x7F051338u: goto label_7F051338;
    case 0x7F05133Cu: goto label_7F05133C;
    case 0x7F051340u: goto label_7F051340;
    case 0x7F051344u: goto label_7F051344;
    case 0x7F051348u: goto label_7F051348;
    case 0x7F05134Cu: goto label_7F05134C;
    case 0x7F051350u: goto label_7F051350;
    case 0x7F051354u: goto label_7F051354;
    case 0x7F051358u: goto label_7F051358;
    case 0x7F05135Cu: goto label_7F05135C;
    case 0x7F051360u: goto label_7F051360;
    case 0x7F051364u: goto label_7F051364;
    case 0x7F051368u: goto label_7F051368;
    case 0x7F05136Cu: goto label_7F05136C;
    case 0x7F051370u: goto label_7F051370;
    case 0x7F051374u: goto label_7F051374;
    case 0x7F051378u: goto label_7F051378;
    case 0x7F05137Cu: goto label_7F05137C;
    case 0x7F051380u: goto label_7F051380;
    case 0x7F051384u: goto label_7F051384;
    case 0x7F051388u: goto label_7F051388;
    case 0x7F05138Cu: goto label_7F05138C;
    case 0x7F051390u: goto label_7F051390;
    case 0x7F051394u: goto label_7F051394;
    case 0x7F051398u: goto label_7F051398;
    case 0x7F05139Cu: goto label_7F05139C;
    case 0x7F0513A0u: goto label_7F0513A0;
    case 0x7F0513A4u: goto label_7F0513A4;
    case 0x7F0513A8u: goto label_7F0513A8;
    case 0x7F0513ACu: goto label_7F0513AC;
    case 0x7F0513B0u: goto label_7F0513B0;
    case 0x7F0513B4u: goto label_7F0513B4;
    case 0x7F0513B8u: goto label_7F0513B8;
    case 0x7F0513BCu: goto label_7F0513BC;
    case 0x7F0513C0u: goto label_7F0513C0;
    case 0x7F0513C4u: goto label_7F0513C4;
    case 0x7F0513C8u: goto label_7F0513C8;
    case 0x7F0513CCu: goto label_7F0513CC;
    case 0x7F0513D0u: goto label_7F0513D0;
    case 0x7F0513D4u: goto label_7F0513D4;
    case 0x7F0513D8u: goto label_7F0513D8;
    case 0x7F0513DCu: goto label_7F0513DC;
    case 0x7F0513E0u: goto label_7F0513E0;
    case 0x7F0513E4u: goto label_7F0513E4;
    case 0x7F0513E8u: goto label_7F0513E8;
    case 0x7F0513ECu: goto label_7F0513EC;
    case 0x7F0513F0u: goto label_7F0513F0;
    case 0x7F0513F4u: goto label_7F0513F4;
    case 0x7F0513F8u: goto label_7F0513F8;
    case 0x7F0513FCu: goto label_7F0513FC;
    case 0x7F051400u: goto label_7F051400;
    case 0x7F051404u: goto label_7F051404;
    case 0x7F051408u: goto label_7F051408;
    case 0x7F05140Cu: goto label_7F05140C;
    case 0x7F051410u: goto label_7F051410;
    case 0x7F051414u: goto label_7F051414;
    case 0x7F051418u: goto label_7F051418;
    case 0x7F05141Cu: goto label_7F05141C;
    case 0x7F051420u: goto label_7F051420;
    case 0x7F051424u: goto label_7F051424;
    case 0x7F051428u: goto label_7F051428;
    case 0x7F05142Cu: goto label_7F05142C;
    case 0x7F051430u: goto label_7F051430;
    case 0x7F051434u: goto label_7F051434;
    case 0x7F051438u: goto label_7F051438;
    case 0x7F05143Cu: goto label_7F05143C;
    case 0x7F051440u: goto label_7F051440;
    case 0x7F051444u: goto label_7F051444;
    case 0x7F051448u: goto label_7F051448;
    case 0x7F05144Cu: goto label_7F05144C;
    case 0x7F051450u: goto label_7F051450;
    case 0x7F051454u: goto label_7F051454;
    case 0x7F051458u: goto label_7F051458;
    case 0x7F05145Cu: goto label_7F05145C;
    case 0x7F051460u: goto label_7F051460;
    case 0x7F051464u: goto label_7F051464;
    case 0x7F051468u: goto label_7F051468;
    case 0x7F05146Cu: goto label_7F05146C;
    case 0x7F051470u: goto label_7F051470;
    case 0x7F051474u: goto label_7F051474;
    case 0x7F051478u: goto label_7F051478;
    case 0x7F05147Cu: goto label_7F05147C;
    case 0x7F051480u: goto label_7F051480;
    case 0x7F051484u: goto label_7F051484;
    case 0x7F051488u: goto label_7F051488;
    case 0x7F05148Cu: goto label_7F05148C;
    case 0x7F051490u: goto label_7F051490;
    case 0x7F051494u: goto label_7F051494;
    case 0x7F051498u: goto label_7F051498;
    case 0x7F05149Cu: goto label_7F05149C;
    case 0x7F0514A0u: goto label_7F0514A0;
    case 0x7F0514A4u: goto label_7F0514A4;
    case 0x7F0514A8u: goto label_7F0514A8;
    case 0x7F0514ACu: goto label_7F0514AC;
    case 0x7F0514B0u: goto label_7F0514B0;
    case 0x7F0514B4u: goto label_7F0514B4;
    case 0x7F0514B8u: goto label_7F0514B8;
    case 0x7F0514BCu: goto label_7F0514BC;
    case 0x7F0514C0u: goto label_7F0514C0;
    case 0x7F0514C4u: goto label_7F0514C4;
    case 0x7F0514C8u: goto label_7F0514C8;
    case 0x7F0514CCu: goto label_7F0514CC;
    case 0x7F0514D0u: goto label_7F0514D0;
    case 0x7F0514D4u: goto label_7F0514D4;
    case 0x7F0514D8u: goto label_7F0514D8;
    case 0x7F0514DCu: goto label_7F0514DC;
    case 0x7F0514E0u: goto label_7F0514E0;
    case 0x7F0514E4u: goto label_7F0514E4;
    case 0x7F0514E8u: goto label_7F0514E8;
    case 0x7F0514ECu: goto label_7F0514EC;
    case 0x7F0514F0u: goto label_7F0514F0;
    case 0x7F0514F4u: goto label_7F0514F4;
    case 0x7F0514F8u: goto label_7F0514F8;
    case 0x7F0514FCu: goto label_7F0514FC;
    case 0x7F051500u: goto label_7F051500;
    case 0x7F051504u: goto label_7F051504;
    case 0x7F051508u: goto label_7F051508;
    case 0x7F05150Cu: goto label_7F05150C;
    case 0x7F051510u: goto label_7F051510;
    case 0x7F051514u: goto label_7F051514;
    case 0x7F051518u: goto label_7F051518;
    case 0x7F05151Cu: goto label_7F05151C;
    case 0x7F051520u: goto label_7F051520;
    case 0x7F051524u: goto label_7F051524;
    case 0x7F051528u: goto label_7F051528;
    case 0x7F05152Cu: goto label_7F05152C;
    case 0x7F051530u: goto label_7F051530;
    case 0x7F051534u: goto label_7F051534;
    case 0x7F051538u: goto label_7F051538;
    case 0x7F05153Cu: goto label_7F05153C;
    case 0x7F051540u: goto label_7F051540;
    case 0x7F051544u: goto label_7F051544;
    case 0x7F051548u: goto label_7F051548;
    case 0x7F05154Cu: goto label_7F05154C;
    case 0x7F051550u: goto label_7F051550;
    case 0x7F051554u: goto label_7F051554;
    case 0x7F051558u: goto label_7F051558;
    case 0x7F05155Cu: goto label_7F05155C;
    case 0x7F051560u: goto label_7F051560;
    case 0x7F051564u: goto label_7F051564;
    case 0x7F051568u: goto label_7F051568;
    case 0x7F05156Cu: goto label_7F05156C;
    case 0x7F051570u: goto label_7F051570;
    case 0x7F051574u: goto label_7F051574;
    case 0x7F051578u: goto label_7F051578;
    case 0x7F05157Cu: goto label_7F05157C;
    case 0x7F051580u: goto label_7F051580;
    case 0x7F051584u: goto label_7F051584;
    case 0x7F051588u: goto label_7F051588;
    case 0x7F05158Cu: goto label_7F05158C;
    case 0x7F051590u: goto label_7F051590;
    case 0x7F051594u: goto label_7F051594;
    case 0x7F051598u: goto label_7F051598;
    case 0x7F05159Cu: goto label_7F05159C;
    case 0x7F0515A0u: goto label_7F0515A0;
    case 0x7F0515A4u: goto label_7F0515A4;
    case 0x7F0515A8u: goto label_7F0515A8;
    case 0x7F0515ACu: goto label_7F0515AC;
    case 0x7F0515B0u: goto label_7F0515B0;
    case 0x7F0515B4u: goto label_7F0515B4;
    case 0x7F0515B8u: goto label_7F0515B8;
    case 0x7F0515BCu: goto label_7F0515BC;
    case 0x7F0515C0u: goto label_7F0515C0;
    case 0x7F0515C4u: goto label_7F0515C4;
    case 0x7F0515C8u: goto label_7F0515C8;
    case 0x7F0515CCu: goto label_7F0515CC;
    case 0x7F0515D0u: goto label_7F0515D0;
    case 0x7F0515D4u: goto label_7F0515D4;
    case 0x7F0515D8u: goto label_7F0515D8;
    case 0x7F0515DCu: goto label_7F0515DC;
    case 0x7F0515E0u: goto label_7F0515E0;
    case 0x7F0515E4u: goto label_7F0515E4;
    case 0x7F0515E8u: goto label_7F0515E8;
    case 0x7F0515ECu: goto label_7F0515EC;
    case 0x7F0515F0u: goto label_7F0515F0;
    case 0x7F0515F4u: goto label_7F0515F4;
    case 0x7F0515F8u: goto label_7F0515F8;
    case 0x7F0515FCu: goto label_7F0515FC;
    case 0x7F051600u: goto label_7F051600;
    case 0x7F051604u: goto label_7F051604;
    case 0x7F051608u: goto label_7F051608;
    case 0x7F05160Cu: goto label_7F05160C;
    case 0x7F051610u: goto label_7F051610;
    case 0x7F051614u: goto label_7F051614;
    case 0x7F051618u: goto label_7F051618;
    case 0x7F05161Cu: goto label_7F05161C;
    case 0x7F051620u: goto label_7F051620;
    case 0x7F051624u: goto label_7F051624;
    case 0x7F051628u: goto label_7F051628;
    case 0x7F05162Cu: goto label_7F05162C;
    case 0x7F051630u: goto label_7F051630;
    case 0x7F051634u: goto label_7F051634;
    case 0x7F051638u: goto label_7F051638;
    case 0x7F05163Cu: goto label_7F05163C;
    case 0x7F051640u: goto label_7F051640;
    case 0x7F051644u: goto label_7F051644;
    case 0x7F051648u: goto label_7F051648;
    case 0x7F05164Cu: goto label_7F05164C;
    case 0x7F051650u: goto label_7F051650;
    case 0x7F051654u: goto label_7F051654;
    case 0x7F051658u: goto label_7F051658;
    case 0x7F05165Cu: goto label_7F05165C;
    case 0x7F051660u: goto label_7F051660;
    case 0x7F051664u: goto label_7F051664;
    case 0x7F051668u: goto label_7F051668;
    case 0x7F05166Cu: goto label_7F05166C;
    case 0x7F051670u: goto label_7F051670;
    case 0x7F051674u: goto label_7F051674;
    case 0x7F051678u: goto label_7F051678;
    case 0x7F05167Cu: goto label_7F05167C;
    case 0x7F051680u: goto label_7F051680;
    case 0x7F051684u: goto label_7F051684;
    case 0x7F051688u: goto label_7F051688;
    case 0x7F05168Cu: goto label_7F05168C;
    case 0x7F051690u: goto label_7F051690;
    case 0x7F051694u: goto label_7F051694;
    case 0x7F051698u: goto label_7F051698;
    case 0x7F05169Cu: goto label_7F05169C;
    case 0x7F0516A0u: goto label_7F0516A0;
    case 0x7F0516A4u: goto label_7F0516A4;
    case 0x7F0516A8u: goto label_7F0516A8;
    case 0x7F0516ACu: goto label_7F0516AC;
    case 0x7F0516B0u: goto label_7F0516B0;
    case 0x7F0516B4u: goto label_7F0516B4;
    case 0x7F0516B8u: goto label_7F0516B8;
    case 0x7F0516BCu: goto label_7F0516BC;
    case 0x7F0516C0u: goto label_7F0516C0;
    case 0x7F0516C4u: goto label_7F0516C4;
    case 0x7F0516C8u: goto label_7F0516C8;
    case 0x7F0516CCu: goto label_7F0516CC;
    case 0x7F0516D0u: goto label_7F0516D0;
    case 0x7F0516D4u: goto label_7F0516D4;
    case 0x7F0516D8u: goto label_7F0516D8;
    case 0x7F0516DCu: goto label_7F0516DC;
    case 0x7F0516E0u: goto label_7F0516E0;
    case 0x7F0516E4u: goto label_7F0516E4;
    case 0x7F0516E8u: goto label_7F0516E8;
    case 0x7F0516ECu: goto label_7F0516EC;
    case 0x7F0516F0u: goto label_7F0516F0;
    case 0x7F0516F4u: goto label_7F0516F4;
    case 0x7F0516F8u: goto label_7F0516F8;
    case 0x7F0516FCu: goto label_7F0516FC;
    case 0x7F051700u: goto label_7F051700;
    case 0x7F051704u: goto label_7F051704;
    case 0x7F051708u: goto label_7F051708;
    case 0x7F05170Cu: goto label_7F05170C;
    case 0x7F051710u: goto label_7F051710;
    case 0x7F051714u: goto label_7F051714;
    case 0x7F051718u: goto label_7F051718;
    case 0x7F05171Cu: goto label_7F05171C;
    case 0x7F051720u: goto label_7F051720;
    case 0x7F051724u: goto label_7F051724;
    case 0x7F051728u: goto label_7F051728;
    case 0x7F05172Cu: goto label_7F05172C;
    case 0x7F051730u: goto label_7F051730;
    case 0x7F051734u: goto label_7F051734;
    case 0x7F051738u: goto label_7F051738;
    case 0x7F05173Cu: goto label_7F05173C;
    case 0x7F051740u: goto label_7F051740;
    case 0x7F051744u: goto label_7F051744;
    case 0x7F051748u: goto label_7F051748;
    case 0x7F05174Cu: goto label_7F05174C;
    case 0x7F051750u: goto label_7F051750;
    case 0x7F051754u: goto label_7F051754;
    case 0x7F051758u: goto label_7F051758;
    case 0x7F05175Cu: goto label_7F05175C;
    case 0x7F051760u: goto label_7F051760;
    case 0x7F051764u: goto label_7F051764;
    case 0x7F051768u: goto label_7F051768;
    case 0x7F05176Cu: goto label_7F05176C;
    case 0x7F051770u: goto label_7F051770;
    case 0x7F051774u: goto label_7F051774;
    case 0x7F051778u: goto label_7F051778;
    case 0x7F05177Cu: goto label_7F05177C;
    case 0x7F051780u: goto label_7F051780;
    case 0x7F051784u: goto label_7F051784;
    case 0x7F051788u: goto label_7F051788;
    case 0x7F05178Cu: goto label_7F05178C;
    case 0x7F051790u: goto label_7F051790;
    case 0x7F051794u: goto label_7F051794;
    case 0x7F051798u: goto label_7F051798;
    case 0x7F05179Cu: goto label_7F05179C;
    case 0x7F0517A0u: goto label_7F0517A0;
    case 0x7F0517A4u: goto label_7F0517A4;
    case 0x7F0517A8u: goto label_7F0517A8;
    case 0x7F0517ACu: goto label_7F0517AC;
    case 0x7F0517B0u: goto label_7F0517B0;
    case 0x7F0517B4u: goto label_7F0517B4;
    case 0x7F0517B8u: goto label_7F0517B8;
    case 0x7F0517BCu: goto label_7F0517BC;
    case 0x7F0517C0u: goto label_7F0517C0;
    case 0x7F0517C4u: goto label_7F0517C4;
    case 0x7F0517C8u: goto label_7F0517C8;
    case 0x7F0517CCu: goto label_7F0517CC;
    case 0x7F0517D0u: goto label_7F0517D0;
    case 0x7F0517D4u: goto label_7F0517D4;
    case 0x7F0517D8u: goto label_7F0517D8;
    case 0x7F0517DCu: goto label_7F0517DC;
    case 0x7F0517E0u: goto label_7F0517E0;
    case 0x7F0517E4u: goto label_7F0517E4;
    case 0x7F0517E8u: goto label_7F0517E8;
    case 0x7F0517ECu: goto label_7F0517EC;
    case 0x7F0517F0u: goto label_7F0517F0;
    case 0x7F0517F4u: goto label_7F0517F4;
    case 0x7F0517F8u: goto label_7F0517F8;
    case 0x7F0517FCu: goto label_7F0517FC;
    case 0x7F051800u: goto label_7F051800;
    case 0x7F051804u: goto label_7F051804;
    case 0x7F051808u: goto label_7F051808;
    case 0x7F05180Cu: goto label_7F05180C;
    case 0x7F051810u: goto label_7F051810;
    case 0x7F051814u: goto label_7F051814;
    case 0x7F051818u: goto label_7F051818;
    case 0x7F05181Cu: goto label_7F05181C;
    case 0x7F051820u: goto label_7F051820;
    case 0x7F051824u: goto label_7F051824;
    case 0x7F051828u: goto label_7F051828;
    case 0x7F05182Cu: goto label_7F05182C;
    case 0x7F051830u: goto label_7F051830;
    case 0x7F051834u: goto label_7F051834;
    case 0x7F051838u: goto label_7F051838;
    case 0x7F05183Cu: goto label_7F05183C;
    case 0x7F051840u: goto label_7F051840;
    case 0x7F051844u: goto label_7F051844;
    case 0x7F051848u: goto label_7F051848;
    case 0x7F05184Cu: goto label_7F05184C;
    case 0x7F051850u: goto label_7F051850;
    case 0x7F051854u: goto label_7F051854;
    case 0x7F051858u: goto label_7F051858;
    case 0x7F05185Cu: goto label_7F05185C;
    case 0x7F051860u: goto label_7F051860;
    case 0x7F051864u: goto label_7F051864;
    case 0x7F051868u: goto label_7F051868;
    case 0x7F05186Cu: goto label_7F05186C;
    case 0x7F051870u: goto label_7F051870;
    case 0x7F051874u: goto label_7F051874;
    case 0x7F051878u: goto label_7F051878;
    case 0x7F05187Cu: goto label_7F05187C;
    case 0x7F051880u: goto label_7F051880;
    case 0x7F051884u: goto label_7F051884;
    case 0x7F051888u: goto label_7F051888;
    case 0x7F05188Cu: goto label_7F05188C;
    case 0x7F051890u: goto label_7F051890;
    case 0x7F051894u: goto label_7F051894;
    case 0x7F051898u: goto label_7F051898;
    case 0x7F05189Cu: goto label_7F05189C;
    case 0x7F0518A0u: goto label_7F0518A0;
    case 0x7F0518A4u: goto label_7F0518A4;
    case 0x7F0518A8u: goto label_7F0518A8;
    case 0x7F0518ACu: goto label_7F0518AC;
    case 0x7F0518B0u: goto label_7F0518B0;
    case 0x7F0518B4u: goto label_7F0518B4;
    case 0x7F0518B8u: goto label_7F0518B8;
    case 0x7F0518BCu: goto label_7F0518BC;
    case 0x7F0518C0u: goto label_7F0518C0;
    case 0x7F0518C4u: goto label_7F0518C4;
    case 0x7F0518C8u: goto label_7F0518C8;
    case 0x7F0518CCu: goto label_7F0518CC;
    case 0x7F0518D0u: goto label_7F0518D0;
    case 0x7F0518D4u: goto label_7F0518D4;
    case 0x7F0518D8u: goto label_7F0518D8;
    case 0x7F0518DCu: goto label_7F0518DC;
    case 0x7F0518E0u: goto label_7F0518E0;
    case 0x7F0518E4u: goto label_7F0518E4;
    case 0x7F0518E8u: goto label_7F0518E8;
    case 0x7F0518ECu: goto label_7F0518EC;
    case 0x7F0518F0u: goto label_7F0518F0;
    case 0x7F0518F4u: goto label_7F0518F4;
    case 0x7F0518F8u: goto label_7F0518F8;
    case 0x7F0518FCu: goto label_7F0518FC;
    case 0x7F051900u: goto label_7F051900;
    case 0x7F051904u: goto label_7F051904;
    case 0x7F051908u: goto label_7F051908;
    case 0x7F05190Cu: goto label_7F05190C;
    case 0x7F051910u: goto label_7F051910;
    case 0x7F051914u: goto label_7F051914;
    case 0x7F051918u: goto label_7F051918;
    case 0x7F05191Cu: goto label_7F05191C;
    case 0x7F051920u: goto label_7F051920;
    case 0x7F051924u: goto label_7F051924;
    case 0x7F051928u: goto label_7F051928;
    case 0x7F05192Cu: goto label_7F05192C;
    case 0x7F051930u: goto label_7F051930;
    case 0x7F051934u: goto label_7F051934;
    case 0x7F051938u: goto label_7F051938;
    case 0x7F05193Cu: goto label_7F05193C;
    case 0x7F051940u: goto label_7F051940;
    case 0x7F051944u: goto label_7F051944;
    case 0x7F051948u: goto label_7F051948;
    case 0x7F05194Cu: goto label_7F05194C;
    case 0x7F051950u: goto label_7F051950;
    case 0x7F051954u: goto label_7F051954;
    case 0x7F051958u: goto label_7F051958;
    case 0x7F05195Cu: goto label_7F05195C;
    case 0x7F051960u: goto label_7F051960;
    case 0x7F051964u: goto label_7F051964;
    case 0x7F051968u: goto label_7F051968;
    case 0x7F05196Cu: goto label_7F05196C;
    case 0x7F051970u: goto label_7F051970;
    case 0x7F051974u: goto label_7F051974;
    case 0x7F051978u: goto label_7F051978;
    case 0x7F05197Cu: goto label_7F05197C;
    case 0x7F051980u: goto label_7F051980;
    case 0x7F051984u: goto label_7F051984;
    case 0x7F051988u: goto label_7F051988;
    case 0x7F05198Cu: goto label_7F05198C;
    case 0x7F051990u: goto label_7F051990;
    case 0x7F051994u: goto label_7F051994;
    case 0x7F051998u: goto label_7F051998;
    case 0x7F05199Cu: goto label_7F05199C;
    case 0x7F0519A0u: goto label_7F0519A0;
    case 0x7F0519A4u: goto label_7F0519A4;
    case 0x7F0519A8u: goto label_7F0519A8;
    case 0x7F0519ACu: goto label_7F0519AC;
    case 0x7F0519B0u: goto label_7F0519B0;
    case 0x7F0519B4u: goto label_7F0519B4;
    case 0x7F0519B8u: goto label_7F0519B8;
    case 0x7F0519BCu: goto label_7F0519BC;
    case 0x7F0519C0u: goto label_7F0519C0;
    case 0x7F0519C4u: goto label_7F0519C4;
    case 0x7F0519C8u: goto label_7F0519C8;
    case 0x7F0519CCu: goto label_7F0519CC;
    case 0x7F0519D0u: goto label_7F0519D0;
    case 0x7F0519D4u: goto label_7F0519D4;
    case 0x7F0519D8u: goto label_7F0519D8;
    case 0x7F0519DCu: goto label_7F0519DC;
    case 0x7F0519E0u: goto label_7F0519E0;
    case 0x7F0519E4u: goto label_7F0519E4;
    case 0x7F0519E8u: goto label_7F0519E8;
    case 0x7F0519ECu: goto label_7F0519EC;
    case 0x7F0519F0u: goto label_7F0519F0;
    case 0x7F0519F4u: goto label_7F0519F4;
    case 0x7F0519F8u: goto label_7F0519F8;
    case 0x7F0519FCu: goto label_7F0519FC;
    case 0x7F051A00u: goto label_7F051A00;
    case 0x7F051A04u: goto label_7F051A04;
    case 0x7F051A08u: goto label_7F051A08;
    case 0x7F051A0Cu: goto label_7F051A0C;
    case 0x7F051A10u: goto label_7F051A10;
    case 0x7F051A14u: goto label_7F051A14;
    case 0x7F051A18u: goto label_7F051A18;
    case 0x7F051A1Cu: goto label_7F051A1C;
    case 0x7F051A20u: goto label_7F051A20;
    case 0x7F051A24u: goto label_7F051A24;
    case 0x7F051A28u: goto label_7F051A28;
    case 0x7F051A2Cu: goto label_7F051A2C;
    case 0x7F051A30u: goto label_7F051A30;
    case 0x7F051A34u: goto label_7F051A34;
    case 0x7F051A38u: goto label_7F051A38;
    case 0x7F051A3Cu: goto label_7F051A3C;
    case 0x7F051A40u: goto label_7F051A40;
    case 0x7F051A44u: goto label_7F051A44;
    case 0x7F051A48u: goto label_7F051A48;
    case 0x7F051A4Cu: goto label_7F051A4C;
    case 0x7F051A50u: goto label_7F051A50;
    case 0x7F051A54u: goto label_7F051A54;
    case 0x7F051A58u: goto label_7F051A58;
    case 0x7F051A5Cu: goto label_7F051A5C;
    case 0x7F051A60u: goto label_7F051A60;
    case 0x7F051A64u: goto label_7F051A64;
    case 0x7F051A68u: goto label_7F051A68;
    case 0x7F051A6Cu: goto label_7F051A6C;
    case 0x7F051A70u: goto label_7F051A70;
    case 0x7F051A74u: goto label_7F051A74;
    case 0x7F051A78u: goto label_7F051A78;
    case 0x7F051A7Cu: goto label_7F051A7C;
    case 0x7F051A80u: goto label_7F051A80;
    case 0x7F051A84u: goto label_7F051A84;
    case 0x7F051A88u: goto label_7F051A88;
    case 0x7F051A8Cu: goto label_7F051A8C;
    case 0x7F051A90u: goto label_7F051A90;
    case 0x7F051A94u: goto label_7F051A94;
    case 0x7F051A98u: goto label_7F051A98;
    case 0x7F051A9Cu: goto label_7F051A9C;
    case 0x7F051AA0u: goto label_7F051AA0;
    case 0x7F051AA4u: goto label_7F051AA4;
    case 0x7F051AA8u: goto label_7F051AA8;
    case 0x7F051AACu: goto label_7F051AAC;
    case 0x7F051AB0u: goto label_7F051AB0;
    case 0x7F051AB4u: goto label_7F051AB4;
    case 0x7F051AB8u: goto label_7F051AB8;
    case 0x7F051ABCu: goto label_7F051ABC;
    case 0x7F051AC0u: goto label_7F051AC0;
    case 0x7F051AC4u: goto label_7F051AC4;
    case 0x7F051AC8u: goto label_7F051AC8;
    case 0x7F051ACCu: goto label_7F051ACC;
    case 0x7F051AD0u: goto label_7F051AD0;
    case 0x7F051AD4u: goto label_7F051AD4;
    case 0x7F051AD8u: goto label_7F051AD8;
    case 0x7F051ADCu: goto label_7F051ADC;
    case 0x7F051AE0u: goto label_7F051AE0;
    case 0x7F051AE4u: goto label_7F051AE4;
    case 0x7F051AE8u: goto label_7F051AE8;
    case 0x7F051AECu: goto label_7F051AEC;
    case 0x7F051AF0u: goto label_7F051AF0;
    case 0x7F051AF4u: goto label_7F051AF4;
    case 0x7F051AF8u: goto label_7F051AF8;
    case 0x7F051AFCu: goto label_7F051AFC;
    case 0x7F051B00u: goto label_7F051B00;
    case 0x7F051B04u: goto label_7F051B04;
    case 0x7F051B08u: goto label_7F051B08;
    case 0x7F051B0Cu: goto label_7F051B0C;
    case 0x7F051B10u: goto label_7F051B10;
    case 0x7F051B14u: goto label_7F051B14;
    case 0x7F051B18u: goto label_7F051B18;
    case 0x7F051B1Cu: goto label_7F051B1C;
    case 0x7F051B20u: goto label_7F051B20;
    case 0x7F051B24u: goto label_7F051B24;
    case 0x7F051B28u: goto label_7F051B28;
    case 0x7F051B2Cu: goto label_7F051B2C;
    case 0x7F051B30u: goto label_7F051B30;
    case 0x7F051B34u: goto label_7F051B34;
    case 0x7F051B38u: goto label_7F051B38;
    case 0x7F051B3Cu: goto label_7F051B3C;
    case 0x7F051B40u: goto label_7F051B40;
    case 0x7F051B44u: goto label_7F051B44;
    case 0x7F051B48u: goto label_7F051B48;
    case 0x7F051B4Cu: goto label_7F051B4C;
    case 0x7F051B50u: goto label_7F051B50;
    case 0x7F051B54u: goto label_7F051B54;
    case 0x7F051B58u: goto label_7F051B58;
    case 0x7F051B5Cu: goto label_7F051B5C;
    case 0x7F051B60u: goto label_7F051B60;
    case 0x7F051B64u: goto label_7F051B64;
    case 0x7F051B68u: goto label_7F051B68;
    case 0x7F051B6Cu: goto label_7F051B6C;
    case 0x7F051B70u: goto label_7F051B70;
    case 0x7F051B74u: goto label_7F051B74;
    case 0x7F051B78u: goto label_7F051B78;
    case 0x7F051B7Cu: goto label_7F051B7C;
    case 0x7F051B80u: goto label_7F051B80;
    case 0x7F051B84u: goto label_7F051B84;
    case 0x7F051B88u: goto label_7F051B88;
    case 0x7F051B8Cu: goto label_7F051B8C;
    case 0x7F051B90u: goto label_7F051B90;
    case 0x7F051B94u: goto label_7F051B94;
    case 0x7F051B98u: goto label_7F051B98;
    case 0x7F051B9Cu: goto label_7F051B9C;
    case 0x7F051BA0u: goto label_7F051BA0;
    case 0x7F051BA4u: goto label_7F051BA4;
    case 0x7F051BA8u: goto label_7F051BA8;
    case 0x7F051BACu: goto label_7F051BAC;
    case 0x7F051BB0u: goto label_7F051BB0;
    case 0x7F051BB4u: goto label_7F051BB4;
    case 0x7F051BB8u: goto label_7F051BB8;
    case 0x7F051BBCu: goto label_7F051BBC;
    case 0x7F051BC0u: goto label_7F051BC0;
    case 0x7F051BC4u: goto label_7F051BC4;
    case 0x7F051BC8u: goto label_7F051BC8;
    case 0x7F051BCCu: goto label_7F051BCC;
    case 0x7F051BD0u: goto label_7F051BD0;
    case 0x7F051BD4u: goto label_7F051BD4;
    case 0x7F051BD8u: goto label_7F051BD8;
    case 0x7F051BDCu: goto label_7F051BDC;
    case 0x7F051BE0u: goto label_7F051BE0;
    case 0x7F051BE4u: goto label_7F051BE4;
    case 0x7F051BE8u: goto label_7F051BE8;
    case 0x7F051BECu: goto label_7F051BEC;
    case 0x7F051BF0u: goto label_7F051BF0;
    case 0x7F051BF4u: goto label_7F051BF4;
    case 0x7F051BF8u: goto label_7F051BF8;
    case 0x7F051BFCu: goto label_7F051BFC;
    case 0x7F051C00u: goto label_7F051C00;
    case 0x7F051C04u: goto label_7F051C04;
    case 0x7F051C08u: goto label_7F051C08;
    case 0x7F051C0Cu: goto label_7F051C0C;
    case 0x7F051C10u: goto label_7F051C10;
    case 0x7F051C14u: goto label_7F051C14;
    case 0x7F051C18u: goto label_7F051C18;
    case 0x7F051C1Cu: goto label_7F051C1C;
    case 0x7F051C20u: goto label_7F051C20;
    case 0x7F051C24u: goto label_7F051C24;
    case 0x7F051C28u: goto label_7F051C28;
    case 0x7F051C2Cu: goto label_7F051C2C;
    case 0x7F051C30u: goto label_7F051C30;
    case 0x7F051C34u: goto label_7F051C34;
    case 0x7F051C38u: goto label_7F051C38;
    case 0x7F051C3Cu: goto label_7F051C3C;
    case 0x7F051C40u: goto label_7F051C40;
    case 0x7F051C44u: goto label_7F051C44;
    case 0x7F051C48u: goto label_7F051C48;
    case 0x7F051C4Cu: goto label_7F051C4C;
    case 0x7F051C50u: goto label_7F051C50;
    case 0x7F051C54u: goto label_7F051C54;
    case 0x7F051C58u: goto label_7F051C58;
    case 0x7F051C5Cu: goto label_7F051C5C;
    case 0x7F051C60u: goto label_7F051C60;
    case 0x7F051C64u: goto label_7F051C64;
    case 0x7F051C68u: goto label_7F051C68;
    case 0x7F051C6Cu: goto label_7F051C6C;
    case 0x7F051C70u: goto label_7F051C70;
    case 0x7F051C74u: goto label_7F051C74;
    case 0x7F051C78u: goto label_7F051C78;
    case 0x7F051C7Cu: goto label_7F051C7C;
    case 0x7F051C80u: goto label_7F051C80;
    case 0x7F051C84u: goto label_7F051C84;
    case 0x7F051C88u: goto label_7F051C88;
    case 0x7F051C8Cu: goto label_7F051C8C;
    case 0x7F051C90u: goto label_7F051C90;
    case 0x7F051C94u: goto label_7F051C94;
    case 0x7F051C98u: goto label_7F051C98;
    case 0x7F051C9Cu: goto label_7F051C9C;
    case 0x7F051CA0u: goto label_7F051CA0;
    case 0x7F051CA4u: goto label_7F051CA4;
    case 0x7F051CA8u: goto label_7F051CA8;
    case 0x7F051CACu: goto label_7F051CAC;
    case 0x7F051CB0u: goto label_7F051CB0;
    case 0x7F051CB4u: goto label_7F051CB4;
    case 0x7F051CB8u: goto label_7F051CB8;
    case 0x7F051CBCu: goto label_7F051CBC;
    case 0x7F051CC0u: goto label_7F051CC0;
    case 0x7F051CC4u: goto label_7F051CC4;
    case 0x7F051CC8u: goto label_7F051CC8;
    case 0x7F051CCCu: goto label_7F051CCC;
    case 0x7F051CD0u: goto label_7F051CD0;
    case 0x7F051CD4u: goto label_7F051CD4;
    case 0x7F051CD8u: goto label_7F051CD8;
    case 0x7F051CDCu: goto label_7F051CDC;
    case 0x7F051CE0u: goto label_7F051CE0;
    case 0x7F051CE4u: goto label_7F051CE4;
    case 0x7F051CE8u: goto label_7F051CE8;
    case 0x7F051CECu: goto label_7F051CEC;
    case 0x7F051CF0u: goto label_7F051CF0;
    case 0x7F051CF4u: goto label_7F051CF4;
    case 0x7F051CF8u: goto label_7F051CF8;
    case 0x7F051CFCu: goto label_7F051CFC;
    case 0x7F051D00u: goto label_7F051D00;
    case 0x7F051D04u: goto label_7F051D04;
    case 0x7F051D08u: goto label_7F051D08;
    case 0x7F051D0Cu: goto label_7F051D0C;
    case 0x7F051D10u: goto label_7F051D10;
    case 0x7F051D14u: goto label_7F051D14;
    case 0x7F051D18u: goto label_7F051D18;
    case 0x7F051D1Cu: goto label_7F051D1C;
    case 0x7F051D20u: goto label_7F051D20;
    case 0x7F051D24u: goto label_7F051D24;
    case 0x7F051D28u: goto label_7F051D28;
    case 0x7F051D2Cu: goto label_7F051D2C;
    case 0x7F051D30u: goto label_7F051D30;
    case 0x7F051D34u: goto label_7F051D34;
    case 0x7F051D38u: goto label_7F051D38;
    case 0x7F051D3Cu: goto label_7F051D3C;
    case 0x7F051D40u: goto label_7F051D40;
    case 0x7F051D44u: goto label_7F051D44;
    case 0x7F051D48u: goto label_7F051D48;
    case 0x7F051D4Cu: goto label_7F051D4C;
    case 0x7F051D50u: goto label_7F051D50;
    case 0x7F051D54u: goto label_7F051D54;
    case 0x7F051D58u: goto label_7F051D58;
    case 0x7F051D5Cu: goto label_7F051D5C;
    case 0x7F051D60u: goto label_7F051D60;
    case 0x7F051D64u: goto label_7F051D64;
    case 0x7F051D68u: goto label_7F051D68;
    case 0x7F051D6Cu: goto label_7F051D6C;
    case 0x7F051D70u: goto label_7F051D70;
    case 0x7F051D74u: goto label_7F051D74;
    case 0x7F051D78u: goto label_7F051D78;
    case 0x7F051D7Cu: goto label_7F051D7C;
    case 0x7F051D80u: goto label_7F051D80;
    case 0x7F051D84u: goto label_7F051D84;
    case 0x7F051D88u: goto label_7F051D88;
    case 0x7F051D8Cu: goto label_7F051D8C;
    case 0x7F051D90u: goto label_7F051D90;
    case 0x7F051D94u: goto label_7F051D94;
    case 0x7F051D98u: goto label_7F051D98;
    case 0x7F051D9Cu: goto label_7F051D9C;
    case 0x7F051DA0u: goto label_7F051DA0;
    case 0x7F051DA4u: goto label_7F051DA4;
    case 0x7F051DA8u: goto label_7F051DA8;
    case 0x7F051DACu: goto label_7F051DAC;
    case 0x7F051DB0u: goto label_7F051DB0;
    case 0x7F051DB4u: goto label_7F051DB4;
    case 0x7F051DB8u: goto label_7F051DB8;
    case 0x7F051DBCu: goto label_7F051DBC;
    case 0x7F051DC0u: goto label_7F051DC0;
    case 0x7F051DC4u: goto label_7F051DC4;
    case 0x7F051DC8u: goto label_7F051DC8;
    case 0x7F051DCCu: goto label_7F051DCC;
    case 0x7F051DD0u: goto label_7F051DD0;
    case 0x7F051DD4u: goto label_7F051DD4;
    case 0x7F051DD8u: goto label_7F051DD8;
    case 0x7F051DDCu: goto label_7F051DDC;
    case 0x7F051DE0u: goto label_7F051DE0;
    case 0x7F051DE4u: goto label_7F051DE4;
    case 0x7F051DE8u: goto label_7F051DE8;
    case 0x7F051DECu: goto label_7F051DEC;
    case 0x7F051DF0u: goto label_7F051DF0;
    case 0x7F051DF4u: goto label_7F051DF4;
    case 0x7F051DF8u: goto label_7F051DF8;
    case 0x7F051DFCu: goto label_7F051DFC;
    case 0x7F051E00u: goto label_7F051E00;
    case 0x7F051E04u: goto label_7F051E04;
    case 0x7F051E08u: goto label_7F051E08;
    case 0x7F051E0Cu: goto label_7F051E0C;
    case 0x7F051E10u: goto label_7F051E10;
    case 0x7F051E14u: goto label_7F051E14;
    case 0x7F051E18u: goto label_7F051E18;
    case 0x7F051E1Cu: goto label_7F051E1C;
    case 0x7F051E20u: goto label_7F051E20;
    case 0x7F051E24u: goto label_7F051E24;
    case 0x7F051E28u: goto label_7F051E28;
    case 0x7F051E2Cu: goto label_7F051E2C;
    case 0x7F051E30u: goto label_7F051E30;
    case 0x7F051E34u: goto label_7F051E34;
    case 0x7F051E38u: goto label_7F051E38;
    case 0x7F051E3Cu: goto label_7F051E3C;
    case 0x7F051E40u: goto label_7F051E40;
    case 0x7F051E44u: goto label_7F051E44;
    case 0x7F051E48u: goto label_7F051E48;
    case 0x7F051E4Cu: goto label_7F051E4C;
    case 0x7F051E50u: goto label_7F051E50;
    case 0x7F051E54u: goto label_7F051E54;
    case 0x7F051E58u: goto label_7F051E58;
    case 0x7F051E5Cu: goto label_7F051E5C;
    case 0x7F051E60u: goto label_7F051E60;
    case 0x7F051E64u: goto label_7F051E64;
    case 0x7F051E68u: goto label_7F051E68;
    case 0x7F051E6Cu: goto label_7F051E6C;
    case 0x7F051E70u: goto label_7F051E70;
    case 0x7F051E74u: goto label_7F051E74;
    case 0x7F051E78u: goto label_7F051E78;
    case 0x7F051E7Cu: goto label_7F051E7C;
    case 0x7F051E80u: goto label_7F051E80;
    case 0x7F051E84u: goto label_7F051E84;
    case 0x7F051E88u: goto label_7F051E88;
    case 0x7F051E8Cu: goto label_7F051E8C;
    case 0x7F051E90u: goto label_7F051E90;
    case 0x7F051E94u: goto label_7F051E94;
    case 0x7F051E98u: goto label_7F051E98;
    case 0x7F051E9Cu: goto label_7F051E9C;
    case 0x7F051EA0u: goto label_7F051EA0;
    case 0x7F051EA4u: goto label_7F051EA4;
    case 0x7F051EA8u: goto label_7F051EA8;
    case 0x7F051EACu: goto label_7F051EAC;
    case 0x7F051EB0u: goto label_7F051EB0;
    case 0x7F051EB4u: goto label_7F051EB4;
    case 0x7F051EB8u: goto label_7F051EB8;
    case 0x7F051EBCu: goto label_7F051EBC;
    case 0x7F051EC0u: goto label_7F051EC0;
    case 0x7F051EC4u: goto label_7F051EC4;
    case 0x7F051EC8u: goto label_7F051EC8;
    case 0x7F051ECCu: goto label_7F051ECC;
    case 0x7F051ED0u: goto label_7F051ED0;
    case 0x7F051ED4u: goto label_7F051ED4;
    case 0x7F051ED8u: goto label_7F051ED8;
    case 0x7F051EDCu: goto label_7F051EDC;
    case 0x7F051EE0u: goto label_7F051EE0;
    case 0x7F051EE4u: goto label_7F051EE4;
    case 0x7F051EE8u: goto label_7F051EE8;
    case 0x7F051EECu: goto label_7F051EEC;
    case 0x7F051EF0u: goto label_7F051EF0;
    case 0x7F051EF4u: goto label_7F051EF4;
    case 0x7F051EF8u: goto label_7F051EF8;
    case 0x7F051EFCu: goto label_7F051EFC;
    case 0x7F051F00u: goto label_7F051F00;
    case 0x7F051F04u: goto label_7F051F04;
    case 0x7F051F08u: goto label_7F051F08;
    case 0x7F051F0Cu: goto label_7F051F0C;
    case 0x7F051F10u: goto label_7F051F10;
    case 0x7F051F14u: goto label_7F051F14;
    case 0x7F051F18u: goto label_7F051F18;
    case 0x7F051F1Cu: goto label_7F051F1C;
    case 0x7F051F20u: goto label_7F051F20;
    case 0x7F051F24u: goto label_7F051F24;
    case 0x7F051F28u: goto label_7F051F28;
    case 0x7F051F2Cu: goto label_7F051F2C;
    case 0x7F051F30u: goto label_7F051F30;
    case 0x7F051F34u: goto label_7F051F34;
    case 0x7F051F38u: goto label_7F051F38;
    case 0x7F051F3Cu: goto label_7F051F3C;
    case 0x7F051F40u: goto label_7F051F40;
    case 0x7F051F44u: goto label_7F051F44;
    case 0x7F051F48u: goto label_7F051F48;
    case 0x7F051F4Cu: goto label_7F051F4C;
    case 0x7F051F50u: goto label_7F051F50;
    case 0x7F051F54u: goto label_7F051F54;
    case 0x7F051F58u: goto label_7F051F58;
    case 0x7F051F5Cu: goto label_7F051F5C;
    case 0x7F051F60u: goto label_7F051F60;
    case 0x7F051F64u: goto label_7F051F64;
    case 0x7F051F68u: goto label_7F051F68;
    case 0x7F051F6Cu: goto label_7F051F6C;
    case 0x7F051F70u: goto label_7F051F70;
    case 0x7F051F74u: goto label_7F051F74;
    case 0x7F051F78u: goto label_7F051F78;
    case 0x7F051F7Cu: goto label_7F051F7C;
    case 0x7F051F80u: goto label_7F051F80;
    case 0x7F051F84u: goto label_7F051F84;
    case 0x7F051F88u: goto label_7F051F88;
    case 0x7F051F8Cu: goto label_7F051F8C;
    case 0x7F051F90u: goto label_7F051F90;
    case 0x7F051F94u: goto label_7F051F94;
    case 0x7F051F98u: goto label_7F051F98;
    case 0x7F051F9Cu: goto label_7F051F9C;
    case 0x7F051FA0u: goto label_7F051FA0;
    case 0x7F051FA4u: goto label_7F051FA4;
    case 0x7F051FA8u: goto label_7F051FA8;
    case 0x7F051FACu: goto label_7F051FAC;
    case 0x7F051FB0u: goto label_7F051FB0;
    case 0x7F051FB4u: goto label_7F051FB4;
    case 0x7F051FB8u: goto label_7F051FB8;
    case 0x7F051FBCu: goto label_7F051FBC;
    case 0x7F051FC0u: goto label_7F051FC0;
    case 0x7F051FC4u: goto label_7F051FC4;
    case 0x7F051FC8u: goto label_7F051FC8;
    case 0x7F051FCCu: goto label_7F051FCC;
    case 0x7F051FD0u: goto label_7F051FD0;
    case 0x7F051FD4u: goto label_7F051FD4;
    case 0x7F051FD8u: goto label_7F051FD8;
    case 0x7F051FDCu: goto label_7F051FDC;
    case 0x7F051FE0u: goto label_7F051FE0;
    case 0x7F051FE4u: goto label_7F051FE4;
    case 0x7F051FE8u: goto label_7F051FE8;
    case 0x7F051FECu: goto label_7F051FEC;
    case 0x7F051FF0u: goto label_7F051FF0;
    case 0x7F051FF4u: goto label_7F051FF4;
    case 0x7F051FF8u: goto label_7F051FF8;
    case 0x7F051FFCu: goto label_7F051FFC;
    case 0x7F052000u: goto label_7F052000;
    case 0x7F052004u: goto label_7F052004;
    case 0x7F052008u: goto label_7F052008;
    case 0x7F05200Cu: goto label_7F05200C;
    case 0x7F052010u: goto label_7F052010;
    case 0x7F052014u: goto label_7F052014;
    case 0x7F052018u: goto label_7F052018;
    case 0x7F05201Cu: goto label_7F05201C;
    case 0x7F052020u: goto label_7F052020;
    case 0x7F052024u: goto label_7F052024;
    case 0x7F052028u: goto label_7F052028;
    case 0x7F05202Cu: goto label_7F05202C;
    case 0x7F052030u: goto label_7F052030;
    case 0x7F052034u: goto label_7F052034;
    case 0x7F052038u: goto label_7F052038;
    case 0x7F05203Cu: goto label_7F05203C;
    case 0x7F052040u: goto label_7F052040;
    case 0x7F052044u: goto label_7F052044;
    case 0x7F052048u: goto label_7F052048;
    case 0x7F05204Cu: goto label_7F05204C;
    case 0x7F052050u: goto label_7F052050;
    case 0x7F052054u: goto label_7F052054;
    case 0x7F052058u: goto label_7F052058;
    case 0x7F05205Cu: goto label_7F05205C;
    case 0x7F052060u: goto label_7F052060;
    case 0x7F052064u: goto label_7F052064;
    case 0x7F052068u: goto label_7F052068;
    case 0x7F05206Cu: goto label_7F05206C;
    case 0x7F052070u: goto label_7F052070;
    case 0x7F052074u: goto label_7F052074;
    case 0x7F052078u: goto label_7F052078;
    case 0x7F05207Cu: goto label_7F05207C;
    case 0x7F052080u: goto label_7F052080;
    case 0x7F052084u: goto label_7F052084;
    case 0x7F052088u: goto label_7F052088;
    case 0x7F05208Cu: goto label_7F05208C;
    case 0x7F052090u: goto label_7F052090;
    case 0x7F052094u: goto label_7F052094;
    case 0x7F052098u: goto label_7F052098;
    case 0x7F05209Cu: goto label_7F05209C;
    case 0x7F0520A0u: goto label_7F0520A0;
    case 0x7F0520A4u: goto label_7F0520A4;
    case 0x7F0520A8u: goto label_7F0520A8;
    case 0x7F0520ACu: goto label_7F0520AC;
    case 0x7F0520B0u: goto label_7F0520B0;
    case 0x7F0520B4u: goto label_7F0520B4;
    case 0x7F0520B8u: goto label_7F0520B8;
    case 0x7F0520BCu: goto label_7F0520BC;
    case 0x7F0520C0u: goto label_7F0520C0;
    case 0x7F0520C4u: goto label_7F0520C4;
    case 0x7F0520C8u: goto label_7F0520C8;
    case 0x7F0520CCu: goto label_7F0520CC;
    case 0x7F0520D0u: goto label_7F0520D0;
    case 0x7F0520D4u: goto label_7F0520D4;
    case 0x7F0520D8u: goto label_7F0520D8;
    case 0x7F0520DCu: goto label_7F0520DC;
    case 0x7F0520E0u: goto label_7F0520E0;
    case 0x7F0520E4u: goto label_7F0520E4;
    case 0x7F0520E8u: goto label_7F0520E8;
    case 0x7F0520ECu: goto label_7F0520EC;
    case 0x7F0520F0u: goto label_7F0520F0;
    case 0x7F0520F4u: goto label_7F0520F4;
    case 0x7F0520F8u: goto label_7F0520F8;
    case 0x7F0520FCu: goto label_7F0520FC;
    case 0x7F052100u: goto label_7F052100;
    case 0x7F052104u: goto label_7F052104;
    case 0x7F052108u: goto label_7F052108;
    case 0x7F05210Cu: goto label_7F05210C;
    case 0x7F052110u: goto label_7F052110;
    case 0x7F052114u: goto label_7F052114;
    case 0x7F052118u: goto label_7F052118;
    case 0x7F05211Cu: goto label_7F05211C;
    case 0x7F052120u: goto label_7F052120;
    case 0x7F052124u: goto label_7F052124;
    case 0x7F052128u: goto label_7F052128;
    case 0x7F05212Cu: goto label_7F05212C;
    case 0x7F052130u: goto label_7F052130;
    case 0x7F052134u: goto label_7F052134;
    case 0x7F052138u: goto label_7F052138;
    case 0x7F05213Cu: goto label_7F05213C;
    case 0x7F052140u: goto label_7F052140;
    case 0x7F052144u: goto label_7F052144;
    case 0x7F052148u: goto label_7F052148;
    case 0x7F05214Cu: goto label_7F05214C;
    case 0x7F052150u: goto label_7F052150;
    case 0x7F052154u: goto label_7F052154;
    case 0x7F052158u: goto label_7F052158;
    case 0x7F05215Cu: goto label_7F05215C;
    case 0x7F052160u: goto label_7F052160;
    case 0x7F052164u: goto label_7F052164;
    case 0x7F052168u: goto label_7F052168;
    case 0x7F05216Cu: goto label_7F05216C;
    case 0x7F052170u: goto label_7F052170;
    case 0x7F052174u: goto label_7F052174;
    case 0x7F052178u: goto label_7F052178;
    case 0x7F05217Cu: goto label_7F05217C;
    case 0x7F052180u: goto label_7F052180;
    case 0x7F052184u: goto label_7F052184;
    case 0x7F052188u: goto label_7F052188;
    case 0x7F05218Cu: goto label_7F05218C;
    case 0x7F052190u: goto label_7F052190;
    case 0x7F052194u: goto label_7F052194;
    case 0x7F052198u: goto label_7F052198;
    case 0x7F05219Cu: goto label_7F05219C;
    case 0x7F0521A0u: goto label_7F0521A0;
    case 0x7F0521A4u: goto label_7F0521A4;
    case 0x7F0521A8u: goto label_7F0521A8;
    case 0x7F0521ACu: goto label_7F0521AC;
    case 0x7F0521B0u: goto label_7F0521B0;
    case 0x7F0521B4u: goto label_7F0521B4;
    case 0x7F0521B8u: goto label_7F0521B8;
    case 0x7F0521BCu: goto label_7F0521BC;
    case 0x7F0521C0u: goto label_7F0521C0;
    case 0x7F0521C4u: goto label_7F0521C4;
    case 0x7F0521C8u: goto label_7F0521C8;
    case 0x7F0521CCu: goto label_7F0521CC;
    case 0x7F0521D0u: goto label_7F0521D0;
    case 0x7F0521D4u: goto label_7F0521D4;
    case 0x7F0521D8u: goto label_7F0521D8;
    case 0x7F0521DCu: goto label_7F0521DC;
    case 0x7F0521E0u: goto label_7F0521E0;
    case 0x7F0521E4u: goto label_7F0521E4;
    case 0x7F0521E8u: goto label_7F0521E8;
    case 0x7F0521ECu: goto label_7F0521EC;
    case 0x7F0521F0u: goto label_7F0521F0;
    case 0x7F0521F4u: goto label_7F0521F4;
    case 0x7F0521F8u: goto label_7F0521F8;
    case 0x7F0521FCu: goto label_7F0521FC;
    case 0x7F052200u: goto label_7F052200;
    case 0x7F052204u: goto label_7F052204;
    case 0x7F052208u: goto label_7F052208;
    case 0x7F05220Cu: goto label_7F05220C;
    case 0x7F052210u: goto label_7F052210;
    case 0x7F052214u: goto label_7F052214;
    case 0x7F052218u: goto label_7F052218;
    case 0x7F05221Cu: goto label_7F05221C;
    case 0x7F052220u: goto label_7F052220;
    case 0x7F052224u: goto label_7F052224;
    case 0x7F052228u: goto label_7F052228;
    case 0x7F05222Cu: goto label_7F05222C;
    case 0x7F052230u: goto label_7F052230;
    case 0x7F052234u: goto label_7F052234;
    case 0x7F052238u: goto label_7F052238;
    case 0x7F05223Cu: goto label_7F05223C;
    case 0x7F052240u: goto label_7F052240;
    case 0x7F052244u: goto label_7F052244;
    case 0x7F052248u: goto label_7F052248;
    case 0x7F05224Cu: goto label_7F05224C;
    case 0x7F052250u: goto label_7F052250;
    case 0x7F052254u: goto label_7F052254;
    case 0x7F052258u: goto label_7F052258;
    case 0x7F05225Cu: goto label_7F05225C;
    case 0x7F052260u: goto label_7F052260;
    case 0x7F052264u: goto label_7F052264;
    case 0x7F052268u: goto label_7F052268;
    case 0x7F05226Cu: goto label_7F05226C;
    case 0x7F052270u: goto label_7F052270;
    case 0x7F052274u: goto label_7F052274;
    case 0x7F052278u: goto label_7F052278;
    case 0x7F05227Cu: goto label_7F05227C;
    case 0x7F052280u: goto label_7F052280;
    case 0x7F052284u: goto label_7F052284;
    case 0x7F052288u: goto label_7F052288;
    case 0x7F05228Cu: goto label_7F05228C;
    case 0x7F052290u: goto label_7F052290;
    case 0x7F052294u: goto label_7F052294;
    case 0x7F052298u: goto label_7F052298;
    case 0x7F05229Cu: goto label_7F05229C;
    case 0x7F0522A0u: goto label_7F0522A0;
    case 0x7F0522A4u: goto label_7F0522A4;
    case 0x7F0522A8u: goto label_7F0522A8;
    case 0x7F0522ACu: goto label_7F0522AC;
    case 0x7F0522B0u: goto label_7F0522B0;
    case 0x7F0522B4u: goto label_7F0522B4;
    case 0x7F0522B8u: goto label_7F0522B8;
    case 0x7F0522BCu: goto label_7F0522BC;
    case 0x7F0522C0u: goto label_7F0522C0;
    case 0x7F0522C4u: goto label_7F0522C4;
    case 0x7F0522C8u: goto label_7F0522C8;
    case 0x7F0522CCu: goto label_7F0522CC;
    case 0x7F0522D0u: goto label_7F0522D0;
    case 0x7F0522D4u: goto label_7F0522D4;
    case 0x7F0522D8u: goto label_7F0522D8;
    case 0x7F0522DCu: goto label_7F0522DC;
    case 0x7F0522E0u: goto label_7F0522E0;
    case 0x7F0522E4u: goto label_7F0522E4;
    case 0x7F0522E8u: goto label_7F0522E8;
    case 0x7F0522ECu: goto label_7F0522EC;
    case 0x7F0522F0u: goto label_7F0522F0;
    case 0x7F0522F4u: goto label_7F0522F4;
    case 0x7F0522F8u: goto label_7F0522F8;
    case 0x7F0522FCu: goto label_7F0522FC;
    case 0x7F052300u: goto label_7F052300;
    case 0x7F052304u: goto label_7F052304;
    case 0x7F052308u: goto label_7F052308;
    case 0x7F05230Cu: goto label_7F05230C;
    case 0x7F052310u: goto label_7F052310;
    case 0x7F052314u: goto label_7F052314;
    case 0x7F052318u: goto label_7F052318;
    case 0x7F05231Cu: goto label_7F05231C;
    case 0x7F052320u: goto label_7F052320;
    case 0x7F052324u: goto label_7F052324;
    case 0x7F052328u: goto label_7F052328;
    case 0x7F05232Cu: goto label_7F05232C;
    case 0x7F052330u: goto label_7F052330;
    case 0x7F052334u: goto label_7F052334;
    case 0x7F052338u: goto label_7F052338;
    case 0x7F05233Cu: goto label_7F05233C;
    case 0x7F052340u: goto label_7F052340;
    case 0x7F052344u: goto label_7F052344;
    case 0x7F052348u: goto label_7F052348;
    case 0x7F05234Cu: goto label_7F05234C;
    case 0x7F052350u: goto label_7F052350;
    case 0x7F052354u: goto label_7F052354;
    case 0x7F052358u: goto label_7F052358;
    case 0x7F05235Cu: goto label_7F05235C;
    case 0x7F052360u: goto label_7F052360;
    case 0x7F052364u: goto label_7F052364;
    case 0x7F052368u: goto label_7F052368;
    case 0x7F05236Cu: goto label_7F05236C;
    case 0x7F052370u: goto label_7F052370;
    case 0x7F052374u: goto label_7F052374;
    case 0x7F052378u: goto label_7F052378;
    case 0x7F05237Cu: goto label_7F05237C;
    case 0x7F052380u: goto label_7F052380;
    case 0x7F052384u: goto label_7F052384;
    case 0x7F052388u: goto label_7F052388;
    case 0x7F05238Cu: goto label_7F05238C;
    case 0x7F052390u: goto label_7F052390;
    case 0x7F052394u: goto label_7F052394;
    case 0x7F052398u: goto label_7F052398;
    case 0x7F05239Cu: goto label_7F05239C;
    case 0x7F0523A0u: goto label_7F0523A0;
    case 0x7F0523A4u: goto label_7F0523A4;
    case 0x7F0523A8u: goto label_7F0523A8;
    case 0x7F0523ACu: goto label_7F0523AC;
    case 0x7F0523B0u: goto label_7F0523B0;
    case 0x7F0523B4u: goto label_7F0523B4;
    case 0x7F0523B8u: goto label_7F0523B8;
    case 0x7F0523BCu: goto label_7F0523BC;
    case 0x7F0523C0u: goto label_7F0523C0;
    case 0x7F0523C4u: goto label_7F0523C4;
    case 0x7F0523C8u: goto label_7F0523C8;
    case 0x7F0523CCu: goto label_7F0523CC;
    case 0x7F0523D0u: goto label_7F0523D0;
    case 0x7F0523D4u: goto label_7F0523D4;
    case 0x7F0523D8u: goto label_7F0523D8;
    case 0x7F0523DCu: goto label_7F0523DC;
    case 0x7F0523E0u: goto label_7F0523E0;
    case 0x7F0523E4u: goto label_7F0523E4;
    case 0x7F0523E8u: goto label_7F0523E8;
    case 0x7F0523ECu: goto label_7F0523EC;
    case 0x7F0523F0u: goto label_7F0523F0;
    case 0x7F0523F4u: goto label_7F0523F4;
    case 0x7F0523F8u: goto label_7F0523F8;
    case 0x7F0523FCu: goto label_7F0523FC;
    case 0x7F052400u: goto label_7F052400;
    case 0x7F052404u: goto label_7F052404;
    case 0x7F052408u: goto label_7F052408;
    case 0x7F05240Cu: goto label_7F05240C;
    case 0x7F052410u: goto label_7F052410;
    case 0x7F052414u: goto label_7F052414;
    case 0x7F052418u: goto label_7F052418;
    case 0x7F05241Cu: goto label_7F05241C;
    case 0x7F052420u: goto label_7F052420;
    case 0x7F052424u: goto label_7F052424;
    case 0x7F052428u: goto label_7F052428;
    case 0x7F05242Cu: goto label_7F05242C;
    case 0x7F052430u: goto label_7F052430;
    case 0x7F052434u: goto label_7F052434;
    case 0x7F052438u: goto label_7F052438;
    case 0x7F05243Cu: goto label_7F05243C;
    case 0x7F052440u: goto label_7F052440;
    case 0x7F052444u: goto label_7F052444;
    case 0x7F052448u: goto label_7F052448;
    case 0x7F05244Cu: goto label_7F05244C;
    case 0x7F052450u: goto label_7F052450;
    case 0x7F052454u: goto label_7F052454;
    case 0x7F052458u: goto label_7F052458;
    case 0x7F05245Cu: goto label_7F05245C;
    case 0x7F052460u: goto label_7F052460;
    case 0x7F052464u: goto label_7F052464;
    case 0x7F052468u: goto label_7F052468;
    case 0x7F05246Cu: goto label_7F05246C;
    case 0x7F052470u: goto label_7F052470;
    case 0x7F052474u: goto label_7F052474;
    case 0x7F052478u: goto label_7F052478;
    case 0x7F05247Cu: goto label_7F05247C;
    case 0x7F052480u: goto label_7F052480;
    case 0x7F052484u: goto label_7F052484;
    case 0x7F052488u: goto label_7F052488;
    case 0x7F05248Cu: goto label_7F05248C;
    case 0x7F052490u: goto label_7F052490;
    case 0x7F052494u: goto label_7F052494;
    case 0x7F052498u: goto label_7F052498;
    case 0x7F05249Cu: goto label_7F05249C;
    case 0x7F0524A0u: goto label_7F0524A0;
    case 0x7F0524A4u: goto label_7F0524A4;
    case 0x7F0524A8u: goto label_7F0524A8;
    case 0x7F0524ACu: goto label_7F0524AC;
    case 0x7F0524B0u: goto label_7F0524B0;
    case 0x7F0524B4u: goto label_7F0524B4;
    case 0x7F0524B8u: goto label_7F0524B8;
    case 0x7F0524BCu: goto label_7F0524BC;
    case 0x7F0524C0u: goto label_7F0524C0;
    case 0x7F0524C4u: goto label_7F0524C4;
    case 0x7F0524C8u: goto label_7F0524C8;
    case 0x7F0524CCu: goto label_7F0524CC;
    case 0x7F0524D0u: goto label_7F0524D0;
    case 0x7F0524D4u: goto label_7F0524D4;
    case 0x7F0524D8u: goto label_7F0524D8;
    case 0x7F0524DCu: goto label_7F0524DC;
    case 0x7F0524E0u: goto label_7F0524E0;
    case 0x7F0524E4u: goto label_7F0524E4;
    case 0x7F0524E8u: goto label_7F0524E8;
    case 0x7F0524ECu: goto label_7F0524EC;
    case 0x7F0524F0u: goto label_7F0524F0;
    case 0x7F0524F4u: goto label_7F0524F4;
    case 0x7F0524F8u: goto label_7F0524F8;
    case 0x7F0524FCu: goto label_7F0524FC;
    case 0x7F052500u: goto label_7F052500;
    case 0x7F052504u: goto label_7F052504;
    case 0x7F052508u: goto label_7F052508;
    case 0x7F05250Cu: goto label_7F05250C;
    case 0x7F052510u: goto label_7F052510;
    case 0x7F052514u: goto label_7F052514;
    case 0x7F052518u: goto label_7F052518;
    case 0x7F05251Cu: goto label_7F05251C;
    case 0x7F052520u: goto label_7F052520;
    case 0x7F052524u: goto label_7F052524;
    case 0x7F052528u: goto label_7F052528;
    case 0x7F05252Cu: goto label_7F05252C;
    case 0x7F052530u: goto label_7F052530;
    case 0x7F052534u: goto label_7F052534;
    case 0x7F052538u: goto label_7F052538;
    case 0x7F05253Cu: goto label_7F05253C;
    case 0x7F052540u: goto label_7F052540;
    case 0x7F052544u: goto label_7F052544;
    case 0x7F052548u: goto label_7F052548;
    case 0x7F05254Cu: goto label_7F05254C;
    case 0x7F052550u: goto label_7F052550;
    case 0x7F052554u: goto label_7F052554;
    case 0x7F052558u: goto label_7F052558;
    case 0x7F05255Cu: goto label_7F05255C;
    case 0x7F052560u: goto label_7F052560;
    case 0x7F052564u: goto label_7F052564;
    case 0x7F052568u: goto label_7F052568;
    case 0x7F05256Cu: goto label_7F05256C;
    case 0x7F052570u: goto label_7F052570;
    case 0x7F052574u: goto label_7F052574;
    case 0x7F052578u: goto label_7F052578;
    case 0x7F05257Cu: goto label_7F05257C;
    case 0x7F052580u: goto label_7F052580;
    case 0x7F052584u: goto label_7F052584;
    case 0x7F052588u: goto label_7F052588;
    case 0x7F05258Cu: goto label_7F05258C;
    case 0x7F052590u: goto label_7F052590;
    case 0x7F052594u: goto label_7F052594;
    case 0x7F052598u: goto label_7F052598;
    case 0x7F05259Cu: goto label_7F05259C;
    case 0x7F0525A0u: goto label_7F0525A0;
    case 0x7F0525A4u: goto label_7F0525A4;
    case 0x7F0525A8u: goto label_7F0525A8;
    case 0x7F0525ACu: goto label_7F0525AC;
    case 0x7F0525B0u: goto label_7F0525B0;
    case 0x7F0525B4u: goto label_7F0525B4;
    case 0x7F0525B8u: goto label_7F0525B8;
    case 0x7F0525BCu: goto label_7F0525BC;
    case 0x7F0525C0u: goto label_7F0525C0;
    case 0x7F0525C4u: goto label_7F0525C4;
    case 0x7F0525C8u: goto label_7F0525C8;
    case 0x7F0525CCu: goto label_7F0525CC;
    case 0x7F0525D0u: goto label_7F0525D0;
    case 0x7F0525D4u: goto label_7F0525D4;
    case 0x7F0525D8u: goto label_7F0525D8;
    case 0x7F0525DCu: goto label_7F0525DC;
    case 0x7F0525E0u: goto label_7F0525E0;
    case 0x7F0525E4u: goto label_7F0525E4;
    case 0x7F0525E8u: goto label_7F0525E8;
    case 0x7F0525ECu: goto label_7F0525EC;
    case 0x7F0525F0u: goto label_7F0525F0;
    case 0x7F0525F4u: goto label_7F0525F4;
    case 0x7F0525F8u: goto label_7F0525F8;
    case 0x7F0525FCu: goto label_7F0525FC;
    case 0x7F052600u: goto label_7F052600;
    case 0x7F052604u: goto label_7F052604;
    case 0x7F052608u: goto label_7F052608;
    case 0x7F05260Cu: goto label_7F05260C;
    case 0x7F052610u: goto label_7F052610;
    case 0x7F052614u: goto label_7F052614;
    case 0x7F052618u: goto label_7F052618;
    case 0x7F05261Cu: goto label_7F05261C;
    case 0x7F052620u: goto label_7F052620;
    case 0x7F052624u: goto label_7F052624;
    case 0x7F052628u: goto label_7F052628;
    case 0x7F05262Cu: goto label_7F05262C;
    case 0x7F052630u: goto label_7F052630;
    case 0x7F052634u: goto label_7F052634;
    case 0x7F052638u: goto label_7F052638;
    case 0x7F05263Cu: goto label_7F05263C;
    case 0x7F052640u: goto label_7F052640;
    case 0x7F052644u: goto label_7F052644;
    case 0x7F052648u: goto label_7F052648;
    case 0x7F05264Cu: goto label_7F05264C;
    case 0x7F052650u: goto label_7F052650;
    case 0x7F052654u: goto label_7F052654;
    case 0x7F052658u: goto label_7F052658;
    case 0x7F05265Cu: goto label_7F05265C;
    case 0x7F052660u: goto label_7F052660;
    case 0x7F052664u: goto label_7F052664;
    case 0x7F052668u: goto label_7F052668;
    case 0x7F05266Cu: goto label_7F05266C;
    case 0x7F052670u: goto label_7F052670;
    case 0x7F052674u: goto label_7F052674;
    case 0x7F052678u: goto label_7F052678;
    case 0x7F05267Cu: goto label_7F05267C;
    case 0x7F052680u: goto label_7F052680;
    case 0x7F052684u: goto label_7F052684;
    case 0x7F052688u: goto label_7F052688;
    case 0x7F05268Cu: goto label_7F05268C;
    case 0x7F052690u: goto label_7F052690;
    case 0x7F052694u: goto label_7F052694;
    case 0x7F052698u: goto label_7F052698;
    case 0x7F05269Cu: goto label_7F05269C;
    case 0x7F0526A0u: goto label_7F0526A0;
    case 0x7F0526A4u: goto label_7F0526A4;
    case 0x7F0526A8u: goto label_7F0526A8;
    case 0x7F0526ACu: goto label_7F0526AC;
    case 0x7F0526B0u: goto label_7F0526B0;
    case 0x7F0526B4u: goto label_7F0526B4;
    case 0x7F0526B8u: goto label_7F0526B8;
    case 0x7F0526BCu: goto label_7F0526BC;
    case 0x7F0526C0u: goto label_7F0526C0;
    case 0x7F0526C4u: goto label_7F0526C4;
    case 0x7F0526C8u: goto label_7F0526C8;
    case 0x7F0526CCu: goto label_7F0526CC;
    case 0x7F0526D0u: goto label_7F0526D0;
    case 0x7F0526D4u: goto label_7F0526D4;
    case 0x7F0526D8u: goto label_7F0526D8;
    case 0x7F0526DCu: goto label_7F0526DC;
    case 0x7F0526E0u: goto label_7F0526E0;
    case 0x7F0526E4u: goto label_7F0526E4;
    case 0x7F0526E8u: goto label_7F0526E8;
    case 0x7F0526ECu: goto label_7F0526EC;
    case 0x7F0526F0u: goto label_7F0526F0;
    case 0x7F0526F4u: goto label_7F0526F4;
    case 0x7F0526F8u: goto label_7F0526F8;
    case 0x7F0526FCu: goto label_7F0526FC;
    case 0x7F052700u: goto label_7F052700;
    case 0x7F052704u: goto label_7F052704;
    case 0x7F052708u: goto label_7F052708;
    case 0x7F05270Cu: goto label_7F05270C;
    case 0x7F052710u: goto label_7F052710;
    case 0x7F052714u: goto label_7F052714;
    case 0x7F052718u: goto label_7F052718;
    case 0x7F05271Cu: goto label_7F05271C;
    case 0x7F052720u: goto label_7F052720;
    case 0x7F052724u: goto label_7F052724;
    case 0x7F052728u: goto label_7F052728;
    case 0x7F05272Cu: goto label_7F05272C;
    case 0x7F052730u: goto label_7F052730;
    case 0x7F052734u: goto label_7F052734;
    case 0x7F052738u: goto label_7F052738;
    case 0x7F05273Cu: goto label_7F05273C;
    case 0x7F052740u: goto label_7F052740;
    case 0x7F052744u: goto label_7F052744;
    case 0x7F052748u: goto label_7F052748;
    case 0x7F05274Cu: goto label_7F05274C;
    case 0x7F052750u: goto label_7F052750;
    case 0x7F052754u: goto label_7F052754;
    case 0x7F052758u: goto label_7F052758;
    case 0x7F05275Cu: goto label_7F05275C;
    case 0x7F052760u: goto label_7F052760;
    case 0x7F052764u: goto label_7F052764;
    case 0x7F052768u: goto label_7F052768;
    case 0x7F05276Cu: goto label_7F05276C;
    case 0x7F052770u: goto label_7F052770;
    case 0x7F052774u: goto label_7F052774;
    case 0x7F052778u: goto label_7F052778;
    case 0x7F05277Cu: goto label_7F05277C;
    case 0x7F052780u: goto label_7F052780;
    case 0x7F052784u: goto label_7F052784;
    case 0x7F052788u: goto label_7F052788;
    case 0x7F05278Cu: goto label_7F05278C;
    case 0x7F052790u: goto label_7F052790;
    case 0x7F052794u: goto label_7F052794;
    case 0x7F052798u: goto label_7F052798;
    case 0x7F05279Cu: goto label_7F05279C;
    case 0x7F0527A0u: goto label_7F0527A0;
    case 0x7F0527A4u: goto label_7F0527A4;
    case 0x7F0527A8u: goto label_7F0527A8;
    case 0x7F0527ACu: goto label_7F0527AC;
    case 0x7F0527B0u: goto label_7F0527B0;
    case 0x7F0527B4u: goto label_7F0527B4;
    case 0x7F0527B8u: goto label_7F0527B8;
    case 0x7F0527BCu: goto label_7F0527BC;
    case 0x7F0527C0u: goto label_7F0527C0;
    case 0x7F0527C4u: goto label_7F0527C4;
    case 0x7F0527C8u: goto label_7F0527C8;
    case 0x7F0527CCu: goto label_7F0527CC;
    case 0x7F0527D0u: goto label_7F0527D0;
    case 0x7F0527D4u: goto label_7F0527D4;
    case 0x7F0527D8u: goto label_7F0527D8;
    case 0x7F0527DCu: goto label_7F0527DC;
    case 0x7F0527E0u: goto label_7F0527E0;
    case 0x7F0527E4u: goto label_7F0527E4;
    case 0x7F0527E8u: goto label_7F0527E8;
    case 0x7F0527ECu: goto label_7F0527EC;
    case 0x7F0527F0u: goto label_7F0527F0;
    case 0x7F0527F4u: goto label_7F0527F4;
    case 0x7F0527F8u: goto label_7F0527F8;
    case 0x7F0527FCu: goto label_7F0527FC;
    case 0x7F052800u: goto label_7F052800;
    case 0x7F052804u: goto label_7F052804;
    case 0x7F052808u: goto label_7F052808;
    case 0x7F05280Cu: goto label_7F05280C;
    case 0x7F052810u: goto label_7F052810;
    case 0x7F052814u: goto label_7F052814;
    case 0x7F052818u: goto label_7F052818;
    case 0x7F05281Cu: goto label_7F05281C;
    case 0x7F052820u: goto label_7F052820;
    case 0x7F052824u: goto label_7F052824;
    case 0x7F052828u: goto label_7F052828;
    case 0x7F05282Cu: goto label_7F05282C;
    case 0x7F052830u: goto label_7F052830;
    case 0x7F052834u: goto label_7F052834;
    case 0x7F052838u: goto label_7F052838;
    case 0x7F05283Cu: goto label_7F05283C;
    case 0x7F052840u: goto label_7F052840;
    case 0x7F052844u: goto label_7F052844;
    case 0x7F052848u: goto label_7F052848;
    case 0x7F05284Cu: goto label_7F05284C;
    case 0x7F052850u: goto label_7F052850;
    case 0x7F052854u: goto label_7F052854;
    case 0x7F052858u: goto label_7F052858;
    case 0x7F05285Cu: goto label_7F05285C;
    case 0x7F052860u: goto label_7F052860;
    case 0x7F052864u: goto label_7F052864;
    case 0x7F052868u: goto label_7F052868;
    case 0x7F05286Cu: goto label_7F05286C;
    case 0x7F052870u: goto label_7F052870;
    case 0x7F052874u: goto label_7F052874;
    case 0x7F052878u: goto label_7F052878;
    case 0x7F05287Cu: goto label_7F05287C;
    case 0x7F052880u: goto label_7F052880;
    case 0x7F052884u: goto label_7F052884;
    case 0x7F052888u: goto label_7F052888;
    case 0x7F05288Cu: goto label_7F05288C;
    case 0x7F052890u: goto label_7F052890;
    case 0x7F052894u: goto label_7F052894;
    case 0x7F052898u: goto label_7F052898;
    case 0x7F05289Cu: goto label_7F05289C;
    case 0x7F0528A0u: goto label_7F0528A0;
    case 0x7F0528A4u: goto label_7F0528A4;
    case 0x7F0528A8u: goto label_7F0528A8;
    case 0x7F0528ACu: goto label_7F0528AC;
    case 0x7F0528B0u: goto label_7F0528B0;
    case 0x7F0528B4u: goto label_7F0528B4;
    case 0x7F0528B8u: goto label_7F0528B8;
    case 0x7F0528BCu: goto label_7F0528BC;
    case 0x7F0528C0u: goto label_7F0528C0;
    case 0x7F0528C4u: goto label_7F0528C4;
    case 0x7F0528C8u: goto label_7F0528C8;
    case 0x7F0528CCu: goto label_7F0528CC;
    case 0x7F0528D0u: goto label_7F0528D0;
    case 0x7F0528D4u: goto label_7F0528D4;
    case 0x7F0528D8u: goto label_7F0528D8;
    case 0x7F0528DCu: goto label_7F0528DC;
    case 0x7F0528E0u: goto label_7F0528E0;
    case 0x7F0528E4u: goto label_7F0528E4;
    case 0x7F0528E8u: goto label_7F0528E8;
    case 0x7F0528ECu: goto label_7F0528EC;
    case 0x7F0528F0u: goto label_7F0528F0;
    case 0x7F0528F4u: goto label_7F0528F4;
    case 0x7F0528F8u: goto label_7F0528F8;
    case 0x7F0528FCu: goto label_7F0528FC;
    case 0x7F052900u: goto label_7F052900;
    case 0x7F052904u: goto label_7F052904;
    case 0x7F052908u: goto label_7F052908;
    case 0x7F05290Cu: goto label_7F05290C;
    case 0x7F052910u: goto label_7F052910;
    case 0x7F052914u: goto label_7F052914;
    case 0x7F052918u: goto label_7F052918;
    case 0x7F05291Cu: goto label_7F05291C;
    case 0x7F052920u: goto label_7F052920;
    case 0x7F052924u: goto label_7F052924;
    case 0x7F052928u: goto label_7F052928;
    case 0x7F05292Cu: goto label_7F05292C;
    case 0x7F052930u: goto label_7F052930;
    case 0x7F052934u: goto label_7F052934;
    case 0x7F052938u: goto label_7F052938;
    case 0x7F05293Cu: goto label_7F05293C;
    case 0x7F052940u: goto label_7F052940;
    case 0x7F052944u: goto label_7F052944;
    case 0x7F052948u: goto label_7F052948;
    case 0x7F05294Cu: goto label_7F05294C;
    case 0x7F052950u: goto label_7F052950;
    case 0x7F052954u: goto label_7F052954;
    case 0x7F052958u: goto label_7F052958;
    case 0x7F05295Cu: goto label_7F05295C;
    case 0x7F052960u: goto label_7F052960;
    case 0x7F052964u: goto label_7F052964;
    case 0x7F052968u: goto label_7F052968;
    case 0x7F05296Cu: goto label_7F05296C;
    case 0x7F052970u: goto label_7F052970;
    case 0x7F052974u: goto label_7F052974;
    case 0x7F052978u: goto label_7F052978;
    case 0x7F05297Cu: goto label_7F05297C;
    case 0x7F052980u: goto label_7F052980;
    case 0x7F052984u: goto label_7F052984;
    case 0x7F052988u: goto label_7F052988;
    case 0x7F05298Cu: goto label_7F05298C;
    case 0x7F052990u: goto label_7F052990;
    case 0x7F052994u: goto label_7F052994;
    case 0x7F052998u: goto label_7F052998;
    case 0x7F05299Cu: goto label_7F05299C;
    case 0x7F0529A0u: goto label_7F0529A0;
    case 0x7F0529A4u: goto label_7F0529A4;
    case 0x7F0529A8u: goto label_7F0529A8;
    case 0x7F0529ACu: goto label_7F0529AC;
    case 0x7F0529B0u: goto label_7F0529B0;
    case 0x7F0529B4u: goto label_7F0529B4;
    case 0x7F0529B8u: goto label_7F0529B8;
    case 0x7F0529BCu: goto label_7F0529BC;
    case 0x7F0529C0u: goto label_7F0529C0;
    case 0x7F0529C4u: goto label_7F0529C4;
    case 0x7F0529C8u: goto label_7F0529C8;
    case 0x7F0529CCu: goto label_7F0529CC;
    case 0x7F0529D0u: goto label_7F0529D0;
    case 0x7F0529D4u: goto label_7F0529D4;
    case 0x7F0529D8u: goto label_7F0529D8;
    case 0x7F0529DCu: goto label_7F0529DC;
    case 0x7F0529E0u: goto label_7F0529E0;
    case 0x7F0529E4u: goto label_7F0529E4;
    case 0x7F0529E8u: goto label_7F0529E8;
    case 0x7F0529ECu: goto label_7F0529EC;
    case 0x7F0529F0u: goto label_7F0529F0;
    case 0x7F0529F4u: goto label_7F0529F4;
    case 0x7F0529F8u: goto label_7F0529F8;
    case 0x7F0529FCu: goto label_7F0529FC;
    case 0x7F052A00u: goto label_7F052A00;
    case 0x7F052A04u: goto label_7F052A04;
    case 0x7F052A08u: goto label_7F052A08;
    case 0x7F052A0Cu: goto label_7F052A0C;
    case 0x7F052A10u: goto label_7F052A10;
    case 0x7F052A14u: goto label_7F052A14;
    case 0x7F052A18u: goto label_7F052A18;
    case 0x7F052A1Cu: goto label_7F052A1C;
    case 0x7F052A20u: goto label_7F052A20;
    case 0x7F052A24u: goto label_7F052A24;
    case 0x7F052A28u: goto label_7F052A28;
    case 0x7F052A2Cu: goto label_7F052A2C;
    case 0x7F052A30u: goto label_7F052A30;
    case 0x7F052A34u: goto label_7F052A34;
    case 0x7F052A38u: goto label_7F052A38;
    case 0x7F052A3Cu: goto label_7F052A3C;
    case 0x7F052A40u: goto label_7F052A40;
    case 0x7F052A44u: goto label_7F052A44;
    case 0x7F052A48u: goto label_7F052A48;
    case 0x7F052A4Cu: goto label_7F052A4C;
    case 0x7F052A50u: goto label_7F052A50;
    case 0x7F052A54u: goto label_7F052A54;
    case 0x7F052A58u: goto label_7F052A58;
    case 0x7F052A5Cu: goto label_7F052A5C;
    case 0x7F052A60u: goto label_7F052A60;
    case 0x7F052A64u: goto label_7F052A64;
    case 0x7F052A68u: goto label_7F052A68;
    case 0x7F052A6Cu: goto label_7F052A6C;
    case 0x7F052A70u: goto label_7F052A70;
    case 0x7F052A74u: goto label_7F052A74;
    case 0x7F052A78u: goto label_7F052A78;
    case 0x7F052A7Cu: goto label_7F052A7C;
    case 0x7F052A80u: goto label_7F052A80;
    case 0x7F052A84u: goto label_7F052A84;
    case 0x7F052A88u: goto label_7F052A88;
    case 0x7F052A8Cu: goto label_7F052A8C;
    case 0x7F052A90u: goto label_7F052A90;
    case 0x7F052A94u: goto label_7F052A94;
    case 0x7F052A98u: goto label_7F052A98;
    case 0x7F052A9Cu: goto label_7F052A9C;
    case 0x7F052AA0u: goto label_7F052AA0;
    case 0x7F052AA4u: goto label_7F052AA4;
    case 0x7F052AA8u: goto label_7F052AA8;
    case 0x7F052AACu: goto label_7F052AAC;
    case 0x7F052AB0u: goto label_7F052AB0;
    case 0x7F052AB4u: goto label_7F052AB4;
    case 0x7F052AB8u: goto label_7F052AB8;
    case 0x7F052ABCu: goto label_7F052ABC;
    case 0x7F052AC0u: goto label_7F052AC0;
    case 0x7F052AC4u: goto label_7F052AC4;
    case 0x7F052AC8u: goto label_7F052AC8;
    case 0x7F052ACCu: goto label_7F052ACC;
    case 0x7F052AD0u: goto label_7F052AD0;
    case 0x7F052AD4u: goto label_7F052AD4;
    case 0x7F052AD8u: goto label_7F052AD8;
    case 0x7F052ADCu: goto label_7F052ADC;
    case 0x7F052AE0u: goto label_7F052AE0;
    case 0x7F052AE4u: goto label_7F052AE4;
    case 0x7F052AE8u: goto label_7F052AE8;
    case 0x7F052AECu: goto label_7F052AEC;
    case 0x7F052AF0u: goto label_7F052AF0;
    case 0x7F052AF4u: goto label_7F052AF4;
    case 0x7F052AF8u: goto label_7F052AF8;
    case 0x7F052AFCu: goto label_7F052AFC;
    case 0x7F052B00u: goto label_7F052B00;
    case 0x7F052B04u: goto label_7F052B04;
    case 0x7F052B08u: goto label_7F052B08;
    case 0x7F052B0Cu: goto label_7F052B0C;
    case 0x7F052B10u: goto label_7F052B10;
    case 0x7F052B14u: goto label_7F052B14;
    case 0x7F052B18u: goto label_7F052B18;
    case 0x7F052B1Cu: goto label_7F052B1C;
    case 0x7F052B20u: goto label_7F052B20;
    case 0x7F052B24u: goto label_7F052B24;
    case 0x7F052B28u: goto label_7F052B28;
    case 0x7F052B2Cu: goto label_7F052B2C;
    case 0x7F052B30u: goto label_7F052B30;
    case 0x7F052B34u: goto label_7F052B34;
    case 0x7F052B38u: goto label_7F052B38;
    case 0x7F052B3Cu: goto label_7F052B3C;
    case 0x7F052B40u: goto label_7F052B40;
    case 0x7F052B44u: goto label_7F052B44;
    case 0x7F052B48u: goto label_7F052B48;
    case 0x7F052B4Cu: goto label_7F052B4C;
    case 0x7F052B50u: goto label_7F052B50;
    case 0x7F052B54u: goto label_7F052B54;
    case 0x7F052B58u: goto label_7F052B58;
    case 0x7F052B5Cu: goto label_7F052B5C;
    case 0x7F052B60u: goto label_7F052B60;
    case 0x7F052B64u: goto label_7F052B64;
    case 0x7F052B68u: goto label_7F052B68;
    case 0x7F052B6Cu: goto label_7F052B6C;
    case 0x7F052B70u: goto label_7F052B70;
    case 0x7F052B74u: goto label_7F052B74;
    case 0x7F052B78u: goto label_7F052B78;
    case 0x7F052B7Cu: goto label_7F052B7C;
    case 0x7F052B80u: goto label_7F052B80;
    case 0x7F052B84u: goto label_7F052B84;
    case 0x7F052B88u: goto label_7F052B88;
    case 0x7F052B8Cu: goto label_7F052B8C;
    case 0x7F052B90u: goto label_7F052B90;
    case 0x7F052B94u: goto label_7F052B94;
    case 0x7F052B98u: goto label_7F052B98;
    case 0x7F052B9Cu: goto label_7F052B9C;
    case 0x7F052BA0u: goto label_7F052BA0;
    case 0x7F052BA4u: goto label_7F052BA4;
    case 0x7F052BA8u: goto label_7F052BA8;
    case 0x7F052BACu: goto label_7F052BAC;
    case 0x7F052BB0u: goto label_7F052BB0;
    case 0x7F052BB4u: goto label_7F052BB4;
    case 0x7F052BB8u: goto label_7F052BB8;
    case 0x7F052BBCu: goto label_7F052BBC;
    case 0x7F052BC0u: goto label_7F052BC0;
    case 0x7F052BC4u: goto label_7F052BC4;
    case 0x7F052BC8u: goto label_7F052BC8;
    case 0x7F052BCCu: goto label_7F052BCC;
    case 0x7F052BD0u: goto label_7F052BD0;
    case 0x7F052BD4u: goto label_7F052BD4;
    case 0x7F052BD8u: goto label_7F052BD8;
    case 0x7F052BDCu: goto label_7F052BDC;
    case 0x7F052BE0u: goto label_7F052BE0;
    case 0x7F052BE4u: goto label_7F052BE4;
    case 0x7F052BE8u: goto label_7F052BE8;
    case 0x7F052BECu: goto label_7F052BEC;
    case 0x7F052BF0u: goto label_7F052BF0;
    case 0x7F052BF4u: goto label_7F052BF4;
    case 0x7F052BF8u: goto label_7F052BF8;
    case 0x7F052BFCu: goto label_7F052BFC;
    case 0x7F052C00u: goto label_7F052C00;
    case 0x7F052C04u: goto label_7F052C04;
    case 0x7F052C08u: goto label_7F052C08;
    case 0x7F052C0Cu: goto label_7F052C0C;
    case 0x7F052C10u: goto label_7F052C10;
    case 0x7F052C14u: goto label_7F052C14;
    case 0x7F052C18u: goto label_7F052C18;
    case 0x7F052C1Cu: goto label_7F052C1C;
    case 0x7F052C20u: goto label_7F052C20;
    case 0x7F052C24u: goto label_7F052C24;
    case 0x7F052C28u: goto label_7F052C28;
    case 0x7F052C2Cu: goto label_7F052C2C;
    case 0x7F052C30u: goto label_7F052C30;
    case 0x7F052C34u: goto label_7F052C34;
    case 0x7F052C38u: goto label_7F052C38;
    case 0x7F052C3Cu: goto label_7F052C3C;
    case 0x7F052C40u: goto label_7F052C40;
    case 0x7F052C44u: goto label_7F052C44;
    case 0x7F052C48u: goto label_7F052C48;
    case 0x7F052C4Cu: goto label_7F052C4C;
    case 0x7F052C50u: goto label_7F052C50;
    case 0x7F052C54u: goto label_7F052C54;
    case 0x7F052C58u: goto label_7F052C58;
    case 0x7F052C5Cu: goto label_7F052C5C;
    case 0x7F052C60u: goto label_7F052C60;
    case 0x7F052C64u: goto label_7F052C64;
    case 0x7F052C68u: goto label_7F052C68;
    case 0x7F052C6Cu: goto label_7F052C6C;
    case 0x7F052C70u: goto label_7F052C70;
    case 0x7F052C74u: goto label_7F052C74;
    case 0x7F052C78u: goto label_7F052C78;
    case 0x7F052C7Cu: goto label_7F052C7C;
    case 0x7F052C80u: goto label_7F052C80;
    case 0x7F052C84u: goto label_7F052C84;
    case 0x7F052C88u: goto label_7F052C88;
    case 0x7F052C8Cu: goto label_7F052C8C;
    case 0x7F052C90u: goto label_7F052C90;
    case 0x7F052C94u: goto label_7F052C94;
    case 0x7F052C98u: goto label_7F052C98;
    case 0x7F052C9Cu: goto label_7F052C9C;
    case 0x7F052CA0u: goto label_7F052CA0;
    case 0x7F052CA4u: goto label_7F052CA4;
    case 0x7F052CA8u: goto label_7F052CA8;
    case 0x7F052CACu: goto label_7F052CAC;
    case 0x7F052CB0u: goto label_7F052CB0;
    case 0x7F052CB4u: goto label_7F052CB4;
    case 0x7F052CB8u: goto label_7F052CB8;
    case 0x7F052CBCu: goto label_7F052CBC;
    case 0x7F052CC0u: goto label_7F052CC0;
    case 0x7F052CC4u: goto label_7F052CC4;
    case 0x7F052CC8u: goto label_7F052CC8;
    case 0x7F052CCCu: goto label_7F052CCC;
    case 0x7F052CD0u: goto label_7F052CD0;
    case 0x7F052CD4u: goto label_7F052CD4;
    case 0x7F052CD8u: goto label_7F052CD8;
    case 0x7F052CDCu: goto label_7F052CDC;
    case 0x7F052CE0u: goto label_7F052CE0;
    case 0x7F052CE4u: goto label_7F052CE4;
    case 0x7F052CE8u: goto label_7F052CE8;
    case 0x7F052CECu: goto label_7F052CEC;
    case 0x7F052CF0u: goto label_7F052CF0;
    case 0x7F052CF4u: goto label_7F052CF4;
    case 0x7F052CF8u: goto label_7F052CF8;
    case 0x7F052CFCu: goto label_7F052CFC;
    case 0x7F052D00u: goto label_7F052D00;
    case 0x7F052D04u: goto label_7F052D04;
    case 0x7F052D08u: goto label_7F052D08;
    case 0x7F052D0Cu: goto label_7F052D0C;
    case 0x7F052D10u: goto label_7F052D10;
    case 0x7F052D14u: goto label_7F052D14;
    case 0x7F052D18u: goto label_7F052D18;
    case 0x7F052D1Cu: goto label_7F052D1C;
    case 0x7F052D20u: goto label_7F052D20;
    case 0x7F052D24u: goto label_7F052D24;
    case 0x7F052D28u: goto label_7F052D28;
    case 0x7F052D2Cu: goto label_7F052D2C;
    case 0x7F052D30u: goto label_7F052D30;
    case 0x7F052D34u: goto label_7F052D34;
    case 0x7F052D38u: goto label_7F052D38;
    case 0x7F052D3Cu: goto label_7F052D3C;
    case 0x7F052D40u: goto label_7F052D40;
    case 0x7F052D44u: goto label_7F052D44;
    case 0x7F052D48u: goto label_7F052D48;
    case 0x7F052D4Cu: goto label_7F052D4C;
    case 0x7F052D50u: goto label_7F052D50;
    case 0x7F052D54u: goto label_7F052D54;
    case 0x7F052D58u: goto label_7F052D58;
    case 0x7F052D5Cu: goto label_7F052D5C;
    case 0x7F052D60u: goto label_7F052D60;
    case 0x7F052D64u: goto label_7F052D64;
    case 0x7F052D68u: goto label_7F052D68;
    case 0x7F052D6Cu: goto label_7F052D6C;
    case 0x7F052D70u: goto label_7F052D70;
    case 0x7F052D74u: goto label_7F052D74;
    case 0x7F052D78u: goto label_7F052D78;
    case 0x7F052D7Cu: goto label_7F052D7C;
    case 0x7F052D80u: goto label_7F052D80;
    case 0x7F052D84u: goto label_7F052D84;
    case 0x7F052D88u: goto label_7F052D88;
    case 0x7F052D8Cu: goto label_7F052D8C;
    case 0x7F052D90u: goto label_7F052D90;
    case 0x7F052D94u: goto label_7F052D94;
    case 0x7F052D98u: goto label_7F052D98;
    case 0x7F052D9Cu: goto label_7F052D9C;
    case 0x7F052DA0u: goto label_7F052DA0;
    case 0x7F052DA4u: goto label_7F052DA4;
    case 0x7F052DA8u: goto label_7F052DA8;
    case 0x7F052DACu: goto label_7F052DAC;
    case 0x7F052DB0u: goto label_7F052DB0;
    case 0x7F052DB4u: goto label_7F052DB4;
    case 0x7F052DB8u: goto label_7F052DB8;
    case 0x7F052DBCu: goto label_7F052DBC;
    case 0x7F052DC0u: goto label_7F052DC0;
    case 0x7F052DC4u: goto label_7F052DC4;
    case 0x7F052DC8u: goto label_7F052DC8;
    case 0x7F052DCCu: goto label_7F052DCC;
    case 0x7F052DD0u: goto label_7F052DD0;
    case 0x7F052DD4u: goto label_7F052DD4;
    case 0x7F052DD8u: goto label_7F052DD8;
    case 0x7F052DDCu: goto label_7F052DDC;
    case 0x7F052DE0u: goto label_7F052DE0;
    case 0x7F052DE4u: goto label_7F052DE4;
    case 0x7F052DE8u: goto label_7F052DE8;
    case 0x7F052DECu: goto label_7F052DEC;
    case 0x7F052DF0u: goto label_7F052DF0;
    case 0x7F052DF4u: goto label_7F052DF4;
    case 0x7F052DF8u: goto label_7F052DF8;
    case 0x7F052DFCu: goto label_7F052DFC;
    case 0x7F052E00u: goto label_7F052E00;
    case 0x7F052E04u: goto label_7F052E04;
    case 0x7F052E08u: goto label_7F052E08;
    case 0x7F052E0Cu: goto label_7F052E0C;
    case 0x7F052E10u: goto label_7F052E10;
    case 0x7F052E14u: goto label_7F052E14;
    case 0x7F052E18u: goto label_7F052E18;
    case 0x7F052E1Cu: goto label_7F052E1C;
    case 0x7F052E20u: goto label_7F052E20;
    case 0x7F052E24u: goto label_7F052E24;
    case 0x7F052E28u: goto label_7F052E28;
    case 0x7F052E2Cu: goto label_7F052E2C;
    case 0x7F052E30u: goto label_7F052E30;
    case 0x7F052E34u: goto label_7F052E34;
    case 0x7F052E38u: goto label_7F052E38;
    case 0x7F052E3Cu: goto label_7F052E3C;
    case 0x7F052E40u: goto label_7F052E40;
    case 0x7F052E44u: goto label_7F052E44;
    case 0x7F052E48u: goto label_7F052E48;
    case 0x7F052E4Cu: goto label_7F052E4C;
    case 0x7F052E50u: goto label_7F052E50;
    case 0x7F052E54u: goto label_7F052E54;
    case 0x7F052E58u: goto label_7F052E58;
    case 0x7F052E5Cu: goto label_7F052E5C;
    case 0x7F052E60u: goto label_7F052E60;
    case 0x7F052E64u: goto label_7F052E64;
    case 0x7F052E68u: goto label_7F052E68;
    case 0x7F052E6Cu: goto label_7F052E6C;
    case 0x7F052E70u: goto label_7F052E70;
    case 0x7F052E74u: goto label_7F052E74;
    case 0x7F052E78u: goto label_7F052E78;
    case 0x7F052E7Cu: goto label_7F052E7C;
    case 0x7F052E80u: goto label_7F052E80;
    case 0x7F052E84u: goto label_7F052E84;
    case 0x7F052E88u: goto label_7F052E88;
    case 0x7F052E8Cu: goto label_7F052E8C;
    case 0x7F052E90u: goto label_7F052E90;
    case 0x7F052E94u: goto label_7F052E94;
    case 0x7F052E98u: goto label_7F052E98;
    case 0x7F052E9Cu: goto label_7F052E9C;
    case 0x7F052EA0u: goto label_7F052EA0;
    case 0x7F052EA4u: goto label_7F052EA4;
    case 0x7F052EA8u: goto label_7F052EA8;
    case 0x7F052EACu: goto label_7F052EAC;
    case 0x7F052EB0u: goto label_7F052EB0;
    case 0x7F052EB4u: goto label_7F052EB4;
    case 0x7F052EB8u: goto label_7F052EB8;
    case 0x7F052EBCu: goto label_7F052EBC;
    case 0x7F052EC0u: goto label_7F052EC0;
    case 0x7F052EC4u: goto label_7F052EC4;
    case 0x7F052EC8u: goto label_7F052EC8;
    case 0x7F052ECCu: goto label_7F052ECC;
    case 0x7F052ED0u: goto label_7F052ED0;
    case 0x7F052ED4u: goto label_7F052ED4;
    case 0x7F052ED8u: goto label_7F052ED8;
    case 0x7F052EDCu: goto label_7F052EDC;
    case 0x7F052EE0u: goto label_7F052EE0;
    case 0x7F052EE4u: goto label_7F052EE4;
    case 0x7F052EE8u: goto label_7F052EE8;
    case 0x7F052EECu: goto label_7F052EEC;
    case 0x7F052EF0u: goto label_7F052EF0;
    case 0x7F052EF4u: goto label_7F052EF4;
    case 0x7F052EF8u: goto label_7F052EF8;
    case 0x7F052EFCu: goto label_7F052EFC;
    case 0x7F052F00u: goto label_7F052F00;
    case 0x7F052F04u: goto label_7F052F04;
    case 0x7F052F08u: goto label_7F052F08;
    case 0x7F052F0Cu: goto label_7F052F0C;
    case 0x7F052F10u: goto label_7F052F10;
    case 0x7F052F14u: goto label_7F052F14;
    case 0x7F052F18u: goto label_7F052F18;
    case 0x7F052F1Cu: goto label_7F052F1C;
    case 0x7F052F20u: goto label_7F052F20;
    case 0x7F052F24u: goto label_7F052F24;
    case 0x7F052F28u: goto label_7F052F28;
    case 0x7F052F2Cu: goto label_7F052F2C;
    case 0x7F052F30u: goto label_7F052F30;
    case 0x7F052F34u: goto label_7F052F34;
    case 0x7F052F38u: goto label_7F052F38;
    case 0x7F052F3Cu: goto label_7F052F3C;
    case 0x7F052F40u: goto label_7F052F40;
    case 0x7F052F44u: goto label_7F052F44;
    case 0x7F052F48u: goto label_7F052F48;
    case 0x7F052F4Cu: goto label_7F052F4C;
    case 0x7F052F50u: goto label_7F052F50;
    case 0x7F052F54u: goto label_7F052F54;
    case 0x7F052F58u: goto label_7F052F58;
    case 0x7F052F5Cu: goto label_7F052F5C;
    case 0x7F052F60u: goto label_7F052F60;
    case 0x7F052F64u: goto label_7F052F64;
    case 0x7F052F68u: goto label_7F052F68;
    case 0x7F052F6Cu: goto label_7F052F6C;
    case 0x7F052F70u: goto label_7F052F70;
    case 0x7F052F74u: goto label_7F052F74;
    case 0x7F052F78u: goto label_7F052F78;
    case 0x7F052F7Cu: goto label_7F052F7C;
    case 0x7F052F80u: goto label_7F052F80;
    case 0x7F052F84u: goto label_7F052F84;
    case 0x7F052F88u: goto label_7F052F88;
    case 0x7F052F8Cu: goto label_7F052F8C;
    case 0x7F052F90u: goto label_7F052F90;
    case 0x7F052F94u: goto label_7F052F94;
    case 0x7F052F98u: goto label_7F052F98;
    case 0x7F052F9Cu: goto label_7F052F9C;
    case 0x7F052FA0u: goto label_7F052FA0;
    case 0x7F052FA4u: goto label_7F052FA4;
    case 0x7F052FA8u: goto label_7F052FA8;
    case 0x7F052FACu: goto label_7F052FAC;
    case 0x7F052FB0u: goto label_7F052FB0;
    case 0x7F052FB4u: goto label_7F052FB4;
    case 0x7F052FB8u: goto label_7F052FB8;
    case 0x7F052FBCu: goto label_7F052FBC;
    case 0x7F052FC0u: goto label_7F052FC0;
    case 0x7F052FC4u: goto label_7F052FC4;
    case 0x7F052FC8u: goto label_7F052FC8;
    case 0x7F052FCCu: goto label_7F052FCC;
    case 0x7F052FD0u: goto label_7F052FD0;
    case 0x7F052FD4u: goto label_7F052FD4;
    case 0x7F052FD8u: goto label_7F052FD8;
    case 0x7F052FDCu: goto label_7F052FDC;
    case 0x7F052FE0u: goto label_7F052FE0;
    case 0x7F052FE4u: goto label_7F052FE4;
    case 0x7F052FE8u: goto label_7F052FE8;
    case 0x7F052FECu: goto label_7F052FEC;
    case 0x7F052FF0u: goto label_7F052FF0;
    case 0x7F052FF4u: goto label_7F052FF4;
    case 0x7F052FF8u: goto label_7F052FF8;
    case 0x7F052FFCu: goto label_7F052FFC;
    case 0x7F053000u: goto label_7F053000;
    case 0x7F053004u: goto label_7F053004;
    case 0x7F053008u: goto label_7F053008;
    case 0x7F05300Cu: goto label_7F05300C;
    case 0x7F053010u: goto label_7F053010;
    case 0x7F053014u: goto label_7F053014;
    case 0x7F053018u: goto label_7F053018;
    case 0x7F05301Cu: goto label_7F05301C;
    case 0x7F053020u: goto label_7F053020;
    case 0x7F053024u: goto label_7F053024;
    case 0x7F053028u: goto label_7F053028;
    case 0x7F05302Cu: goto label_7F05302C;
    case 0x7F053030u: goto label_7F053030;
    case 0x7F053034u: goto label_7F053034;
    case 0x7F053038u: goto label_7F053038;
    case 0x7F05303Cu: goto label_7F05303C;
    case 0x7F053040u: goto label_7F053040;
    case 0x7F053044u: goto label_7F053044;
    case 0x7F053048u: goto label_7F053048;
    case 0x7F05304Cu: goto label_7F05304C;
    case 0x7F053050u: goto label_7F053050;
    case 0x7F053054u: goto label_7F053054;
    case 0x7F053058u: goto label_7F053058;
    case 0x7F05305Cu: goto label_7F05305C;
    case 0x7F053060u: goto label_7F053060;
    case 0x7F053064u: goto label_7F053064;
    case 0x7F053068u: goto label_7F053068;
    case 0x7F05306Cu: goto label_7F05306C;
    case 0x7F053070u: goto label_7F053070;
    case 0x7F053074u: goto label_7F053074;
    case 0x7F053078u: goto label_7F053078;
    case 0x7F05307Cu: goto label_7F05307C;
    case 0x7F053080u: goto label_7F053080;
    case 0x7F053084u: goto label_7F053084;
    case 0x7F053088u: goto label_7F053088;
    case 0x7F05308Cu: goto label_7F05308C;
    case 0x7F053090u: goto label_7F053090;
    case 0x7F053094u: goto label_7F053094;
    case 0x7F053098u: goto label_7F053098;
    case 0x7F05309Cu: goto label_7F05309C;
    case 0x7F0530A0u: goto label_7F0530A0;
    case 0x7F0530A4u: goto label_7F0530A4;
    case 0x7F0530A8u: goto label_7F0530A8;
    case 0x7F0530ACu: goto label_7F0530AC;
    case 0x7F0530B0u: goto label_7F0530B0;
    case 0x7F0530B4u: goto label_7F0530B4;
    case 0x7F0530B8u: goto label_7F0530B8;
    case 0x7F0530BCu: goto label_7F0530BC;
    case 0x7F0530C0u: goto label_7F0530C0;
    case 0x7F0530C4u: goto label_7F0530C4;
    case 0x7F0530C8u: goto label_7F0530C8;
    case 0x7F0530CCu: goto label_7F0530CC;
    case 0x7F0530D0u: goto label_7F0530D0;
    case 0x7F0530D4u: goto label_7F0530D4;
    case 0x7F0530D8u: goto label_7F0530D8;
    case 0x7F0530DCu: goto label_7F0530DC;
    case 0x7F0530E0u: goto label_7F0530E0;
    case 0x7F0530E4u: goto label_7F0530E4;
    case 0x7F0530E8u: goto label_7F0530E8;
    case 0x7F0530ECu: goto label_7F0530EC;
    case 0x7F0530F0u: goto label_7F0530F0;
    case 0x7F0530F4u: goto label_7F0530F4;
    case 0x7F0530F8u: goto label_7F0530F8;
    case 0x7F0530FCu: goto label_7F0530FC;
    case 0x7F053100u: goto label_7F053100;
    case 0x7F053104u: goto label_7F053104;
    case 0x7F053108u: goto label_7F053108;
    case 0x7F05310Cu: goto label_7F05310C;
    case 0x7F053110u: goto label_7F053110;
    case 0x7F053114u: goto label_7F053114;
    case 0x7F053118u: goto label_7F053118;
    case 0x7F05311Cu: goto label_7F05311C;
    case 0x7F053120u: goto label_7F053120;
    case 0x7F053124u: goto label_7F053124;
    case 0x7F053128u: goto label_7F053128;
    case 0x7F05312Cu: goto label_7F05312C;
    case 0x7F053130u: goto label_7F053130;
    case 0x7F053134u: goto label_7F053134;
    case 0x7F053138u: goto label_7F053138;
    case 0x7F05313Cu: goto label_7F05313C;
    case 0x7F053140u: goto label_7F053140;
    case 0x7F053144u: goto label_7F053144;
    case 0x7F053148u: goto label_7F053148;
    case 0x7F05314Cu: goto label_7F05314C;
    case 0x7F053150u: goto label_7F053150;
    case 0x7F053154u: goto label_7F053154;
    case 0x7F053158u: goto label_7F053158;
    case 0x7F05315Cu: goto label_7F05315C;
    case 0x7F053160u: goto label_7F053160;
    case 0x7F053164u: goto label_7F053164;
    case 0x7F053168u: goto label_7F053168;
    case 0x7F05316Cu: goto label_7F05316C;
    case 0x7F053170u: goto label_7F053170;
    case 0x7F053174u: goto label_7F053174;
    case 0x7F053178u: goto label_7F053178;
    case 0x7F05317Cu: goto label_7F05317C;
    case 0x7F053180u: goto label_7F053180;
    case 0x7F053184u: goto label_7F053184;
    case 0x7F053188u: goto label_7F053188;
    case 0x7F05318Cu: goto label_7F05318C;
    case 0x7F053190u: goto label_7F053190;
    case 0x7F053194u: goto label_7F053194;
    case 0x7F053198u: goto label_7F053198;
    case 0x7F05319Cu: goto label_7F05319C;
    case 0x7F0531A0u: goto label_7F0531A0;
    case 0x7F0531A4u: goto label_7F0531A4;
    case 0x7F0531A8u: goto label_7F0531A8;
    case 0x7F0531ACu: goto label_7F0531AC;
    case 0x7F0531B0u: goto label_7F0531B0;
    case 0x7F0531B4u: goto label_7F0531B4;
    case 0x7F0531B8u: goto label_7F0531B8;
    case 0x7F0531BCu: goto label_7F0531BC;
    case 0x7F0531C0u: goto label_7F0531C0;
    case 0x7F0531C4u: goto label_7F0531C4;
    case 0x7F0531C8u: goto label_7F0531C8;
    case 0x7F0531CCu: goto label_7F0531CC;
    case 0x7F0531D0u: goto label_7F0531D0;
    case 0x7F0531D4u: goto label_7F0531D4;
    case 0x7F0531D8u: goto label_7F0531D8;
    case 0x7F0531DCu: goto label_7F0531DC;
    case 0x7F0531E0u: goto label_7F0531E0;
    case 0x7F0531E4u: goto label_7F0531E4;
    case 0x7F0531E8u: goto label_7F0531E8;
    case 0x7F0531ECu: goto label_7F0531EC;
    case 0x7F0531F0u: goto label_7F0531F0;
    case 0x7F0531F4u: goto label_7F0531F4;
    case 0x7F0531F8u: goto label_7F0531F8;
    case 0x7F0531FCu: goto label_7F0531FC;
    case 0x7F053200u: goto label_7F053200;
    case 0x7F053204u: goto label_7F053204;
    case 0x7F053208u: goto label_7F053208;
    case 0x7F05320Cu: goto label_7F05320C;
    case 0x7F053210u: goto label_7F053210;
    case 0x7F053214u: goto label_7F053214;
    case 0x7F053218u: goto label_7F053218;
    case 0x7F05321Cu: goto label_7F05321C;
    case 0x7F053220u: goto label_7F053220;
    case 0x7F053224u: goto label_7F053224;
    case 0x7F053228u: goto label_7F053228;
    case 0x7F05322Cu: goto label_7F05322C;
    case 0x7F053230u: goto label_7F053230;
    case 0x7F053234u: goto label_7F053234;
    case 0x7F053238u: goto label_7F053238;
    case 0x7F05323Cu: goto label_7F05323C;
    case 0x7F053240u: goto label_7F053240;
    case 0x7F053244u: goto label_7F053244;
    case 0x7F053248u: goto label_7F053248;
    case 0x7F05324Cu: goto label_7F05324C;
    case 0x7F053250u: goto label_7F053250;
    case 0x7F053254u: goto label_7F053254;
    case 0x7F053258u: goto label_7F053258;
    case 0x7F05325Cu: goto label_7F05325C;
    case 0x7F053260u: goto label_7F053260;
    case 0x7F053264u: goto label_7F053264;
    case 0x7F053268u: goto label_7F053268;
    case 0x7F05326Cu: goto label_7F05326C;
    case 0x7F053270u: goto label_7F053270;
    case 0x7F053274u: goto label_7F053274;
    case 0x7F053278u: goto label_7F053278;
    case 0x7F05327Cu: goto label_7F05327C;
    case 0x7F053280u: goto label_7F053280;
    case 0x7F053284u: goto label_7F053284;
    case 0x7F053288u: goto label_7F053288;
    case 0x7F05328Cu: goto label_7F05328C;
    case 0x7F053290u: goto label_7F053290;
    case 0x7F053294u: goto label_7F053294;
    case 0x7F053298u: goto label_7F053298;
    case 0x7F05329Cu: goto label_7F05329C;
    case 0x7F0532A0u: goto label_7F0532A0;
    case 0x7F0532A4u: goto label_7F0532A4;
    case 0x7F0532A8u: goto label_7F0532A8;
    case 0x7F0532ACu: goto label_7F0532AC;
    case 0x7F0532B0u: goto label_7F0532B0;
    case 0x7F0532B4u: goto label_7F0532B4;
    case 0x7F0532B8u: goto label_7F0532B8;
    case 0x7F0532BCu: goto label_7F0532BC;
    case 0x7F0532C0u: goto label_7F0532C0;
    case 0x7F0532C4u: goto label_7F0532C4;
    case 0x7F0532C8u: goto label_7F0532C8;
    case 0x7F0532CCu: goto label_7F0532CC;
    case 0x7F0532D0u: goto label_7F0532D0;
    case 0x7F0532D4u: goto label_7F0532D4;
    case 0x7F0532D8u: goto label_7F0532D8;
    case 0x7F0532DCu: goto label_7F0532DC;
    case 0x7F0532E0u: goto label_7F0532E0;
    case 0x7F0532E4u: goto label_7F0532E4;
    case 0x7F0532E8u: goto label_7F0532E8;
    case 0x7F0532ECu: goto label_7F0532EC;
    case 0x7F0532F0u: goto label_7F0532F0;
    case 0x7F0532F4u: goto label_7F0532F4;
    case 0x7F0532F8u: goto label_7F0532F8;
    case 0x7F0532FCu: goto label_7F0532FC;
    case 0x7F053300u: goto label_7F053300;
    case 0x7F053304u: goto label_7F053304;
    case 0x7F053308u: goto label_7F053308;
    case 0x7F05330Cu: goto label_7F05330C;
    case 0x7F053310u: goto label_7F053310;
    case 0x7F053314u: goto label_7F053314;
    case 0x7F053318u: goto label_7F053318;
    case 0x7F05331Cu: goto label_7F05331C;
    case 0x7F053320u: goto label_7F053320;
    case 0x7F053324u: goto label_7F053324;
    case 0x7F053328u: goto label_7F053328;
    case 0x7F05332Cu: goto label_7F05332C;
    case 0x7F053330u: goto label_7F053330;
    case 0x7F053334u: goto label_7F053334;
    case 0x7F053338u: goto label_7F053338;
    case 0x7F05333Cu: goto label_7F05333C;
    case 0x7F053340u: goto label_7F053340;
    case 0x7F053344u: goto label_7F053344;
    case 0x7F053348u: goto label_7F053348;
    case 0x7F05334Cu: goto label_7F05334C;
    case 0x7F053350u: goto label_7F053350;
    case 0x7F053354u: goto label_7F053354;
    case 0x7F053358u: goto label_7F053358;
    case 0x7F05335Cu: goto label_7F05335C;
    case 0x7F053360u: goto label_7F053360;
    case 0x7F053364u: goto label_7F053364;
    case 0x7F053368u: goto label_7F053368;
    case 0x7F05336Cu: goto label_7F05336C;
    case 0x7F053370u: goto label_7F053370;
    case 0x7F053374u: goto label_7F053374;
    case 0x7F053378u: goto label_7F053378;
    case 0x7F05337Cu: goto label_7F05337C;
    case 0x7F053380u: goto label_7F053380;
    case 0x7F053384u: goto label_7F053384;
    case 0x7F053388u: goto label_7F053388;
    case 0x7F05338Cu: goto label_7F05338C;
    case 0x7F053390u: goto label_7F053390;
    case 0x7F053394u: goto label_7F053394;
    case 0x7F053398u: goto label_7F053398;
    case 0x7F05339Cu: goto label_7F05339C;
    case 0x7F0533A0u: goto label_7F0533A0;
    case 0x7F0533A4u: goto label_7F0533A4;
    case 0x7F0533A8u: goto label_7F0533A8;
    case 0x7F0533ACu: goto label_7F0533AC;
    case 0x7F0533B0u: goto label_7F0533B0;
    case 0x7F0533B4u: goto label_7F0533B4;
    case 0x7F0533B8u: goto label_7F0533B8;
    case 0x7F0533BCu: goto label_7F0533BC;
    case 0x7F0533C0u: goto label_7F0533C0;
    case 0x7F0533C4u: goto label_7F0533C4;
    case 0x7F0533C8u: goto label_7F0533C8;
    case 0x7F0533CCu: goto label_7F0533CC;
    case 0x7F0533D0u: goto label_7F0533D0;
    case 0x7F0533D4u: goto label_7F0533D4;
    case 0x7F0533D8u: goto label_7F0533D8;
    case 0x7F0533DCu: goto label_7F0533DC;
    case 0x7F0533E0u: goto label_7F0533E0;
    case 0x7F0533E4u: goto label_7F0533E4;
    case 0x7F0533E8u: goto label_7F0533E8;
    case 0x7F0533ECu: goto label_7F0533EC;
    case 0x7F0533F0u: goto label_7F0533F0;
    case 0x7F0533F4u: goto label_7F0533F4;
    case 0x7F0533F8u: goto label_7F0533F8;
    case 0x7F0533FCu: goto label_7F0533FC;
    case 0x7F053400u: goto label_7F053400;
    case 0x7F053404u: goto label_7F053404;
    case 0x7F053408u: goto label_7F053408;
    case 0x7F05340Cu: goto label_7F05340C;
    case 0x7F053410u: goto label_7F053410;
    case 0x7F053414u: goto label_7F053414;
    case 0x7F053418u: goto label_7F053418;
    case 0x7F05341Cu: goto label_7F05341C;
    case 0x7F053420u: goto label_7F053420;
    case 0x7F053424u: goto label_7F053424;
    case 0x7F053428u: goto label_7F053428;
    case 0x7F05342Cu: goto label_7F05342C;
    case 0x7F053430u: goto label_7F053430;
    case 0x7F053434u: goto label_7F053434;
    case 0x7F053438u: goto label_7F053438;
    case 0x7F05343Cu: goto label_7F05343C;
    case 0x7F053440u: goto label_7F053440;
    case 0x7F053444u: goto label_7F053444;
    case 0x7F053448u: goto label_7F053448;
    case 0x7F05344Cu: goto label_7F05344C;
    case 0x7F053450u: goto label_7F053450;
    case 0x7F053454u: goto label_7F053454;
    case 0x7F053458u: goto label_7F053458;
    case 0x7F05345Cu: goto label_7F05345C;
    case 0x7F053460u: goto label_7F053460;
    case 0x7F053464u: goto label_7F053464;
    case 0x7F053468u: goto label_7F053468;
    case 0x7F05346Cu: goto label_7F05346C;
    case 0x7F053470u: goto label_7F053470;
    case 0x7F053474u: goto label_7F053474;
    case 0x7F053478u: goto label_7F053478;
    case 0x7F05347Cu: goto label_7F05347C;
    case 0x7F053480u: goto label_7F053480;
    case 0x7F053484u: goto label_7F053484;
    case 0x7F053488u: goto label_7F053488;
    case 0x7F05348Cu: goto label_7F05348C;
    case 0x7F053490u: goto label_7F053490;
    case 0x7F053494u: goto label_7F053494;
    case 0x7F053498u: goto label_7F053498;
    case 0x7F05349Cu: goto label_7F05349C;
    case 0x7F0534A0u: goto label_7F0534A0;
    case 0x7F0534A4u: goto label_7F0534A4;
    case 0x7F0534A8u: goto label_7F0534A8;
    case 0x7F0534ACu: goto label_7F0534AC;
    case 0x7F0534B0u: goto label_7F0534B0;
    case 0x7F0534B4u: goto label_7F0534B4;
    case 0x7F0534B8u: goto label_7F0534B8;
    case 0x7F0534BCu: goto label_7F0534BC;
    case 0x7F0534C0u: goto label_7F0534C0;
    case 0x7F0534C4u: goto label_7F0534C4;
    case 0x7F0534C8u: goto label_7F0534C8;
    case 0x7F0534CCu: goto label_7F0534CC;
    case 0x7F0534D0u: goto label_7F0534D0;
    case 0x7F0534D4u: goto label_7F0534D4;
    case 0x7F0534D8u: goto label_7F0534D8;
    case 0x7F0534DCu: goto label_7F0534DC;
    case 0x7F0534E0u: goto label_7F0534E0;
    case 0x7F0534E4u: goto label_7F0534E4;
    case 0x7F0534E8u: goto label_7F0534E8;
    case 0x7F0534ECu: goto label_7F0534EC;
    case 0x7F0534F0u: goto label_7F0534F0;
    case 0x7F0534F4u: goto label_7F0534F4;
    case 0x7F0534F8u: goto label_7F0534F8;
    case 0x7F0534FCu: goto label_7F0534FC;
    case 0x7F053500u: goto label_7F053500;
    case 0x7F053504u: goto label_7F053504;
    case 0x7F053508u: goto label_7F053508;
    case 0x7F05350Cu: goto label_7F05350C;
    case 0x7F053510u: goto label_7F053510;
    case 0x7F053514u: goto label_7F053514;
    case 0x7F053518u: goto label_7F053518;
    case 0x7F05351Cu: goto label_7F05351C;
    case 0x7F053520u: goto label_7F053520;
    case 0x7F053524u: goto label_7F053524;
    case 0x7F053528u: goto label_7F053528;
    case 0x7F05352Cu: goto label_7F05352C;
    case 0x7F053530u: goto label_7F053530;
    case 0x7F053534u: goto label_7F053534;
    case 0x7F053538u: goto label_7F053538;
    case 0x7F05353Cu: goto label_7F05353C;
    case 0x7F053540u: goto label_7F053540;
    case 0x7F053544u: goto label_7F053544;
    case 0x7F053548u: goto label_7F053548;
    case 0x7F05354Cu: goto label_7F05354C;
    case 0x7F053550u: goto label_7F053550;
    case 0x7F053554u: goto label_7F053554;
    case 0x7F053558u: goto label_7F053558;
    case 0x7F05355Cu: goto label_7F05355C;
    case 0x7F053560u: goto label_7F053560;
    case 0x7F053564u: goto label_7F053564;
    case 0x7F053568u: goto label_7F053568;
    case 0x7F05356Cu: goto label_7F05356C;
    case 0x7F053570u: goto label_7F053570;
    case 0x7F053574u: goto label_7F053574;
    case 0x7F053578u: goto label_7F053578;
    case 0x7F05357Cu: goto label_7F05357C;
    case 0x7F053580u: goto label_7F053580;
    case 0x7F053584u: goto label_7F053584;
    case 0x7F053588u: goto label_7F053588;
    case 0x7F05358Cu: goto label_7F05358C;
    case 0x7F053590u: goto label_7F053590;
    case 0x7F053594u: goto label_7F053594;
    case 0x7F053598u: goto label_7F053598;
    case 0x7F05359Cu: goto label_7F05359C;
    case 0x7F0535A0u: goto label_7F0535A0;
    case 0x7F0535A4u: goto label_7F0535A4;
    case 0x7F0535A8u: goto label_7F0535A8;
    case 0x7F0535ACu: goto label_7F0535AC;
    case 0x7F0535B0u: goto label_7F0535B0;
    case 0x7F0535B4u: goto label_7F0535B4;
    case 0x7F0535B8u: goto label_7F0535B8;
    case 0x7F0535BCu: goto label_7F0535BC;
    case 0x7F0535C0u: goto label_7F0535C0;
    case 0x7F0535C4u: goto label_7F0535C4;
    case 0x7F0535C8u: goto label_7F0535C8;
    case 0x7F0535CCu: goto label_7F0535CC;
    case 0x7F0535D0u: goto label_7F0535D0;
    case 0x7F0535D4u: goto label_7F0535D4;
    case 0x7F0535D8u: goto label_7F0535D8;
    case 0x7F0535DCu: goto label_7F0535DC;
    case 0x7F0535E0u: goto label_7F0535E0;
    case 0x7F0535E4u: goto label_7F0535E4;
    case 0x7F0535E8u: goto label_7F0535E8;
    case 0x7F0535ECu: goto label_7F0535EC;
    case 0x7F0535F0u: goto label_7F0535F0;
    case 0x7F0535F4u: goto label_7F0535F4;
    case 0x7F0535F8u: goto label_7F0535F8;
    case 0x7F0535FCu: goto label_7F0535FC;
    case 0x7F053600u: goto label_7F053600;
    case 0x7F053604u: goto label_7F053604;
    case 0x7F053608u: goto label_7F053608;
    case 0x7F05360Cu: goto label_7F05360C;
    case 0x7F053610u: goto label_7F053610;
    case 0x7F053614u: goto label_7F053614;
    case 0x7F053618u: goto label_7F053618;
    case 0x7F05361Cu: goto label_7F05361C;
    case 0x7F053620u: goto label_7F053620;
    case 0x7F053624u: goto label_7F053624;
    case 0x7F053628u: goto label_7F053628;
    case 0x7F05362Cu: goto label_7F05362C;
    case 0x7F053630u: goto label_7F053630;
    case 0x7F053634u: goto label_7F053634;
    case 0x7F053638u: goto label_7F053638;
    case 0x7F05363Cu: goto label_7F05363C;
    case 0x7F053640u: goto label_7F053640;
    case 0x7F053644u: goto label_7F053644;
    case 0x7F053648u: goto label_7F053648;
    case 0x7F05364Cu: goto label_7F05364C;
    case 0x7F053650u: goto label_7F053650;
    case 0x7F053654u: goto label_7F053654;
    case 0x7F053658u: goto label_7F053658;
    case 0x7F05365Cu: goto label_7F05365C;
    case 0x7F053660u: goto label_7F053660;
    case 0x7F053664u: goto label_7F053664;
    case 0x7F053668u: goto label_7F053668;
    case 0x7F05366Cu: goto label_7F05366C;
    case 0x7F053670u: goto label_7F053670;
    case 0x7F053674u: goto label_7F053674;
    case 0x7F053678u: goto label_7F053678;
    case 0x7F05367Cu: goto label_7F05367C;
    case 0x7F053680u: goto label_7F053680;
    case 0x7F053684u: goto label_7F053684;
    case 0x7F053688u: goto label_7F053688;
    case 0x7F05368Cu: goto label_7F05368C;
    case 0x7F053690u: goto label_7F053690;
    case 0x7F053694u: goto label_7F053694;
    case 0x7F053698u: goto label_7F053698;
    case 0x7F05369Cu: goto label_7F05369C;
    case 0x7F0536A0u: goto label_7F0536A0;
    case 0x7F0536A4u: goto label_7F0536A4;
    case 0x7F0536A8u: goto label_7F0536A8;
    case 0x7F0536ACu: goto label_7F0536AC;
    case 0x7F0536B0u: goto label_7F0536B0;
    case 0x7F0536B4u: goto label_7F0536B4;
    case 0x7F0536B8u: goto label_7F0536B8;
    case 0x7F0536BCu: goto label_7F0536BC;
    case 0x7F0536C0u: goto label_7F0536C0;
    case 0x7F0536C4u: goto label_7F0536C4;
    case 0x7F0536C8u: goto label_7F0536C8;
    case 0x7F0536CCu: goto label_7F0536CC;
    case 0x7F0536D0u: goto label_7F0536D0;
    case 0x7F0536D4u: goto label_7F0536D4;
    case 0x7F0536D8u: goto label_7F0536D8;
    case 0x7F0536DCu: goto label_7F0536DC;
    case 0x7F0536E0u: goto label_7F0536E0;
    case 0x7F0536E4u: goto label_7F0536E4;
    case 0x7F0536E8u: goto label_7F0536E8;
    case 0x7F0536ECu: goto label_7F0536EC;
    case 0x7F0536F0u: goto label_7F0536F0;
    case 0x7F0536F4u: goto label_7F0536F4;
    case 0x7F0536F8u: goto label_7F0536F8;
    case 0x7F0536FCu: goto label_7F0536FC;
    case 0x7F053700u: goto label_7F053700;
    case 0x7F053704u: goto label_7F053704;
    case 0x7F053708u: goto label_7F053708;
    case 0x7F05370Cu: goto label_7F05370C;
    case 0x7F053710u: goto label_7F053710;
    case 0x7F053714u: goto label_7F053714;
    case 0x7F053718u: goto label_7F053718;
    case 0x7F05371Cu: goto label_7F05371C;
    case 0x7F053720u: goto label_7F053720;
    case 0x7F053724u: goto label_7F053724;
    case 0x7F053728u: goto label_7F053728;
    case 0x7F05372Cu: goto label_7F05372C;
    case 0x7F053730u: goto label_7F053730;
    case 0x7F053734u: goto label_7F053734;
    case 0x7F053738u: goto label_7F053738;
    case 0x7F05373Cu: goto label_7F05373C;
    case 0x7F053740u: goto label_7F053740;
    case 0x7F053744u: goto label_7F053744;
    case 0x7F053748u: goto label_7F053748;
    case 0x7F05374Cu: goto label_7F05374C;
    case 0x7F053750u: goto label_7F053750;
    case 0x7F053754u: goto label_7F053754;
    case 0x7F053758u: goto label_7F053758;
    case 0x7F05375Cu: goto label_7F05375C;
    case 0x7F053760u: goto label_7F053760;
    case 0x7F053764u: goto label_7F053764;
    case 0x7F053768u: goto label_7F053768;
    case 0x7F05376Cu: goto label_7F05376C;
    case 0x7F053770u: goto label_7F053770;
    case 0x7F053774u: goto label_7F053774;
    case 0x7F053778u: goto label_7F053778;
    case 0x7F05377Cu: goto label_7F05377C;
    case 0x7F053780u: goto label_7F053780;
    case 0x7F053784u: goto label_7F053784;
    case 0x7F053788u: goto label_7F053788;
    case 0x7F05378Cu: goto label_7F05378C;
    case 0x7F053790u: goto label_7F053790;
    case 0x7F053794u: goto label_7F053794;
    case 0x7F053798u: goto label_7F053798;
    case 0x7F05379Cu: goto label_7F05379C;
    case 0x7F0537A0u: goto label_7F0537A0;
    case 0x7F0537A4u: goto label_7F0537A4;
    case 0x7F0537A8u: goto label_7F0537A8;
    case 0x7F0537ACu: goto label_7F0537AC;
    case 0x7F0537B0u: goto label_7F0537B0;
    case 0x7F0537B4u: goto label_7F0537B4;
    case 0x7F0537B8u: goto label_7F0537B8;
    case 0x7F0537BCu: goto label_7F0537BC;
    case 0x7F0537C0u: goto label_7F0537C0;
    case 0x7F0537C4u: goto label_7F0537C4;
    case 0x7F0537C8u: goto label_7F0537C8;
    case 0x7F0537CCu: goto label_7F0537CC;
    case 0x7F0537D0u: goto label_7F0537D0;
    case 0x7F0537D4u: goto label_7F0537D4;
    case 0x7F0537D8u: goto label_7F0537D8;
    case 0x7F0537DCu: goto label_7F0537DC;
    case 0x7F0537E0u: goto label_7F0537E0;
    case 0x7F0537E4u: goto label_7F0537E4;
    case 0x7F0537E8u: goto label_7F0537E8;
    case 0x7F0537ECu: goto label_7F0537EC;
    case 0x7F0537F0u: goto label_7F0537F0;
    case 0x7F0537F4u: goto label_7F0537F4;
    case 0x7F0537F8u: goto label_7F0537F8;
    case 0x7F0537FCu: goto label_7F0537FC;
    case 0x7F053800u: goto label_7F053800;
    case 0x7F053804u: goto label_7F053804;
    case 0x7F053808u: goto label_7F053808;
    case 0x7F05380Cu: goto label_7F05380C;
    case 0x7F053810u: goto label_7F053810;
    case 0x7F053814u: goto label_7F053814;
    case 0x7F053818u: goto label_7F053818;
    case 0x7F05381Cu: goto label_7F05381C;
    case 0x7F053820u: goto label_7F053820;
    case 0x7F053824u: goto label_7F053824;
    case 0x7F053828u: goto label_7F053828;
    case 0x7F05382Cu: goto label_7F05382C;
    case 0x7F053830u: goto label_7F053830;
    case 0x7F053834u: goto label_7F053834;
    case 0x7F053838u: goto label_7F053838;
    case 0x7F05383Cu: goto label_7F05383C;
    case 0x7F053840u: goto label_7F053840;
    case 0x7F053844u: goto label_7F053844;
    case 0x7F053848u: goto label_7F053848;
    case 0x7F05384Cu: goto label_7F05384C;
    case 0x7F053850u: goto label_7F053850;
    case 0x7F053854u: goto label_7F053854;
    case 0x7F053858u: goto label_7F053858;
    case 0x7F05385Cu: goto label_7F05385C;
    case 0x7F053860u: goto label_7F053860;
    case 0x7F053864u: goto label_7F053864;
    case 0x7F053868u: goto label_7F053868;
    case 0x7F05386Cu: goto label_7F05386C;
    case 0x7F053870u: goto label_7F053870;
    case 0x7F053874u: goto label_7F053874;
    case 0x7F053878u: goto label_7F053878;
    case 0x7F05387Cu: goto label_7F05387C;
    case 0x7F053880u: goto label_7F053880;
    case 0x7F053884u: goto label_7F053884;
    case 0x7F053888u: goto label_7F053888;
    case 0x7F05388Cu: goto label_7F05388C;
    case 0x7F053890u: goto label_7F053890;
    case 0x7F053894u: goto label_7F053894;
    case 0x7F053898u: goto label_7F053898;
    case 0x7F05389Cu: goto label_7F05389C;
    case 0x7F0538A0u: goto label_7F0538A0;
    case 0x7F0538A4u: goto label_7F0538A4;
    case 0x7F0538A8u: goto label_7F0538A8;
    case 0x7F0538ACu: goto label_7F0538AC;
    case 0x7F0538B0u: goto label_7F0538B0;
    case 0x7F0538B4u: goto label_7F0538B4;
    case 0x7F0538B8u: goto label_7F0538B8;
    case 0x7F0538BCu: goto label_7F0538BC;
    case 0x7F0538C0u: goto label_7F0538C0;
    case 0x7F0538C4u: goto label_7F0538C4;
    case 0x7F0538C8u: goto label_7F0538C8;
    case 0x7F0538CCu: goto label_7F0538CC;
    case 0x7F0538D0u: goto label_7F0538D0;
    case 0x7F0538D4u: goto label_7F0538D4;
    case 0x7F0538D8u: goto label_7F0538D8;
    case 0x7F0538DCu: goto label_7F0538DC;
    case 0x7F0538E0u: goto label_7F0538E0;
    case 0x7F0538E4u: goto label_7F0538E4;
    case 0x7F0538E8u: goto label_7F0538E8;
    case 0x7F0538ECu: goto label_7F0538EC;
    case 0x7F0538F0u: goto label_7F0538F0;
    case 0x7F0538F4u: goto label_7F0538F4;
    case 0x7F0538F8u: goto label_7F0538F8;
    case 0x7F0538FCu: goto label_7F0538FC;
    case 0x7F053900u: goto label_7F053900;
    case 0x7F053904u: goto label_7F053904;
    case 0x7F053908u: goto label_7F053908;
    case 0x7F05390Cu: goto label_7F05390C;
    case 0x7F053910u: goto label_7F053910;
    case 0x7F053914u: goto label_7F053914;
    case 0x7F053918u: goto label_7F053918;
    case 0x7F05391Cu: goto label_7F05391C;
    case 0x7F053920u: goto label_7F053920;
    case 0x7F053924u: goto label_7F053924;
    case 0x7F053928u: goto label_7F053928;
    case 0x7F05392Cu: goto label_7F05392C;
    case 0x7F053930u: goto label_7F053930;
    case 0x7F053934u: goto label_7F053934;
    case 0x7F053938u: goto label_7F053938;
    case 0x7F05393Cu: goto label_7F05393C;
    case 0x7F053940u: goto label_7F053940;
    case 0x7F053944u: goto label_7F053944;
    case 0x7F053948u: goto label_7F053948;
    case 0x7F05394Cu: goto label_7F05394C;
    case 0x7F053950u: goto label_7F053950;
    case 0x7F053954u: goto label_7F053954;
    case 0x7F053958u: goto label_7F053958;
    case 0x7F05395Cu: goto label_7F05395C;
    case 0x7F053960u: goto label_7F053960;
    case 0x7F053964u: goto label_7F053964;
    case 0x7F053968u: goto label_7F053968;
    case 0x7F05396Cu: goto label_7F05396C;
    case 0x7F053970u: goto label_7F053970;
    case 0x7F053974u: goto label_7F053974;
    case 0x7F053978u: goto label_7F053978;
    case 0x7F05397Cu: goto label_7F05397C;
    case 0x7F053980u: goto label_7F053980;
    case 0x7F053984u: goto label_7F053984;
    case 0x7F053988u: goto label_7F053988;
    case 0x7F05398Cu: goto label_7F05398C;
    case 0x7F053990u: goto label_7F053990;
    case 0x7F053994u: goto label_7F053994;
    case 0x7F053998u: goto label_7F053998;
    case 0x7F05399Cu: goto label_7F05399C;
    case 0x7F0539A0u: goto label_7F0539A0;
    case 0x7F0539A4u: goto label_7F0539A4;
    case 0x7F0539A8u: goto label_7F0539A8;
    case 0x7F0539ACu: goto label_7F0539AC;
    case 0x7F0539B0u: goto label_7F0539B0;
    case 0x7F0539B4u: goto label_7F0539B4;
    case 0x7F0539B8u: goto label_7F0539B8;
    case 0x7F0539BCu: goto label_7F0539BC;
    case 0x7F0539C0u: goto label_7F0539C0;
    case 0x7F0539C4u: goto label_7F0539C4;
    case 0x7F0539C8u: goto label_7F0539C8;
    case 0x7F0539CCu: goto label_7F0539CC;
    case 0x7F0539D0u: goto label_7F0539D0;
    case 0x7F0539D4u: goto label_7F0539D4;
    case 0x7F0539D8u: goto label_7F0539D8;
    case 0x7F0539DCu: goto label_7F0539DC;
    case 0x7F0539E0u: goto label_7F0539E0;
    case 0x7F0539E4u: goto label_7F0539E4;
    case 0x7F0539E8u: goto label_7F0539E8;
    case 0x7F0539ECu: goto label_7F0539EC;
    case 0x7F0539F0u: goto label_7F0539F0;
    case 0x7F0539F4u: goto label_7F0539F4;
    case 0x7F0539F8u: goto label_7F0539F8;
    case 0x7F0539FCu: goto label_7F0539FC;
    case 0x7F053A00u: goto label_7F053A00;
    case 0x7F053A04u: goto label_7F053A04;
    case 0x7F053A08u: goto label_7F053A08;
    case 0x7F053A0Cu: goto label_7F053A0C;
    case 0x7F053A10u: goto label_7F053A10;
    case 0x7F053A14u: goto label_7F053A14;
    case 0x7F053A18u: goto label_7F053A18;
    case 0x7F053A1Cu: goto label_7F053A1C;
    case 0x7F053A20u: goto label_7F053A20;
    case 0x7F053A24u: goto label_7F053A24;
    case 0x7F053A28u: goto label_7F053A28;
    case 0x7F053A2Cu: goto label_7F053A2C;
    case 0x7F053A30u: goto label_7F053A30;
    case 0x7F053A34u: goto label_7F053A34;
    case 0x7F053A38u: goto label_7F053A38;
    case 0x7F053A3Cu: goto label_7F053A3C;
    case 0x7F053A40u: goto label_7F053A40;
    case 0x7F053A44u: goto label_7F053A44;
    case 0x7F053A48u: goto label_7F053A48;
    case 0x7F053A4Cu: goto label_7F053A4C;
    case 0x7F053A50u: goto label_7F053A50;
    case 0x7F053A54u: goto label_7F053A54;
    case 0x7F053A58u: goto label_7F053A58;
    case 0x7F053A5Cu: goto label_7F053A5C;
    case 0x7F053A60u: goto label_7F053A60;
    case 0x7F053A64u: goto label_7F053A64;
    case 0x7F053A68u: goto label_7F053A68;
    case 0x7F053A6Cu: goto label_7F053A6C;
    case 0x7F053A70u: goto label_7F053A70;
    case 0x7F053A74u: goto label_7F053A74;
    case 0x7F053A78u: goto label_7F053A78;
    case 0x7F053A7Cu: goto label_7F053A7C;
    case 0x7F053A80u: goto label_7F053A80;
    case 0x7F053A84u: goto label_7F053A84;
    case 0x7F053A88u: goto label_7F053A88;
    case 0x7F053A8Cu: goto label_7F053A8C;
    case 0x7F053A90u: goto label_7F053A90;
    case 0x7F053A94u: goto label_7F053A94;
    case 0x7F053A98u: goto label_7F053A98;
    case 0x7F053A9Cu: goto label_7F053A9C;
    case 0x7F053AA0u: goto label_7F053AA0;
    case 0x7F053AA4u: goto label_7F053AA4;
    case 0x7F053AA8u: goto label_7F053AA8;
    case 0x7F053AACu: goto label_7F053AAC;
    case 0x7F053AB0u: goto label_7F053AB0;
    case 0x7F053AB4u: goto label_7F053AB4;
    case 0x7F053AB8u: goto label_7F053AB8;
    case 0x7F053ABCu: goto label_7F053ABC;
    case 0x7F053AC0u: goto label_7F053AC0;
    case 0x7F053AC4u: goto label_7F053AC4;
    case 0x7F053AC8u: goto label_7F053AC8;
    case 0x7F053ACCu: goto label_7F053ACC;
    case 0x7F053AD0u: goto label_7F053AD0;
    case 0x7F053AD4u: goto label_7F053AD4;
    case 0x7F053AD8u: goto label_7F053AD8;
    case 0x7F053ADCu: goto label_7F053ADC;
    case 0x7F053AE0u: goto label_7F053AE0;
    case 0x7F053AE4u: goto label_7F053AE4;
    case 0x7F053AE8u: goto label_7F053AE8;
    case 0x7F053AECu: goto label_7F053AEC;
    case 0x7F053AF0u: goto label_7F053AF0;
    case 0x7F053AF4u: goto label_7F053AF4;
    case 0x7F053AF8u: goto label_7F053AF8;
    case 0x7F053AFCu: goto label_7F053AFC;
    case 0x7F053B00u: goto label_7F053B00;
    case 0x7F053B04u: goto label_7F053B04;
    case 0x7F053B08u: goto label_7F053B08;
    case 0x7F053B0Cu: goto label_7F053B0C;
    case 0x7F053B10u: goto label_7F053B10;
    case 0x7F053B14u: goto label_7F053B14;
    case 0x7F053B18u: goto label_7F053B18;
    case 0x7F053B1Cu: goto label_7F053B1C;
    case 0x7F053B20u: goto label_7F053B20;
    case 0x7F053B24u: goto label_7F053B24;
    case 0x7F053B28u: goto label_7F053B28;
    case 0x7F053B2Cu: goto label_7F053B2C;
    case 0x7F053B30u: goto label_7F053B30;
    case 0x7F053B34u: goto label_7F053B34;
    case 0x7F053B38u: goto label_7F053B38;
    case 0x7F053B3Cu: goto label_7F053B3C;
    case 0x7F053B40u: goto label_7F053B40;
    case 0x7F053B44u: goto label_7F053B44;
    case 0x7F053B48u: goto label_7F053B48;
    case 0x7F053B4Cu: goto label_7F053B4C;
    case 0x7F053B50u: goto label_7F053B50;
    case 0x7F053B54u: goto label_7F053B54;
    case 0x7F053B58u: goto label_7F053B58;
    case 0x7F053B5Cu: goto label_7F053B5C;
    case 0x7F053B60u: goto label_7F053B60;
    case 0x7F053B64u: goto label_7F053B64;
    case 0x7F053B68u: goto label_7F053B68;
    case 0x7F053B6Cu: goto label_7F053B6C;
    case 0x7F053B70u: goto label_7F053B70;
    case 0x7F053B74u: goto label_7F053B74;
    case 0x7F053B78u: goto label_7F053B78;
    case 0x7F053B7Cu: goto label_7F053B7C;
    case 0x7F053B80u: goto label_7F053B80;
    case 0x7F053B84u: goto label_7F053B84;
    case 0x7F053B88u: goto label_7F053B88;
    case 0x7F053B8Cu: goto label_7F053B8C;
    case 0x7F053B90u: goto label_7F053B90;
    case 0x7F053B94u: goto label_7F053B94;
    case 0x7F053B98u: goto label_7F053B98;
    case 0x7F053B9Cu: goto label_7F053B9C;
    case 0x7F053BA0u: goto label_7F053BA0;
    case 0x7F053BA4u: goto label_7F053BA4;
    case 0x7F053BA8u: goto label_7F053BA8;
    case 0x7F053BACu: goto label_7F053BAC;
    case 0x7F053BB0u: goto label_7F053BB0;
    case 0x7F053BB4u: goto label_7F053BB4;
    case 0x7F053BB8u: goto label_7F053BB8;
    case 0x7F053BBCu: goto label_7F053BBC;
    case 0x7F053BC0u: goto label_7F053BC0;
    case 0x7F053BC4u: goto label_7F053BC4;
    case 0x7F053BC8u: goto label_7F053BC8;
    case 0x7F053BCCu: goto label_7F053BCC;
    case 0x7F053BD0u: goto label_7F053BD0;
    case 0x7F053BD4u: goto label_7F053BD4;
    case 0x7F053BD8u: goto label_7F053BD8;
    case 0x7F053BDCu: goto label_7F053BDC;
    case 0x7F053BE0u: goto label_7F053BE0;
    case 0x7F053BE4u: goto label_7F053BE4;
    case 0x7F053BE8u: goto label_7F053BE8;
    case 0x7F053BECu: goto label_7F053BEC;
    case 0x7F053BF0u: goto label_7F053BF0;
    case 0x7F053BF4u: goto label_7F053BF4;
    case 0x7F053BF8u: goto label_7F053BF8;
    case 0x7F053BFCu: goto label_7F053BFC;
    case 0x7F053C00u: goto label_7F053C00;
    case 0x7F053C04u: goto label_7F053C04;
    case 0x7F053C08u: goto label_7F053C08;
    case 0x7F053C0Cu: goto label_7F053C0C;
    case 0x7F053C10u: goto label_7F053C10;
    case 0x7F053C14u: goto label_7F053C14;
    case 0x7F053C18u: goto label_7F053C18;
    case 0x7F053C1Cu: goto label_7F053C1C;
    case 0x7F053C20u: goto label_7F053C20;
    case 0x7F053C24u: goto label_7F053C24;
    case 0x7F053C28u: goto label_7F053C28;
    case 0x7F053C2Cu: goto label_7F053C2C;
    case 0x7F053C30u: goto label_7F053C30;
    case 0x7F053C34u: goto label_7F053C34;
    case 0x7F053C38u: goto label_7F053C38;
    case 0x7F053C3Cu: goto label_7F053C3C;
    case 0x7F053C40u: goto label_7F053C40;
    case 0x7F053C44u: goto label_7F053C44;
    case 0x7F053C48u: goto label_7F053C48;
    case 0x7F053C4Cu: goto label_7F053C4C;
    case 0x7F053C50u: goto label_7F053C50;
    case 0x7F053C54u: goto label_7F053C54;
    case 0x7F053C58u: goto label_7F053C58;
    case 0x7F053C5Cu: goto label_7F053C5C;
    case 0x7F053C60u: goto label_7F053C60;
    case 0x7F053C64u: goto label_7F053C64;
    case 0x7F053C68u: goto label_7F053C68;
    case 0x7F053C6Cu: goto label_7F053C6C;
    case 0x7F053C70u: goto label_7F053C70;
    case 0x7F053C74u: goto label_7F053C74;
    case 0x7F053C78u: goto label_7F053C78;
    case 0x7F053C7Cu: goto label_7F053C7C;
    case 0x7F053C80u: goto label_7F053C80;
    case 0x7F053C84u: goto label_7F053C84;
    case 0x7F053C88u: goto label_7F053C88;
    case 0x7F053C8Cu: goto label_7F053C8C;
    case 0x7F053C90u: goto label_7F053C90;
    case 0x7F053C94u: goto label_7F053C94;
    case 0x7F053C98u: goto label_7F053C98;
    case 0x7F053C9Cu: goto label_7F053C9C;
    case 0x7F053CA0u: goto label_7F053CA0;
    case 0x7F053CA4u: goto label_7F053CA4;
    case 0x7F053CA8u: goto label_7F053CA8;
    case 0x7F053CACu: goto label_7F053CAC;
    case 0x7F053CB0u: goto label_7F053CB0;
    case 0x7F053CB4u: goto label_7F053CB4;
    case 0x7F053CB8u: goto label_7F053CB8;
    case 0x7F053CBCu: goto label_7F053CBC;
    case 0x7F053CC0u: goto label_7F053CC0;
    case 0x7F053CC4u: goto label_7F053CC4;
    case 0x7F053CC8u: goto label_7F053CC8;
    case 0x7F053CCCu: goto label_7F053CCC;
    case 0x7F053CD0u: goto label_7F053CD0;
    case 0x7F053CD4u: goto label_7F053CD4;
    case 0x7F053CD8u: goto label_7F053CD8;
    case 0x7F053CDCu: goto label_7F053CDC;
    case 0x7F053CE0u: goto label_7F053CE0;
    case 0x7F053CE4u: goto label_7F053CE4;
    case 0x7F053CE8u: goto label_7F053CE8;
    case 0x7F053CECu: goto label_7F053CEC;
    case 0x7F053CF0u: goto label_7F053CF0;
    case 0x7F053CF4u: goto label_7F053CF4;
    case 0x7F053CF8u: goto label_7F053CF8;
    case 0x7F053CFCu: goto label_7F053CFC;
    case 0x7F053D00u: goto label_7F053D00;
    case 0x7F053D04u: goto label_7F053D04;
    case 0x7F053D08u: goto label_7F053D08;
    case 0x7F053D0Cu: goto label_7F053D0C;
    case 0x7F053D10u: goto label_7F053D10;
    case 0x7F053D14u: goto label_7F053D14;
    case 0x7F053D18u: goto label_7F053D18;
    case 0x7F053D1Cu: goto label_7F053D1C;
    case 0x7F053D20u: goto label_7F053D20;
    case 0x7F053D24u: goto label_7F053D24;
    case 0x7F053D28u: goto label_7F053D28;
    case 0x7F053D2Cu: goto label_7F053D2C;
    case 0x7F053D30u: goto label_7F053D30;
    case 0x7F053D34u: goto label_7F053D34;
    case 0x7F053D38u: goto label_7F053D38;
    case 0x7F053D3Cu: goto label_7F053D3C;
    case 0x7F053D40u: goto label_7F053D40;
    case 0x7F053D44u: goto label_7F053D44;
    case 0x7F053D48u: goto label_7F053D48;
    case 0x7F053D4Cu: goto label_7F053D4C;
    case 0x7F053D50u: goto label_7F053D50;
    case 0x7F053D54u: goto label_7F053D54;
    case 0x7F053D58u: goto label_7F053D58;
    case 0x7F053D5Cu: goto label_7F053D5C;
    case 0x7F053D60u: goto label_7F053D60;
    case 0x7F053D64u: goto label_7F053D64;
    case 0x7F053D68u: goto label_7F053D68;
    case 0x7F053D6Cu: goto label_7F053D6C;
    case 0x7F053D70u: goto label_7F053D70;
    case 0x7F053D74u: goto label_7F053D74;
    case 0x7F053D78u: goto label_7F053D78;
    case 0x7F053D7Cu: goto label_7F053D7C;
    case 0x7F053D80u: goto label_7F053D80;
    case 0x7F053D84u: goto label_7F053D84;
    case 0x7F053D88u: goto label_7F053D88;
    case 0x7F053D8Cu: goto label_7F053D8C;
    case 0x7F053D90u: goto label_7F053D90;
    case 0x7F053D94u: goto label_7F053D94;
    case 0x7F053D98u: goto label_7F053D98;
    case 0x7F053D9Cu: goto label_7F053D9C;
    case 0x7F053DA0u: goto label_7F053DA0;
    case 0x7F053DA4u: goto label_7F053DA4;
    case 0x7F053DA8u: goto label_7F053DA8;
    case 0x7F053DACu: goto label_7F053DAC;
    case 0x7F053DB0u: goto label_7F053DB0;
    case 0x7F053DB4u: goto label_7F053DB4;
    case 0x7F053DB8u: goto label_7F053DB8;
    case 0x7F053DBCu: goto label_7F053DBC;
    case 0x7F053DC0u: goto label_7F053DC0;
    case 0x7F053DC4u: goto label_7F053DC4;
    case 0x7F053DC8u: goto label_7F053DC8;
    case 0x7F053DCCu: goto label_7F053DCC;
    case 0x7F053DD0u: goto label_7F053DD0;
    case 0x7F053DD4u: goto label_7F053DD4;
    case 0x7F053DD8u: goto label_7F053DD8;
    case 0x7F053DDCu: goto label_7F053DDC;
    case 0x7F053DE0u: goto label_7F053DE0;
    case 0x7F053DE4u: goto label_7F053DE4;
    case 0x7F053DE8u: goto label_7F053DE8;
    case 0x7F053DECu: goto label_7F053DEC;
    case 0x7F053DF0u: goto label_7F053DF0;
    case 0x7F053DF4u: goto label_7F053DF4;
    case 0x7F053DF8u: goto label_7F053DF8;
    case 0x7F053DFCu: goto label_7F053DFC;
    case 0x7F053E00u: goto label_7F053E00;
    case 0x7F053E04u: goto label_7F053E04;
    case 0x7F053E08u: goto label_7F053E08;
    case 0x7F053E0Cu: goto label_7F053E0C;
    case 0x7F053E10u: goto label_7F053E10;
    case 0x7F053E14u: goto label_7F053E14;
    case 0x7F053E18u: goto label_7F053E18;
    case 0x7F053E1Cu: goto label_7F053E1C;
    case 0x7F053E20u: goto label_7F053E20;
    case 0x7F053E24u: goto label_7F053E24;
    case 0x7F053E28u: goto label_7F053E28;
    case 0x7F053E2Cu: goto label_7F053E2C;
    case 0x7F053E30u: goto label_7F053E30;
    case 0x7F053E34u: goto label_7F053E34;
    case 0x7F053E38u: goto label_7F053E38;
    case 0x7F053E3Cu: goto label_7F053E3C;
    case 0x7F053E40u: goto label_7F053E40;
    case 0x7F053E44u: goto label_7F053E44;
    case 0x7F053E48u: goto label_7F053E48;
    case 0x7F053E4Cu: goto label_7F053E4C;
    case 0x7F053E50u: goto label_7F053E50;
    case 0x7F053E54u: goto label_7F053E54;
    case 0x7F053E58u: goto label_7F053E58;
    case 0x7F053E5Cu: goto label_7F053E5C;
    case 0x7F053E60u: goto label_7F053E60;
    case 0x7F053E64u: goto label_7F053E64;
    case 0x7F053E68u: goto label_7F053E68;
    case 0x7F053E6Cu: goto label_7F053E6C;
    case 0x7F053E70u: goto label_7F053E70;
    case 0x7F053E74u: goto label_7F053E74;
    case 0x7F053E78u: goto label_7F053E78;
    case 0x7F053E7Cu: goto label_7F053E7C;
    case 0x7F053E80u: goto label_7F053E80;
    case 0x7F053E84u: goto label_7F053E84;
    case 0x7F053E88u: goto label_7F053E88;
    case 0x7F053E8Cu: goto label_7F053E8C;
    case 0x7F053E90u: goto label_7F053E90;
    case 0x7F053E94u: goto label_7F053E94;
    case 0x7F053E98u: goto label_7F053E98;
    case 0x7F053E9Cu: goto label_7F053E9C;
    case 0x7F053EA0u: goto label_7F053EA0;
    case 0x7F053EA4u: goto label_7F053EA4;
    case 0x7F053EA8u: goto label_7F053EA8;
    case 0x7F053EACu: goto label_7F053EAC;
    case 0x7F053EB0u: goto label_7F053EB0;
    case 0x7F053EB4u: goto label_7F053EB4;
    case 0x7F053EB8u: goto label_7F053EB8;
    case 0x7F053EBCu: goto label_7F053EBC;
    case 0x7F053EC0u: goto label_7F053EC0;
    case 0x7F053EC4u: goto label_7F053EC4;
    case 0x7F053EC8u: goto label_7F053EC8;
    case 0x7F053ECCu: goto label_7F053ECC;
    case 0x7F053ED0u: goto label_7F053ED0;
    case 0x7F053ED4u: goto label_7F053ED4;
    case 0x7F053ED8u: goto label_7F053ED8;
    case 0x7F053EDCu: goto label_7F053EDC;
    case 0x7F053EE0u: goto label_7F053EE0;
    case 0x7F053EE4u: goto label_7F053EE4;
    case 0x7F053EE8u: goto label_7F053EE8;
    case 0x7F053EECu: goto label_7F053EEC;
    case 0x7F053EF0u: goto label_7F053EF0;
    case 0x7F053EF4u: goto label_7F053EF4;
    case 0x7F053EF8u: goto label_7F053EF8;
    case 0x7F053EFCu: goto label_7F053EFC;
    case 0x7F053F00u: goto label_7F053F00;
    case 0x7F053F04u: goto label_7F053F04;
    case 0x7F053F08u: goto label_7F053F08;
    case 0x7F053F0Cu: goto label_7F053F0C;
    case 0x7F053F10u: goto label_7F053F10;
    case 0x7F053F14u: goto label_7F053F14;
    case 0x7F053F18u: goto label_7F053F18;
    case 0x7F053F1Cu: goto label_7F053F1C;
    case 0x7F053F20u: goto label_7F053F20;
    case 0x7F053F24u: goto label_7F053F24;
    case 0x7F053F28u: goto label_7F053F28;
    case 0x7F053F2Cu: goto label_7F053F2C;
    case 0x7F053F30u: goto label_7F053F30;
    case 0x7F053F34u: goto label_7F053F34;
    case 0x7F053F38u: goto label_7F053F38;
    case 0x7F053F3Cu: goto label_7F053F3C;
    case 0x7F053F40u: goto label_7F053F40;
    case 0x7F053F44u: goto label_7F053F44;
    case 0x7F053F48u: goto label_7F053F48;
    case 0x7F053F4Cu: goto label_7F053F4C;
    case 0x7F053F50u: goto label_7F053F50;
    case 0x7F053F54u: goto label_7F053F54;
    case 0x7F053F58u: goto label_7F053F58;
    case 0x7F053F5Cu: goto label_7F053F5C;
    case 0x7F053F60u: goto label_7F053F60;
    case 0x7F053F64u: goto label_7F053F64;
    case 0x7F053F68u: goto label_7F053F68;
    case 0x7F053F6Cu: goto label_7F053F6C;
    case 0x7F053F70u: goto label_7F053F70;
    case 0x7F053F74u: goto label_7F053F74;
    case 0x7F053F78u: goto label_7F053F78;
    case 0x7F053F7Cu: goto label_7F053F7C;
    case 0x7F053F80u: goto label_7F053F80;
    case 0x7F053F84u: goto label_7F053F84;
    case 0x7F053F88u: goto label_7F053F88;
    case 0x7F053F8Cu: goto label_7F053F8C;
    case 0x7F053F90u: goto label_7F053F90;
    case 0x7F053F94u: goto label_7F053F94;
    case 0x7F053F98u: goto label_7F053F98;
    case 0x7F053F9Cu: goto label_7F053F9C;
    case 0x7F053FA0u: goto label_7F053FA0;
    case 0x7F053FA4u: goto label_7F053FA4;
    case 0x7F053FA8u: goto label_7F053FA8;
    case 0x7F053FACu: goto label_7F053FAC;
    case 0x7F053FB0u: goto label_7F053FB0;
    case 0x7F053FB4u: goto label_7F053FB4;
    case 0x7F053FB8u: goto label_7F053FB8;
    case 0x7F053FBCu: goto label_7F053FBC;
    case 0x7F053FC0u: goto label_7F053FC0;
    case 0x7F053FC4u: goto label_7F053FC4;
    case 0x7F053FC8u: goto label_7F053FC8;
    case 0x7F053FCCu: goto label_7F053FCC;
    case 0x7F053FD0u: goto label_7F053FD0;
    case 0x7F053FD4u: goto label_7F053FD4;
    case 0x7F053FD8u: goto label_7F053FD8;
    case 0x7F053FDCu: goto label_7F053FDC;
    case 0x7F053FE0u: goto label_7F053FE0;
    case 0x7F053FE4u: goto label_7F053FE4;
    case 0x7F053FE8u: goto label_7F053FE8;
    case 0x7F053FECu: goto label_7F053FEC;
    case 0x7F053FF0u: goto label_7F053FF0;
    case 0x7F053FF4u: goto label_7F053FF4;
    case 0x7F053FF8u: goto label_7F053FF8;
    case 0x7F053FFCu: goto label_7F053FFC;
    case 0x7F054000u: goto label_7F054000;
    case 0x7F054004u: goto label_7F054004;
    case 0x7F054008u: goto label_7F054008;
    case 0x7F05400Cu: goto label_7F05400C;
    case 0x7F054010u: goto label_7F054010;
    case 0x7F054014u: goto label_7F054014;
    case 0x7F054018u: goto label_7F054018;
    case 0x7F05401Cu: goto label_7F05401C;
    case 0x7F054020u: goto label_7F054020;
    case 0x7F054024u: goto label_7F054024;
    case 0x7F054028u: goto label_7F054028;
    case 0x7F05402Cu: goto label_7F05402C;
    case 0x7F054030u: goto label_7F054030;
    case 0x7F054034u: goto label_7F054034;
    case 0x7F054038u: goto label_7F054038;
    case 0x7F05403Cu: goto label_7F05403C;
    case 0x7F054040u: goto label_7F054040;
    case 0x7F054044u: goto label_7F054044;
    case 0x7F054048u: goto label_7F054048;
    case 0x7F05404Cu: goto label_7F05404C;
    case 0x7F054050u: goto label_7F054050;
    case 0x7F054054u: goto label_7F054054;
    case 0x7F054058u: goto label_7F054058;
    case 0x7F05405Cu: goto label_7F05405C;
    case 0x7F054060u: goto label_7F054060;
    case 0x7F054064u: goto label_7F054064;
    case 0x7F054068u: goto label_7F054068;
    case 0x7F05406Cu: goto label_7F05406C;
    case 0x7F054070u: goto label_7F054070;
    case 0x7F054074u: goto label_7F054074;
    case 0x7F054078u: goto label_7F054078;
    case 0x7F05407Cu: goto label_7F05407C;
    case 0x7F054080u: goto label_7F054080;
    case 0x7F054084u: goto label_7F054084;
    case 0x7F054088u: goto label_7F054088;
    case 0x7F05408Cu: goto label_7F05408C;
    case 0x7F054090u: goto label_7F054090;
    case 0x7F054094u: goto label_7F054094;
    case 0x7F054098u: goto label_7F054098;
    case 0x7F05409Cu: goto label_7F05409C;
    case 0x7F0540A0u: goto label_7F0540A0;
    case 0x7F0540A4u: goto label_7F0540A4;
    case 0x7F0540A8u: goto label_7F0540A8;
    case 0x7F0540ACu: goto label_7F0540AC;
    case 0x7F0540B0u: goto label_7F0540B0;
    case 0x7F0540B4u: goto label_7F0540B4;
    case 0x7F0540B8u: goto label_7F0540B8;
    case 0x7F0540BCu: goto label_7F0540BC;
    case 0x7F0540C0u: goto label_7F0540C0;
    case 0x7F0540C4u: goto label_7F0540C4;
    case 0x7F0540C8u: goto label_7F0540C8;
    case 0x7F0540CCu: goto label_7F0540CC;
    case 0x7F0540D0u: goto label_7F0540D0;
    case 0x7F0540D4u: goto label_7F0540D4;
    case 0x7F0540D8u: goto label_7F0540D8;
    case 0x7F0540DCu: goto label_7F0540DC;
    case 0x7F0540E0u: goto label_7F0540E0;
    case 0x7F0540E4u: goto label_7F0540E4;
    case 0x7F0540E8u: goto label_7F0540E8;
    default: return;
    }
label_7F0500EC:
    ctx->pc = 0x7F0500ECu;
    ctx->downcount -= 2;
    // 7F0500EC: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F0500F0:
    ctx->pc = 0x7F0500F0u;
    // 7F0500F0: bl      0x7F04F364
    {
            ctx->lr = 0x7F0500F4u;
            ctx->pc = 0x7F04F364u;
            return;
    }

label_7F0500F4:
    ctx->pc = 0x7F0500F4u;
    ctx->downcount -= 2;
    // 7F0500F4: cmpwi   r3, 0
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

label_7F0500F8:
    ctx->pc = 0x7F0500F8u;
    // 7F0500F8: bc    12, 2, 0x7F05011C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05011C;
        }
    }

label_7F0500FC:
    ctx->pc = 0x7F0500FCu;
    ctx->downcount -= 3;
    // 7F0500FC: lwz     r0, 1328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050100:
    ctx->pc = 0x7F050100u;
    // 7F050100: cmpwi   r0, 0
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

label_7F050104:
    ctx->pc = 0x7F050104u;
    // 7F050104: bc    4, 1, 0x7F05011C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05011C;
        }
    }

label_7F050108:
    ctx->pc = 0x7F050108u;
    ctx->downcount -= 5;
    // 7F050108: sth     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F05010C:
    ctx->pc = 0x7F05010Cu;
    // 7F05010C: lhz     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F050110:
    ctx->pc = 0x7F050110u;
    // 7F050110: rlwinm r0, r0, 0, 16, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFEu;
    }

label_7F050114:
    ctx->pc = 0x7F050114u;
    // 7F050114: sth     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F050118:
    ctx->pc = 0x7F050118u;
    // 7F050118: b       0x7F0501AC
    {
            goto label_7F0501AC;
    }

label_7F05011C:
    ctx->pc = 0x7F05011Cu;
    ctx->downcount -= 5;
    // 7F05011C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F050120:
    ctx->pc = 0x7F050120u;
    // 7F050120: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F050120u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F050124:
    ctx->pc = 0x7F050124u;
    // 7F050124: lfs     f1, -10920(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F050124u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10920);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F050128:
    ctx->pc = 0x7F050128u;
    // 7F050128: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F050128u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F05012C:
    ctx->pc = 0x7F05012Cu;
    // 7F05012C: bc    4, 2, 0x7F050160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050160;
        }
    }

label_7F050130:
    ctx->pc = 0x7F050130u;
    ctx->downcount -= 3;
    // 7F050130: lfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F050130u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F050134:
    ctx->pc = 0x7F050134u;
    // 7F050134: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F050134u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F050138:
    ctx->pc = 0x7F050138u;
    // 7F050138: bc    4, 2, 0x7F050160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050160;
        }
    }

label_7F05013C:
    ctx->pc = 0x7F05013Cu;
    ctx->downcount -= 3;
    // 7F05013C: lfs     f0, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F05013Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F050140:
    ctx->pc = 0x7F050140u;
    // 7F050140: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F050140u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F050144:
    ctx->pc = 0x7F050144u;
    // 7F050144: bc    4, 2, 0x7F050160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050160;
        }
    }

label_7F050148:
    ctx->pc = 0x7F050148u;
    ctx->downcount -= 6;
    // 7F050148: lhz     r3, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F05014C:
    ctx->pc = 0x7F05014Cu;
    // 7F05014C: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_7F050150:
    ctx->pc = 0x7F050150u;
    // 7F050150: ori     r3, r3, 0x0003
    ctx->gpr[3] = ctx->gpr[3] | 0x0003u;

label_7F050154:
    ctx->pc = 0x7F050154u;
    // 7F050154: sth     r3, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F050158:
    ctx->pc = 0x7F050158u;
    // 7F050158: sth     r0, 98(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F05015C:
    ctx->pc = 0x7F05015Cu;
    // 7F05015C: b       0x7F0501AC
    {
            goto label_7F0501AC;
    }

label_7F050160:
    ctx->pc = 0x7F050160u;
    ctx->downcount -= 3;
    // 7F050160: lwz     r0, 1328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050164:
    ctx->pc = 0x7F050164u;
    // 7F050164: cmpwi   r0, -1
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

label_7F050168:
    ctx->pc = 0x7F050168u;
    // 7F050168: bc    4, 2, 0x7F05017C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05017C;
        }
    }

label_7F05016C:
    ctx->pc = 0x7F05016Cu;
    ctx->downcount -= 4;
    // 7F05016C: lhz     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F050170:
    ctx->pc = 0x7F050170u;
    // 7F050170: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F050174:
    ctx->pc = 0x7F050174u;
    // 7F050174: sth     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F050178:
    ctx->pc = 0x7F050178u;
    // 7F050178: b       0x7F0501A4
    {
            goto label_7F0501A4;
    }

label_7F05017C:
    ctx->pc = 0x7F05017Cu;
    ctx->downcount -= 2;
    // 7F05017C: cmpwi   r0, -2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F050180:
    ctx->pc = 0x7F050180u;
    // 7F050180: bc    4, 2, 0x7F050194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050194;
        }
    }

label_7F050184:
    ctx->pc = 0x7F050184u;
    ctx->downcount -= 4;
    // 7F050184: lhz     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F050188:
    ctx->pc = 0x7F050188u;
    // 7F050188: ori     r0, r0, 0x0003
    ctx->gpr[0] = ctx->gpr[0] | 0x0003u;

label_7F05018C:
    ctx->pc = 0x7F05018Cu;
    // 7F05018C: sth     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F050190:
    ctx->pc = 0x7F050190u;
    // 7F050190: b       0x7F0501A4
    {
            goto label_7F0501A4;
    }

label_7F050194:
    ctx->pc = 0x7F050194u;
    ctx->downcount -= 4;
    // 7F050194: sth     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F050198:
    ctx->pc = 0x7F050198u;
    // 7F050198: lhz     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F05019C:
    ctx->pc = 0x7F05019Cu;
    // 7F05019C: rlwinm r0, r0, 0, 16, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFEu;
    }

label_7F0501A0:
    ctx->pc = 0x7F0501A0u;
    // 7F0501A0: sth     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0501A4:
    ctx->pc = 0x7F0501A4u;
    ctx->downcount -= 2;
    // 7F0501A4: lwz     r0, 1328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0501A8:
    ctx->pc = 0x7F0501A8u;
    // 7F0501A8: sth     r0, 98(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0501AC:
    ctx->pc = 0x7F0501ACu;
    ctx->downcount -= 6;
    // 7F0501AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0501B0:
    ctx->pc = 0x7F0501B0u;
    // 7F0501B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0501B4:
    ctx->pc = 0x7F0501B4u;
    // 7F0501B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0501B8:
    ctx->pc = 0x7F0501B8u;
    // 7F0501B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0501BC:
    ctx->pc = 0x7F0501BCu;
    // 7F0501BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0501C0:
    ctx->pc = 0x7F0501C0u;
    ctx->downcount -= 19;
    // 7F0501C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0501C4:
    ctx->pc = 0x7F0501C4u;
    // 7F0501C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0501C8:
    ctx->pc = 0x7F0501C8u;
    // 7F0501C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0501CC:
    ctx->pc = 0x7F0501CCu;
    // 7F0501CC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0501D0:
    ctx->pc = 0x7F0501D0u;
    // 7F0501D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0501D4:
    ctx->pc = 0x7F0501D4u;
    // 7F0501D4: lwz     r3, 1380(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0501D8:
    ctx->pc = 0x7F0501D8u;
    // 7F0501D8: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0501DC:
    ctx->pc = 0x7F0501DCu;
    // 7F0501DC: cmpwi   r0, 1
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

label_7F0501E0:
    ctx->pc = 0x7F0501E0u;
    // 7F0501E0: bc    4, 2, 0x7F0501F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0501F8;
        }
    }

label_7F0501E4:
    ctx->pc = 0x7F0501E4u;
    ctx->downcount -= 3;
    // 7F0501E4: lwz     r3, 1376(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1376);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0501E8:
    ctx->pc = 0x7F0501E8u;
    // 7F0501E8: cmpwi   r3, -1
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

label_7F0501EC:
    ctx->pc = 0x7F0501ECu;
    // 7F0501EC: bc    12, 2, 0x7F0501F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0501F8;
        }
    }

label_7F0501F0:
    ctx->pc = 0x7F0501F0u;
    ctx->downcount -= 2;
    // 7F0501F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0501F4:
    ctx->pc = 0x7F0501F4u;
    // 7F0501F4: bl      0x7F3C7728
    {
            ctx->lr = 0x7F0501F8u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F0501F8:
    ctx->pc = 0x7F0501F8u;
    ctx->downcount -= 21;
    // 7F0501F8: lwz     r6, 1380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1380);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0501FC:
    ctx->pc = 0x7F0501FCu;
    // 7F0501FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F050200:
    ctx->pc = 0x7F050200u;
    // 7F050200: lwz     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F050204:
    ctx->pc = 0x7F050204u;
    // 7F050204: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F050208:
    ctx->pc = 0x7F050208u;
    // 7F050208: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05020C:
    ctx->pc = 0x7F05020Cu;
    // 7F05020C: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F050210:
    ctx->pc = 0x7F050210u;
    // 7F050210: stw     r4, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F050214:
    ctx->pc = 0x7F050214u;
    // 7F050214: lwz     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F050218:
    ctx->pc = 0x7F050218u;
    // 7F050218: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05021C:
    ctx->pc = 0x7F05021Cu;
    // 7F05021C: stw     r5, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F050220:
    ctx->pc = 0x7F050220u;
    // 7F050220: stw     r4, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F050224:
    ctx->pc = 0x7F050224u;
    // 7F050224: lwz     r6, 1380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1380);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F050228:
    ctx->pc = 0x7F050228u;
    // 7F050228: lwz     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F05022C:
    ctx->pc = 0x7F05022Cu;
    // 7F05022C: lwz     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F050230:
    ctx->pc = 0x7F050230u;
    // 7F050230: stw     r5, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F050234:
    ctx->pc = 0x7F050234u;
    // 7F050234: stw     r4, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F050238:
    ctx->pc = 0x7F050238u;
    // 7F050238: lwz     r4, 1380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1380);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05023C:
    ctx->pc = 0x7F05023Cu;
    // 7F05023C: stw     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050240:
    ctx->pc = 0x7F050240u;
    // 7F050240: lwz     r4, 1380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1380);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F050244:
    ctx->pc = 0x7F050244u;
    // 7F050244: stw     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050248:
    ctx->pc = 0x7F050248u;
    // 7F050248: bl      0x7F042AAC
    {
            ctx->lr = 0x7F05024Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F05024C:
    ctx->pc = 0x7F05024Cu;
    ctx->downcount -= 2;
    // 7F05024C: addi    r3, r31, 608
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(608);

label_7F050250:
    ctx->pc = 0x7F050250u;
    // 7F050250: bl      0x7F0146B0
    {
            ctx->lr = 0x7F050254u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F050254:
    ctx->pc = 0x7F050254u;
    ctx->downcount -= 2;
    // 7F050254: lwz     r3, 1380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050258:
    ctx->pc = 0x7F050258u;
    // 7F050258: bl      0x7F04EB5C
    {
            ctx->lr = 0x7F05025Cu;
            ctx->pc = 0x7F04EB5Cu;
            return;
    }

label_7F05025C:
    ctx->pc = 0x7F05025Cu;
    ctx->downcount -= 2;
    // 7F05025C: cmpwi   r3, 0
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

label_7F050260:
    ctx->pc = 0x7F050260u;
    // 7F050260: bc    12, 2, 0x7F05027C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05027C;
        }
    }

label_7F050264:
    ctx->pc = 0x7F050264u;
    ctx->downcount -= 6;
    // 7F050264: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F050268:
    ctx->pc = 0x7F050268u;
    // 7F050268: addi    r3, r31, 800
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(800);

label_7F05026C:
    ctx->pc = 0x7F05026Cu;
    // 7F05026C: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F050270:
    ctx->pc = 0x7F050270u;
    // 7F050270: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F050274:
    ctx->pc = 0x7F050274u;
    // 7F050274: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F050278:
    ctx->pc = 0x7F050278u;
    // 7F050278: bl      0x7F014944
    {
            ctx->lr = 0x7F05027Cu;
            ctx->pc = 0x7F014944u;
            return;
    }

label_7F05027C:
    ctx->pc = 0x7F05027Cu;
    ctx->downcount -= 3;
    // 7F05027C: lhz     r0, 1316(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1316);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F050280:
    ctx->pc = 0x7F050280u;
    // 7F050280: rlwinm. r0, r0, 0, 29, 29
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

label_7F050284:
    ctx->pc = 0x7F050284u;
    // 7F050284: bc    12, 2, 0x7F050290
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050290;
        }
    }

label_7F050288:
    ctx->pc = 0x7F050288u;
    ctx->downcount -= 2;
    // 7F050288: addi    r3, r31, 1184
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1184);

label_7F05028C:
    ctx->pc = 0x7F05028Cu;
    // 7F05028C: bl      0x7F01D540
    {
            ctx->lr = 0x7F050290u;
            ctx->pc = 0x7F01D540u;
            return;
    }

label_7F050290:
    ctx->pc = 0x7F050290u;
    ctx->downcount -= 2;
    // 7F050290: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F050294:
    ctx->pc = 0x7F050294u;
    // 7F050294: bl      0x7F023E10
    {
            ctx->lr = 0x7F050298u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F050298:
    ctx->pc = 0x7F050298u;
    ctx->downcount -= 2;
    // 7F050298: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F05029C:
    ctx->pc = 0x7F05029Cu;
    // 7F05029C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0502A0:
    ctx->downcount -= 4;
    // 7F0502A0: addi    r0, r30, 1388
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(1388);

label_7F0502A4:
    ctx->pc = 0x7F0502A4u;
    // 7F0502A4: lwzx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0502A8:
    // 7F0502A8: cmplwi  r3, 0x0000
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

label_7F0502AC:
    // 7F0502AC: bc    12, 2, 0x7F0502B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0502B4;
        }
    }

label_7F0502B0:
    ctx->downcount -= 1;
    // 7F0502B0: bl      0x7F10C3F0
    {
            ctx->lr = 0x7F0502B4u;
            ctx->pc = 0x7F10C3F0u;
            return;
    }

label_7F0502B4:
    ctx->downcount -= 4;
    // 7F0502B4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F0502B8:
    // 7F0502B8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F0502BC:
    // 7F0502BC: cmpwi   r29, 4
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0502C0:
    // 7F0502C0: bc    12, 0, 0x7F0502A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0502A0u;
                return;
            }
            goto label_7F0502A0;
        }
    }

label_7F0502C4:
    ctx->pc = 0x7F0502C4u;
    ctx->downcount -= 3;
    // 7F0502C4: lwz     r3, 1404(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1404);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0502C8:
    ctx->pc = 0x7F0502C8u;
    // 7F0502C8: cmplwi  r3, 0x0000
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

label_7F0502CC:
    ctx->pc = 0x7F0502CCu;
    // 7F0502CC: bc    12, 2, 0x7F0502D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0502D4;
        }
    }

label_7F0502D0:
    ctx->pc = 0x7F0502D0u;
    ctx->downcount -= 1;
    // 7F0502D0: bl      0x7F10D51C
    {
            ctx->lr = 0x7F0502D4u;
            ctx->pc = 0x7F10D51Cu;
            return;
    }

label_7F0502D4:
    ctx->pc = 0x7F0502D4u;
    ctx->downcount -= 21;
    // 7F0502D4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0502D8:
    ctx->pc = 0x7F0502D8u;
    // 7F0502D8: addi    r4, r3, 22384
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(22384);

label_7F0502DC:
    ctx->pc = 0x7F0502DCu;
    // 7F0502DC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0502E0:
    ctx->pc = 0x7F0502E0u;
    // 7F0502E0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0502E4:
    ctx->pc = 0x7F0502E4u;
    // 7F0502E4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0502E8:
    ctx->pc = 0x7F0502E8u;
    // 7F0502E8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0502EC:
    ctx->pc = 0x7F0502ECu;
    // 7F0502EC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0502F0:
    ctx->pc = 0x7F0502F0u;
    // 7F0502F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0502F4:
    ctx->pc = 0x7F0502F4u;
    // 7F0502F4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0502F8:
    ctx->pc = 0x7F0502F8u;
    // 7F0502F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0502FC:
    ctx->pc = 0x7F0502FCu;
    ctx->downcount -= 17;
    // 7F0502FC: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F050300:
    ctx->pc = 0x7F050300u;
    // 7F050300: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F050304:
    ctx->pc = 0x7F050304u;
    // 7F050304: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050308:
    ctx->pc = 0x7F050308u;
    // 7F050308: stmw     r27, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F05030C:
    ctx->pc = 0x7F05030Cu;
    // 7F05030C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F050310:
    ctx->pc = 0x7F050310u;
    // 7F050310: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050314:
    ctx->pc = 0x7F050314u;
    // 7F050314: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F050318u;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F050318:
    ctx->pc = 0x7F050318u;
    ctx->downcount -= 1;
    // 7F050318: bl      0x7F01A1F0
    {
            ctx->lr = 0x7F05031Cu;
            ctx->pc = 0x7F01A1F0u;
            return;
    }

label_7F05031C:
    ctx->pc = 0x7F05031Cu;
    ctx->downcount -= 1;
    // 7F05031C: bl      0x7F01C018
    {
            ctx->lr = 0x7F050320u;
            ctx->pc = 0x7F01C018u;
            return;
    }

label_7F050320:
    ctx->pc = 0x7F050320u;
    ctx->downcount -= 4;
    // 7F050320: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F050324:
    ctx->pc = 0x7F050324u;
    // 7F050324: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F050328:
    ctx->pc = 0x7F050328u;
    // 7F050328: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F05032C:
    ctx->pc = 0x7F05032Cu;
    // 7F05032C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F050330u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F050330:
    ctx->pc = 0x7F050330u;
    ctx->downcount -= 2;
    // 7F050330: cmplwi  r3, 0x0000
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

label_7F050334:
    ctx->pc = 0x7F050334u;
    // 7F050334: bc    12, 2, 0x7F050348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050348;
        }
    }

label_7F050338:
    ctx->pc = 0x7F050338u;
    ctx->downcount -= 1;
    // 7F050338: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F05033Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F05033C:
    ctx->pc = 0x7F05033Cu;
    ctx->downcount -= 2;
    // 7F05033C: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F050340:
    ctx->pc = 0x7F050340u;
    // 7F050340: bl      0x7F3C6904
    {
            ctx->lr = 0x7F050344u;
            ctx->pc = 0x7F3C6904u;
            return;
    }

label_7F050344:
    ctx->pc = 0x7F050344u;
    ctx->downcount -= 1;
    // 7F050344: b       0x7F050370
    {
            goto label_7F050370;
    }

label_7F050348:
    ctx->pc = 0x7F050348u;
    ctx->downcount -= 10;
    // 7F050348: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F05034C:
    ctx->pc = 0x7F05034Cu;
    // 7F05034C: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F050350:
    ctx->pc = 0x7F050350u;
    // 7F050350: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F050354:
    ctx->pc = 0x7F050354u;
    // 7F050354: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F050358:
    ctx->pc = 0x7F050358u;
    // 7F050358: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05035C:
    ctx->pc = 0x7F05035Cu;
    // 7F05035C: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050360:
    ctx->pc = 0x7F050360u;
    // 7F050360: stw     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F050364:
    ctx->pc = 0x7F050364u;
    // 7F050364: stw     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F050368:
    ctx->pc = 0x7F050368u;
    // 7F050368: stw     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F05036C:
    ctx->pc = 0x7F05036Cu;
    // 7F05036C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050370:
    ctx->pc = 0x7F050370u;
    ctx->downcount -= 2;
    // 7F050370: li      r3, 111
    ctx->gpr[3] = (u32)(s32)(111);

label_7F050374:
    ctx->pc = 0x7F050374u;
    // 7F050374: bl      0x7F3C664C
    {
            ctx->lr = 0x7F050378u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F050378:
    ctx->pc = 0x7F050378u;
    ctx->downcount -= 2;
    // 7F050378: cmplwi  r3, 0x0000
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

label_7F05037C:
    ctx->pc = 0x7F05037Cu;
    // 7F05037C: bc    12, 2, 0x7F050390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050390;
        }
    }

label_7F050380:
    ctx->pc = 0x7F050380u;
    ctx->downcount -= 1;
    // 7F050380: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F050384u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F050384:
    ctx->pc = 0x7F050384u;
    ctx->downcount -= 2;
    // 7F050384: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F050388:
    ctx->pc = 0x7F050388u;
    // 7F050388: bl      0x7F3C6904
    {
            ctx->lr = 0x7F05038Cu;
            ctx->pc = 0x7F3C6904u;
            return;
    }

label_7F05038C:
    ctx->pc = 0x7F05038Cu;
    ctx->downcount -= 1;
    // 7F05038C: b       0x7F0503B8
    {
            goto label_7F0503B8;
    }

label_7F050390:
    ctx->pc = 0x7F050390u;
    ctx->downcount -= 10;
    // 7F050390: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F050394:
    ctx->pc = 0x7F050394u;
    // 7F050394: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F050398:
    ctx->pc = 0x7F050398u;
    // 7F050398: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F05039C:
    ctx->pc = 0x7F05039Cu;
    // 7F05039C: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0503A0:
    ctx->pc = 0x7F0503A0u;
    // 7F0503A0: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0503A4:
    ctx->pc = 0x7F0503A4u;
    // 7F0503A4: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0503A8:
    ctx->pc = 0x7F0503A8u;
    // 7F0503A8: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0503AC:
    ctx->pc = 0x7F0503ACu;
    // 7F0503AC: stw     r4, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0503B0:
    ctx->pc = 0x7F0503B0u;
    // 7F0503B0: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0503B4:
    ctx->pc = 0x7F0503B4u;
    // 7F0503B4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0503B8:
    ctx->pc = 0x7F0503B8u;
    ctx->downcount -= 2;
    // 7F0503B8: lwz     r3, 1380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0503BC:
    ctx->pc = 0x7F0503BCu;
    // 7F0503BC: bl      0x7F04EB5C
    {
            ctx->lr = 0x7F0503C0u;
            ctx->pc = 0x7F04EB5Cu;
            return;
    }

label_7F0503C0:
    ctx->pc = 0x7F0503C0u;
    ctx->downcount -= 2;
    // 7F0503C0: cmpwi   r3, 0
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

label_7F0503C4:
    ctx->pc = 0x7F0503C4u;
    // 7F0503C4: bc    12, 2, 0x7F05040C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05040C;
        }
    }

label_7F0503C8:
    ctx->pc = 0x7F0503C8u;
    ctx->downcount -= 17;
    // 7F0503C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0503CC:
    ctx->pc = 0x7F0503CCu;
    // 7F0503CC: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F0503D0:
    ctx->pc = 0x7F0503D0u;
    // 7F0503D0: lfs     f0, -10904(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0503D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10904);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0503D4:
    ctx->pc = 0x7F0503D4u;
    // 7F0503D4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0503D8:
    ctx->pc = 0x7F0503D8u;
    // 7F0503D8: lfs     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0503D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0503DC:
    ctx->pc = 0x7F0503DCu;
    // 7F0503DC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0503E0:
    ctx->pc = 0x7F0503E0u;
    // 7F0503E0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0503E4:
    ctx->pc = 0x7F0503E4u;
    // 7F0503E4: lfs     f3, -10900(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0503E4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-10900);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0503E8:
    ctx->pc = 0x7F0503E8u;
    // 7F0503E8: fsubs   f4, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0503E8u)) return;
    ppc_fsubs(ctx, 4, 1, 0);

label_7F0503EC:
    ctx->pc = 0x7F0503ECu;
    // 7F0503EC: lfs     f2, -10896(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0503ECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0503F0:
    ctx->pc = 0x7F0503F0u;
    // 7F0503F0: lfs     f1, -10920(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0503F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10920);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0503F4:
    ctx->pc = 0x7F0503F4u;
    // 7F0503F4: lfs     f0, -10892(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0503F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10892);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0503F8:
    ctx->pc = 0x7F0503F8u;
    // 7F0503F8: stfs     f4, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0503F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0503FC:
    ctx->pc = 0x7F0503FCu;
    // 7F0503FC: stfs     f3, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0503FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F050400:
    ctx->pc = 0x7F050400u;
    // 7F050400: stfs     f2, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050400u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F050404:
    ctx->pc = 0x7F050404u;
    // 7F050404: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050404u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F050408:
    ctx->pc = 0x7F050408u;
    // 7F050408: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050408u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F05040C:
    ctx->pc = 0x7F05040Cu;
    ctx->downcount -= 63;
    // 7F05040C: lwz     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050410:
    ctx->pc = 0x7F050410u;
    // 7F050410: addic.  r30, r28, 608
    {
        u64 a = ctx->gpr[28];
        u64 b = (u32)(s32)(608);
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

label_7F050414:
    ctx->pc = 0x7F050414u;
    // 7F050414: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050418:
    ctx->pc = 0x7F050418u;
    // 7F050418: stw     r3, 1408(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1408);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F05041C:
    ctx->pc = 0x7F05041Cu;
    // 7F05041C: stw     r0, 1412(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1412);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050420:
    ctx->pc = 0x7F050420u;
    // 7F050420: lwz     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050424:
    ctx->pc = 0x7F050424u;
    // 7F050424: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050428:
    ctx->pc = 0x7F050428u;
    // 7F050428: stw     r3, 1416(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1416);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F05042C:
    ctx->pc = 0x7F05042Cu;
    // 7F05042C: stw     r0, 1420(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050430:
    ctx->pc = 0x7F050430u;
    // 7F050430: lwz     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050434:
    ctx->pc = 0x7F050434u;
    // 7F050434: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050438:
    ctx->pc = 0x7F050438u;
    // 7F050438: stw     r3, 1424(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1424);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F05043C:
    ctx->pc = 0x7F05043Cu;
    // 7F05043C: stw     r0, 1428(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050440:
    ctx->pc = 0x7F050440u;
    // 7F050440: lwz     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050444:
    ctx->pc = 0x7F050444u;
    // 7F050444: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050448:
    ctx->pc = 0x7F050448u;
    // 7F050448: stw     r3, 1432(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1432);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F05044C:
    ctx->pc = 0x7F05044Cu;
    // 7F05044C: stw     r0, 1436(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1436);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050450:
    ctx->pc = 0x7F050450u;
    // 7F050450: lfs     f0, 32(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F050450u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F050454:
    ctx->pc = 0x7F050454u;
    // 7F050454: lfs     f2, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050454u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F050458:
    ctx->pc = 0x7F050458u;
    // 7F050458: lfs     f3, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050458u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F05045C:
    ctx->pc = 0x7F05045Cu;
    // 7F05045C: fadds   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F05045Cu)) return;
    ppc_fadds(ctx, 1, 0, 2);

label_7F050460:
    ctx->pc = 0x7F050460u;
    // 7F050460: lfs     f4, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050460u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F050464:
    ctx->pc = 0x7F050464u;
    // 7F050464: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F050464u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F050468:
    ctx->pc = 0x7F050468u;
    // 7F050468: lfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050468u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F05046C:
    ctx->pc = 0x7F05046Cu;
    // 7F05046C: lfs     f5, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F05046Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F050470:
    ctx->pc = 0x7F050470u;
    // 7F050470: fadds   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F050470u)) return;
    ppc_fadds(ctx, 1, 3, 1);

label_7F050474:
    ctx->pc = 0x7F050474u;
    // 7F050474: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F050474u)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F050478:
    ctx->pc = 0x7F050478u;
    // 7F050478: lfs     f3, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050478u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F05047C:
    ctx->pc = 0x7F05047Cu;
    // 7F05047C: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F05047Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F050480:
    ctx->pc = 0x7F050480u;
    // 7F050480: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F050480u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F050484:
    ctx->pc = 0x7F050484u;
    // 7F050484: stfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050484u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F050488:
    ctx->pc = 0x7F050488u;
    // 7F050488: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05048C:
    ctx->pc = 0x7F05048Cu;
    // 7F05048C: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F05048Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F050490:
    ctx->pc = 0x7F050490u;
    // 7F050490: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050494:
    ctx->pc = 0x7F050494u;
    // 7F050494: lwz     r3, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050498:
    ctx->pc = 0x7F050498u;
    // 7F050498: lfs     f0, 36(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F050498u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F05049C:
    ctx->pc = 0x7F05049Cu;
    // 7F05049C: fadds   f1, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F05049Cu)) return;
    ppc_fadds(ctx, 1, 0, 4);

label_7F0504A0:
    ctx->pc = 0x7F0504A0u;
    // 7F0504A0: fsubs   f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x7F0504A0u)) return;
    ppc_fsubs(ctx, 0, 0, 4);

label_7F0504A4:
    ctx->pc = 0x7F0504A4u;
    // 7F0504A4: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0504A4u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F0504A8:
    ctx->pc = 0x7F0504A8u;
    // 7F0504A8: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0504A8u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F0504AC:
    ctx->pc = 0x7F0504ACu;
    // 7F0504AC: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0504ACu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0504B0:
    ctx->pc = 0x7F0504B0u;
    // 7F0504B0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0504B0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0504B4:
    ctx->pc = 0x7F0504B4u;
    // 7F0504B4: stfd     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0504B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0504B8:
    ctx->pc = 0x7F0504B8u;
    // 7F0504B8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0504BC:
    ctx->pc = 0x7F0504BCu;
    // 7F0504BC: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0504BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0504C0:
    ctx->pc = 0x7F0504C0u;
    // 7F0504C0: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0504C4:
    ctx->pc = 0x7F0504C4u;
    // 7F0504C4: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0504C8:
    ctx->pc = 0x7F0504C8u;
    // 7F0504C8: lfs     f0, 40(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0504C8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0504CC:
    ctx->pc = 0x7F0504CCu;
    // 7F0504CC: fadds   f1, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0504CCu)) return;
    ppc_fadds(ctx, 1, 0, 5);

label_7F0504D0:
    ctx->pc = 0x7F0504D0u;
    // 7F0504D0: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0504D4:
    ctx->pc = 0x7F0504D4u;
    // 7F0504D4: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F0504D4u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_7F0504D8:
    ctx->pc = 0x7F0504D8u;
    // 7F0504D8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0504DC:
    ctx->pc = 0x7F0504DCu;
    // 7F0504DC: fadds   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0504DCu)) return;
    ppc_fadds(ctx, 1, 3, 1);

label_7F0504E0:
    ctx->pc = 0x7F0504E0u;
    // 7F0504E0: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0504E0u)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F0504E4:
    ctx->pc = 0x7F0504E4u;
    // 7F0504E4: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0504E4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0504E8:
    ctx->pc = 0x7F0504E8u;
    // 7F0504E8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0504E8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0504EC:
    ctx->pc = 0x7F0504ECu;
    // 7F0504EC: stfd     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0504ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0504F0:
    ctx->pc = 0x7F0504F0u;
    // 7F0504F0: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0504F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0504F4:
    ctx->pc = 0x7F0504F4u;
    // 7F0504F4: lwz     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0504F8:
    ctx->pc = 0x7F0504F8u;
    // 7F0504F8: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0504FC:
    ctx->pc = 0x7F0504FCu;
    // 7F0504FC: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F050500:
    ctx->pc = 0x7F050500u;
    // 7F050500: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050504:
    ctx->pc = 0x7F050504u;
    // 7F050504: bc    4, 2, 0x7F050510
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050510;
        }
    }

label_7F050508:
    ctx->pc = 0x7F050508u;
    ctx->downcount -= 2;
    // 7F050508: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F05050C:
    ctx->pc = 0x7F05050Cu;
    // 7F05050C: b       0x7F0508C0
    {
            goto label_7F0508C0;
    }

label_7F050510:
    ctx->pc = 0x7F050510u;
    ctx->downcount -= 4;
    // 7F050510: lhz     r0, 1316(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1316);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F050514:
    ctx->pc = 0x7F050514u;
    // 7F050514: li      r31, 16
    ctx->gpr[31] = (u32)(s32)(16);

label_7F050518:
    ctx->pc = 0x7F050518u;
    // 7F050518: rlwinm. r0, r0, 0, 31, 31
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

label_7F05051C:
    ctx->pc = 0x7F05051Cu;
    // 7F05051C: bc    12, 2, 0x7F050530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050530;
        }
    }

label_7F050520:
    ctx->pc = 0x7F050520u;
    ctx->downcount -= 4;
    // 7F050520: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F050524:
    ctx->pc = 0x7F050524u;
    // 7F050524: ori     r31, r31, 0x0001
    ctx->gpr[31] = ctx->gpr[31] | 0x0001u;

label_7F050528:
    ctx->pc = 0x7F050528u;
    // 7F050528: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F05052C:
    ctx->pc = 0x7F05052Cu;
    // 7F05052C: bl      0x7F04EDE4
    {
            ctx->lr = 0x7F050530u;
            ctx->pc = 0x7F04EDE4u;
            return;
    }

label_7F050530:
    ctx->pc = 0x7F050530u;
    ctx->downcount -= 3;
    // 7F050530: lhz     r0, 1316(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1316);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F050534:
    ctx->pc = 0x7F050534u;
    // 7F050534: rlwinm. r0, r0, 0, 30, 30
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

label_7F050538:
    ctx->pc = 0x7F050538u;
    // 7F050538: bc    12, 2, 0x7F050540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050540;
        }
    }

label_7F05053C:
    ctx->pc = 0x7F05053Cu;
    ctx->downcount -= 1;
    // 7F05053C: ori     r31, r31, 0x0004
    ctx->gpr[31] = ctx->gpr[31] | 0x0004u;

label_7F050540:
    ctx->pc = 0x7F050540u;
    ctx->downcount -= 9;
    // 7F050540: oris    r31, r31, 0x0200
    ctx->gpr[31] = ctx->gpr[31] | (0x0200u << 16);

label_7F050544:
    ctx->pc = 0x7F050544u;
    // 7F050544: lwz     r5, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F050548:
    ctx->pc = 0x7F050548u;
    // 7F050548: ori     r31, r31, 0x4005
    ctx->gpr[31] = ctx->gpr[31] | 0x4005u;

label_7F05054C:
    ctx->pc = 0x7F05054Cu;
    // 7F05054C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050550:
    ctx->pc = 0x7F050550u;
    // 7F050550: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F050554:
    ctx->pc = 0x7F050554u;
    // 7F050554: addi    r7, r1, 56
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(56);

label_7F050558:
    ctx->pc = 0x7F050558u;
    // 7F050558: addi    r8, r1, 40
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(40);

label_7F05055C:
    ctx->pc = 0x7F05055Cu;
    // 7F05055C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F050560:
    ctx->pc = 0x7F050560u;
    // 7F050560: bl      0x7F014788
    {
            ctx->lr = 0x7F050564u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F050564:
    ctx->pc = 0x7F050564u;
    ctx->downcount -= 10;
    // 7F050564: lwz     r0, 1320(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050568:
    ctx->pc = 0x7F050568u;
    // 7F050568: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F05056C:
    ctx->pc = 0x7F05056Cu;
    // 7F05056C: addi    r9, r3, 12832
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F050570:
    ctx->pc = 0x7F050570u;
    // 7F050570: addi    r4, r28, 1216
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1216);

label_7F050574:
    ctx->pc = 0x7F050574u;
    // 7F050574: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050578:
    ctx->pc = 0x7F050578u;
    // 7F050578: rlwinm r6, r0, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F05057C:
    ctx->pc = 0x7F05057Cu;
    // 7F05057C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F050580:
    ctx->pc = 0x7F050580u;
    // 7F050580: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F050584:
    ctx->pc = 0x7F050584u;
    // 7F050584: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F050588:
    ctx->pc = 0x7F050588u;
    // 7F050588: bl      0x7F014B78
    {
            ctx->lr = 0x7F05058Cu;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F05058C:
    ctx->pc = 0x7F05058Cu;
    ctx->downcount -= 5;
    // 7F05058C: lis     r3, 32517
    ctx->gpr[3] = ((u32)(s32)(32517) << 16);

label_7F050590:
    ctx->pc = 0x7F050590u;
    // 7F050590: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F050594:
    ctx->pc = 0x7F050594u;
    // 7F050594: addi    r4, r3, -3184
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-3184);

label_7F050598:
    ctx->pc = 0x7F050598u;
    // 7F050598: addi    r3, r28, 608
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(608);

label_7F05059C:
    ctx->pc = 0x7F05059Cu;
    // 7F05059C: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0505A0u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0505A0:
    ctx->pc = 0x7F0505A0u;
    ctx->downcount -= 2;
    // 7F0505A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0505A4:
    ctx->pc = 0x7F0505A4u;
    // 7F0505A4: bl      0x7F0148A0
    {
            ctx->lr = 0x7F0505A8u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F0505A8:
    ctx->pc = 0x7F0505A8u;
    ctx->downcount -= 2;
    // 7F0505A8: lwz     r3, 1380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0505AC:
    ctx->pc = 0x7F0505ACu;
    // 7F0505AC: bl      0x7F04EB5C
    {
            ctx->lr = 0x7F0505B0u;
            ctx->pc = 0x7F04EB5Cu;
            return;
    }

label_7F0505B0:
    ctx->pc = 0x7F0505B0u;
    ctx->downcount -= 2;
    // 7F0505B0: cmpwi   r3, 0
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

label_7F0505B4:
    ctx->pc = 0x7F0505B4u;
    // 7F0505B4: bc    12, 2, 0x7F050664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050664;
        }
    }

label_7F0505B8:
    ctx->pc = 0x7F0505B8u;
    ctx->downcount -= 26;
    // 7F0505B8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0505BC:
    ctx->pc = 0x7F0505BCu;
    // 7F0505BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0505C0:
    ctx->pc = 0x7F0505C0u;
    // 7F0505C0: addi    r6, r4, -10908
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-10908);

label_7F0505C4:
    ctx->pc = 0x7F0505C4u;
    // 7F0505C4: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F0505C8:
    ctx->pc = 0x7F0505C8u;
    // 7F0505C8: addi    r5, r3, -10888
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-10888);

label_7F0505CC:
    ctx->pc = 0x7F0505CCu;
    // 7F0505CC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0505CCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0505D0:
    ctx->pc = 0x7F0505D0u;
    // 7F0505D0: lfs     f2, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0505D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0505D4:
    ctx->pc = 0x7F0505D4u;
    // 7F0505D4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0505D8:
    ctx->pc = 0x7F0505D8u;
    // 7F0505D8: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0505D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0505DC:
    ctx->pc = 0x7F0505DCu;
    // 7F0505DC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0505E0:
    ctx->pc = 0x7F0505E0u;
    // 7F0505E0: lfs     f3, -10900(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0505E0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-10900);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0505E4:
    ctx->pc = 0x7F0505E4u;
    // 7F0505E4: addi    r27, r28, 800
    ctx->gpr[27] = ctx->gpr[28] + (u32)(s32)(800);

label_7F0505E8:
    ctx->pc = 0x7F0505E8u;
    // 7F0505E8: fmsubs f2, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0505E8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, true, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F0505EC:
    ctx->pc = 0x7F0505ECu;
    // 7F0505EC: lfs     f1, -10884(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0505ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10884);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0505F0:
    ctx->pc = 0x7F0505F0u;
    // 7F0505F0: lfs     f0, -10904(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0505F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10904);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0505F4:
    ctx->pc = 0x7F0505F4u;
    // 7F0505F4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0505F8:
    ctx->pc = 0x7F0505F8u;
    // 7F0505F8: stfs     f3, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0505F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0505FC:
    ctx->pc = 0x7F0505FCu;
    // 7F0505FC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F050600:
    ctx->pc = 0x7F050600u;
    // 7F050600: stfs     f2, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050600u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F050604:
    ctx->pc = 0x7F050604u;
    // 7F050604: addi    r7, r1, 56
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(56);

label_7F050608:
    ctx->pc = 0x7F050608u;
    // 7F050608: addi    r8, r1, 40
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(40);

label_7F05060C:
    ctx->pc = 0x7F05060Cu;
    // 7F05060C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F050610:
    ctx->pc = 0x7F050610u;
    // 7F050610: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050610u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F050614:
    ctx->pc = 0x7F050614u;
    // 7F050614: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050614u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F050618:
    ctx->pc = 0x7F050618u;
    // 7F050618: lwz     r5, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F05061C:
    ctx->pc = 0x7F05061Cu;
    // 7F05061C: bl      0x7F014788
    {
            ctx->lr = 0x7F050620u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F050620:
    ctx->pc = 0x7F050620u;
    ctx->downcount -= 10;
    // 7F050620: lwz     r0, 1320(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050624:
    ctx->pc = 0x7F050624u;
    // 7F050624: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F050628:
    ctx->pc = 0x7F050628u;
    // 7F050628: addi    r9, r3, 12832
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F05062C:
    ctx->pc = 0x7F05062Cu;
    // 7F05062C: addi    r4, r28, 1216
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1216);

label_7F050630:
    ctx->pc = 0x7F050630u;
    // 7F050630: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F050634:
    ctx->pc = 0x7F050634u;
    // 7F050634: rlwinm r6, r0, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F050638:
    ctx->pc = 0x7F050638u;
    // 7F050638: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F05063C:
    ctx->pc = 0x7F05063Cu;
    // 7F05063C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F050640:
    ctx->pc = 0x7F050640u;
    // 7F050640: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F050644:
    ctx->pc = 0x7F050644u;
    // 7F050644: bl      0x7F014B78
    {
            ctx->lr = 0x7F050648u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F050648:
    ctx->pc = 0x7F050648u;
    ctx->downcount -= 5;
    // 7F050648: lis     r4, 32517
    ctx->gpr[4] = ((u32)(s32)(32517) << 16);

label_7F05064C:
    ctx->pc = 0x7F05064Cu;
    // 7F05064C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F050650:
    ctx->pc = 0x7F050650u;
    // 7F050650: addi    r4, r4, -3184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3184);

label_7F050654:
    ctx->pc = 0x7F050654u;
    // 7F050654: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F050658:
    ctx->pc = 0x7F050658u;
    // 7F050658: bl      0x7F014B6C
    {
            ctx->lr = 0x7F05065Cu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F05065C:
    ctx->pc = 0x7F05065Cu;
    ctx->downcount -= 2;
    // 7F05065C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F050660:
    ctx->pc = 0x7F050660u;
    // 7F050660: bl      0x7F0148A0
    {
            ctx->lr = 0x7F050664u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F050664:
    ctx->pc = 0x7F050664u;
    ctx->downcount -= 2;
    // 7F050664: lwz     r3, 1380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050668:
    ctx->pc = 0x7F050668u;
    // 7F050668: bl      0x7F04EB5C
    {
            ctx->lr = 0x7F05066Cu;
            ctx->pc = 0x7F04EB5Cu;
            return;
    }

label_7F05066C:
    ctx->pc = 0x7F05066Cu;
    ctx->downcount -= 2;
    // 7F05066C: cmpwi   r3, 0
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

label_7F050670:
    ctx->pc = 0x7F050670u;
    // 7F050670: bc    12, 2, 0x7F050684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050684;
        }
    }

label_7F050674:
    ctx->pc = 0x7F050674u;
    ctx->downcount -= 4;
    // 7F050674: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F050678:
    ctx->pc = 0x7F050678u;
    // 7F050678: lfs     f0, -10920(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F050678u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10920);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F05067C:
    ctx->pc = 0x7F05067Cu;
    // 7F05067C: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F05067Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F050680:
    ctx->pc = 0x7F050680u;
    // 7F050680: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F050680u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F050684:
    ctx->pc = 0x7F050684u;
    ctx->downcount -= 3;
    // 7F050684: lhz     r0, 1316(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1316);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F050688:
    ctx->pc = 0x7F050688u;
    // 7F050688: rlwinm. r0, r0, 0, 29, 29
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

label_7F05068C:
    ctx->pc = 0x7F05068Cu;
    // 7F05068C: bc    12, 2, 0x7F050698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050698;
        }
    }

label_7F050690:
    ctx->pc = 0x7F050690u;
    ctx->downcount -= 2;
    // 7F050690: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F050694:
    ctx->pc = 0x7F050694u;
    // 7F050694: bl      0x7F04FBF4
    {
            ctx->lr = 0x7F050698u;
            ctx->pc = 0x7F04FBF4u;
            return;
    }

label_7F050698:
    ctx->pc = 0x7F050698u;
    ctx->downcount -= 2;
    // 7F050698: lwz     r3, 1380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05069C:
    ctx->pc = 0x7F05069Cu;
    // 7F05069C: bl      0x7F04EB84
    {
            ctx->lr = 0x7F0506A0u;
            ctx->pc = 0x7F04EB84u;
            return;
    }

label_7F0506A0:
    ctx->pc = 0x7F0506A0u;
    ctx->downcount -= 2;
    // 7F0506A0: cmpwi   r3, 0
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

label_7F0506A4:
    ctx->pc = 0x7F0506A4u;
    // 7F0506A4: bc    12, 2, 0x7F0506C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0506C4;
        }
    }

label_7F0506A8:
    ctx->pc = 0x7F0506A8u;
    ctx->downcount -= 6;
    // 7F0506A8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0506AC:
    ctx->pc = 0x7F0506ACu;
    // 7F0506AC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0506B0:
    ctx->pc = 0x7F0506B0u;
    // 7F0506B0: addi    r6, r1, 24
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0506B4:
    ctx->pc = 0x7F0506B4u;
    // 7F0506B4: addi    r7, r28, 1388
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(1388);

label_7F0506B8:
    ctx->pc = 0x7F0506B8u;
    // 7F0506B8: li      r4, 320
    ctx->gpr[4] = (u32)(s32)(320);

label_7F0506BC:
    ctx->pc = 0x7F0506BCu;
    // 7F0506BC: bl      0x7F04E7A8
    {
            ctx->lr = 0x7F0506C0u;
            ctx->pc = 0x7F04E7A8u;
            return;
    }

label_7F0506C0:
    ctx->pc = 0x7F0506C0u;
    ctx->downcount -= 1;
    // 7F0506C0: b       0x7F0506FC
    {
            goto label_7F0506FC;
    }

label_7F0506C4:
    ctx->pc = 0x7F0506C4u;
    ctx->downcount -= 2;
    // 7F0506C4: lwz     r3, 1380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0506C8:
    ctx->pc = 0x7F0506C8u;
    // 7F0506C8: bl      0x7F04E95C
    {
            ctx->lr = 0x7F0506CCu;
            ctx->pc = 0x7F04E95Cu;
            return;
    }

label_7F0506CC:
    ctx->pc = 0x7F0506CCu;
    ctx->downcount -= 2;
    // 7F0506CC: cmpwi   r3, 0
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

label_7F0506D0:
    ctx->pc = 0x7F0506D0u;
    // 7F0506D0: bc    12, 2, 0x7F0506F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0506F4;
        }
    }

label_7F0506D4:
    ctx->pc = 0x7F0506D4u;
    ctx->downcount -= 2;
    // 7F0506D4: lwz     r3, 1380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0506D8:
    ctx->pc = 0x7F0506D8u;
    // 7F0506D8: bl      0x7F04E95C
    {
            ctx->lr = 0x7F0506DCu;
            ctx->pc = 0x7F04E95Cu;
            return;
    }

label_7F0506DC:
    ctx->pc = 0x7F0506DCu;
    ctx->downcount -= 2;
    // 7F0506DC: cmpwi   r3, 0
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

label_7F0506E0:
    ctx->pc = 0x7F0506E0u;
    // 7F0506E0: bc    12, 2, 0x7F0506FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0506FC;
        }
    }

label_7F0506E4:
    ctx->pc = 0x7F0506E4u;
    ctx->downcount -= 4;
    // 7F0506E4: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0506E8:
    ctx->pc = 0x7F0506E8u;
    // 7F0506E8: addi    r0, r3, -100
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-100);

label_7F0506EC:
    ctx->pc = 0x7F0506ECu;
    // 7F0506EC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0506F0:
    ctx->pc = 0x7F0506F0u;
    // 7F0506F0: b       0x7F0506FC
    {
            goto label_7F0506FC;
    }

label_7F0506F4:
    ctx->pc = 0x7F0506F4u;
    ctx->downcount -= 2;
    // 7F0506F4: lwz     r3, 1380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0506F8:
    ctx->pc = 0x7F0506F8u;
    // 7F0506F8: bl      0x7F04E978
    {
            ctx->lr = 0x7F0506FCu;
            ctx->pc = 0x7F04E978u;
            return;
    }

label_7F0506FC:
    ctx->pc = 0x7F0506FCu;
    ctx->downcount -= 2;
    // 7F0506FC: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F050700:
    ctx->pc = 0x7F050700u;
    // 7F050700: bl      0x7F3C664C
    {
            ctx->lr = 0x7F050704u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F050704:
    ctx->pc = 0x7F050704u;
    ctx->downcount -= 2;
    // 7F050704: cmplwi  r3, 0x0000
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

label_7F050708:
    ctx->pc = 0x7F050708u;
    // 7F050708: bc    12, 2, 0x7F05071C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05071C;
        }
    }

label_7F05070C:
    ctx->pc = 0x7F05070Cu;
    ctx->downcount -= 1;
    // 7F05070C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F050710u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F050710:
    ctx->pc = 0x7F050710u;
    ctx->downcount -= 2;
    // 7F050710: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F050714:
    ctx->pc = 0x7F050714u;
    // 7F050714: bl      0x7F3C6904
    {
            ctx->lr = 0x7F050718u;
            ctx->pc = 0x7F3C6904u;
            return;
    }

label_7F050718:
    ctx->pc = 0x7F050718u;
    ctx->downcount -= 1;
    // 7F050718: b       0x7F050744
    {
            goto label_7F050744;
    }

label_7F05071C:
    ctx->pc = 0x7F05071Cu;
    ctx->downcount -= 10;
    // 7F05071C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F050720:
    ctx->pc = 0x7F050720u;
    // 7F050720: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F050724:
    ctx->pc = 0x7F050724u;
    // 7F050724: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F050728:
    ctx->pc = 0x7F050728u;
    // 7F050728: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05072C:
    ctx->pc = 0x7F05072Cu;
    // 7F05072C: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050730:
    ctx->pc = 0x7F050730u;
    // 7F050730: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050734:
    ctx->pc = 0x7F050734u;
    // 7F050734: stw     r5, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F050738:
    ctx->pc = 0x7F050738u;
    // 7F050738: stw     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F05073C:
    ctx->pc = 0x7F05073Cu;
    // 7F05073C: stw     r3, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F050740:
    ctx->pc = 0x7F050740u;
    // 7F050740: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050744:
    ctx->pc = 0x7F050744u;
    ctx->downcount -= 2;
    // 7F050744: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F050748:
    ctx->pc = 0x7F050748u;
    // 7F050748: bl      0x7F3C664C
    {
            ctx->lr = 0x7F05074Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F05074C:
    ctx->pc = 0x7F05074Cu;
    ctx->downcount -= 2;
    // 7F05074C: cmplwi  r3, 0x0000
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

label_7F050750:
    ctx->pc = 0x7F050750u;
    // 7F050750: bc    12, 2, 0x7F050788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050788;
        }
    }

label_7F050754:
    ctx->pc = 0x7F050754u;
    ctx->downcount -= 4;
    // 7F050754: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F050758:
    ctx->pc = 0x7F050758u;
    // 7F050758: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F05075C:
    ctx->pc = 0x7F05075Cu;
    // 7F05075C: addi    r29, r3, 13880
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F050760:
    ctx->pc = 0x7F050760u;
    // 7F050760: b       0x7F05076C
    {
            goto label_7F05076C;
    }

label_7F050764:
    ctx->downcount -= 1;
    // 7F050764: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F050768u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F050768:
    ctx->downcount -= 1;
    // 7F050768: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F05076C:
    ctx->pc = 0x7F05076Cu;
    ctx->downcount -= 4;
    // 7F05076C: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050770:
    ctx->pc = 0x7F050770u;
    // 7F050770: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F050774:
    // 7F050774: cmpw    r30, r0
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

label_7F050778:
    // 7F050778: bc    12, 0, 0x7F050764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F050764u;
                return;
            }
            goto label_7F050764;
        }
    }

label_7F05077C:
    ctx->pc = 0x7F05077Cu;
    ctx->downcount -= 1;
    // 7F05077C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F050780u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F050780:
    ctx->pc = 0x7F050780u;
    ctx->downcount -= 2;
    // 7F050780: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F050784:
    ctx->pc = 0x7F050784u;
    // 7F050784: stw     r3, 5184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5184);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F050788:
    ctx->pc = 0x7F050788u;
    ctx->downcount -= 4;
    // 7F050788: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F05078C:
    ctx->pc = 0x7F05078Cu;
    // 7F05078C: addi    r29, r28, 992
    ctx->gpr[29] = ctx->gpr[28] + (u32)(s32)(992);

label_7F050790:
    ctx->pc = 0x7F050790u;
    // 7F050790: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F050794:
    ctx->pc = 0x7F050794u;
    // 7F050794: bl      0x7F04F364
    {
            ctx->lr = 0x7F050798u;
            ctx->pc = 0x7F04F364u;
            return;
    }

label_7F050798:
    ctx->pc = 0x7F050798u;
    ctx->downcount -= 2;
    // 7F050798: cmpwi   r3, 0
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

label_7F05079C:
    ctx->pc = 0x7F05079Cu;
    // 7F05079C: bc    12, 2, 0x7F0507B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0507B4;
        }
    }

label_7F0507A0:
    ctx->pc = 0x7F0507A0u;
    ctx->downcount -= 5;
    // 7F0507A0: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F0507A4:
    ctx->pc = 0x7F0507A4u;
    // 7F0507A4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0507A8:
    ctx->pc = 0x7F0507A8u;
    // 7F0507A8: addi    r27, r3, 992
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(992);

label_7F0507AC:
    ctx->pc = 0x7F0507ACu;
    // 7F0507AC: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F0507B0:
    ctx->pc = 0x7F0507B0u;
    // 7F0507B0: b       0x7F0507C0
    {
            goto label_7F0507C0;
    }

label_7F0507B4:
    ctx->pc = 0x7F0507B4u;
    ctx->downcount -= 3;
    // 7F0507B4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F0507B8:
    ctx->pc = 0x7F0507B8u;
    // 7F0507B8: li      r31, 769
    ctx->gpr[31] = (u32)(s32)(769);

label_7F0507BC:
    ctx->pc = 0x7F0507BCu;
    // 7F0507BC: li      r30, 3
    ctx->gpr[30] = (u32)(s32)(3);

label_7F0507C0:
    ctx->pc = 0x7F0507C0u;
    ctx->downcount -= 8;
    // 7F0507C0: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F0507C4:
    ctx->pc = 0x7F0507C4u;
    // 7F0507C4: lwz     r5, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0507C8:
    ctx->pc = 0x7F0507C8u;
    // 7F0507C8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0507CC:
    ctx->pc = 0x7F0507CCu;
    // 7F0507CC: addi    r7, r1, 56
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(56);

label_7F0507D0:
    ctx->pc = 0x7F0507D0u;
    // 7F0507D0: addi    r4, r4, 16385
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16385);

label_7F0507D4:
    ctx->pc = 0x7F0507D4u;
    // 7F0507D4: addi    r8, r1, 40
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0507D8:
    ctx->pc = 0x7F0507D8u;
    // 7F0507D8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0507DC:
    ctx->pc = 0x7F0507DCu;
    // 7F0507DC: bl      0x7F014788
    {
            ctx->lr = 0x7F0507E0u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F0507E0:
    ctx->pc = 0x7F0507E0u;
    ctx->downcount -= 2;
    // 7F0507E0: lwz     r3, 1380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0507E4:
    ctx->pc = 0x7F0507E4u;
    // 7F0507E4: bl      0x7F04E9B0
    {
            ctx->lr = 0x7F0507E8u;
            ctx->pc = 0x7F04E9B0u;
            return;
    }

label_7F0507E8:
    ctx->pc = 0x7F0507E8u;
    ctx->downcount -= 2;
    // 7F0507E8: cmpwi   r3, 0
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

label_7F0507EC:
    ctx->pc = 0x7F0507ECu;
    // 7F0507EC: bc    12, 2, 0x7F050818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050818;
        }
    }

label_7F0507F0:
    ctx->pc = 0x7F0507F0u;
    ctx->downcount -= 9;
    // 7F0507F0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0507F4:
    ctx->pc = 0x7F0507F4u;
    // 7F0507F4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0507F8:
    ctx->pc = 0x7F0507F8u;
    // 7F0507F8: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F0507FC:
    ctx->pc = 0x7F0507FCu;
    // 7F0507FC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050800:
    ctx->pc = 0x7F050800u;
    // 7F050800: addi    r4, r28, 1216
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1216);

label_7F050804:
    ctx->pc = 0x7F050804u;
    // 7F050804: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F050808:
    ctx->pc = 0x7F050808u;
    // 7F050808: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F05080C:
    ctx->pc = 0x7F05080Cu;
    // 7F05080C: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F050810:
    ctx->pc = 0x7F050810u;
    // 7F050810: bl      0x7F014B78
    {
            ctx->lr = 0x7F050814u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F050814:
    ctx->pc = 0x7F050814u;
    ctx->downcount -= 1;
    // 7F050814: b       0x7F050890
    {
            goto label_7F050890;
    }

label_7F050818:
    ctx->pc = 0x7F050818u;
    ctx->downcount -= 2;
    // 7F050818: lwz     r3, 1380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05081C:
    ctx->pc = 0x7F05081Cu;
    // 7F05081C: bl      0x7F04E8EC
    {
            ctx->lr = 0x7F050820u;
            ctx->pc = 0x7F04E8ECu;
            return;
    }

label_7F050820:
    ctx->pc = 0x7F050820u;
    ctx->downcount -= 2;
    // 7F050820: cmpwi   r3, 0
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

label_7F050824:
    ctx->pc = 0x7F050824u;
    // 7F050824: bc    4, 2, 0x7F050838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050838;
        }
    }

label_7F050828:
    ctx->pc = 0x7F050828u;
    ctx->downcount -= 2;
    // 7F050828: lwz     r3, 1380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1380);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05082C:
    ctx->pc = 0x7F05082Cu;
    // 7F05082C: bl      0x7F04E924
    {
            ctx->lr = 0x7F050830u;
            ctx->pc = 0x7F04E924u;
            return;
    }

label_7F050830:
    ctx->pc = 0x7F050830u;
    ctx->downcount -= 2;
    // 7F050830: cmpwi   r3, 0
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

label_7F050834:
    ctx->pc = 0x7F050834u;
    // 7F050834: bc    12, 2, 0x7F050860
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050860;
        }
    }

label_7F050838:
    ctx->pc = 0x7F050838u;
    ctx->downcount -= 9;
    // 7F050838: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F05083C:
    ctx->pc = 0x7F05083Cu;
    // 7F05083C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F050840:
    ctx->pc = 0x7F050840u;
    // 7F050840: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F050844:
    ctx->pc = 0x7F050844u;
    // 7F050844: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050848:
    ctx->pc = 0x7F050848u;
    // 7F050848: addi    r4, r28, 1216
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1216);

label_7F05084C:
    ctx->pc = 0x7F05084Cu;
    // 7F05084C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F050850:
    ctx->pc = 0x7F050850u;
    // 7F050850: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F050854:
    ctx->pc = 0x7F050854u;
    // 7F050854: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_7F050858:
    ctx->pc = 0x7F050858u;
    // 7F050858: bl      0x7F014B78
    {
            ctx->lr = 0x7F05085Cu;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F05085C:
    ctx->pc = 0x7F05085Cu;
    ctx->downcount -= 1;
    // 7F05085C: b       0x7F050890
    {
            goto label_7F050890;
    }

label_7F050860:
    ctx->pc = 0x7F050860u;
    ctx->downcount -= 12;
    // 7F050860: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F050864:
    ctx->pc = 0x7F050864u;
    // 7F050864: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F050868:
    ctx->pc = 0x7F050868u;
    // 7F050868: addi    r5, r3, 5184
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(5184);

label_7F05086C:
    ctx->pc = 0x7F05086Cu;
    // 7F05086C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F050870:
    ctx->pc = 0x7F050870u;
    // 7F050870: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050874:
    ctx->pc = 0x7F050874u;
    // 7F050874: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F050878:
    ctx->pc = 0x7F050878u;
    // 7F050878: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F05087C:
    ctx->pc = 0x7F05087Cu;
    // 7F05087C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050880:
    ctx->pc = 0x7F050880u;
    // 7F050880: addi    r4, r28, 1216
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1216);

label_7F050884:
    ctx->pc = 0x7F050884u;
    // 7F050884: rlwinm r8, r0, 0, 16, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F050888:
    ctx->pc = 0x7F050888u;
    // 7F050888: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F05088C:
    ctx->pc = 0x7F05088Cu;
    // 7F05088C: bl      0x7F014B78
    {
            ctx->lr = 0x7F050890u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F050890:
    ctx->pc = 0x7F050890u;
    ctx->downcount -= 5;
    // 7F050890: lis     r4, 32517
    ctx->gpr[4] = ((u32)(s32)(32517) << 16);

label_7F050894:
    ctx->pc = 0x7F050894u;
    // 7F050894: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F050898:
    ctx->pc = 0x7F050898u;
    // 7F050898: addi    r4, r4, 2260
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2260);

label_7F05089C:
    ctx->pc = 0x7F05089Cu;
    // 7F05089C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0508A0:
    ctx->pc = 0x7F0508A0u;
    // 7F0508A0: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0508A4u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0508A4:
    ctx->pc = 0x7F0508A4u;
    ctx->downcount -= 4;
    // 7F0508A4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0508A8:
    ctx->pc = 0x7F0508A8u;
    // 7F0508A8: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0508AC:
    ctx->pc = 0x7F0508ACu;
    // 7F0508AC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0508B0:
    ctx->pc = 0x7F0508B0u;
    // 7F0508B0: bl      0x7F014B60
    {
            ctx->lr = 0x7F0508B4u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F0508B4:
    ctx->pc = 0x7F0508B4u;
    ctx->downcount -= 2;
    // 7F0508B4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0508B8:
    ctx->pc = 0x7F0508B8u;
    // 7F0508B8: bl      0x7F0148A0
    {
            ctx->lr = 0x7F0508BCu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F0508BC:
    ctx->pc = 0x7F0508BCu;
    ctx->downcount -= 1;
    // 7F0508BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0508C0:
    ctx->pc = 0x7F0508C0u;
    ctx->downcount -= 16;
    // 7F0508C0: lmw     r27, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0508C4:
    ctx->pc = 0x7F0508C4u;
    // 7F0508C4: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0508C8:
    ctx->pc = 0x7F0508C8u;
    // 7F0508C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0508CC:
    ctx->pc = 0x7F0508CCu;
    // 7F0508CC: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F0508D0:
    ctx->pc = 0x7F0508D0u;
    // 7F0508D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0508D4:
    ctx->pc = 0x7F0508D4u;
    ctx->downcount -= 19;
    // 7F0508D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0508D8:
    ctx->pc = 0x7F0508D8u;
    // 7F0508D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0508DC:
    ctx->pc = 0x7F0508DCu;
    // 7F0508DC: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F0508E0:
    ctx->pc = 0x7F0508E0u;
    // 7F0508E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0508E4:
    ctx->pc = 0x7F0508E4u;
    // 7F0508E4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0508E8:
    ctx->pc = 0x7F0508E8u;
    // 7F0508E8: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0508EC:
    ctx->pc = 0x7F0508ECu;
    // 7F0508EC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0508F0:
    ctx->pc = 0x7F0508F0u;
    // 7F0508F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0508F4:
    ctx->pc = 0x7F0508F4u;
    // 7F0508F4: bl      0x7F04F364
    {
            ctx->lr = 0x7F0508F8u;
            ctx->pc = 0x7F04F364u;
            return;
    }

label_7F0508F8:
    ctx->pc = 0x7F0508F8u;
    ctx->downcount -= 2;
    // 7F0508F8: cmpwi   r3, 0
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

label_7F0508FC:
    ctx->pc = 0x7F0508FCu;
    // 7F0508FC: bc    12, 2, 0x7F05093C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05093C;
        }
    }

label_7F050900:
    ctx->pc = 0x7F050900u;
    ctx->downcount -= 3;
    // 7F050900: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050904:
    ctx->pc = 0x7F050904u;
    // 7F050904: rlwinm. r0, r0, 0, 31, 31
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

label_7F050908:
    ctx->pc = 0x7F050908u;
    // 7F050908: bc    12, 2, 0x7F05093C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05093C;
        }
    }

label_7F05090C:
    ctx->pc = 0x7F05090Cu;
    ctx->downcount -= 3;
    // 7F05090C: lwz     r0, 1784(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1784);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050910:
    ctx->pc = 0x7F050910u;
    // 7F050910: cmpwi   r0, 0
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

label_7F050914:
    ctx->pc = 0x7F050914u;
    // 7F050914: bc    4, 2, 0x7F05093C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05093C;
        }
    }

label_7F050918:
    ctx->pc = 0x7F050918u;
    ctx->downcount -= 5;
    // 7F050918: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F05091C:
    ctx->pc = 0x7F05091Cu;
    // 7F05091C: li      r3, 1755
    ctx->gpr[3] = (u32)(s32)(1755);

label_7F050920:
    ctx->pc = 0x7F050920u;
    // 7F050920: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F050924:
    ctx->pc = 0x7F050924u;
    // 7F050924: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F050928:
    ctx->pc = 0x7F050928u;
    // 7F050928: bl      0x7F0513A0
    {
            ctx->lr = 0x7F05092Cu;
            goto label_7F0513A0;
    }

label_7F05092C:
    ctx->pc = 0x7F05092Cu;
    ctx->downcount -= 4;
    // 7F05092C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F050930:
    ctx->pc = 0x7F050930u;
    // 7F050930: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F050934:
    ctx->pc = 0x7F050934u;
    // 7F050934: stw     r3, 1780(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1780);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F050938:
    ctx->pc = 0x7F050938u;
    // 7F050938: stw     r0, 1784(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1784);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05093C:
    ctx->pc = 0x7F05093Cu;
    ctx->downcount -= 16;
    // 7F05093C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F050940:
    ctx->pc = 0x7F050940u;
    // 7F050940: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050944:
    ctx->pc = 0x7F050944u;
    // 7F050944: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F050948:
    ctx->pc = 0x7F050948u;
    // 7F050948: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F05094C:
    ctx->pc = 0x7F05094Cu;
    // 7F05094C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F050950:
    ctx->pc = 0x7F050950u;
    ctx->downcount -= 20;
    // 7F050950: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F050954:
    ctx->pc = 0x7F050954u;
    // 7F050954: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F050958:
    ctx->pc = 0x7F050958u;
    // 7F050958: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05095C:
    ctx->pc = 0x7F05095Cu;
    // 7F05095C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F050960:
    ctx->pc = 0x7F050960u;
    // 7F050960: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F050964:
    ctx->pc = 0x7F050964u;
    // 7F050964: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F050968:
    ctx->pc = 0x7F050968u;
    // 7F050968: sth     r0, 1316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1316);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F05096C:
    ctx->pc = 0x7F05096Cu;
    // 7F05096C: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F050970:
    ctx->pc = 0x7F050970u;
    // 7F050970: stw     r0, 1320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050974:
    ctx->pc = 0x7F050974u;
    // 7F050974: bl      0x7F3C664C
    {
            ctx->lr = 0x7F050978u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F050978:
    ctx->pc = 0x7F050978u;
    ctx->downcount -= 2;
    // 7F050978: cmplwi  r3, 0x0000
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

label_7F05097C:
    ctx->pc = 0x7F05097Cu;
    // 7F05097C: bc    12, 2, 0x7F050A80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050A80;
        }
    }

label_7F050980:
    ctx->pc = 0x7F050980u;
    ctx->downcount -= 1;
    // 7F050980: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F050984:
    ctx->downcount -= 2;
    // 7F050984: cmpwi   r30, 3
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F050988:
    // 7F050988: bc    4, 0, 0x7F0509EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0509EC;
        }
    }

label_7F05098C:
    ctx->downcount -= 1;
    // 7F05098C: bl      0x7F3C674C
    {
            ctx->lr = 0x7F050990u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F050990:
    ctx->downcount -= 2;
    // 7F050990: or.   r31, r3, r3
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

label_7F050994:
    // 7F050994: bc    12, 2, 0x7F050A70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050A70;
        }
    }

label_7F050998:
    ctx->downcount -= 7;
    // 7F050998: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F05099C:
    ctx->pc = 0x7F05099Cu;
    // 7F05099C: lhz     r3, 1316(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1316);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F0509A0:
    // 7F0509A0: slw   r0, r0, r30
    {
        u32 sh = ctx->gpr[30] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F0509A4:
    // 7F0509A4: cmpwi   r30, 0
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

label_7F0509A8:
    // 7F0509A8: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F0509AC:
    ctx->pc = 0x7F0509ACu;
    // 7F0509AC: sth     r0, 1316(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1316);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0509B0:
    // 7F0509B0: bc    4, 2, 0x7F0509CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0509CC;
        }
    }

label_7F0509B4:
    ctx->downcount -= 2;
    // 7F0509B4: cmpwi   r31, 2
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

label_7F0509B8:
    // 7F0509B8: bc    12, 0, 0x7F0509CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0509CC;
        }
    }

label_7F0509BC:
    ctx->downcount -= 4;
    // 7F0509BC: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F0509C0:
    // 7F0509C0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0509C4:
    // 7F0509C4: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F0509C8:
    // 7F0509C8: bl      0x7F04EDE4
    {
            ctx->lr = 0x7F0509CCu;
            ctx->pc = 0x7F04EDE4u;
            return;
    }

label_7F0509CC:
    ctx->downcount -= 2;
    // 7F0509CC: cmpwi   r30, 0
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

label_7F0509D0:
    // 7F0509D0: bc    4, 2, 0x7F050A70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050A70;
        }
    }

label_7F0509D4:
    ctx->downcount -= 2;
    // 7F0509D4: cmpwi   r31, 3
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

label_7F0509D8:
    // 7F0509D8: bc    4, 2, 0x7F050A70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050A70;
        }
    }

label_7F0509DC:
    ctx->downcount -= 3;
    // 7F0509DC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0509E0:
    // 7F0509E0: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_7F0509E4:
    // 7F0509E4: bl      0x7F04EDE4
    {
            ctx->lr = 0x7F0509E8u;
            ctx->pc = 0x7F04EDE4u;
            return;
    }

label_7F0509E8:
    ctx->downcount -= 1;
    // 7F0509E8: b       0x7F050A70
    {
            goto label_7F050A70;
    }

label_7F0509EC:
    ctx->downcount -= 1;
    // 7F0509EC: bc    4, 2, 0x7F050A08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050A08;
        }
    }

label_7F0509F0:
    ctx->downcount -= 1;
    // 7F0509F0: bl      0x7F3C674C
    {
            ctx->lr = 0x7F0509F4u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F0509F4:
    ctx->pc = 0x7F0509F4u;
    ctx->downcount -= 5;
    // 7F0509F4: stw     r3, 1320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1320);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0509F8:
    ctx->pc = 0x7F0509F8u;
    // 7F0509F8: lwz     r0, 1320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0509FC:
    ctx->pc = 0x7F0509FCu;
    // 7F0509FC: lwz     r3, 772(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(772);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050A00:
    ctx->pc = 0x7F050A00u;
    // 7F050A00: sth     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F050A04:
    // 7F050A04: b       0x7F050A70
    {
            goto label_7F050A70;
    }

label_7F050A08:
    ctx->downcount -= 2;
    // 7F050A08: cmpwi   r30, 4
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

label_7F050A0C:
    // 7F050A0C: bc    4, 2, 0x7F050A2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050A2C;
        }
    }

label_7F050A10:
    ctx->downcount -= 1;
    // 7F050A10: bl      0x7F3C674C
    {
            ctx->lr = 0x7F050A14u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F050A14:
    ctx->downcount -= 2;
    // 7F050A14: cmpwi   r3, 0
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

label_7F050A18:
    // 7F050A18: bc    4, 2, 0x7F050A70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050A70;
        }
    }

label_7F050A1C:
    ctx->downcount -= 3;
    // 7F050A1C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F050A20:
    // 7F050A20: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F050A24:
    // 7F050A24: bl      0x7F04F37C
    {
            ctx->lr = 0x7F050A28u;
            ctx->pc = 0x7F04F37Cu;
            return;
    }

label_7F050A28:
    ctx->downcount -= 1;
    // 7F050A28: b       0x7F050A70
    {
            goto label_7F050A70;
    }

label_7F050A2C:
    ctx->downcount -= 2;
    // 7F050A2C: cmpwi   r30, 5
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F050A30:
    // 7F050A30: bc    4, 2, 0x7F050A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050A50;
        }
    }

label_7F050A34:
    ctx->downcount -= 1;
    // 7F050A34: bl      0x7F3C674C
    {
            ctx->lr = 0x7F050A38u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F050A38:
    ctx->downcount -= 2;
    // 7F050A38: cmpwi   r3, 0
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

label_7F050A3C:
    // 7F050A3C: bc    12, 2, 0x7F050A70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050A70;
        }
    }

label_7F050A40:
    ctx->downcount -= 3;
    // 7F050A40: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F050A44:
    // 7F050A44: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F050A48:
    // 7F050A48: bl      0x7F04EDE4
    {
            ctx->lr = 0x7F050A4Cu;
            ctx->pc = 0x7F04EDE4u;
            return;
    }

label_7F050A4C:
    ctx->downcount -= 1;
    // 7F050A4C: b       0x7F050A70
    {
            goto label_7F050A70;
    }

label_7F050A50:
    ctx->downcount -= 2;
    // 7F050A50: cmpwi   r30, 6
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F050A54:
    // 7F050A54: bc    4, 2, 0x7F050A70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050A70;
        }
    }

label_7F050A58:
    ctx->downcount -= 1;
    // 7F050A58: bl      0x7F3C674C
    {
            ctx->lr = 0x7F050A5Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F050A5C:
    ctx->downcount -= 2;
    // 7F050A5C: cmpwi   r3, 0
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

label_7F050A60:
    // 7F050A60: bc    12, 2, 0x7F050A70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050A70;
        }
    }

label_7F050A64:
    ctx->downcount -= 3;
    // 7F050A64: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F050A68:
    // 7F050A68: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F050A6C:
    // 7F050A6C: bl      0x7F04EDE4
    {
            ctx->lr = 0x7F050A70u;
            ctx->pc = 0x7F04EDE4u;
            return;
    }

label_7F050A70:
    ctx->downcount -= 1;
    // 7F050A70: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F050A74u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F050A74:
    ctx->downcount -= 3;
    // 7F050A74: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F050A78:
    // 7F050A78: cmpwi   r30, 7
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F050A7C:
    // 7F050A7C: bc    12, 0, 0x7F050984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F050984u;
                return;
            }
            goto label_7F050984;
        }
    }

label_7F050A80:
    ctx->pc = 0x7F050A80u;
    ctx->downcount -= 16;
    // 7F050A80: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F050A84:
    ctx->pc = 0x7F050A84u;
    // 7F050A84: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050A88:
    ctx->pc = 0x7F050A88u;
    // 7F050A88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F050A8C:
    ctx->pc = 0x7F050A8Cu;
    // 7F050A8C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F050A90:
    ctx->pc = 0x7F050A90u;
    // 7F050A90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F050A94:
    ctx->pc = 0x7F050A94u;
    ctx->downcount -= 21;
    // 7F050A94: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F050A98:
    ctx->pc = 0x7F050A98u;
    // 7F050A98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F050A9C:
    ctx->pc = 0x7F050A9Cu;
    // 7F050A9C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050AA0:
    ctx->pc = 0x7F050AA0u;
    // 7F050AA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F050AA4:
    ctx->pc = 0x7F050AA4u;
    // 7F050AA4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F050AA8:
    ctx->pc = 0x7F050AA8u;
    // 7F050AA8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F050AAC:
    ctx->pc = 0x7F050AACu;
    // 7F050AAC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F050AB0:
    ctx->pc = 0x7F050AB0u;
    // 7F050AB0: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F050AB4:
    ctx->pc = 0x7F050AB4u;
    // 7F050AB4: stw     r0, 1784(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1784);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050AB8:
    ctx->pc = 0x7F050AB8u;
    // 7F050AB8: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F050ABC:
    ctx->pc = 0x7F050ABCu;
    // 7F050ABC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F050AC0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F050AC0:
    ctx->pc = 0x7F050AC0u;
    ctx->downcount -= 2;
    // 7F050AC0: cmplwi  r3, 0x0000
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

label_7F050AC4:
    ctx->pc = 0x7F050AC4u;
    // 7F050AC4: bc    12, 2, 0x7F050AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050AF8;
        }
    }

label_7F050AC8:
    ctx->pc = 0x7F050AC8u;
    ctx->downcount -= 1;
    // 7F050AC8: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F050ACCu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F050ACC:
    ctx->pc = 0x7F050ACCu;
    ctx->downcount -= 1;
    // 7F050ACC: bl      0x7F3C674C
    {
            ctx->lr = 0x7F050AD0u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F050AD0:
    ctx->pc = 0x7F050AD0u;
    ctx->downcount -= 2;
    // 7F050AD0: cmpwi   r3, 0
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

label_7F050AD4:
    ctx->pc = 0x7F050AD4u;
    // 7F050AD4: bc    12, 2, 0x7F050AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050AF8;
        }
    }

label_7F050AD8:
    ctx->pc = 0x7F050AD8u;
    ctx->downcount -= 8;
    // 7F050AD8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F050ADC:
    ctx->pc = 0x7F050ADCu;
    // 7F050ADC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F050AE0:
    ctx->pc = 0x7F050AE0u;
    // 7F050AE0: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F050AE4:
    ctx->pc = 0x7F050AE4u;
    // 7F050AE4: stw     r0, 22384(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050AE8:
    ctx->pc = 0x7F050AE8u;
    // 7F050AE8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F050AEC:
    ctx->pc = 0x7F050AECu;
    // 7F050AEC: sth     r0, 1316(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1316);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F050AF0:
    ctx->pc = 0x7F050AF0u;
    // 7F050AF0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F050AF4:
    ctx->pc = 0x7F050AF4u;
    // 7F050AF4: b       0x7F0512E4
    {
            goto label_7F0512E4;
    }

label_7F050AF8:
    ctx->pc = 0x7F050AF8u;
    ctx->downcount -= 6;
    // 7F050AF8: addi    r31, r29, 32
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(32);

label_7F050AFC:
    ctx->pc = 0x7F050AFCu;
    // 7F050AFC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050B00:
    ctx->pc = 0x7F050B00u;
    // 7F050B00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F050B04:
    ctx->pc = 0x7F050B04u;
    // 7F050B04: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F050B08:
    ctx->pc = 0x7F050B08u;
    // 7F050B08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F050B0C:
    ctx->pc = 0x7F050B0Cu;
    // 7F050B0C: bl      0x7F022FB4
    {
            ctx->lr = 0x7F050B10u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F050B10:
    ctx->pc = 0x7F050B10u;
    ctx->downcount -= 2;
    // 7F050B10: cmpwi   r3, 0
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

label_7F050B14:
    ctx->pc = 0x7F050B14u;
    // 7F050B14: bc    4, 0, 0x7F050B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F050B20;
        }
    }

label_7F050B18:
    ctx->pc = 0x7F050B18u;
    ctx->downcount -= 2;
    // 7F050B18: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F050B1C:
    ctx->pc = 0x7F050B1Cu;
    // 7F050B1C: b       0x7F0512E4
    {
            goto label_7F0512E4;
    }

label_7F050B20:
    ctx->pc = 0x7F050B20u;
    ctx->downcount -= 14;
    // 7F050B20: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F050B24:
    ctx->pc = 0x7F050B24u;
    // 7F050B24: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F050B28:
    ctx->pc = 0x7F050B28u;
    // 7F050B28: addi    r7, r3, 22384
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(22384);

label_7F050B2C:
    ctx->pc = 0x7F050B2Cu;
    // 7F050B2C: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F050B30:
    ctx->pc = 0x7F050B30u;
    // 7F050B30: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F050B34:
    ctx->pc = 0x7F050B34u;
    // 7F050B34: addi    r4, r4, 22484
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22484);

label_7F050B38:
    ctx->pc = 0x7F050B38u;
    // 7F050B38: mulli   r5, r6, 52
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)52);

label_7F050B3C:
    ctx->pc = 0x7F050B3Cu;
    // 7F050B3C: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_7F050B40:
    ctx->pc = 0x7F050B40u;
    // 7F050B40: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050B44:
    ctx->pc = 0x7F050B44u;
    // 7F050B44: add   r28, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F050B48:
    ctx->pc = 0x7F050B48u;
    // 7F050B48: stw     r30, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F050B4C:
    ctx->pc = 0x7F050B4Cu;
    // 7F050B4C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F050B50u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F050B50:
    ctx->pc = 0x7F050B50u;
    ctx->downcount -= 3;
    // 7F050B50: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F050B54:
    ctx->pc = 0x7F050B54u;
    // 7F050B54: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F050B58:
    ctx->pc = 0x7F050B58u;
    // 7F050B58: bl      0x7F3C664C
    {
            ctx->lr = 0x7F050B5Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F050B5C:
    ctx->pc = 0x7F050B5Cu;
    ctx->downcount -= 4;
    // 7F050B5C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F050B60:
    ctx->pc = 0x7F050B60u;
    // 7F050B60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F050B64:
    ctx->pc = 0x7F050B64u;
    // 7F050B64: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050B68:
    ctx->pc = 0x7F050B68u;
    // 7F050B68: bl      0x7F0242F4
    {
            ctx->lr = 0x7F050B6Cu;
            ctx->pc = 0x7F0242F4u;
            return;
    }

label_7F050B6C:
    ctx->pc = 0x7F050B6Cu;
    ctx->downcount -= 20;
    // 7F050B6C: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F050B70:
    ctx->pc = 0x7F050B70u;
    // 7F050B70: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F050B74:
    ctx->pc = 0x7F050B74u;
    // 7F050B74: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F050B78:
    ctx->pc = 0x7F050B78u;
    // 7F050B78: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F050B7C:
    ctx->pc = 0x7F050B7Cu;
    // 7F050B7C: stw     r5, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F050B80:
    ctx->pc = 0x7F050B80u;
    // 7F050B80: stw     r4, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F050B84:
    ctx->pc = 0x7F050B84u;
    // 7F050B84: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F050B88:
    ctx->pc = 0x7F050B88u;
    // 7F050B88: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F050B8C:
    ctx->pc = 0x7F050B8Cu;
    // 7F050B8C: stw     r5, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F050B90:
    ctx->pc = 0x7F050B90u;
    // 7F050B90: stw     r4, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F050B94:
    ctx->pc = 0x7F050B94u;
    // 7F050B94: lwz     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F050B98:
    ctx->pc = 0x7F050B98u;
    // 7F050B98: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F050B9C:
    ctx->pc = 0x7F050B9Cu;
    // 7F050B9C: stw     r5, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F050BA0:
    ctx->pc = 0x7F050BA0u;
    // 7F050BA0: stw     r4, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F050BA4:
    ctx->pc = 0x7F050BA4u;
    // 7F050BA4: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050BA8:
    ctx->pc = 0x7F050BA8u;
    // 7F050BA8: stw     r31, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F050BAC:
    ctx->pc = 0x7F050BACu;
    // 7F050BAC: stw     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050BB0:
    ctx->pc = 0x7F050BB0u;
    // 7F050BB0: stw     r0, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050BB4:
    ctx->pc = 0x7F050BB4u;
    // 7F050BB4: stw     r28, 1380(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1380);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F050BB8:
    ctx->pc = 0x7F050BB8u;
    // 7F050BB8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F050BBCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F050BBC:
    ctx->pc = 0x7F050BBCu;
    ctx->downcount -= 2;
    // 7F050BBC: cmplwi  r3, 0x0000
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

label_7F050BC0:
    ctx->pc = 0x7F050BC0u;
    // 7F050BC0: bc    12, 2, 0x7F050BF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F050BF4;
        }
    }

label_7F050BC4:
    ctx->pc = 0x7F050BC4u;
    ctx->downcount -= 2;
    // 7F050BC4: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F050BC8:
    ctx->pc = 0x7F050BC8u;
    // 7F050BC8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F050BCCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F050BCC:
    ctx->pc = 0x7F050BCCu;
    ctx->downcount -= 2;
    // 7F050BCC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F050BD0:
    ctx->pc = 0x7F050BD0u;
    // 7F050BD0: bl      0x7F3C67EC
    {
            ctx->lr = 0x7F050BD4u;
            ctx->pc = 0x7F3C67ECu;
            return;
    }

label_7F050BD4:
    ctx->pc = 0x7F050BD4u;
    ctx->downcount -= 5;
    // 7F050BD4: lha     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F050BD8:
    ctx->pc = 0x7F050BD8u;
    // 7F050BD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F050BDC:
    ctx->pc = 0x7F050BDCu;
    // 7F050BDC: lha     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F050BE0:
    ctx->pc = 0x7F050BE0u;
    // 7F050BE0: lha     r6, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F050BE4:
    ctx->pc = 0x7F050BE4u;
    // 7F050BE4: bl      0x7F023F7C
    {
            ctx->lr = 0x7F050BE8u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F050BE8:
    ctx->pc = 0x7F050BE8u;
    ctx->downcount -= 3;
    // 7F050BE8: lha     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F050BEC:
    ctx->pc = 0x7F050BECu;
    // 7F050BEC: stw     r0, 1328(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050BF0:
    ctx->pc = 0x7F050BF0u;
    // 7F050BF0: b       0x7F050C10
    {
            goto label_7F050C10;
    }

label_7F050BF4:
    ctx->pc = 0x7F050BF4u;
    ctx->downcount -= 5;
    // 7F050BF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F050BF8:
    ctx->pc = 0x7F050BF8u;
    // 7F050BF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F050BFC:
    ctx->pc = 0x7F050BFCu;
    // 7F050BFC: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F050C00:
    ctx->pc = 0x7F050C00u;
    // 7F050C00: li      r6, -2
    ctx->gpr[6] = (u32)(s32)(-2);

label_7F050C04:
    ctx->pc = 0x7F050C04u;
    // 7F050C04: bl      0x7F023F7C
    {
            ctx->lr = 0x7F050C08u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F050C08:
    ctx->pc = 0x7F050C08u;
    ctx->downcount -= 2;
    // 7F050C08: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_7F050C0C:
    ctx->pc = 0x7F050C0Cu;
    // 7F050C0C: stw     r0, 1328(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050C10:
    ctx->pc = 0x7F050C10u;
    ctx->downcount -= 10;
    // 7F050C10: lwz     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050C14:
    ctx->pc = 0x7F050C14u;
    // 7F050C14: addi    r30, r29, 432
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(432);

label_7F050C18:
    ctx->pc = 0x7F050C18u;
    // 7F050C18: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F050C1C:
    ctx->pc = 0x7F050C1Cu;
    // 7F050C1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F050C20:
    ctx->pc = 0x7F050C20u;
    // 7F050C20: ori     r0, r0, 0x0084
    ctx->gpr[0] = ctx->gpr[0] | 0x0084u;

label_7F050C24:
    ctx->pc = 0x7F050C24u;
    // 7F050C24: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050C28:
    ctx->pc = 0x7F050C28u;
    // 7F050C28: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050C2C:
    ctx->pc = 0x7F050C2Cu;
    // 7F050C2C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F050C30:
    ctx->pc = 0x7F050C30u;
    // 7F050C30: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050C34:
    ctx->pc = 0x7F050C34u;
    // 7F050C34: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F050C38u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F050C38:
    ctx->pc = 0x7F050C38u;
    ctx->downcount -= 3;
    // 7F050C38: rlwinm r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F050C3C:
    ctx->pc = 0x7F050C3Cu;
    // 7F050C3C: cmplwi  r0, 0x0036
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0036u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F050C40:
    ctx->pc = 0x7F050C40u;
    // 7F050C40: bc    12, 1, 0x7F051284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051284;
        }
    }

label_7F050C44:
    ctx->pc = 0x7F050C44u;
    ctx->downcount -= 7;
    // 7F050C44: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F050C48:
    ctx->pc = 0x7F050C48u;
    // 7F050C48: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F050C4C:
    ctx->pc = 0x7F050C4Cu;
    // 7F050C4C: addi    r3, r3, 5188
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5188);

label_7F050C50:
    ctx->pc = 0x7F050C50u;
    // 7F050C50: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050C54:
    ctx->pc = 0x7F050C54u;
    // 7F050C54: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F050C58:
    ctx->pc = 0x7F050C58u;
    // 7F050C58: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F050C5C:
    ctx->pc = 0x7F050C5Cu;
    ctx->downcount -= 5;
    // 7F050C5C: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F050C60:
    ctx->pc = 0x7F050C60u;
    // 7F050C60: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050C64:
    ctx->pc = 0x7F050C64u;
    // 7F050C64: addi    r4, r4, 17714
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17714);

label_7F050C68:
    ctx->pc = 0x7F050C68u;
    // 7F050C68: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050C6C:
    ctx->pc = 0x7F050C6Cu;
    // 7F050C6C: bl      0x7F04272C
    {
            ctx->lr = 0x7F050C70u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050C70:
    ctx->pc = 0x7F050C70u;
    ctx->downcount -= 1;
    // 7F050C70: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050C74:
    ctx->pc = 0x7F050C74u;
    ctx->downcount -= 5;
    // 7F050C74: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F050C78:
    ctx->pc = 0x7F050C78u;
    // 7F050C78: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050C7C:
    ctx->pc = 0x7F050C7Cu;
    // 7F050C7C: addi    r4, r4, 19763
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19763);

label_7F050C80:
    ctx->pc = 0x7F050C80u;
    // 7F050C80: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050C84:
    ctx->pc = 0x7F050C84u;
    // 7F050C84: bl      0x7F04272C
    {
            ctx->lr = 0x7F050C88u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050C88:
    ctx->pc = 0x7F050C88u;
    ctx->downcount -= 1;
    // 7F050C88: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050C8C:
    ctx->pc = 0x7F050C8Cu;
    ctx->downcount -= 5;
    // 7F050C8C: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F050C90:
    ctx->pc = 0x7F050C90u;
    // 7F050C90: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050C94:
    ctx->pc = 0x7F050C94u;
    // 7F050C94: addi    r4, r4, 19764
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19764);

label_7F050C98:
    ctx->pc = 0x7F050C98u;
    // 7F050C98: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050C9C:
    ctx->pc = 0x7F050C9Cu;
    // 7F050C9C: bl      0x7F04272C
    {
            ctx->lr = 0x7F050CA0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050CA0:
    ctx->pc = 0x7F050CA0u;
    ctx->downcount -= 1;
    // 7F050CA0: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050CA4:
    ctx->pc = 0x7F050CA4u;
    ctx->downcount -= 5;
    // 7F050CA4: lis     r4, 53
    ctx->gpr[4] = ((u32)(s32)(53) << 16);

label_7F050CA8:
    ctx->pc = 0x7F050CA8u;
    // 7F050CA8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050CAC:
    ctx->pc = 0x7F050CACu;
    // 7F050CAC: addi    r4, r4, -7893
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7893);

label_7F050CB0:
    ctx->pc = 0x7F050CB0u;
    // 7F050CB0: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050CB4:
    ctx->pc = 0x7F050CB4u;
    // 7F050CB4: bl      0x7F04272C
    {
            ctx->lr = 0x7F050CB8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050CB8:
    ctx->pc = 0x7F050CB8u;
    ctx->downcount -= 1;
    // 7F050CB8: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050CBC:
    ctx->pc = 0x7F050CBCu;
    ctx->downcount -= 5;
    // 7F050CBC: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F050CC0:
    ctx->pc = 0x7F050CC0u;
    // 7F050CC0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050CC4:
    ctx->pc = 0x7F050CC4u;
    // 7F050CC4: addi    r4, r4, 17714
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17714);

label_7F050CC8:
    ctx->pc = 0x7F050CC8u;
    // 7F050CC8: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050CCC:
    ctx->pc = 0x7F050CCCu;
    // 7F050CCC: bl      0x7F04272C
    {
            ctx->lr = 0x7F050CD0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050CD0:
    ctx->pc = 0x7F050CD0u;
    ctx->downcount -= 1;
    // 7F050CD0: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050CD4:
    ctx->pc = 0x7F050CD4u;
    ctx->downcount -= 8;
    // 7F050CD4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F050CD8:
    ctx->pc = 0x7F050CD8u;
    // 7F050CD8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F050CDC:
    ctx->pc = 0x7F050CDCu;
    // 7F050CDC: lis     r4, 74
    ctx->gpr[4] = ((u32)(s32)(74) << 16);

label_7F050CE0:
    ctx->pc = 0x7F050CE0u;
    // 7F050CE0: stw     r0, 22388(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22388);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050CE4:
    ctx->pc = 0x7F050CE4u;
    // 7F050CE4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050CE8:
    ctx->pc = 0x7F050CE8u;
    // 7F050CE8: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050CEC:
    ctx->pc = 0x7F050CECu;
    // 7F050CEC: addi    r4, r4, 23597
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23597);

label_7F050CF0:
    ctx->pc = 0x7F050CF0u;
    // 7F050CF0: bl      0x7F04272C
    {
            ctx->lr = 0x7F050CF4u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050CF4:
    ctx->pc = 0x7F050CF4u;
    ctx->downcount -= 1;
    // 7F050CF4: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050CF8:
    ctx->pc = 0x7F050CF8u;
    ctx->downcount -= 5;
    // 7F050CF8: lis     r4, 14
    ctx->gpr[4] = ((u32)(s32)(14) << 16);

label_7F050CFC:
    ctx->pc = 0x7F050CFCu;
    // 7F050CFC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050D00:
    ctx->pc = 0x7F050D00u;
    // 7F050D00: addi    r4, r4, 13617
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13617);

label_7F050D04:
    ctx->pc = 0x7F050D04u;
    // 7F050D04: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050D08:
    ctx->pc = 0x7F050D08u;
    // 7F050D08: bl      0x7F04272C
    {
            ctx->lr = 0x7F050D0Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050D0C:
    ctx->pc = 0x7F050D0Cu;
    ctx->downcount -= 1;
    // 7F050D0C: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050D10:
    ctx->pc = 0x7F050D10u;
    ctx->downcount -= 8;
    // 7F050D10: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F050D14:
    ctx->pc = 0x7F050D14u;
    // 7F050D14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F050D18:
    ctx->pc = 0x7F050D18u;
    // 7F050D18: lis     r4, 20
    ctx->gpr[4] = ((u32)(s32)(20) << 16);

label_7F050D1C:
    ctx->pc = 0x7F050D1Cu;
    // 7F050D1C: stw     r0, 22392(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22392);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050D20:
    ctx->pc = 0x7F050D20u;
    // 7F050D20: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050D24:
    ctx->pc = 0x7F050D24u;
    // 7F050D24: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050D28:
    ctx->pc = 0x7F050D28u;
    // 7F050D28: addi    r4, r4, 6186
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6186);

label_7F050D2C:
    ctx->pc = 0x7F050D2Cu;
    // 7F050D2C: bl      0x7F04272C
    {
            ctx->lr = 0x7F050D30u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050D30:
    ctx->pc = 0x7F050D30u;
    ctx->downcount -= 1;
    // 7F050D30: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050D34:
    ctx->pc = 0x7F050D34u;
    ctx->downcount -= 5;
    // 7F050D34: lis     r4, 13
    ctx->gpr[4] = ((u32)(s32)(13) << 16);

label_7F050D38:
    ctx->pc = 0x7F050D38u;
    // 7F050D38: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050D3C:
    ctx->pc = 0x7F050D3Cu;
    // 7F050D3C: addi    r4, r4, 26528
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26528);

label_7F050D40:
    ctx->pc = 0x7F050D40u;
    // 7F050D40: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050D44:
    ctx->pc = 0x7F050D44u;
    // 7F050D44: bl      0x7F04272C
    {
            ctx->lr = 0x7F050D48u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050D48:
    ctx->pc = 0x7F050D48u;
    ctx->downcount -= 1;
    // 7F050D48: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050D4C:
    ctx->pc = 0x7F050D4Cu;
    ctx->downcount -= 5;
    // 7F050D4C: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F050D50:
    ctx->pc = 0x7F050D50u;
    // 7F050D50: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050D54:
    ctx->pc = 0x7F050D54u;
    // 7F050D54: addi    r4, r4, 17714
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17714);

label_7F050D58:
    ctx->pc = 0x7F050D58u;
    // 7F050D58: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050D5C:
    ctx->pc = 0x7F050D5Cu;
    // 7F050D5C: bl      0x7F04272C
    {
            ctx->lr = 0x7F050D60u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050D60:
    ctx->pc = 0x7F050D60u;
    ctx->downcount -= 1;
    // 7F050D60: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050D64:
    ctx->pc = 0x7F050D64u;
    ctx->downcount -= 5;
    // 7F050D64: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F050D68:
    ctx->pc = 0x7F050D68u;
    // 7F050D68: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050D6C:
    ctx->pc = 0x7F050D6Cu;
    // 7F050D6C: addi    r4, r4, 17714
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17714);

label_7F050D70:
    ctx->pc = 0x7F050D70u;
    // 7F050D70: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050D74:
    ctx->pc = 0x7F050D74u;
    // 7F050D74: bl      0x7F04272C
    {
            ctx->lr = 0x7F050D78u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050D78:
    ctx->pc = 0x7F050D78u;
    ctx->downcount -= 1;
    // 7F050D78: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050D7C:
    ctx->pc = 0x7F050D7Cu;
    ctx->downcount -= 6;
    // 7F050D7C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F050D80:
    ctx->pc = 0x7F050D80u;
    // 7F050D80: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F050D84:
    ctx->pc = 0x7F050D84u;
    // 7F050D84: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050D88:
    ctx->pc = 0x7F050D88u;
    // 7F050D88: addi    r4, r4, 13873
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13873);

label_7F050D8C:
    ctx->pc = 0x7F050D8Cu;
    // 7F050D8C: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F050D90:
    ctx->pc = 0x7F050D90u;
    // 7F050D90: bl      0x7F04272C
    {
            ctx->lr = 0x7F050D94u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050D94:
    ctx->pc = 0x7F050D94u;
    ctx->downcount -= 5;
    // 7F050D94: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F050D98:
    ctx->pc = 0x7F050D98u;
    // 7F050D98: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050D9C:
    ctx->pc = 0x7F050D9Cu;
    // 7F050D9C: addi    r4, r4, 13873
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13873);

label_7F050DA0:
    ctx->pc = 0x7F050DA0u;
    // 7F050DA0: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F050DA4:
    ctx->pc = 0x7F050DA4u;
    // 7F050DA4: bl      0x7F042C28
    {
            ctx->lr = 0x7F050DA8u;
            ctx->pc = 0x7F042C28u;
            return;
    }

label_7F050DA8:
    ctx->pc = 0x7F050DA8u;
    ctx->downcount -= 6;
    // 7F050DA8: lis     r4, 193
    ctx->gpr[4] = ((u32)(s32)(193) << 16);

label_7F050DAC:
    ctx->pc = 0x7F050DACu;
    // 7F050DAC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050DB0:
    ctx->pc = 0x7F050DB0u;
    // 7F050DB0: addi    r5, r4, 12186
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12186);

label_7F050DB4:
    ctx->pc = 0x7F050DB4u;
    // 7F050DB4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F050DB8:
    ctx->pc = 0x7F050DB8u;
    // 7F050DB8: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F050DBC:
    ctx->pc = 0x7F050DBCu;
    // 7F050DBC: bl      0x7F042C2C
    {
            ctx->lr = 0x7F050DC0u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F050DC0:
    ctx->pc = 0x7F050DC0u;
    ctx->downcount -= 3;
    // 7F050DC0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050DC4:
    ctx->pc = 0x7F050DC4u;
    // 7F050DC4: addi    r4, r29, 48
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(48);

label_7F050DC8:
    ctx->pc = 0x7F050DC8u;
    // 7F050DC8: bl      0x7F042B6C
    {
            ctx->lr = 0x7F050DCCu;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F050DCC:
    ctx->pc = 0x7F050DCCu;
    ctx->downcount -= 9;
    // 7F050DCC: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F050DD0:
    ctx->pc = 0x7F050DD0u;
    // 7F050DD0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050DD4:
    ctx->pc = 0x7F050DD4u;
    // 7F050DD4: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F050DD8:
    ctx->pc = 0x7F050DD8u;
    // 7F050DD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F050DDC:
    ctx->pc = 0x7F050DDCu;
    // 7F050DDC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F050DE0:
    ctx->pc = 0x7F050DE0u;
    // 7F050DE0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F050DE4:
    ctx->pc = 0x7F050DE4u;
    // 7F050DE4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F050DE8:
    ctx->pc = 0x7F050DE8u;
    // 7F050DE8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F050DEC:
    ctx->pc = 0x7F050DECu;
    // 7F050DEC: bl      0x7F042C94
    {
            ctx->lr = 0x7F050DF0u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F050DF0:
    ctx->pc = 0x7F050DF0u;
    ctx->downcount -= 3;
    // 7F050DF0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050DF4:
    ctx->pc = 0x7F050DF4u;
    // 7F050DF4: addi    r3, r29, 32
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(32);

label_7F050DF8:
    ctx->pc = 0x7F050DF8u;
    // 7F050DF8: bl      0x7F023E5C
    {
            ctx->lr = 0x7F050DFCu;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F050DFC:
    ctx->pc = 0x7F050DFCu;
    ctx->downcount -= 11;
    // 7F050DFC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F050E00:
    ctx->pc = 0x7F050E00u;
    // 7F050E00: stw     r30, 22480(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22480);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F050E04:
    ctx->pc = 0x7F050E04u;
    // 7F050E04: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050E08:
    ctx->pc = 0x7F050E08u;
    // 7F050E08: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050E0C:
    ctx->pc = 0x7F050E0Cu;
    // 7F050E0C: stw     r3, 1788(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1788);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F050E10:
    ctx->pc = 0x7F050E10u;
    // 7F050E10: stw     r0, 1792(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1792);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050E14:
    ctx->pc = 0x7F050E14u;
    // 7F050E14: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F050E18:
    ctx->pc = 0x7F050E18u;
    // 7F050E18: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F050E1C:
    ctx->pc = 0x7F050E1Cu;
    // 7F050E1C: stw     r3, 1796(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1796);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F050E20:
    ctx->pc = 0x7F050E20u;
    // 7F050E20: stw     r0, 1800(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1800);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050E24:
    ctx->pc = 0x7F050E24u;
    // 7F050E24: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050E28:
    ctx->pc = 0x7F050E28u;
    ctx->downcount -= 8;
    // 7F050E28: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F050E2C:
    ctx->pc = 0x7F050E2Cu;
    // 7F050E2C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F050E30:
    ctx->pc = 0x7F050E30u;
    // 7F050E30: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050E34:
    ctx->pc = 0x7F050E34u;
    // 7F050E34: stw     r0, 27724(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27724);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050E38:
    ctx->pc = 0x7F050E38u;
    // 7F050E38: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050E3C:
    ctx->pc = 0x7F050E3Cu;
    // 7F050E3C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050E40:
    ctx->pc = 0x7F050E40u;
    // 7F050E40: addi    r4, r4, -16801
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16801);

label_7F050E44:
    ctx->pc = 0x7F050E44u;
    // 7F050E44: bl      0x7F04272C
    {
            ctx->lr = 0x7F050E48u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050E48:
    ctx->pc = 0x7F050E48u;
    ctx->downcount -= 1;
    // 7F050E48: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050E4C:
    ctx->pc = 0x7F050E4Cu;
    ctx->downcount -= 5;
    // 7F050E4C: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050E50:
    ctx->pc = 0x7F050E50u;
    // 7F050E50: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050E54:
    ctx->pc = 0x7F050E54u;
    // 7F050E54: addi    r4, r4, -16800
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16800);

label_7F050E58:
    ctx->pc = 0x7F050E58u;
    // 7F050E58: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050E5C:
    ctx->pc = 0x7F050E5Cu;
    // 7F050E5C: bl      0x7F04272C
    {
            ctx->lr = 0x7F050E60u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050E60:
    ctx->pc = 0x7F050E60u;
    ctx->downcount -= 1;
    // 7F050E60: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050E64:
    ctx->pc = 0x7F050E64u;
    ctx->downcount -= 5;
    // 7F050E64: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050E68:
    ctx->pc = 0x7F050E68u;
    // 7F050E68: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050E6C:
    ctx->pc = 0x7F050E6Cu;
    // 7F050E6C: addi    r4, r4, -16799
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16799);

label_7F050E70:
    ctx->pc = 0x7F050E70u;
    // 7F050E70: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050E74:
    ctx->pc = 0x7F050E74u;
    // 7F050E74: bl      0x7F04272C
    {
            ctx->lr = 0x7F050E78u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050E78:
    ctx->pc = 0x7F050E78u;
    ctx->downcount -= 1;
    // 7F050E78: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050E7C:
    ctx->pc = 0x7F050E7Cu;
    ctx->downcount -= 5;
    // 7F050E7C: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050E80:
    ctx->pc = 0x7F050E80u;
    // 7F050E80: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050E84:
    ctx->pc = 0x7F050E84u;
    // 7F050E84: addi    r4, r4, -16798
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16798);

label_7F050E88:
    ctx->pc = 0x7F050E88u;
    // 7F050E88: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050E8C:
    ctx->pc = 0x7F050E8Cu;
    // 7F050E8C: bl      0x7F04272C
    {
            ctx->lr = 0x7F050E90u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050E90:
    ctx->pc = 0x7F050E90u;
    ctx->downcount -= 1;
    // 7F050E90: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050E94:
    ctx->pc = 0x7F050E94u;
    ctx->downcount -= 5;
    // 7F050E94: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050E98:
    ctx->pc = 0x7F050E98u;
    // 7F050E98: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050E9C:
    ctx->pc = 0x7F050E9Cu;
    // 7F050E9C: addi    r4, r4, -16797
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16797);

label_7F050EA0:
    ctx->pc = 0x7F050EA0u;
    // 7F050EA0: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050EA4:
    ctx->pc = 0x7F050EA4u;
    // 7F050EA4: bl      0x7F04272C
    {
            ctx->lr = 0x7F050EA8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050EA8:
    ctx->pc = 0x7F050EA8u;
    ctx->downcount -= 1;
    // 7F050EA8: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050EAC:
    ctx->pc = 0x7F050EACu;
    ctx->downcount -= 5;
    // 7F050EAC: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050EB0:
    ctx->pc = 0x7F050EB0u;
    // 7F050EB0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050EB4:
    ctx->pc = 0x7F050EB4u;
    // 7F050EB4: addi    r4, r4, -16796
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16796);

label_7F050EB8:
    ctx->pc = 0x7F050EB8u;
    // 7F050EB8: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050EBC:
    ctx->pc = 0x7F050EBCu;
    // 7F050EBC: bl      0x7F04272C
    {
            ctx->lr = 0x7F050EC0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050EC0:
    ctx->pc = 0x7F050EC0u;
    ctx->downcount -= 1;
    // 7F050EC0: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050EC4:
    ctx->pc = 0x7F050EC4u;
    ctx->downcount -= 5;
    // 7F050EC4: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050EC8:
    ctx->pc = 0x7F050EC8u;
    // 7F050EC8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050ECC:
    ctx->pc = 0x7F050ECCu;
    // 7F050ECC: addi    r4, r4, -16795
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16795);

label_7F050ED0:
    ctx->pc = 0x7F050ED0u;
    // 7F050ED0: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050ED4:
    ctx->pc = 0x7F050ED4u;
    // 7F050ED4: bl      0x7F04272C
    {
            ctx->lr = 0x7F050ED8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050ED8:
    ctx->pc = 0x7F050ED8u;
    ctx->downcount -= 1;
    // 7F050ED8: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050EDC:
    ctx->pc = 0x7F050EDCu;
    ctx->downcount -= 5;
    // 7F050EDC: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050EE0:
    ctx->pc = 0x7F050EE0u;
    // 7F050EE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050EE4:
    ctx->pc = 0x7F050EE4u;
    // 7F050EE4: addi    r4, r4, -16794
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16794);

label_7F050EE8:
    ctx->pc = 0x7F050EE8u;
    // 7F050EE8: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050EEC:
    ctx->pc = 0x7F050EECu;
    // 7F050EEC: bl      0x7F04272C
    {
            ctx->lr = 0x7F050EF0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050EF0:
    ctx->pc = 0x7F050EF0u;
    ctx->downcount -= 1;
    // 7F050EF0: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050EF4:
    ctx->pc = 0x7F050EF4u;
    ctx->downcount -= 8;
    // 7F050EF4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F050EF8:
    ctx->pc = 0x7F050EF8u;
    // 7F050EF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F050EFC:
    ctx->pc = 0x7F050EFCu;
    // 7F050EFC: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050F00:
    ctx->pc = 0x7F050F00u;
    // 7F050F00: stw     r0, 27732(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27732);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050F04:
    ctx->pc = 0x7F050F04u;
    // 7F050F04: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050F08:
    ctx->pc = 0x7F050F08u;
    // 7F050F08: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050F0C:
    ctx->pc = 0x7F050F0Cu;
    // 7F050F0C: addi    r4, r4, -16737
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16737);

label_7F050F10:
    ctx->pc = 0x7F050F10u;
    // 7F050F10: bl      0x7F04272C
    {
            ctx->lr = 0x7F050F14u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050F14:
    ctx->pc = 0x7F050F14u;
    ctx->downcount -= 1;
    // 7F050F14: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050F18:
    ctx->pc = 0x7F050F18u;
    ctx->downcount -= 5;
    // 7F050F18: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050F1C:
    ctx->pc = 0x7F050F1Cu;
    // 7F050F1C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050F20:
    ctx->pc = 0x7F050F20u;
    // 7F050F20: addi    r4, r4, -16736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16736);

label_7F050F24:
    ctx->pc = 0x7F050F24u;
    // 7F050F24: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050F28:
    ctx->pc = 0x7F050F28u;
    // 7F050F28: bl      0x7F04272C
    {
            ctx->lr = 0x7F050F2Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050F2C:
    ctx->pc = 0x7F050F2Cu;
    ctx->downcount -= 1;
    // 7F050F2C: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050F30:
    ctx->pc = 0x7F050F30u;
    ctx->downcount -= 5;
    // 7F050F30: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050F34:
    ctx->pc = 0x7F050F34u;
    // 7F050F34: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050F38:
    ctx->pc = 0x7F050F38u;
    // 7F050F38: addi    r4, r4, -16735
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16735);

label_7F050F3C:
    ctx->pc = 0x7F050F3Cu;
    // 7F050F3C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050F40:
    ctx->pc = 0x7F050F40u;
    // 7F050F40: bl      0x7F04272C
    {
            ctx->lr = 0x7F050F44u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050F44:
    ctx->pc = 0x7F050F44u;
    ctx->downcount -= 1;
    // 7F050F44: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050F48:
    ctx->pc = 0x7F050F48u;
    ctx->downcount -= 5;
    // 7F050F48: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050F4C:
    ctx->pc = 0x7F050F4Cu;
    // 7F050F4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050F50:
    ctx->pc = 0x7F050F50u;
    // 7F050F50: addi    r4, r4, -16734
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16734);

label_7F050F54:
    ctx->pc = 0x7F050F54u;
    // 7F050F54: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050F58:
    ctx->pc = 0x7F050F58u;
    // 7F050F58: bl      0x7F04272C
    {
            ctx->lr = 0x7F050F5Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050F5C:
    ctx->pc = 0x7F050F5Cu;
    ctx->downcount -= 1;
    // 7F050F5C: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050F60:
    ctx->pc = 0x7F050F60u;
    ctx->downcount -= 5;
    // 7F050F60: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050F64:
    ctx->pc = 0x7F050F64u;
    // 7F050F64: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050F68:
    ctx->pc = 0x7F050F68u;
    // 7F050F68: addi    r4, r4, -16733
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16733);

label_7F050F6C:
    ctx->pc = 0x7F050F6Cu;
    // 7F050F6C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050F70:
    ctx->pc = 0x7F050F70u;
    // 7F050F70: bl      0x7F04272C
    {
            ctx->lr = 0x7F050F74u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050F74:
    ctx->pc = 0x7F050F74u;
    ctx->downcount -= 1;
    // 7F050F74: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050F78:
    ctx->pc = 0x7F050F78u;
    ctx->downcount -= 5;
    // 7F050F78: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050F7C:
    ctx->pc = 0x7F050F7Cu;
    // 7F050F7C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050F80:
    ctx->pc = 0x7F050F80u;
    // 7F050F80: addi    r4, r4, -16732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16732);

label_7F050F84:
    ctx->pc = 0x7F050F84u;
    // 7F050F84: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050F88:
    ctx->pc = 0x7F050F88u;
    // 7F050F88: bl      0x7F04272C
    {
            ctx->lr = 0x7F050F8Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050F8C:
    ctx->pc = 0x7F050F8Cu;
    ctx->downcount -= 1;
    // 7F050F8C: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050F90:
    ctx->pc = 0x7F050F90u;
    ctx->downcount -= 5;
    // 7F050F90: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050F94:
    ctx->pc = 0x7F050F94u;
    // 7F050F94: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050F98:
    ctx->pc = 0x7F050F98u;
    // 7F050F98: addi    r4, r4, -16731
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16731);

label_7F050F9C:
    ctx->pc = 0x7F050F9Cu;
    // 7F050F9C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050FA0:
    ctx->pc = 0x7F050FA0u;
    // 7F050FA0: bl      0x7F04272C
    {
            ctx->lr = 0x7F050FA4u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050FA4:
    ctx->pc = 0x7F050FA4u;
    ctx->downcount -= 1;
    // 7F050FA4: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050FA8:
    ctx->pc = 0x7F050FA8u;
    ctx->downcount -= 5;
    // 7F050FA8: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050FAC:
    ctx->pc = 0x7F050FACu;
    // 7F050FAC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050FB0:
    ctx->pc = 0x7F050FB0u;
    // 7F050FB0: addi    r4, r4, -16730
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16730);

label_7F050FB4:
    ctx->pc = 0x7F050FB4u;
    // 7F050FB4: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050FB8:
    ctx->pc = 0x7F050FB8u;
    // 7F050FB8: bl      0x7F04272C
    {
            ctx->lr = 0x7F050FBCu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050FBC:
    ctx->pc = 0x7F050FBCu;
    ctx->downcount -= 1;
    // 7F050FBC: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050FC0:
    ctx->pc = 0x7F050FC0u;
    ctx->downcount -= 8;
    // 7F050FC0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F050FC4:
    ctx->pc = 0x7F050FC4u;
    // 7F050FC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F050FC8:
    ctx->pc = 0x7F050FC8u;
    // 7F050FC8: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050FCC:
    ctx->pc = 0x7F050FCCu;
    // 7F050FCC: stw     r0, 27740(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27740);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F050FD0:
    ctx->pc = 0x7F050FD0u;
    // 7F050FD0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050FD4:
    ctx->pc = 0x7F050FD4u;
    // 7F050FD4: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050FD8:
    ctx->pc = 0x7F050FD8u;
    // 7F050FD8: addi    r4, r4, -16673
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16673);

label_7F050FDC:
    ctx->pc = 0x7F050FDCu;
    // 7F050FDC: bl      0x7F04272C
    {
            ctx->lr = 0x7F050FE0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050FE0:
    ctx->pc = 0x7F050FE0u;
    ctx->downcount -= 1;
    // 7F050FE0: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050FE4:
    ctx->pc = 0x7F050FE4u;
    ctx->downcount -= 5;
    // 7F050FE4: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F050FE8:
    ctx->pc = 0x7F050FE8u;
    // 7F050FE8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F050FEC:
    ctx->pc = 0x7F050FECu;
    // 7F050FEC: addi    r4, r4, -16672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16672);

label_7F050FF0:
    ctx->pc = 0x7F050FF0u;
    // 7F050FF0: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F050FF4:
    ctx->pc = 0x7F050FF4u;
    // 7F050FF4: bl      0x7F04272C
    {
            ctx->lr = 0x7F050FF8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F050FF8:
    ctx->pc = 0x7F050FF8u;
    ctx->downcount -= 1;
    // 7F050FF8: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F050FFC:
    ctx->pc = 0x7F050FFCu;
    ctx->downcount -= 5;
    // 7F050FFC: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051000:
    ctx->pc = 0x7F051000u;
    // 7F051000: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051004:
    ctx->pc = 0x7F051004u;
    // 7F051004: addi    r4, r4, -16671
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16671);

label_7F051008:
    ctx->pc = 0x7F051008u;
    // 7F051008: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F05100C:
    ctx->pc = 0x7F05100Cu;
    // 7F05100C: bl      0x7F04272C
    {
            ctx->lr = 0x7F051010u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051010:
    ctx->pc = 0x7F051010u;
    ctx->downcount -= 1;
    // 7F051010: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051014:
    ctx->pc = 0x7F051014u;
    ctx->downcount -= 5;
    // 7F051014: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051018:
    ctx->pc = 0x7F051018u;
    // 7F051018: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F05101C:
    ctx->pc = 0x7F05101Cu;
    // 7F05101C: addi    r4, r4, -16670
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16670);

label_7F051020:
    ctx->pc = 0x7F051020u;
    // 7F051020: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051024:
    ctx->pc = 0x7F051024u;
    // 7F051024: bl      0x7F04272C
    {
            ctx->lr = 0x7F051028u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051028:
    ctx->pc = 0x7F051028u;
    ctx->downcount -= 1;
    // 7F051028: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F05102C:
    ctx->pc = 0x7F05102Cu;
    ctx->downcount -= 5;
    // 7F05102C: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051030:
    ctx->pc = 0x7F051030u;
    // 7F051030: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051034:
    ctx->pc = 0x7F051034u;
    // 7F051034: addi    r4, r4, -16669
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16669);

label_7F051038:
    ctx->pc = 0x7F051038u;
    // 7F051038: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F05103C:
    ctx->pc = 0x7F05103Cu;
    // 7F05103C: bl      0x7F04272C
    {
            ctx->lr = 0x7F051040u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051040:
    ctx->pc = 0x7F051040u;
    ctx->downcount -= 1;
    // 7F051040: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051044:
    ctx->pc = 0x7F051044u;
    ctx->downcount -= 5;
    // 7F051044: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051048:
    ctx->pc = 0x7F051048u;
    // 7F051048: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F05104C:
    ctx->pc = 0x7F05104Cu;
    // 7F05104C: addi    r4, r4, -16668
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16668);

label_7F051050:
    ctx->pc = 0x7F051050u;
    // 7F051050: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051054:
    ctx->pc = 0x7F051054u;
    // 7F051054: bl      0x7F04272C
    {
            ctx->lr = 0x7F051058u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051058:
    ctx->pc = 0x7F051058u;
    ctx->downcount -= 1;
    // 7F051058: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F05105C:
    ctx->pc = 0x7F05105Cu;
    ctx->downcount -= 5;
    // 7F05105C: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051060:
    ctx->pc = 0x7F051060u;
    // 7F051060: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051064:
    ctx->pc = 0x7F051064u;
    // 7F051064: addi    r4, r4, -16667
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16667);

label_7F051068:
    ctx->pc = 0x7F051068u;
    // 7F051068: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F05106C:
    ctx->pc = 0x7F05106Cu;
    // 7F05106C: bl      0x7F04272C
    {
            ctx->lr = 0x7F051070u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051070:
    ctx->pc = 0x7F051070u;
    ctx->downcount -= 1;
    // 7F051070: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051074:
    ctx->pc = 0x7F051074u;
    ctx->downcount -= 5;
    // 7F051074: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051078:
    ctx->pc = 0x7F051078u;
    // 7F051078: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F05107C:
    ctx->pc = 0x7F05107Cu;
    // 7F05107C: addi    r4, r4, -16666
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16666);

label_7F051080:
    ctx->pc = 0x7F051080u;
    // 7F051080: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051084:
    ctx->pc = 0x7F051084u;
    // 7F051084: bl      0x7F04272C
    {
            ctx->lr = 0x7F051088u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051088:
    ctx->pc = 0x7F051088u;
    ctx->downcount -= 1;
    // 7F051088: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F05108C:
    ctx->pc = 0x7F05108Cu;
    ctx->downcount -= 8;
    // 7F05108C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F051090:
    ctx->pc = 0x7F051090u;
    // 7F051090: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F051094:
    ctx->pc = 0x7F051094u;
    // 7F051094: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051098:
    ctx->pc = 0x7F051098u;
    // 7F051098: stw     r0, 27748(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27748);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05109C:
    ctx->pc = 0x7F05109Cu;
    // 7F05109C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0510A0:
    ctx->pc = 0x7F0510A0u;
    // 7F0510A0: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0510A4:
    ctx->pc = 0x7F0510A4u;
    // 7F0510A4: addi    r4, r4, -16609
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16609);

label_7F0510A8:
    ctx->pc = 0x7F0510A8u;
    // 7F0510A8: bl      0x7F04272C
    {
            ctx->lr = 0x7F0510ACu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0510AC:
    ctx->pc = 0x7F0510ACu;
    ctx->downcount -= 1;
    // 7F0510AC: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F0510B0:
    ctx->pc = 0x7F0510B0u;
    ctx->downcount -= 5;
    // 7F0510B0: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F0510B4:
    ctx->pc = 0x7F0510B4u;
    // 7F0510B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0510B8:
    ctx->pc = 0x7F0510B8u;
    // 7F0510B8: addi    r4, r4, -16608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16608);

label_7F0510BC:
    ctx->pc = 0x7F0510BCu;
    // 7F0510BC: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0510C0:
    ctx->pc = 0x7F0510C0u;
    // 7F0510C0: bl      0x7F04272C
    {
            ctx->lr = 0x7F0510C4u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0510C4:
    ctx->pc = 0x7F0510C4u;
    ctx->downcount -= 1;
    // 7F0510C4: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F0510C8:
    ctx->pc = 0x7F0510C8u;
    ctx->downcount -= 5;
    // 7F0510C8: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F0510CC:
    ctx->pc = 0x7F0510CCu;
    // 7F0510CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0510D0:
    ctx->pc = 0x7F0510D0u;
    // 7F0510D0: addi    r4, r4, -16607
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16607);

label_7F0510D4:
    ctx->pc = 0x7F0510D4u;
    // 7F0510D4: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0510D8:
    ctx->pc = 0x7F0510D8u;
    // 7F0510D8: bl      0x7F04272C
    {
            ctx->lr = 0x7F0510DCu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0510DC:
    ctx->pc = 0x7F0510DCu;
    ctx->downcount -= 1;
    // 7F0510DC: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F0510E0:
    ctx->pc = 0x7F0510E0u;
    ctx->downcount -= 5;
    // 7F0510E0: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F0510E4:
    ctx->pc = 0x7F0510E4u;
    // 7F0510E4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0510E8:
    ctx->pc = 0x7F0510E8u;
    // 7F0510E8: addi    r4, r4, -16606
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16606);

label_7F0510EC:
    ctx->pc = 0x7F0510ECu;
    // 7F0510EC: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0510F0:
    ctx->pc = 0x7F0510F0u;
    // 7F0510F0: bl      0x7F04272C
    {
            ctx->lr = 0x7F0510F4u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0510F4:
    ctx->pc = 0x7F0510F4u;
    ctx->downcount -= 1;
    // 7F0510F4: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F0510F8:
    ctx->pc = 0x7F0510F8u;
    ctx->downcount -= 5;
    // 7F0510F8: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F0510FC:
    ctx->pc = 0x7F0510FCu;
    // 7F0510FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051100:
    ctx->pc = 0x7F051100u;
    // 7F051100: addi    r4, r4, -16605
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16605);

label_7F051104:
    ctx->pc = 0x7F051104u;
    // 7F051104: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051108:
    ctx->pc = 0x7F051108u;
    // 7F051108: bl      0x7F04272C
    {
            ctx->lr = 0x7F05110Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F05110C:
    ctx->pc = 0x7F05110Cu;
    ctx->downcount -= 1;
    // 7F05110C: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051110:
    ctx->pc = 0x7F051110u;
    ctx->downcount -= 5;
    // 7F051110: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051114:
    ctx->pc = 0x7F051114u;
    // 7F051114: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051118:
    ctx->pc = 0x7F051118u;
    // 7F051118: addi    r4, r4, -16604
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16604);

label_7F05111C:
    ctx->pc = 0x7F05111Cu;
    // 7F05111C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051120:
    ctx->pc = 0x7F051120u;
    // 7F051120: bl      0x7F04272C
    {
            ctx->lr = 0x7F051124u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051124:
    ctx->pc = 0x7F051124u;
    ctx->downcount -= 1;
    // 7F051124: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051128:
    ctx->pc = 0x7F051128u;
    ctx->downcount -= 8;
    // 7F051128: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F05112C:
    ctx->pc = 0x7F05112Cu;
    // 7F05112C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F051130:
    ctx->pc = 0x7F051130u;
    // 7F051130: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051134:
    ctx->pc = 0x7F051134u;
    // 7F051134: stw     r0, 27756(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27756);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051138:
    ctx->pc = 0x7F051138u;
    // 7F051138: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F05113C:
    ctx->pc = 0x7F05113Cu;
    // 7F05113C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051140:
    ctx->pc = 0x7F051140u;
    // 7F051140: addi    r4, r4, -16545
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16545);

label_7F051144:
    ctx->pc = 0x7F051144u;
    // 7F051144: bl      0x7F04272C
    {
            ctx->lr = 0x7F051148u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051148:
    ctx->pc = 0x7F051148u;
    ctx->downcount -= 1;
    // 7F051148: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F05114C:
    ctx->pc = 0x7F05114Cu;
    ctx->downcount -= 5;
    // 7F05114C: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051150:
    ctx->pc = 0x7F051150u;
    // 7F051150: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051154:
    ctx->pc = 0x7F051154u;
    // 7F051154: addi    r4, r4, -16544
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16544);

label_7F051158:
    ctx->pc = 0x7F051158u;
    // 7F051158: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F05115C:
    ctx->pc = 0x7F05115Cu;
    // 7F05115C: bl      0x7F04272C
    {
            ctx->lr = 0x7F051160u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051160:
    ctx->pc = 0x7F051160u;
    ctx->downcount -= 1;
    // 7F051160: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051164:
    ctx->pc = 0x7F051164u;
    ctx->downcount -= 5;
    // 7F051164: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051168:
    ctx->pc = 0x7F051168u;
    // 7F051168: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F05116C:
    ctx->pc = 0x7F05116Cu;
    // 7F05116C: addi    r4, r4, -16543
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16543);

label_7F051170:
    ctx->pc = 0x7F051170u;
    // 7F051170: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051174:
    ctx->pc = 0x7F051174u;
    // 7F051174: bl      0x7F04272C
    {
            ctx->lr = 0x7F051178u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051178:
    ctx->pc = 0x7F051178u;
    ctx->downcount -= 1;
    // 7F051178: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F05117C:
    ctx->pc = 0x7F05117Cu;
    ctx->downcount -= 5;
    // 7F05117C: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051180:
    ctx->pc = 0x7F051180u;
    // 7F051180: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051184:
    ctx->pc = 0x7F051184u;
    // 7F051184: addi    r4, r4, -16542
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16542);

label_7F051188:
    ctx->pc = 0x7F051188u;
    // 7F051188: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F05118C:
    ctx->pc = 0x7F05118Cu;
    // 7F05118C: bl      0x7F04272C
    {
            ctx->lr = 0x7F051190u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051190:
    ctx->pc = 0x7F051190u;
    ctx->downcount -= 1;
    // 7F051190: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051194:
    ctx->pc = 0x7F051194u;
    ctx->downcount -= 5;
    // 7F051194: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F051198:
    ctx->pc = 0x7F051198u;
    // 7F051198: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F05119C:
    ctx->pc = 0x7F05119Cu;
    // 7F05119C: addi    r4, r4, -16541
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16541);

label_7F0511A0:
    ctx->pc = 0x7F0511A0u;
    // 7F0511A0: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0511A4:
    ctx->pc = 0x7F0511A4u;
    // 7F0511A4: bl      0x7F04272C
    {
            ctx->lr = 0x7F0511A8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0511A8:
    ctx->pc = 0x7F0511A8u;
    ctx->downcount -= 1;
    // 7F0511A8: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F0511AC:
    ctx->pc = 0x7F0511ACu;
    ctx->downcount -= 5;
    // 7F0511AC: lis     r4, 3
    ctx->gpr[4] = ((u32)(s32)(3) << 16);

label_7F0511B0:
    ctx->pc = 0x7F0511B0u;
    // 7F0511B0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0511B4:
    ctx->pc = 0x7F0511B4u;
    // 7F0511B4: addi    r4, r4, -16540
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16540);

label_7F0511B8:
    ctx->pc = 0x7F0511B8u;
    // 7F0511B8: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0511BC:
    ctx->pc = 0x7F0511BCu;
    // 7F0511BC: bl      0x7F04272C
    {
            ctx->lr = 0x7F0511C0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0511C0:
    ctx->pc = 0x7F0511C0u;
    ctx->downcount -= 1;
    // 7F0511C0: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F0511C4:
    ctx->pc = 0x7F0511C4u;
    ctx->downcount -= 5;
    // 7F0511C4: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F0511C8:
    ctx->pc = 0x7F0511C8u;
    // 7F0511C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0511CC:
    ctx->pc = 0x7F0511CCu;
    // 7F0511CC: addi    r4, r4, 23021
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23021);

label_7F0511D0:
    ctx->pc = 0x7F0511D0u;
    // 7F0511D0: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0511D4:
    ctx->pc = 0x7F0511D4u;
    // 7F0511D4: bl      0x7F04272C
    {
            ctx->lr = 0x7F0511D8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0511D8:
    ctx->pc = 0x7F0511D8u;
    ctx->downcount -= 1;
    // 7F0511D8: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F0511DC:
    ctx->pc = 0x7F0511DCu;
    ctx->downcount -= 12;
    // 7F0511DC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0511E0:
    ctx->pc = 0x7F0511E0u;
    // 7F0511E0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0511E4:
    ctx->pc = 0x7F0511E4u;
    // 7F0511E4: addi    r5, r4, 27768
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(27768);

label_7F0511E8:
    ctx->pc = 0x7F0511E8u;
    // 7F0511E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0511EC:
    ctx->pc = 0x7F0511ECu;
    // 7F0511EC: addi    r6, r3, 27772
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(27772);

label_7F0511F0:
    ctx->pc = 0x7F0511F0u;
    // 7F0511F0: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F0511F4:
    ctx->pc = 0x7F0511F4u;
    // 7F0511F4: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0511F8:
    ctx->pc = 0x7F0511F8u;
    // 7F0511F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0511FC:
    ctx->pc = 0x7F0511FCu;
    // 7F0511FC: addi    r4, r4, -1493
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1493);

label_7F051200:
    ctx->pc = 0x7F051200u;
    // 7F051200: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051204:
    ctx->pc = 0x7F051204u;
    // 7F051204: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051208:
    ctx->pc = 0x7F051208u;
    // 7F051208: bl      0x7F04272C
    {
            ctx->lr = 0x7F05120Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F05120C:
    ctx->pc = 0x7F05120Cu;
    ctx->downcount -= 1;
    // 7F05120C: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051210:
    ctx->pc = 0x7F051210u;
    ctx->downcount -= 5;
    // 7F051210: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F051214:
    ctx->pc = 0x7F051214u;
    // 7F051214: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051218:
    ctx->pc = 0x7F051218u;
    // 7F051218: addi    r4, r4, -1492
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1492);

label_7F05121C:
    ctx->pc = 0x7F05121Cu;
    // 7F05121C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051220:
    ctx->pc = 0x7F051220u;
    // 7F051220: bl      0x7F04272C
    {
            ctx->lr = 0x7F051224u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051224:
    ctx->pc = 0x7F051224u;
    ctx->downcount -= 1;
    // 7F051224: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051228:
    ctx->pc = 0x7F051228u;
    ctx->downcount -= 5;
    // 7F051228: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F05122C:
    ctx->pc = 0x7F05122Cu;
    // 7F05122C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051230:
    ctx->pc = 0x7F051230u;
    // 7F051230: addi    r4, r4, -1491
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1491);

label_7F051234:
    ctx->pc = 0x7F051234u;
    // 7F051234: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051238:
    ctx->pc = 0x7F051238u;
    // 7F051238: bl      0x7F04272C
    {
            ctx->lr = 0x7F05123Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F05123C:
    ctx->pc = 0x7F05123Cu;
    ctx->downcount -= 1;
    // 7F05123C: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051240:
    ctx->pc = 0x7F051240u;
    ctx->downcount -= 5;
    // 7F051240: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F051244:
    ctx->pc = 0x7F051244u;
    // 7F051244: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051248:
    ctx->pc = 0x7F051248u;
    // 7F051248: addi    r4, r4, -1490
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1490);

label_7F05124C:
    ctx->pc = 0x7F05124Cu;
    // 7F05124C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051250:
    ctx->pc = 0x7F051250u;
    // 7F051250: bl      0x7F04272C
    {
            ctx->lr = 0x7F051254u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051254:
    ctx->pc = 0x7F051254u;
    ctx->downcount -= 1;
    // 7F051254: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051258:
    ctx->pc = 0x7F051258u;
    ctx->downcount -= 5;
    // 7F051258: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F05125C:
    ctx->pc = 0x7F05125Cu;
    // 7F05125C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051260:
    ctx->pc = 0x7F051260u;
    // 7F051260: addi    r4, r4, -1489
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1489);

label_7F051264:
    ctx->pc = 0x7F051264u;
    // 7F051264: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051268:
    ctx->pc = 0x7F051268u;
    // 7F051268: bl      0x7F04272C
    {
            ctx->lr = 0x7F05126Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F05126C:
    ctx->pc = 0x7F05126Cu;
    ctx->downcount -= 1;
    // 7F05126C: b       0x7F051284
    {
            goto label_7F051284;
    }

label_7F051270:
    ctx->pc = 0x7F051270u;
    ctx->downcount -= 5;
    // 7F051270: lis     r4, 181
    ctx->gpr[4] = ((u32)(s32)(181) << 16);

label_7F051274:
    ctx->pc = 0x7F051274u;
    // 7F051274: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051278:
    ctx->pc = 0x7F051278u;
    // 7F051278: addi    r4, r4, 27623
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27623);

label_7F05127C:
    ctx->pc = 0x7F05127Cu;
    // 7F05127C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F051280:
    ctx->pc = 0x7F051280u;
    // 7F051280: bl      0x7F04272C
    {
            ctx->lr = 0x7F051284u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F051284:
    ctx->pc = 0x7F051284u;
    ctx->downcount -= 2;
    // 7F051284: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F051288:
    ctx->pc = 0x7F051288u;
    // 7F051288: bl      0x7F3C664C
    {
            ctx->lr = 0x7F05128Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F05128C:
    ctx->pc = 0x7F05128Cu;
    ctx->downcount -= 2;
    // 7F05128C: cmplwi  r3, 0x0000
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

label_7F051290:
    ctx->pc = 0x7F051290u;
    // 7F051290: bc    12, 2, 0x7F0512A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0512A4;
        }
    }

label_7F051294:
    ctx->pc = 0x7F051294u;
    ctx->downcount -= 1;
    // 7F051294: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F051298u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F051298:
    ctx->pc = 0x7F051298u;
    ctx->downcount -= 1;
    // 7F051298: bl      0x7F3C674C
    {
            ctx->lr = 0x7F05129Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F05129C:
    ctx->pc = 0x7F05129Cu;
    ctx->downcount -= 2;
    // 7F05129C: stw     r3, 1376(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1376);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0512A0:
    ctx->pc = 0x7F0512A0u;
    // 7F0512A0: b       0x7F0512AC
    {
            goto label_7F0512AC;
    }

label_7F0512A4:
    ctx->pc = 0x7F0512A4u;
    ctx->downcount -= 2;
    // 7F0512A4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0512A8:
    ctx->pc = 0x7F0512A8u;
    // 7F0512A8: stw     r0, 1376(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1376);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0512AC:
    ctx->pc = 0x7F0512ACu;
    ctx->downcount -= 2;
    // 7F0512AC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0512B0:
    ctx->pc = 0x7F0512B0u;
    // 7F0512B0: bl      0x7F0502FC
    {
            ctx->lr = 0x7F0512B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0502FCu;
                return;
            }
            goto label_7F0502FC;
    }

label_7F0512B4:
    ctx->pc = 0x7F0512B4u;
    ctx->downcount -= 2;
    // 7F0512B4: cmpwi   r3, 0
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

label_7F0512B8:
    ctx->pc = 0x7F0512B8u;
    // 7F0512B8: bc    4, 0, 0x7F0512C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0512C4;
        }
    }

label_7F0512BC:
    ctx->pc = 0x7F0512BCu;
    ctx->downcount -= 2;
    // 7F0512BC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0512C0:
    ctx->pc = 0x7F0512C0u;
    // 7F0512C0: b       0x7F0512E4
    {
            goto label_7F0512E4;
    }

label_7F0512C4:
    ctx->pc = 0x7F0512C4u;
    ctx->downcount -= 2;
    // 7F0512C4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0512C8:
    ctx->pc = 0x7F0512C8u;
    // 7F0512C8: bl      0x7F050950
    {
            ctx->lr = 0x7F0512CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F050950u;
                return;
            }
            goto label_7F050950;
    }

label_7F0512CC:
    ctx->pc = 0x7F0512CCu;
    ctx->downcount -= 6;
    // 7F0512CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0512D0:
    ctx->pc = 0x7F0512D0u;
    // 7F0512D0: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F0512D4:
    ctx->pc = 0x7F0512D4u;
    // 7F0512D4: stw     r4, 1324(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1324);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0512D8:
    ctx->pc = 0x7F0512D8u;
    // 7F0512D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0512DC:
    ctx->pc = 0x7F0512DCu;
    // 7F0512DC: stw     r0, 1368(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0512E0:
    ctx->pc = 0x7F0512E0u;
    // 7F0512E0: stw     r4, 1372(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1372);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0512E4:
    ctx->pc = 0x7F0512E4u;
    ctx->downcount -= 16;
    // 7F0512E4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0512E8:
    ctx->pc = 0x7F0512E8u;
    // 7F0512E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0512EC:
    ctx->pc = 0x7F0512ECu;
    // 7F0512EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0512F0:
    ctx->pc = 0x7F0512F0u;
    // 7F0512F0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0512F4:
    ctx->pc = 0x7F0512F4u;
    // 7F0512F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0512F8:
    ctx->pc = 0x7F0512F8u;
    ctx->downcount -= 21;
    // 7F0512F8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0512FC:
    ctx->pc = 0x7F0512FCu;
    // 7F0512FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F051300:
    ctx->pc = 0x7F051300u;
    // 7F051300: li      r5, 1808
    ctx->gpr[5] = (u32)(s32)(1808);

label_7F051304:
    ctx->pc = 0x7F051304u;
    // 7F051304: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F051308:
    ctx->pc = 0x7F051308u;
    // 7F051308: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05130C:
    ctx->pc = 0x7F05130Cu;
    // 7F05130C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F051310:
    ctx->pc = 0x7F051310u;
    // 7F051310: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F051314:
    ctx->pc = 0x7F051314u;
    // 7F051314: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F051318:
    ctx->pc = 0x7F051318u;
    // 7F051318: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F05131C:
    ctx->pc = 0x7F05131Cu;
    // 7F05131C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F051320:
    ctx->pc = 0x7F051320u;
    // 7F051320: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F051324u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F051324:
    ctx->pc = 0x7F051324u;
    ctx->downcount -= 2;
    // 7F051324: or.   r31, r3, r3
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

label_7F051328:
    ctx->pc = 0x7F051328u;
    // 7F051328: bc    12, 2, 0x7F051388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051388;
        }
    }

label_7F05132C:
    ctx->pc = 0x7F05132Cu;
    ctx->downcount -= 5;
    // 7F05132C: lis     r4, 32517
    ctx->gpr[4] = ((u32)(s32)(32517) << 16);

label_7F051330:
    ctx->pc = 0x7F051330u;
    // 7F051330: lis     r5, 32517
    ctx->gpr[5] = ((u32)(s32)(32517) << 16);

label_7F051334:
    ctx->pc = 0x7F051334u;
    // 7F051334: addi    r4, r4, -944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-944);

label_7F051338:
    ctx->pc = 0x7F051338u;
    // 7F051338: addi    r5, r5, 448
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(448);

label_7F05133C:
    ctx->pc = 0x7F05133Cu;
    // 7F05133C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F051340u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F051340:
    ctx->pc = 0x7F051340u;
    ctx->downcount -= 4;
    // 7F051340: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F051344:
    ctx->pc = 0x7F051344u;
    // 7F051344: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F051348:
    ctx->pc = 0x7F051348u;
    // 7F051348: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F05134C:
    ctx->pc = 0x7F05134Cu;
    // 7F05134C: bl      0x7F050A94
    {
            ctx->lr = 0x7F051350u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F050A94u;
                return;
            }
            goto label_7F050A94;
    }

label_7F051350:
    ctx->pc = 0x7F051350u;
    ctx->downcount -= 2;
    // 7F051350: cmpwi   r3, 0
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

label_7F051354:
    ctx->pc = 0x7F051354u;
    // 7F051354: bc    4, 0, 0x7F05137C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05137C;
        }
    }

label_7F051358:
    ctx->pc = 0x7F051358u;
    ctx->downcount -= 2;
    // 7F051358: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F05135C:
    ctx->pc = 0x7F05135Cu;
    // 7F05135C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F051360u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F051360:
    ctx->pc = 0x7F051360u;
    ctx->downcount -= 3;
    // 7F051360: lhz     r0, 1316(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1316);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F051364:
    ctx->pc = 0x7F051364u;
    // 7F051364: cmplwi  r0, 0xFFFF
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

label_7F051368:
    ctx->pc = 0x7F051368u;
    // 7F051368: bc    4, 2, 0x7F051374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051374;
        }
    }

label_7F05136C:
    ctx->pc = 0x7F05136Cu;
    ctx->downcount -= 2;
    // 7F05136C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F051370:
    ctx->pc = 0x7F051370u;
    // 7F051370: b       0x7F05138C
    {
            goto label_7F05138C;
    }

label_7F051374:
    ctx->pc = 0x7F051374u;
    ctx->downcount -= 2;
    // 7F051374: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F051378:
    ctx->pc = 0x7F051378u;
    // 7F051378: b       0x7F05138C
    {
            goto label_7F05138C;
    }

label_7F05137C:
    ctx->pc = 0x7F05137Cu;
    ctx->downcount -= 3;
    // 7F05137C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F051380:
    ctx->pc = 0x7F051380u;
    // 7F051380: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F051384:
    ctx->pc = 0x7F051384u;
    // 7F051384: stw     r0, 22064(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22064);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051388:
    ctx->pc = 0x7F051388u;
    ctx->downcount -= 1;
    // 7F051388: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F05138C:
    ctx->pc = 0x7F05138Cu;
    ctx->downcount -= 16;
    // 7F05138C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F051390:
    ctx->pc = 0x7F051390u;
    // 7F051390: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051394:
    ctx->pc = 0x7F051394u;
    // 7F051394: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F051398:
    ctx->pc = 0x7F051398u;
    // 7F051398: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F05139C:
    ctx->pc = 0x7F05139Cu;
    // 7F05139C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0513A0:
    ctx->pc = 0x7F0513A0u;
    ctx->downcount -= 13;
    // 7F0513A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0513A4:
    ctx->pc = 0x7F0513A4u;
    // 7F0513A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0513A8:
    ctx->pc = 0x7F0513A8u;
    // 7F0513A8: lis     r7, 32591
    ctx->gpr[7] = ((u32)(s32)(32591) << 16);

label_7F0513AC:
    ctx->pc = 0x7F0513ACu;
    // 7F0513AC: lis     r8, 32583
    ctx->gpr[8] = ((u32)(s32)(32583) << 16);

label_7F0513B0:
    ctx->pc = 0x7F0513B0u;
    // 7F0513B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0513B4:
    ctx->pc = 0x7F0513B4u;
    // 7F0513B4: addi    r11, r7, 32304
    ctx->gpr[11] = ctx->gpr[7] + (u32)(s32)(32304);

label_7F0513B8:
    ctx->pc = 0x7F0513B8u;
    // 7F0513B8: li      r7, 25
    ctx->gpr[7] = (u32)(s32)(25);

label_7F0513BC:
    ctx->pc = 0x7F0513BCu;
    // 7F0513BC: addi    r9, r8, 5408
    ctx->gpr[9] = ctx->gpr[8] + (u32)(s32)(5408);

label_7F0513C0:
    ctx->pc = 0x7F0513C0u;
    // 7F0513C0: rlwinm r10, r3, 0, 16, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F0513C4:
    ctx->pc = 0x7F0513C4u;
    // 7F0513C4: lwz     r0, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0513C8:
    ctx->pc = 0x7F0513C8u;
    // 7F0513C8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0513CC:
    ctx->pc = 0x7F0513CCu;
    // 7F0513CC: mtctr    r7
    ctx->ctr = ctx->gpr[7];

label_7F0513D0:
    ctx->pc = 0x7F0513D0u;
    ctx->downcount -= 3;
    // 7F0513D0: lhzx    r7, r9, r8
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[8];
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_7F0513D4:
    // 7F0513D4: cmplw   r10, r7
    {
        u32 val_a = (u32)(ctx->gpr[10]);
        u32 val_b = (u32)(ctx->gpr[7]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0513D8:
    // 7F0513D8: bc    4, 2, 0x7F051464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051464;
        }
    }

label_7F0513DC:
    ctx->downcount -= 7;
    // 7F0513DC: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F0513E0:
    // 7F0513E0: addi    r9, r7, 5408
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(5408);

label_7F0513E4:
    // 7F0513E4: add   r11, r9, r8
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_7F0513E8:
    ctx->pc = 0x7F0513E8u;
    // 7F0513E8: lwzu     r7, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
        ctx->gpr[11] = ea;
    }

label_7F0513EC:
    // 7F0513EC: add   r10, r6, r7
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_7F0513F0:
    // 7F0513F0: cmpw    r10, r0
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

label_7F0513F4:
    // 7F0513F4: bc    12, 0, 0x7F05140C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05140C;
        }
    }

label_7F0513F8:
    ctx->downcount -= 5;
    // 7F0513F8: add   r6, r9, r8
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F0513FC:
    ctx->pc = 0x7F0513FCu;
    // 7F0513FC: lhz     r7, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_7F051400:
    ctx->pc = 0x7F051400u;
    // 7F051400: lhz     r6, 2(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_7F051404:
    // 7F051404: cmplw   r7, r6
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F051408:
    // 7F051408: bc    4, 0, 0x7F05146C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05146C;
        }
    }

label_7F05140C:
    ctx->downcount -= 2;
    // 7F05140C: cmpw    r10, r0
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

label_7F051410:
    // 7F051410: bc    4, 0, 0x7F05142C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05142C;
        }
    }

label_7F051414:
    ctx->downcount -= 6;
    // 7F051414: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F051418:
    // 7F051418: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F05141C:
    // 7F05141C: addi    r6, r6, 5408
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(5408);

label_7F051420:
    // 7F051420: add   r6, r6, r8
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F051424:
    ctx->pc = 0x7F051424u;
    // 7F051424: sth     r7, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F051428:
    // 7F051428: b       0x7F051444
    {
            goto label_7F051444;
    }

label_7F05142C:
    ctx->downcount -= 6;
    // 7F05142C: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F051430:
    // 7F051430: addi    r6, r6, 5408
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(5408);

label_7F051434:
    // 7F051434: add   r7, r6, r8
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F051438:
    ctx->pc = 0x7F051438u;
    // 7F051438: lhz     r6, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_7F05143C:
    // 7F05143C: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F051440:
    ctx->pc = 0x7F051440u;
    // 7F051440: sth     r6, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F051444:
    ctx->pc = 0x7F051444u;
    ctx->downcount -= 5;
    // 7F051444: stw     r0, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051448:
    // 7F051448: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F05144C:
    // 7F05144C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F051450:
    // 7F051450: li      r7, 2048
    ctx->gpr[7] = (u32)(s32)(2048);

label_7F051454:
    // 7F051454: bl      0x7F0118D8
    {
            ctx->lr = 0x7F051458u;
            ctx->pc = 0x7F0118D8u;
            return;
    }

label_7F051458:
    ctx->downcount -= 2;
    // 7F051458: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F05145C:
    // 7F05145C: bl      0x800511A4
    {
            ctx->lr = 0x7F051460u;
            ctx->pc = 0x800511A4u;
            return;
    }

label_7F051460:
    ctx->downcount -= 1;
    // 7F051460: b       0x7F05146C
    {
            goto label_7F05146C;
    }

label_7F051464:
    ctx->downcount -= 2;
    // 7F051464: addi    r8, r8, 12
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(12);

label_7F051468:
    // 7F051468: bc    16, 0, 0x7F0513D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513D0u;
                return;
            }
            goto label_7F0513D0;
        }
    }

label_7F05146C:
    ctx->pc = 0x7F05146Cu;
    ctx->downcount -= 5;
    // 7F05146C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051470:
    ctx->pc = 0x7F051470u;
    // 7F051470: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F051474:
    ctx->pc = 0x7F051474u;
    // 7F051474: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F051478:
    ctx->pc = 0x7F051478u;
    // 7F051478: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F05147C:
    ctx->pc = 0x7F05147Cu;
    ctx->downcount -= 27;
    // 7F05147C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F051480:
    ctx->pc = 0x7F051480u;
    // 7F051480: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F051484:
    ctx->pc = 0x7F051484u;
    // 7F051484: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051488:
    ctx->pc = 0x7F051488u;
    // 7F051488: stmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F05148C:
    ctx->pc = 0x7F05148Cu;
    // 7F05148C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F051490:
    ctx->pc = 0x7F051490u;
    // 7F051490: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F051494:
    ctx->pc = 0x7F051494u;
    // 7F051494: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F051498:
    ctx->pc = 0x7F051498u;
    // 7F051498: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F05149C:
    ctx->pc = 0x7F05149Cu;
    // 7F05149C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0514A0:
    ctx->pc = 0x7F0514A0u;
    // 7F0514A0: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0514A4:
    ctx->pc = 0x7F0514A4u;
    // 7F0514A4: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0514A8:
    ctx->pc = 0x7F0514A8u;
    // 7F0514A8: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0514AC:
    ctx->pc = 0x7F0514ACu;
    // 7F0514AC: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0514B0:
    ctx->pc = 0x7F0514B0u;
    // 7F0514B0: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0514B4:
    ctx->pc = 0x7F0514B4u;
    // 7F0514B4: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0514B8:
    ctx->pc = 0x7F0514B8u;
    // 7F0514B8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0514BC:
    ctx->pc = 0x7F0514BCu;
    // 7F0514BC: bl      0x7F3CC594
    {
            ctx->lr = 0x7F0514C0u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F0514C0:
    ctx->pc = 0x7F0514C0u;
    ctx->downcount -= 6;
    // 7F0514C0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0514C4:
    ctx->pc = 0x7F0514C4u;
    // 7F0514C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0514C8:
    ctx->pc = 0x7F0514C8u;
    // 7F0514C8: addi    r5, r4, -10880
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10880);

label_7F0514CC:
    ctx->pc = 0x7F0514CCu;
    // 7F0514CC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0514D0:
    ctx->pc = 0x7F0514D0u;
    // 7F0514D0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0514D0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0514D4:
    ctx->pc = 0x7F0514D4u;
    // 7F0514D4: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F0514D8u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F0514D8:
    ctx->pc = 0x7F0514D8u;
    ctx->downcount -= 5;
    // 7F0514D8: addi    r31, r1, 40
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0514DC:
    ctx->pc = 0x7F0514DCu;
    // 7F0514DC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0514E0:
    ctx->pc = 0x7F0514E0u;
    // 7F0514E0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0514E4:
    ctx->pc = 0x7F0514E4u;
    // 7F0514E4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0514E8:
    ctx->pc = 0x7F0514E8u;
    // 7F0514E8: bl      0x800261B4
    {
            ctx->lr = 0x7F0514ECu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F0514EC:
    ctx->pc = 0x7F0514ECu;
    ctx->downcount -= 9;
    // 7F0514EC: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0514F0:
    ctx->pc = 0x7F0514F0u;
    // 7F0514F0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0514F4:
    ctx->pc = 0x7F0514F4u;
    // 7F0514F4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0514F8:
    ctx->pc = 0x7F0514F8u;
    // 7F0514F8: li      r30, 6000
    ctx->gpr[30] = (u32)(s32)(6000);

label_7F0514FC:
    ctx->pc = 0x7F0514FCu;
    // 7F0514FC: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051500:
    ctx->pc = 0x7F051500u;
    // 7F051500: li      r6, 79
    ctx->gpr[6] = (u32)(s32)(79);

label_7F051504:
    ctx->pc = 0x7F051504u;
    // 7F051504: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F051508:
    ctx->pc = 0x7F051508u;
    // 7F051508: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F05150C:
    ctx->pc = 0x7F05150Cu;
    // 7F05150C: bl      0x7F10B744
    {
            ctx->lr = 0x7F051510u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F051510:
    ctx->pc = 0x7F051510u;
    ctx->downcount -= 2;
    // 7F051510: cmpwi   r3, 0
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

label_7F051514:
    ctx->pc = 0x7F051514u;
    // 7F051514: bc    12, 2, 0x7F051544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051544;
        }
    }

label_7F051518:
    ctx->pc = 0x7F051518u;
    ctx->downcount -= 2;
    // 7F051518: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F05151C:
    ctx->pc = 0x7F05151Cu;
    // 7F05151C: bl      0x7F10B7C4
    {
            ctx->lr = 0x7F051520u;
            ctx->pc = 0x7F10B7C4u;
            return;
    }

label_7F051520:
    ctx->pc = 0x7F051520u;
    ctx->downcount -= 4;
    // 7F051520: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051524:
    ctx->pc = 0x7F051524u;
    // 7F051524: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F051528:
    ctx->pc = 0x7F051528u;
    // 7F051528: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F05152C:
    ctx->pc = 0x7F05152Cu;
    // 7F05152C: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F051530u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F051530:
    ctx->pc = 0x7F051530u;
    ctx->downcount -= 2;
    // 7F051530: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F051534:
    ctx->pc = 0x7F051534u;
    // 7F051534: bl      0x7F3CC594
    {
            ctx->lr = 0x7F051538u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F051538:
    ctx->pc = 0x7F051538u;
    ctx->downcount -= 3;
    // 7F051538: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F051538u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F05153C:
    ctx->pc = 0x7F05153Cu;
    // 7F05153C: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F05153Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F051540:
    ctx->pc = 0x7F051540u;
    // 7F051540: lwz     r30, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F051544:
    ctx->pc = 0x7F051544u;
    ctx->downcount -= 17;
    // 7F051544: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051548:
    ctx->pc = 0x7F051548u;
    // 7F051548: lmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F05154C:
    ctx->pc = 0x7F05154Cu;
    // 7F05154C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051550:
    ctx->pc = 0x7F051550u;
    // 7F051550: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F051554:
    ctx->pc = 0x7F051554u;
    // 7F051554: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F051558:
    ctx->pc = 0x7F051558u;
    // 7F051558: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F05155C:
    ctx->pc = 0x7F05155Cu;
    ctx->downcount -= 16;
    // 7F05155C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F051560:
    ctx->pc = 0x7F051560u;
    // 7F051560: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F051564:
    ctx->pc = 0x7F051564u;
    // 7F051564: cmpwi   r4, 128
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F051568:
    ctx->pc = 0x7F051568u;
    // 7F051568: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05156C:
    ctx->pc = 0x7F05156Cu;
    // 7F05156C: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F051570:
    ctx->pc = 0x7F051570u;
    // 7F051570: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F051574:
    ctx->pc = 0x7F051574u;
    // 7F051574: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F051578:
    ctx->pc = 0x7F051578u;
    // 7F051578: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05157C:
    ctx->pc = 0x7F05157Cu;
    // 7F05157C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051580:
    ctx->pc = 0x7F051580u;
    // 7F051580: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051584:
    ctx->pc = 0x7F051584u;
    // 7F051584: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051588:
    ctx->pc = 0x7F051588u;
    // 7F051588: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05158C:
    ctx->pc = 0x7F05158Cu;
    // 7F05158C: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051590:
    ctx->pc = 0x7F051590u;
    // 7F051590: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051594:
    ctx->pc = 0x7F051594u;
    // 7F051594: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051598:
    ctx->pc = 0x7F051598u;
    // 7F051598: bc    4, 2, 0x7F0515D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0515D0;
        }
    }

label_7F05159C:
    ctx->pc = 0x7F05159Cu;
    ctx->downcount -= 13;
    // 7F05159C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0515A0:
    ctx->pc = 0x7F0515A0u;
    // 7F0515A0: lwz     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0515A4:
    ctx->pc = 0x7F0515A4u;
    // 7F0515A4: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0515A8:
    ctx->pc = 0x7F0515A8u;
    // 7F0515A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0515AC:
    ctx->pc = 0x7F0515ACu;
    // 7F0515AC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0515B0:
    ctx->pc = 0x7F0515B0u;
    // 7F0515B0: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0515B4:
    ctx->pc = 0x7F0515B4u;
    // 7F0515B4: stw     r4, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0515B8:
    ctx->pc = 0x7F0515B8u;
    // 7F0515B8: stw     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0515BC:
    ctx->pc = 0x7F0515BCu;
    // 7F0515BC: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0515C0:
    ctx->pc = 0x7F0515C0u;
    // 7F0515C0: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0515C4:
    ctx->pc = 0x7F0515C4u;
    // 7F0515C4: stw     r4, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0515C8:
    ctx->pc = 0x7F0515C8u;
    // 7F0515C8: stw     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0515CC:
    ctx->pc = 0x7F0515CCu;
    // 7F0515CC: b       0x7F05168C
    {
            goto label_7F05168C;
    }

label_7F0515D0:
    ctx->pc = 0x7F0515D0u;
    ctx->downcount -= 2;
    // 7F0515D0: cmpwi   r4, 0
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

label_7F0515D4:
    ctx->pc = 0x7F0515D4u;
    // 7F0515D4: bc    4, 2, 0x7F0515EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0515EC;
        }
    }

label_7F0515D8:
    ctx->pc = 0x7F0515D8u;
    ctx->downcount -= 5;
    // 7F0515D8: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0515DC:
    ctx->pc = 0x7F0515DCu;
    // 7F0515DC: li      r3, 1736
    ctx->gpr[3] = (u32)(s32)(1736);

label_7F0515E0:
    ctx->pc = 0x7F0515E0u;
    // 7F0515E0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0515E4:
    ctx->pc = 0x7F0515E4u;
    // 7F0515E4: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F0515E8:
    ctx->pc = 0x7F0515E8u;
    // 7F0515E8: bl      0x7F0513A0
    {
            ctx->lr = 0x7F0515ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F0515EC:
    ctx->pc = 0x7F0515ECu;
    ctx->downcount -= 2;
    // 7F0515EC: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F0515F0:
    ctx->pc = 0x7F0515F0u;
    // 7F0515F0: bl      0x7F02A56C
    {
            ctx->lr = 0x7F0515F4u;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F0515F4:
    ctx->pc = 0x7F0515F4u;
    ctx->downcount -= 13;
    // 7F0515F4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F0515F8:
    ctx->pc = 0x7F0515F8u;
    // 7F0515F8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0515FC:
    ctx->pc = 0x7F0515FCu;
    // 7F0515FC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F051600:
    ctx->pc = 0x7F051600u;
    // 7F051600: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051604:
    ctx->pc = 0x7F051604u;
    // 7F051604: addi    r5, r4, -10872
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10872);

label_7F051608:
    ctx->pc = 0x7F051608u;
    // 7F051608: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05160C:
    ctx->pc = 0x7F05160Cu;
    // 7F05160C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051610:
    ctx->pc = 0x7F051610u;
    // 7F051610: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F051614:
    ctx->pc = 0x7F051614u;
    // 7F051614: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F051614u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051618:
    ctx->pc = 0x7F051618u;
    // 7F051618: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051618u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F05161C:
    ctx->pc = 0x7F05161Cu;
    // 7F05161C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F05161Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F051620:
    ctx->pc = 0x7F051620u;
    // 7F051620: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051620u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F051624:
    ctx->pc = 0x7F051624u;
    // 7F051624: bl      0x7F02A56C
    {
            ctx->lr = 0x7F051628u;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F051628:
    ctx->pc = 0x7F051628u;
    ctx->downcount -= 13;
    // 7F051628: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F05162C:
    ctx->pc = 0x7F05162Cu;
    // 7F05162C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F051630:
    ctx->pc = 0x7F051630u;
    // 7F051630: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F051634:
    ctx->pc = 0x7F051634u;
    // 7F051634: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051638:
    ctx->pc = 0x7F051638u;
    // 7F051638: addi    r5, r4, -10872
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10872);

label_7F05163C:
    ctx->pc = 0x7F05163Cu;
    // 7F05163C: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051640:
    ctx->pc = 0x7F051640u;
    // 7F051640: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051644:
    ctx->pc = 0x7F051644u;
    // 7F051644: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F051648:
    ctx->pc = 0x7F051648u;
    // 7F051648: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F051648u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F05164C:
    ctx->pc = 0x7F05164Cu;
    // 7F05164C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F05164Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051650:
    ctx->pc = 0x7F051650u;
    // 7F051650: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F051650u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F051654:
    ctx->pc = 0x7F051654u;
    // 7F051654: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051654u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F051658:
    ctx->pc = 0x7F051658u;
    // 7F051658: bl      0x7F02A56C
    {
            ctx->lr = 0x7F05165Cu;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F05165C:
    ctx->pc = 0x7F05165Cu;
    ctx->downcount -= 12;
    // 7F05165C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F051660:
    ctx->pc = 0x7F051660u;
    // 7F051660: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F051664:
    ctx->pc = 0x7F051664u;
    // 7F051664: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F051668:
    ctx->pc = 0x7F051668u;
    // 7F051668: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F05166C:
    ctx->pc = 0x7F05166Cu;
    // 7F05166C: addi    r5, r4, -10872
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10872);

label_7F051670:
    ctx->pc = 0x7F051670u;
    // 7F051670: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051674:
    ctx->pc = 0x7F051674u;
    // 7F051674: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051678:
    ctx->pc = 0x7F051678u;
    // 7F051678: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F05167C:
    ctx->pc = 0x7F05167Cu;
    // 7F05167C: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F05167Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051680:
    ctx->pc = 0x7F051680u;
    // 7F051680: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051680u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051684:
    ctx->pc = 0x7F051684u;
    // 7F051684: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F051684u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F051688:
    ctx->pc = 0x7F051688u;
    // 7F051688: stfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051688u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F05168C:
    ctx->pc = 0x7F05168Cu;
    ctx->downcount -= 6;
    // 7F05168C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051690:
    ctx->pc = 0x7F051690u;
    // 7F051690: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F051694:
    ctx->pc = 0x7F051694u;
    // 7F051694: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F051698:
    ctx->pc = 0x7F051698u;
    // 7F051698: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F05169C:
    ctx->pc = 0x7F05169Cu;
    // 7F05169C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0516A0:
    ctx->pc = 0x7F0516A0u;
    ctx->downcount -= 38;
    // 7F0516A0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0516A4:
    ctx->pc = 0x7F0516A4u;
    // 7F0516A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0516A8:
    ctx->pc = 0x7F0516A8u;
    // 7F0516A8: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F0516AC:
    ctx->pc = 0x7F0516ACu;
    // 7F0516AC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0516B0:
    ctx->pc = 0x7F0516B0u;
    // 7F0516B0: addi    r5, r4, 32304
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(32304);

label_7F0516B4:
    ctx->pc = 0x7F0516B4u;
    // 7F0516B4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0516B8:
    ctx->pc = 0x7F0516B8u;
    // 7F0516B8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0516BC:
    ctx->pc = 0x7F0516BCu;
    // 7F0516BC: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0516C0:
    ctx->pc = 0x7F0516C0u;
    // 7F0516C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0516C4:
    ctx->pc = 0x7F0516C4u;
    // 7F0516C4: lfd     f1, -10872(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0516C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10872);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0516C8:
    ctx->pc = 0x7F0516C8u;
    // 7F0516C8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0516CC:
    ctx->pc = 0x7F0516CCu;
    // 7F0516CC: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0516D0:
    ctx->pc = 0x7F0516D0u;
    // 7F0516D0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0516D4:
    ctx->pc = 0x7F0516D4u;
    // 7F0516D4: lfd     f2, -10856(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0516D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10856);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0516D8:
    ctx->pc = 0x7F0516D8u;
    // 7F0516D8: rlwinm r0, r6, 26, 0, 5
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 26u) & 0xFC000000u;
    }

label_7F0516DC:
    ctx->pc = 0x7F0516DCu;
    // 7F0516DC: rlwinm r6, r6, 1, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 1u) & 0x00000001u;
    }

label_7F0516E0:
    ctx->pc = 0x7F0516E0u;
    // 7F0516E0: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0516E4:
    ctx->pc = 0x7F0516E4u;
    // 7F0516E4: rlwinm r0, r0, 6, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFFFu;
    }

label_7F0516E8:
    ctx->pc = 0x7F0516E8u;
    // 7F0516E8: add   r30, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F0516EC:
    ctx->pc = 0x7F0516ECu;
    // 7F0516EC: xoris   r0, r30, 0x8000
    ctx->gpr[0] = ctx->gpr[30] ^ (0x8000u << 16);

label_7F0516F0:
    ctx->pc = 0x7F0516F0u;
    // 7F0516F0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0516F4:
    ctx->pc = 0x7F0516F4u;
    // 7F0516F4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0516F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0516F8:
    ctx->pc = 0x7F0516F8u;
    // 7F0516F8: fsub   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0516F8u)) return;
    ppc_fsub(ctx, 0, 0, 1);

label_7F0516FC:
    ctx->pc = 0x7F0516FCu;
    // 7F0516FC: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0516FCu)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_7F051700:
    ctx->pc = 0x7F051700u;
    // 7F051700: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F051700u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F051704:
    ctx->pc = 0x7F051704u;
    // 7F051704: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051704u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F051708:
    ctx->pc = 0x7F051708u;
    // 7F051708: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05170C:
    ctx->pc = 0x7F05170Cu;
    // 7F05170C: bl      0x7F02A62C
    {
            ctx->lr = 0x7F051710u;
            ctx->pc = 0x7F02A62Cu;
            return;
    }

label_7F051710:
    ctx->pc = 0x7F051710u;
    ctx->downcount -= 19;
    // 7F051710: xoris   r4, r30, 0x8000
    ctx->gpr[4] = ctx->gpr[30] ^ (0x8000u << 16);

label_7F051714:
    ctx->pc = 0x7F051714u;
    // 7F051714: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F051718:
    ctx->pc = 0x7F051718u;
    // 7F051718: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F05171C:
    ctx->pc = 0x7F05171Cu;
    // 7F05171C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F051720:
    ctx->pc = 0x7F051720u;
    // 7F051720: lfd     f2, -10872(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F051720u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10872);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051724:
    ctx->pc = 0x7F051724u;
    // 7F051724: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F051728:
    ctx->pc = 0x7F051728u;
    // 7F051728: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05172C:
    ctx->pc = 0x7F05172Cu;
    // 7F05172C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F051730:
    ctx->pc = 0x7F051730u;
    // 7F051730: lfd     f0, -10848(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051730u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10848);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051734:
    ctx->pc = 0x7F051734u;
    // 7F051734: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F051738:
    ctx->pc = 0x7F051738u;
    // 7F051738: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051738u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F05173C:
    ctx->pc = 0x7F05173Cu;
    // 7F05173C: fsub   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F05173Cu)) return;
    ppc_fsub(ctx, 1, 1, 2);

label_7F051740:
    ctx->pc = 0x7F051740u;
    // 7F051740: lfd     f2, -10856(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F051740u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10856);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051744:
    ctx->pc = 0x7F051744u;
    // 7F051744: fsub   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F051744u)) return;
    ppc_fsub(ctx, 0, 1, 0);

label_7F051748:
    ctx->pc = 0x7F051748u;
    // 7F051748: fmul   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F051748u)) return;
    ppc_fmul(ctx, 0, 2, 0);

label_7F05174C:
    ctx->pc = 0x7F05174Cu;
    // 7F05174C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F05174Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F051750:
    ctx->pc = 0x7F051750u;
    // 7F051750: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F051754:
    ctx->pc = 0x7F051754u;
    // 7F051754: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051758:
    ctx->pc = 0x7F051758u;
    // 7F051758: bl      0x7F02A62C
    {
            ctx->lr = 0x7F05175Cu;
            ctx->pc = 0x7F02A62Cu;
            return;
    }

label_7F05175C:
    ctx->pc = 0x7F05175Cu;
    ctx->downcount -= 66;
    // 7F05175C: subf   r3, r3, r30
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F051760:
    ctx->pc = 0x7F051760u;
    // 7F051760: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F051764:
    ctx->pc = 0x7F051764u;
    // 7F051764: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F051768:
    ctx->pc = 0x7F051768u;
    // 7F051768: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F05176C:
    ctx->pc = 0x7F05176Cu;
    // 7F05176C: stw     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051770:
    ctx->pc = 0x7F051770u;
    // 7F051770: addi    r5, r4, -10872
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10872);

label_7F051774:
    ctx->pc = 0x7F051774u;
    // 7F051774: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F051778:
    ctx->pc = 0x7F051778u;
    // 7F051778: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F051778u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F05177C:
    ctx->pc = 0x7F05177Cu;
    // 7F05177C: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051780:
    ctx->pc = 0x7F051780u;
    // 7F051780: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F051784:
    ctx->pc = 0x7F051784u;
    // 7F051784: lfd     f2, -10864(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051784u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10864);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051788:
    ctx->pc = 0x7F051788u;
    // 7F051788: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051788u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F05178C:
    ctx->pc = 0x7F05178Cu;
    // 7F05178C: fsub   f3, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F05178Cu)) return;
    ppc_fsub(ctx, 3, 0, 1);

label_7F051790:
    ctx->pc = 0x7F051790u;
    // 7F051790: lfd     f1, -10840(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051790u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10840);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051794:
    ctx->pc = 0x7F051794u;
    // 7F051794: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F051794u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F051798:
    ctx->pc = 0x7F051798u;
    // 7F051798: fmul   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F051798u)) return;
    ppc_fmul(ctx, 2, 2, 3);

label_7F05179C:
    ctx->pc = 0x7F05179Cu;
    // 7F05179C: fdiv   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F05179Cu)) return;
    ppc_fdiv(ctx, 1, 2, 1);

label_7F0517A0:
    ctx->pc = 0x7F0517A0u;
    // 7F0517A0: frsp    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0517A0u)) return;
    ppc_frsp(ctx, 1, 1);

label_7F0517A4:
    ctx->pc = 0x7F0517A4u;
    // 7F0517A4: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0517A4u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F0517A8:
    ctx->pc = 0x7F0517A8u;
    // 7F0517A8: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0517A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0517AC:
    ctx->pc = 0x7F0517ACu;
    // 7F0517AC: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0517B0:
    ctx->pc = 0x7F0517B0u;
    // 7F0517B0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0517B4:
    ctx->pc = 0x7F0517B4u;
    // 7F0517B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0517B8:
    ctx->pc = 0x7F0517B8u;
    // 7F0517B8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0517BC:
    ctx->pc = 0x7F0517BCu;
    // 7F0517BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0517C0:
    ctx->pc = 0x7F0517C0u;
    ctx->downcount -= 24;
    // 7F0517C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0517C4:
    ctx->pc = 0x7F0517C4u;
    // 7F0517C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0517C8:
    ctx->pc = 0x7F0517C8u;
    // 7F0517C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0517CC:
    ctx->pc = 0x7F0517CCu;
    // 7F0517CC: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0517CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F0517D0:
    ctx->pc = 0x7F0517D0u;
    // 7F0517D0: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0517D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F0517D0u);
        if (ctx->exception) return;
    }

label_7F0517D4:
    ctx->pc = 0x7F0517D4u;
    // 7F0517D4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0517D8:
    ctx->pc = 0x7F0517D8u;
    // 7F0517D8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0517DC:
    ctx->pc = 0x7F0517DCu;
    // 7F0517DC: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0517E0:
    ctx->pc = 0x7F0517E0u;
    // 7F0517E0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0517E4:
    ctx->pc = 0x7F0517E4u;
    // 7F0517E4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0517E8:
    ctx->pc = 0x7F0517E8u;
    // 7F0517E8: lfs     f1, -10832(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0517E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-10832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0517EC:
    ctx->pc = 0x7F0517ECu;
    // 7F0517EC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F0517F0:
    ctx->pc = 0x7F0517F0u;
    // 7F0517F0: lfs     f31, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0517F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F0517F4:
    ctx->pc = 0x7F0517F4u;
    // 7F0517F4: bl      0x7F3CA094
    {
            ctx->lr = 0x7F0517F8u;
            ctx->pc = 0x7F3CA094u;
            return;
    }

label_7F0517F8:
    ctx->pc = 0x7F0517F8u;
    ctx->downcount -= 7;
    // 7F0517F8: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0517FC:
    ctx->pc = 0x7F0517FCu;
    // 7F0517FC: stfs     f31, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0517FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F051800:
    ctx->pc = 0x7F051800u;
    // 7F051800: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051804:
    ctx->pc = 0x7F051804u;
    // 7F051804: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F051804u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F051808:
    ctx->pc = 0x7F051808u;
    // 7F051808: lfs     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051808u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F05180C:
    ctx->pc = 0x7F05180Cu;
    // 7F05180C: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F05180Cu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F051810:
    ctx->pc = 0x7F051810u;
    // 7F051810: bl      0x7F030A40
    {
            ctx->lr = 0x7F051814u;
            ctx->pc = 0x7F030A40u;
            return;
    }

label_7F051814:
    ctx->pc = 0x7F051814u;
    ctx->downcount -= 5;
    // 7F051814: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F051818:
    ctx->pc = 0x7F051818u;
    // 7F051818: lfd     f0, -10824(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051818u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10824);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F05181C:
    ctx->pc = 0x7F05181Cu;
    // 7F05181C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F05181Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F051820:
    ctx->pc = 0x7F051820u;
    // 7F051820: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F051824:
    ctx->pc = 0x7F051824u;
    // 7F051824: bc    4, 2, 0x7F051858
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051858;
        }
    }

label_7F051828:
    ctx->pc = 0x7F051828u;
    ctx->downcount -= 5;
    // 7F051828: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05182C:
    ctx->pc = 0x7F05182Cu;
    // 7F05182C: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F05182Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F051830:
    ctx->pc = 0x7F051830u;
    // 7F051830: lfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051830u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F051834:
    ctx->pc = 0x7F051834u;
    // 7F051834: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F051834u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F051838:
    ctx->pc = 0x7F051838u;
    // 7F051838: bl      0x7F030A40
    {
            ctx->lr = 0x7F05183Cu;
            ctx->pc = 0x7F030A40u;
            return;
    }

label_7F05183C:
    ctx->pc = 0x7F05183Cu;
    ctx->downcount -= 5;
    // 7F05183C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F051840:
    ctx->pc = 0x7F051840u;
    // 7F051840: lfd     f0, -10824(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051840u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10824);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051844:
    ctx->pc = 0x7F051844u;
    // 7F051844: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F051844u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F051848:
    ctx->pc = 0x7F051848u;
    // 7F051848: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F05184C:
    ctx->pc = 0x7F05184Cu;
    // 7F05184C: bc    4, 2, 0x7F051858
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051858;
        }
    }

label_7F051850:
    ctx->pc = 0x7F051850u;
    ctx->downcount -= 2;
    // 7F051850: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F051854:
    ctx->pc = 0x7F051854u;
    // 7F051854: b       0x7F05185C
    {
            goto label_7F05185C;
    }

label_7F051858:
    ctx->pc = 0x7F051858u;
    ctx->downcount -= 1;
    // 7F051858: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F05185C:
    ctx->pc = 0x7F05185Cu;
    ctx->downcount -= 18;
    // 7F05185C: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F05185Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F05185Cu);
        if (ctx->exception) return;
    }

label_7F051860:
    ctx->pc = 0x7F051860u;
    // 7F051860: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051860u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051864:
    ctx->pc = 0x7F051864u;
    // 7F051864: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F051868:
    ctx->pc = 0x7F051868u;
    // 7F051868: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05186C:
    ctx->pc = 0x7F05186Cu;
    // 7F05186C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F051870:
    ctx->pc = 0x7F051870u;
    // 7F051870: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F051874:
    ctx->pc = 0x7F051874u;
    // 7F051874: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F051878:
    ctx->pc = 0x7F051878u;
    ctx->downcount -= 14;
    // 7F051878: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F05187C:
    ctx->pc = 0x7F05187Cu;
    // 7F05187C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F051880:
    ctx->pc = 0x7F051880u;
    // 7F051880: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051884:
    ctx->pc = 0x7F051884u;
    // 7F051884: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051884u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F051888:
    ctx->pc = 0x7F051888u;
    // 7F051888: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F051888u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F051888u);
        if (ctx->exception) return;
    }

label_7F05188C:
    ctx->pc = 0x7F05188Cu;
    // 7F05188C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F051890:
    ctx->pc = 0x7F051890u;
    // 7F051890: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F051890u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F051894:
    ctx->pc = 0x7F051894u;
    // 7F051894: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051898:
    ctx->pc = 0x7F051898u;
    // 7F051898: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F05189C:
    ctx->pc = 0x7F05189Cu;
    // 7F05189C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0518A0:
    ctx->pc = 0x7F0518A0u;
    // 7F0518A0: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0518A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0518A4:
    ctx->pc = 0x7F0518A4u;
    // 7F0518A4: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F0518A4u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_7F0518A8:
    ctx->pc = 0x7F0518A8u;
    // 7F0518A8: lfs     f3, -10832(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0518A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F0518AC:
    ctx->pc = 0x7F0518ACu;
    // 7F0518AC: bl      0x7F3C9BB0
    {
            ctx->lr = 0x7F0518B0u;
            ctx->pc = 0x7F3C9BB0u;
            return;
    }

label_7F0518B0:
    ctx->pc = 0x7F0518B0u;
    ctx->downcount -= 6;
    // 7F0518B0: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0518B4:
    ctx->pc = 0x7F0518B4u;
    // 7F0518B4: stfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0518B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0518B8:
    ctx->pc = 0x7F0518B8u;
    // 7F0518B8: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0518BC:
    ctx->pc = 0x7F0518BCu;
    // 7F0518BC: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0518BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0518C0:
    ctx->pc = 0x7F0518C0u;
    // 7F0518C0: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F0518C0u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_7F0518C4:
    ctx->pc = 0x7F0518C4u;
    // 7F0518C4: bl      0x7F030A40
    {
            ctx->lr = 0x7F0518C8u;
            ctx->pc = 0x7F030A40u;
            return;
    }

label_7F0518C8:
    ctx->pc = 0x7F0518C8u;
    ctx->downcount -= 14;
    // 7F0518C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0518CC:
    ctx->pc = 0x7F0518CCu;
    // 7F0518CC: lfd     f0, -10824(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0518CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10824);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0518D0:
    ctx->pc = 0x7F0518D0u;
    // 7F0518D0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0518D0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0518D4:
    ctx->pc = 0x7F0518D4u;
    // 7F0518D4: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F0518D8:
    ctx->pc = 0x7F0518D8u;
    // 7F0518D8: mfcr    r0
    ctx->gpr[0] = ctx->cr;

label_7F0518DC:
    ctx->pc = 0x7F0518DCu;
    // 7F0518DC: rlwinm r3, r0, 3, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0x00000001u;
    }

label_7F0518E0:
    ctx->pc = 0x7F0518E0u;
    // 7F0518E0: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0518E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F0518E0u);
        if (ctx->exception) return;
    }

label_7F0518E4:
    ctx->pc = 0x7F0518E4u;
    // 7F0518E4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0518E8:
    ctx->pc = 0x7F0518E8u;
    // 7F0518E8: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0518E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0518EC:
    ctx->pc = 0x7F0518ECu;
    // 7F0518EC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0518F0:
    ctx->pc = 0x7F0518F0u;
    // 7F0518F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0518F4:
    ctx->pc = 0x7F0518F4u;
    // 7F0518F4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0518F8:
    ctx->pc = 0x7F0518F8u;
    // 7F0518F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0518FC:
    ctx->pc = 0x7F0518FCu;
    ctx->downcount -= 11;
    // 7F0518FC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F051900:
    ctx->pc = 0x7F051900u;
    // 7F051900: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F051904:
    ctx->pc = 0x7F051904u;
    // 7F051904: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F051908:
    ctx->pc = 0x7F051908u;
    // 7F051908: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F05190C:
    ctx->pc = 0x7F05190Cu;
    // 7F05190C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051910:
    ctx->pc = 0x7F051910u;
    // 7F051910: addi    r4, r4, 22140
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22140);

label_7F051914:
    ctx->pc = 0x7F051914u;
    // 7F051914: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F051918:
    ctx->pc = 0x7F051918u;
    // 7F051918: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F05191C:
    ctx->pc = 0x7F05191Cu;
    // 7F05191C: addi    r3, r5, -5708
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-5708);

label_7F051920:
    ctx->pc = 0x7F051920u;
    // 7F051920: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F051924:
    ctx->pc = 0x7F051924u;
    // 7F051924: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F051928u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F051928:
    ctx->pc = 0x7F051928u;
    ctx->downcount -= 2;
    // 7F051928: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F05192C:
    ctx->pc = 0x7F05192Cu;
    // 7F05192C: bl      0x7F3CC708
    {
            ctx->lr = 0x7F051930u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F051930:
    ctx->pc = 0x7F051930u;
    ctx->downcount -= 8;
    // 7F051930: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F051934:
    ctx->pc = 0x7F051934u;
    // 7F051934: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051938:
    ctx->pc = 0x7F051938u;
    // 7F051938: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05193C:
    ctx->pc = 0x7F05193Cu;
    // 7F05193C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F051940:
    ctx->pc = 0x7F051940u;
    // 7F051940: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F051944:
    ctx->pc = 0x7F051944u;
    // 7F051944: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F051948:
    ctx->pc = 0x7F051948u;
    // 7F051948: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F05194C:
    ctx->pc = 0x7F05194Cu;
    ctx->downcount -= 18;
    // 7F05194C: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F051950:
    ctx->pc = 0x7F051950u;
    // 7F051950: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F051954:
    ctx->pc = 0x7F051954u;
    // 7F051954: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051958:
    ctx->pc = 0x7F051958u;
    // 7F051958: stmw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F05195C:
    ctx->pc = 0x7F05195Cu;
    // 7F05195C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F051960:
    ctx->pc = 0x7F051960u;
    // 7F051960: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F051964:
    ctx->pc = 0x7F051964u;
    // 7F051964: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F051968:
    ctx->pc = 0x7F051968u;
    // 7F051968: bl      0x7F3B2EB8
    {
            ctx->lr = 0x7F05196Cu;
            ctx->pc = 0x7F3B2EB8u;
            return;
    }

label_7F05196C:
    ctx->pc = 0x7F05196Cu;
    ctx->downcount -= 34;
    // 7F05196C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F051970:
    ctx->pc = 0x7F051970u;
    // 7F051970: lfsu     f2, 27696(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051970u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
        ctx->gpr[4] = ea;
    }

label_7F051974:
    ctx->pc = 0x7F051974u;
    // 7F051974: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F051978:
    ctx->pc = 0x7F051978u;
    // 7F051978: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F05197C:
    ctx->pc = 0x7F05197Cu;
    // 7F05197C: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F05197Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F051980:
    ctx->pc = 0x7F051980u;
    // 7F051980: rlwinm r0, r31, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 1u) & 0xFFFFFFFEu;
    }

label_7F051984:
    ctx->pc = 0x7F051984u;
    // 7F051984: lfs     f0, -10816(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051984u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10816);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F051988:
    ctx->pc = 0x7F051988u;
    // 7F051988: add   r6, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F05198C:
    ctx->pc = 0x7F05198Cu;
    // 7F05198C: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F05198Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F051990:
    ctx->pc = 0x7F051990u;
    // 7F051990: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F051994:
    ctx->pc = 0x7F051994u;
    // 7F051994: rlwinm r4, r31, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F051998:
    ctx->pc = 0x7F051998u;
    // 7F051998: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F05199C:
    ctx->pc = 0x7F05199Cu;
    // 7F05199C: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F05199Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0519A0:
    ctx->pc = 0x7F0519A0u;
    // 7F0519A0: add   r5, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F0519A4:
    ctx->pc = 0x7F0519A4u;
    // 7F0519A4: lfd     f1, -10872(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0519A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10872);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0519A8:
    ctx->pc = 0x7F0519A8u;
    // 7F0519A8: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0519AC:
    ctx->pc = 0x7F0519ACu;
    // 7F0519AC: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0519ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0519B0:
    ctx->pc = 0x7F0519B0u;
    // 7F0519B0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0519B4:
    ctx->pc = 0x7F0519B4u;
    // 7F0519B4: sth     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F0519B8:
    ctx->pc = 0x7F0519B8u;
    // 7F0519B8: sth     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F0519BC:
    ctx->pc = 0x7F0519BCu;
    // 7F0519BC: lha     r7, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0519C0:
    ctx->pc = 0x7F0519C0u;
    // 7F0519C0: lwz     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0519C4:
    ctx->pc = 0x7F0519C4u;
    // 7F0519C4: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0519C8:
    ctx->pc = 0x7F0519C8u;
    // 7F0519C8: add   r0, r7, r6
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0519CC:
    ctx->pc = 0x7F0519CCu;
    // 7F0519CC: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0519D0:
    ctx->pc = 0x7F0519D0u;
    // 7F0519D0: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0519D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0519D4:
    ctx->pc = 0x7F0519D4u;
    // 7F0519D4: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0519D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0519D8:
    ctx->pc = 0x7F0519D8u;
    // 7F0519D8: lwz     r0, 136(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0519DC:
    ctx->pc = 0x7F0519DCu;
    // 7F0519DC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0519E0:
    ctx->pc = 0x7F0519E0u;
    // 7F0519E0: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0519E4:
    ctx->pc = 0x7F0519E4u;
    // 7F0519E4: lfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0519E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0519E8:
    ctx->pc = 0x7F0519E8u;
    // 7F0519E8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0519E8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0519EC:
    ctx->pc = 0x7F0519ECu;
    // 7F0519EC: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0519ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0519F0:
    ctx->pc = 0x7F0519F0u;
    // 7F0519F0: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0519F4u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0519F4:
    ctx->pc = 0x7F0519F4u;
    ctx->downcount -= 4;
    // 7F0519F4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0519F8:
    ctx->pc = 0x7F0519F8u;
    // 7F0519F8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0519FC:
    ctx->pc = 0x7F0519FCu;
    // 7F0519FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F051A00:
    ctx->pc = 0x7F051A00u;
    // 7F051A00: bl      0x7F3B3648
    {
            ctx->lr = 0x7F051A04u;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F051A04:
    ctx->pc = 0x7F051A04u;
    ctx->downcount -= 6;
    // 7F051A04: rlwinm r4, r31, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_7F051A08:
    ctx->pc = 0x7F051A08u;
    // 7F051A08: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F051A0C:
    ctx->pc = 0x7F051A0Cu;
    // 7F051A0C: addi    r5, r4, 88
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(88);

label_7F051A10:
    ctx->pc = 0x7F051A10u;
    // 7F051A10: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F051A14:
    ctx->pc = 0x7F051A14u;
    // 7F051A14: add   r5, r30, r5
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F051A18:
    ctx->pc = 0x7F051A18u;
    // 7F051A18: bl      0x800261B4
    {
            ctx->lr = 0x7F051A1Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F051A1C:
    ctx->pc = 0x7F051A1Cu;
    ctx->downcount -= 2;
    // 7F051A1C: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F051A20:
    ctx->pc = 0x7F051A20u;
    // 7F051A20: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F051A24u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F051A24:
    ctx->pc = 0x7F051A24u;
    ctx->downcount -= 16;
    // 7F051A24: lmw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F051A28:
    ctx->pc = 0x7F051A28u;
    // 7F051A28: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051A2C:
    ctx->pc = 0x7F051A2Cu;
    // 7F051A2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F051A30:
    ctx->pc = 0x7F051A30u;
    // 7F051A30: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F051A34:
    ctx->pc = 0x7F051A34u;
    // 7F051A34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F051A38:
    ctx->pc = 0x7F051A38u;
    ctx->downcount -= 22;
    // 7F051A38: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F051A3C:
    ctx->pc = 0x7F051A3Cu;
    // 7F051A3C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F051A40:
    ctx->pc = 0x7F051A40u;
    // 7F051A40: addi    r4, r3, 13880
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F051A44:
    ctx->pc = 0x7F051A44u;
    // 7F051A44: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F051A48:
    ctx->pc = 0x7F051A48u;
    // 7F051A48: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F051A4C:
    ctx->pc = 0x7F051A4Cu;
    // 7F051A4C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F051A50:
    ctx->pc = 0x7F051A50u;
    // 7F051A50: addi    r5, r3, -10872
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-10872);

label_7F051A54:
    ctx->pc = 0x7F051A54u;
    // 7F051A54: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F051A58:
    ctx->pc = 0x7F051A58u;
    // 7F051A58: lwz     r6, 272(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(272);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F051A5C:
    ctx->pc = 0x7F051A5Cu;
    // 7F051A5C: addi    r4, r4, 27696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27696);

label_7F051A60:
    ctx->pc = 0x7F051A60u;
    // 7F051A60: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051A64:
    ctx->pc = 0x7F051A64u;
    // 7F051A64: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F051A68:
    ctx->pc = 0x7F051A68u;
    // 7F051A68: xoris   r0, r6, 0x8000
    ctx->gpr[0] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F051A6C:
    ctx->pc = 0x7F051A6Cu;
    // 7F051A6C: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F051A6Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051A70:
    ctx->pc = 0x7F051A70u;
    // 7F051A70: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051A74:
    ctx->pc = 0x7F051A74u;
    // 7F051A74: lwz     r0, 5712(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5712);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051A78:
    ctx->pc = 0x7F051A78u;
    // 7F051A78: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051A78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051A7C:
    ctx->pc = 0x7F051A7Cu;
    // 7F051A7C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F051A7Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F051A80:
    ctx->pc = 0x7F051A80u;
    // 7F051A80: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051A80u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F051A84:
    ctx->pc = 0x7F051A84u;
    // 7F051A84: lwz     r5, 268(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(268);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F051A88:
    ctx->pc = 0x7F051A88u;
    // 7F051A88: cmpw    r0, r5
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

label_7F051A8C:
    ctx->pc = 0x7F051A8Cu;
    // 7F051A8C: bc    4, 1, 0x7F051A94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051A94;
        }
    }

label_7F051A90:
    ctx->pc = 0x7F051A90u;
    ctx->downcount -= 1;
    // 7F051A90: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F051A94:
    ctx->pc = 0x7F051A94u;
    ctx->downcount -= 20;
    // 7F051A94: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F051A98:
    ctx->pc = 0x7F051A98u;
    // 7F051A98: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F051A9C:
    ctx->pc = 0x7F051A9Cu;
    // 7F051A9C: lwz     r0, 5716(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5716);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051AA0:
    ctx->pc = 0x7F051AA0u;
    // 7F051AA0: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F051AA4:
    ctx->pc = 0x7F051AA4u;
    // 7F051AA4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F051AA8:
    ctx->pc = 0x7F051AA8u;
    // 7F051AA8: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F051AAC:
    ctx->pc = 0x7F051AACu;
    // 7F051AAC: addi    r6, r3, -10872
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-10872);

label_7F051AB0:
    ctx->pc = 0x7F051AB0u;
    // 7F051AB0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F051AB4:
    ctx->pc = 0x7F051AB4u;
    // 7F051AB4: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F051AB8:
    ctx->pc = 0x7F051AB8u;
    // 7F051AB8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F051ABC:
    ctx->pc = 0x7F051ABCu;
    // 7F051ABC: lfd     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F051ABCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051AC0:
    ctx->pc = 0x7F051AC0u;
    // 7F051AC0: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051AC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051AC4:
    ctx->pc = 0x7F051AC4u;
    // 7F051AC4: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051AC8:
    ctx->pc = 0x7F051AC8u;
    // 7F051AC8: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F051AC8u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_7F051ACC:
    ctx->pc = 0x7F051ACCu;
    // 7F051ACC: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F051AD0:
    ctx->pc = 0x7F051AD0u;
    // 7F051AD0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051AD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051AD4:
    ctx->pc = 0x7F051AD4u;
    // 7F051AD4: stfs     f2, 27696(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051AD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27696);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F051AD8:
    ctx->pc = 0x7F051AD8u;
    // 7F051AD8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F051AD8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F051ADC:
    ctx->pc = 0x7F051ADCu;
    // 7F051ADC: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F051ADCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F051AE0:
    ctx->pc = 0x7F051AE0u;
    // 7F051AE0: bc    4, 0, 0x7F051AF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051AF4;
        }
    }

label_7F051AE4:
    ctx->pc = 0x7F051AE4u;
    ctx->downcount -= 4;
    // 7F051AE4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051AE8:
    ctx->pc = 0x7F051AE8u;
    // 7F051AE8: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F051AEC:
    ctx->pc = 0x7F051AECu;
    // 7F051AEC: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051AECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051AF0:
    ctx->pc = 0x7F051AF0u;
    // 7F051AF0: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F051AF0u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_7F051AF4:
    ctx->pc = 0x7F051AF4u;
    ctx->downcount -= 7;
    // 7F051AF4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F051AF8:
    ctx->pc = 0x7F051AF8u;
    // 7F051AF8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F051AFC:
    ctx->pc = 0x7F051AFCu;
    // 7F051AFC: stfs     f2, 27696(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051AFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27696);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F051B00:
    ctx->pc = 0x7F051B00u;
    // 7F051B00: lwz     r0, 5720(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051B04:
    ctx->pc = 0x7F051B04u;
    // 7F051B04: lwz     r5, 276(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(276);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F051B08:
    ctx->pc = 0x7F051B08u;
    // 7F051B08: cmpw    r0, r5
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

label_7F051B0C:
    ctx->pc = 0x7F051B0Cu;
    // 7F051B0C: bc    4, 1, 0x7F051B14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051B14;
        }
    }

label_7F051B10:
    ctx->pc = 0x7F051B10u;
    ctx->downcount -= 1;
    // 7F051B10: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F051B14:
    ctx->pc = 0x7F051B14u;
    ctx->downcount -= 21;
    // 7F051B14: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F051B18:
    ctx->pc = 0x7F051B18u;
    // 7F051B18: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F051B1C:
    ctx->pc = 0x7F051B1Cu;
    // 7F051B1C: lwz     r0, 5724(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5724);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051B20:
    ctx->pc = 0x7F051B20u;
    // 7F051B20: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F051B24:
    ctx->pc = 0x7F051B24u;
    // 7F051B24: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F051B28:
    ctx->pc = 0x7F051B28u;
    // 7F051B28: stw     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F051B2C:
    ctx->pc = 0x7F051B2Cu;
    // 7F051B2C: addi    r6, r3, -10872
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-10872);

label_7F051B30:
    ctx->pc = 0x7F051B30u;
    // 7F051B30: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F051B34:
    ctx->pc = 0x7F051B34u;
    // 7F051B34: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F051B38:
    ctx->pc = 0x7F051B38u;
    // 7F051B38: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F051B3C:
    ctx->pc = 0x7F051B3Cu;
    // 7F051B3C: lfd     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F051B3Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051B40:
    ctx->pc = 0x7F051B40u;
    // 7F051B40: addi    r3, r3, 27696
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(27696);

label_7F051B44:
    ctx->pc = 0x7F051B44u;
    // 7F051B44: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051B44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051B48:
    ctx->pc = 0x7F051B48u;
    // 7F051B48: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051B4C:
    ctx->pc = 0x7F051B4Cu;
    // 7F051B4C: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F051B4Cu)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_7F051B50:
    ctx->pc = 0x7F051B50u;
    // 7F051B50: stw     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F051B54:
    ctx->pc = 0x7F051B54u;
    // 7F051B54: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051B54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051B58:
    ctx->pc = 0x7F051B58u;
    // 7F051B58: stfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051B58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F051B5C:
    ctx->pc = 0x7F051B5Cu;
    // 7F051B5C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F051B5Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F051B60:
    ctx->pc = 0x7F051B60u;
    // 7F051B60: fcmpo   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F051B60u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], true);

label_7F051B64:
    ctx->pc = 0x7F051B64u;
    // 7F051B64: bc    4, 0, 0x7F051B78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051B78;
        }
    }

label_7F051B68:
    ctx->pc = 0x7F051B68u;
    ctx->downcount -= 4;
    // 7F051B68: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051B6C:
    ctx->pc = 0x7F051B6Cu;
    // 7F051B6C: stw     r4, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F051B70:
    ctx->pc = 0x7F051B70u;
    // 7F051B70: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F051B70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F051B74:
    ctx->pc = 0x7F051B74u;
    // 7F051B74: fsubs   f2, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F051B74u)) return;
    ppc_fsubs(ctx, 2, 0, 1);

label_7F051B78:
    ctx->pc = 0x7F051B78u;
    ctx->downcount -= 3;
    // 7F051B78: stfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051B78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F051B7C:
    ctx->pc = 0x7F051B7Cu;
    // 7F051B7C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F051B80:
    ctx->pc = 0x7F051B80u;
    // 7F051B80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F051B84:
    ctx->pc = 0x7F051B84u;
    ctx->downcount -= 23;
    // 7F051B84: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F051B88:
    ctx->pc = 0x7F051B88u;
    // 7F051B88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F051B8C:
    ctx->pc = 0x7F051B8Cu;
    // 7F051B8C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051B90:
    ctx->pc = 0x7F051B90u;
    // 7F051B90: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F051B94:
    ctx->pc = 0x7F051B94u;
    // 7F051B94: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F051B98:
    ctx->pc = 0x7F051B98u;
    // 7F051B98: rlwinm r28, r6, 2, 0, 29
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F051B9C:
    ctx->pc = 0x7F051B9Cu;
    // 7F051B9C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F051BA0:
    ctx->pc = 0x7F051BA0u;
    // 7F051BA0: add   r31, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F051BA4:
    ctx->pc = 0x7F051BA4u;
    // 7F051BA4: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F051BA8:
    ctx->pc = 0x7F051BA8u;
    // 7F051BA8: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F051BAC:
    ctx->pc = 0x7F051BACu;
    // 7F051BAC: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051BB0:
    ctx->pc = 0x7F051BB0u;
    // 7F051BB0: cmpwi   r4, 2
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

label_7F051BB4:
    ctx->pc = 0x7F051BB4u;
    // 7F051BB4: bc    12, 2, 0x7F051CE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051CE4;
        }
    }

label_7F051BB8:
    ctx->pc = 0x7F051BB8u;
    ctx->downcount -= 1;
    // 7F051BB8: bc    4, 0, 0x7F051BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051BCC;
        }
    }

label_7F051BBC:
    ctx->pc = 0x7F051BBCu;
    ctx->downcount -= 2;
    // 7F051BBC: cmpwi   r4, 0
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

label_7F051BC0:
    ctx->pc = 0x7F051BC0u;
    // 7F051BC0: bc    12, 2, 0x7F051BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051BD8;
        }
    }

label_7F051BC4:
    ctx->pc = 0x7F051BC4u;
    ctx->downcount -= 1;
    // 7F051BC4: bc    4, 0, 0x7F051C50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051C50;
        }
    }

label_7F051BC8:
    ctx->pc = 0x7F051BC8u;
    ctx->downcount -= 1;
    // 7F051BC8: b       0x7F051E14
    {
            goto label_7F051E14;
    }

label_7F051BCC:
    ctx->pc = 0x7F051BCCu;
    ctx->downcount -= 2;
    // 7F051BCC: cmpwi   r4, 4
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F051BD0:
    ctx->pc = 0x7F051BD0u;
    // 7F051BD0: bc    4, 0, 0x7F051E14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051E14;
        }
    }

label_7F051BD4:
    ctx->pc = 0x7F051BD4u;
    ctx->downcount -= 1;
    // 7F051BD4: b       0x7F051D54
    {
            goto label_7F051D54;
    }

label_7F051BD8:
    ctx->pc = 0x7F051BD8u;
    ctx->downcount -= 2;
    // 7F051BD8: cmpwi   r26, 0
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

label_7F051BDC:
    ctx->pc = 0x7F051BDCu;
    // 7F051BDC: bc    4, 2, 0x7F051BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051BEC;
        }
    }

label_7F051BE0:
    ctx->pc = 0x7F051BE0u;
    ctx->downcount -= 2;
    // 7F051BE0: cmpwi   r27, 0
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

label_7F051BE4:
    ctx->pc = 0x7F051BE4u;
    // 7F051BE4: bc    4, 2, 0x7F051BEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051BEC;
        }
    }

label_7F051BE8:
    ctx->pc = 0x7F051BE8u;
    ctx->downcount -= 1;
    // 7F051BE8: bl      0x7F051A38
    {
            ctx->lr = 0x7F051BECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F051A38u;
                return;
            }
            goto label_7F051A38;
    }

label_7F051BEC:
    ctx->pc = 0x7F051BECu;
    ctx->downcount -= 3;
    // 7F051BEC: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051BF0:
    ctx->pc = 0x7F051BF0u;
    // 7F051BF0: cmpwi   r0, 0
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

label_7F051BF4:
    ctx->pc = 0x7F051BF4u;
    // 7F051BF4: bc    12, 2, 0x7F051C2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051C2C;
        }
    }

label_7F051BF8:
    ctx->pc = 0x7F051BF8u;
    ctx->downcount -= 13;
    // 7F051BF8: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051BFC:
    ctx->pc = 0x7F051BFCu;
    // 7F051BFC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F051C00:
    ctx->pc = 0x7F051C00u;
    // 7F051C00: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051C04:
    ctx->pc = 0x7F051C04u;
    // 7F051C04: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051C08:
    ctx->pc = 0x7F051C08u;
    // 7F051C08: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051C0C:
    ctx->pc = 0x7F051C0Cu;
    // 7F051C0C: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051C10:
    ctx->pc = 0x7F051C10u;
    // 7F051C10: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051C14:
    ctx->pc = 0x7F051C14u;
    // 7F051C14: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051C18:
    ctx->pc = 0x7F051C18u;
    // 7F051C18: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051C1C:
    ctx->pc = 0x7F051C1Cu;
    // 7F051C1C: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051C20:
    ctx->pc = 0x7F051C20u;
    // 7F051C20: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051C24:
    ctx->pc = 0x7F051C24u;
    // 7F051C24: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051C28:
    ctx->pc = 0x7F051C28u;
    // 7F051C28: b       0x7F051E14
    {
            goto label_7F051E14;
    }

label_7F051C2C:
    ctx->pc = 0x7F051C2Cu;
    ctx->downcount -= 3;
    // 7F051C2C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051C30:
    ctx->pc = 0x7F051C30u;
    // 7F051C30: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F051C34:
    ctx->pc = 0x7F051C34u;
    // 7F051C34: bl      0x7F05155C
    {
            ctx->lr = 0x7F051C38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F05155Cu;
                return;
            }
            goto label_7F05155C;
    }

label_7F051C38:
    ctx->pc = 0x7F051C38u;
    ctx->downcount -= 2;
    // 7F051C38: cmpwi   r3, 0
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

label_7F051C3C:
    ctx->pc = 0x7F051C3Cu;
    // 7F051C3C: bc    12, 2, 0x7F051E14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051E14;
        }
    }

label_7F051C40:
    ctx->pc = 0x7F051C40u;
    ctx->downcount -= 4;
    // 7F051C40: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051C44:
    ctx->pc = 0x7F051C44u;
    // 7F051C44: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F051C48:
    ctx->pc = 0x7F051C48u;
    // 7F051C48: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051C4C:
    ctx->pc = 0x7F051C4Cu;
    // 7F051C4C: b       0x7F051E14
    {
            goto label_7F051E14;
    }

label_7F051C50:
    ctx->pc = 0x7F051C50u;
    ctx->downcount -= 3;
    // 7F051C50: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051C54:
    ctx->pc = 0x7F051C54u;
    // 7F051C54: cmpwi   r0, 0
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

label_7F051C58:
    ctx->pc = 0x7F051C58u;
    // 7F051C58: bc    12, 2, 0x7F051C8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051C8C;
        }
    }

label_7F051C5C:
    ctx->pc = 0x7F051C5Cu;
    ctx->downcount -= 12;
    // 7F051C5C: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F051C60:
    ctx->pc = 0x7F051C60u;
    // 7F051C60: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051C64:
    ctx->pc = 0x7F051C64u;
    // 7F051C64: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051C68:
    ctx->pc = 0x7F051C68u;
    // 7F051C68: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051C6C:
    ctx->pc = 0x7F051C6Cu;
    // 7F051C6C: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051C70:
    ctx->pc = 0x7F051C70u;
    // 7F051C70: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051C74:
    ctx->pc = 0x7F051C74u;
    // 7F051C74: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051C78:
    ctx->pc = 0x7F051C78u;
    // 7F051C78: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051C7C:
    ctx->pc = 0x7F051C7Cu;
    // 7F051C7C: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051C80:
    ctx->pc = 0x7F051C80u;
    // 7F051C80: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051C84:
    ctx->pc = 0x7F051C84u;
    // 7F051C84: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051C88:
    ctx->pc = 0x7F051C88u;
    // 7F051C88: b       0x7F051E14
    {
            goto label_7F051E14;
    }

label_7F051C8C:
    ctx->pc = 0x7F051C8Cu;
    ctx->downcount -= 4;
    // 7F051C8C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F051C90:
    ctx->pc = 0x7F051C90u;
    // 7F051C90: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051C94:
    ctx->pc = 0x7F051C94u;
    // 7F051C94: lfs     f1, -10812(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051C94u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10812);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F051C98:
    ctx->pc = 0x7F051C98u;
    // 7F051C98: bl      0x7F051878
    {
            ctx->lr = 0x7F051C9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F051878u;
                return;
            }
            goto label_7F051878;
    }

label_7F051C9C:
    ctx->pc = 0x7F051C9Cu;
    ctx->downcount -= 2;
    // 7F051C9C: cmpwi   r3, 0
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

label_7F051CA0:
    ctx->pc = 0x7F051CA0u;
    // 7F051CA0: bc    12, 2, 0x7F051E14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051E14;
        }
    }

label_7F051CA4:
    ctx->pc = 0x7F051CA4u;
    ctx->downcount -= 15;
    // 7F051CA4: rlwinm r3, r27, 1, 0, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[27], 1u) & 0xFFFFFFFEu;
    }

label_7F051CA8:
    ctx->pc = 0x7F051CA8u;
    // 7F051CA8: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051CAC:
    ctx->pc = 0x7F051CACu;
    // 7F051CAC: add   r3, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F051CB0:
    ctx->pc = 0x7F051CB0u;
    // 7F051CB0: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051CB4:
    ctx->pc = 0x7F051CB4u;
    // 7F051CB4: lha     r7, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F051CB8:
    ctx->pc = 0x7F051CB8u;
    // 7F051CB8: li      r3, 1737
    ctx->gpr[3] = (u32)(s32)(1737);

label_7F051CBC:
    ctx->pc = 0x7F051CBCu;
    // 7F051CBC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F051CC0:
    ctx->pc = 0x7F051CC0u;
    // 7F051CC0: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F051CC4:
    ctx->pc = 0x7F051CC4u;
    // 7F051CC4: add   r0, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F051CC8:
    ctx->pc = 0x7F051CC8u;
    // 7F051CC8: sth     r0, 42(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F051CCC:
    ctx->pc = 0x7F051CCCu;
    // 7F051CCC: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051CD0:
    ctx->pc = 0x7F051CD0u;
    // 7F051CD0: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F051CD4:
    ctx->pc = 0x7F051CD4u;
    // 7F051CD4: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051CD8:
    ctx->pc = 0x7F051CD8u;
    // 7F051CD8: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051CDC:
    ctx->pc = 0x7F051CDCu;
    // 7F051CDC: bl      0x7F0513A0
    {
            ctx->lr = 0x7F051CE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F051CE0:
    ctx->pc = 0x7F051CE0u;
    ctx->downcount -= 1;
    // 7F051CE0: b       0x7F051E14
    {
            goto label_7F051E14;
    }

label_7F051CE4:
    ctx->pc = 0x7F051CE4u;
    ctx->downcount -= 3;
    // 7F051CE4: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051CE8:
    ctx->pc = 0x7F051CE8u;
    // 7F051CE8: cmpwi   r0, 0
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

label_7F051CEC:
    ctx->pc = 0x7F051CECu;
    // 7F051CEC: bc    12, 2, 0x7F051D20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051D20;
        }
    }

label_7F051CF0:
    ctx->pc = 0x7F051CF0u;
    ctx->downcount -= 12;
    // 7F051CF0: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F051CF4:
    ctx->pc = 0x7F051CF4u;
    // 7F051CF4: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051CF8:
    ctx->pc = 0x7F051CF8u;
    // 7F051CF8: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051CFC:
    ctx->pc = 0x7F051CFCu;
    // 7F051CFC: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051D00:
    ctx->pc = 0x7F051D00u;
    // 7F051D00: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051D04:
    ctx->pc = 0x7F051D04u;
    // 7F051D04: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051D08:
    ctx->pc = 0x7F051D08u;
    // 7F051D08: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051D0C:
    ctx->pc = 0x7F051D0Cu;
    // 7F051D0C: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051D10:
    ctx->pc = 0x7F051D10u;
    // 7F051D10: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051D14:
    ctx->pc = 0x7F051D14u;
    // 7F051D14: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051D18:
    ctx->pc = 0x7F051D18u;
    // 7F051D18: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051D1C:
    ctx->pc = 0x7F051D1Cu;
    // 7F051D1C: b       0x7F051E14
    {
            goto label_7F051E14;
    }

label_7F051D20:
    ctx->pc = 0x7F051D20u;
    ctx->downcount -= 2;
    // 7F051D20: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F051D24:
    ctx->pc = 0x7F051D24u;
    // 7F051D24: bl      0x7F05194C
    {
            ctx->lr = 0x7F051D28u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F05194Cu;
                return;
            }
            goto label_7F05194C;
    }

label_7F051D28:
    ctx->pc = 0x7F051D28u;
    ctx->downcount -= 5;
    // 7F051D28: rlwinm r4, r27, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[27], 4u) & 0xFFFFFFF0u;
    }

label_7F051D2C:
    ctx->pc = 0x7F051D2Cu;
    // 7F051D2C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051D30:
    ctx->pc = 0x7F051D30u;
    // 7F051D30: addi    r4, r4, 88
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(88);

label_7F051D34:
    ctx->pc = 0x7F051D34u;
    // 7F051D34: add   r4, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F051D38:
    ctx->pc = 0x7F051D38u;
    // 7F051D38: bl      0x7F0517C0
    {
            ctx->lr = 0x7F051D3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0517C0u;
                return;
            }
            goto label_7F0517C0;
    }

label_7F051D3C:
    ctx->pc = 0x7F051D3Cu;
    ctx->downcount -= 2;
    // 7F051D3C: cmpwi   r3, 0
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

label_7F051D40:
    ctx->pc = 0x7F051D40u;
    // 7F051D40: bc    12, 2, 0x7F051E14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051E14;
        }
    }

label_7F051D44:
    ctx->pc = 0x7F051D44u;
    ctx->downcount -= 4;
    // 7F051D44: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051D48:
    ctx->pc = 0x7F051D48u;
    // 7F051D48: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F051D4C:
    ctx->pc = 0x7F051D4Cu;
    // 7F051D4C: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051D50:
    ctx->pc = 0x7F051D50u;
    // 7F051D50: b       0x7F051E14
    {
            goto label_7F051E14;
    }

label_7F051D54:
    ctx->pc = 0x7F051D54u;
    ctx->downcount -= 3;
    // 7F051D54: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051D58:
    ctx->pc = 0x7F051D58u;
    // 7F051D58: cmpwi   r0, 0
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

label_7F051D5C:
    ctx->pc = 0x7F051D5Cu;
    // 7F051D5C: bc    12, 2, 0x7F051D98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051D98;
        }
    }

label_7F051D60:
    ctx->pc = 0x7F051D60u;
    ctx->downcount -= 14;
    // 7F051D60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F051D64:
    ctx->pc = 0x7F051D64u;
    // 7F051D64: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F051D68:
    ctx->pc = 0x7F051D68u;
    // 7F051D68: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051D6C:
    ctx->pc = 0x7F051D6Cu;
    // 7F051D6C: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F051D70:
    ctx->pc = 0x7F051D70u;
    // 7F051D70: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051D74:
    ctx->pc = 0x7F051D74u;
    // 7F051D74: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051D78:
    ctx->pc = 0x7F051D78u;
    // 7F051D78: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F051D7C:
    ctx->pc = 0x7F051D7Cu;
    // 7F051D7C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051D80:
    ctx->pc = 0x7F051D80u;
    // 7F051D80: lwz     r4, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051D84:
    ctx->pc = 0x7F051D84u;
    // 7F051D84: lwz     r3, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051D88:
    ctx->pc = 0x7F051D88u;
    // 7F051D88: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F051D8C:
    ctx->pc = 0x7F051D8Cu;
    // 7F051D8C: stw     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F051D90:
    ctx->pc = 0x7F051D90u;
    // 7F051D90: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051D94:
    ctx->pc = 0x7F051D94u;
    // 7F051D94: b       0x7F051E14
    {
            goto label_7F051E14;
    }

label_7F051D98:
    ctx->pc = 0x7F051D98u;
    ctx->downcount -= 2;
    // 7F051D98: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F051D9C:
    ctx->pc = 0x7F051D9Cu;
    // 7F051D9C: bl      0x7F05194C
    {
            ctx->lr = 0x7F051DA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F05194Cu;
                return;
            }
            goto label_7F05194C;
    }

label_7F051DA0:
    ctx->pc = 0x7F051DA0u;
    ctx->downcount -= 4;
    // 7F051DA0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F051DA4:
    ctx->pc = 0x7F051DA4u;
    // 7F051DA4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051DA8:
    ctx->pc = 0x7F051DA8u;
    // 7F051DA8: lfs     f1, -10808(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051DA8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10808);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F051DAC:
    ctx->pc = 0x7F051DACu;
    // 7F051DAC: bl      0x7F051878
    {
            ctx->lr = 0x7F051DB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F051878u;
                return;
            }
            goto label_7F051878;
    }

label_7F051DB0:
    ctx->pc = 0x7F051DB0u;
    ctx->downcount -= 2;
    // 7F051DB0: cmpwi   r3, 0
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

label_7F051DB4:
    ctx->pc = 0x7F051DB4u;
    // 7F051DB4: bc    12, 2, 0x7F051DD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051DD8;
        }
    }

label_7F051DB8:
    ctx->pc = 0x7F051DB8u;
    ctx->downcount -= 4;
    // 7F051DB8: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051DBC:
    ctx->pc = 0x7F051DBCu;
    // 7F051DBC: addic.  r0, r3, -1
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

label_7F051DC0:
    ctx->pc = 0x7F051DC0u;
    // 7F051DC0: stw     r0, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051DC4:
    ctx->pc = 0x7F051DC4u;
    // 7F051DC4: bc    12, 1, 0x7F051DD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F051DD8;
        }
    }

label_7F051DC8:
    ctx->pc = 0x7F051DC8u;
    ctx->downcount -= 4;
    // 7F051DC8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F051DCC:
    ctx->pc = 0x7F051DCCu;
    // 7F051DCC: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051DD0:
    ctx->pc = 0x7F051DD0u;
    // 7F051DD0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F051DD4:
    ctx->pc = 0x7F051DD4u;
    // 7F051DD4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051DD8:
    ctx->pc = 0x7F051DD8u;
    ctx->downcount -= 6;
    // 7F051DD8: rlwinm r28, r27, 4, 0, 27
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[27], 4u) & 0xFFFFFFF0u;
    }

label_7F051DDC:
    ctx->pc = 0x7F051DDCu;
    // 7F051DDC: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051DE0:
    ctx->pc = 0x7F051DE0u;
    // 7F051DE0: add   r3, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F051DE4:
    ctx->pc = 0x7F051DE4u;
    // 7F051DE4: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051DE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F051DE8:
    ctx->pc = 0x7F051DE8u;
    // 7F051DE8: lfs     f2, 88(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051DE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F051DEC:
    ctx->pc = 0x7F051DECu;
    // 7F051DEC: bl      0x7F3C9B7C
    {
            ctx->lr = 0x7F051DF0u;
            ctx->pc = 0x7F3C9B7Cu;
            return;
    }

label_7F051DF0:
    ctx->pc = 0x7F051DF0u;
    ctx->downcount -= 7;
    // 7F051DF0: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051DF4:
    ctx->pc = 0x7F051DF4u;
    // 7F051DF4: add   r3, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F051DF8:
    ctx->pc = 0x7F051DF8u;
    // 7F051DF8: stfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051DF8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F051DFC:
    ctx->pc = 0x7F051DFCu;
    // 7F051DFC: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051E00:
    ctx->pc = 0x7F051E00u;
    // 7F051E00: lfs     f2, 96(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051E00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F051E04:
    ctx->pc = 0x7F051E04u;
    // 7F051E04: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051E04u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F051E08:
    ctx->pc = 0x7F051E08u;
    // 7F051E08: bl      0x7F3C9B7C
    {
            ctx->lr = 0x7F051E0Cu;
            ctx->pc = 0x7F3C9B7Cu;
            return;
    }

label_7F051E0C:
    ctx->pc = 0x7F051E0Cu;
    ctx->downcount -= 2;
    // 7F051E0C: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051E10:
    ctx->pc = 0x7F051E10u;
    // 7F051E10: stfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051E10u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F051E14:
    ctx->pc = 0x7F051E14u;
    ctx->downcount -= 16;
    // 7F051E14: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F051E18:
    ctx->pc = 0x7F051E18u;
    // 7F051E18: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051E1C:
    ctx->pc = 0x7F051E1Cu;
    // 7F051E1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F051E20:
    ctx->pc = 0x7F051E20u;
    // 7F051E20: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F051E24:
    ctx->pc = 0x7F051E24u;
    // 7F051E24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F051E28:
    ctx->pc = 0x7F051E28u;
    ctx->downcount -= 24;
    // 7F051E28: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F051E2C:
    ctx->pc = 0x7F051E2Cu;
    // 7F051E2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F051E30:
    ctx->pc = 0x7F051E30u;
    // 7F051E30: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051E34:
    ctx->pc = 0x7F051E34u;
    // 7F051E34: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F051E38:
    ctx->pc = 0x7F051E38u;
    // 7F051E38: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F051E3C:
    ctx->pc = 0x7F051E3Cu;
    // 7F051E3C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F051E40:
    ctx->pc = 0x7F051E40u;
    // 7F051E40: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F051E44:
    ctx->pc = 0x7F051E44u;
    // 7F051E44: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F051E48:
    ctx->pc = 0x7F051E48u;
    // 7F051E48: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051E4C:
    ctx->pc = 0x7F051E4Cu;
    // 7F051E4C: rlwinm r0, r0, 0, 16, 14
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFEFFFFu;
    }

label_7F051E50:
    ctx->pc = 0x7F051E50u;
    // 7F051E50: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051E54:
    ctx->pc = 0x7F051E54u;
    // 7F051E54: lwz     r0, 27688(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27688);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051E58:
    ctx->pc = 0x7F051E58u;
    // 7F051E58: cmpwi   r0, 3
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

label_7F051E5C:
    ctx->pc = 0x7F051E5Cu;
    // 7F051E5C: bc    4, 2, 0x7F051EA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051EA4;
        }
    }

label_7F051E60:
    ctx->pc = 0x7F051E60u;
    ctx->downcount -= 3;
    // 7F051E60: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051E64:
    ctx->pc = 0x7F051E64u;
    // 7F051E64: cmpwi   r0, 0
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

label_7F051E68:
    ctx->pc = 0x7F051E68u;
    // 7F051E68: bc    4, 2, 0x7F051E80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051E80;
        }
    }

label_7F051E6C:
    ctx->pc = 0x7F051E6Cu;
    ctx->downcount -= 5;
    // 7F051E6C: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F051E70:
    ctx->pc = 0x7F051E70u;
    // 7F051E70: add   r4, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F051E74:
    ctx->pc = 0x7F051E74u;
    // 7F051E74: lwz     r3, 136(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051E78:
    ctx->pc = 0x7F051E78u;
    // 7F051E78: addi    r0, r3, 100
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(100);

label_7F051E7C:
    ctx->pc = 0x7F051E7Cu;
    // 7F051E7C: stw     r0, 136(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051E80:
    ctx->pc = 0x7F051E80u;
    ctx->downcount -= 5;
    // 7F051E80: rlwinm r4, r31, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F051E84:
    ctx->pc = 0x7F051E84u;
    // 7F051E84: add   r3, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F051E88:
    ctx->pc = 0x7F051E88u;
    // 7F051E88: lwz     r0, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051E8C:
    ctx->pc = 0x7F051E8Cu;
    // 7F051E8C: cmpwi   r0, 4000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F051E90:
    ctx->pc = 0x7F051E90u;
    // 7F051E90: bc    4, 1, 0x7F051EA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051EA4;
        }
    }

label_7F051E94:
    ctx->pc = 0x7F051E94u;
    ctx->downcount -= 4;
    // 7F051E94: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F051E98:
    ctx->pc = 0x7F051E98u;
    // 7F051E98: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F051E9C:
    ctx->pc = 0x7F051E9Cu;
    // 7F051E9C: addi    r3, r3, 5728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5728);

label_7F051EA0:
    ctx->pc = 0x7F051EA0u;
    // 7F051EA0: stwx    r0, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051EA4:
    ctx->pc = 0x7F051EA4u;
    ctx->downcount -= 3;
    // 7F051EA4: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051EA8:
    ctx->pc = 0x7F051EA8u;
    // 7F051EA8: cmpwi   r0, 0
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

label_7F051EAC:
    ctx->pc = 0x7F051EACu;
    // 7F051EAC: bc    4, 2, 0x7F051F40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051F40;
        }
    }

label_7F051EB0:
    ctx->pc = 0x7F051EB0u;
    ctx->downcount -= 2;
    // 7F051EB0: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051EB4:
    ctx->pc = 0x7F051EB4u;
    // 7F051EB4: bl      0x7F0516A0
    {
            ctx->lr = 0x7F051EB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0516A0u;
                return;
            }
            goto label_7F0516A0;
    }

label_7F051EB8:
    ctx->pc = 0x7F051EB8u;
    ctx->downcount -= 3;
    // 7F051EB8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F051EBC:
    ctx->pc = 0x7F051EBCu;
    // 7F051EBC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F051EC0:
    ctx->pc = 0x7F051EC0u;
    // 7F051EC0: bl      0x7F05194C
    {
            ctx->lr = 0x7F051EC4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F05194Cu;
                return;
            }
            goto label_7F05194C;
    }

label_7F051EC4:
    ctx->pc = 0x7F051EC4u;
    ctx->downcount -= 10;
    // 7F051EC4: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051EC8:
    ctx->pc = 0x7F051EC8u;
    // 7F051EC8: rlwinm r31, r31, 4, 0, 27
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_7F051ECC:
    ctx->pc = 0x7F051ECCu;
    // 7F051ECC: addi    r3, r31, 88
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(88);

label_7F051ED0:
    ctx->pc = 0x7F051ED0u;
    // 7F051ED0: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F051ED4:
    ctx->pc = 0x7F051ED4u;
    // 7F051ED4: lfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051ED4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F051ED8:
    ctx->pc = 0x7F051ED8u;
    // 7F051ED8: add   r4, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F051EDC:
    ctx->pc = 0x7F051EDCu;
    // 7F051EDC: add   r3, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F051EE0:
    ctx->pc = 0x7F051EE0u;
    // 7F051EE0: stfs     f0, 92(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051EE0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F051EE4:
    ctx->pc = 0x7F051EE4u;
    // 7F051EE4: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051EE8:
    ctx->pc = 0x7F051EE8u;
    // 7F051EE8: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F051EECu;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F051EEC:
    ctx->pc = 0x7F051EECu;
    ctx->downcount -= 11;
    // 7F051EEC: lwz     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F051EF0:
    ctx->pc = 0x7F051EF0u;
    // 7F051EF0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F051EF4:
    ctx->pc = 0x7F051EF4u;
    // 7F051EF4: lwz     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F051EF8:
    ctx->pc = 0x7F051EF8u;
    // 7F051EF8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F051EFC:
    ctx->pc = 0x7F051EFCu;
    // 7F051EFC: lwz     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F051F00:
    ctx->pc = 0x7F051F00u;
    // 7F051F00: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051F04:
    ctx->pc = 0x7F051F04u;
    // 7F051F04: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F051F08:
    ctx->pc = 0x7F051F08u;
    // 7F051F08: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F051F0C:
    ctx->pc = 0x7F051F0Cu;
    // 7F051F0C: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F051F10:
    ctx->pc = 0x7F051F10u;
    // 7F051F10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051F14:
    ctx->pc = 0x7F051F14u;
    // 7F051F14: bl      0x7F05147C
    {
            ctx->lr = 0x7F051F18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F05147Cu;
                return;
            }
            goto label_7F05147C;
    }

label_7F051F18:
    ctx->pc = 0x7F051F18u;
    ctx->downcount -= 2;
    // 7F051F18: cmpwi   r3, 600
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(600);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F051F1C:
    ctx->pc = 0x7F051F1Cu;
    // 7F051F1C: bc    4, 1, 0x7F051F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051F54;
        }
    }

label_7F051F20:
    ctx->pc = 0x7F051F20u;
    ctx->downcount -= 8;
    // 7F051F20: add   r4, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F051F24:
    ctx->pc = 0x7F051F24u;
    // 7F051F24: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051F28:
    ctx->pc = 0x7F051F28u;
    // 7F051F28: lfs     f0, 88(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051F28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F051F2C:
    ctx->pc = 0x7F051F2Cu;
    // 7F051F2C: stfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051F2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F051F30:
    ctx->pc = 0x7F051F30u;
    // 7F051F30: lfs     f0, 96(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F051F30u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F051F34:
    ctx->pc = 0x7F051F34u;
    // 7F051F34: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051F38:
    ctx->pc = 0x7F051F38u;
    // 7F051F38: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F051F38u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F051F3C:
    ctx->pc = 0x7F051F3Cu;
    // 7F051F3C: b       0x7F051F54
    {
            goto label_7F051F54;
    }

label_7F051F40:
    ctx->pc = 0x7F051F40u;
    ctx->downcount -= 5;
    // 7F051F40: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F051F44:
    ctx->pc = 0x7F051F44u;
    // 7F051F44: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_7F051F48:
    ctx->pc = 0x7F051F48u;
    // 7F051F48: addi    r3, r3, 5728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5728);

label_7F051F4C:
    ctx->pc = 0x7F051F4Cu;
    // 7F051F4C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F051F50:
    ctx->pc = 0x7F051F50u;
    // 7F051F50: stwx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F051F54:
    ctx->pc = 0x7F051F54u;
    ctx->downcount -= 3;
    // 7F051F54: lwz     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051F58:
    ctx->pc = 0x7F051F58u;
    // 7F051F58: cmpwi   r0, 0
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

label_7F051F5C:
    ctx->pc = 0x7F051F5Cu;
    // 7F051F5C: bc    12, 2, 0x7F05205C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05205C;
        }
    }

label_7F051F60:
    ctx->pc = 0x7F051F60u;
    ctx->downcount -= 3;
    // 7F051F60: lwz     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051F64:
    ctx->pc = 0x7F051F64u;
    // 7F051F64: cmpwi   r0, 0
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

label_7F051F68:
    ctx->pc = 0x7F051F68u;
    // 7F051F68: bc    12, 2, 0x7F05205C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05205C;
        }
    }

label_7F051F6C:
    ctx->pc = 0x7F051F6Cu;
    ctx->downcount -= 3;
    // 7F051F6C: lwz     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051F70:
    ctx->pc = 0x7F051F70u;
    // 7F051F70: cmpwi   r0, 0
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

label_7F051F74:
    ctx->pc = 0x7F051F74u;
    // 7F051F74: bc    4, 2, 0x7F051F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051F7C;
        }
    }

label_7F051F78:
    ctx->pc = 0x7F051F78u;
    ctx->downcount -= 1;
    // 7F051F78: b       0x7F05205C
    {
            goto label_7F05205C;
    }

label_7F051F7C:
    ctx->pc = 0x7F051F7Cu;
    ctx->downcount -= 5;
    // 7F051F7C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F051F80:
    ctx->pc = 0x7F051F80u;
    // 7F051F80: addi    r4, r3, 27688
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(27688);

label_7F051F84:
    ctx->pc = 0x7F051F84u;
    // 7F051F84: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051F88:
    ctx->pc = 0x7F051F88u;
    // 7F051F88: cmpwi   r0, 2
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

label_7F051F8C:
    ctx->pc = 0x7F051F8Cu;
    // 7F051F8C: bc    4, 0, 0x7F051FC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051FC4;
        }
    }

label_7F051F90:
    ctx->pc = 0x7F051F90u;
    ctx->downcount -= 4;
    // 7F051F90: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F051F94:
    ctx->pc = 0x7F051F94u;
    // 7F051F94: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F051F98:
    ctx->pc = 0x7F051F98u;
    // 7F051F98: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051F9C:
    ctx->pc = 0x7F051F9Cu;
    // 7F051F9C: bl      0x7F0518FC
    {
            ctx->lr = 0x7F051FA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0518FCu;
                return;
            }
            goto label_7F0518FC;
    }

label_7F051FA0:
    ctx->pc = 0x7F051FA0u;
    ctx->downcount -= 9;
    // 7F051FA0: lwz     r4, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051FA4:
    ctx->pc = 0x7F051FA4u;
    // 7F051FA4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F051FA8:
    ctx->pc = 0x7F051FA8u;
    // 7F051FA8: li      r3, 1737
    ctx->gpr[3] = (u32)(s32)(1737);

label_7F051FAC:
    ctx->pc = 0x7F051FACu;
    // 7F051FAC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F051FB0:
    ctx->pc = 0x7F051FB0u;
    // 7F051FB0: stw     r4, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F051FB4:
    ctx->pc = 0x7F051FB4u;
    // 7F051FB4: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F051FB8:
    ctx->pc = 0x7F051FB8u;
    // 7F051FB8: stw     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F051FBC:
    ctx->pc = 0x7F051FBCu;
    // 7F051FBC: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051FC0:
    ctx->pc = 0x7F051FC0u;
    // 7F051FC0: bl      0x7F0513A0
    {
            ctx->lr = 0x7F051FC4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F051FC4:
    ctx->pc = 0x7F051FC4u;
    ctx->downcount -= 3;
    // 7F051FC4: lwz     r3, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F051FC8:
    ctx->pc = 0x7F051FC8u;
    // 7F051FC8: lwz     r4, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F051FCC:
    ctx->pc = 0x7F051FCCu;
    // 7F051FCC: bl      0x7F3CC908
    {
            ctx->lr = 0x7F051FD0u;
            ctx->pc = 0x7F3CC908u;
            return;
    }

label_7F051FD0:
    ctx->pc = 0x7F051FD0u;
    ctx->downcount -= 2;
    // 7F051FD0: cmpwi   r3, 0
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

label_7F051FD4:
    ctx->pc = 0x7F051FD4u;
    // 7F051FD4: bc    4, 1, 0x7F051FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051FE8;
        }
    }

label_7F051FD8:
    ctx->pc = 0x7F051FD8u;
    ctx->downcount -= 2;
    // 7F051FD8: cmpwi   r3, 48
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(48);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F051FDC:
    ctx->pc = 0x7F051FDCu;
    // 7F051FDC: bc    4, 1, 0x7F051FF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051FF4;
        }
    }

label_7F051FE0:
    ctx->pc = 0x7F051FE0u;
    ctx->downcount -= 2;
    // 7F051FE0: li      r3, 48
    ctx->gpr[3] = (u32)(s32)(48);

label_7F051FE4:
    ctx->pc = 0x7F051FE4u;
    // 7F051FE4: b       0x7F051FF4
    {
            goto label_7F051FF4;
    }

label_7F051FE8:
    ctx->pc = 0x7F051FE8u;
    ctx->downcount -= 2;
    // 7F051FE8: cmpwi   r3, -48
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-48);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F051FEC:
    ctx->pc = 0x7F051FECu;
    // 7F051FEC: bc    4, 0, 0x7F051FF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F051FF4;
        }
    }

label_7F051FF0:
    ctx->pc = 0x7F051FF0u;
    ctx->downcount -= 1;
    // 7F051FF0: li      r3, -48
    ctx->gpr[3] = (u32)(s32)(-48);

label_7F051FF4:
    ctx->pc = 0x7F051FF4u;
    ctx->downcount -= 9;
    // 7F051FF4: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F051FF8:
    ctx->pc = 0x7F051FF8u;
    // 7F051FF8: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F051FFC:
    ctx->pc = 0x7F051FFCu;
    // 7F051FFC: stw     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052000:
    ctx->pc = 0x7F052000u;
    // 7F052000: lwz     r3, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052004:
    ctx->pc = 0x7F052004u;
    // 7F052004: lwz     r0, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052008:
    ctx->pc = 0x7F052008u;
    // 7F052008: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F05200C:
    ctx->pc = 0x7F05200Cu;
    // 7F05200C: rlwinm r0, r0, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000FFFu;
    }

label_7F052010:
    ctx->pc = 0x7F052010u;
    // 7F052010: cmpw    r3, r0
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

label_7F052014:
    ctx->pc = 0x7F052014u;
    // 7F052014: bc    4, 2, 0x7F052024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052024;
        }
    }

label_7F052018:
    ctx->pc = 0x7F052018u;
    ctx->downcount -= 3;
    // 7F052018: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F05201C:
    ctx->pc = 0x7F05201Cu;
    // 7F05201C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F052020:
    ctx->pc = 0x7F052020u;
    // 7F052020: stw     r0, 27688(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052024:
    ctx->pc = 0x7F052024u;
    ctx->downcount -= 4;
    // 7F052024: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F052028:
    ctx->pc = 0x7F052028u;
    // 7F052028: lwzu     r0, 5728(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5728);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F05202C:
    ctx->pc = 0x7F05202Cu;
    // 7F05202C: cmpwi   r0, 1
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

label_7F052030:
    ctx->pc = 0x7F052030u;
    // 7F052030: bc    4, 2, 0x7F05205C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05205C;
        }
    }

label_7F052034:
    ctx->pc = 0x7F052034u;
    ctx->downcount -= 3;
    // 7F052034: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052038:
    ctx->pc = 0x7F052038u;
    // 7F052038: cmpwi   r0, 1
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

label_7F05203C:
    ctx->pc = 0x7F05203Cu;
    // 7F05203C: bc    4, 2, 0x7F05205C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05205C;
        }
    }

label_7F052040:
    ctx->pc = 0x7F052040u;
    ctx->downcount -= 3;
    // 7F052040: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052044:
    ctx->pc = 0x7F052044u;
    // 7F052044: cmpwi   r0, 1
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

label_7F052048:
    ctx->pc = 0x7F052048u;
    // 7F052048: bc    4, 2, 0x7F05205C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05205C;
        }
    }

label_7F05204C:
    ctx->pc = 0x7F05204Cu;
    ctx->downcount -= 4;
    // 7F05204C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F052050:
    ctx->pc = 0x7F052050u;
    // 7F052050: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052054:
    ctx->pc = 0x7F052054u;
    // 7F052054: stw     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052058:
    ctx->pc = 0x7F052058u;
    // 7F052058: stw     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05205C:
    ctx->pc = 0x7F05205Cu;
    ctx->downcount -= 16;
    // 7F05205C: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F052060:
    ctx->pc = 0x7F052060u;
    // 7F052060: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052064:
    ctx->pc = 0x7F052064u;
    // 7F052064: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F052068:
    ctx->pc = 0x7F052068u;
    // 7F052068: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F05206C:
    ctx->pc = 0x7F05206Cu;
    // 7F05206C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052070:
    ctx->pc = 0x7F052070u;
    ctx->downcount -= 22;
    // 7F052070: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F052074:
    ctx->pc = 0x7F052074u;
    // 7F052074: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F052078:
    ctx->pc = 0x7F052078u;
    // 7F052078: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05207C:
    ctx->pc = 0x7F05207Cu;
    // 7F05207C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F052080:
    ctx->pc = 0x7F052080u;
    // 7F052080: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F052084:
    ctx->pc = 0x7F052084u;
    // 7F052084: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F052088:
    ctx->pc = 0x7F052088u;
    // 7F052088: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05208C:
    ctx->pc = 0x7F05208Cu;
    // 7F05208C: oris    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | (0x0001u << 16);

label_7F052090:
    ctx->pc = 0x7F052090u;
    // 7F052090: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052094:
    ctx->pc = 0x7F052094u;
    // 7F052094: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052098:
    ctx->pc = 0x7F052098u;
    // 7F052098: cmpwi   r0, 0
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

label_7F05209C:
    ctx->pc = 0x7F05209Cu;
    // 7F05209C: bc    12, 2, 0x7F0520D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0520D0;
        }
    }

label_7F0520A0:
    ctx->pc = 0x7F0520A0u;
    ctx->downcount -= 4;
    // 7F0520A0: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0520A4:
    ctx->pc = 0x7F0520A4u;
    // 7F0520A4: lwz     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0520A8:
    ctx->pc = 0x7F0520A8u;
    // 7F0520A8: cmpwi   r0, 0
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

label_7F0520AC:
    ctx->pc = 0x7F0520ACu;
    // 7F0520AC: bc    12, 2, 0x7F0520DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0520DC;
        }
    }

label_7F0520B0:
    ctx->pc = 0x7F0520B0u;
    ctx->downcount -= 4;
    // 7F0520B0: lwz     r3, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0520B4:
    ctx->pc = 0x7F0520B4u;
    // 7F0520B4: lwz     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0520B8:
    ctx->pc = 0x7F0520B8u;
    // 7F0520B8: cmpwi   r0, 0
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

label_7F0520BC:
    ctx->pc = 0x7F0520BCu;
    // 7F0520BC: bc    12, 2, 0x7F0520DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0520DC;
        }
    }

label_7F0520C0:
    ctx->pc = 0x7F0520C0u;
    ctx->downcount -= 4;
    // 7F0520C0: lwz     r3, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0520C4:
    ctx->pc = 0x7F0520C4u;
    // 7F0520C4: lwz     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0520C8:
    ctx->pc = 0x7F0520C8u;
    // 7F0520C8: cmpwi   r0, 0
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

label_7F0520CC:
    ctx->pc = 0x7F0520CCu;
    // 7F0520CC: bc    12, 2, 0x7F0520DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0520DC;
        }
    }

label_7F0520D0:
    ctx->pc = 0x7F0520D0u;
    ctx->downcount -= 3;
    // 7F0520D0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0520D4:
    ctx->pc = 0x7F0520D4u;
    // 7F0520D4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0520D8:
    ctx->pc = 0x7F0520D8u;
    // 7F0520D8: stw     r0, 27688(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0520DC:
    ctx->pc = 0x7F0520DCu;
    ctx->downcount -= 5;
    // 7F0520DC: rlwinm r0, r6, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F0520E0:
    ctx->pc = 0x7F0520E0u;
    // 7F0520E0: add   r31, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F0520E4:
    ctx->pc = 0x7F0520E4u;
    // 7F0520E4: lwz     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0520E8:
    ctx->pc = 0x7F0520E8u;
    // 7F0520E8: cmpwi   r0, 1
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

label_7F0520EC:
    ctx->pc = 0x7F0520ECu;
    // 7F0520EC: bc    12, 2, 0x7F052188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F052188;
        }
    }

label_7F0520F0:
    ctx->pc = 0x7F0520F0u;
    ctx->downcount -= 1;
    // 7F0520F0: bc    4, 0, 0x7F052100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052100;
        }
    }

label_7F0520F4:
    ctx->pc = 0x7F0520F4u;
    ctx->downcount -= 2;
    // 7F0520F4: cmpwi   r0, 0
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

label_7F0520F8:
    ctx->pc = 0x7F0520F8u;
    // 7F0520F8: bc    4, 0, 0x7F05210C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05210C;
        }
    }

label_7F0520FC:
    ctx->pc = 0x7F0520FCu;
    ctx->downcount -= 1;
    // 7F0520FC: b       0x7F05227C
    {
            goto label_7F05227C;
    }

label_7F052100:
    ctx->pc = 0x7F052100u;
    ctx->downcount -= 2;
    // 7F052100: cmpwi   r0, 3
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

label_7F052104:
    ctx->pc = 0x7F052104u;
    // 7F052104: bc    4, 0, 0x7F05227C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05227C;
        }
    }

label_7F052108:
    ctx->pc = 0x7F052108u;
    ctx->downcount -= 1;
    // 7F052108: b       0x7F0521F8
    {
            goto label_7F0521F8;
    }

label_7F05210C:
    ctx->pc = 0x7F05210Cu;
    ctx->downcount -= 3;
    // 7F05210C: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052110:
    ctx->pc = 0x7F052110u;
    // 7F052110: cmpwi   r0, 0
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

label_7F052114:
    ctx->pc = 0x7F052114u;
    // 7F052114: bc    12, 2, 0x7F05214C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05214C;
        }
    }

label_7F052118:
    ctx->pc = 0x7F052118u;
    ctx->downcount -= 13;
    // 7F052118: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05211C:
    ctx->pc = 0x7F05211Cu;
    // 7F05211C: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052120:
    ctx->pc = 0x7F052120u;
    // 7F052120: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052124:
    ctx->pc = 0x7F052124u;
    // 7F052124: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F052128:
    ctx->pc = 0x7F052128u;
    // 7F052128: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05212C:
    ctx->pc = 0x7F05212Cu;
    // 7F05212C: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052130:
    ctx->pc = 0x7F052130u;
    // 7F052130: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052134:
    ctx->pc = 0x7F052134u;
    // 7F052134: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F052138:
    ctx->pc = 0x7F052138u;
    // 7F052138: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05213C:
    ctx->pc = 0x7F05213Cu;
    // 7F05213C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052140:
    ctx->pc = 0x7F052140u;
    // 7F052140: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F052144:
    ctx->pc = 0x7F052144u;
    // 7F052144: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052148:
    ctx->pc = 0x7F052148u;
    // 7F052148: b       0x7F05227C
    {
            goto label_7F05227C;
    }

label_7F05214C:
    ctx->pc = 0x7F05214Cu;
    ctx->downcount -= 4;
    // 7F05214C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F052150:
    ctx->pc = 0x7F052150u;
    // 7F052150: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F052154:
    ctx->pc = 0x7F052154u;
    // 7F052154: lfs     f1, -10804(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052154u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10804);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F052158:
    ctx->pc = 0x7F052158u;
    // 7F052158: bl      0x7F051878
    {
            ctx->lr = 0x7F05215Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F051878u;
                return;
            }
            goto label_7F051878;
    }

label_7F05215C:
    ctx->pc = 0x7F05215Cu;
    ctx->downcount -= 2;
    // 7F05215C: cmpwi   r3, 0
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

label_7F052160:
    ctx->pc = 0x7F052160u;
    // 7F052160: bc    12, 2, 0x7F05227C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05227C;
        }
    }

label_7F052164:
    ctx->pc = 0x7F052164u;
    ctx->downcount -= 8;
    // 7F052164: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052168:
    ctx->pc = 0x7F052168u;
    // 7F052168: li      r3, 1737
    ctx->gpr[3] = (u32)(s32)(1737);

label_7F05216C:
    ctx->pc = 0x7F05216Cu;
    // 7F05216C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F052170:
    ctx->pc = 0x7F052170u;
    // 7F052170: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F052174:
    ctx->pc = 0x7F052174u;
    // 7F052174: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F052178:
    ctx->pc = 0x7F052178u;
    // 7F052178: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05217C:
    ctx->pc = 0x7F05217Cu;
    // 7F05217C: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052180:
    ctx->pc = 0x7F052180u;
    // 7F052180: bl      0x7F0513A0
    {
            ctx->lr = 0x7F052184u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F052184:
    ctx->pc = 0x7F052184u;
    ctx->downcount -= 1;
    // 7F052184: b       0x7F05227C
    {
            goto label_7F05227C;
    }

label_7F052188:
    ctx->pc = 0x7F052188u;
    ctx->downcount -= 3;
    // 7F052188: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05218C:
    ctx->pc = 0x7F05218Cu;
    // 7F05218C: cmpwi   r0, 0
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

label_7F052190:
    ctx->pc = 0x7F052190u;
    // 7F052190: bc    12, 2, 0x7F0521C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0521C8;
        }
    }

label_7F052194:
    ctx->pc = 0x7F052194u;
    ctx->downcount -= 13;
    // 7F052194: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052198:
    ctx->pc = 0x7F052198u;
    // 7F052198: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05219C:
    ctx->pc = 0x7F05219Cu;
    // 7F05219C: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0521A0:
    ctx->pc = 0x7F0521A0u;
    // 7F0521A0: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0521A4:
    ctx->pc = 0x7F0521A4u;
    // 7F0521A4: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0521A8:
    ctx->pc = 0x7F0521A8u;
    // 7F0521A8: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0521AC:
    ctx->pc = 0x7F0521ACu;
    // 7F0521AC: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0521B0:
    ctx->pc = 0x7F0521B0u;
    // 7F0521B0: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0521B4:
    ctx->pc = 0x7F0521B4u;
    // 7F0521B4: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0521B8:
    ctx->pc = 0x7F0521B8u;
    // 7F0521B8: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0521BC:
    ctx->pc = 0x7F0521BCu;
    // 7F0521BC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0521C0:
    ctx->pc = 0x7F0521C0u;
    // 7F0521C0: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0521C4:
    ctx->pc = 0x7F0521C4u;
    // 7F0521C4: b       0x7F05227C
    {
            goto label_7F05227C;
    }

label_7F0521C8:
    ctx->pc = 0x7F0521C8u;
    ctx->downcount -= 3;
    // 7F0521C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0521CC:
    ctx->pc = 0x7F0521CCu;
    // 7F0521CC: addi    r4, r30, 8
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(8);

label_7F0521D0:
    ctx->pc = 0x7F0521D0u;
    // 7F0521D0: bl      0x7F0517C0
    {
            ctx->lr = 0x7F0521D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0517C0u;
                return;
            }
            goto label_7F0517C0;
    }

label_7F0521D4:
    ctx->pc = 0x7F0521D4u;
    ctx->downcount -= 2;
    // 7F0521D4: cmpwi   r3, 0
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

label_7F0521D8:
    ctx->pc = 0x7F0521D8u;
    // 7F0521D8: bc    12, 2, 0x7F05227C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05227C;
        }
    }

label_7F0521DC:
    ctx->pc = 0x7F0521DCu;
    ctx->downcount -= 7;
    // 7F0521DC: lha     r0, 26(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0521E0:
    ctx->pc = 0x7F0521E0u;
    // 7F0521E0: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0521E4:
    ctx->pc = 0x7F0521E4u;
    // 7F0521E4: sth     r0, 42(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0521E8:
    ctx->pc = 0x7F0521E8u;
    // 7F0521E8: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0521EC:
    ctx->pc = 0x7F0521ECu;
    // 7F0521EC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0521F0:
    ctx->pc = 0x7F0521F0u;
    // 7F0521F0: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0521F4:
    ctx->pc = 0x7F0521F4u;
    // 7F0521F4: b       0x7F05227C
    {
            goto label_7F05227C;
    }

label_7F0521F8:
    ctx->pc = 0x7F0521F8u;
    ctx->downcount -= 3;
    // 7F0521F8: lfs     f1, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0521F8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0521FC:
    ctx->pc = 0x7F0521FCu;
    // 7F0521FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F052200:
    ctx->pc = 0x7F052200u;
    // 7F052200: bl      0x7F051878
    {
            ctx->lr = 0x7F052204u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F051878u;
                return;
            }
            goto label_7F051878;
    }

label_7F052204:
    ctx->pc = 0x7F052204u;
    ctx->downcount -= 2;
    // 7F052204: cmpwi   r3, 0
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

label_7F052208:
    ctx->pc = 0x7F052208u;
    // 7F052208: bc    12, 2, 0x7F05227C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05227C;
        }
    }

label_7F05220C:
    ctx->pc = 0x7F05220Cu;
    ctx->downcount -= 5;
    // 7F05220C: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052210:
    ctx->pc = 0x7F052210u;
    // 7F052210: li      r3, 1736
    ctx->gpr[3] = (u32)(s32)(1736);

label_7F052214:
    ctx->pc = 0x7F052214u;
    // 7F052214: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F052218:
    ctx->pc = 0x7F052218u;
    // 7F052218: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F05221C:
    ctx->pc = 0x7F05221Cu;
    // 7F05221C: bl      0x7F0513A0
    {
            ctx->lr = 0x7F052220u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F052220:
    ctx->pc = 0x7F052220u;
    ctx->downcount -= 14;
    // 7F052220: lfs     f0, 12(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F052220u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F052224:
    ctx->pc = 0x7F052224u;
    // 7F052224: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F052228:
    ctx->pc = 0x7F052228u;
    // 7F052228: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F05222C:
    ctx->pc = 0x7F05222Cu;
    // 7F05222C: addi    r4, r3, 27692
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(27692);

label_7F052230:
    ctx->pc = 0x7F052230u;
    // 7F052230: stfs     f0, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F052230u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F052234:
    ctx->pc = 0x7F052234u;
    // 7F052234: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052238:
    ctx->pc = 0x7F052238u;
    // 7F052238: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F05223C:
    ctx->pc = 0x7F05223Cu;
    // 7F05223C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052240:
    ctx->pc = 0x7F052240u;
    // 7F052240: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052244:
    ctx->pc = 0x7F052244u;
    // 7F052244: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F052248:
    ctx->pc = 0x7F052248u;
    // 7F052248: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05224C:
    ctx->pc = 0x7F05224Cu;
    // 7F05224C: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052250:
    ctx->pc = 0x7F052250u;
    // 7F052250: cmpwi   r0, 3
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

label_7F052254:
    ctx->pc = 0x7F052254u;
    // 7F052254: bc    4, 2, 0x7F05227C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05227C;
        }
    }

label_7F052258:
    ctx->pc = 0x7F052258u;
    ctx->downcount -= 4;
    // 7F052258: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F05225C:
    ctx->pc = 0x7F05225Cu;
    // 7F05225C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F052260:
    ctx->pc = 0x7F052260u;
    // 7F052260: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052264:
    ctx->pc = 0x7F052264u;
    // 7F052264: bl      0x7F3C8210
    {
            ctx->lr = 0x7F052268u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F052268:
    ctx->pc = 0x7F052268u;
    ctx->downcount -= 5;
    // 7F052268: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F05226C:
    ctx->pc = 0x7F05226Cu;
    // 7F05226C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F052270:
    ctx->pc = 0x7F052270u;
    // 7F052270: stwu     r0, 5728(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5728);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[3] = ea;
    }

label_7F052274:
    ctx->pc = 0x7F052274u;
    // 7F052274: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052278:
    ctx->pc = 0x7F052278u;
    // 7F052278: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05227C:
    ctx->pc = 0x7F05227Cu;
    ctx->downcount -= 16;
    // 7F05227C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F052280:
    ctx->pc = 0x7F052280u;
    // 7F052280: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052284:
    ctx->pc = 0x7F052284u;
    // 7F052284: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F052288:
    ctx->pc = 0x7F052288u;
    // 7F052288: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F05228C:
    ctx->pc = 0x7F05228Cu;
    // 7F05228C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052290:
    ctx->pc = 0x7F052290u;
    ctx->downcount -= 19;
    // 7F052290: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F052294:
    ctx->pc = 0x7F052294u;
    // 7F052294: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F052298:
    ctx->pc = 0x7F052298u;
    // 7F052298: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F05229C:
    ctx->pc = 0x7F05229Cu;
    // 7F05229C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0522A0:
    ctx->pc = 0x7F0522A0u;
    // 7F0522A0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0522A4:
    ctx->pc = 0x7F0522A4u;
    // 7F0522A4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0522A8:
    ctx->pc = 0x7F0522A8u;
    // 7F0522A8: lwz     r0, 27688(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27688);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0522AC:
    ctx->pc = 0x7F0522ACu;
    // 7F0522AC: cmpwi   r0, 0
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

label_7F0522B0:
    ctx->pc = 0x7F0522B0u;
    // 7F0522B0: bc    4, 0, 0x7F0522BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0522BC;
        }
    }

label_7F0522B4:
    ctx->pc = 0x7F0522B4u;
    ctx->downcount -= 1;
    // 7F0522B4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0522B8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0522B8:
    ctx->pc = 0x7F0522B8u;
    ctx->downcount -= 1;
    // 7F0522B8: b       0x7F052344
    {
            goto label_7F052344;
    }

label_7F0522BC:
    ctx->pc = 0x7F0522BCu;
    ctx->downcount -= 2;
    // 7F0522BC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0522C0:
    ctx->pc = 0x7F0522C0u;
    // 7F0522C0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0522C4:
    ctx->downcount -= 8;
    // 7F0522C4: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0522C8:
    ctx->pc = 0x7F0522C8u;
    // 7F0522C8: lwz     r5, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0522CC:
    // 7F0522CC: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F0522D0:
    ctx->pc = 0x7F0522D0u;
    // 7F0522D0: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0522D4:
    ctx->pc = 0x7F0522D4u;
    // 7F0522D4: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0522D8:
    ctx->pc = 0x7F0522D8u;
    // 7F0522D8: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0522DC:
    // 7F0522DC: cmpwi   r0, 1
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

label_7F0522E0:
    // 7F0522E0: bc    12, 2, 0x7F052318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F052318;
        }
    }

label_7F0522E4:
    ctx->downcount -= 1;
    // 7F0522E4: bc    4, 0, 0x7F0522F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0522F4;
        }
    }

label_7F0522E8:
    ctx->downcount -= 2;
    // 7F0522E8: cmpwi   r0, 0
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

label_7F0522EC:
    // 7F0522EC: bc    4, 0, 0x7F052300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052300;
        }
    }

label_7F0522F0:
    ctx->downcount -= 1;
    // 7F0522F0: b       0x7F052334
    {
            goto label_7F052334;
    }

label_7F0522F4:
    ctx->downcount -= 2;
    // 7F0522F4: cmpwi   r0, 3
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

label_7F0522F8:
    // 7F0522F8: bc    4, 0, 0x7F052334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052334;
        }
    }

label_7F0522FC:
    ctx->downcount -= 1;
    // 7F0522FC: b       0x7F052328
    {
            goto label_7F052328;
    }

label_7F052300:
    ctx->downcount -= 2;
    // 7F052300: cmpwi   r5, 0
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

label_7F052304:
    // 7F052304: bc    12, 0, 0x7F052334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F052334;
        }
    }

label_7F052308:
    ctx->downcount -= 3;
    // 7F052308: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F05230C:
    // 7F05230C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F052310:
    // 7F052310: bl      0x7F051B84
    {
            ctx->lr = 0x7F052314u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F051B84u;
                return;
            }
            goto label_7F051B84;
    }

label_7F052314:
    ctx->downcount -= 1;
    // 7F052314: b       0x7F052334
    {
            goto label_7F052334;
    }

label_7F052318:
    ctx->downcount -= 3;
    // 7F052318: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F05231C:
    // 7F05231C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F052320:
    // 7F052320: bl      0x7F051E28
    {
            ctx->lr = 0x7F052324u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F051E28u;
                return;
            }
            goto label_7F051E28;
    }

label_7F052324:
    ctx->downcount -= 1;
    // 7F052324: b       0x7F052334
    {
            goto label_7F052334;
    }

label_7F052328:
    ctx->downcount -= 3;
    // 7F052328: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F05232C:
    // 7F05232C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F052330:
    // 7F052330: bl      0x7F052070
    {
            ctx->lr = 0x7F052334u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F052070u;
                return;
            }
            goto label_7F052070;
    }

label_7F052334:
    ctx->downcount -= 4;
    // 7F052334: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F052338:
    // 7F052338: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F05233C:
    // 7F05233C: cmpwi   r30, 3
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F052340:
    // 7F052340: bc    12, 0, 0x7F0522C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0522C4u;
                return;
            }
            goto label_7F0522C4;
        }
    }

label_7F052344:
    ctx->pc = 0x7F052344u;
    ctx->downcount -= 16;
    // 7F052344: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F052348:
    ctx->pc = 0x7F052348u;
    // 7F052348: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05234C:
    ctx->pc = 0x7F05234Cu;
    // 7F05234C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F052350:
    ctx->pc = 0x7F052350u;
    // 7F052350: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F052354:
    ctx->pc = 0x7F052354u;
    // 7F052354: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052358:
    ctx->pc = 0x7F052358u;
    ctx->downcount -= 4;
    // 7F052358: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F05235C:
    ctx->pc = 0x7F05235Cu;
    // 7F05235C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F052360:
    ctx->pc = 0x7F052360u;
    // 7F052360: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F052364:
    ctx->downcount -= 5;
    // 7F052364: addi    r0, r4, 32
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32);

label_7F052368:
    ctx->pc = 0x7F052368u;
    // 7F052368: lwzx    r9, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F05236C:
    ctx->pc = 0x7F05236Cu;
    // 7F05236C: lwz     r0, 32(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052370:
    // 7F052370: cmplwi  r0, 0x0000
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

label_7F052374:
    // 7F052374: bc    12, 2, 0x7F052404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F052404;
        }
    }

label_7F052378:
    ctx->downcount -= 35;
    // 7F052378: lis     r5, -2
    ctx->gpr[5] = ((u32)(s32)(-2) << 16);

label_7F05237C:
    ctx->pc = 0x7F05237Cu;
    // 7F05237C: lwz     r6, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F052380:
    // 7F052380: addi    r0, r5, 32711
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(32711);

label_7F052384:
    // 7F052384: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F052388:
    // 7F052388: and   r6, r6, r0
    {
        ctx->gpr[6] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F05238C:
    // 7F05238C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F052390:
    ctx->pc = 0x7F052390u;
    // 7F052390: stw     r6, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F052394:
    // 7F052394: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F052398:
    ctx->pc = 0x7F052398u;
    // 7F052398: lwz     r5, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F05239C:
    // 7F05239C: rlwinm r5, r5, 0, 21, 19
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFF7FFu;
    }

label_7F0523A0:
    ctx->pc = 0x7F0523A0u;
    // 7F0523A0: stw     r5, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0523A4:
    ctx->pc = 0x7F0523A4u;
    // 7F0523A4: lwz     r8, 32(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0523A8:
    ctx->pc = 0x7F0523A8u;
    // 7F0523A8: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0523AC:
    ctx->pc = 0x7F0523ACu;
    // 7F0523AC: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0523B0:
    ctx->pc = 0x7F0523B0u;
    // 7F0523B0: stw     r6, 16(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0523B4:
    ctx->pc = 0x7F0523B4u;
    // 7F0523B4: stw     r5, 20(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0523B8:
    ctx->pc = 0x7F0523B8u;
    // 7F0523B8: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0523BC:
    ctx->pc = 0x7F0523BCu;
    // 7F0523BC: lwz     r5, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0523C0:
    ctx->pc = 0x7F0523C0u;
    // 7F0523C0: stw     r6, 24(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0523C4:
    ctx->pc = 0x7F0523C4u;
    // 7F0523C4: stw     r5, 28(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0523C8:
    ctx->pc = 0x7F0523C8u;
    // 7F0523C8: lwz     r7, 32(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0523CC:
    ctx->pc = 0x7F0523CCu;
    // 7F0523CC: lwz     r6, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0523D0:
    ctx->pc = 0x7F0523D0u;
    // 7F0523D0: lwz     r5, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0523D4:
    ctx->pc = 0x7F0523D4u;
    // 7F0523D4: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0523D8:
    ctx->pc = 0x7F0523D8u;
    // 7F0523D8: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0523DC:
    ctx->pc = 0x7F0523DCu;
    // 7F0523DC: lwz     r6, 16(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0523E0:
    ctx->pc = 0x7F0523E0u;
    // 7F0523E0: lwz     r5, 20(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0523E4:
    ctx->pc = 0x7F0523E4u;
    // 7F0523E4: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0523E8:
    ctx->pc = 0x7F0523E8u;
    // 7F0523E8: stw     r5, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0523EC:
    ctx->pc = 0x7F0523ECu;
    // 7F0523EC: lwz     r7, 32(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0523F0:
    ctx->pc = 0x7F0523F0u;
    // 7F0523F0: lwz     r6, 24(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0523F4:
    ctx->pc = 0x7F0523F4u;
    // 7F0523F4: lwz     r5, 28(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0523F8:
    ctx->pc = 0x7F0523F8u;
    // 7F0523F8: stw     r6, 40(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0523FC:
    ctx->pc = 0x7F0523FCu;
    // 7F0523FC: stw     r5, 44(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F052400:
    ctx->pc = 0x7F052400u;
    // 7F052400: stw     r0, 36(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052404:
    ctx->downcount -= 2;
    // 7F052404: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F052408:
    // 7F052408: bc    16, 0, 0x7F052364
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F052364u;
                return;
            }
            goto label_7F052364;
        }
    }

label_7F05240C:
    ctx->pc = 0x7F05240Cu;
    ctx->downcount -= 4;
    // 7F05240C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F052410:
    ctx->pc = 0x7F052410u;
    // 7F052410: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F052414:
    ctx->pc = 0x7F052414u;
    // 7F052414: stw     r0, 27688(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052418:
    ctx->pc = 0x7F052418u;
    // 7F052418: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F05241C:
    ctx->pc = 0x7F05241Cu;
    ctx->downcount -= 19;
    // 7F05241C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F052420:
    ctx->pc = 0x7F052420u;
    // 7F052420: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F052424:
    ctx->pc = 0x7F052424u;
    // 7F052424: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052428:
    ctx->pc = 0x7F052428u;
    // 7F052428: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F05242C:
    ctx->pc = 0x7F05242Cu;
    // 7F05242C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F052430:
    ctx->pc = 0x7F052430u;
    // 7F052430: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F052434:
    ctx->pc = 0x7F052434u;
    // 7F052434: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F052438:
    ctx->pc = 0x7F052438u;
    // 7F052438: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F05243C:
    ctx->pc = 0x7F05243Cu;
    // 7F05243C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F052440:
    ctx->downcount -= 3;
    // 7F052440: addis   r3, r27, 136
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(136) << 16);

label_7F052444:
    // 7F052444: addi    r3, r3, -11314
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11314);

label_7F052448:
    // 7F052448: bl      0x7F04E8A4
    {
            ctx->lr = 0x7F05244Cu;
            ctx->pc = 0x7F04E8A4u;
            return;
    }

label_7F05244C:
    ctx->downcount -= 2;
    // 7F05244C: cmplwi  r3, 0x0000
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

label_7F052450:
    // 7F052450: bc    4, 2, 0x7F05245C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05245C;
        }
    }

label_7F052454:
    ctx->downcount -= 2;
    // 7F052454: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F052458:
    // 7F052458: b       0x7F0524E4
    {
            goto label_7F0524E4;
    }

label_7F05245C:
    ctx->pc = 0x7F05245Cu;
    ctx->downcount -= 26;
    // 7F05245C: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052460:
    // 7F052460: add   r9, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F052464:
    // 7F052464: addi    r6, r29, -256
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(-256);

label_7F052468:
    // 7F052468: addi    r5, r30, 80
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(80);

label_7F05246C:
    // 7F05246C: rlwinm r4, r4, 0, 22, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFF3FFu;
    }

label_7F052470:
    // 7F052470: neg  r0, r27
    {
        u32 a = ctx->gpr[27];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F052474:
    ctx->pc = 0x7F052474u;
    // 7F052474: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052478:
    // 7F052478: rlwinm r4, r0, 5, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 5u) & 0xFFFFFFE0u;
    }

label_7F05247C:
    // 7F05247C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F052480:
    // 7F052480: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F052484:
    ctx->pc = 0x7F052484u;
    // 7F052484: lwz     r8, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F052488:
    // 7F052488: cmpwi   r27, 3
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F05248C:
    // 7F05248C: li      r0, 960
    ctx->gpr[0] = (u32)(s32)(960);

label_7F052490:
    // 7F052490: addi    r30, r30, 2
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(2);

label_7F052494:
    // 7F052494: oris    r8, r8, 0x0001
    ctx->gpr[8] = ctx->gpr[8] | (0x0001u << 16);

label_7F052498:
    // 7F052498: addi    r29, r29, 256
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(256);

label_7F05249C:
    // 7F05249C: ori     r8, r8, 0x8038
    ctx->gpr[8] = ctx->gpr[8] | 0x8038u;

label_7F0524A0:
    // 7F0524A0: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F0524A4:
    ctx->pc = 0x7F0524A4u;
    // 7F0524A4: stw     r8, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0524A8:
    ctx->pc = 0x7F0524A8u;
    // 7F0524A8: stw     r3, 32(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0524AC:
    ctx->pc = 0x7F0524ACu;
    // 7F0524AC: stw     r7, 44(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0524B0:
    ctx->pc = 0x7F0524B0u;
    // 7F0524B0: stw     r7, 56(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0524B4:
    ctx->pc = 0x7F0524B4u;
    // 7F0524B4: sthx    r6, r31, r5
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[5];
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0524B8:
    ctx->pc = 0x7F0524B8u;
    // 7F0524B8: stw     r4, 68(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0524BC:
    ctx->pc = 0x7F0524BCu;
    // 7F0524BC: stw     r0, 136(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0524C0:
    // 7F0524C0: bc    12, 0, 0x7F052440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F052440u;
                return;
            }
            goto label_7F052440;
        }
    }

label_7F0524C4:
    ctx->pc = 0x7F0524C4u;
    ctx->downcount -= 8;
    // 7F0524C4: li      r0, 70
    ctx->gpr[0] = (u32)(s32)(70);

label_7F0524C8:
    ctx->pc = 0x7F0524C8u;
    // 7F0524C8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0524CC:
    ctx->pc = 0x7F0524CCu;
    // 7F0524CC: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0524D0:
    ctx->pc = 0x7F0524D0u;
    // 7F0524D0: addi    r4, r3, 27688
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(27688);

label_7F0524D4:
    ctx->pc = 0x7F0524D4u;
    // 7F0524D4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0524D8:
    ctx->pc = 0x7F0524D8u;
    // 7F0524D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0524DC:
    ctx->pc = 0x7F0524DCu;
    // 7F0524DC: stw     r7, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0524E0:
    ctx->pc = 0x7F0524E0u;
    // 7F0524E0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0524E4:
    ctx->pc = 0x7F0524E4u;
    ctx->downcount -= 16;
    // 7F0524E4: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0524E8:
    ctx->pc = 0x7F0524E8u;
    // 7F0524E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0524EC:
    ctx->pc = 0x7F0524ECu;
    // 7F0524EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0524F0:
    ctx->pc = 0x7F0524F0u;
    // 7F0524F0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0524F4:
    ctx->pc = 0x7F0524F4u;
    // 7F0524F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0524F8:
    ctx->pc = 0x7F0524F8u;
    ctx->downcount -= 8;
    // 7F0524F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0524FC:
    ctx->pc = 0x7F0524FCu;
    // 7F0524FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F052500:
    ctx->pc = 0x7F052500u;
    // 7F052500: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F052504:
    ctx->pc = 0x7F052504u;
    // 7F052504: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052508:
    ctx->pc = 0x7F052508u;
    // 7F052508: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F05250C:
    ctx->pc = 0x7F05250Cu;
    // 7F05250C: lwz     r0, 27688(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27688);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052510:
    ctx->pc = 0x7F052510u;
    // 7F052510: cmpwi   r0, 0
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

label_7F052514:
    ctx->pc = 0x7F052514u;
    // 7F052514: bc    4, 1, 0x7F052520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052520;
        }
    }

label_7F052518:
    ctx->pc = 0x7F052518u;
    ctx->downcount -= 2;
    // 7F052518: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F05251C:
    ctx->pc = 0x7F05251Cu;
    // 7F05251C: b       0x7F052574
    {
            goto label_7F052574;
    }

label_7F052520:
    ctx->pc = 0x7F052520u;
    ctx->downcount -= 5;
    // 7F052520: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F052524:
    ctx->pc = 0x7F052524u;
    // 7F052524: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F052528:
    ctx->pc = 0x7F052528u;
    // 7F052528: li      r5, 160
    ctx->gpr[5] = (u32)(s32)(160);

label_7F05252C:
    ctx->pc = 0x7F05252Cu;
    // 7F05252C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F052530:
    ctx->pc = 0x7F052530u;
    // 7F052530: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F052534u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F052534:
    ctx->pc = 0x7F052534u;
    ctx->downcount -= 2;
    // 7F052534: or.   r31, r3, r3
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

label_7F052538:
    ctx->pc = 0x7F052538u;
    // 7F052538: bc    12, 2, 0x7F052570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F052570;
        }
    }

label_7F05253C:
    ctx->pc = 0x7F05253Cu;
    ctx->downcount -= 5;
    // 7F05253C: lis     r4, 32517
    ctx->gpr[4] = ((u32)(s32)(32517) << 16);

label_7F052540:
    ctx->pc = 0x7F052540u;
    // 7F052540: lis     r5, 32517
    ctx->gpr[5] = ((u32)(s32)(32517) << 16);

label_7F052544:
    ctx->pc = 0x7F052544u;
    // 7F052544: addi    r4, r4, 8848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8848);

label_7F052548:
    ctx->pc = 0x7F052548u;
    // 7F052548: addi    r5, r5, 9048
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9048);

label_7F05254C:
    ctx->pc = 0x7F05254Cu;
    // 7F05254C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F052550u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F052550:
    ctx->pc = 0x7F052550u;
    ctx->downcount -= 2;
    // 7F052550: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F052554:
    ctx->pc = 0x7F052554u;
    // 7F052554: bl      0x7F05241C
    {
            ctx->lr = 0x7F052558u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F05241Cu;
                return;
            }
            goto label_7F05241C;
    }

label_7F052558:
    ctx->pc = 0x7F052558u;
    ctx->downcount -= 2;
    // 7F052558: cmpwi   r3, 0
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

label_7F05255C:
    ctx->pc = 0x7F05255Cu;
    // 7F05255C: bc    4, 0, 0x7F052570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052570;
        }
    }

label_7F052560:
    ctx->pc = 0x7F052560u;
    ctx->downcount -= 2;
    // 7F052560: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F052564:
    ctx->pc = 0x7F052564u;
    // 7F052564: bl      0x7F3C8210
    {
            ctx->lr = 0x7F052568u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F052568:
    ctx->pc = 0x7F052568u;
    ctx->downcount -= 2;
    // 7F052568: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F05256C:
    ctx->pc = 0x7F05256Cu;
    // 7F05256C: b       0x7F052574
    {
            goto label_7F052574;
    }

label_7F052570:
    ctx->pc = 0x7F052570u;
    ctx->downcount -= 1;
    // 7F052570: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F052574:
    ctx->pc = 0x7F052574u;
    ctx->downcount -= 6;
    // 7F052574: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052578:
    ctx->pc = 0x7F052578u;
    // 7F052578: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F05257C:
    ctx->pc = 0x7F05257Cu;
    // 7F05257C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F052580:
    ctx->pc = 0x7F052580u;
    // 7F052580: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F052584:
    ctx->pc = 0x7F052584u;
    // 7F052584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052588:
    ctx->pc = 0x7F052588u;
    ctx->downcount -= 9;
    // 7F052588: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F05258C:
    ctx->pc = 0x7F05258Cu;
    // 7F05258C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F052590:
    ctx->pc = 0x7F052590u;
    // 7F052590: lhz     r5, 27716(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27716);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_7F052594:
    ctx->pc = 0x7F052594u;
    // 7F052594: addi    r4, r3, 14080
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F052598:
    ctx->pc = 0x7F052598u;
    // 7F052598: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F05259C:
    ctx->pc = 0x7F05259Cu;
    // 7F05259C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0525A0:
    ctx->pc = 0x7F0525A0u;
    // 7F0525A0: nor   r5, r5, r5
    {
        ctx->gpr[5] = ~(ctx->gpr[5] | ctx->gpr[5]);
    }

label_7F0525A4:
    ctx->pc = 0x7F0525A4u;
    // 7F0525A4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0525A8:
    loop_7F0525A8(ctx);
    if (ctx->pc == 0x7F0525D8u) goto label_7F0525D8;
    return;
label_7F0525AC:
    // 7F0525AC: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

label_7F0525B0:
    ctx->pc = 0x7F0525B0u;
    // 7F0525B0: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0525B4:
    // 7F0525B4: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

label_7F0525B8:
    ctx->pc = 0x7F0525B8u;
    // 7F0525B8: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0525BC:
    ctx->pc = 0x7F0525BCu;
    // 7F0525BC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0525C0:
    // 7F0525C0: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

label_7F0525C4:
    ctx->pc = 0x7F0525C4u;
    // 7F0525C4: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0525C8:
    ctx->pc = 0x7F0525C8u;
    // 7F0525C8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0525CC:
    // 7F0525CC: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

label_7F0525D0:
    ctx->pc = 0x7F0525D0u;
    // 7F0525D0: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0525D4:
    // 7F0525D4: bc    16, 0, 0x7F0525A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0525A8u;
                return;
            }
            goto label_7F0525A8;
        }
    }

label_7F0525D8:
    ctx->pc = 0x7F0525D8u;
    ctx->downcount -= 1;
    // 7F0525D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0525DC:
    ctx->pc = 0x7F0525DCu;
    ctx->downcount -= 4;
    // 7F0525DC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0525E0:
    ctx->pc = 0x7F0525E0u;
    // 7F0525E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0525E4:
    ctx->pc = 0x7F0525E4u;
    // 7F0525E4: stw     r0, 27712(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27712);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0525E8:
    ctx->pc = 0x7F0525E8u;
    // 7F0525E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0525EC:
    ctx->pc = 0x7F0525ECu;
    ctx->downcount -= 10;
    // 7F0525EC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0525F0:
    ctx->pc = 0x7F0525F0u;
    // 7F0525F0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0525F4:
    ctx->pc = 0x7F0525F4u;
    // 7F0525F4: addi    r5, r4, 27716
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(27716);

label_7F0525F8:
    ctx->pc = 0x7F0525F8u;
    // 7F0525F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0525FC:
    ctx->pc = 0x7F0525FCu;
    // 7F0525FC: addi    r4, r3, 27712
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(27712);

label_7F052600:
    ctx->pc = 0x7F052600u;
    // 7F052600: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F052604:
    ctx->pc = 0x7F052604u;
    // 7F052604: sth     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F052608:
    ctx->pc = 0x7F052608u;
    // 7F052608: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F05260C:
    ctx->pc = 0x7F05260Cu;
    // 7F05260C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052610:
    ctx->pc = 0x7F052610u;
    // 7F052610: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052614:
    ctx->pc = 0x7F052614u;
    ctx->downcount -= 8;
    // 7F052614: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F052618:
    ctx->pc = 0x7F052618u;
    // 7F052618: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F05261C:
    ctx->pc = 0x7F05261Cu;
    // 7F05261C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F052620:
    ctx->pc = 0x7F052620u;
    // 7F052620: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052624:
    ctx->pc = 0x7F052624u;
    // 7F052624: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F052628:
    ctx->pc = 0x7F052628u;
    // 7F052628: lwz     r0, 27712(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27712);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05262C:
    ctx->pc = 0x7F05262Cu;
    // 7F05262C: cmpwi   r0, 0
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

label_7F052630:
    ctx->pc = 0x7F052630u;
    // 7F052630: bc    12, 2, 0x7F05263C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05263C;
        }
    }

label_7F052634:
    ctx->pc = 0x7F052634u;
    ctx->downcount -= 2;
    // 7F052634: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F052638:
    ctx->pc = 0x7F052638u;
    // 7F052638: b       0x7F052690
    {
            goto label_7F052690;
    }

label_7F05263C:
    ctx->pc = 0x7F05263Cu;
    ctx->downcount -= 5;
    // 7F05263C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F052640:
    ctx->pc = 0x7F052640u;
    // 7F052640: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F052644:
    ctx->pc = 0x7F052644u;
    // 7F052644: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F052648:
    ctx->pc = 0x7F052648u;
    // 7F052648: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F05264C:
    ctx->pc = 0x7F05264Cu;
    // 7F05264C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F052650u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F052650:
    ctx->pc = 0x7F052650u;
    ctx->downcount -= 2;
    // 7F052650: or.   r31, r3, r3
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

label_7F052654:
    ctx->pc = 0x7F052654u;
    // 7F052654: bc    12, 2, 0x7F05268C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F05268C;
        }
    }

label_7F052658:
    ctx->pc = 0x7F052658u;
    ctx->downcount -= 5;
    // 7F052658: lis     r4, 32517
    ctx->gpr[4] = ((u32)(s32)(32517) << 16);

label_7F05265C:
    ctx->pc = 0x7F05265Cu;
    // 7F05265C: lis     r5, 32517
    ctx->gpr[5] = ((u32)(s32)(32517) << 16);

label_7F052660:
    ctx->pc = 0x7F052660u;
    // 7F052660: addi    r4, r4, 9608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9608);

label_7F052664:
    ctx->pc = 0x7F052664u;
    // 7F052664: addi    r5, r5, 9692
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9692);

label_7F052668:
    ctx->pc = 0x7F052668u;
    // 7F052668: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F05266Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F05266C:
    ctx->pc = 0x7F05266Cu;
    ctx->downcount -= 2;
    // 7F05266C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F052670:
    ctx->pc = 0x7F052670u;
    // 7F052670: bl      0x7F0525EC
    {
            ctx->lr = 0x7F052674u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0525ECu;
                return;
            }
            goto label_7F0525EC;
    }

label_7F052674:
    ctx->pc = 0x7F052674u;
    ctx->downcount -= 2;
    // 7F052674: cmpwi   r3, 0
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

label_7F052678:
    ctx->pc = 0x7F052678u;
    // 7F052678: bc    4, 0, 0x7F05268C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05268C;
        }
    }

label_7F05267C:
    ctx->pc = 0x7F05267Cu;
    ctx->downcount -= 2;
    // 7F05267C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F052680:
    ctx->pc = 0x7F052680u;
    // 7F052680: bl      0x7F3C8210
    {
            ctx->lr = 0x7F052684u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F052684:
    ctx->pc = 0x7F052684u;
    ctx->downcount -= 2;
    // 7F052684: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F052688:
    ctx->pc = 0x7F052688u;
    // 7F052688: b       0x7F052690
    {
            goto label_7F052690;
    }

label_7F05268C:
    ctx->pc = 0x7F05268Cu;
    ctx->downcount -= 1;
    // 7F05268C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F052690:
    ctx->pc = 0x7F052690u;
    ctx->downcount -= 6;
    // 7F052690: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052694:
    ctx->pc = 0x7F052694u;
    // 7F052694: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F052698:
    ctx->pc = 0x7F052698u;
    // 7F052698: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F05269C:
    ctx->pc = 0x7F05269Cu;
    // 7F05269C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0526A0:
    ctx->pc = 0x7F0526A0u;
    // 7F0526A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0526A4:
    ctx->pc = 0x7F0526A4u;
    ctx->downcount -= 13;
    // 7F0526A4: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F0526A8:
    ctx->pc = 0x7F0526A8u;
    // 7F0526A8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0526AC:
    ctx->pc = 0x7F0526ACu;
    // 7F0526AC: addi    r7, r5, 27716
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(27716);

label_7F0526B0:
    ctx->pc = 0x7F0526B0u;
    // 7F0526B0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F0526B4:
    ctx->pc = 0x7F0526B4u;
    // 7F0526B4: lhz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_7F0526B8:
    ctx->pc = 0x7F0526B8u;
    // 7F0526B8: addi    r5, r4, 14080
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(14080);

label_7F0526BC:
    ctx->pc = 0x7F0526BCu;
    // 7F0526BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0526C0:
    ctx->pc = 0x7F0526C0u;
    // 7F0526C0: or   r6, r6, r3
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[3];
    }

label_7F0526C4:
    ctx->pc = 0x7F0526C4u;
    // 7F0526C4: rlwinm r3, r6, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x0000FFFFu;
    }

label_7F0526C8:
    ctx->pc = 0x7F0526C8u;
    // 7F0526C8: sth     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0526CC:
    ctx->pc = 0x7F0526CCu;
    // 7F0526CC: nor   r3, r3, r3
    {
        ctx->gpr[3] = ~(ctx->gpr[3] | ctx->gpr[3]);
    }

label_7F0526D0:
    ctx->pc = 0x7F0526D0u;
    // 7F0526D0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0526D4:
    loop_7F0526D4(ctx);
    if (ctx->pc == 0x7F052704u) goto label_7F052704;
    return;
label_7F0526D8:
    // 7F0526D8: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

label_7F0526DC:
    ctx->pc = 0x7F0526DCu;
    // 7F0526DC: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0526E0:
    // 7F0526E0: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F0526E4:
    ctx->pc = 0x7F0526E4u;
    // 7F0526E4: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0526E8:
    ctx->pc = 0x7F0526E8u;
    // 7F0526E8: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0526EC:
    // 7F0526EC: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F0526F0:
    ctx->pc = 0x7F0526F0u;
    // 7F0526F0: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0526F4:
    ctx->pc = 0x7F0526F4u;
    // 7F0526F4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0526F8:
    // 7F0526F8: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F0526FC:
    ctx->pc = 0x7F0526FCu;
    // 7F0526FC: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052700:
    // 7F052700: bc    16, 0, 0x7F0526D4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0526D4u;
                return;
            }
            goto label_7F0526D4;
        }
    }

label_7F052704:
    ctx->pc = 0x7F052704u;
    ctx->downcount -= 1;
    // 7F052704: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052708:
    ctx->pc = 0x7F052708u;
    ctx->downcount -= 13;
    // 7F052708: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F05270C:
    ctx->pc = 0x7F05270Cu;
    // 7F05270C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F052710:
    ctx->pc = 0x7F052710u;
    // 7F052710: addi    r7, r5, 27716
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(27716);

label_7F052714:
    ctx->pc = 0x7F052714u;
    // 7F052714: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F052718:
    ctx->pc = 0x7F052718u;
    // 7F052718: lhz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_7F05271C:
    ctx->pc = 0x7F05271Cu;
    // 7F05271C: addi    r5, r4, 14080
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(14080);

label_7F052720:
    ctx->pc = 0x7F052720u;
    // 7F052720: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F052724:
    ctx->pc = 0x7F052724u;
    // 7F052724: andc   r6, r6, r3
    {
        ctx->gpr[6] = ctx->gpr[6] & ~ctx->gpr[3];
    }

label_7F052728:
    ctx->pc = 0x7F052728u;
    // 7F052728: rlwinm r3, r6, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x0000FFFFu;
    }

label_7F05272C:
    ctx->pc = 0x7F05272Cu;
    // 7F05272C: sth     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F052730:
    ctx->pc = 0x7F052730u;
    // 7F052730: nor   r3, r3, r3
    {
        ctx->gpr[3] = ~(ctx->gpr[3] | ctx->gpr[3]);
    }

label_7F052734:
    ctx->pc = 0x7F052734u;
    // 7F052734: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F052738:
    loop_7F052738(ctx);
    if (ctx->pc == 0x7F052768u) goto label_7F052768;
    return;
label_7F05273C:
    // 7F05273C: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

label_7F052740:
    ctx->pc = 0x7F052740u;
    // 7F052740: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052744:
    // 7F052744: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F052748:
    ctx->pc = 0x7F052748u;
    // 7F052748: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05274C:
    ctx->pc = 0x7F05274Cu;
    // 7F05274C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052750:
    // 7F052750: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F052754:
    ctx->pc = 0x7F052754u;
    // 7F052754: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052758:
    ctx->pc = 0x7F052758u;
    // 7F052758: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05275C:
    // 7F05275C: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F052760:
    ctx->pc = 0x7F052760u;
    // 7F052760: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052764:
    // 7F052764: bc    16, 0, 0x7F052738
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F052738u;
                return;
            }
            goto label_7F052738;
        }
    }

label_7F052768:
    ctx->pc = 0x7F052768u;
    ctx->downcount -= 1;
    // 7F052768: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F05276C:
    ctx->pc = 0x7F05276Cu;
    ctx->downcount -= 2;
    // 7F05276C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F052770:
    ctx->pc = 0x7F052770u;
    // 7F052770: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052774:
    ctx->pc = 0x7F052774u;
    ctx->downcount -= 28;
    // 7F052774: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F052778:
    ctx->pc = 0x7F052778u;
    // 7F052778: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F05277C:
    ctx->pc = 0x7F05277Cu;
    // 7F05277C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052780:
    ctx->pc = 0x7F052780u;
    // 7F052780: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F052784:
    ctx->pc = 0x7F052784u;
    // 7F052784: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F052788:
    ctx->pc = 0x7F052788u;
    // 7F052788: or.   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F05278C:
    ctx->pc = 0x7F05278Cu;
    // 7F05278C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F052790:
    ctx->pc = 0x7F052790u;
    // 7F052790: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F052794:
    ctx->pc = 0x7F052794u;
    // 7F052794: lwz     r5, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F052798:
    ctx->pc = 0x7F052798u;
    // 7F052798: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05279C:
    ctx->pc = 0x7F05279Cu;
    // 7F05279C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0527A0:
    ctx->pc = 0x7F0527A0u;
    // 7F0527A0: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0527A4:
    ctx->pc = 0x7F0527A4u;
    // 7F0527A4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0527A8:
    ctx->pc = 0x7F0527A8u;
    // 7F0527A8: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0527AC:
    ctx->pc = 0x7F0527ACu;
    // 7F0527AC: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0527B0:
    ctx->pc = 0x7F0527B0u;
    // 7F0527B0: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0527B4:
    ctx->pc = 0x7F0527B4u;
    // 7F0527B4: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0527B8:
    ctx->pc = 0x7F0527B8u;
    // 7F0527B8: bc    4, 2, 0x7F0527D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0527D0;
        }
    }

label_7F0527BC:
    ctx->pc = 0x7F0527BCu;
    ctx->downcount -= 5;
    // 7F0527BC: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0527C0:
    ctx->pc = 0x7F0527C0u;
    // 7F0527C0: li      r3, 1733
    ctx->gpr[3] = (u32)(s32)(1733);

label_7F0527C4:
    ctx->pc = 0x7F0527C4u;
    // 7F0527C4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0527C8:
    ctx->pc = 0x7F0527C8u;
    // 7F0527C8: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F0527CC:
    ctx->pc = 0x7F0527CCu;
    // 7F0527CC: bl      0x7F0513A0
    {
            ctx->lr = 0x7F0527D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F0527D0:
    ctx->pc = 0x7F0527D0u;
    ctx->downcount -= 2;
    // 7F0527D0: cmpwi   r29, 96
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(96);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0527D4:
    ctx->pc = 0x7F0527D4u;
    // 7F0527D4: bc    4, 2, 0x7F05280C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05280C;
        }
    }

label_7F0527D8:
    ctx->pc = 0x7F0527D8u;
    ctx->downcount -= 13;
    // 7F0527D8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0527DC:
    ctx->pc = 0x7F0527DCu;
    // 7F0527DC: lwz     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0527E0:
    ctx->pc = 0x7F0527E0u;
    // 7F0527E0: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0527E4:
    ctx->pc = 0x7F0527E4u;
    // 7F0527E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0527E8:
    ctx->pc = 0x7F0527E8u;
    // 7F0527E8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0527EC:
    ctx->pc = 0x7F0527ECu;
    // 7F0527EC: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0527F0:
    ctx->pc = 0x7F0527F0u;
    // 7F0527F0: stw     r4, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0527F4:
    ctx->pc = 0x7F0527F4u;
    // 7F0527F4: stw     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0527F8:
    ctx->pc = 0x7F0527F8u;
    // 7F0527F8: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0527FC:
    ctx->pc = 0x7F0527FCu;
    // 7F0527FC: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052800:
    ctx->pc = 0x7F052800u;
    // 7F052800: stw     r4, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052804:
    ctx->pc = 0x7F052804u;
    // 7F052804: stw     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052808:
    ctx->pc = 0x7F052808u;
    // 7F052808: b       0x7F0528E0
    {
            goto label_7F0528E0;
    }

label_7F05280C:
    ctx->pc = 0x7F05280Cu;
    ctx->downcount -= 2;
    // 7F05280C: cmpwi   r30, 0
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

label_7F052810:
    ctx->pc = 0x7F052810u;
    // 7F052810: bc    4, 2, 0x7F0528B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0528B0;
        }
    }

label_7F052814:
    ctx->pc = 0x7F052814u;
    ctx->downcount -= 2;
    // 7F052814: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F052818:
    ctx->pc = 0x7F052818u;
    // 7F052818: bl      0x7F02A56C
    {
            ctx->lr = 0x7F05281Cu;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F05281C:
    ctx->pc = 0x7F05281Cu;
    ctx->downcount -= 13;
    // 7F05281C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F052820:
    ctx->pc = 0x7F052820u;
    // 7F052820: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F052824:
    ctx->pc = 0x7F052824u;
    // 7F052824: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F052828:
    ctx->pc = 0x7F052828u;
    // 7F052828: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F05282C:
    ctx->pc = 0x7F05282Cu;
    // 7F05282C: addi    r5, r4, -10800
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10800);

label_7F052830:
    ctx->pc = 0x7F052830u;
    // 7F052830: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052834:
    ctx->pc = 0x7F052834u;
    // 7F052834: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052838:
    ctx->pc = 0x7F052838u;
    // 7F052838: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F05283C:
    ctx->pc = 0x7F05283Cu;
    // 7F05283C: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F05283Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F052840:
    ctx->pc = 0x7F052840u;
    // 7F052840: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052840u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F052844:
    ctx->pc = 0x7F052844u;
    // 7F052844: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F052844u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F052848:
    ctx->pc = 0x7F052848u;
    // 7F052848: stfs     f0, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052848u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F05284C:
    ctx->pc = 0x7F05284Cu;
    // 7F05284C: bl      0x7F02A56C
    {
            ctx->lr = 0x7F052850u;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F052850:
    ctx->pc = 0x7F052850u;
    ctx->downcount -= 13;
    // 7F052850: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F052854:
    ctx->pc = 0x7F052854u;
    // 7F052854: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F052858:
    ctx->pc = 0x7F052858u;
    // 7F052858: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F05285C:
    ctx->pc = 0x7F05285Cu;
    // 7F05285C: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F052860:
    ctx->pc = 0x7F052860u;
    // 7F052860: addi    r5, r4, -10800
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10800);

label_7F052864:
    ctx->pc = 0x7F052864u;
    // 7F052864: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052868:
    ctx->pc = 0x7F052868u;
    // 7F052868: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05286C:
    ctx->pc = 0x7F05286Cu;
    // 7F05286C: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F052870:
    ctx->pc = 0x7F052870u;
    // 7F052870: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F052870u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F052874:
    ctx->pc = 0x7F052874u;
    // 7F052874: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052874u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F052878:
    ctx->pc = 0x7F052878u;
    // 7F052878: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F052878u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F05287C:
    ctx->pc = 0x7F05287Cu;
    // 7F05287C: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F05287Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F052880:
    ctx->pc = 0x7F052880u;
    // 7F052880: bl      0x7F02A56C
    {
            ctx->lr = 0x7F052884u;
            ctx->pc = 0x7F02A56Cu;
            return;
    }

label_7F052884:
    ctx->pc = 0x7F052884u;
    ctx->downcount -= 11;
    // 7F052884: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F052888:
    ctx->pc = 0x7F052888u;
    // 7F052888: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F05288C:
    ctx->pc = 0x7F05288Cu;
    // 7F05288C: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F052890:
    ctx->pc = 0x7F052890u;
    // 7F052890: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F052894:
    ctx->pc = 0x7F052894u;
    // 7F052894: lfd     f1, -10800(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052894u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10800);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F052898:
    ctx->pc = 0x7F052898u;
    // 7F052898: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05289C:
    ctx->pc = 0x7F05289Cu;
    // 7F05289C: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0528A0:
    ctx->pc = 0x7F0528A0u;
    // 7F0528A0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0528A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0528A4:
    ctx->pc = 0x7F0528A4u;
    // 7F0528A4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0528A4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0528A8:
    ctx->pc = 0x7F0528A8u;
    // 7F0528A8: stfs     f0, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0528A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0528AC:
    ctx->pc = 0x7F0528ACu;
    // 7F0528AC: b       0x7F0528DC
    {
            goto label_7F0528DC;
    }

label_7F0528B0:
    ctx->pc = 0x7F0528B0u;
    ctx->downcount -= 11;
    // 7F0528B0: lwz     r3, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0528B4:
    ctx->pc = 0x7F0528B4u;
    // 7F0528B4: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0528B8:
    ctx->pc = 0x7F0528B8u;
    // 7F0528B8: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0528BC:
    ctx->pc = 0x7F0528BCu;
    // 7F0528BC: lwz     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0528C0:
    ctx->pc = 0x7F0528C0u;
    // 7F0528C0: lwz     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0528C4:
    ctx->pc = 0x7F0528C4u;
    // 7F0528C4: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0528C8:
    ctx->pc = 0x7F0528C8u;
    // 7F0528C8: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0528CC:
    ctx->pc = 0x7F0528CCu;
    // 7F0528CC: lwz     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0528D0:
    ctx->pc = 0x7F0528D0u;
    // 7F0528D0: lwz     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0528D4:
    ctx->pc = 0x7F0528D4u;
    // 7F0528D4: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0528D8:
    ctx->pc = 0x7F0528D8u;
    // 7F0528D8: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0528DC:
    ctx->pc = 0x7F0528DCu;
    ctx->downcount -= 1;
    // 7F0528DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0528E0:
    ctx->pc = 0x7F0528E0u;
    ctx->downcount -= 16;
    // 7F0528E0: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0528E4:
    ctx->pc = 0x7F0528E4u;
    // 7F0528E4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0528E8:
    ctx->pc = 0x7F0528E8u;
    // 7F0528E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0528EC:
    ctx->pc = 0x7F0528ECu;
    // 7F0528EC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0528F0:
    ctx->pc = 0x7F0528F0u;
    // 7F0528F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0528F4:
    ctx->pc = 0x7F0528F4u;
    ctx->downcount -= 17;
    // 7F0528F4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0528F8:
    ctx->pc = 0x7F0528F8u;
    // 7F0528F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0528FC:
    ctx->pc = 0x7F0528FCu;
    // 7F0528FC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052900:
    ctx->pc = 0x7F052900u;
    // 7F052900: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F052904:
    ctx->pc = 0x7F052904u;
    // 7F052904: or.   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F052908:
    ctx->pc = 0x7F052908u;
    // 7F052908: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F05290C:
    ctx->pc = 0x7F05290Cu;
    // 7F05290C: bc    4, 2, 0x7F052978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052978;
        }
    }

label_7F052910:
    ctx->pc = 0x7F052910u;
    ctx->downcount -= 12;
    // 7F052910: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F052914:
    ctx->pc = 0x7F052914u;
    // 7F052914: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F052918:
    ctx->pc = 0x7F052918u;
    // 7F052918: lfs     f2, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F052918u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F05291C:
    ctx->pc = 0x7F05291Cu;
    // 7F05291C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F052920:
    ctx->pc = 0x7F052920u;
    // 7F052920: lfs     f1, -10792(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052920u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10792);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F052924:
    ctx->pc = 0x7F052924u;
    // 7F052924: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_7F052928:
    ctx->pc = 0x7F052928u;
    // 7F052928: lfs     f0, -10788(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F052928u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10788);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F05292C:
    ctx->pc = 0x7F05292Cu;
    // 7F05292C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F052930:
    ctx->pc = 0x7F052930u;
    // 7F052930: stfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052930u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F052934:
    ctx->pc = 0x7F052934u;
    // 7F052934: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052934u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F052938:
    ctx->pc = 0x7F052938u;
    // 7F052938: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052938u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F05293C:
    ctx->pc = 0x7F05293Cu;
    // 7F05293C: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F052940u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F052940:
    ctx->pc = 0x7F052940u;
    ctx->downcount -= 2;
    // 7F052940: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F052944:
    ctx->pc = 0x7F052944u;
    // 7F052944: bl      0x7F3CC594
    {
            ctx->lr = 0x7F052948u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F052948:
    ctx->pc = 0x7F052948u;
    ctx->downcount -= 7;
    // 7F052948: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F05294C:
    ctx->pc = 0x7F05294Cu;
    // 7F05294C: lwz     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F052950:
    ctx->pc = 0x7F052950u;
    // 7F052950: addi    r4, r3, -10784
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10784);

label_7F052954:
    ctx->pc = 0x7F052954u;
    // 7F052954: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F052958:
    ctx->pc = 0x7F052958u;
    // 7F052958: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052958u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F05295C:
    ctx->pc = 0x7F05295Cu;
    // 7F05295C: addi    r4, r5, 16
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(16);

label_7F052960:
    ctx->pc = 0x7F052960u;
    // 7F052960: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F052964u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F052964:
    ctx->pc = 0x7F052964u;
    ctx->downcount -= 5;
    // 7F052964: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052968:
    ctx->pc = 0x7F052968u;
    // 7F052968: li      r3, 1734
    ctx->gpr[3] = (u32)(s32)(1734);

label_7F05296C:
    ctx->pc = 0x7F05296Cu;
    // 7F05296C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F052970:
    ctx->pc = 0x7F052970u;
    // 7F052970: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F052974:
    ctx->pc = 0x7F052974u;
    // 7F052974: bl      0x7F0513A0
    {
            ctx->lr = 0x7F052978u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F052978:
    ctx->pc = 0x7F052978u;
    ctx->downcount -= 12;
    // 7F052978: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05297C:
    ctx->pc = 0x7F05297Cu;
    // 7F05297C: lha     r5, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F052980:
    ctx->pc = 0x7F052980u;
    // 7F052980: addi    r0, r5, 64
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(64);

label_7F052984:
    ctx->pc = 0x7F052984u;
    // 7F052984: sth     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F052988:
    ctx->pc = 0x7F052988u;
    // 7F052988: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05298C:
    ctx->pc = 0x7F05298Cu;
    // 7F05298C: lha     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F052990:
    ctx->pc = 0x7F052990u;
    // 7F052990: rlwinm r0, r0, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000FFFu;
    }

label_7F052994:
    ctx->pc = 0x7F052994u;
    // 7F052994: sth     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F052998:
    ctx->pc = 0x7F052998u;
    // 7F052998: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05299C:
    ctx->pc = 0x7F05299Cu;
    // 7F05299C: lha     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0529A0:
    ctx->pc = 0x7F0529A0u;
    // 7F0529A0: cmpw    r5, r0
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

label_7F0529A4:
    ctx->pc = 0x7F0529A4u;
    // 7F0529A4: bc    12, 1, 0x7F0529B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0529B0;
        }
    }

label_7F0529A8:
    ctx->pc = 0x7F0529A8u;
    ctx->downcount -= 2;
    // 7F0529A8: cmpwi   r5, 2048
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0529AC:
    ctx->pc = 0x7F0529ACu;
    // 7F0529AC: bc    4, 2, 0x7F0529C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0529C0;
        }
    }

label_7F0529B0:
    ctx->pc = 0x7F0529B0u;
    ctx->downcount -= 4;
    // 7F0529B0: li      r3, 1734
    ctx->gpr[3] = (u32)(s32)(1734);

label_7F0529B4:
    ctx->pc = 0x7F0529B4u;
    // 7F0529B4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0529B8:
    ctx->pc = 0x7F0529B8u;
    // 7F0529B8: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F0529BC:
    ctx->pc = 0x7F0529BCu;
    // 7F0529BC: bl      0x7F0513A0
    {
            ctx->lr = 0x7F0529C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F0529C0:
    ctx->pc = 0x7F0529C0u;
    ctx->downcount -= 2;
    // 7F0529C0: cmpwi   r30, 136
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(136);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0529C4:
    ctx->pc = 0x7F0529C4u;
    // 7F0529C4: bc    4, 2, 0x7F0529FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0529FC;
        }
    }

label_7F0529C8:
    ctx->pc = 0x7F0529C8u;
    ctx->downcount -= 13;
    // 7F0529C8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0529CC:
    ctx->pc = 0x7F0529CCu;
    // 7F0529CC: lwz     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0529D0:
    ctx->pc = 0x7F0529D0u;
    // 7F0529D0: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0529D4:
    ctx->pc = 0x7F0529D4u;
    // 7F0529D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0529D8:
    ctx->pc = 0x7F0529D8u;
    // 7F0529D8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0529DC:
    ctx->pc = 0x7F0529DCu;
    // 7F0529DC: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0529E0:
    ctx->pc = 0x7F0529E0u;
    // 7F0529E0: stw     r4, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0529E4:
    ctx->pc = 0x7F0529E4u;
    // 7F0529E4: stw     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0529E8:
    ctx->pc = 0x7F0529E8u;
    // 7F0529E8: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0529EC:
    ctx->pc = 0x7F0529ECu;
    // 7F0529EC: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0529F0:
    ctx->pc = 0x7F0529F0u;
    // 7F0529F0: stw     r4, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0529F4:
    ctx->pc = 0x7F0529F4u;
    // 7F0529F4: stw     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0529F8:
    ctx->pc = 0x7F0529F8u;
    // 7F0529F8: b       0x7F052A00
    {
            goto label_7F052A00;
    }

label_7F0529FC:
    ctx->pc = 0x7F0529FCu;
    ctx->downcount -= 1;
    // 7F0529FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F052A00:
    ctx->pc = 0x7F052A00u;
    ctx->downcount -= 16;
    // 7F052A00: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F052A04:
    ctx->pc = 0x7F052A04u;
    // 7F052A04: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052A08:
    ctx->pc = 0x7F052A08u;
    // 7F052A08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F052A0C:
    ctx->pc = 0x7F052A0Cu;
    // 7F052A0C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F052A10:
    ctx->pc = 0x7F052A10u;
    // 7F052A10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052A14:
    ctx->pc = 0x7F052A14u;
    ctx->downcount -= 17;
    // 7F052A14: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F052A18:
    ctx->pc = 0x7F052A18u;
    // 7F052A18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F052A1C:
    ctx->pc = 0x7F052A1Cu;
    // 7F052A1C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052A20:
    ctx->pc = 0x7F052A20u;
    // 7F052A20: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F052A24:
    ctx->pc = 0x7F052A24u;
    // 7F052A24: or.   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F052A28:
    ctx->pc = 0x7F052A28u;
    // 7F052A28: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F052A2C:
    ctx->pc = 0x7F052A2Cu;
    // 7F052A2C: bc    4, 2, 0x7F052A64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052A64;
        }
    }

label_7F052A30:
    ctx->pc = 0x7F052A30u;
    ctx->downcount -= 4;
    // 7F052A30: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052A34:
    ctx->pc = 0x7F052A34u;
    // 7F052A34: addi    r3, r31, 8
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(8);

label_7F052A38:
    ctx->pc = 0x7F052A38u;
    // 7F052A38: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F052A3C:
    ctx->pc = 0x7F052A3Cu;
    // 7F052A3C: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F052A40u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F052A40:
    ctx->pc = 0x7F052A40u;
    ctx->downcount -= 2;
    // 7F052A40: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F052A44:
    ctx->pc = 0x7F052A44u;
    // 7F052A44: bl      0x7F3CC594
    {
            ctx->lr = 0x7F052A48u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F052A48:
    ctx->pc = 0x7F052A48u;
    ctx->downcount -= 7;
    // 7F052A48: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F052A4C:
    ctx->pc = 0x7F052A4Cu;
    // 7F052A4C: lwz     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F052A50:
    ctx->pc = 0x7F052A50u;
    // 7F052A50: addi    r4, r3, -10784
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10784);

label_7F052A54:
    ctx->pc = 0x7F052A54u;
    // 7F052A54: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F052A58:
    ctx->pc = 0x7F052A58u;
    // 7F052A58: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052A58u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F052A5C:
    ctx->pc = 0x7F052A5Cu;
    // 7F052A5C: addi    r4, r5, 16
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(16);

label_7F052A60:
    ctx->pc = 0x7F052A60u;
    // 7F052A60: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F052A64u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F052A64:
    ctx->pc = 0x7F052A64u;
    ctx->downcount -= 12;
    // 7F052A64: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052A68:
    ctx->pc = 0x7F052A68u;
    // 7F052A68: lha     r5, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F052A6C:
    ctx->pc = 0x7F052A6Cu;
    // 7F052A6C: addi    r0, r5, 64
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(64);

label_7F052A70:
    ctx->pc = 0x7F052A70u;
    // 7F052A70: sth     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F052A74:
    ctx->pc = 0x7F052A74u;
    // 7F052A74: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052A78:
    ctx->pc = 0x7F052A78u;
    // 7F052A78: lha     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F052A7C:
    ctx->pc = 0x7F052A7Cu;
    // 7F052A7C: rlwinm r0, r0, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000FFFu;
    }

label_7F052A80:
    ctx->pc = 0x7F052A80u;
    // 7F052A80: sth     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F052A84:
    ctx->pc = 0x7F052A84u;
    // 7F052A84: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052A88:
    ctx->pc = 0x7F052A88u;
    // 7F052A88: lha     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F052A8C:
    ctx->pc = 0x7F052A8Cu;
    // 7F052A8C: cmpw    r5, r0
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

label_7F052A90:
    ctx->pc = 0x7F052A90u;
    // 7F052A90: bc    12, 1, 0x7F052A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F052A9C;
        }
    }

label_7F052A94:
    ctx->pc = 0x7F052A94u;
    ctx->downcount -= 2;
    // 7F052A94: cmpwi   r5, 2048
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F052A98:
    ctx->pc = 0x7F052A98u;
    // 7F052A98: bc    4, 2, 0x7F052AAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052AAC;
        }
    }

label_7F052A9C:
    ctx->pc = 0x7F052A9Cu;
    ctx->downcount -= 4;
    // 7F052A9C: li      r3, 1734
    ctx->gpr[3] = (u32)(s32)(1734);

label_7F052AA0:
    ctx->pc = 0x7F052AA0u;
    // 7F052AA0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F052AA4:
    ctx->pc = 0x7F052AA4u;
    // 7F052AA4: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F052AA8:
    ctx->pc = 0x7F052AA8u;
    // 7F052AA8: bl      0x7F0513A0
    {
            ctx->lr = 0x7F052AACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F052AAC:
    ctx->pc = 0x7F052AACu;
    ctx->downcount -= 2;
    // 7F052AAC: cmpwi   r30, 136
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(136);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F052AB0:
    ctx->pc = 0x7F052AB0u;
    // 7F052AB0: bc    4, 2, 0x7F052B34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052B34;
        }
    }

label_7F052AB4:
    ctx->pc = 0x7F052AB4u;
    ctx->downcount -= 30;
    // 7F052AB4: lwz     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F052AB8:
    ctx->pc = 0x7F052AB8u;
    // 7F052AB8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F052ABC:
    ctx->pc = 0x7F052ABCu;
    // 7F052ABC: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052AC0:
    ctx->pc = 0x7F052AC0u;
    // 7F052AC0: addi    r7, r3, 12832
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F052AC4:
    ctx->pc = 0x7F052AC4u;
    // 7F052AC4: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052AC8:
    ctx->pc = 0x7F052AC8u;
    // 7F052AC8: li      r3, 1733
    ctx->gpr[3] = (u32)(s32)(1733);

label_7F052ACC:
    ctx->pc = 0x7F052ACCu;
    // 7F052ACC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F052AD0:
    ctx->pc = 0x7F052AD0u;
    // 7F052AD0: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F052AD4:
    ctx->pc = 0x7F052AD4u;
    // 7F052AD4: stw     r4, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052AD8:
    ctx->pc = 0x7F052AD8u;
    // 7F052AD8: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052ADC:
    ctx->pc = 0x7F052ADCu;
    // 7F052ADC: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052AE0:
    ctx->pc = 0x7F052AE0u;
    // 7F052AE0: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052AE4:
    ctx->pc = 0x7F052AE4u;
    // 7F052AE4: stw     r4, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052AE8:
    ctx->pc = 0x7F052AE8u;
    // 7F052AE8: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052AEC:
    ctx->pc = 0x7F052AECu;
    // 7F052AEC: lwz     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F052AF0:
    ctx->pc = 0x7F052AF0u;
    // 7F052AF0: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052AF4:
    ctx->pc = 0x7F052AF4u;
    // 7F052AF4: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052AF8:
    ctx->pc = 0x7F052AF8u;
    // 7F052AF8: stw     r4, 40(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052AFC:
    ctx->pc = 0x7F052AFCu;
    // 7F052AFC: stw     r0, 44(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052B00:
    ctx->pc = 0x7F052B00u;
    // 7F052B00: lwz     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F052B04:
    ctx->pc = 0x7F052B04u;
    // 7F052B04: lwz     r4, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052B08:
    ctx->pc = 0x7F052B08u;
    // 7F052B08: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052B0C:
    ctx->pc = 0x7F052B0Cu;
    // 7F052B0C: stw     r4, 16(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052B10:
    ctx->pc = 0x7F052B10u;
    // 7F052B10: stw     r0, 20(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052B14:
    ctx->pc = 0x7F052B14u;
    // 7F052B14: lwz     r4, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052B18:
    ctx->pc = 0x7F052B18u;
    // 7F052B18: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052B1C:
    ctx->pc = 0x7F052B1Cu;
    // 7F052B1C: stw     r4, 24(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052B20:
    ctx->pc = 0x7F052B20u;
    // 7F052B20: stw     r0, 28(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052B24:
    ctx->pc = 0x7F052B24u;
    // 7F052B24: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052B28:
    ctx->pc = 0x7F052B28u;
    // 7F052B28: bl      0x7F0513A0
    {
            ctx->lr = 0x7F052B2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F052B2C:
    ctx->pc = 0x7F052B2Cu;
    ctx->downcount -= 2;
    // 7F052B2C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F052B30:
    ctx->pc = 0x7F052B30u;
    // 7F052B30: b       0x7F052B38
    {
            goto label_7F052B38;
    }

label_7F052B34:
    ctx->pc = 0x7F052B34u;
    ctx->downcount -= 1;
    // 7F052B34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F052B38:
    ctx->pc = 0x7F052B38u;
    ctx->downcount -= 16;
    // 7F052B38: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F052B3C:
    ctx->pc = 0x7F052B3Cu;
    // 7F052B3C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052B40:
    ctx->pc = 0x7F052B40u;
    // 7F052B40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F052B44:
    ctx->pc = 0x7F052B44u;
    // 7F052B44: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F052B48:
    ctx->pc = 0x7F052B48u;
    // 7F052B48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052B4C:
    ctx->pc = 0x7F052B4Cu;
    ctx->downcount -= 32;
    // 7F052B4C: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F052B50:
    ctx->pc = 0x7F052B50u;
    // 7F052B50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F052B54:
    ctx->pc = 0x7F052B54u;
    // 7F052B54: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052B58:
    ctx->pc = 0x7F052B58u;
    // 7F052B58: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052B58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F052B5C:
    ctx->pc = 0x7F052B5Cu;
    // 7F052B5C: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F052B5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F052B5Cu);
        if (ctx->exception) return;
    }

label_7F052B60:
    ctx->pc = 0x7F052B60u;
    // 7F052B60: stfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052B60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F052B64:
    ctx->pc = 0x7F052B64u;
    // 7F052B64: psq_st   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F052B64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F052B64u);
        if (ctx->exception) return;
    }

label_7F052B68:
    ctx->pc = 0x7F052B68u;
    // 7F052B68: stmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F052B6C:
    ctx->pc = 0x7F052B6Cu;
    // 7F052B6C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F052B70:
    ctx->pc = 0x7F052B70u;
    // 7F052B70: or.   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F052B74:
    ctx->pc = 0x7F052B74u;
    // 7F052B74: addi    r7, r3, -10776
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-10776);

label_7F052B78:
    ctx->pc = 0x7F052B78u;
    // 7F052B78: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F052B7C:
    ctx->pc = 0x7F052B7Cu;
    // 7F052B7C: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F052B80:
    ctx->pc = 0x7F052B80u;
    // 7F052B80: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F052B84:
    ctx->pc = 0x7F052B84u;
    // 7F052B84: lwz     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052B88:
    ctx->pc = 0x7F052B88u;
    // 7F052B88: lwz     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052B8C:
    ctx->pc = 0x7F052B8Cu;
    // 7F052B8C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052B90:
    ctx->pc = 0x7F052B90u;
    // 7F052B90: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F052B94:
    ctx->pc = 0x7F052B94u;
    // 7F052B94: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052B98:
    ctx->pc = 0x7F052B98u;
    // 7F052B98: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F052B9C:
    ctx->pc = 0x7F052B9Cu;
    // 7F052B9C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052BA0:
    ctx->pc = 0x7F052BA0u;
    // 7F052BA0: bc    4, 2, 0x7F052D10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052D10;
        }
    }

label_7F052BA4:
    ctx->pc = 0x7F052BA4u;
    ctx->downcount -= 12;
    // 7F052BA4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F052BA8:
    ctx->pc = 0x7F052BA8u;
    // 7F052BA8: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F052BAC:
    ctx->pc = 0x7F052BACu;
    // 7F052BAC: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F052BB0:
    ctx->pc = 0x7F052BB0u;
    // 7F052BB0: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052BB4:
    ctx->pc = 0x7F052BB4u;
    // 7F052BB4: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052BB8:
    ctx->pc = 0x7F052BB8u;
    // 7F052BB8: stw     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F052BBC:
    ctx->pc = 0x7F052BBCu;
    // 7F052BBC: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052BC0:
    ctx->pc = 0x7F052BC0u;
    // 7F052BC0: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052BC4:
    ctx->pc = 0x7F052BC4u;
    // 7F052BC4: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052BC8:
    ctx->pc = 0x7F052BC8u;
    // 7F052BC8: stw     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F052BCC:
    ctx->pc = 0x7F052BCCu;
    // 7F052BCC: stw     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052BD0:
    ctx->pc = 0x7F052BD0u;
    // 7F052BD0: bl      0x7F052E54
    {
            ctx->lr = 0x7F052BD4u;
            goto label_7F052E54;
    }

label_7F052BD4:
    ctx->pc = 0x7F052BD4u;
    ctx->downcount -= 4;
    // 7F052BD4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F052BD8:
    ctx->pc = 0x7F052BD8u;
    // 7F052BD8: lfs     f0, -10760(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F052BD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10760);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F052BDC:
    ctx->pc = 0x7F052BDCu;
    // 7F052BDC: fmuls   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F052BDCu)) return;
    ppc_fmuls(ctx, 31, 0, 1);

label_7F052BE0:
    ctx->pc = 0x7F052BE0u;
    // 7F052BE0: bl      0x7F052E54
    {
            ctx->lr = 0x7F052BE4u;
            goto label_7F052E54;
    }

label_7F052BE4:
    ctx->pc = 0x7F052BE4u;
    ctx->downcount -= 4;
    // 7F052BE4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F052BE8:
    ctx->pc = 0x7F052BE8u;
    // 7F052BE8: lfs     f0, -10760(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F052BE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10760);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F052BEC:
    ctx->pc = 0x7F052BECu;
    // 7F052BEC: fmuls   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F052BECu)) return;
    ppc_fmuls(ctx, 30, 0, 1);

label_7F052BF0:
    ctx->pc = 0x7F052BF0u;
    // 7F052BF0: bl      0x7F052E54
    {
            ctx->lr = 0x7F052BF4u;
            goto label_7F052E54;
    }

label_7F052BF4:
    ctx->pc = 0x7F052BF4u;
    ctx->downcount -= 7;
    // 7F052BF4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F052BF8:
    ctx->pc = 0x7F052BF8u;
    // 7F052BF8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F052BFC:
    ctx->pc = 0x7F052BFCu;
    // 7F052BFC: lfs     f2, -10760(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052BFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10760);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F052C00:
    ctx->pc = 0x7F052C00u;
    // 7F052C00: lfs     f0, -10756(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F052C00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10756);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F052C04:
    ctx->pc = 0x7F052C04u;
    // 7F052C04: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F052C04u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F052C08:
    ctx->pc = 0x7F052C08u;
    // 7F052C08: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F052C08u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F052C0C:
    ctx->pc = 0x7F052C0Cu;
    // 7F052C0C: bc    4, 0, 0x7F052C14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052C14;
        }
    }

label_7F052C10:
    ctx->pc = 0x7F052C10u;
    ctx->downcount -= 1;
    // 7F052C10: fneg    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F052C10u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[1]) ^ 0x8000000000000000ull);

label_7F052C14:
    ctx->pc = 0x7F052C14u;
    ctx->downcount -= 11;
    // 7F052C14: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052C18:
    ctx->pc = 0x7F052C18u;
    // 7F052C18: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F052C18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F052C1C:
    ctx->pc = 0x7F052C1Cu;
    // 7F052C1C: fadds   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F052C1Cu)) return;
    ppc_fadds(ctx, 0, 0, 31);

label_7F052C20:
    ctx->pc = 0x7F052C20u;
    // 7F052C20: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052C20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F052C24:
    ctx->pc = 0x7F052C24u;
    // 7F052C24: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F052C24u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F052C28:
    ctx->pc = 0x7F052C28u;
    // 7F052C28: fadds   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F052C28u)) return;
    ppc_fadds(ctx, 0, 0, 30);

label_7F052C2C:
    ctx->pc = 0x7F052C2Cu;
    // 7F052C2C: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052C2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F052C30:
    ctx->pc = 0x7F052C30u;
    // 7F052C30: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F052C30u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F052C34:
    ctx->pc = 0x7F052C34u;
    // 7F052C34: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F052C34u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F052C38:
    ctx->pc = 0x7F052C38u;
    // 7F052C38: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052C38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F052C3C:
    ctx->pc = 0x7F052C3Cu;
    // 7F052C3C: bl      0x7F052E30
    {
            ctx->lr = 0x7F052C40u;
            goto label_7F052E30;
    }

label_7F052C40:
    ctx->pc = 0x7F052C40u;
    ctx->downcount -= 4;
    // 7F052C40: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052C44:
    ctx->pc = 0x7F052C44u;
    // 7F052C44: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F052C48:
    ctx->pc = 0x7F052C48u;
    // 7F052C48: sth     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F052C4C:
    ctx->pc = 0x7F052C4Cu;
    // 7F052C4C: bl      0x7F052E30
    {
            ctx->lr = 0x7F052C50u;
            goto label_7F052E30;
    }

label_7F052C50:
    ctx->pc = 0x7F052C50u;
    ctx->downcount -= 4;
    // 7F052C50: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052C54:
    ctx->pc = 0x7F052C54u;
    // 7F052C54: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F052C58:
    ctx->pc = 0x7F052C58u;
    // 7F052C58: sth     r0, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F052C5C:
    ctx->pc = 0x7F052C5Cu;
    // 7F052C5C: bl      0x7F052E30
    {
            ctx->lr = 0x7F052C60u;
            goto label_7F052E30;
    }

label_7F052C60:
    ctx->pc = 0x7F052C60u;
    ctx->downcount -= 4;
    // 7F052C60: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052C64:
    ctx->pc = 0x7F052C64u;
    // 7F052C64: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F052C68:
    ctx->pc = 0x7F052C68u;
    // 7F052C68: sth     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F052C6C:
    ctx->pc = 0x7F052C6Cu;
    // 7F052C6C: bl      0x7F052E30
    {
            ctx->lr = 0x7F052C70u;
            goto label_7F052E30;
    }

label_7F052C70:
    ctx->pc = 0x7F052C70u;
    ctx->downcount -= 5;
    // 7F052C70: rlwinm r4, r3, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F052C74:
    ctx->pc = 0x7F052C74u;
    // 7F052C74: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052C78:
    ctx->pc = 0x7F052C78u;
    // 7F052C78: addi    r0, r4, -128
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-128);

label_7F052C7C:
    ctx->pc = 0x7F052C7Cu;
    // 7F052C7C: sth     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F052C80:
    ctx->pc = 0x7F052C80u;
    // 7F052C80: bl      0x7F052E30
    {
            ctx->lr = 0x7F052C84u;
            goto label_7F052E30;
    }

label_7F052C84:
    ctx->pc = 0x7F052C84u;
    ctx->downcount -= 5;
    // 7F052C84: rlwinm r4, r3, 0, 25, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000040u;
    }

label_7F052C88:
    ctx->pc = 0x7F052C88u;
    // 7F052C88: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052C8C:
    ctx->pc = 0x7F052C8Cu;
    // 7F052C8C: addi    r0, r4, -32
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-32);

label_7F052C90:
    ctx->pc = 0x7F052C90u;
    // 7F052C90: sth     r0, 42(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F052C94:
    ctx->pc = 0x7F052C94u;
    // 7F052C94: bl      0x7F052E30
    {
            ctx->lr = 0x7F052C98u;
            goto label_7F052E30;
    }

label_7F052C98:
    ctx->pc = 0x7F052C98u;
    ctx->downcount -= 8;
    // 7F052C98: rlwinm r3, r3, 0, 24, 24
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000080u;
    }

label_7F052C9C:
    ctx->pc = 0x7F052C9Cu;
    // 7F052C9C: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052CA0:
    ctx->pc = 0x7F052CA0u;
    // 7F052CA0: addi    r0, r3, -64
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-64);

label_7F052CA4:
    ctx->pc = 0x7F052CA4u;
    // 7F052CA4: addi    r5, r1, 48
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(48);

label_7F052CA8:
    ctx->pc = 0x7F052CA8u;
    // 7F052CA8: sth     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F052CAC:
    ctx->pc = 0x7F052CACu;
    // 7F052CAC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F052CB0:
    ctx->pc = 0x7F052CB0u;
    // 7F052CB0: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052CB4:
    ctx->pc = 0x7F052CB4u;
    // 7F052CB4: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F052CB8u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F052CB8:
    ctx->pc = 0x7F052CB8u;
    ctx->downcount -= 2;
    // 7F052CB8: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F052CBC:
    ctx->pc = 0x7F052CBCu;
    // 7F052CBC: bl      0x7F3CC594
    {
            ctx->lr = 0x7F052CC0u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F052CC0:
    ctx->pc = 0x7F052CC0u;
    ctx->downcount -= 7;
    // 7F052CC0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F052CC4:
    ctx->pc = 0x7F052CC4u;
    // 7F052CC4: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F052CC8:
    ctx->pc = 0x7F052CC8u;
    // 7F052CC8: addi    r4, r3, -10752
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10752);

label_7F052CCC:
    ctx->pc = 0x7F052CCCu;
    // 7F052CCC: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F052CD0:
    ctx->pc = 0x7F052CD0u;
    // 7F052CD0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052CD0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F052CD4:
    ctx->pc = 0x7F052CD4u;
    // 7F052CD4: addi    r4, r5, 16
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(16);

label_7F052CD8:
    ctx->pc = 0x7F052CD8u;
    // 7F052CD8: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F052CDCu;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F052CDC:
    ctx->pc = 0x7F052CDCu;
    ctx->downcount -= 2;
    // 7F052CDC: cmpwi   r31, 0
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

label_7F052CE0:
    ctx->pc = 0x7F052CE0u;
    // 7F052CE0: bc    4, 2, 0x7F052CF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052CF8;
        }
    }

label_7F052CE4:
    ctx->pc = 0x7F052CE4u;
    ctx->downcount -= 5;
    // 7F052CE4: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052CE8:
    ctx->pc = 0x7F052CE8u;
    // 7F052CE8: li      r3, 1753
    ctx->gpr[3] = (u32)(s32)(1753);

label_7F052CEC:
    ctx->pc = 0x7F052CECu;
    // 7F052CEC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F052CF0:
    ctx->pc = 0x7F052CF0u;
    // 7F052CF0: li      r6, 10
    ctx->gpr[6] = (u32)(s32)(10);

label_7F052CF4:
    ctx->pc = 0x7F052CF4u;
    // 7F052CF4: bl      0x7F0513A0
    {
            ctx->lr = 0x7F052CF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F052CF8:
    ctx->pc = 0x7F052CF8u;
    ctx->downcount -= 4;
    // 7F052CF8: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052CFC:
    ctx->pc = 0x7F052CFCu;
    // 7F052CFC: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F052D00:
    ctx->pc = 0x7F052D00u;
    // 7F052D00: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F052D04:
    ctx->pc = 0x7F052D04u;
    // 7F052D04: bl      0x7F1EDD18
    {
            ctx->lr = 0x7F052D08u;
            ctx->pc = 0x7F1EDD18u;
            return;
    }

label_7F052D08:
    ctx->pc = 0x7F052D08u;
    ctx->downcount -= 2;
    // 7F052D08: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052D0C:
    ctx->pc = 0x7F052D0Cu;
    // 7F052D0C: bl      0x7F228CE4
    {
            ctx->lr = 0x7F052D10u;
            ctx->pc = 0x7F228CE4u;
            return;
    }

label_7F052D10:
    ctx->pc = 0x7F052D10u;
    ctx->downcount -= 9;
    // 7F052D10: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052D14:
    ctx->pc = 0x7F052D14u;
    // 7F052D14: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F052D18:
    ctx->pc = 0x7F052D18u;
    // 7F052D18: lfd     f0, -10744(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F052D18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10744);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F052D1C:
    ctx->pc = 0x7F052D1Cu;
    // 7F052D1C: cmpwi   r30, 20
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F052D20:
    ctx->pc = 0x7F052D20u;
    // 7F052D20: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052D20u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F052D24:
    ctx->pc = 0x7F052D24u;
    // 7F052D24: fsub   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F052D24u)) return;
    ppc_fsub(ctx, 0, 1, 0);

label_7F052D28:
    ctx->pc = 0x7F052D28u;
    // 7F052D28: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F052D28u)) return;
    ppc_frsp(ctx, 0, 0);

label_7F052D2C:
    ctx->pc = 0x7F052D2Cu;
    // 7F052D2C: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052D2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F052D30:
    ctx->pc = 0x7F052D30u;
    // 7F052D30: bc    4, 1, 0x7F052D44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052D44;
        }
    }

label_7F052D34:
    ctx->pc = 0x7F052D34u;
    ctx->downcount -= 4;
    // 7F052D34: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F052D38:
    ctx->pc = 0x7F052D38u;
    // 7F052D38: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052D3C:
    ctx->pc = 0x7F052D3Cu;
    // 7F052D3C: lfs     f0, -10736(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052D3Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10736);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F052D40:
    ctx->pc = 0x7F052D40u;
    // 7F052D40: stfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F052D40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F052D44:
    ctx->pc = 0x7F052D44u;
    ctx->downcount -= 6;
    // 7F052D44: lwz     r6, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F052D48:
    ctx->pc = 0x7F052D48u;
    // 7F052D48: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F052D4C:
    ctx->pc = 0x7F052D4Cu;
    // 7F052D4C: lfs     f0, -10732(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F052D4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10732);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F052D50:
    ctx->pc = 0x7F052D50u;
    // 7F052D50: lfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F052D50u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F052D54:
    ctx->pc = 0x7F052D54u;
    // 7F052D54: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F052D54u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F052D58:
    ctx->pc = 0x7F052D58u;
    // 7F052D58: bc    4, 0, 0x7F052DD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052DD4;
        }
    }

label_7F052D5C:
    ctx->pc = 0x7F052D5Cu;
    ctx->downcount -= 30;
    // 7F052D5C: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052D60:
    ctx->pc = 0x7F052D60u;
    // 7F052D60: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F052D64:
    ctx->pc = 0x7F052D64u;
    // 7F052D64: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052D68:
    ctx->pc = 0x7F052D68u;
    // 7F052D68: li      r8, -1024
    ctx->gpr[8] = (u32)(s32)(-1024);

label_7F052D6C:
    ctx->pc = 0x7F052D6Cu;
    // 7F052D6C: sth     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F052D70:
    ctx->pc = 0x7F052D70u;
    // 7F052D70: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F052D74:
    ctx->pc = 0x7F052D74u;
    // 7F052D74: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F052D78:
    ctx->pc = 0x7F052D78u;
    // 7F052D78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F052D7C:
    ctx->pc = 0x7F052D7Cu;
    // 7F052D7C: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052D80:
    ctx->pc = 0x7F052D80u;
    // 7F052D80: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052D84:
    ctx->pc = 0x7F052D84u;
    // 7F052D84: stw     r4, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052D88:
    ctx->pc = 0x7F052D88u;
    // 7F052D88: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052D8C:
    ctx->pc = 0x7F052D8Cu;
    // 7F052D8C: lwz     r6, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F052D90:
    ctx->pc = 0x7F052D90u;
    // 7F052D90: sth     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F052D94:
    ctx->pc = 0x7F052D94u;
    // 7F052D94: sth     r7, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F052D98:
    ctx->pc = 0x7F052D98u;
    // 7F052D98: stw     r4, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052D9C:
    ctx->pc = 0x7F052D9Cu;
    // 7F052D9C: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052DA0:
    ctx->pc = 0x7F052DA0u;
    // 7F052DA0: stw     r6, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F052DA4:
    ctx->pc = 0x7F052DA4u;
    // 7F052DA4: stw     r4, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052DA8:
    ctx->pc = 0x7F052DA8u;
    // 7F052DA8: stw     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052DAC:
    ctx->pc = 0x7F052DACu;
    // 7F052DAC: lwz     r6, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F052DB0:
    ctx->pc = 0x7F052DB0u;
    // 7F052DB0: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052DB4:
    ctx->pc = 0x7F052DB4u;
    // 7F052DB4: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052DB8:
    ctx->pc = 0x7F052DB8u;
    // 7F052DB8: stw     r4, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052DBC:
    ctx->pc = 0x7F052DBCu;
    // 7F052DBC: stw     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052DC0:
    ctx->pc = 0x7F052DC0u;
    // 7F052DC0: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052DC4:
    ctx->pc = 0x7F052DC4u;
    // 7F052DC4: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052DC8:
    ctx->pc = 0x7F052DC8u;
    // 7F052DC8: stw     r4, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052DCC:
    ctx->pc = 0x7F052DCCu;
    // 7F052DCC: stw     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052DD0:
    ctx->pc = 0x7F052DD0u;
    // 7F052DD0: b       0x7F052E0C
    {
            goto label_7F052E0C;
    }

label_7F052DD4:
    ctx->pc = 0x7F052DD4u;
    ctx->downcount -= 14;
    // 7F052DD4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052DD8:
    ctx->pc = 0x7F052DD8u;
    // 7F052DD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F052DDC:
    ctx->pc = 0x7F052DDCu;
    // 7F052DDC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052DE0:
    ctx->pc = 0x7F052DE0u;
    // 7F052DE0: stw     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052DE4:
    ctx->pc = 0x7F052DE4u;
    // 7F052DE4: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052DE8:
    ctx->pc = 0x7F052DE8u;
    // 7F052DE8: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052DEC:
    ctx->pc = 0x7F052DECu;
    // 7F052DEC: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052DF0:
    ctx->pc = 0x7F052DF0u;
    // 7F052DF0: stw     r4, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052DF4:
    ctx->pc = 0x7F052DF4u;
    // 7F052DF4: stw     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052DF8:
    ctx->pc = 0x7F052DF8u;
    // 7F052DF8: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F052DFC:
    ctx->pc = 0x7F052DFCu;
    // 7F052DFC: lwz     r4, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052E00:
    ctx->pc = 0x7F052E00u;
    // 7F052E00: lwz     r0, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052E04:
    ctx->pc = 0x7F052E04u;
    // 7F052E04: stw     r4, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052E08:
    ctx->pc = 0x7F052E08u;
    // 7F052E08: stw     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052E0C:
    ctx->pc = 0x7F052E0Cu;
    ctx->downcount -= 20;
    // 7F052E0C: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F052E0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F052E0Cu);
        if (ctx->exception) return;
    }

label_7F052E10:
    ctx->pc = 0x7F052E10u;
    // 7F052E10: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052E10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F052E14:
    ctx->pc = 0x7F052E14u;
    // 7F052E14: psq_l   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F052E14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F052E14u);
        if (ctx->exception) return;
    }

label_7F052E18:
    ctx->pc = 0x7F052E18u;
    // 7F052E18: lfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052E18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F052E1C:
    ctx->pc = 0x7F052E1Cu;
    // 7F052E1C: lmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F052E20:
    ctx->pc = 0x7F052E20u;
    // 7F052E20: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052E24:
    ctx->pc = 0x7F052E24u;
    // 7F052E24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F052E28:
    ctx->pc = 0x7F052E28u;
    // 7F052E28: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F052E2C:
    ctx->pc = 0x7F052E2Cu;
    // 7F052E2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052E30:
    ctx->pc = 0x7F052E30u;
    ctx->downcount -= 13;
    // 7F052E30: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F052E34:
    ctx->pc = 0x7F052E34u;
    // 7F052E34: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F052E38:
    ctx->pc = 0x7F052E38u;
    // 7F052E38: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F052E3C:
    ctx->pc = 0x7F052E3Cu;
    // 7F052E3C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052E40:
    ctx->pc = 0x7F052E40u;
    // 7F052E40: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F052E44:
    ctx->pc = 0x7F052E44u;
    // 7F052E44: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F052E48:
    ctx->pc = 0x7F052E48u;
    // 7F052E48: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F052E4C:
    ctx->pc = 0x7F052E4Cu;
    // 7F052E4C: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F052E50:
    ctx->pc = 0x7F052E50u;
    // 7F052E50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052E54:
    ctx->pc = 0x7F052E54u;
    ctx->downcount -= 4;
    // 7F052E54: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F052E58:
    ctx->pc = 0x7F052E58u;
    // 7F052E58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F052E5C:
    ctx->pc = 0x7F052E5Cu;
    // 7F052E5C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052E60:
    ctx->pc = 0x7F052E60u;
    // 7F052E60: bl      0x7F052E30
    {
            ctx->lr = 0x7F052E64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F052E30u;
                return;
            }
            goto label_7F052E30;
    }

label_7F052E64:
    ctx->pc = 0x7F052E64u;
    ctx->downcount -= 35;
    // 7F052E64: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F052E68:
    ctx->pc = 0x7F052E68u;
    // 7F052E68: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F052E6C:
    ctx->pc = 0x7F052E6Cu;
    // 7F052E6C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F052E70:
    ctx->pc = 0x7F052E70u;
    // 7F052E70: addi    r5, r4, -10720
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10720);

label_7F052E74:
    ctx->pc = 0x7F052E74u;
    // 7F052E74: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F052E78:
    ctx->pc = 0x7F052E78u;
    // 7F052E78: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F052E78u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F052E7C:
    ctx->pc = 0x7F052E7Cu;
    // 7F052E7C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052E80:
    ctx->pc = 0x7F052E80u;
    // 7F052E80: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F052E84:
    ctx->pc = 0x7F052E84u;
    // 7F052E84: lfs     f1, -10728(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F052E84u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10728);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F052E88:
    ctx->pc = 0x7F052E88u;
    // 7F052E88: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F052E88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F052E8C:
    ctx->pc = 0x7F052E8Cu;
    // 7F052E8C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052E90:
    ctx->pc = 0x7F052E90u;
    // 7F052E90: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F052E90u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F052E94:
    ctx->pc = 0x7F052E94u;
    // 7F052E94: lfs     f0, -10780(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F052E94u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10780);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F052E98:
    ctx->pc = 0x7F052E98u;
    // 7F052E98: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F052E98u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F052E9C:
    ctx->pc = 0x7F052E9Cu;
    // 7F052E9C: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F052E9Cu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F052EA0:
    ctx->pc = 0x7F052EA0u;
    // 7F052EA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F052EA4:
    ctx->pc = 0x7F052EA4u;
    // 7F052EA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F052EA8:
    ctx->pc = 0x7F052EA8u;
    // 7F052EA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F052EAC:
    ctx->pc = 0x7F052EACu;
    ctx->downcount -= 18;
    // 7F052EAC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F052EB0:
    ctx->pc = 0x7F052EB0u;
    // 7F052EB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F052EB4:
    ctx->pc = 0x7F052EB4u;
    // 7F052EB4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052EB8:
    ctx->pc = 0x7F052EB8u;
    // 7F052EB8: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F052EBC:
    ctx->pc = 0x7F052EBCu;
    // 7F052EBC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F052EC0:
    ctx->pc = 0x7F052EC0u;
    // 7F052EC0: lwz     r4, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052EC4:
    ctx->pc = 0x7F052EC4u;
    // 7F052EC4: cmplwi  r4, 0x0000
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

label_7F052EC8:
    ctx->pc = 0x7F052EC8u;
    // 7F052EC8: bc    12, 2, 0x7F052EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F052EE0;
        }
    }

label_7F052ECC:
    ctx->pc = 0x7F052ECCu;
    ctx->downcount -= 3;
    // 7F052ECC: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052ED0:
    ctx->pc = 0x7F052ED0u;
    // 7F052ED0: cmpwi   r0, 0
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

label_7F052ED4:
    ctx->pc = 0x7F052ED4u;
    // 7F052ED4: bc    4, 0, 0x7F052EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052EE0;
        }
    }

label_7F052ED8:
    ctx->pc = 0x7F052ED8u;
    ctx->downcount -= 1;
    // 7F052ED8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F052EDCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F052EDC:
    ctx->pc = 0x7F052EDCu;
    ctx->downcount -= 1;
    // 7F052EDC: b       0x7F0530E4
    {
            goto label_7F0530E4;
    }

label_7F052EE0:
    ctx->pc = 0x7F052EE0u;
    ctx->downcount -= 4;
    // 7F052EE0: lwz     r0, 340(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052EE4:
    ctx->pc = 0x7F052EE4u;
    // 7F052EE4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F052EE8:
    ctx->pc = 0x7F052EE8u;
    // 7F052EE8: cmpwi   r0, 1
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

label_7F052EEC:
    ctx->pc = 0x7F052EECu;
    // 7F052EEC: bc    12, 2, 0x7F052F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F052F70;
        }
    }

label_7F052EF0:
    ctx->pc = 0x7F052EF0u;
    ctx->downcount -= 6;
    // 7F052EF0: lwz     r0, 348(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052EF4:
    ctx->pc = 0x7F052EF4u;
    // 7F052EF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F052EF8:
    ctx->pc = 0x7F052EF8u;
    // 7F052EF8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F052EFC:
    ctx->pc = 0x7F052EFCu;
    // 7F052EFC: cmpwi   r0, 0
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

label_7F052F00:
    ctx->pc = 0x7F052F00u;
    // 7F052F00: bc    4, 1, 0x7F052F38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052F38;
        }
    }

label_7F052F04:
    ctx->downcount -= 5;
    // 7F052F04: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_7F052F08:
    ctx->pc = 0x7F052F08u;
    // 7F052F08: lwzx    r4, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052F0C:
    ctx->pc = 0x7F052F0Cu;
    // 7F052F0C: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052F10:
    // 7F052F10: cmpwi   r0, 0
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

label_7F052F14:
    // 7F052F14: bc    12, 2, 0x7F052F30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F052F30;
        }
    }

label_7F052F18:
    ctx->downcount -= 6;
    // 7F052F18: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F052F1C:
    ctx->pc = 0x7F052F1Cu;
    // 7F052F1C: stw     r0, 340(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052F20:
    ctx->pc = 0x7F052F20u;
    // 7F052F20: lwz     r3, 344(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052F24:
    // 7F052F24: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F052F28:
    ctx->pc = 0x7F052F28u;
    // 7F052F28: stw     r0, 344(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052F2C:
    // 7F052F2C: b       0x7F052F38
    {
            goto label_7F052F38;
    }

label_7F052F30:
    ctx->downcount -= 2;
    // 7F052F30: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F052F34:
    // 7F052F34: bc    16, 0, 0x7F052F04
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F052F04u;
                return;
            }
            goto label_7F052F04;
        }
    }

label_7F052F38:
    ctx->pc = 0x7F052F38u;
    ctx->downcount -= 3;
    // 7F052F38: lwz     r0, 344(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052F3C:
    ctx->pc = 0x7F052F3Cu;
    // 7F052F3C: cmpwi   r0, 0
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

label_7F052F40:
    ctx->pc = 0x7F052F40u;
    // 7F052F40: bc    4, 2, 0x7F052F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052F70;
        }
    }

label_7F052F44:
    ctx->pc = 0x7F052F44u;
    ctx->downcount -= 4;
    // 7F052F44: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F052F48:
    ctx->pc = 0x7F052F48u;
    // 7F052F48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F052F4C:
    ctx->pc = 0x7F052F4Cu;
    // 7F052F4C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F052F50:
    ctx->pc = 0x7F052F50u;
    // 7F052F50: b       0x7F052F64
    {
            goto label_7F052F64;
    }

label_7F052F54:
    loop_7F052F54(ctx);
    if (ctx->pc == 0x7F052F70u) goto label_7F052F70;
    return;
label_7F052F58:
    // 7F052F58: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F052F5C:
    ctx->pc = 0x7F052F5Cu;
    // 7F052F5C: stwx    r4, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F052F60:
    // 7F052F60: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F052F64:
    ctx->pc = 0x7F052F64u;
    ctx->downcount -= 3;
    // 7F052F64: lwz     r0, 348(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052F68:
    // 7F052F68: cmpw    r5, r0
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

label_7F052F6C:
    // 7F052F6C: bc    12, 0, 0x7F052F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F052F54u;
                return;
            }
            goto label_7F052F54;
        }
    }

label_7F052F70:
    ctx->pc = 0x7F052F70u;
    ctx->downcount -= 3;
    // 7F052F70: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F052F74:
    ctx->pc = 0x7F052F74u;
    // 7F052F74: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F052F78:
    ctx->pc = 0x7F052F78u;
    // 7F052F78: b       0x7F0530CC
    {
            goto label_7F0530CC;
    }

label_7F052F7C:
    ctx->downcount -= 10;
    // 7F052F7C: add   r31, r27, r26
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F052F80:
    ctx->pc = 0x7F052F80u;
    // 7F052F80: lwz     r5, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F052F84:
    // 7F052F84: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F052F88:
    ctx->pc = 0x7F052F88u;
    // 7F052F88: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052F8C:
    ctx->pc = 0x7F052F8Cu;
    // 7F052F8C: lwz     r0, 340(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052F90:
    ctx->pc = 0x7F052F90u;
    // 7F052F90: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052F94:
    // 7F052F94: cmpwi   r0, 1
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

label_7F052F98:
    ctx->pc = 0x7F052F98u;
    // 7F052F98: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F052F9C:
    // 7F052F9C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F052FA0:
    // 7F052FA0: bc    12, 2, 0x7F052FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F052FB0;
        }
    }

label_7F052FA4:
    ctx->pc = 0x7F052FA4u;
    ctx->downcount -= 3;
    // 7F052FA4: lwz     r0, 324(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F052FA8:
    // 7F052FA8: cmpwi   r0, 4
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

label_7F052FAC:
    // 7F052FAC: bc    4, 2, 0x7F052FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F052FFC;
        }
    }

label_7F052FB0:
    ctx->downcount -= 2;
    // 7F052FB0: cmpwi   r3, 3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F052FB4:
    // 7F052FB4: bc    12, 2, 0x7F052FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F052FFC;
        }
    }

label_7F052FB8:
    ctx->downcount -= 3;
    // 7F052FB8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F052FBC:
    // 7F052FBC: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F052FC0:
    // 7F052FC0: bl      0x7F052B4C
    {
            ctx->lr = 0x7F052FC4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F052B4Cu;
                return;
            }
            goto label_7F052B4C;
    }

label_7F052FC4:
    ctx->downcount -= 2;
    // 7F052FC4: cmpwi   r3, 0
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

label_7F052FC8:
    // 7F052FC8: bc    12, 2, 0x7F0530C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0530C4;
        }
    }

label_7F052FCC:
    ctx->downcount -= 7;
    // 7F052FCC: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F052FD0:
    // 7F052FD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F052FD4:
    ctx->pc = 0x7F052FD4u;
    // 7F052FD4: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F052FD8:
    ctx->pc = 0x7F052FD8u;
    // 7F052FD8: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052FDC:
    ctx->pc = 0x7F052FDCu;
    // 7F052FDC: lwz     r3, 336(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052FE0:
    // 7F052FE0: cmplwi  r3, 0x0000
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

label_7F052FE4:
    // 7F052FE4: bc    12, 2, 0x7F0530A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0530A8;
        }
    }

label_7F052FE8:
    ctx->downcount -= 5;
    // 7F052FE8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F052FEC:
    ctx->pc = 0x7F052FECu;
    // 7F052FEC: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052FF0:
    ctx->pc = 0x7F052FF0u;
    // 7F052FF0: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F052FF4:
    ctx->pc = 0x7F052FF4u;
    // 7F052FF4: stw     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F052FF8:
    // 7F052FF8: b       0x7F0530A8
    {
            goto label_7F0530A8;
    }

label_7F052FFC:
    ctx->pc = 0x7F052FFCu;
    ctx->downcount -= 3;
    // 7F052FFC: lwz     r0, 324(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053000:
    // 7F053000: cmpwi   r0, 1
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

label_7F053004:
    // 7F053004: bc    4, 2, 0x7F05301C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05301C;
        }
    }

label_7F053008:
    ctx->pc = 0x7F053008u;
    ctx->downcount -= 3;
    // 7F053008: lwz     r0, 328(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05300C:
    // 7F05300C: cmpwi   r0, 2
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

label_7F053010:
    // 7F053010: bc    4, 2, 0x7F05301C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05301C;
        }
    }

label_7F053014:
    ctx->downcount -= 2;
    // 7F053014: li      r28, 3
    ctx->gpr[28] = (u32)(s32)(3);

label_7F053018:
    // 7F053018: b       0x7F0530A8
    {
            goto label_7F0530A8;
    }

label_7F05301C:
    ctx->downcount -= 2;
    // 7F05301C: cmpwi   r28, 1
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

label_7F053020:
    // 7F053020: bc    12, 2, 0x7F053050
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F053050;
        }
    }

label_7F053024:
    ctx->downcount -= 1;
    // 7F053024: bc    4, 0, 0x7F053034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053034;
        }
    }

label_7F053028:
    ctx->downcount -= 2;
    // 7F053028: cmpwi   r28, 0
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

label_7F05302C:
    // 7F05302C: bc    4, 0, 0x7F053040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053040;
        }
    }

label_7F053030:
    ctx->downcount -= 1;
    // 7F053030: b       0x7F053070
    {
            goto label_7F053070;
    }

label_7F053034:
    ctx->downcount -= 2;
    // 7F053034: cmpwi   r28, 3
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

label_7F053038:
    // 7F053038: bc    4, 0, 0x7F053070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053070;
        }
    }

label_7F05303C:
    ctx->downcount -= 1;
    // 7F05303C: b       0x7F053060
    {
            goto label_7F053060;
    }

label_7F053040:
    ctx->downcount -= 4;
    // 7F053040: lis     r3, 32517
    ctx->gpr[3] = ((u32)(s32)(32517) << 16);

label_7F053044:
    // 7F053044: addi    r0, r3, 10100
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10100);

label_7F053048:
    // 7F053048: or   r12, r0, r0
    {
        ctx->gpr[12] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F05304C:
    // 7F05304C: b       0x7F05307C
    {
            goto label_7F05307C;
    }

label_7F053050:
    ctx->downcount -= 4;
    // 7F053050: lis     r3, 32517
    ctx->gpr[3] = ((u32)(s32)(32517) << 16);

label_7F053054:
    // 7F053054: addi    r0, r3, 10484
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10484);

label_7F053058:
    // 7F053058: or   r12, r0, r0
    {
        ctx->gpr[12] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F05305C:
    // 7F05305C: b       0x7F05307C
    {
            goto label_7F05307C;
    }

label_7F053060:
    ctx->downcount -= 4;
    // 7F053060: lis     r3, 32517
    ctx->gpr[3] = ((u32)(s32)(32517) << 16);

label_7F053064:
    // 7F053064: addi    r0, r3, 10772
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10772);

label_7F053068:
    // 7F053068: or   r12, r0, r0
    {
        ctx->gpr[12] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F05306C:
    // 7F05306C: b       0x7F05307C
    {
            goto label_7F05307C;
    }

label_7F053070:
    ctx->downcount -= 3;
    // 7F053070: lis     r3, 32517
    ctx->gpr[3] = ((u32)(s32)(32517) << 16);

label_7F053074:
    // 7F053074: addi    r0, r3, 10092
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10092);

label_7F053078:
    // 7F053078: or   r12, r0, r0
    {
        ctx->gpr[12] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F05307C:
    ctx->downcount -= 5;
    // 7F05307C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F053080:
    // 7F053080: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F053084:
    ctx->pc = 0x7F053084u;
    // 7F053084: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F053088:
    ctx->pc = 0x7F053088u;
    // 7F053088: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F05308Cu;
            ctx->pc = target;
            return;
        }
    }

label_7F05308C:
    ctx->downcount -= 2;
    // 7F05308C: cmpwi   r3, 0
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

label_7F053090:
    // 7F053090: bc    12, 2, 0x7F0530A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0530A8;
        }
    }

label_7F053094:
    ctx->pc = 0x7F053094u;
    ctx->downcount -= 5;
    // 7F053094: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053098:
    // 7F053098: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F05309C:
    // 7F05309C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0530A0:
    ctx->pc = 0x7F0530A0u;
    // 7F0530A0: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0530A4:
    ctx->pc = 0x7F0530A4u;
    // 7F0530A4: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0530A8:
    ctx->pc = 0x7F0530A8u;
    ctx->downcount -= 7;
    // 7F0530A8: lwz     r0, 348(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0530AC:
    // 7F0530AC: add   r29, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F0530B0:
    // 7F0530B0: mulli   r0, r0, 3
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)3);

label_7F0530B4:
    // 7F0530B4: cmpw    r29, r0
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0530B8:
    // 7F0530B8: bc    4, 2, 0x7F0530C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0530C4;
        }
    }

label_7F0530BC:
    ctx->downcount -= 2;
    // 7F0530BC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0530C0:
    // 7F0530C0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0530C4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0530C4:
    ctx->downcount -= 2;
    // 7F0530C4: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F0530C8:
    // 7F0530C8: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F0530CC:
    ctx->pc = 0x7F0530CCu;
    ctx->downcount -= 3;
    // 7F0530CC: lwz     r0, 348(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0530D0:
    // 7F0530D0: cmpw    r30, r0
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

label_7F0530D4:
    // 7F0530D4: bc    12, 0, 0x7F052F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F052F7Cu;
                return;
            }
            goto label_7F052F7C;
        }
    }

label_7F0530D8:
    ctx->pc = 0x7F0530D8u;
    ctx->downcount -= 3;
    // 7F0530D8: lwz     r3, 320(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0530DC:
    ctx->pc = 0x7F0530DCu;
    // 7F0530DC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0530E0:
    ctx->pc = 0x7F0530E0u;
    // 7F0530E0: stw     r0, 320(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0530E4:
    ctx->pc = 0x7F0530E4u;
    ctx->downcount -= 16;
    // 7F0530E4: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0530E8:
    ctx->pc = 0x7F0530E8u;
    // 7F0530E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0530EC:
    ctx->pc = 0x7F0530ECu;
    // 7F0530EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0530F0:
    ctx->pc = 0x7F0530F0u;
    // 7F0530F0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0530F4:
    ctx->pc = 0x7F0530F4u;
    // 7F0530F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0530F8:
    ctx->pc = 0x7F0530F8u;
    ctx->downcount -= 3;
    // 7F0530F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0530FC:
    ctx->pc = 0x7F0530FCu;
    // 7F0530FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F053100:
    ctx->pc = 0x7F053100u;
    // 7F053100: b       0x7F0531D8
    {
            goto label_7F0531D8;
    }

label_7F053104:
    ctx->downcount -= 4;
    // 7F053104: addi    r0, r6, 32
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(32);

label_7F053108:
    ctx->pc = 0x7F053108u;
    // 7F053108: lwzx    r4, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05310C:
    // 7F05310C: cmplwi  r4, 0x0000
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

label_7F053110:
    // 7F053110: bc    12, 2, 0x7F0531D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0531D0;
        }
    }

label_7F053114:
    ctx->pc = 0x7F053114u;
    ctx->downcount -= 3;
    // 7F053114: lwz     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053118:
    // 7F053118: cmplwi  r0, 0x0000
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

label_7F05311C:
    // 7F05311C: bc    12, 2, 0x7F0531D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0531D0;
        }
    }

label_7F053120:
    ctx->downcount -= 33;
    // 7F053120: lis     r7, -1
    ctx->gpr[7] = ((u32)(s32)(-1) << 16);

label_7F053124:
    ctx->pc = 0x7F053124u;
    // 7F053124: lwz     r8, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F053128:
    // 7F053128: addi    r0, r7, 32711
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(32711);

label_7F05312C:
    // 7F05312C: lis     r7, 32585
    ctx->gpr[7] = ((u32)(s32)(32585) << 16);

label_7F053130:
    // 7F053130: and   r0, r8, r0
    {
        ctx->gpr[0] = ctx->gpr[8] & ctx->gpr[0];
    }

label_7F053134:
    ctx->pc = 0x7F053134u;
    // 7F053134: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053138:
    // 7F053138: addi    r8, r7, 12832
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(12832);

label_7F05313C:
    ctx->pc = 0x7F05313Cu;
    // 7F05313C: lwz     r9, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F053140:
    ctx->pc = 0x7F053140u;
    // 7F053140: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F053144:
    ctx->pc = 0x7F053144u;
    // 7F053144: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053148:
    ctx->pc = 0x7F053148u;
    // 7F053148: stw     r7, 16(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F05314C:
    ctx->pc = 0x7F05314Cu;
    // 7F05314C: stw     r0, 20(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053150:
    ctx->pc = 0x7F053150u;
    // 7F053150: lwz     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F053154:
    ctx->pc = 0x7F053154u;
    // 7F053154: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053158:
    ctx->pc = 0x7F053158u;
    // 7F053158: stw     r7, 24(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F05315C:
    ctx->pc = 0x7F05315Cu;
    // 7F05315C: stw     r0, 28(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053160:
    ctx->pc = 0x7F053160u;
    // 7F053160: lwz     r8, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F053164:
    ctx->pc = 0x7F053164u;
    // 7F053164: lwz     r7, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F053168:
    ctx->pc = 0x7F053168u;
    // 7F053168: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05316C:
    ctx->pc = 0x7F05316Cu;
    // 7F05316C: stw     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F053170:
    ctx->pc = 0x7F053170u;
    // 7F053170: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053174:
    ctx->pc = 0x7F053174u;
    // 7F053174: lwz     r7, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F053178:
    ctx->pc = 0x7F053178u;
    // 7F053178: lwz     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05317C:
    ctx->pc = 0x7F05317Cu;
    // 7F05317C: stw     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F053180:
    ctx->pc = 0x7F053180u;
    // 7F053180: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053184:
    ctx->pc = 0x7F053184u;
    // 7F053184: lwz     r8, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F053188:
    ctx->pc = 0x7F053188u;
    // 7F053188: lwz     r7, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F05318C:
    ctx->pc = 0x7F05318Cu;
    // 7F05318C: lwz     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053190:
    ctx->pc = 0x7F053190u;
    // 7F053190: stw     r7, 40(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F053194:
    ctx->pc = 0x7F053194u;
    // 7F053194: stw     r0, 44(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053198:
    ctx->pc = 0x7F053198u;
    // 7F053198: lwz     r0, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05319C:
    // 7F05319C: cmpwi   r0, 1
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

label_7F0531A0:
    // 7F0531A0: bc    12, 2, 0x7F0531B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0531B0;
        }
    }

label_7F0531A4:
    ctx->pc = 0x7F0531A4u;
    ctx->downcount -= 3;
    // 7F0531A4: lwz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0531A8:
    // 7F0531A8: cmpwi   r0, 1
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

label_7F0531AC:
    // 7F0531AC: bc    4, 2, 0x7F0531D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0531D0;
        }
    }

label_7F0531B0:
    ctx->pc = 0x7F0531B0u;
    ctx->downcount -= 3;
    // 7F0531B0: lwz     r7, 336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(336);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0531B4:
    // 7F0531B4: cmplwi  r7, 0x0000
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

label_7F0531B8:
    // 7F0531B8: bc    12, 2, 0x7F0531D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0531D0;
        }
    }

label_7F0531BC:
    ctx->downcount -= 5;
    // 7F0531BC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0531C0:
    ctx->pc = 0x7F0531C0u;
    // 7F0531C0: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0531C4:
    ctx->pc = 0x7F0531C4u;
    // 7F0531C4: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0531C8:
    // 7F0531C8: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F0531CC:
    ctx->pc = 0x7F0531CCu;
    // 7F0531CC: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0531D0:
    ctx->downcount -= 2;
    // 7F0531D0: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F0531D4:
    // 7F0531D4: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_7F0531D8:
    ctx->pc = 0x7F0531D8u;
    ctx->downcount -= 3;
    // 7F0531D8: lwz     r0, 348(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0531DC:
    // 7F0531DC: cmpw    r5, r0
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

label_7F0531E0:
    // 7F0531E0: bc    12, 0, 0x7F053104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053104u;
                return;
            }
            goto label_7F053104;
        }
    }

label_7F0531E4:
    ctx->pc = 0x7F0531E4u;
    ctx->downcount -= 7;
    // 7F0531E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0531E8:
    ctx->pc = 0x7F0531E8u;
    // 7F0531E8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0531EC:
    ctx->pc = 0x7F0531ECu;
    // 7F0531EC: stw     r4, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0531F0:
    ctx->pc = 0x7F0531F0u;
    // 7F0531F0: stw     r0, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0531F4:
    ctx->pc = 0x7F0531F4u;
    // 7F0531F4: lwz     r3, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0531F8:
    ctx->pc = 0x7F0531F8u;
    // 7F0531F8: cmplwi  r3, 0x0000
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

label_7F0531FC:
    ctx->pc = 0x7F0531FCu;
    // 7F0531FC: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F053200:
    ctx->pc = 0x7F053200u;
    ctx->downcount -= 2;
    // 7F053200: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053204:
    ctx->pc = 0x7F053204u;
    // 7F053204: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F053208:
    ctx->pc = 0x7F053208u;
    ctx->downcount -= 18;
    // 7F053208: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F05320C:
    ctx->pc = 0x7F05320Cu;
    // 7F05320C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F053210:
    ctx->pc = 0x7F053210u;
    // 7F053210: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053214:
    ctx->pc = 0x7F053214u;
    // 7F053214: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F053218:
    ctx->pc = 0x7F053218u;
    // 7F053218: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F05321C:
    ctx->pc = 0x7F05321Cu;
    // 7F05321C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F053220:
    ctx->pc = 0x7F053220u;
    // 7F053220: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F053224:
    ctx->pc = 0x7F053224u;
    // 7F053224: b       0x7F0532EC
    {
            goto label_7F0532EC;
    }

label_7F053228:
    ctx->pc = 0x7F053228u;
    ctx->downcount -= 3;
    // 7F053228: lwz     r0, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05322C:
    // 7F05322C: cmpwi   r0, 3
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

label_7F053230:
    // 7F053230: bc    12, 2, 0x7F053278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F053278;
        }
    }

label_7F053234:
    ctx->downcount -= 1;
    // 7F053234: bc    4, 0, 0x7F053248
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053248;
        }
    }

label_7F053238:
    ctx->downcount -= 2;
    // 7F053238: cmpwi   r0, 1
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

label_7F05323C:
    // 7F05323C: bc    12, 2, 0x7F053258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F053258;
        }
    }

label_7F053240:
    ctx->downcount -= 1;
    // 7F053240: bc    4, 0, 0x7F053268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053268;
        }
    }

label_7F053244:
    ctx->downcount -= 1;
    // 7F053244: b       0x7F0532A4
    {
            goto label_7F0532A4;
    }

label_7F053248:
    ctx->downcount -= 2;
    // 7F053248: cmpwi   r0, 5
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

label_7F05324C:
    // 7F05324C: bc    12, 2, 0x7F053298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F053298;
        }
    }

label_7F053250:
    ctx->downcount -= 1;
    // 7F053250: bc    4, 0, 0x7F0532A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0532A4;
        }
    }

label_7F053254:
    ctx->downcount -= 1;
    // 7F053254: b       0x7F053288
    {
            goto label_7F053288;
    }

label_7F053258:
    ctx->downcount -= 3;
    // 7F053258: addis   r3, r29, 192
    ctx->gpr[3] = ctx->gpr[29] + ((u32)(s32)(192) << 16);

label_7F05325C:
    // 7F05325C: addi    r3, r3, 16432
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16432);

label_7F053260:
    // 7F053260: bl      0x7F04E8A4
    {
            ctx->lr = 0x7F053264u;
            ctx->pc = 0x7F04E8A4u;
            return;
    }

label_7F053264:
    ctx->downcount -= 1;
    // 7F053264: b       0x7F0532A4
    {
            goto label_7F0532A4;
    }

label_7F053268:
    ctx->downcount -= 3;
    // 7F053268: addis   r3, r29, 192
    ctx->gpr[3] = ctx->gpr[29] + ((u32)(s32)(192) << 16);

label_7F05326C:
    // 7F05326C: addi    r3, r3, 17456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(17456);

label_7F053270:
    // 7F053270: bl      0x7F04E8A4
    {
            ctx->lr = 0x7F053274u;
            ctx->pc = 0x7F04E8A4u;
            return;
    }

label_7F053274:
    ctx->downcount -= 1;
    // 7F053274: b       0x7F0532A4
    {
            goto label_7F0532A4;
    }

label_7F053278:
    ctx->downcount -= 3;
    // 7F053278: addis   r3, r29, 192
    ctx->gpr[3] = ctx->gpr[29] + ((u32)(s32)(192) << 16);

label_7F05327C:
    // 7F05327C: addi    r3, r3, 18480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(18480);

label_7F053280:
    // 7F053280: bl      0x7F04E8A4
    {
            ctx->lr = 0x7F053284u;
            ctx->pc = 0x7F04E8A4u;
            return;
    }

label_7F053284:
    ctx->downcount -= 1;
    // 7F053284: b       0x7F0532A4
    {
            goto label_7F0532A4;
    }

label_7F053288:
    ctx->downcount -= 3;
    // 7F053288: addis   r3, r29, 192
    ctx->gpr[3] = ctx->gpr[29] + ((u32)(s32)(192) << 16);

label_7F05328C:
    // 7F05328C: addi    r3, r3, 19504
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19504);

label_7F053290:
    // 7F053290: bl      0x7F04E8A4
    {
            ctx->lr = 0x7F053294u;
            ctx->pc = 0x7F04E8A4u;
            return;
    }

label_7F053294:
    ctx->downcount -= 1;
    // 7F053294: b       0x7F0532A4
    {
            goto label_7F0532A4;
    }

label_7F053298:
    ctx->downcount -= 3;
    // 7F053298: addis   r3, r29, 192
    ctx->gpr[3] = ctx->gpr[29] + ((u32)(s32)(192) << 16);

label_7F05329C:
    // 7F05329C: addi    r3, r3, 20528
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20528);

label_7F0532A0:
    // 7F0532A0: bl      0x7F04E8A4
    {
            ctx->lr = 0x7F0532A4u;
            ctx->pc = 0x7F04E8A4u;
            return;
    }

label_7F0532A4:
    ctx->downcount -= 2;
    // 7F0532A4: cmplwi  r3, 0x0000
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

label_7F0532A8:
    // 7F0532A8: bc    4, 2, 0x7F0532B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0532B4;
        }
    }

label_7F0532AC:
    ctx->downcount -= 2;
    // 7F0532AC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0532B0:
    // 7F0532B0: b       0x7F053340
    {
            goto label_7F053340;
    }

label_7F0532B4:
    ctx->pc = 0x7F0532B4u;
    ctx->downcount -= 14;
    // 7F0532B4: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0532B8:
    // 7F0532B8: add   r5, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F0532BC:
    // 7F0532BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0532C0:
    // 7F0532C0: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F0532C4:
    // 7F0532C4: rlwinm r4, r4, 0, 21, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFF7FFu;
    }

label_7F0532C8:
    // 7F0532C8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F0532CC:
    ctx->pc = 0x7F0532CCu;
    // 7F0532CC: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0532D0:
    ctx->pc = 0x7F0532D0u;
    // 7F0532D0: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0532D4:
    // 7F0532D4: ori     r4, r4, 0x8038
    ctx->gpr[4] = ctx->gpr[4] | 0x8038u;

label_7F0532D8:
    ctx->pc = 0x7F0532D8u;
    // 7F0532D8: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0532DC:
    ctx->pc = 0x7F0532DCu;
    // 7F0532DC: stw     r3, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0532E0:
    ctx->pc = 0x7F0532E0u;
    // 7F0532E0: stw     r0, 64(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0532E4:
    ctx->pc = 0x7F0532E4u;
    // 7F0532E4: stw     r0, 96(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0532E8:
    ctx->pc = 0x7F0532E8u;
    // 7F0532E8: stw     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0532EC:
    ctx->pc = 0x7F0532ECu;
    ctx->downcount -= 3;
    // 7F0532EC: lwz     r0, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0532F0:
    // 7F0532F0: cmpw    r29, r0
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0532F4:
    // 7F0532F4: bc    12, 0, 0x7F053228
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053228u;
                return;
            }
            goto label_7F053228;
        }
    }

label_7F0532F8:
    ctx->pc = 0x7F0532F8u;
    ctx->downcount -= 5;
    // 7F0532F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0532FC:
    ctx->pc = 0x7F0532FCu;
    // 7F0532FC: stw     r4, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053300:
    ctx->pc = 0x7F053300u;
    // 7F053300: lwz     r3, 332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053304:
    ctx->pc = 0x7F053304u;
    // 7F053304: cmplwi  r3, 0x0000
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

label_7F053308:
    ctx->pc = 0x7F053308u;
    // 7F053308: bc    12, 2, 0x7F053328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F053328;
        }
    }

label_7F05330C:
    ctx->pc = 0x7F05330Cu;
    ctx->downcount -= 3;
    // 7F05330C: lwz     r0, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053310:
    ctx->pc = 0x7F053310u;
    // 7F053310: cmplwi  r0, 0x0000
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

label_7F053314:
    ctx->pc = 0x7F053314u;
    // 7F053314: bc    12, 2, 0x7F053328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F053328;
        }
    }

label_7F053318:
    ctx->pc = 0x7F053318u;
    ctx->downcount -= 4;
    // 7F053318: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F05331C:
    ctx->pc = 0x7F05331Cu;
    // 7F05331C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053320:
    ctx->pc = 0x7F053320u;
    // 7F053320: lwz     r3, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053324:
    ctx->pc = 0x7F053324u;
    // 7F053324: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053328:
    ctx->pc = 0x7F053328u;
    ctx->downcount -= 6;
    // 7F053328: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F05332C:
    ctx->pc = 0x7F05332Cu;
    // 7F05332C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F053330:
    ctx->pc = 0x7F053330u;
    // 7F053330: addi    r5, r3, 32304
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(32304);

label_7F053334:
    ctx->pc = 0x7F053334u;
    // 7F053334: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053338:
    ctx->pc = 0x7F053338u;
    // 7F053338: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F05333C:
    ctx->pc = 0x7F05333Cu;
    // 7F05333C: stw     r0, -23112(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-23112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053340:
    ctx->pc = 0x7F053340u;
    ctx->downcount -= 16;
    // 7F053340: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F053344:
    ctx->pc = 0x7F053344u;
    // 7F053344: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053348:
    ctx->pc = 0x7F053348u;
    // 7F053348: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F05334C:
    ctx->pc = 0x7F05334Cu;
    // 7F05334C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F053350:
    ctx->pc = 0x7F053350u;
    // 7F053350: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F053354:
    ctx->pc = 0x7F053354u;
    ctx->downcount -= 18;
    // 7F053354: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F053358:
    ctx->pc = 0x7F053358u;
    // 7F053358: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F05335C:
    ctx->pc = 0x7F05335Cu;
    // 7F05335C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053360:
    ctx->pc = 0x7F053360u;
    // 7F053360: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F053364:
    ctx->pc = 0x7F053364u;
    // 7F053364: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F053368:
    ctx->pc = 0x7F053368u;
    // 7F053368: cmpwi   r29, 2
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

label_7F05336C:
    ctx->pc = 0x7F05336Cu;
    // 7F05336C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F053370:
    ctx->pc = 0x7F053370u;
    // 7F053370: bc    12, 2, 0x7F0533A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0533A8;
        }
    }

label_7F053374:
    ctx->pc = 0x7F053374u;
    ctx->downcount -= 1;
    // 7F053374: bc    4, 0, 0x7F053384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053384;
        }
    }

label_7F053378:
    ctx->pc = 0x7F053378u;
    ctx->downcount -= 2;
    // 7F053378: cmpwi   r29, 1
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

label_7F05337C:
    ctx->pc = 0x7F05337Cu;
    // 7F05337C: bc    4, 0, 0x7F053390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053390;
        }
    }

label_7F053380:
    ctx->pc = 0x7F053380u;
    ctx->downcount -= 1;
    // 7F053380: b       0x7F0533D8
    {
            goto label_7F0533D8;
    }

label_7F053384:
    ctx->pc = 0x7F053384u;
    ctx->downcount -= 2;
    // 7F053384: cmpwi   r29, 4
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F053388:
    ctx->pc = 0x7F053388u;
    // 7F053388: bc    4, 0, 0x7F0533D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0533D8;
        }
    }

label_7F05338C:
    ctx->pc = 0x7F05338Cu;
    ctx->downcount -= 1;
    // 7F05338C: b       0x7F0533C0
    {
            goto label_7F0533C0;
    }

label_7F053390:
    ctx->pc = 0x7F053390u;
    ctx->downcount -= 4;
    // 7F053390: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F053394:
    ctx->pc = 0x7F053394u;
    // 7F053394: lwz     r0, 27720(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053398:
    ctx->pc = 0x7F053398u;
    // 7F053398: cmpwi   r0, 0
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

label_7F05339C:
    ctx->pc = 0x7F05339Cu;
    // 7F05339C: bc    4, 1, 0x7F0533D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0533D8;
        }
    }

label_7F0533A0:
    ctx->pc = 0x7F0533A0u;
    ctx->downcount -= 2;
    // 7F0533A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0533A4:
    ctx->pc = 0x7F0533A4u;
    // 7F0533A4: b       0x7F053524
    {
            goto label_7F053524;
    }

label_7F0533A8:
    ctx->pc = 0x7F0533A8u;
    ctx->downcount -= 4;
    // 7F0533A8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0533AC:
    ctx->pc = 0x7F0533ACu;
    // 7F0533AC: lwz     r0, 27728(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27728);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0533B0:
    ctx->pc = 0x7F0533B0u;
    // 7F0533B0: cmpwi   r0, 0
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

label_7F0533B4:
    ctx->pc = 0x7F0533B4u;
    // 7F0533B4: bc    4, 1, 0x7F0533D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0533D8;
        }
    }

label_7F0533B8:
    ctx->pc = 0x7F0533B8u;
    ctx->downcount -= 2;
    // 7F0533B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0533BC:
    ctx->pc = 0x7F0533BCu;
    // 7F0533BC: b       0x7F053524
    {
            goto label_7F053524;
    }

label_7F0533C0:
    ctx->pc = 0x7F0533C0u;
    ctx->downcount -= 4;
    // 7F0533C0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0533C4:
    ctx->pc = 0x7F0533C4u;
    // 7F0533C4: lwz     r0, 27736(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27736);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0533C8:
    ctx->pc = 0x7F0533C8u;
    // 7F0533C8: cmpwi   r0, 0
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

label_7F0533CC:
    ctx->pc = 0x7F0533CCu;
    // 7F0533CC: bc    4, 1, 0x7F0533D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0533D8;
        }
    }

label_7F0533D0:
    ctx->pc = 0x7F0533D0u;
    ctx->downcount -= 2;
    // 7F0533D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0533D4:
    ctx->pc = 0x7F0533D4u;
    // 7F0533D4: b       0x7F053524
    {
            goto label_7F053524;
    }

label_7F0533D8:
    ctx->pc = 0x7F0533D8u;
    ctx->downcount -= 5;
    // 7F0533D8: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F0533DC:
    ctx->pc = 0x7F0533DCu;
    // 7F0533DC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0533E0:
    ctx->pc = 0x7F0533E0u;
    // 7F0533E0: li      r5, 352
    ctx->gpr[5] = (u32)(s32)(352);

label_7F0533E4:
    ctx->pc = 0x7F0533E4u;
    // 7F0533E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0533E8:
    ctx->pc = 0x7F0533E8u;
    // 7F0533E8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F0533ECu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F0533EC:
    ctx->pc = 0x7F0533ECu;
    ctx->downcount -= 2;
    // 7F0533EC: or.   r31, r3, r3
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

label_7F0533F0:
    ctx->pc = 0x7F0533F0u;
    // 7F0533F0: bc    12, 2, 0x7F053520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F053520;
        }
    }

label_7F0533F4:
    ctx->pc = 0x7F0533F4u;
    ctx->downcount -= 8;
    // 7F0533F4: stw     r30, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0533F8:
    ctx->pc = 0x7F0533F8u;
    // 7F0533F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0533FC:
    ctx->pc = 0x7F0533FCu;
    // 7F0533FC: cmpwi   r29, 3
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F053400:
    ctx->pc = 0x7F053400u;
    // 7F053400: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F053404:
    ctx->pc = 0x7F053404u;
    // 7F053404: stw     r29, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F053408:
    ctx->pc = 0x7F053408u;
    // 7F053408: stw     r3, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F05340C:
    ctx->pc = 0x7F05340Cu;
    // 7F05340C: stw     r0, 344(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053410:
    ctx->pc = 0x7F053410u;
    // 7F053410: bc    12, 2, 0x7F053480
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F053480;
        }
    }

label_7F053414:
    ctx->pc = 0x7F053414u;
    ctx->downcount -= 1;
    // 7F053414: bc    4, 0, 0x7F053428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053428;
        }
    }

label_7F053418:
    ctx->pc = 0x7F053418u;
    ctx->downcount -= 2;
    // 7F053418: cmpwi   r29, 1
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

label_7F05341C:
    ctx->pc = 0x7F05341Cu;
    // 7F05341C: bc    12, 2, 0x7F053438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F053438;
        }
    }

label_7F053420:
    ctx->pc = 0x7F053420u;
    ctx->downcount -= 1;
    // 7F053420: bc    4, 0, 0x7F05345C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05345C;
        }
    }

label_7F053424:
    ctx->pc = 0x7F053424u;
    ctx->downcount -= 1;
    // 7F053424: b       0x7F0534E8
    {
            goto label_7F0534E8;
    }

label_7F053428:
    ctx->pc = 0x7F053428u;
    ctx->downcount -= 2;
    // 7F053428: cmpwi   r29, 5
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F05342C:
    ctx->pc = 0x7F05342Cu;
    // 7F05342C: bc    12, 2, 0x7F0534C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0534C8;
        }
    }

label_7F053430:
    ctx->pc = 0x7F053430u;
    ctx->downcount -= 1;
    // 7F053430: bc    4, 0, 0x7F0534E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0534E8;
        }
    }

label_7F053434:
    ctx->pc = 0x7F053434u;
    ctx->downcount -= 1;
    // 7F053434: b       0x7F0534A4
    {
            goto label_7F0534A4;
    }

label_7F053438:
    ctx->pc = 0x7F053438u;
    ctx->downcount -= 9;
    // 7F053438: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F05343C:
    ctx->pc = 0x7F05343Cu;
    // 7F05343C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F053440:
    ctx->pc = 0x7F053440u;
    // 7F053440: addi    r4, r4, 27720
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27720);

label_7F053444:
    ctx->pc = 0x7F053444u;
    // 7F053444: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F053448:
    ctx->pc = 0x7F053448u;
    // 7F053448: stw     r4, 332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F05344C:
    ctx->pc = 0x7F05344Cu;
    // 7F05344C: addi    r3, r3, 27724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(27724);

label_7F053450:
    ctx->pc = 0x7F053450u;
    // 7F053450: stw     r3, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F053454:
    ctx->pc = 0x7F053454u;
    // 7F053454: stw     r0, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053458:
    ctx->pc = 0x7F053458u;
    // 7F053458: b       0x7F0534E8
    {
            goto label_7F0534E8;
    }

label_7F05345C:
    ctx->pc = 0x7F05345Cu;
    ctx->downcount -= 9;
    // 7F05345C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F053460:
    ctx->pc = 0x7F053460u;
    // 7F053460: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F053464:
    ctx->pc = 0x7F053464u;
    // 7F053464: addi    r4, r4, 27728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27728);

label_7F053468:
    ctx->pc = 0x7F053468u;
    // 7F053468: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F05346C:
    ctx->pc = 0x7F05346Cu;
    // 7F05346C: stw     r4, 332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053470:
    ctx->pc = 0x7F053470u;
    // 7F053470: addi    r3, r3, 27732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(27732);

label_7F053474:
    ctx->pc = 0x7F053474u;
    // 7F053474: stw     r3, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F053478:
    ctx->pc = 0x7F053478u;
    // 7F053478: stw     r0, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05347C:
    ctx->pc = 0x7F05347Cu;
    // 7F05347C: b       0x7F0534E8
    {
            goto label_7F0534E8;
    }

label_7F053480:
    ctx->pc = 0x7F053480u;
    ctx->downcount -= 9;
    // 7F053480: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F053484:
    ctx->pc = 0x7F053484u;
    // 7F053484: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F053488:
    ctx->pc = 0x7F053488u;
    // 7F053488: addi    r4, r4, 27736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27736);

label_7F05348C:
    ctx->pc = 0x7F05348Cu;
    // 7F05348C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F053490:
    ctx->pc = 0x7F053490u;
    // 7F053490: stw     r4, 332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053494:
    ctx->pc = 0x7F053494u;
    // 7F053494: addi    r3, r3, 27740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(27740);

label_7F053498:
    ctx->pc = 0x7F053498u;
    // 7F053498: stw     r3, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F05349C:
    ctx->pc = 0x7F05349Cu;
    // 7F05349C: stw     r0, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0534A0:
    ctx->pc = 0x7F0534A0u;
    // 7F0534A0: b       0x7F0534E8
    {
            goto label_7F0534E8;
    }

label_7F0534A4:
    ctx->pc = 0x7F0534A4u;
    ctx->downcount -= 9;
    // 7F0534A4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0534A8:
    ctx->pc = 0x7F0534A8u;
    // 7F0534A8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0534AC:
    ctx->pc = 0x7F0534ACu;
    // 7F0534AC: addi    r4, r4, 27744
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27744);

label_7F0534B0:
    ctx->pc = 0x7F0534B0u;
    // 7F0534B0: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F0534B4:
    ctx->pc = 0x7F0534B4u;
    // 7F0534B4: stw     r4, 332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0534B8:
    ctx->pc = 0x7F0534B8u;
    // 7F0534B8: addi    r3, r3, 27748
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(27748);

label_7F0534BC:
    ctx->pc = 0x7F0534BCu;
    // 7F0534BC: stw     r3, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0534C0:
    ctx->pc = 0x7F0534C0u;
    // 7F0534C0: stw     r0, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0534C4:
    ctx->pc = 0x7F0534C4u;
    // 7F0534C4: b       0x7F0534E8
    {
            goto label_7F0534E8;
    }

label_7F0534C8:
    ctx->pc = 0x7F0534C8u;
    ctx->downcount -= 8;
    // 7F0534C8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0534CC:
    ctx->pc = 0x7F0534CCu;
    // 7F0534CC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0534D0:
    ctx->pc = 0x7F0534D0u;
    // 7F0534D0: addi    r4, r4, 27752
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27752);

label_7F0534D4:
    ctx->pc = 0x7F0534D4u;
    // 7F0534D4: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F0534D8:
    ctx->pc = 0x7F0534D8u;
    // 7F0534D8: stw     r4, 332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(332);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0534DC:
    ctx->pc = 0x7F0534DCu;
    // 7F0534DC: addi    r3, r3, 27756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(27756);

label_7F0534E0:
    ctx->pc = 0x7F0534E0u;
    // 7F0534E0: stw     r3, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0534E4:
    ctx->pc = 0x7F0534E4u;
    // 7F0534E4: stw     r0, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0534E8:
    ctx->pc = 0x7F0534E8u;
    ctx->downcount -= 6;
    // 7F0534E8: lis     r3, 32517
    ctx->gpr[3] = ((u32)(s32)(32517) << 16);

label_7F0534EC:
    ctx->pc = 0x7F0534ECu;
    // 7F0534EC: lis     r5, 32517
    ctx->gpr[5] = ((u32)(s32)(32517) << 16);

label_7F0534F0:
    ctx->pc = 0x7F0534F0u;
    // 7F0534F0: addi    r4, r3, 11948
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(11948);

label_7F0534F4:
    ctx->pc = 0x7F0534F4u;
    // 7F0534F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0534F8:
    ctx->pc = 0x7F0534F8u;
    // 7F0534F8: addi    r5, r5, 12536
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12536);

label_7F0534FC:
    ctx->pc = 0x7F0534FCu;
    // 7F0534FC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F053500u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F053500:
    ctx->pc = 0x7F053500u;
    ctx->downcount -= 2;
    // 7F053500: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F053504:
    ctx->pc = 0x7F053504u;
    // 7F053504: bl      0x7F053208
    {
            ctx->lr = 0x7F053508u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053208u;
                return;
            }
            goto label_7F053208;
    }

label_7F053508:
    ctx->pc = 0x7F053508u;
    ctx->downcount -= 2;
    // 7F053508: cmpwi   r3, 0
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

label_7F05350C:
    ctx->pc = 0x7F05350Cu;
    // 7F05350C: bc    4, 0, 0x7F053520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053520;
        }
    }

label_7F053510:
    ctx->pc = 0x7F053510u;
    ctx->downcount -= 2;
    // 7F053510: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F053514:
    ctx->pc = 0x7F053514u;
    // 7F053514: bl      0x7F3C8210
    {
            ctx->lr = 0x7F053518u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F053518:
    ctx->pc = 0x7F053518u;
    ctx->downcount -= 2;
    // 7F053518: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F05351C:
    ctx->pc = 0x7F05351Cu;
    // 7F05351C: b       0x7F053524
    {
            goto label_7F053524;
    }

label_7F053520:
    ctx->pc = 0x7F053520u;
    ctx->downcount -= 1;
    // 7F053520: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F053524:
    ctx->pc = 0x7F053524u;
    ctx->downcount -= 16;
    // 7F053524: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F053528:
    ctx->pc = 0x7F053528u;
    // 7F053528: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05352C:
    ctx->pc = 0x7F05352Cu;
    // 7F05352C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F053530:
    ctx->pc = 0x7F053530u;
    // 7F053530: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F053534:
    ctx->pc = 0x7F053534u;
    // 7F053534: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F053538:
    ctx->pc = 0x7F053538u;
    ctx->downcount -= 27;
    // 7F053538: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F05353C:
    ctx->pc = 0x7F05353Cu;
    // 7F05353C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F053540:
    ctx->pc = 0x7F053540u;
    // 7F053540: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053544:
    ctx->pc = 0x7F053544u;
    // 7F053544: stmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F053548:
    ctx->pc = 0x7F053548u;
    // 7F053548: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F05354C:
    ctx->pc = 0x7F05354Cu;
    // 7F05354C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F053550:
    ctx->pc = 0x7F053550u;
    // 7F053550: lwz     r5, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053554:
    ctx->pc = 0x7F053554u;
    // 7F053554: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F053558:
    ctx->pc = 0x7F053558u;
    // 7F053558: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05355C:
    ctx->pc = 0x7F05355Cu;
    // 7F05355C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053560:
    ctx->pc = 0x7F053560u;
    // 7F053560: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053564:
    ctx->pc = 0x7F053564u;
    // 7F053564: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053568:
    ctx->pc = 0x7F053568u;
    // 7F053568: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05356C:
    ctx->pc = 0x7F05356Cu;
    // 7F05356C: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053570:
    ctx->pc = 0x7F053570u;
    // 7F053570: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053574:
    ctx->pc = 0x7F053574u;
    // 7F053574: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053578:
    ctx->pc = 0x7F053578u;
    // 7F053578: bl      0x7F3CC594
    {
            ctx->lr = 0x7F05357Cu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F05357C:
    ctx->pc = 0x7F05357Cu;
    ctx->downcount -= 6;
    // 7F05357C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F053580:
    ctx->pc = 0x7F053580u;
    // 7F053580: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F053584:
    ctx->pc = 0x7F053584u;
    // 7F053584: addi    r5, r4, -10712
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10712);

label_7F053588:
    ctx->pc = 0x7F053588u;
    // 7F053588: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F05358C:
    ctx->pc = 0x7F05358Cu;
    // 7F05358C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F05358Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F053590:
    ctx->pc = 0x7F053590u;
    // 7F053590: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F053594u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F053594:
    ctx->pc = 0x7F053594u;
    ctx->downcount -= 5;
    // 7F053594: addi    r31, r1, 40
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(40);

label_7F053598:
    ctx->pc = 0x7F053598u;
    // 7F053598: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F05359C:
    ctx->pc = 0x7F05359Cu;
    // 7F05359C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0535A0:
    ctx->pc = 0x7F0535A0u;
    // 7F0535A0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0535A4:
    ctx->pc = 0x7F0535A4u;
    // 7F0535A4: bl      0x800261B4
    {
            ctx->lr = 0x7F0535A8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F0535A8:
    ctx->pc = 0x7F0535A8u;
    ctx->downcount -= 9;
    // 7F0535A8: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0535AC:
    ctx->pc = 0x7F0535ACu;
    // 7F0535AC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0535B0:
    ctx->pc = 0x7F0535B0u;
    // 7F0535B0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0535B4:
    ctx->pc = 0x7F0535B4u;
    // 7F0535B4: li      r30, 6000
    ctx->gpr[30] = (u32)(s32)(6000);

label_7F0535B8:
    ctx->pc = 0x7F0535B8u;
    // 7F0535B8: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0535BC:
    ctx->pc = 0x7F0535BCu;
    // 7F0535BC: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F0535C0:
    ctx->pc = 0x7F0535C0u;
    // 7F0535C0: li      r7, 128
    ctx->gpr[7] = (u32)(s32)(128);

label_7F0535C4:
    ctx->pc = 0x7F0535C4u;
    // 7F0535C4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0535C8:
    ctx->pc = 0x7F0535C8u;
    // 7F0535C8: bl      0x7F10B744
    {
            ctx->lr = 0x7F0535CCu;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F0535CC:
    ctx->pc = 0x7F0535CCu;
    ctx->downcount -= 2;
    // 7F0535CC: cmpwi   r3, 0
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

label_7F0535D0:
    ctx->pc = 0x7F0535D0u;
    // 7F0535D0: bc    12, 2, 0x7F053600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F053600;
        }
    }

label_7F0535D4:
    ctx->pc = 0x7F0535D4u;
    ctx->downcount -= 2;
    // 7F0535D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0535D8:
    ctx->pc = 0x7F0535D8u;
    // 7F0535D8: bl      0x7F10B7C4
    {
            ctx->lr = 0x7F0535DCu;
            ctx->pc = 0x7F10B7C4u;
            return;
    }

label_7F0535DC:
    ctx->pc = 0x7F0535DCu;
    ctx->downcount -= 4;
    // 7F0535DC: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0535E0:
    ctx->pc = 0x7F0535E0u;
    // 7F0535E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0535E4:
    ctx->pc = 0x7F0535E4u;
    // 7F0535E4: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0535E8:
    ctx->pc = 0x7F0535E8u;
    // 7F0535E8: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F0535ECu;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F0535EC:
    ctx->pc = 0x7F0535ECu;
    ctx->downcount -= 2;
    // 7F0535EC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0535F0:
    ctx->pc = 0x7F0535F0u;
    // 7F0535F0: bl      0x7F3CC594
    {
            ctx->lr = 0x7F0535F4u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F0535F4:
    ctx->pc = 0x7F0535F4u;
    ctx->downcount -= 3;
    // 7F0535F4: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0535F4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0535F8:
    ctx->pc = 0x7F0535F8u;
    // 7F0535F8: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0535F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0535FC:
    ctx->pc = 0x7F0535FCu;
    // 7F0535FC: lwz     r30, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F053600:
    ctx->pc = 0x7F053600u;
    ctx->downcount -= 17;
    // 7F053600: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F053604:
    ctx->pc = 0x7F053604u;
    // 7F053604: lmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F053608:
    ctx->pc = 0x7F053608u;
    // 7F053608: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05360C:
    ctx->pc = 0x7F05360Cu;
    // 7F05360C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F053610:
    ctx->pc = 0x7F053610u;
    // 7F053610: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F053614:
    ctx->pc = 0x7F053614u;
    // 7F053614: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F053618:
    ctx->pc = 0x7F053618u;
    ctx->downcount -= 9;
    // 7F053618: mulli   r4, r4, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)20);

label_7F05361C:
    ctx->pc = 0x7F05361Cu;
    // 7F05361C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F053620:
    ctx->pc = 0x7F053620u;
    // 7F053620: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F053624:
    ctx->pc = 0x7F053624u;
    // 7F053624: add   r6, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F053628:
    ctx->pc = 0x7F053628u;
    // 7F053628: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F05362C:
    ctx->pc = 0x7F05362Cu;
    // 7F05362C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F053630:
    ctx->downcount -= 5;
    // 7F053630: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_7F053634:
    ctx->pc = 0x7F053634u;
    // 7F053634: lwzx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053638:
    ctx->pc = 0x7F053638u;
    // 7F053638: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05363C:
    // 7F05363C: cmpwi   r0, 1
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

label_7F053640:
    // 7F053640: bc    4, 2, 0x7F05364C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F05364C;
        }
    }

label_7F053644:
    ctx->downcount -= 2;
    // 7F053644: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F053648:
    // 7F053648: b       0x7F053654
    {
            goto label_7F053654;
    }

label_7F05364C:
    ctx->downcount -= 2;
    // 7F05364C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F053650:
    // 7F053650: bc    16, 0, 0x7F053630
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053630u;
                return;
            }
            goto label_7F053630;
        }
    }

label_7F053654:
    ctx->pc = 0x7F053654u;
    ctx->downcount -= 2;
    // 7F053654: cmpwi   r5, 1
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

label_7F053658:
    ctx->pc = 0x7F053658u;
    // 7F053658: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F05365C:
    ctx->pc = 0x7F05365Cu;
    ctx->downcount -= 5;
    // 7F05365C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F053660:
    ctx->pc = 0x7F053660u;
    // 7F053660: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F053664:
    ctx->pc = 0x7F053664u;
    // 7F053664: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F053668:
    ctx->pc = 0x7F053668u;
    // 7F053668: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F05366C:
    loop_7F05366C(ctx);
    if (ctx->pc == 0x7F053688u) goto label_7F053688;
    return;
label_7F053670:
    // 7F053670: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F053674:
    ctx->pc = 0x7F053674u;
    // 7F053674: lwzx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053678:
    ctx->pc = 0x7F053678u;
    // 7F053678: stw     r5, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F05367C:
    ctx->pc = 0x7F05367Cu;
    // 7F05367C: lwzx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053680:
    ctx->pc = 0x7F053680u;
    // 7F053680: stw     r5, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F053684:
    // 7F053684: bc    16, 0, 0x7F05366C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F05366Cu;
                return;
            }
            goto label_7F05366C;
        }
    }

label_7F053688:
    ctx->pc = 0x7F053688u;
    ctx->downcount -= 1;
    // 7F053688: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F05368C:
    ctx->pc = 0x7F05368Cu;
    ctx->downcount -= 31;
    // 7F05368C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F053690:
    ctx->pc = 0x7F053690u;
    // 7F053690: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F053694:
    ctx->pc = 0x7F053694u;
    // 7F053694: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053698:
    ctx->pc = 0x7F053698u;
    // 7F053698: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F053698u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F05369C:
    ctx->pc = 0x7F05369Cu;
    // 7F05369C: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F05369Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F05369Cu);
        if (ctx->exception) return;
    }

label_7F0536A0:
    ctx->pc = 0x7F0536A0u;
    // 7F0536A0: stfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0536A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F0536A4:
    ctx->pc = 0x7F0536A4u;
    // 7F0536A4: psq_st   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0536A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F0536A4u);
        if (ctx->exception) return;
    }

label_7F0536A8:
    ctx->pc = 0x7F0536A8u;
    // 7F0536A8: stmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0536AC:
    ctx->pc = 0x7F0536ACu;
    // 7F0536AC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0536B0:
    ctx->pc = 0x7F0536B0u;
    // 7F0536B0: or.   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0536B4:
    ctx->pc = 0x7F0536B4u;
    // 7F0536B4: addi    r6, r5, -10708
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-10708);

label_7F0536B8:
    ctx->pc = 0x7F0536B8u;
    // 7F0536B8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0536BC:
    ctx->pc = 0x7F0536BCu;
    // 7F0536BC: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0536C0:
    ctx->pc = 0x7F0536C0u;
    // 7F0536C0: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0536C4:
    ctx->pc = 0x7F0536C4u;
    // 7F0536C4: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0536C8:
    ctx->pc = 0x7F0536C8u;
    // 7F0536C8: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0536CC:
    ctx->pc = 0x7F0536CCu;
    // 7F0536CC: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0536D0:
    ctx->pc = 0x7F0536D0u;
    // 7F0536D0: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0536D4:
    ctx->pc = 0x7F0536D4u;
    // 7F0536D4: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0536D8:
    ctx->pc = 0x7F0536D8u;
    // 7F0536D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0536DC:
    ctx->pc = 0x7F0536DCu;
    // 7F0536DC: bc    4, 2, 0x7F053840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053840;
        }
    }

label_7F0536E0:
    ctx->pc = 0x7F0536E0u;
    ctx->downcount -= 12;
    // 7F0536E0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0536E4:
    ctx->pc = 0x7F0536E4u;
    // 7F0536E4: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0536E8:
    ctx->pc = 0x7F0536E8u;
    // 7F0536E8: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0536EC:
    ctx->pc = 0x7F0536ECu;
    // 7F0536EC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0536F0:
    ctx->pc = 0x7F0536F0u;
    // 7F0536F0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0536F4:
    ctx->pc = 0x7F0536F4u;
    // 7F0536F4: stw     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0536F8:
    ctx->pc = 0x7F0536F8u;
    // 7F0536F8: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0536FC:
    ctx->pc = 0x7F0536FCu;
    // 7F0536FC: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053700:
    ctx->pc = 0x7F053700u;
    // 7F053700: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053704:
    ctx->pc = 0x7F053704u;
    // 7F053704: stw     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F053708:
    ctx->pc = 0x7F053708u;
    // 7F053708: stw     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05370C:
    ctx->pc = 0x7F05370Cu;
    // 7F05370C: bl      0x7F053960
    {
            ctx->lr = 0x7F053710u;
            goto label_7F053960;
    }

label_7F053710:
    ctx->pc = 0x7F053710u;
    ctx->downcount -= 4;
    // 7F053710: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F053714:
    ctx->pc = 0x7F053714u;
    // 7F053714: lfs     f0, -10692(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F053714u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10692);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F053718:
    ctx->pc = 0x7F053718u;
    // 7F053718: fmuls   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F053718u)) return;
    ppc_fmuls(ctx, 31, 0, 1);

label_7F05371C:
    ctx->pc = 0x7F05371Cu;
    // 7F05371C: bl      0x7F053960
    {
            ctx->lr = 0x7F053720u;
            goto label_7F053960;
    }

label_7F053720:
    ctx->pc = 0x7F053720u;
    ctx->downcount -= 8;
    // 7F053720: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F053724:
    ctx->pc = 0x7F053724u;
    // 7F053724: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F053728:
    ctx->pc = 0x7F053728u;
    // 7F053728: lfs     f2, -10692(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053728u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10692);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F05372C:
    ctx->pc = 0x7F05372Cu;
    // 7F05372C: lfd     f0, -10688(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F05372Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10688);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F053730:
    ctx->pc = 0x7F053730u;
    // 7F053730: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F053730u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F053734:
    ctx->pc = 0x7F053734u;
    // 7F053734: fadd   f30, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F053734u)) return;
    ppc_fadd(ctx, 30, 0, 1);

label_7F053738:
    ctx->pc = 0x7F053738u;
    // 7F053738: frsp    f30, f30
    if (!ppc_fp_available_inline(ctx, 0x7F053738u)) return;
    ppc_frsp(ctx, 30, 30);

label_7F05373C:
    ctx->pc = 0x7F05373Cu;
    // 7F05373C: bl      0x7F053960
    {
            ctx->lr = 0x7F053740u;
            goto label_7F053960;
    }

label_7F053740:
    ctx->pc = 0x7F053740u;
    ctx->downcount -= 14;
    // 7F053740: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053744:
    ctx->pc = 0x7F053744u;
    // 7F053744: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F053748:
    ctx->pc = 0x7F053748u;
    // 7F053748: lfs     f2, -10692(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053748u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10692);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F05374C:
    ctx->pc = 0x7F05374Cu;
    // 7F05374C: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F05374Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F053750:
    ctx->pc = 0x7F053750u;
    // 7F053750: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F053750u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F053754:
    ctx->pc = 0x7F053754u;
    // 7F053754: fadds   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F053754u)) return;
    ppc_fadds(ctx, 0, 0, 31);

label_7F053758:
    ctx->pc = 0x7F053758u;
    // 7F053758: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F053758u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F05375C:
    ctx->pc = 0x7F05375Cu;
    // 7F05375C: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F05375Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F053760:
    ctx->pc = 0x7F053760u;
    // 7F053760: fadds   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F053760u)) return;
    ppc_fadds(ctx, 0, 0, 30);

label_7F053764:
    ctx->pc = 0x7F053764u;
    // 7F053764: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F053764u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053768:
    ctx->pc = 0x7F053768u;
    // 7F053768: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F053768u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F05376C:
    ctx->pc = 0x7F05376Cu;
    // 7F05376C: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F05376Cu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F053770:
    ctx->pc = 0x7F053770u;
    // 7F053770: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F053770u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053774:
    ctx->pc = 0x7F053774u;
    // 7F053774: bl      0x7F05393C
    {
            ctx->lr = 0x7F053778u;
            goto label_7F05393C;
    }

label_7F053778:
    ctx->pc = 0x7F053778u;
    ctx->downcount -= 4;
    // 7F053778: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05377C:
    ctx->pc = 0x7F05377Cu;
    // 7F05377C: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F053780:
    ctx->pc = 0x7F053780u;
    // 7F053780: sth     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053784:
    ctx->pc = 0x7F053784u;
    // 7F053784: bl      0x7F05393C
    {
            ctx->lr = 0x7F053788u;
            goto label_7F05393C;
    }

label_7F053788:
    ctx->pc = 0x7F053788u;
    ctx->downcount -= 4;
    // 7F053788: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05378C:
    ctx->pc = 0x7F05378Cu;
    // 7F05378C: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F053790:
    ctx->pc = 0x7F053790u;
    // 7F053790: sth     r0, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053794:
    ctx->pc = 0x7F053794u;
    // 7F053794: bl      0x7F05393C
    {
            ctx->lr = 0x7F053798u;
            goto label_7F05393C;
    }

label_7F053798:
    ctx->pc = 0x7F053798u;
    ctx->downcount -= 4;
    // 7F053798: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05379C:
    ctx->pc = 0x7F05379Cu;
    // 7F05379C: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F0537A0:
    ctx->pc = 0x7F0537A0u;
    // 7F0537A0: sth     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0537A4:
    ctx->pc = 0x7F0537A4u;
    // 7F0537A4: bl      0x7F05393C
    {
            ctx->lr = 0x7F0537A8u;
            goto label_7F05393C;
    }

label_7F0537A8:
    ctx->pc = 0x7F0537A8u;
    ctx->downcount -= 5;
    // 7F0537A8: rlwinm r4, r3, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_7F0537AC:
    ctx->pc = 0x7F0537ACu;
    // 7F0537AC: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0537B0:
    ctx->pc = 0x7F0537B0u;
    // 7F0537B0: addi    r0, r4, -128
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-128);

label_7F0537B4:
    ctx->pc = 0x7F0537B4u;
    // 7F0537B4: sth     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0537B8:
    ctx->pc = 0x7F0537B8u;
    // 7F0537B8: bl      0x7F05393C
    {
            ctx->lr = 0x7F0537BCu;
            goto label_7F05393C;
    }

label_7F0537BC:
    ctx->pc = 0x7F0537BCu;
    ctx->downcount -= 5;
    // 7F0537BC: rlwinm r4, r3, 0, 25, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000040u;
    }

label_7F0537C0:
    ctx->pc = 0x7F0537C0u;
    // 7F0537C0: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0537C4:
    ctx->pc = 0x7F0537C4u;
    // 7F0537C4: addi    r0, r4, -32
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-32);

label_7F0537C8:
    ctx->pc = 0x7F0537C8u;
    // 7F0537C8: sth     r0, 42(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0537CC:
    ctx->pc = 0x7F0537CCu;
    // 7F0537CC: bl      0x7F05393C
    {
            ctx->lr = 0x7F0537D0u;
            goto label_7F05393C;
    }

label_7F0537D0:
    ctx->pc = 0x7F0537D0u;
    ctx->downcount -= 8;
    // 7F0537D0: rlwinm r3, r3, 0, 24, 24
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000080u;
    }

label_7F0537D4:
    ctx->pc = 0x7F0537D4u;
    // 7F0537D4: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0537D8:
    ctx->pc = 0x7F0537D8u;
    // 7F0537D8: addi    r0, r3, -64
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-64);

label_7F0537DC:
    ctx->pc = 0x7F0537DCu;
    // 7F0537DC: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0537E0:
    ctx->pc = 0x7F0537E0u;
    // 7F0537E0: sth     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0537E4:
    ctx->pc = 0x7F0537E4u;
    // 7F0537E4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0537E8:
    ctx->pc = 0x7F0537E8u;
    // 7F0537E8: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0537EC:
    ctx->pc = 0x7F0537ECu;
    // 7F0537EC: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F0537F0u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F0537F0:
    ctx->pc = 0x7F0537F0u;
    ctx->downcount -= 2;
    // 7F0537F0: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0537F4:
    ctx->pc = 0x7F0537F4u;
    // 7F0537F4: bl      0x7F3CC594
    {
            ctx->lr = 0x7F0537F8u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F0537F8:
    ctx->pc = 0x7F0537F8u;
    ctx->downcount -= 7;
    // 7F0537F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0537FC:
    ctx->pc = 0x7F0537FCu;
    // 7F0537FC: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053800:
    ctx->pc = 0x7F053800u;
    // 7F053800: addi    r4, r3, -10680
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10680);

label_7F053804:
    ctx->pc = 0x7F053804u;
    // 7F053804: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F053808:
    ctx->pc = 0x7F053808u;
    // 7F053808: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053808u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F05380C:
    ctx->pc = 0x7F05380Cu;
    // 7F05380C: addi    r4, r5, 16
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(16);

label_7F053810:
    ctx->pc = 0x7F053810u;
    // 7F053810: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F053814u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F053814:
    ctx->pc = 0x7F053814u;
    ctx->downcount -= 5;
    // 7F053814: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053818:
    ctx->pc = 0x7F053818u;
    // 7F053818: li      r3, 1754
    ctx->gpr[3] = (u32)(s32)(1754);

label_7F05381C:
    ctx->pc = 0x7F05381Cu;
    // 7F05381C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F053820:
    ctx->pc = 0x7F053820u;
    // 7F053820: li      r6, 10
    ctx->gpr[6] = (u32)(s32)(10);

label_7F053824:
    ctx->pc = 0x7F053824u;
    // 7F053824: bl      0x7F0513A0
    {
            ctx->lr = 0x7F053828u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F053828:
    ctx->pc = 0x7F053828u;
    ctx->downcount -= 4;
    // 7F053828: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05382C:
    ctx->pc = 0x7F05382Cu;
    // 7F05382C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F053830:
    ctx->pc = 0x7F053830u;
    // 7F053830: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F053834:
    ctx->pc = 0x7F053834u;
    // 7F053834: bl      0x7F1EDD18
    {
            ctx->lr = 0x7F053838u;
            ctx->pc = 0x7F1EDD18u;
            return;
    }

label_7F053838:
    ctx->pc = 0x7F053838u;
    ctx->downcount -= 2;
    // 7F053838: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05383C:
    ctx->pc = 0x7F05383Cu;
    // 7F05383C: bl      0x7F228CE4
    {
            ctx->lr = 0x7F053840u;
            ctx->pc = 0x7F228CE4u;
            return;
    }

label_7F053840:
    ctx->pc = 0x7F053840u;
    ctx->downcount -= 9;
    // 7F053840: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053844:
    ctx->pc = 0x7F053844u;
    // 7F053844: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F053848:
    ctx->pc = 0x7F053848u;
    // 7F053848: lfd     f0, -10672(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F053848u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10672);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F05384C:
    ctx->pc = 0x7F05384Cu;
    // 7F05384C: cmpwi   r31, 20
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(20);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F053850:
    ctx->pc = 0x7F053850u;
    // 7F053850: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053850u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F053854:
    ctx->pc = 0x7F053854u;
    // 7F053854: fsub   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F053854u)) return;
    ppc_fsub(ctx, 0, 1, 0);

label_7F053858:
    ctx->pc = 0x7F053858u;
    // 7F053858: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F053858u)) return;
    ppc_frsp(ctx, 0, 0);

label_7F05385C:
    ctx->pc = 0x7F05385Cu;
    // 7F05385C: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F05385Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053860:
    ctx->pc = 0x7F053860u;
    // 7F053860: bc    4, 1, 0x7F053874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053874;
        }
    }

label_7F053864:
    ctx->pc = 0x7F053864u;
    ctx->downcount -= 4;
    // 7F053864: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F053868:
    ctx->pc = 0x7F053868u;
    // 7F053868: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05386C:
    ctx->pc = 0x7F05386Cu;
    // 7F05386C: lfs     f0, -10664(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F05386Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F053870:
    ctx->pc = 0x7F053870u;
    // 7F053870: stfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F053870u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053874:
    ctx->pc = 0x7F053874u;
    ctx->downcount -= 6;
    // 7F053874: lwz     r6, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F053878:
    ctx->pc = 0x7F053878u;
    // 7F053878: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F05387C:
    ctx->pc = 0x7F05387Cu;
    // 7F05387C: lfs     f0, -10660(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F05387Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10660);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F053880:
    ctx->pc = 0x7F053880u;
    // 7F053880: lfs     f1, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F053880u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F053884:
    ctx->pc = 0x7F053884u;
    // 7F053884: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F053884u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F053888:
    ctx->pc = 0x7F053888u;
    // 7F053888: bc    4, 0, 0x7F0538E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0538E0;
        }
    }

label_7F05388C:
    ctx->pc = 0x7F05388Cu;
    ctx->downcount -= 21;
    // 7F05388C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053890:
    ctx->pc = 0x7F053890u;
    // 7F053890: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F053894:
    ctx->pc = 0x7F053894u;
    // 7F053894: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053898:
    ctx->pc = 0x7F053898u;
    // 7F053898: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F05389C:
    ctx->pc = 0x7F05389Cu;
    // 7F05389C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0538A0:
    ctx->pc = 0x7F0538A0u;
    // 7F0538A0: stw     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0538A4:
    ctx->pc = 0x7F0538A4u;
    // 7F0538A4: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0538A8:
    ctx->pc = 0x7F0538A8u;
    // 7F0538A8: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0538AC:
    ctx->pc = 0x7F0538ACu;
    // 7F0538AC: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0538B0:
    ctx->pc = 0x7F0538B0u;
    // 7F0538B0: stw     r4, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0538B4:
    ctx->pc = 0x7F0538B4u;
    // 7F0538B4: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0538B8:
    ctx->pc = 0x7F0538B8u;
    // 7F0538B8: lwz     r6, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0538BC:
    ctx->pc = 0x7F0538BCu;
    // 7F0538BC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0538C0:
    ctx->pc = 0x7F0538C0u;
    // 7F0538C0: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0538C4:
    ctx->pc = 0x7F0538C4u;
    // 7F0538C4: stw     r4, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0538C8:
    ctx->pc = 0x7F0538C8u;
    // 7F0538C8: stw     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0538CC:
    ctx->pc = 0x7F0538CCu;
    // 7F0538CC: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0538D0:
    ctx->pc = 0x7F0538D0u;
    // 7F0538D0: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0538D4:
    ctx->pc = 0x7F0538D4u;
    // 7F0538D4: stw     r4, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0538D8:
    ctx->pc = 0x7F0538D8u;
    // 7F0538D8: stw     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0538DC:
    ctx->pc = 0x7F0538DCu;
    // 7F0538DC: b       0x7F053918
    {
            goto label_7F053918;
    }

label_7F0538E0:
    ctx->pc = 0x7F0538E0u;
    ctx->downcount -= 14;
    // 7F0538E0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0538E4:
    ctx->pc = 0x7F0538E4u;
    // 7F0538E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0538E8:
    ctx->pc = 0x7F0538E8u;
    // 7F0538E8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0538EC:
    ctx->pc = 0x7F0538ECu;
    // 7F0538EC: stw     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0538F0:
    ctx->pc = 0x7F0538F0u;
    // 7F0538F0: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0538F4:
    ctx->pc = 0x7F0538F4u;
    // 7F0538F4: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0538F8:
    ctx->pc = 0x7F0538F8u;
    // 7F0538F8: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0538FC:
    ctx->pc = 0x7F0538FCu;
    // 7F0538FC: stw     r4, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053900:
    ctx->pc = 0x7F053900u;
    // 7F053900: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053904:
    ctx->pc = 0x7F053904u;
    // 7F053904: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053908:
    ctx->pc = 0x7F053908u;
    // 7F053908: lwz     r4, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05390C:
    ctx->pc = 0x7F05390Cu;
    // 7F05390C: lwz     r0, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053910:
    ctx->pc = 0x7F053910u;
    // 7F053910: stw     r4, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053914:
    ctx->pc = 0x7F053914u;
    // 7F053914: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053918:
    ctx->pc = 0x7F053918u;
    ctx->downcount -= 20;
    // 7F053918: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F053918u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F053918u);
        if (ctx->exception) return;
    }

label_7F05391C:
    ctx->pc = 0x7F05391Cu;
    // 7F05391C: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F05391Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F053920:
    ctx->pc = 0x7F053920u;
    // 7F053920: psq_l   f30, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F053920u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F053920u);
        if (ctx->exception) return;
    }

label_7F053924:
    ctx->pc = 0x7F053924u;
    // 7F053924: lfd     f30, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F053924u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F053928:
    ctx->pc = 0x7F053928u;
    // 7F053928: lmw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F05392C:
    ctx->pc = 0x7F05392Cu;
    // 7F05392C: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053930:
    ctx->pc = 0x7F053930u;
    // 7F053930: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F053934:
    ctx->pc = 0x7F053934u;
    // 7F053934: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F053938:
    ctx->pc = 0x7F053938u;
    // 7F053938: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F05393C:
    ctx->pc = 0x7F05393Cu;
    ctx->downcount -= 13;
    // 7F05393C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F053940:
    ctx->pc = 0x7F053940u;
    // 7F053940: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F053944:
    ctx->pc = 0x7F053944u;
    // 7F053944: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F053948:
    ctx->pc = 0x7F053948u;
    // 7F053948: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F05394C:
    ctx->pc = 0x7F05394Cu;
    // 7F05394C: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F053950:
    ctx->pc = 0x7F053950u;
    // 7F053950: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F053954:
    ctx->pc = 0x7F053954u;
    // 7F053954: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F053958:
    ctx->pc = 0x7F053958u;
    // 7F053958: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F05395C:
    ctx->pc = 0x7F05395Cu;
    // 7F05395C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F053960:
    ctx->pc = 0x7F053960u;
    ctx->downcount -= 4;
    // 7F053960: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F053964:
    ctx->pc = 0x7F053964u;
    // 7F053964: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F053968:
    ctx->pc = 0x7F053968u;
    // 7F053968: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05396C:
    ctx->pc = 0x7F05396Cu;
    // 7F05396C: bl      0x7F05393C
    {
            ctx->lr = 0x7F053970u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F05393Cu;
                return;
            }
            goto label_7F05393C;
    }

label_7F053970:
    ctx->pc = 0x7F053970u;
    ctx->downcount -= 35;
    // 7F053970: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F053974:
    ctx->pc = 0x7F053974u;
    // 7F053974: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F053978:
    ctx->pc = 0x7F053978u;
    // 7F053978: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F05397C:
    ctx->pc = 0x7F05397Cu;
    // 7F05397C: addi    r5, r4, -10648
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-10648);

label_7F053980:
    ctx->pc = 0x7F053980u;
    // 7F053980: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F053984:
    ctx->pc = 0x7F053984u;
    // 7F053984: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F053984u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F053988:
    ctx->pc = 0x7F053988u;
    // 7F053988: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F05398C:
    ctx->pc = 0x7F05398Cu;
    // 7F05398C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F053990:
    ctx->pc = 0x7F053990u;
    // 7F053990: lfs     f1, -10656(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053990u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10656);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F053994:
    ctx->pc = 0x7F053994u;
    // 7F053994: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F053994u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F053998:
    ctx->pc = 0x7F053998u;
    // 7F053998: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F05399C:
    ctx->pc = 0x7F05399Cu;
    // 7F05399C: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F05399Cu)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F0539A0:
    ctx->pc = 0x7F0539A0u;
    // 7F0539A0: lfs     f0, -10652(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0539A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10652);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0539A4:
    ctx->pc = 0x7F0539A4u;
    // 7F0539A4: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0539A4u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F0539A8:
    ctx->pc = 0x7F0539A8u;
    // 7F0539A8: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0539A8u)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F0539AC:
    ctx->pc = 0x7F0539ACu;
    // 7F0539AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0539B0:
    ctx->pc = 0x7F0539B0u;
    // 7F0539B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0539B4:
    ctx->pc = 0x7F0539B4u;
    // 7F0539B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0539B8:
    ctx->pc = 0x7F0539B8u;
    ctx->downcount -= 29;
    // 7F0539B8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0539BC:
    ctx->pc = 0x7F0539BCu;
    // 7F0539BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0539C0:
    ctx->pc = 0x7F0539C0u;
    // 7F0539C0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0539C4:
    ctx->pc = 0x7F0539C4u;
    // 7F0539C4: rlwinm r0, r6, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_7F0539C8:
    ctx->pc = 0x7F0539C8u;
    // 7F0539C8: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0539CC:
    ctx->pc = 0x7F0539CCu;
    // 7F0539CC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0539D0:
    ctx->pc = 0x7F0539D0u;
    // 7F0539D0: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F0539D4:
    ctx->pc = 0x7F0539D4u;
    // 7F0539D4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0539D8:
    ctx->pc = 0x7F0539D8u;
    // 7F0539D8: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F0539DC:
    ctx->pc = 0x7F0539DCu;
    // 7F0539DC: lwz     r4, 96(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0539E0:
    ctx->pc = 0x7F0539E0u;
    // 7F0539E0: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0539E4:
    ctx->pc = 0x7F0539E4u;
    // 7F0539E4: rlwinm r3, r4, 28, 0, 3
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 28u) & 0xF0000000u;
    }

label_7F0539E8:
    ctx->pc = 0x7F0539E8u;
    // 7F0539E8: rlwinm r4, r4, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0x00000001u;
    }

label_7F0539EC:
    ctx->pc = 0x7F0539ECu;
    // 7F0539EC: stw     r0, 96(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0539F0:
    ctx->pc = 0x7F0539F0u;
    // 7F0539F0: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F0539F4:
    ctx->pc = 0x7F0539F4u;
    // 7F0539F4: cmpwi   r0, 16
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

label_7F0539F8:
    ctx->pc = 0x7F0539F8u;
    // 7F0539F8: rlwinm r0, r3, 4, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFFFu;
    }

label_7F0539FC:
    ctx->pc = 0x7F0539FCu;
    // 7F0539FC: add   r27, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F053A00:
    ctx->pc = 0x7F053A00u;
    // 7F053A00: bc    4, 2, 0x7F053A74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053A74;
        }
    }

label_7F053A04:
    ctx->pc = 0x7F053A04u;
    ctx->downcount -= 17;
    // 7F053A04: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F053A08:
    ctx->pc = 0x7F053A08u;
    // 7F053A08: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053A0C:
    ctx->pc = 0x7F053A0Cu;
    // 7F053A0C: lfs     f0, -10640(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053A0Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-10640);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F053A10:
    ctx->pc = 0x7F053A10u;
    // 7F053A10: mulli   r4, r31, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)20);

label_7F053A14:
    ctx->pc = 0x7F053A14u;
    // 7F053A14: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F053A18:
    ctx->pc = 0x7F053A18u;
    // 7F053A18: stfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F053A18u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053A1C:
    ctx->pc = 0x7F053A1Cu;
    // 7F053A1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F053A20:
    ctx->pc = 0x7F053A20u;
    // 7F053A20: add   r7, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F053A24:
    ctx->pc = 0x7F053A24u;
    // 7F053A24: lwz     r6, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F053A28:
    ctx->pc = 0x7F053A28u;
    // 7F053A28: lwz     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053A2C:
    ctx->pc = 0x7F053A2Cu;
    // 7F053A2C: lwz     r4, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053A30:
    ctx->pc = 0x7F053A30u;
    // 7F053A30: stw     r5, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F053A34:
    ctx->pc = 0x7F053A34u;
    // 7F053A34: stw     r4, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053A38:
    ctx->pc = 0x7F053A38u;
    // 7F053A38: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F053A3C:
    ctx->downcount -= 12;
    // 7F053A3C: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_7F053A40:
    // 7F053A40: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F053A44:
    ctx->pc = 0x7F053A44u;
    // 7F053A44: lwzx    r4, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053A48:
    ctx->pc = 0x7F053A48u;
    // 7F053A48: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053A4C:
    ctx->pc = 0x7F053A4Cu;
    // 7F053A4C: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053A4Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053A50:
    ctx->pc = 0x7F053A50u;
    // 7F053A50: lwzx    r6, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F053A54:
    ctx->pc = 0x7F053A54u;
    // 7F053A54: lwz     r5, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053A58:
    ctx->pc = 0x7F053A58u;
    // 7F053A58: lwz     r4, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053A5C:
    ctx->pc = 0x7F053A5Cu;
    // 7F053A5C: lwz     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053A60:
    ctx->pc = 0x7F053A60u;
    // 7F053A60: stw     r4, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053A64:
    ctx->pc = 0x7F053A64u;
    // 7F053A64: stw     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053A68:
    // 7F053A68: bc    16, 0, 0x7F053A3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053A3Cu;
                return;
            }
            goto label_7F053A3C;
        }
    }

label_7F053A6C:
    ctx->pc = 0x7F053A6Cu;
    ctx->downcount -= 2;
    // 7F053A6C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F053A70:
    ctx->pc = 0x7F053A70u;
    // 7F053A70: b       0x7F053B30
    {
            goto label_7F053B30;
    }

label_7F053A74:
    ctx->pc = 0x7F053A74u;
    ctx->downcount -= 3;
    // 7F053A74: addi    r0, r27, -1
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(-1);

label_7F053A78:
    ctx->pc = 0x7F053A78u;
    // 7F053A78: rlwinm r3, r0, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_7F053A7C:
    ctx->pc = 0x7F053A7Cu;
    // 7F053A7C: bl      0x7F02A5A8
    {
            ctx->lr = 0x7F053A80u;
            ctx->pc = 0x7F02A5A8u;
            return;
    }

label_7F053A80:
    ctx->pc = 0x7F053A80u;
    ctx->downcount -= 3;
    // 7F053A80: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F053A84:
    ctx->pc = 0x7F053A84u;
    // 7F053A84: rlwinm r3, r27, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[27], 8u) & 0xFFFFFF00u;
    }

label_7F053A88:
    ctx->pc = 0x7F053A88u;
    // 7F053A88: bl      0x7F02A5A8
    {
            ctx->lr = 0x7F053A8Cu;
            ctx->pc = 0x7F02A5A8u;
            return;
    }

label_7F053A8C:
    ctx->pc = 0x7F053A8Cu;
    ctx->downcount -= 22;
    // 7F053A8C: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F053A90:
    ctx->pc = 0x7F053A90u;
    // 7F053A90: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F053A94:
    ctx->pc = 0x7F053A94u;
    // 7F053A94: add   r4, r3, r28
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F053A98:
    ctx->pc = 0x7F053A98u;
    // 7F053A98: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F053A9C:
    ctx->pc = 0x7F053A9Cu;
    // 7F053A9C: mulli   r5, r4, 224
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)224);

label_7F053AA0:
    ctx->pc = 0x7F053AA0u;
    // 7F053AA0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053AA4:
    ctx->pc = 0x7F053AA4u;
    // 7F053AA4: addi    r4, r3, -10632
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10632);

label_7F053AA8:
    ctx->pc = 0x7F053AA8u;
    // 7F053AA8: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053AAC:
    ctx->pc = 0x7F053AACu;
    // 7F053AAC: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053AACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F053AB0:
    ctx->pc = 0x7F053AB0u;
    // 7F053AB0: srawi r0, r5, 12
    {
        u32 sh = 12u;
        u32 value = ctx->gpr[5];
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

label_7F053AB4:
    ctx->pc = 0x7F053AB4u;
    // 7F053AB4: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F053AB8:
    ctx->pc = 0x7F053AB8u;
    // 7F053AB8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F053ABC:
    ctx->pc = 0x7F053ABCu;
    // 7F053ABC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053AC0:
    ctx->pc = 0x7F053AC0u;
    // 7F053AC0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F053AC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F053AC4:
    ctx->pc = 0x7F053AC4u;
    // 7F053AC4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F053AC4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F053AC8:
    ctx->pc = 0x7F053AC8u;
    // 7F053AC8: stfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F053AC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053ACC:
    ctx->pc = 0x7F053ACCu;
    // 7F053ACC: lwz     r4, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053AD0:
    ctx->pc = 0x7F053AD0u;
    // 7F053AD0: lha     r3, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053AD4:
    ctx->pc = 0x7F053AD4u;
    // 7F053AD4: cmpwi   r3, 0
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

label_7F053AD8:
    ctx->pc = 0x7F053AD8u;
    // 7F053AD8: bc    4, 1, 0x7F053AE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053AE4;
        }
    }

label_7F053ADC:
    ctx->pc = 0x7F053ADCu;
    ctx->downcount -= 2;
    // 7F053ADC: addi    r0, r3, -128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-128);

label_7F053AE0:
    ctx->pc = 0x7F053AE0u;
    // 7F053AE0: sth     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053AE4:
    ctx->pc = 0x7F053AE4u;
    ctx->downcount -= 8;
    // 7F053AE4: mulli   r4, r31, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)20);

label_7F053AE8:
    ctx->pc = 0x7F053AE8u;
    // 7F053AE8: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F053AEC:
    ctx->pc = 0x7F053AECu;
    // 7F053AEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F053AF0:
    ctx->pc = 0x7F053AF0u;
    // 7F053AF0: add   r6, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F053AF4:
    ctx->pc = 0x7F053AF4u;
    // 7F053AF4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F053AF8:
    ctx->downcount -= 13;
    // 7F053AF8: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_7F053AFC:
    ctx->pc = 0x7F053AFCu;
    // 7F053AFC: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053B00:
    ctx->pc = 0x7F053B00u;
    // 7F053B00: lwzx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053B04:
    // 7F053B04: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F053B08:
    ctx->pc = 0x7F053B08u;
    // 7F053B08: lfs     f0, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F053B08u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F053B0C:
    ctx->pc = 0x7F053B0Cu;
    // 7F053B0C: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053B10:
    ctx->pc = 0x7F053B10u;
    // 7F053B10: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053B10u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053B14:
    ctx->pc = 0x7F053B14u;
    // 7F053B14: lwzx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053B18:
    ctx->pc = 0x7F053B18u;
    // 7F053B18: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053B1C:
    ctx->pc = 0x7F053B1Cu;
    // 7F053B1C: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053B20:
    ctx->pc = 0x7F053B20u;
    // 7F053B20: lha     r0, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053B24:
    ctx->pc = 0x7F053B24u;
    // 7F053B24: sth     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053B28:
    // 7F053B28: bc    16, 0, 0x7F053AF8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053AF8u;
                return;
            }
            goto label_7F053AF8;
        }
    }

label_7F053B2C:
    ctx->pc = 0x7F053B2Cu;
    ctx->downcount -= 1;
    // 7F053B2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F053B30:
    ctx->pc = 0x7F053B30u;
    ctx->downcount -= 16;
    // 7F053B30: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F053B34:
    ctx->pc = 0x7F053B34u;
    // 7F053B34: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053B38:
    ctx->pc = 0x7F053B38u;
    // 7F053B38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F053B3C:
    ctx->pc = 0x7F053B3Cu;
    // 7F053B3C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F053B40:
    ctx->pc = 0x7F053B40u;
    // 7F053B40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F053B44:
    ctx->pc = 0x7F053B44u;
    ctx->downcount -= 19;
    // 7F053B44: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F053B48:
    ctx->pc = 0x7F053B48u;
    // 7F053B48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F053B4C:
    ctx->pc = 0x7F053B4Cu;
    // 7F053B4C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053B50:
    ctx->pc = 0x7F053B50u;
    // 7F053B50: stmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F053B54:
    ctx->pc = 0x7F053B54u;
    // 7F053B54: or.   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F053B58:
    ctx->pc = 0x7F053B58u;
    // 7F053B58: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F053B5C:
    ctx->pc = 0x7F053B5Cu;
    // 7F053B5C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F053B60:
    ctx->pc = 0x7F053B60u;
    // 7F053B60: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F053B64:
    ctx->pc = 0x7F053B64u;
    // 7F053B64: bc    4, 2, 0x7F053BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053BA8;
        }
    }

label_7F053B68:
    ctx->pc = 0x7F053B68u;
    ctx->downcount -= 11;
    // 7F053B68: mulli   r3, r31, 20
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)20);

label_7F053B6C:
    ctx->pc = 0x7F053B6Cu;
    // 7F053B6C: lfs     f0, 12(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F053B6Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F053B70:
    ctx->pc = 0x7F053B70u;
    // 7F053B70: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053B74:
    ctx->pc = 0x7F053B74u;
    // 7F053B74: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F053B78:
    ctx->pc = 0x7F053B78u;
    // 7F053B78: add   r6, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F053B7C:
    ctx->pc = 0x7F053B7Cu;
    // 7F053B7C: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053B7Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053B80:
    ctx->pc = 0x7F053B80u;
    // 7F053B80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F053B84:
    ctx->pc = 0x7F053B84u;
    // 7F053B84: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F053B88:
    ctx->downcount -= 8;
    // 7F053B88: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_7F053B8C:
    ctx->pc = 0x7F053B8Cu;
    // 7F053B8C: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053B90:
    ctx->pc = 0x7F053B90u;
    // 7F053B90: lwzx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053B94:
    // 7F053B94: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F053B98:
    ctx->pc = 0x7F053B98u;
    // 7F053B98: lfs     f0, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F053B98u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F053B9C:
    ctx->pc = 0x7F053B9Cu;
    // 7F053B9C: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053BA0:
    ctx->pc = 0x7F053BA0u;
    // 7F053BA0: stfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053BA0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053BA4:
    // 7F053BA4: bc    16, 0, 0x7F053B88
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053B88u;
                return;
            }
            goto label_7F053B88;
        }
    }

label_7F053BA8:
    ctx->pc = 0x7F053BA8u;
    ctx->downcount -= 8;
    // 7F053BA8: rlwinm r0, r30, 28, 0, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 28u) & 0xF0000000u;
    }

label_7F053BAC:
    ctx->pc = 0x7F053BACu;
    // 7F053BAC: rlwinm r3, r30, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[30], 1u) & 0x00000001u;
    }

label_7F053BB0:
    ctx->pc = 0x7F053BB0u;
    // 7F053BB0: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F053BB4:
    ctx->pc = 0x7F053BB4u;
    // 7F053BB4: rlwinm r0, r0, 4, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFFFu;
    }

label_7F053BB8:
    ctx->pc = 0x7F053BB8u;
    // 7F053BB8: add   r26, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F053BBC:
    ctx->pc = 0x7F053BBCu;
    // 7F053BBC: addi    r0, r26, -1
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(-1);

label_7F053BC0:
    ctx->pc = 0x7F053BC0u;
    // 7F053BC0: rlwinm r3, r0, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_7F053BC4:
    ctx->pc = 0x7F053BC4u;
    // 7F053BC4: bl      0x7F02A5A8
    {
            ctx->lr = 0x7F053BC8u;
            ctx->pc = 0x7F02A5A8u;
            return;
    }

label_7F053BC8:
    ctx->pc = 0x7F053BC8u;
    ctx->downcount -= 3;
    // 7F053BC8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F053BCC:
    ctx->pc = 0x7F053BCCu;
    // 7F053BCC: rlwinm r3, r26, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[26], 8u) & 0xFFFFFF00u;
    }

label_7F053BD0:
    ctx->pc = 0x7F053BD0u;
    // 7F053BD0: bl      0x7F02A5A8
    {
            ctx->lr = 0x7F053BD4u;
            ctx->pc = 0x7F02A5A8u;
            return;
    }

label_7F053BD4:
    ctx->pc = 0x7F053BD4u;
    ctx->downcount -= 23;
    // 7F053BD4: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F053BD8:
    ctx->pc = 0x7F053BD8u;
    // 7F053BD8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F053BDC:
    ctx->pc = 0x7F053BDCu;
    // 7F053BDC: add   r4, r3, r27
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F053BE0:
    ctx->pc = 0x7F053BE0u;
    // 7F053BE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F053BE4:
    ctx->pc = 0x7F053BE4u;
    // 7F053BE4: mulli   r5, r4, 224
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)224);

label_7F053BE8:
    ctx->pc = 0x7F053BE8u;
    // 7F053BE8: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053BEC:
    ctx->pc = 0x7F053BECu;
    // 7F053BEC: addi    r4, r3, -10632
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10632);

label_7F053BF0:
    ctx->pc = 0x7F053BF0u;
    // 7F053BF0: lwz     r3, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053BF4:
    ctx->pc = 0x7F053BF4u;
    // 7F053BF4: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053BF4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F053BF8:
    ctx->pc = 0x7F053BF8u;
    // 7F053BF8: srawi r0, r5, 12
    {
        u32 sh = 12u;
        u32 value = ctx->gpr[5];
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

label_7F053BFC:
    ctx->pc = 0x7F053BFCu;
    // 7F053BFC: addze  r4, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F053C00:
    ctx->pc = 0x7F053C00u;
    // 7F053C00: addi    r0, r4, 32
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32);

label_7F053C04:
    ctx->pc = 0x7F053C04u;
    // 7F053C04: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F053C08:
    ctx->pc = 0x7F053C08u;
    // 7F053C08: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053C0C:
    ctx->pc = 0x7F053C0Cu;
    // 7F053C0C: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F053C0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F053C10:
    ctx->pc = 0x7F053C10u;
    // 7F053C10: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F053C10u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F053C14:
    ctx->pc = 0x7F053C14u;
    // 7F053C14: stfs     f0, 20(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F053C14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053C18:
    ctx->pc = 0x7F053C18u;
    // 7F053C18: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053C1C:
    ctx->pc = 0x7F053C1Cu;
    // 7F053C1C: lha     r3, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053C20:
    ctx->pc = 0x7F053C20u;
    // 7F053C20: cmpwi   r3, 1024
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1024);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F053C24:
    ctx->pc = 0x7F053C24u;
    // 7F053C24: bc    4, 0, 0x7F053C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053C30;
        }
    }

label_7F053C28:
    ctx->pc = 0x7F053C28u;
    ctx->downcount -= 2;
    // 7F053C28: addi    r0, r3, 128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(128);

label_7F053C2C:
    ctx->pc = 0x7F053C2Cu;
    // 7F053C2C: sth     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053C30:
    ctx->pc = 0x7F053C30u;
    ctx->downcount -= 5;
    // 7F053C30: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F053C34:
    ctx->pc = 0x7F053C34u;
    // 7F053C34: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053C38:
    ctx->pc = 0x7F053C38u;
    // 7F053C38: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F053C3C:
    ctx->pc = 0x7F053C3Cu;
    // 7F053C3C: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F053C40:
    ctx->pc = 0x7F053C40u;
    // 7F053C40: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F053C44u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F053C44:
    ctx->pc = 0x7F053C44u;
    ctx->downcount -= 2;
    // 7F053C44: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F053C48:
    ctx->pc = 0x7F053C48u;
    // 7F053C48: bl      0x7F3CC708
    {
            ctx->lr = 0x7F053C4Cu;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F053C4C:
    ctx->pc = 0x7F053C4Cu;
    ctx->downcount -= 4;
    // 7F053C4C: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053C50:
    ctx->pc = 0x7F053C50u;
    // 7F053C50: extsh r4, r3
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F053C54:
    ctx->pc = 0x7F053C54u;
    // 7F053C54: lha     r3, 34(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(34);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053C58:
    ctx->pc = 0x7F053C58u;
    // 7F053C58: bl      0x7F3CC908
    {
            ctx->lr = 0x7F053C5Cu;
            ctx->pc = 0x7F3CC908u;
            return;
    }

label_7F053C5C:
    ctx->pc = 0x7F053C5Cu;
    ctx->downcount -= 2;
    // 7F053C5C: cmpwi   r3, 0
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

label_7F053C60:
    ctx->pc = 0x7F053C60u;
    // 7F053C60: bc    4, 1, 0x7F053C94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053C94;
        }
    }

label_7F053C64:
    ctx->pc = 0x7F053C64u;
    ctx->downcount -= 2;
    // 7F053C64: cmpwi   r3, 48
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(48);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F053C68:
    ctx->pc = 0x7F053C68u;
    // 7F053C68: bc    4, 1, 0x7F053C80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053C80;
        }
    }

label_7F053C6C:
    ctx->pc = 0x7F053C6Cu;
    ctx->downcount -= 5;
    // 7F053C6C: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053C70:
    ctx->pc = 0x7F053C70u;
    // 7F053C70: lha     r3, 42(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(42);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053C74:
    ctx->pc = 0x7F053C74u;
    // 7F053C74: addi    r0, r3, 48
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(48);

label_7F053C78:
    ctx->pc = 0x7F053C78u;
    // 7F053C78: sth     r0, 42(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053C7C:
    ctx->pc = 0x7F053C7Cu;
    // 7F053C7C: b       0x7F053CC0
    {
            goto label_7F053CC0;
    }

label_7F053C80:
    ctx->pc = 0x7F053C80u;
    ctx->downcount -= 5;
    // 7F053C80: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053C84:
    ctx->pc = 0x7F053C84u;
    // 7F053C84: lha     r0, 42(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(42);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053C88:
    ctx->pc = 0x7F053C88u;
    // 7F053C88: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F053C8C:
    ctx->pc = 0x7F053C8Cu;
    // 7F053C8C: sth     r0, 42(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053C90:
    ctx->pc = 0x7F053C90u;
    // 7F053C90: b       0x7F053CC0
    {
            goto label_7F053CC0;
    }

label_7F053C94:
    ctx->pc = 0x7F053C94u;
    ctx->downcount -= 2;
    // 7F053C94: cmpwi   r3, -48
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-48);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F053C98:
    ctx->pc = 0x7F053C98u;
    // 7F053C98: bc    4, 0, 0x7F053CB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053CB0;
        }
    }

label_7F053C9C:
    ctx->pc = 0x7F053C9Cu;
    ctx->downcount -= 5;
    // 7F053C9C: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053CA0:
    ctx->pc = 0x7F053CA0u;
    // 7F053CA0: lha     r3, 42(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(42);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053CA4:
    ctx->pc = 0x7F053CA4u;
    // 7F053CA4: addi    r0, r3, -48
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-48);

label_7F053CA8:
    ctx->pc = 0x7F053CA8u;
    // 7F053CA8: sth     r0, 42(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053CAC:
    ctx->pc = 0x7F053CACu;
    // 7F053CAC: b       0x7F053CC0
    {
            goto label_7F053CC0;
    }

label_7F053CB0:
    ctx->pc = 0x7F053CB0u;
    ctx->downcount -= 4;
    // 7F053CB0: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053CB4:
    ctx->pc = 0x7F053CB4u;
    // 7F053CB4: lha     r0, 42(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(42);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053CB8:
    ctx->pc = 0x7F053CB8u;
    // 7F053CB8: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F053CBC:
    ctx->pc = 0x7F053CBCu;
    // 7F053CBC: sth     r0, 42(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053CC0:
    ctx->pc = 0x7F053CC0u;
    ctx->downcount -= 8;
    // 7F053CC0: mulli   r4, r31, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)20);

label_7F053CC4:
    ctx->pc = 0x7F053CC4u;
    // 7F053CC4: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F053CC8:
    ctx->pc = 0x7F053CC8u;
    // 7F053CC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F053CCC:
    ctx->pc = 0x7F053CCCu;
    // 7F053CCC: add   r31, r28, r4
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F053CD0:
    ctx->pc = 0x7F053CD0u;
    // 7F053CD0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F053CD4:
    ctx->downcount -= 18;
    // 7F053CD4: addi    r6, r3, 32
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(32);

label_7F053CD8:
    ctx->pc = 0x7F053CD8u;
    // 7F053CD8: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053CDC:
    ctx->pc = 0x7F053CDCu;
    // 7F053CDC: lwzx    r4, r31, r6
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[6];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053CE0:
    // 7F053CE0: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F053CE4:
    ctx->pc = 0x7F053CE4u;
    // 7F053CE4: lfs     f0, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F053CE4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F053CE8:
    ctx->pc = 0x7F053CE8u;
    // 7F053CE8: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053CEC:
    ctx->pc = 0x7F053CECu;
    // 7F053CEC: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053CECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053CF0:
    ctx->pc = 0x7F053CF0u;
    // 7F053CF0: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053CF4:
    ctx->pc = 0x7F053CF4u;
    // 7F053CF4: lwzx    r4, r31, r6
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[6];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053CF8:
    ctx->pc = 0x7F053CF8u;
    // 7F053CF8: lha     r0, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053CFC:
    ctx->pc = 0x7F053CFCu;
    // 7F053CFC: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053D00:
    ctx->pc = 0x7F053D00u;
    // 7F053D00: sth     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053D04:
    ctx->pc = 0x7F053D04u;
    // 7F053D04: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053D08:
    ctx->pc = 0x7F053D08u;
    // 7F053D08: lwzx    r4, r31, r6
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[6];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053D0C:
    ctx->pc = 0x7F053D0Cu;
    // 7F053D0C: lha     r0, 42(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(42);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053D10:
    ctx->pc = 0x7F053D10u;
    // 7F053D10: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053D14:
    ctx->pc = 0x7F053D14u;
    // 7F053D14: sth     r0, 42(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053D18:
    // 7F053D18: bc    16, 0, 0x7F053CD4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053CD4u;
                return;
            }
            goto label_7F053CD4;
        }
    }

label_7F053D1C:
    ctx->pc = 0x7F053D1Cu;
    ctx->downcount -= 2;
    // 7F053D1C: cmpwi   r30, 16
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F053D20:
    ctx->pc = 0x7F053D20u;
    // 7F053D20: bc    4, 2, 0x7F053E64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053E64;
        }
    }

label_7F053D24:
    ctx->pc = 0x7F053D24u;
    ctx->downcount -= 14;
    // 7F053D24: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F053D28:
    ctx->pc = 0x7F053D28u;
    // 7F053D28: lwz     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F053D2C:
    ctx->pc = 0x7F053D2Cu;
    // 7F053D2C: lfs     f0, -10640(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F053D2Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10640);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F053D30:
    ctx->pc = 0x7F053D30u;
    // 7F053D30: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F053D34:
    ctx->pc = 0x7F053D34u;
    // 7F053D34: lwz     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053D38:
    ctx->pc = 0x7F053D38u;
    // 7F053D38: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F053D3C:
    ctx->pc = 0x7F053D3Cu;
    // 7F053D3C: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F053D3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F053D40:
    ctx->pc = 0x7F053D40u;
    // 7F053D40: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053D44:
    ctx->pc = 0x7F053D44u;
    // 7F053D44: lwz     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F053D48:
    ctx->pc = 0x7F053D48u;
    // 7F053D48: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F053D4C:
    ctx->pc = 0x7F053D4Cu;
    // 7F053D4C: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F053D50:
    ctx->pc = 0x7F053D50u;
    // 7F053D50: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F053D54:
    ctx->pc = 0x7F053D54u;
    // 7F053D54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053D58:
    ctx->pc = 0x7F053D58u;
    // 7F053D58: bl      0x7F053538
    {
            ctx->lr = 0x7F053D5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053538u;
                return;
            }
            goto label_7F053538;
    }

label_7F053D5C:
    ctx->pc = 0x7F053D5Cu;
    ctx->downcount -= 47;
    // 7F053D5C: li      r4, 192
    ctx->gpr[4] = (u32)(s32)(192);

label_7F053D60:
    ctx->pc = 0x7F053D60u;
    // 7F053D60: lwz     r0, 104(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053D64:
    ctx->pc = 0x7F053D64u;
    // 7F053D64: divw   r27, r3, r4
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[27] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F053D68:
    ctx->pc = 0x7F053D68u;
    // 7F053D68: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F053D6C:
    ctx->pc = 0x7F053D6Cu;
    // 7F053D6C: rlwinm r0, r0, 2, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x00000004u;
    }

label_7F053D70:
    ctx->pc = 0x7F053D70u;
    // 7F053D70: add   r4, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F053D74:
    ctx->pc = 0x7F053D74u;
    // 7F053D74: stw     r27, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F053D78:
    ctx->pc = 0x7F053D78u;
    // 7F053D78: bl      0x7F3CC594
    {
            ctx->lr = 0x7F053D7Cu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F053D7C:
    ctx->pc = 0x7F053D7Cu;
    ctx->downcount -= 7;
    // 7F053D7C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F053D80:
    ctx->pc = 0x7F053D80u;
    // 7F053D80: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053D84:
    ctx->pc = 0x7F053D84u;
    // 7F053D84: addi    r4, r3, -10624
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-10624);

label_7F053D88:
    ctx->pc = 0x7F053D88u;
    // 7F053D88: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F053D8C:
    ctx->pc = 0x7F053D8Cu;
    // 7F053D8C: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F053D8Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F053D90:
    ctx->pc = 0x7F053D90u;
    // 7F053D90: addi    r4, r5, 16
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(16);

label_7F053D94:
    ctx->pc = 0x7F053D94u;
    // 7F053D94: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F053D98u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F053D98:
    ctx->pc = 0x7F053D98u;
    ctx->downcount -= 2;
    // 7F053D98: cmpwi   r27, 0
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

label_7F053D9C:
    ctx->pc = 0x7F053D9Cu;
    // 7F053D9C: bc    4, 2, 0x7F053DE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053DE0;
        }
    }

label_7F053DA0:
    ctx->pc = 0x7F053DA0u;
    ctx->downcount -= 16;
    // 7F053DA0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F053DA4:
    ctx->pc = 0x7F053DA4u;
    // 7F053DA4: lwz     r6, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F053DA8:
    ctx->pc = 0x7F053DA8u;
    // 7F053DA8: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F053DAC:
    ctx->pc = 0x7F053DACu;
    // 7F053DAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F053DB0:
    ctx->pc = 0x7F053DB0u;
    // 7F053DB0: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053DB4:
    ctx->pc = 0x7F053DB4u;
    // 7F053DB4: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053DB8:
    ctx->pc = 0x7F053DB8u;
    // 7F053DB8: stw     r3, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F053DBC:
    ctx->pc = 0x7F053DBCu;
    // 7F053DBC: stw     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053DC0:
    ctx->pc = 0x7F053DC0u;
    // 7F053DC0: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053DC4:
    ctx->pc = 0x7F053DC4u;
    // 7F053DC4: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053DC8:
    ctx->pc = 0x7F053DC8u;
    // 7F053DC8: stw     r3, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F053DCC:
    ctx->pc = 0x7F053DCCu;
    // 7F053DCC: stw     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053DD0:
    ctx->pc = 0x7F053DD0u;
    // 7F053DD0: lwz     r0, 104(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053DD4:
    ctx->pc = 0x7F053DD4u;
    // 7F053DD4: rlwinm r0, r0, 2, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x00000004u;
    }

label_7F053DD8:
    ctx->pc = 0x7F053DD8u;
    // 7F053DD8: add   r3, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F053DDC:
    ctx->pc = 0x7F053DDCu;
    // 7F053DDC: stw     r4, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053DE0:
    ctx->pc = 0x7F053DE0u;
    ctx->downcount -= 2;
    // 7F053DE0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F053DE4:
    ctx->pc = 0x7F053DE4u;
    // 7F053DE4: bl      0x7F3CC708
    {
            ctx->lr = 0x7F053DE8u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F053DE8:
    ctx->pc = 0x7F053DE8u;
    ctx->downcount -= 6;
    // 7F053DE8: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053DEC:
    ctx->pc = 0x7F053DECu;
    // 7F053DEC: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F053DF0:
    ctx->pc = 0x7F053DF0u;
    // 7F053DF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F053DF4:
    ctx->pc = 0x7F053DF4u;
    // 7F053DF4: sth     r3, 42(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F053DF8:
    ctx->pc = 0x7F053DF8u;
    // 7F053DF8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F053DFC:
    loop_7F053DFC(ctx);
    if (ctx->pc == 0x7F053E48u) goto label_7F053E48;
    return;
label_7F053E00:
    ctx->pc = 0x7F053E00u;
    // 7F053E00: lwz     r6, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F053E04:
    ctx->pc = 0x7F053E04u;
    // 7F053E04: lwzx    r5, r31, r7
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[7];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053E08:
    // 7F053E08: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F053E0C:
    ctx->pc = 0x7F053E0Cu;
    // 7F053E0C: lwz     r3, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053E10:
    ctx->pc = 0x7F053E10u;
    // 7F053E10: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053E14:
    ctx->pc = 0x7F053E14u;
    // 7F053E14: lwz     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053E18:
    ctx->pc = 0x7F053E18u;
    // 7F053E18: stw     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F053E1C:
    ctx->pc = 0x7F053E1Cu;
    // 7F053E1C: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053E20:
    ctx->pc = 0x7F053E20u;
    // 7F053E20: lwz     r3, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053E24:
    ctx->pc = 0x7F053E24u;
    // 7F053E24: lwz     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053E28:
    ctx->pc = 0x7F053E28u;
    // 7F053E28: stw     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F053E2C:
    ctx->pc = 0x7F053E2Cu;
    // 7F053E2C: stw     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053E30:
    ctx->pc = 0x7F053E30u;
    // 7F053E30: lwz     r5, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053E34:
    ctx->pc = 0x7F053E34u;
    // 7F053E34: lwzx    r3, r31, r7
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[7];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053E38:
    ctx->pc = 0x7F053E38u;
    // 7F053E38: lha     r0, 42(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(42);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053E3C:
    ctx->pc = 0x7F053E3Cu;
    // 7F053E3C: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053E40:
    ctx->pc = 0x7F053E40u;
    // 7F053E40: sth     r0, 42(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053E44:
    // 7F053E44: bc    16, 0, 0x7F053DFC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053DFCu;
                return;
            }
            goto label_7F053DFC;
        }
    }

label_7F053E48:
    ctx->pc = 0x7F053E48u;
    ctx->downcount -= 5;
    // 7F053E48: lwz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053E4C:
    ctx->pc = 0x7F053E4Cu;
    // 7F053E4C: li      r3, 1738
    ctx->gpr[3] = (u32)(s32)(1738);

label_7F053E50:
    ctx->pc = 0x7F053E50u;
    // 7F053E50: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F053E54:
    ctx->pc = 0x7F053E54u;
    // 7F053E54: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F053E58:
    ctx->pc = 0x7F053E58u;
    // 7F053E58: bl      0x7F0513A0
    {
            ctx->lr = 0x7F053E5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0513A0u;
                return;
            }
            goto label_7F0513A0;
    }

label_7F053E5C:
    ctx->pc = 0x7F053E5Cu;
    ctx->downcount -= 2;
    // 7F053E5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F053E60:
    ctx->pc = 0x7F053E60u;
    // 7F053E60: b       0x7F053E68
    {
            goto label_7F053E68;
    }

label_7F053E64:
    ctx->pc = 0x7F053E64u;
    ctx->downcount -= 1;
    // 7F053E64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F053E68:
    ctx->pc = 0x7F053E68u;
    ctx->downcount -= 16;
    // 7F053E68: lmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F053E6C:
    ctx->pc = 0x7F053E6Cu;
    // 7F053E6C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053E70:
    ctx->pc = 0x7F053E70u;
    // 7F053E70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F053E74:
    ctx->pc = 0x7F053E74u;
    // 7F053E74: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F053E78:
    ctx->pc = 0x7F053E78u;
    // 7F053E78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F053E7C:
    ctx->pc = 0x7F053E7Cu;
    ctx->downcount -= 24;
    // 7F053E7C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F053E80:
    ctx->pc = 0x7F053E80u;
    // 7F053E80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F053E84:
    ctx->pc = 0x7F053E84u;
    // 7F053E84: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053E88:
    ctx->pc = 0x7F053E88u;
    // 7F053E88: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F053E8C:
    ctx->pc = 0x7F053E8Cu;
    // 7F053E8C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F053E90:
    ctx->pc = 0x7F053E90u;
    // 7F053E90: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F053E94:
    ctx->pc = 0x7F053E94u;
    // 7F053E94: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F053E98:
    ctx->pc = 0x7F053E98u;
    // 7F053E98: lwz     r0, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053E9C:
    ctx->pc = 0x7F053E9Cu;
    // 7F053E9C: rlwinm r30, r0, 2, 29, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x00000004u;
    }

label_7F053EA0:
    ctx->pc = 0x7F053EA0u;
    // 7F053EA0: rlwinm r6, r0, 0, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_7F053EA4:
    ctx->pc = 0x7F053EA4u;
    // 7F053EA4: add   r31, r27, r30
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F053EA8:
    ctx->pc = 0x7F053EA8u;
    // 7F053EA8: lwz     r7, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F053EAC:
    ctx->pc = 0x7F053EACu;
    // 7F053EAC: cmpwi   r7, 0
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

label_7F053EB0:
    ctx->pc = 0x7F053EB0u;
    // 7F053EB0: bc    4, 1, 0x7F053F40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053F40;
        }
    }

label_7F053EB4:
    ctx->pc = 0x7F053EB4u;
    ctx->downcount -= 3;
    // 7F053EB4: addic.  r0, r7, -1
    {
        u64 a = ctx->gpr[7];
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

label_7F053EB8:
    ctx->pc = 0x7F053EB8u;
    // 7F053EB8: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053EBC:
    ctx->pc = 0x7F053EBCu;
    // 7F053EBC: bc    4, 2, 0x7F053F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053F54;
        }
    }

label_7F053EC0:
    ctx->pc = 0x7F053EC0u;
    ctx->downcount -= 20;
    // 7F053EC0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F053EC4:
    ctx->pc = 0x7F053EC4u;
    // 7F053EC4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F053EC8:
    ctx->pc = 0x7F053EC8u;
    // 7F053EC8: stw     r8, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F053ECC:
    ctx->pc = 0x7F053ECCu;
    // 7F053ECC: addi    r6, r3, 12832
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F053ED0:
    ctx->pc = 0x7F053ED0u;
    // 7F053ED0: mulli   r3, r29, 20
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)20);

label_7F053ED4:
    ctx->pc = 0x7F053ED4u;
    // 7F053ED4: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F053ED8:
    ctx->pc = 0x7F053ED8u;
    // 7F053ED8: lwz     r7, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F053EDC:
    ctx->pc = 0x7F053EDCu;
    // 7F053EDC: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053EE0:
    ctx->pc = 0x7F053EE0u;
    // 7F053EE0: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053EE4:
    ctx->pc = 0x7F053EE4u;
    // 7F053EE4: add   r9, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F053EE8:
    ctx->pc = 0x7F053EE8u;
    // 7F053EE8: stw     r5, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F053EEC:
    ctx->pc = 0x7F053EECu;
    // 7F053EEC: stw     r4, 20(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053EF0:
    ctx->pc = 0x7F053EF0u;
    // 7F053EF0: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053EF4:
    ctx->pc = 0x7F053EF4u;
    // 7F053EF4: lwz     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053EF8:
    ctx->pc = 0x7F053EF8u;
    // 7F053EF8: stw     r4, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053EFC:
    ctx->pc = 0x7F053EFCu;
    // 7F053EFC: stw     r3, 28(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F053F00:
    ctx->pc = 0x7F053F00u;
    // 7F053F00: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F053F04:
    loop_7F053F04(ctx);
    if (ctx->pc == 0x7F053F3Cu) goto label_7F053F3C;
    return;
label_7F053F08:
    ctx->pc = 0x7F053F08u;
    // 7F053F08: lwz     r5, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053F0C:
    ctx->pc = 0x7F053F0Cu;
    // 7F053F0C: lwzx    r4, r9, r0
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053F10:
    // 7F053F10: addi    r8, r8, 4
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(4);

label_7F053F14:
    ctx->pc = 0x7F053F14u;
    // 7F053F14: lwz     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053F18:
    ctx->pc = 0x7F053F18u;
    // 7F053F18: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053F1C:
    ctx->pc = 0x7F053F1Cu;
    // 7F053F1C: lwz     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053F20:
    ctx->pc = 0x7F053F20u;
    // 7F053F20: stw     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F053F24:
    ctx->pc = 0x7F053F24u;
    // 7F053F24: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053F28:
    ctx->pc = 0x7F053F28u;
    // 7F053F28: lwz     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F053F2C:
    ctx->pc = 0x7F053F2Cu;
    // 7F053F2C: lwz     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053F30:
    ctx->pc = 0x7F053F30u;
    // 7F053F30: stw     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F053F34:
    ctx->pc = 0x7F053F34u;
    // 7F053F34: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053F38:
    // 7F053F38: bc    16, 0, 0x7F053F04
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053F04u;
                return;
            }
            goto label_7F053F04;
        }
    }

label_7F053F3C:
    ctx->pc = 0x7F053F3Cu;
    ctx->downcount -= 1;
    // 7F053F3C: b       0x7F053F54
    {
            goto label_7F053F54;
    }

label_7F053F40:
    ctx->pc = 0x7F053F40u;
    ctx->downcount -= 1;
    // 7F053F40: bl      0x7F0539B8
    {
            ctx->lr = 0x7F053F44u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0539B8u;
                return;
            }
            goto label_7F0539B8;
    }

label_7F053F44:
    ctx->pc = 0x7F053F44u;
    ctx->downcount -= 2;
    // 7F053F44: cmpwi   r3, 0
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

label_7F053F48:
    ctx->pc = 0x7F053F48u;
    // 7F053F48: bc    12, 2, 0x7F053F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F053F54;
        }
    }

label_7F053F4C:
    ctx->pc = 0x7F053F4Cu;
    ctx->downcount -= 2;
    // 7F053F4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F053F50:
    ctx->pc = 0x7F053F50u;
    // 7F053F50: b       0x7F0540CC
    {
            goto label_7F0540CC;
    }

label_7F053F54:
    ctx->pc = 0x7F053F54u;
    ctx->downcount -= 3;
    // 7F053F54: lwz     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053F58:
    ctx->pc = 0x7F053F58u;
    // 7F053F58: cmpwi   r0, 24
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(24);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F053F5C:
    ctx->pc = 0x7F053F5Cu;
    // 7F053F5C: bc    4, 0, 0x7F053FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053FB4;
        }
    }

label_7F053F60:
    ctx->pc = 0x7F053F60u;
    ctx->downcount -= 4;
    // 7F053F60: lwz     r4, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053F64:
    ctx->pc = 0x7F053F64u;
    // 7F053F64: lha     r3, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F053F68:
    ctx->pc = 0x7F053F68u;
    // 7F053F68: cmpwi   r3, 0
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

label_7F053F6C:
    ctx->pc = 0x7F053F6Cu;
    // 7F053F6C: bc    4, 1, 0x7F053F78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F053F78;
        }
    }

label_7F053F70:
    ctx->pc = 0x7F053F70u;
    ctx->downcount -= 2;
    // 7F053F70: addi    r0, r3, -42
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-42);

label_7F053F74:
    ctx->pc = 0x7F053F74u;
    // 7F053F74: sth     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F053F78:
    ctx->pc = 0x7F053F78u;
    ctx->downcount -= 8;
    // 7F053F78: mulli   r4, r29, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)20);

label_7F053F7C:
    ctx->pc = 0x7F053F7Cu;
    // 7F053F7C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F053F80:
    ctx->pc = 0x7F053F80u;
    // 7F053F80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F053F84:
    ctx->pc = 0x7F053F84u;
    // 7F053F84: add   r7, r27, r4
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F053F88:
    ctx->pc = 0x7F053F88u;
    // 7F053F88: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F053F8C:
    loop_7F053F8C(ctx);
    if (ctx->pc == 0x7F053FB4u) goto label_7F053FB4;
    return;
label_7F053F90:
    ctx->pc = 0x7F053F90u;
    // 7F053F90: lwz     r6, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F053F94:
    ctx->pc = 0x7F053F94u;
    // 7F053F94: lwzx    r5, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053F98:
    // 7F053F98: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F053F9C:
    ctx->pc = 0x7F053F9Cu;
    // 7F053F9C: lwz     r4, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F053FA0:
    ctx->pc = 0x7F053FA0u;
    // 7F053FA0: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053FA4:
    ctx->pc = 0x7F053FA4u;
    // 7F053FA4: lwz     r0, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053FA8:
    ctx->pc = 0x7F053FA8u;
    // 7F053FA8: stw     r4, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F053FAC:
    ctx->pc = 0x7F053FACu;
    // 7F053FAC: stw     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F053FB0:
    // 7F053FB0: bc    16, 0, 0x7F053F8C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053F8Cu;
                return;
            }
            goto label_7F053F8C;
        }
    }

label_7F053FB4:
    ctx->pc = 0x7F053FB4u;
    ctx->downcount -= 3;
    // 7F053FB4: lwz     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F053FB8:
    ctx->pc = 0x7F053FB8u;
    // 7F053FB8: cmpwi   r0, 8
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

label_7F053FBC:
    ctx->pc = 0x7F053FBCu;
    // 7F053FBC: bc    4, 0, 0x7F054024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F054024;
        }
    }

label_7F053FC0:
    ctx->pc = 0x7F053FC0u;
    ctx->downcount -= 6;
    // 7F053FC0: lwz     r6, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F053FC4:
    ctx->pc = 0x7F053FC4u;
    // 7F053FC4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F053FC8:
    ctx->pc = 0x7F053FC8u;
    // 7F053FC8: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F053FCC:
    ctx->pc = 0x7F053FCCu;
    // 7F053FCC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F053FD0:
    ctx->pc = 0x7F053FD0u;
    // 7F053FD0: addi    r3, r6, 16
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(16);

label_7F053FD4:
    ctx->pc = 0x7F053FD4u;
    // 7F053FD4: bl      0x7F3C9FEC
    {
            ctx->lr = 0x7F053FD8u;
            ctx->pc = 0x7F3C9FECu;
            return;
    }

label_7F053FD8:
    ctx->pc = 0x7F053FD8u;
    ctx->downcount -= 8;
    // 7F053FD8: mulli   r4, r29, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)20);

label_7F053FDC:
    ctx->pc = 0x7F053FDCu;
    // 7F053FDC: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F053FE0:
    ctx->pc = 0x7F053FE0u;
    // 7F053FE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F053FE4:
    ctx->pc = 0x7F053FE4u;
    // 7F053FE4: add   r7, r27, r4
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F053FE8:
    ctx->pc = 0x7F053FE8u;
    // 7F053FE8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F053FEC:
    loop_7F053FEC(ctx);
    if (ctx->pc == 0x7F054024u) goto label_7F054024;
    return;
label_7F053FF0:
    ctx->pc = 0x7F053FF0u;
    // 7F053FF0: lwz     r6, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F053FF4:
    ctx->pc = 0x7F053FF4u;
    // 7F053FF4: lwzx    r5, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F053FF8:
    // 7F053FF8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F053FFC:
    ctx->pc = 0x7F053FFCu;
    // 7F053FFC: lwz     r4, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F054000:
    ctx->pc = 0x7F054000u;
    // 7F054000: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F054004:
    ctx->pc = 0x7F054004u;
    // 7F054004: lwz     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F054008:
    ctx->pc = 0x7F054008u;
    // 7F054008: stw     r4, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F05400C:
    ctx->pc = 0x7F05400Cu;
    // 7F05400C: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F054010:
    ctx->pc = 0x7F054010u;
    // 7F054010: lwz     r4, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F054014:
    ctx->pc = 0x7F054014u;
    // 7F054014: lwz     r0, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F054018:
    ctx->pc = 0x7F054018u;
    // 7F054018: stw     r4, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F05401C:
    ctx->pc = 0x7F05401Cu;
    // 7F05401C: stw     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F054020:
    // 7F054020: bc    16, 0, 0x7F053FEC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F053FECu;
                return;
            }
            goto label_7F053FEC;
        }
    }

label_7F054024:
    ctx->pc = 0x7F054024u;
    ctx->downcount -= 10;
    // 7F054024: add   r3, r27, r30
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F054028:
    ctx->pc = 0x7F054028u;
    // 7F054028: lwz     r3, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F05402C:
    ctx->pc = 0x7F05402Cu;
    // 7F05402C: rlwinm r0, r3, 28, 0, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 28u) & 0xF0000000u;
    }

label_7F054030:
    ctx->pc = 0x7F054030u;
    // 7F054030: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F054034:
    ctx->pc = 0x7F054034u;
    // 7F054034: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F054038:
    ctx->pc = 0x7F054038u;
    // 7F054038: rlwinm r0, r0, 4, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFFFu;
    }

label_7F05403C:
    ctx->pc = 0x7F05403Cu;
    // 7F05403C: add   r31, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F054040:
    ctx->pc = 0x7F054040u;
    // 7F054040: addi    r0, r31, -1
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F054044:
    ctx->pc = 0x7F054044u;
    // 7F054044: rlwinm r3, r0, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_7F054048:
    ctx->pc = 0x7F054048u;
    // 7F054048: bl      0x7F02A5A8
    {
            ctx->lr = 0x7F05404Cu;
            ctx->pc = 0x7F02A5A8u;
            return;
    }

label_7F05404C:
    ctx->pc = 0x7F05404Cu;
    ctx->downcount -= 3;
    // 7F05404C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F054050:
    ctx->pc = 0x7F054050u;
    // 7F054050: rlwinm r3, r31, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 8u) & 0xFFFFFF00u;
    }

label_7F054054:
    ctx->pc = 0x7F054054u;
    // 7F054054: bl      0x7F02A5A8
    {
            ctx->lr = 0x7F054058u;
            ctx->pc = 0x7F02A5A8u;
            return;
    }

label_7F054058:
    ctx->pc = 0x7F054058u;
    ctx->downcount -= 23;
    // 7F054058: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_7F05405C:
    ctx->pc = 0x7F05405Cu;
    // 7F05405C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F054060:
    ctx->pc = 0x7F054060u;
    // 7F054060: add   r4, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F054064:
    ctx->pc = 0x7F054064u;
    // 7F054064: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F054068:
    ctx->pc = 0x7F054068u;
    // 7F054068: rlwinm r4, r4, 7, 0, 24
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 7u) & 0xFFFFFF80u;
    }

label_7F05406C:
    ctx->pc = 0x7F05406Cu;
    // 7F05406C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F054070:
    ctx->pc = 0x7F054070u;
    // 7F054070: srawi r0, r4, 12
    {
        u32 sh = 12u;
        u32 value = ctx->gpr[4];
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

label_7F054074:
    ctx->pc = 0x7F054074u;
    // 7F054074: lfd     f1, -10632(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F054074u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-10632);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F054078:
    ctx->pc = 0x7F054078u;
    // 7F054078: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F05407C:
    ctx->pc = 0x7F05407Cu;
    // 7F05407C: lwz     r4, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F054080:
    ctx->pc = 0x7F054080u;
    // 7F054080: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F054084:
    ctx->pc = 0x7F054084u;
    // 7F054084: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F054088:
    ctx->pc = 0x7F054088u;
    // 7F054088: mulli   r3, r29, 20
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)20);

label_7F05408C:
    ctx->pc = 0x7F05408Cu;
    // 7F05408C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F054090:
    ctx->pc = 0x7F054090u;
    // 7F054090: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F054090u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F054094:
    ctx->pc = 0x7F054094u;
    // 7F054094: add   r6, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F054098:
    ctx->pc = 0x7F054098u;
    // 7F054098: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F054098u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F05409C:
    ctx->pc = 0x7F05409Cu;
    // 7F05409C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0540A0:
    ctx->pc = 0x7F0540A0u;
    // 7F0540A0: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0540A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0540A4:
    ctx->pc = 0x7F0540A4u;
    // 7F0540A4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0540A8:
    ctx->downcount -= 8;
    // 7F0540A8: addi    r0, r3, 32
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32);

label_7F0540AC:
    ctx->pc = 0x7F0540ACu;
    // 7F0540AC: lwz     r5, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0540B0:
    ctx->pc = 0x7F0540B0u;
    // 7F0540B0: lwzx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0540B4:
    // 7F0540B4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F0540B8:
    ctx->pc = 0x7F0540B8u;
    // 7F0540B8: lfs     f0, 20(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0540B8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0540BC:
    ctx->pc = 0x7F0540BCu;
    // 7F0540BC: lwz     r4, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0540C0:
    ctx->pc = 0x7F0540C0u;
    // 7F0540C0: stfs     f0, 20(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0540C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0540C4:
    // 7F0540C4: bc    16, 0, 0x7F0540A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0540A8u;
                return;
            }
            goto label_7F0540A8;
        }
    }

label_7F0540C8:
    ctx->pc = 0x7F0540C8u;
    ctx->downcount -= 1;
    // 7F0540C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0540CC:
    ctx->pc = 0x7F0540CCu;
    ctx->downcount -= 16;
    // 7F0540CC: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0540D0:
    ctx->pc = 0x7F0540D0u;
    // 7F0540D0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0540D4:
    ctx->pc = 0x7F0540D4u;
    // 7F0540D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0540D8:
    ctx->pc = 0x7F0540D8u;
    // 7F0540D8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0540DC:
    ctx->pc = 0x7F0540DCu;
    // 7F0540DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0500EC;
        }
    }

label_7F0540E0:
    ctx->pc = 0x7F0540E0u;
    ctx->downcount -= 3;
    // 7F0540E0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0540E4:
    ctx->pc = 0x7F0540E4u;
    // 7F0540E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0540E8:
    ctx->pc = 0x7F0540E8u;
    // 7F0540E8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F0540ECu;
    return;
return_dispatch_7F0500EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F0500F4u: goto label_7F0500F4;
    case 0x7F0501F8u: goto label_7F0501F8;
    case 0x7F05024Cu: goto label_7F05024C;
    case 0x7F050254u: goto label_7F050254;
    case 0x7F05025Cu: goto label_7F05025C;
    case 0x7F05027Cu: goto label_7F05027C;
    case 0x7F050290u: goto label_7F050290;
    case 0x7F050298u: goto label_7F050298;
    case 0x7F0502B4u: goto label_7F0502B4;
    case 0x7F0502D4u: goto label_7F0502D4;
    case 0x7F050318u: goto label_7F050318;
    case 0x7F05031Cu: goto label_7F05031C;
    case 0x7F050320u: goto label_7F050320;
    case 0x7F050330u: goto label_7F050330;
    case 0x7F05033Cu: goto label_7F05033C;
    case 0x7F050344u: goto label_7F050344;
    case 0x7F050378u: goto label_7F050378;
    case 0x7F050384u: goto label_7F050384;
    case 0x7F05038Cu: goto label_7F05038C;
    case 0x7F0503C0u: goto label_7F0503C0;
    case 0x7F050530u: goto label_7F050530;
    case 0x7F050564u: goto label_7F050564;
    case 0x7F05058Cu: goto label_7F05058C;
    case 0x7F0505A0u: goto label_7F0505A0;
    case 0x7F0505A8u: goto label_7F0505A8;
    case 0x7F0505B0u: goto label_7F0505B0;
    case 0x7F050620u: goto label_7F050620;
    case 0x7F050648u: goto label_7F050648;
    case 0x7F05065Cu: goto label_7F05065C;
    case 0x7F050664u: goto label_7F050664;
    case 0x7F05066Cu: goto label_7F05066C;
    case 0x7F050698u: goto label_7F050698;
    case 0x7F0506A0u: goto label_7F0506A0;
    case 0x7F0506C0u: goto label_7F0506C0;
    case 0x7F0506CCu: goto label_7F0506CC;
    case 0x7F0506DCu: goto label_7F0506DC;
    case 0x7F0506FCu: goto label_7F0506FC;
    case 0x7F050704u: goto label_7F050704;
    case 0x7F050710u: goto label_7F050710;
    case 0x7F050718u: goto label_7F050718;
    case 0x7F05074Cu: goto label_7F05074C;
    case 0x7F050768u: goto label_7F050768;
    case 0x7F050780u: goto label_7F050780;
    case 0x7F050798u: goto label_7F050798;
    case 0x7F0507E0u: goto label_7F0507E0;
    case 0x7F0507E8u: goto label_7F0507E8;
    case 0x7F050814u: goto label_7F050814;
    case 0x7F050820u: goto label_7F050820;
    case 0x7F050830u: goto label_7F050830;
    case 0x7F05085Cu: goto label_7F05085C;
    case 0x7F050890u: goto label_7F050890;
    case 0x7F0508A4u: goto label_7F0508A4;
    case 0x7F0508B4u: goto label_7F0508B4;
    case 0x7F0508BCu: goto label_7F0508BC;
    case 0x7F0508F8u: goto label_7F0508F8;
    case 0x7F05092Cu: goto label_7F05092C;
    case 0x7F050978u: goto label_7F050978;
    case 0x7F050990u: goto label_7F050990;
    case 0x7F0509CCu: goto label_7F0509CC;
    case 0x7F0509E8u: goto label_7F0509E8;
    case 0x7F0509F4u: goto label_7F0509F4;
    case 0x7F050A14u: goto label_7F050A14;
    case 0x7F050A28u: goto label_7F050A28;
    case 0x7F050A38u: goto label_7F050A38;
    case 0x7F050A4Cu: goto label_7F050A4C;
    case 0x7F050A5Cu: goto label_7F050A5C;
    case 0x7F050A70u: goto label_7F050A70;
    case 0x7F050A74u: goto label_7F050A74;
    case 0x7F050AC0u: goto label_7F050AC0;
    case 0x7F050ACCu: goto label_7F050ACC;
    case 0x7F050AD0u: goto label_7F050AD0;
    case 0x7F050B10u: goto label_7F050B10;
    case 0x7F050B50u: goto label_7F050B50;
    case 0x7F050B5Cu: goto label_7F050B5C;
    case 0x7F050B6Cu: goto label_7F050B6C;
    case 0x7F050BBCu: goto label_7F050BBC;
    case 0x7F050BCCu: goto label_7F050BCC;
    case 0x7F050BD4u: goto label_7F050BD4;
    case 0x7F050BE8u: goto label_7F050BE8;
    case 0x7F050C08u: goto label_7F050C08;
    case 0x7F050C38u: goto label_7F050C38;
    case 0x7F050C70u: goto label_7F050C70;
    case 0x7F050C88u: goto label_7F050C88;
    case 0x7F050CA0u: goto label_7F050CA0;
    case 0x7F050CB8u: goto label_7F050CB8;
    case 0x7F050CD0u: goto label_7F050CD0;
    case 0x7F050CF4u: goto label_7F050CF4;
    case 0x7F050D0Cu: goto label_7F050D0C;
    case 0x7F050D30u: goto label_7F050D30;
    case 0x7F050D48u: goto label_7F050D48;
    case 0x7F050D60u: goto label_7F050D60;
    case 0x7F050D78u: goto label_7F050D78;
    case 0x7F050D94u: goto label_7F050D94;
    case 0x7F050DA8u: goto label_7F050DA8;
    case 0x7F050DC0u: goto label_7F050DC0;
    case 0x7F050DCCu: goto label_7F050DCC;
    case 0x7F050DF0u: goto label_7F050DF0;
    case 0x7F050DFCu: goto label_7F050DFC;
    case 0x7F050E48u: goto label_7F050E48;
    case 0x7F050E60u: goto label_7F050E60;
    case 0x7F050E78u: goto label_7F050E78;
    case 0x7F050E90u: goto label_7F050E90;
    case 0x7F050EA8u: goto label_7F050EA8;
    case 0x7F050EC0u: goto label_7F050EC0;
    case 0x7F050ED8u: goto label_7F050ED8;
    case 0x7F050EF0u: goto label_7F050EF0;
    case 0x7F050F14u: goto label_7F050F14;
    case 0x7F050F2Cu: goto label_7F050F2C;
    case 0x7F050F44u: goto label_7F050F44;
    case 0x7F050F5Cu: goto label_7F050F5C;
    case 0x7F050F74u: goto label_7F050F74;
    case 0x7F050F8Cu: goto label_7F050F8C;
    case 0x7F050FA4u: goto label_7F050FA4;
    case 0x7F050FBCu: goto label_7F050FBC;
    case 0x7F050FE0u: goto label_7F050FE0;
    case 0x7F050FF8u: goto label_7F050FF8;
    case 0x7F051010u: goto label_7F051010;
    case 0x7F051028u: goto label_7F051028;
    case 0x7F051040u: goto label_7F051040;
    case 0x7F051058u: goto label_7F051058;
    case 0x7F051070u: goto label_7F051070;
    case 0x7F051088u: goto label_7F051088;
    case 0x7F0510ACu: goto label_7F0510AC;
    case 0x7F0510C4u: goto label_7F0510C4;
    case 0x7F0510DCu: goto label_7F0510DC;
    case 0x7F0510F4u: goto label_7F0510F4;
    case 0x7F05110Cu: goto label_7F05110C;
    case 0x7F051124u: goto label_7F051124;
    case 0x7F051148u: goto label_7F051148;
    case 0x7F051160u: goto label_7F051160;
    case 0x7F051178u: goto label_7F051178;
    case 0x7F051190u: goto label_7F051190;
    case 0x7F0511A8u: goto label_7F0511A8;
    case 0x7F0511C0u: goto label_7F0511C0;
    case 0x7F0511D8u: goto label_7F0511D8;
    case 0x7F05120Cu: goto label_7F05120C;
    case 0x7F051224u: goto label_7F051224;
    case 0x7F05123Cu: goto label_7F05123C;
    case 0x7F051254u: goto label_7F051254;
    case 0x7F05126Cu: goto label_7F05126C;
    case 0x7F051284u: goto label_7F051284;
    case 0x7F05128Cu: goto label_7F05128C;
    case 0x7F051298u: goto label_7F051298;
    case 0x7F05129Cu: goto label_7F05129C;
    case 0x7F0512B4u: goto label_7F0512B4;
    case 0x7F0512CCu: goto label_7F0512CC;
    case 0x7F051324u: goto label_7F051324;
    case 0x7F051340u: goto label_7F051340;
    case 0x7F051350u: goto label_7F051350;
    case 0x7F051360u: goto label_7F051360;
    case 0x7F051458u: goto label_7F051458;
    case 0x7F051460u: goto label_7F051460;
    case 0x7F0514C0u: goto label_7F0514C0;
    case 0x7F0514D8u: goto label_7F0514D8;
    case 0x7F0514ECu: goto label_7F0514EC;
    case 0x7F051510u: goto label_7F051510;
    case 0x7F051520u: goto label_7F051520;
    case 0x7F051530u: goto label_7F051530;
    case 0x7F051538u: goto label_7F051538;
    case 0x7F0515ECu: goto label_7F0515EC;
    case 0x7F0515F4u: goto label_7F0515F4;
    case 0x7F051628u: goto label_7F051628;
    case 0x7F05165Cu: goto label_7F05165C;
    case 0x7F051710u: goto label_7F051710;
    case 0x7F05175Cu: goto label_7F05175C;
    case 0x7F0517F8u: goto label_7F0517F8;
    case 0x7F051814u: goto label_7F051814;
    case 0x7F05183Cu: goto label_7F05183C;
    case 0x7F0518B0u: goto label_7F0518B0;
    case 0x7F0518C8u: goto label_7F0518C8;
    case 0x7F051928u: goto label_7F051928;
    case 0x7F051930u: goto label_7F051930;
    case 0x7F05196Cu: goto label_7F05196C;
    case 0x7F0519F4u: goto label_7F0519F4;
    case 0x7F051A04u: goto label_7F051A04;
    case 0x7F051A1Cu: goto label_7F051A1C;
    case 0x7F051A24u: goto label_7F051A24;
    case 0x7F051BECu: goto label_7F051BEC;
    case 0x7F051C38u: goto label_7F051C38;
    case 0x7F051C9Cu: goto label_7F051C9C;
    case 0x7F051CE0u: goto label_7F051CE0;
    case 0x7F051D28u: goto label_7F051D28;
    case 0x7F051D3Cu: goto label_7F051D3C;
    case 0x7F051DA0u: goto label_7F051DA0;
    case 0x7F051DB0u: goto label_7F051DB0;
    case 0x7F051DF0u: goto label_7F051DF0;
    case 0x7F051E0Cu: goto label_7F051E0C;
    case 0x7F051EB8u: goto label_7F051EB8;
    case 0x7F051EC4u: goto label_7F051EC4;
    case 0x7F051EECu: goto label_7F051EEC;
    case 0x7F051F18u: goto label_7F051F18;
    case 0x7F051FA0u: goto label_7F051FA0;
    case 0x7F051FC4u: goto label_7F051FC4;
    case 0x7F051FD0u: goto label_7F051FD0;
    case 0x7F05215Cu: goto label_7F05215C;
    case 0x7F052184u: goto label_7F052184;
    case 0x7F0521D4u: goto label_7F0521D4;
    case 0x7F052204u: goto label_7F052204;
    case 0x7F052220u: goto label_7F052220;
    case 0x7F052268u: goto label_7F052268;
    case 0x7F0522B8u: goto label_7F0522B8;
    case 0x7F052314u: goto label_7F052314;
    case 0x7F052324u: goto label_7F052324;
    case 0x7F052334u: goto label_7F052334;
    case 0x7F05244Cu: goto label_7F05244C;
    case 0x7F052534u: goto label_7F052534;
    case 0x7F052550u: goto label_7F052550;
    case 0x7F052558u: goto label_7F052558;
    case 0x7F052568u: goto label_7F052568;
    case 0x7F052650u: goto label_7F052650;
    case 0x7F05266Cu: goto label_7F05266C;
    case 0x7F052674u: goto label_7F052674;
    case 0x7F052684u: goto label_7F052684;
    case 0x7F0527D0u: goto label_7F0527D0;
    case 0x7F05281Cu: goto label_7F05281C;
    case 0x7F052850u: goto label_7F052850;
    case 0x7F052884u: goto label_7F052884;
    case 0x7F052940u: goto label_7F052940;
    case 0x7F052948u: goto label_7F052948;
    case 0x7F052964u: goto label_7F052964;
    case 0x7F052978u: goto label_7F052978;
    case 0x7F0529C0u: goto label_7F0529C0;
    case 0x7F052A40u: goto label_7F052A40;
    case 0x7F052A48u: goto label_7F052A48;
    case 0x7F052A64u: goto label_7F052A64;
    case 0x7F052AACu: goto label_7F052AAC;
    case 0x7F052B2Cu: goto label_7F052B2C;
    case 0x7F052BD4u: goto label_7F052BD4;
    case 0x7F052BE4u: goto label_7F052BE4;
    case 0x7F052BF4u: goto label_7F052BF4;
    case 0x7F052C40u: goto label_7F052C40;
    case 0x7F052C50u: goto label_7F052C50;
    case 0x7F052C60u: goto label_7F052C60;
    case 0x7F052C70u: goto label_7F052C70;
    case 0x7F052C84u: goto label_7F052C84;
    case 0x7F052C98u: goto label_7F052C98;
    case 0x7F052CB8u: goto label_7F052CB8;
    case 0x7F052CC0u: goto label_7F052CC0;
    case 0x7F052CDCu: goto label_7F052CDC;
    case 0x7F052CF8u: goto label_7F052CF8;
    case 0x7F052D08u: goto label_7F052D08;
    case 0x7F052D10u: goto label_7F052D10;
    case 0x7F052E64u: goto label_7F052E64;
    case 0x7F052EDCu: goto label_7F052EDC;
    case 0x7F052FC4u: goto label_7F052FC4;
    case 0x7F05308Cu: goto label_7F05308C;
    case 0x7F0530C4u: goto label_7F0530C4;
    case 0x7F053264u: goto label_7F053264;
    case 0x7F053274u: goto label_7F053274;
    case 0x7F053284u: goto label_7F053284;
    case 0x7F053294u: goto label_7F053294;
    case 0x7F0532A4u: goto label_7F0532A4;
    case 0x7F0533ECu: goto label_7F0533EC;
    case 0x7F053500u: goto label_7F053500;
    case 0x7F053508u: goto label_7F053508;
    case 0x7F053518u: goto label_7F053518;
    case 0x7F05357Cu: goto label_7F05357C;
    case 0x7F053594u: goto label_7F053594;
    case 0x7F0535A8u: goto label_7F0535A8;
    case 0x7F0535CCu: goto label_7F0535CC;
    case 0x7F0535DCu: goto label_7F0535DC;
    case 0x7F0535ECu: goto label_7F0535EC;
    case 0x7F0535F4u: goto label_7F0535F4;
    case 0x7F053710u: goto label_7F053710;
    case 0x7F053720u: goto label_7F053720;
    case 0x7F053740u: goto label_7F053740;
    case 0x7F053778u: goto label_7F053778;
    case 0x7F053788u: goto label_7F053788;
    case 0x7F053798u: goto label_7F053798;
    case 0x7F0537A8u: goto label_7F0537A8;
    case 0x7F0537BCu: goto label_7F0537BC;
    case 0x7F0537D0u: goto label_7F0537D0;
    case 0x7F0537F0u: goto label_7F0537F0;
    case 0x7F0537F8u: goto label_7F0537F8;
    case 0x7F053814u: goto label_7F053814;
    case 0x7F053828u: goto label_7F053828;
    case 0x7F053838u: goto label_7F053838;
    case 0x7F053840u: goto label_7F053840;
    case 0x7F053970u: goto label_7F053970;
    case 0x7F053A80u: goto label_7F053A80;
    case 0x7F053A8Cu: goto label_7F053A8C;
    case 0x7F053BC8u: goto label_7F053BC8;
    case 0x7F053BD4u: goto label_7F053BD4;
    case 0x7F053C44u: goto label_7F053C44;
    case 0x7F053C4Cu: goto label_7F053C4C;
    case 0x7F053C5Cu: goto label_7F053C5C;
    case 0x7F053D5Cu: goto label_7F053D5C;
    case 0x7F053D7Cu: goto label_7F053D7C;
    case 0x7F053D98u: goto label_7F053D98;
    case 0x7F053DE8u: goto label_7F053DE8;
    case 0x7F053E5Cu: goto label_7F053E5C;
    case 0x7F053F44u: goto label_7F053F44;
    case 0x7F053FD8u: goto label_7F053FD8;
    case 0x7F05404Cu: goto label_7F05404C;
    case 0x7F054058u: goto label_7F054058;
    default: return;
    }
}

