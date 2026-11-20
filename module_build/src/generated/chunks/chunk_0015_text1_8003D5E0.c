// DolRecomp output
#include "../generated.h"

static void loop_8003F8D0(CPUState* ctx) {
label_8003F8D0:
    ctx->downcount -= 5;
    // 8003F8D0: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

    ctx->pc = 0x8003F8D4u;
    // 8003F8D4: lhz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

    ctx->pc = 0x8003F8D8u;
    // 8003F8D8: lhz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

    // 8003F8DC: cmplw   r4, r0
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

    // 8003F8E0: bc    4, 2, 0x8003F8D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003F8D0u;
                return;
            }
            goto label_8003F8D0;
        }
    }

    ctx->pc = 0x8003F8E4u;
}

static void loop_8003F928(CPUState* ctx) {
label_8003F928:
    ctx->downcount -= 5;
    // 8003F928: or   r0, r7, r7
    {
        ctx->gpr[0] = ctx->gpr[7] | ctx->gpr[7];
    }

    ctx->pc = 0x8003F92Cu;
    // 8003F92C: lhz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

    ctx->pc = 0x8003F930u;
    // 8003F930: lhz     r10, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read16(ctx, ea);
    }

    // 8003F934: cmplw   r7, r0
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

    // 8003F938: bc    4, 2, 0x8003F928
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003F928u;
                return;
            }
            goto label_8003F928;
        }
    }

    ctx->pc = 0x8003F93Cu;
}

static void loop_8003FB60(CPUState* ctx) {
label_8003FB60:
    ctx->downcount -= 62;
    ctx->pc = 0x8003FB60u;
    // 8003FB60: lwz     r12, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    // 8003FB64: rlwinm r26, r3, 31, 1, 31
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[3], 31u) & 0x7FFFFFFFu;
    }

    // 8003FB68: addi    r11, r29, 304
    ctx->gpr[11] = ctx->gpr[29] + (u32)(s32)(304);

    // 8003FB6C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

    ctx->pc = 0x8003FB70u;
    // 8003FB70: stwx    r28, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    // 8003FB74: addi    r10, r29, 368
    ctx->gpr[10] = ctx->gpr[29] + (u32)(s32)(368);

    // 8003FB78: rlwinm r25, r26, 2, 0, 29
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[26], 2u) & 0xFFFFFFFCu;
    }

    ctx->pc = 0x8003FB7Cu;
    // 8003FB7C: stwx    r28, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    // 8003FB80: addi    r9, r25, 256
    ctx->gpr[9] = ctx->gpr[25] + (u32)(s32)(256);

    // 8003FB84: addi    r7, r29, 1364
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(1364);

    ctx->pc = 0x8003FB88u;
    // 8003FB88: stwx    r28, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    // 8003FB8C: li      r8, 255
    ctx->gpr[8] = (u32)(s32)(255);

    // 8003FB90: addi    r6, r25, 432
    ctx->gpr[6] = ctx->gpr[25] + (u32)(s32)(432);

    ctx->pc = 0x8003FB94u;
    // 8003FB94: stwx    r8, r12, r7
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    // 8003FB98: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

    // 8003FB9C: addi    r4, r26, 246
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(246);

    ctx->pc = 0x8003FBA0u;
    // 8003FBA0: lwzx    r5, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 8003FBA4: rlwimi r5, r31, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[31], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FBA8: addi    r0, r26, 40
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(40);

    ctx->pc = 0x8003FBACu;
    // 8003FBAC: stwx    r5, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 8003FBB0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

    // 8003FBB4: rlwinm r26, r3, 31, 1, 31
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[3], 31u) & 0x7FFFFFFFu;
    }

    ctx->pc = 0x8003FBB8u;
    // 8003FBB8: lwzx    r5, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 8003FBBC: rlwimi r5, r27, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[27], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FBC0: addi    r11, r29, 304
    ctx->gpr[11] = ctx->gpr[29] + (u32)(s32)(304);

    ctx->pc = 0x8003FBC4u;
    // 8003FBC4: stwx    r5, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 8003FBC8: addi    r10, r29, 368
    ctx->gpr[10] = ctx->gpr[29] + (u32)(s32)(368);

    // 8003FBCC: addi    r7, r29, 1364
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(1364);

    ctx->pc = 0x8003FBD0u;
    // 8003FBD0: lwzx    r5, r12, r6
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[6];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 8003FBD4: rlwimi r5, r4, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FBD8: rlwinm r25, r26, 2, 0, 29
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[26], 2u) & 0xFFFFFFFCu;
    }

    ctx->pc = 0x8003FBDCu;
    // 8003FBDC: stwx    r5, r12, r6
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 8003FBE0: addi    r31, r31, 2
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(2);

    // 8003FBE4: addi    r27, r27, 2
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(2);

    ctx->pc = 0x8003FBE8u;
    // 8003FBE8: lwzx    r4, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 8003FBEC: rlwimi r4, r0, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 24u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FBF0: addi    r6, r25, 432
    ctx->gpr[6] = ctx->gpr[25] + (u32)(s32)(432);

    ctx->pc = 0x8003FBF4u;
    // 8003FBF4: stwx    r4, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 8003FBF8: addi    r9, r25, 256
    ctx->gpr[9] = ctx->gpr[25] + (u32)(s32)(256);

    // 8003FBFC: addi    r4, r26, 246
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(246);

    ctx->pc = 0x8003FC00u;
    // 8003FC00: stwx    r28, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    // 8003FC04: addi    r0, r26, 40
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(40);

    // 8003FC08: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

    ctx->pc = 0x8003FC0Cu;
    // 8003FC0C: stwx    r28, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    // 8003FC10: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

    ctx->pc = 0x8003FC14u;
    // 8003FC14: stwx    r28, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    ctx->pc = 0x8003FC18u;
    // 8003FC18: stwx    r8, r12, r7
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

    ctx->pc = 0x8003FC1Cu;
    // 8003FC1C: lwzx    r5, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 8003FC20: rlwimi r5, r31, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[31], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FC24: addi    r31, r31, 2
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(2);

    ctx->pc = 0x8003FC28u;
    // 8003FC28: stwx    r5, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x8003FC2Cu;
    // 8003FC2C: lwzx    r5, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 8003FC30: rlwimi r5, r27, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[27], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FC34: addi    r27, r27, 2
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(2);

    ctx->pc = 0x8003FC38u;
    // 8003FC38: stwx    r5, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x8003FC3Cu;
    // 8003FC3C: lwzx    r5, r12, r6
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[6];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 8003FC40: rlwimi r5, r4, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    ctx->pc = 0x8003FC44u;
    // 8003FC44: stwx    r5, r12, r6
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x8003FC48u;
    // 8003FC48: lwzx    r4, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 8003FC4C: rlwimi r4, r0, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 24u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    ctx->pc = 0x8003FC50u;
    // 8003FC50: stwx    r4, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 8003FC54: bc    16, 0, 0x8003FB60
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003FB60u;
                return;
            }
            goto label_8003FB60;
        }
    }

    ctx->pc = 0x8003FC58u;
}

static void loop_8003FC90(CPUState* ctx) {
label_8003FC90:
    ctx->downcount -= 54;
    ctx->pc = 0x8003FC90u;
    // 8003FC90: lwz     r8, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    // 8003FC94: addi    r4, r5, 184
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(184);

    // 8003FC98: addi    r3, r5, 216
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(216);

    ctx->pc = 0x8003FC9Cu;
    // 8003FC9C: stwx    r28, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    // 8003FCA0: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x8003FCA4u;
    // 8003FCA4: stwx    r28, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    ctx->pc = 0x8003FCA8u;
    // 8003FCA8: lwzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FCAC: rlwimi r0, r6, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FCB0: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

    ctx->pc = 0x8003FCB4u;
    // 8003FCB4: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8003FCB8: addi    r4, r5, 184
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(184);

    ctx->pc = 0x8003FCBCu;
    // 8003FCBC: lwzx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FCC0: rlwimi r0, r7, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FCC4: addi    r7, r7, 2
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2);

    ctx->pc = 0x8003FCC8u;
    // 8003FCC8: stwx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8003FCCC: addi    r3, r5, 216
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(216);

    // 8003FCD0: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x8003FCD4u;
    // 8003FCD4: stwx    r28, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    ctx->pc = 0x8003FCD8u;
    // 8003FCD8: stwx    r28, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    ctx->pc = 0x8003FCDCu;
    // 8003FCDC: lwzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FCE0: rlwimi r0, r6, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FCE4: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

    ctx->pc = 0x8003FCE8u;
    // 8003FCE8: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8003FCEC: addi    r4, r5, 184
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(184);

    ctx->pc = 0x8003FCF0u;
    // 8003FCF0: lwzx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FCF4: rlwimi r0, r7, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FCF8: addi    r7, r7, 2
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2);

    ctx->pc = 0x8003FCFCu;
    // 8003FCFC: stwx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8003FD00: addi    r3, r5, 216
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(216);

    // 8003FD04: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x8003FD08u;
    // 8003FD08: stwx    r28, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    ctx->pc = 0x8003FD0Cu;
    // 8003FD0C: stwx    r28, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    ctx->pc = 0x8003FD10u;
    // 8003FD10: lwzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FD14: rlwimi r0, r6, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FD18: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

    ctx->pc = 0x8003FD1Cu;
    // 8003FD1C: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8003FD20: addi    r4, r5, 184
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(184);

    ctx->pc = 0x8003FD24u;
    // 8003FD24: lwzx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FD28: rlwimi r0, r7, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FD2C: addi    r7, r7, 2
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2);

    ctx->pc = 0x8003FD30u;
    // 8003FD30: stwx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8003FD34: addi    r3, r5, 216
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(216);

    // 8003FD38: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x8003FD3Cu;
    // 8003FD3C: stwx    r28, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    ctx->pc = 0x8003FD40u;
    // 8003FD40: stwx    r28, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

    ctx->pc = 0x8003FD44u;
    // 8003FD44: lwzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FD48: rlwimi r0, r6, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FD4C: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

    ctx->pc = 0x8003FD50u;
    // 8003FD50: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8003FD54u;
    // 8003FD54: lwzx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FD58: rlwimi r0, r7, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

    // 8003FD5C: addi    r7, r7, 2
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2);

    ctx->pc = 0x8003FD60u;
    // 8003FD60: stwx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8003FD64: bc    16, 0, 0x8003FC90
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003FC90u;
                return;
            }
            goto label_8003FC90;
        }
    }

    ctx->pc = 0x8003FD68u;
}

static void loop_8003FE6C(CPUState* ctx) {
label_8003FE6C:
    ctx->downcount -= 62;
    ctx->pc = 0x8003FE6Cu;
    // 8003FE6C: lwz     r8, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    // 8003FE70: addi    r7, r9, 28
    ctx->gpr[7] = ctx->gpr[9] + (u32)(s32)(28);

    // 8003FE74: addi    r5, r9, 60
    ctx->gpr[5] = ctx->gpr[9] + (u32)(s32)(60);

    ctx->pc = 0x8003FE78u;
    // 8003FE78: lwzx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FE7C: rlwimi r0, r6, 30, 1, 1
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 30u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x40000000u) | (rot & 0x40000000u);
    }

    // 8003FE80: ori     r3, r29, 0x0080
    ctx->gpr[3] = ctx->gpr[29] | 0x0080u;

    ctx->pc = 0x8003FE84u;
    // 8003FE84: stwx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8003FE88: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

    // 8003FE8C: addi    r7, r9, 28
    ctx->gpr[7] = ctx->gpr[9] + (u32)(s32)(28);

    ctx->pc = 0x8003FE90u;
    // 8003FE90: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FE94: rlwimi r0, r6, 31, 0, 0
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 31u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x80000000u) | (rot & 0x80000000u);
    }

    // 8003FE98: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

    ctx->pc = 0x8003FE9Cu;
    // 8003FE9C: stwx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8003FEA0u;
    // 8003FEA0: stb     r4, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x8003FEA4u;
    // 8003FEA4: stb     r3, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    // 8003FEA8: ori     r3, r29, 0x0080
    ctx->gpr[3] = ctx->gpr[29] | 0x0080u;

    // 8003FEAC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

    ctx->pc = 0x8003FEB0u;
    // 8003FEB0: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FEB4: addi    r5, r9, 60
    ctx->gpr[5] = ctx->gpr[9] + (u32)(s32)(60);

    // 8003FEB8: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

    ctx->pc = 0x8003FEBCu;
    // 8003FEBC: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8003FEC0u;
    // 8003FEC0: lwzx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FEC4: rlwimi r0, r6, 30, 1, 1
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 30u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x40000000u) | (rot & 0x40000000u);
    }

    ctx->pc = 0x8003FEC8u;
    // 8003FEC8: stwx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8003FECC: addi    r7, r9, 28
    ctx->gpr[7] = ctx->gpr[9] + (u32)(s32)(28);

    ctx->pc = 0x8003FED0u;
    // 8003FED0: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FED4: rlwimi r0, r6, 31, 0, 0
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 31u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x80000000u) | (rot & 0x80000000u);
    }

    ctx->pc = 0x8003FED8u;
    // 8003FED8: stwx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8003FEDCu;
    // 8003FEDC: stb     r4, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x8003FEE0u;
    // 8003FEE0: stb     r3, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    // 8003FEE4: ori     r3, r29, 0x0080
    ctx->gpr[3] = ctx->gpr[29] | 0x0080u;

    // 8003FEE8: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

    ctx->pc = 0x8003FEECu;
    // 8003FEEC: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FEF0: addi    r5, r9, 60
    ctx->gpr[5] = ctx->gpr[9] + (u32)(s32)(60);

    // 8003FEF4: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

    ctx->pc = 0x8003FEF8u;
    // 8003FEF8: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8003FEFCu;
    // 8003FEFC: lwzx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FF00: rlwimi r0, r6, 30, 1, 1
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 30u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x40000000u) | (rot & 0x40000000u);
    }

    ctx->pc = 0x8003FF04u;
    // 8003FF04: stwx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8003FF08: addi    r7, r9, 28
    ctx->gpr[7] = ctx->gpr[9] + (u32)(s32)(28);

    ctx->pc = 0x8003FF0Cu;
    // 8003FF0C: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FF10: rlwimi r0, r6, 31, 0, 0
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 31u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x80000000u) | (rot & 0x80000000u);
    }

    ctx->pc = 0x8003FF14u;
    // 8003FF14: stwx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8003FF18u;
    // 8003FF18: stb     r4, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x8003FF1Cu;
    // 8003FF1C: stb     r3, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    // 8003FF20: ori     r3, r29, 0x0080
    ctx->gpr[3] = ctx->gpr[29] | 0x0080u;

    // 8003FF24: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

    ctx->pc = 0x8003FF28u;
    // 8003FF28: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FF2C: addi    r5, r9, 60
    ctx->gpr[5] = ctx->gpr[9] + (u32)(s32)(60);

    // 8003FF30: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

    ctx->pc = 0x8003FF34u;
    // 8003FF34: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8003FF38u;
    // 8003FF38: lwzx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FF3C: rlwimi r0, r6, 30, 1, 1
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 30u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x40000000u) | (rot & 0x40000000u);
    }

    ctx->pc = 0x8003FF40u;
    // 8003FF40: stwx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8003FF44u;
    // 8003FF44: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003FF48: rlwimi r0, r6, 31, 0, 0
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 31u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x80000000u) | (rot & 0x80000000u);
    }

    ctx->pc = 0x8003FF4Cu;
    // 8003FF4C: stwx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8003FF50u;
    // 8003FF50: stb     r4, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

    ctx->pc = 0x8003FF54u;
    // 8003FF54: stb     r3, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

    ctx->pc = 0x8003FF58u;
    // 8003FF58: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8003FF5Cu;
    // 8003FF5C: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8003FF60: bc    16, 0, 0x8003FE6C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003FE6Cu;
                return;
            }
            goto label_8003FE6C;
        }
    }

    ctx->pc = 0x8003FF64u;
}

static void loop_800413CC(CPUState* ctx) {
label_800413CC:
    ctx->downcount -= 5;
    ctx->pc = 0x800413CCu;
    // 800413CC: lwzu     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x800413D0u;
    // 800413D0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x800413D4u;
    // 800413D4: stwu     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x800413D8u;
    // 800413D8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 800413DC: bc    16, 0, 0x800413CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800413CCu;
                return;
            }
            goto label_800413CC;
        }
    }

    ctx->pc = 0x800413E0u;
}

void func_8003D5E0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x8003D5E0u: goto label_8003D5E0;
    case 0x8003D5E4u: goto label_8003D5E4;
    case 0x8003D5E8u: goto label_8003D5E8;
    case 0x8003D5ECu: goto label_8003D5EC;
    case 0x8003D5F0u: goto label_8003D5F0;
    case 0x8003D5F4u: goto label_8003D5F4;
    case 0x8003D5F8u: goto label_8003D5F8;
    case 0x8003D5FCu: goto label_8003D5FC;
    case 0x8003D600u: goto label_8003D600;
    case 0x8003D604u: goto label_8003D604;
    case 0x8003D608u: goto label_8003D608;
    case 0x8003D60Cu: goto label_8003D60C;
    case 0x8003D610u: goto label_8003D610;
    case 0x8003D614u: goto label_8003D614;
    case 0x8003D618u: goto label_8003D618;
    case 0x8003D61Cu: goto label_8003D61C;
    case 0x8003D620u: goto label_8003D620;
    case 0x8003D624u: goto label_8003D624;
    case 0x8003D628u: goto label_8003D628;
    case 0x8003D62Cu: goto label_8003D62C;
    case 0x8003D630u: goto label_8003D630;
    case 0x8003D634u: goto label_8003D634;
    case 0x8003D638u: goto label_8003D638;
    case 0x8003D63Cu: goto label_8003D63C;
    case 0x8003D640u: goto label_8003D640;
    case 0x8003D644u: goto label_8003D644;
    case 0x8003D648u: goto label_8003D648;
    case 0x8003D64Cu: goto label_8003D64C;
    case 0x8003D650u: goto label_8003D650;
    case 0x8003D654u: goto label_8003D654;
    case 0x8003D658u: goto label_8003D658;
    case 0x8003D65Cu: goto label_8003D65C;
    case 0x8003D660u: goto label_8003D660;
    case 0x8003D664u: goto label_8003D664;
    case 0x8003D668u: goto label_8003D668;
    case 0x8003D66Cu: goto label_8003D66C;
    case 0x8003D670u: goto label_8003D670;
    case 0x8003D674u: goto label_8003D674;
    case 0x8003D678u: goto label_8003D678;
    case 0x8003D67Cu: goto label_8003D67C;
    case 0x8003D680u: goto label_8003D680;
    case 0x8003D684u: goto label_8003D684;
    case 0x8003D688u: goto label_8003D688;
    case 0x8003D68Cu: goto label_8003D68C;
    case 0x8003D690u: goto label_8003D690;
    case 0x8003D694u: goto label_8003D694;
    case 0x8003D698u: goto label_8003D698;
    case 0x8003D69Cu: goto label_8003D69C;
    case 0x8003D6A0u: goto label_8003D6A0;
    case 0x8003D6A4u: goto label_8003D6A4;
    case 0x8003D6A8u: goto label_8003D6A8;
    case 0x8003D6ACu: goto label_8003D6AC;
    case 0x8003D6B0u: goto label_8003D6B0;
    case 0x8003D6B4u: goto label_8003D6B4;
    case 0x8003D6B8u: goto label_8003D6B8;
    case 0x8003D6BCu: goto label_8003D6BC;
    case 0x8003D6C0u: goto label_8003D6C0;
    case 0x8003D6C4u: goto label_8003D6C4;
    case 0x8003D6C8u: goto label_8003D6C8;
    case 0x8003D6CCu: goto label_8003D6CC;
    case 0x8003D6D0u: goto label_8003D6D0;
    case 0x8003D6D4u: goto label_8003D6D4;
    case 0x8003D6D8u: goto label_8003D6D8;
    case 0x8003D6DCu: goto label_8003D6DC;
    case 0x8003D6E0u: goto label_8003D6E0;
    case 0x8003D6E4u: goto label_8003D6E4;
    case 0x8003D6E8u: goto label_8003D6E8;
    case 0x8003D6ECu: goto label_8003D6EC;
    case 0x8003D6F0u: goto label_8003D6F0;
    case 0x8003D6F4u: goto label_8003D6F4;
    case 0x8003D6F8u: goto label_8003D6F8;
    case 0x8003D6FCu: goto label_8003D6FC;
    case 0x8003D700u: goto label_8003D700;
    case 0x8003D704u: goto label_8003D704;
    case 0x8003D708u: goto label_8003D708;
    case 0x8003D70Cu: goto label_8003D70C;
    case 0x8003D710u: goto label_8003D710;
    case 0x8003D714u: goto label_8003D714;
    case 0x8003D718u: goto label_8003D718;
    case 0x8003D71Cu: goto label_8003D71C;
    case 0x8003D720u: goto label_8003D720;
    case 0x8003D724u: goto label_8003D724;
    case 0x8003D728u: goto label_8003D728;
    case 0x8003D72Cu: goto label_8003D72C;
    case 0x8003D730u: goto label_8003D730;
    case 0x8003D734u: goto label_8003D734;
    case 0x8003D738u: goto label_8003D738;
    case 0x8003D73Cu: goto label_8003D73C;
    case 0x8003D740u: goto label_8003D740;
    case 0x8003D744u: goto label_8003D744;
    case 0x8003D748u: goto label_8003D748;
    case 0x8003D74Cu: goto label_8003D74C;
    case 0x8003D750u: goto label_8003D750;
    case 0x8003D754u: goto label_8003D754;
    case 0x8003D758u: goto label_8003D758;
    case 0x8003D75Cu: goto label_8003D75C;
    case 0x8003D760u: goto label_8003D760;
    case 0x8003D764u: goto label_8003D764;
    case 0x8003D768u: goto label_8003D768;
    case 0x8003D76Cu: goto label_8003D76C;
    case 0x8003D770u: goto label_8003D770;
    case 0x8003D774u: goto label_8003D774;
    case 0x8003D778u: goto label_8003D778;
    case 0x8003D77Cu: goto label_8003D77C;
    case 0x8003D780u: goto label_8003D780;
    case 0x8003D784u: goto label_8003D784;
    case 0x8003D788u: goto label_8003D788;
    case 0x8003D78Cu: goto label_8003D78C;
    case 0x8003D790u: goto label_8003D790;
    case 0x8003D794u: goto label_8003D794;
    case 0x8003D798u: goto label_8003D798;
    case 0x8003D79Cu: goto label_8003D79C;
    case 0x8003D7A0u: goto label_8003D7A0;
    case 0x8003D7A4u: goto label_8003D7A4;
    case 0x8003D7A8u: goto label_8003D7A8;
    case 0x8003D7ACu: goto label_8003D7AC;
    case 0x8003D7B0u: goto label_8003D7B0;
    case 0x8003D7B4u: goto label_8003D7B4;
    case 0x8003D7B8u: goto label_8003D7B8;
    case 0x8003D7BCu: goto label_8003D7BC;
    case 0x8003D7C0u: goto label_8003D7C0;
    case 0x8003D7C4u: goto label_8003D7C4;
    case 0x8003D7C8u: goto label_8003D7C8;
    case 0x8003D7CCu: goto label_8003D7CC;
    case 0x8003D7D0u: goto label_8003D7D0;
    case 0x8003D7D4u: goto label_8003D7D4;
    case 0x8003D7D8u: goto label_8003D7D8;
    case 0x8003D7DCu: goto label_8003D7DC;
    case 0x8003D7E0u: goto label_8003D7E0;
    case 0x8003D7E4u: goto label_8003D7E4;
    case 0x8003D7E8u: goto label_8003D7E8;
    case 0x8003D7ECu: goto label_8003D7EC;
    case 0x8003D7F0u: goto label_8003D7F0;
    case 0x8003D7F4u: goto label_8003D7F4;
    case 0x8003D7F8u: goto label_8003D7F8;
    case 0x8003D7FCu: goto label_8003D7FC;
    case 0x8003D800u: goto label_8003D800;
    case 0x8003D804u: goto label_8003D804;
    case 0x8003D808u: goto label_8003D808;
    case 0x8003D80Cu: goto label_8003D80C;
    case 0x8003D810u: goto label_8003D810;
    case 0x8003D814u: goto label_8003D814;
    case 0x8003D818u: goto label_8003D818;
    case 0x8003D81Cu: goto label_8003D81C;
    case 0x8003D820u: goto label_8003D820;
    case 0x8003D824u: goto label_8003D824;
    case 0x8003D828u: goto label_8003D828;
    case 0x8003D82Cu: goto label_8003D82C;
    case 0x8003D830u: goto label_8003D830;
    case 0x8003D834u: goto label_8003D834;
    case 0x8003D838u: goto label_8003D838;
    case 0x8003D83Cu: goto label_8003D83C;
    case 0x8003D840u: goto label_8003D840;
    case 0x8003D844u: goto label_8003D844;
    case 0x8003D848u: goto label_8003D848;
    case 0x8003D84Cu: goto label_8003D84C;
    case 0x8003D850u: goto label_8003D850;
    case 0x8003D854u: goto label_8003D854;
    case 0x8003D858u: goto label_8003D858;
    case 0x8003D85Cu: goto label_8003D85C;
    case 0x8003D860u: goto label_8003D860;
    case 0x8003D864u: goto label_8003D864;
    case 0x8003D868u: goto label_8003D868;
    case 0x8003D86Cu: goto label_8003D86C;
    case 0x8003D870u: goto label_8003D870;
    case 0x8003D874u: goto label_8003D874;
    case 0x8003D878u: goto label_8003D878;
    case 0x8003D87Cu: goto label_8003D87C;
    case 0x8003D880u: goto label_8003D880;
    case 0x8003D884u: goto label_8003D884;
    case 0x8003D888u: goto label_8003D888;
    case 0x8003D88Cu: goto label_8003D88C;
    case 0x8003D890u: goto label_8003D890;
    case 0x8003D894u: goto label_8003D894;
    case 0x8003D898u: goto label_8003D898;
    case 0x8003D89Cu: goto label_8003D89C;
    case 0x8003D8A0u: goto label_8003D8A0;
    case 0x8003D8A4u: goto label_8003D8A4;
    case 0x8003D8A8u: goto label_8003D8A8;
    case 0x8003D8ACu: goto label_8003D8AC;
    case 0x8003D8B0u: goto label_8003D8B0;
    case 0x8003D8B4u: goto label_8003D8B4;
    case 0x8003D8B8u: goto label_8003D8B8;
    case 0x8003D8BCu: goto label_8003D8BC;
    case 0x8003D8C0u: goto label_8003D8C0;
    case 0x8003D8C4u: goto label_8003D8C4;
    case 0x8003D8C8u: goto label_8003D8C8;
    case 0x8003D8CCu: goto label_8003D8CC;
    case 0x8003D8D0u: goto label_8003D8D0;
    case 0x8003D8D4u: goto label_8003D8D4;
    case 0x8003D8D8u: goto label_8003D8D8;
    case 0x8003D8DCu: goto label_8003D8DC;
    case 0x8003D8E0u: goto label_8003D8E0;
    case 0x8003D8E4u: goto label_8003D8E4;
    case 0x8003D8E8u: goto label_8003D8E8;
    case 0x8003D8ECu: goto label_8003D8EC;
    case 0x8003D8F0u: goto label_8003D8F0;
    case 0x8003D8F4u: goto label_8003D8F4;
    case 0x8003D8F8u: goto label_8003D8F8;
    case 0x8003D8FCu: goto label_8003D8FC;
    case 0x8003D900u: goto label_8003D900;
    case 0x8003D904u: goto label_8003D904;
    case 0x8003D908u: goto label_8003D908;
    case 0x8003D90Cu: goto label_8003D90C;
    case 0x8003D910u: goto label_8003D910;
    case 0x8003D914u: goto label_8003D914;
    case 0x8003D918u: goto label_8003D918;
    case 0x8003D91Cu: goto label_8003D91C;
    case 0x8003D920u: goto label_8003D920;
    case 0x8003D924u: goto label_8003D924;
    case 0x8003D928u: goto label_8003D928;
    case 0x8003D92Cu: goto label_8003D92C;
    case 0x8003D930u: goto label_8003D930;
    case 0x8003D934u: goto label_8003D934;
    case 0x8003D938u: goto label_8003D938;
    case 0x8003D93Cu: goto label_8003D93C;
    case 0x8003D940u: goto label_8003D940;
    case 0x8003D944u: goto label_8003D944;
    case 0x8003D948u: goto label_8003D948;
    case 0x8003D94Cu: goto label_8003D94C;
    case 0x8003D950u: goto label_8003D950;
    case 0x8003D954u: goto label_8003D954;
    case 0x8003D958u: goto label_8003D958;
    case 0x8003D95Cu: goto label_8003D95C;
    case 0x8003D960u: goto label_8003D960;
    case 0x8003D964u: goto label_8003D964;
    case 0x8003D968u: goto label_8003D968;
    case 0x8003D96Cu: goto label_8003D96C;
    case 0x8003D970u: goto label_8003D970;
    case 0x8003D974u: goto label_8003D974;
    case 0x8003D978u: goto label_8003D978;
    case 0x8003D97Cu: goto label_8003D97C;
    case 0x8003D980u: goto label_8003D980;
    case 0x8003D984u: goto label_8003D984;
    case 0x8003D988u: goto label_8003D988;
    case 0x8003D98Cu: goto label_8003D98C;
    case 0x8003D990u: goto label_8003D990;
    case 0x8003D994u: goto label_8003D994;
    case 0x8003D998u: goto label_8003D998;
    case 0x8003D99Cu: goto label_8003D99C;
    case 0x8003D9A0u: goto label_8003D9A0;
    case 0x8003D9A4u: goto label_8003D9A4;
    case 0x8003D9A8u: goto label_8003D9A8;
    case 0x8003D9ACu: goto label_8003D9AC;
    case 0x8003D9B0u: goto label_8003D9B0;
    case 0x8003D9B4u: goto label_8003D9B4;
    case 0x8003D9B8u: goto label_8003D9B8;
    case 0x8003D9BCu: goto label_8003D9BC;
    case 0x8003D9C0u: goto label_8003D9C0;
    case 0x8003D9C4u: goto label_8003D9C4;
    case 0x8003D9C8u: goto label_8003D9C8;
    case 0x8003D9CCu: goto label_8003D9CC;
    case 0x8003D9D0u: goto label_8003D9D0;
    case 0x8003D9D4u: goto label_8003D9D4;
    case 0x8003D9D8u: goto label_8003D9D8;
    case 0x8003D9DCu: goto label_8003D9DC;
    case 0x8003D9E0u: goto label_8003D9E0;
    case 0x8003D9E4u: goto label_8003D9E4;
    case 0x8003D9E8u: goto label_8003D9E8;
    case 0x8003D9ECu: goto label_8003D9EC;
    case 0x8003D9F0u: goto label_8003D9F0;
    case 0x8003D9F4u: goto label_8003D9F4;
    case 0x8003D9F8u: goto label_8003D9F8;
    case 0x8003D9FCu: goto label_8003D9FC;
    case 0x8003DA00u: goto label_8003DA00;
    case 0x8003DA04u: goto label_8003DA04;
    case 0x8003DA08u: goto label_8003DA08;
    case 0x8003DA0Cu: goto label_8003DA0C;
    case 0x8003DA10u: goto label_8003DA10;
    case 0x8003DA14u: goto label_8003DA14;
    case 0x8003DA18u: goto label_8003DA18;
    case 0x8003DA1Cu: goto label_8003DA1C;
    case 0x8003DA20u: goto label_8003DA20;
    case 0x8003DA24u: goto label_8003DA24;
    case 0x8003DA28u: goto label_8003DA28;
    case 0x8003DA2Cu: goto label_8003DA2C;
    case 0x8003DA30u: goto label_8003DA30;
    case 0x8003DA34u: goto label_8003DA34;
    case 0x8003DA38u: goto label_8003DA38;
    case 0x8003DA3Cu: goto label_8003DA3C;
    case 0x8003DA40u: goto label_8003DA40;
    case 0x8003DA44u: goto label_8003DA44;
    case 0x8003DA48u: goto label_8003DA48;
    case 0x8003DA4Cu: goto label_8003DA4C;
    case 0x8003DA50u: goto label_8003DA50;
    case 0x8003DA54u: goto label_8003DA54;
    case 0x8003DA58u: goto label_8003DA58;
    case 0x8003DA5Cu: goto label_8003DA5C;
    case 0x8003DA60u: goto label_8003DA60;
    case 0x8003DA64u: goto label_8003DA64;
    case 0x8003DA68u: goto label_8003DA68;
    case 0x8003DA6Cu: goto label_8003DA6C;
    case 0x8003DA70u: goto label_8003DA70;
    case 0x8003DA74u: goto label_8003DA74;
    case 0x8003DA78u: goto label_8003DA78;
    case 0x8003DA7Cu: goto label_8003DA7C;
    case 0x8003DA80u: goto label_8003DA80;
    case 0x8003DA84u: goto label_8003DA84;
    case 0x8003DA88u: goto label_8003DA88;
    case 0x8003DA8Cu: goto label_8003DA8C;
    case 0x8003DA90u: goto label_8003DA90;
    case 0x8003DA94u: goto label_8003DA94;
    case 0x8003DA98u: goto label_8003DA98;
    case 0x8003DA9Cu: goto label_8003DA9C;
    case 0x8003DAA0u: goto label_8003DAA0;
    case 0x8003DAA4u: goto label_8003DAA4;
    case 0x8003DAA8u: goto label_8003DAA8;
    case 0x8003DAACu: goto label_8003DAAC;
    case 0x8003DAB0u: goto label_8003DAB0;
    case 0x8003DAB4u: goto label_8003DAB4;
    case 0x8003DAB8u: goto label_8003DAB8;
    case 0x8003DABCu: goto label_8003DABC;
    case 0x8003DAC0u: goto label_8003DAC0;
    case 0x8003DAC4u: goto label_8003DAC4;
    case 0x8003DAC8u: goto label_8003DAC8;
    case 0x8003DACCu: goto label_8003DACC;
    case 0x8003DAD0u: goto label_8003DAD0;
    case 0x8003DAD4u: goto label_8003DAD4;
    case 0x8003DAD8u: goto label_8003DAD8;
    case 0x8003DADCu: goto label_8003DADC;
    case 0x8003DAE0u: goto label_8003DAE0;
    case 0x8003DAE4u: goto label_8003DAE4;
    case 0x8003DAE8u: goto label_8003DAE8;
    case 0x8003DAECu: goto label_8003DAEC;
    case 0x8003DAF0u: goto label_8003DAF0;
    case 0x8003DAF4u: goto label_8003DAF4;
    case 0x8003DAF8u: goto label_8003DAF8;
    case 0x8003DAFCu: goto label_8003DAFC;
    case 0x8003DB00u: goto label_8003DB00;
    case 0x8003DB04u: goto label_8003DB04;
    case 0x8003DB08u: goto label_8003DB08;
    case 0x8003DB0Cu: goto label_8003DB0C;
    case 0x8003DB10u: goto label_8003DB10;
    case 0x8003DB14u: goto label_8003DB14;
    case 0x8003DB18u: goto label_8003DB18;
    case 0x8003DB1Cu: goto label_8003DB1C;
    case 0x8003DB20u: goto label_8003DB20;
    case 0x8003DB24u: goto label_8003DB24;
    case 0x8003DB28u: goto label_8003DB28;
    case 0x8003DB2Cu: goto label_8003DB2C;
    case 0x8003DB30u: goto label_8003DB30;
    case 0x8003DB34u: goto label_8003DB34;
    case 0x8003DB38u: goto label_8003DB38;
    case 0x8003DB3Cu: goto label_8003DB3C;
    case 0x8003DB40u: goto label_8003DB40;
    case 0x8003DB44u: goto label_8003DB44;
    case 0x8003DB48u: goto label_8003DB48;
    case 0x8003DB4Cu: goto label_8003DB4C;
    case 0x8003DB50u: goto label_8003DB50;
    case 0x8003DB54u: goto label_8003DB54;
    case 0x8003DB58u: goto label_8003DB58;
    case 0x8003DB5Cu: goto label_8003DB5C;
    case 0x8003DB60u: goto label_8003DB60;
    case 0x8003DB64u: goto label_8003DB64;
    case 0x8003DB68u: goto label_8003DB68;
    case 0x8003DB6Cu: goto label_8003DB6C;
    case 0x8003DB70u: goto label_8003DB70;
    case 0x8003DB74u: goto label_8003DB74;
    case 0x8003DB78u: goto label_8003DB78;
    case 0x8003DB7Cu: goto label_8003DB7C;
    case 0x8003DB80u: goto label_8003DB80;
    case 0x8003DB84u: goto label_8003DB84;
    case 0x8003DB88u: goto label_8003DB88;
    case 0x8003DB8Cu: goto label_8003DB8C;
    case 0x8003DB90u: goto label_8003DB90;
    case 0x8003DB94u: goto label_8003DB94;
    case 0x8003DB98u: goto label_8003DB98;
    case 0x8003DB9Cu: goto label_8003DB9C;
    case 0x8003DBA0u: goto label_8003DBA0;
    case 0x8003DBA4u: goto label_8003DBA4;
    case 0x8003DBA8u: goto label_8003DBA8;
    case 0x8003DBACu: goto label_8003DBAC;
    case 0x8003DBB0u: goto label_8003DBB0;
    case 0x8003DBB4u: goto label_8003DBB4;
    case 0x8003DBB8u: goto label_8003DBB8;
    case 0x8003DBBCu: goto label_8003DBBC;
    case 0x8003DBC0u: goto label_8003DBC0;
    case 0x8003DBC4u: goto label_8003DBC4;
    case 0x8003DBC8u: goto label_8003DBC8;
    case 0x8003DBCCu: goto label_8003DBCC;
    case 0x8003DBD0u: goto label_8003DBD0;
    case 0x8003DBD4u: goto label_8003DBD4;
    case 0x8003DBD8u: goto label_8003DBD8;
    case 0x8003DBDCu: goto label_8003DBDC;
    case 0x8003DBE0u: goto label_8003DBE0;
    case 0x8003DBE4u: goto label_8003DBE4;
    case 0x8003DBE8u: goto label_8003DBE8;
    case 0x8003DBECu: goto label_8003DBEC;
    case 0x8003DBF0u: goto label_8003DBF0;
    case 0x8003DBF4u: goto label_8003DBF4;
    case 0x8003DBF8u: goto label_8003DBF8;
    case 0x8003DBFCu: goto label_8003DBFC;
    case 0x8003DC00u: goto label_8003DC00;
    case 0x8003DC04u: goto label_8003DC04;
    case 0x8003DC08u: goto label_8003DC08;
    case 0x8003DC0Cu: goto label_8003DC0C;
    case 0x8003DC10u: goto label_8003DC10;
    case 0x8003DC14u: goto label_8003DC14;
    case 0x8003DC18u: goto label_8003DC18;
    case 0x8003DC1Cu: goto label_8003DC1C;
    case 0x8003DC20u: goto label_8003DC20;
    case 0x8003DC24u: goto label_8003DC24;
    case 0x8003DC28u: goto label_8003DC28;
    case 0x8003DC2Cu: goto label_8003DC2C;
    case 0x8003DC30u: goto label_8003DC30;
    case 0x8003DC34u: goto label_8003DC34;
    case 0x8003DC38u: goto label_8003DC38;
    case 0x8003DC3Cu: goto label_8003DC3C;
    case 0x8003DC40u: goto label_8003DC40;
    case 0x8003DC44u: goto label_8003DC44;
    case 0x8003DC48u: goto label_8003DC48;
    case 0x8003DC4Cu: goto label_8003DC4C;
    case 0x8003DC50u: goto label_8003DC50;
    case 0x8003DC54u: goto label_8003DC54;
    case 0x8003DC58u: goto label_8003DC58;
    case 0x8003DC5Cu: goto label_8003DC5C;
    case 0x8003DC60u: goto label_8003DC60;
    case 0x8003DC64u: goto label_8003DC64;
    case 0x8003DC68u: goto label_8003DC68;
    case 0x8003DC6Cu: goto label_8003DC6C;
    case 0x8003DC70u: goto label_8003DC70;
    case 0x8003DC74u: goto label_8003DC74;
    case 0x8003DC78u: goto label_8003DC78;
    case 0x8003DC7Cu: goto label_8003DC7C;
    case 0x8003DC80u: goto label_8003DC80;
    case 0x8003DC84u: goto label_8003DC84;
    case 0x8003DC88u: goto label_8003DC88;
    case 0x8003DC8Cu: goto label_8003DC8C;
    case 0x8003DC90u: goto label_8003DC90;
    case 0x8003DC94u: goto label_8003DC94;
    case 0x8003DC98u: goto label_8003DC98;
    case 0x8003DC9Cu: goto label_8003DC9C;
    case 0x8003DCA0u: goto label_8003DCA0;
    case 0x8003DCA4u: goto label_8003DCA4;
    case 0x8003DCA8u: goto label_8003DCA8;
    case 0x8003DCACu: goto label_8003DCAC;
    case 0x8003DCB0u: goto label_8003DCB0;
    case 0x8003DCB4u: goto label_8003DCB4;
    case 0x8003DCB8u: goto label_8003DCB8;
    case 0x8003DCBCu: goto label_8003DCBC;
    case 0x8003DCC0u: goto label_8003DCC0;
    case 0x8003DCC4u: goto label_8003DCC4;
    case 0x8003DCC8u: goto label_8003DCC8;
    case 0x8003DCCCu: goto label_8003DCCC;
    case 0x8003DCD0u: goto label_8003DCD0;
    case 0x8003DCD4u: goto label_8003DCD4;
    case 0x8003DCD8u: goto label_8003DCD8;
    case 0x8003DCDCu: goto label_8003DCDC;
    case 0x8003DCE0u: goto label_8003DCE0;
    case 0x8003DCE4u: goto label_8003DCE4;
    case 0x8003DCE8u: goto label_8003DCE8;
    case 0x8003DCECu: goto label_8003DCEC;
    case 0x8003DCF0u: goto label_8003DCF0;
    case 0x8003DCF4u: goto label_8003DCF4;
    case 0x8003DCF8u: goto label_8003DCF8;
    case 0x8003DCFCu: goto label_8003DCFC;
    case 0x8003DD00u: goto label_8003DD00;
    case 0x8003DD04u: goto label_8003DD04;
    case 0x8003DD08u: goto label_8003DD08;
    case 0x8003DD0Cu: goto label_8003DD0C;
    case 0x8003DD10u: goto label_8003DD10;
    case 0x8003DD14u: goto label_8003DD14;
    case 0x8003DD18u: goto label_8003DD18;
    case 0x8003DD1Cu: goto label_8003DD1C;
    case 0x8003DD20u: goto label_8003DD20;
    case 0x8003DD24u: goto label_8003DD24;
    case 0x8003DD28u: goto label_8003DD28;
    case 0x8003DD2Cu: goto label_8003DD2C;
    case 0x8003DD30u: goto label_8003DD30;
    case 0x8003DD34u: goto label_8003DD34;
    case 0x8003DD38u: goto label_8003DD38;
    case 0x8003DD3Cu: goto label_8003DD3C;
    case 0x8003DD40u: goto label_8003DD40;
    case 0x8003DD44u: goto label_8003DD44;
    case 0x8003DD48u: goto label_8003DD48;
    case 0x8003DD4Cu: goto label_8003DD4C;
    case 0x8003DD50u: goto label_8003DD50;
    case 0x8003DD54u: goto label_8003DD54;
    case 0x8003DD58u: goto label_8003DD58;
    case 0x8003DD5Cu: goto label_8003DD5C;
    case 0x8003DD60u: goto label_8003DD60;
    case 0x8003DD64u: goto label_8003DD64;
    case 0x8003DD68u: goto label_8003DD68;
    case 0x8003DD6Cu: goto label_8003DD6C;
    case 0x8003DD70u: goto label_8003DD70;
    case 0x8003DD74u: goto label_8003DD74;
    case 0x8003DD78u: goto label_8003DD78;
    case 0x8003DD7Cu: goto label_8003DD7C;
    case 0x8003DD80u: goto label_8003DD80;
    case 0x8003DD84u: goto label_8003DD84;
    case 0x8003DD88u: goto label_8003DD88;
    case 0x8003DD8Cu: goto label_8003DD8C;
    case 0x8003DD90u: goto label_8003DD90;
    case 0x8003DD94u: goto label_8003DD94;
    case 0x8003DD98u: goto label_8003DD98;
    case 0x8003DD9Cu: goto label_8003DD9C;
    case 0x8003DDA0u: goto label_8003DDA0;
    case 0x8003DDA4u: goto label_8003DDA4;
    case 0x8003DDA8u: goto label_8003DDA8;
    case 0x8003DDACu: goto label_8003DDAC;
    case 0x8003DDB0u: goto label_8003DDB0;
    case 0x8003DDB4u: goto label_8003DDB4;
    case 0x8003DDB8u: goto label_8003DDB8;
    case 0x8003DDBCu: goto label_8003DDBC;
    case 0x8003DDC0u: goto label_8003DDC0;
    case 0x8003DDC4u: goto label_8003DDC4;
    case 0x8003DDC8u: goto label_8003DDC8;
    case 0x8003DDCCu: goto label_8003DDCC;
    case 0x8003DDD0u: goto label_8003DDD0;
    case 0x8003DDD4u: goto label_8003DDD4;
    case 0x8003DDD8u: goto label_8003DDD8;
    case 0x8003DDDCu: goto label_8003DDDC;
    case 0x8003DDE0u: goto label_8003DDE0;
    case 0x8003DDE4u: goto label_8003DDE4;
    case 0x8003DDE8u: goto label_8003DDE8;
    case 0x8003DDECu: goto label_8003DDEC;
    case 0x8003DDF0u: goto label_8003DDF0;
    case 0x8003DDF4u: goto label_8003DDF4;
    case 0x8003DDF8u: goto label_8003DDF8;
    case 0x8003DDFCu: goto label_8003DDFC;
    case 0x8003DE00u: goto label_8003DE00;
    case 0x8003DE04u: goto label_8003DE04;
    case 0x8003DE08u: goto label_8003DE08;
    case 0x8003DE0Cu: goto label_8003DE0C;
    case 0x8003DE10u: goto label_8003DE10;
    case 0x8003DE14u: goto label_8003DE14;
    case 0x8003DE18u: goto label_8003DE18;
    case 0x8003DE1Cu: goto label_8003DE1C;
    case 0x8003DE20u: goto label_8003DE20;
    case 0x8003DE24u: goto label_8003DE24;
    case 0x8003DE28u: goto label_8003DE28;
    case 0x8003DE2Cu: goto label_8003DE2C;
    case 0x8003DE30u: goto label_8003DE30;
    case 0x8003DE34u: goto label_8003DE34;
    case 0x8003DE38u: goto label_8003DE38;
    case 0x8003DE3Cu: goto label_8003DE3C;
    case 0x8003DE40u: goto label_8003DE40;
    case 0x8003DE44u: goto label_8003DE44;
    case 0x8003DE48u: goto label_8003DE48;
    case 0x8003DE4Cu: goto label_8003DE4C;
    case 0x8003DE50u: goto label_8003DE50;
    case 0x8003DE54u: goto label_8003DE54;
    case 0x8003DE58u: goto label_8003DE58;
    case 0x8003DE5Cu: goto label_8003DE5C;
    case 0x8003DE60u: goto label_8003DE60;
    case 0x8003DE64u: goto label_8003DE64;
    case 0x8003DE68u: goto label_8003DE68;
    case 0x8003DE6Cu: goto label_8003DE6C;
    case 0x8003DE70u: goto label_8003DE70;
    case 0x8003DE74u: goto label_8003DE74;
    case 0x8003DE78u: goto label_8003DE78;
    case 0x8003DE7Cu: goto label_8003DE7C;
    case 0x8003DE80u: goto label_8003DE80;
    case 0x8003DE84u: goto label_8003DE84;
    case 0x8003DE88u: goto label_8003DE88;
    case 0x8003DE8Cu: goto label_8003DE8C;
    case 0x8003DE90u: goto label_8003DE90;
    case 0x8003DE94u: goto label_8003DE94;
    case 0x8003DE98u: goto label_8003DE98;
    case 0x8003DE9Cu: goto label_8003DE9C;
    case 0x8003DEA0u: goto label_8003DEA0;
    case 0x8003DEA4u: goto label_8003DEA4;
    case 0x8003DEA8u: goto label_8003DEA8;
    case 0x8003DEACu: goto label_8003DEAC;
    case 0x8003DEB0u: goto label_8003DEB0;
    case 0x8003DEB4u: goto label_8003DEB4;
    case 0x8003DEB8u: goto label_8003DEB8;
    case 0x8003DEBCu: goto label_8003DEBC;
    case 0x8003DEC0u: goto label_8003DEC0;
    case 0x8003DEC4u: goto label_8003DEC4;
    case 0x8003DEC8u: goto label_8003DEC8;
    case 0x8003DECCu: goto label_8003DECC;
    case 0x8003DED0u: goto label_8003DED0;
    case 0x8003DED4u: goto label_8003DED4;
    case 0x8003DED8u: goto label_8003DED8;
    case 0x8003DEDCu: goto label_8003DEDC;
    case 0x8003DEE0u: goto label_8003DEE0;
    case 0x8003DEE4u: goto label_8003DEE4;
    case 0x8003DEE8u: goto label_8003DEE8;
    case 0x8003DEECu: goto label_8003DEEC;
    case 0x8003DEF0u: goto label_8003DEF0;
    case 0x8003DEF4u: goto label_8003DEF4;
    case 0x8003DEF8u: goto label_8003DEF8;
    case 0x8003DEFCu: goto label_8003DEFC;
    case 0x8003DF00u: goto label_8003DF00;
    case 0x8003DF04u: goto label_8003DF04;
    case 0x8003DF08u: goto label_8003DF08;
    case 0x8003DF0Cu: goto label_8003DF0C;
    case 0x8003DF10u: goto label_8003DF10;
    case 0x8003DF14u: goto label_8003DF14;
    case 0x8003DF18u: goto label_8003DF18;
    case 0x8003DF1Cu: goto label_8003DF1C;
    case 0x8003DF20u: goto label_8003DF20;
    case 0x8003DF24u: goto label_8003DF24;
    case 0x8003DF28u: goto label_8003DF28;
    case 0x8003DF2Cu: goto label_8003DF2C;
    case 0x8003DF30u: goto label_8003DF30;
    case 0x8003DF34u: goto label_8003DF34;
    case 0x8003DF38u: goto label_8003DF38;
    case 0x8003DF3Cu: goto label_8003DF3C;
    case 0x8003DF40u: goto label_8003DF40;
    case 0x8003DF44u: goto label_8003DF44;
    case 0x8003DF48u: goto label_8003DF48;
    case 0x8003DF4Cu: goto label_8003DF4C;
    case 0x8003DF50u: goto label_8003DF50;
    case 0x8003DF54u: goto label_8003DF54;
    case 0x8003DF58u: goto label_8003DF58;
    case 0x8003DF5Cu: goto label_8003DF5C;
    case 0x8003DF60u: goto label_8003DF60;
    case 0x8003DF64u: goto label_8003DF64;
    case 0x8003DF68u: goto label_8003DF68;
    case 0x8003DF6Cu: goto label_8003DF6C;
    case 0x8003DF70u: goto label_8003DF70;
    case 0x8003DF74u: goto label_8003DF74;
    case 0x8003DF78u: goto label_8003DF78;
    case 0x8003DF7Cu: goto label_8003DF7C;
    case 0x8003DF80u: goto label_8003DF80;
    case 0x8003DF84u: goto label_8003DF84;
    case 0x8003DF88u: goto label_8003DF88;
    case 0x8003DF8Cu: goto label_8003DF8C;
    case 0x8003DF90u: goto label_8003DF90;
    case 0x8003DF94u: goto label_8003DF94;
    case 0x8003DF98u: goto label_8003DF98;
    case 0x8003DF9Cu: goto label_8003DF9C;
    case 0x8003DFA0u: goto label_8003DFA0;
    case 0x8003DFA4u: goto label_8003DFA4;
    case 0x8003DFA8u: goto label_8003DFA8;
    case 0x8003DFACu: goto label_8003DFAC;
    case 0x8003DFB0u: goto label_8003DFB0;
    case 0x8003DFB4u: goto label_8003DFB4;
    case 0x8003DFB8u: goto label_8003DFB8;
    case 0x8003DFBCu: goto label_8003DFBC;
    case 0x8003DFC0u: goto label_8003DFC0;
    case 0x8003DFC4u: goto label_8003DFC4;
    case 0x8003DFC8u: goto label_8003DFC8;
    case 0x8003DFCCu: goto label_8003DFCC;
    case 0x8003DFD0u: goto label_8003DFD0;
    case 0x8003DFD4u: goto label_8003DFD4;
    case 0x8003DFD8u: goto label_8003DFD8;
    case 0x8003DFDCu: goto label_8003DFDC;
    case 0x8003DFE0u: goto label_8003DFE0;
    case 0x8003DFE4u: goto label_8003DFE4;
    case 0x8003DFE8u: goto label_8003DFE8;
    case 0x8003DFECu: goto label_8003DFEC;
    case 0x8003DFF0u: goto label_8003DFF0;
    case 0x8003DFF4u: goto label_8003DFF4;
    case 0x8003DFF8u: goto label_8003DFF8;
    case 0x8003DFFCu: goto label_8003DFFC;
    case 0x8003E000u: goto label_8003E000;
    case 0x8003E004u: goto label_8003E004;
    case 0x8003E008u: goto label_8003E008;
    case 0x8003E00Cu: goto label_8003E00C;
    case 0x8003E010u: goto label_8003E010;
    case 0x8003E014u: goto label_8003E014;
    case 0x8003E018u: goto label_8003E018;
    case 0x8003E01Cu: goto label_8003E01C;
    case 0x8003E020u: goto label_8003E020;
    case 0x8003E024u: goto label_8003E024;
    case 0x8003E028u: goto label_8003E028;
    case 0x8003E02Cu: goto label_8003E02C;
    case 0x8003E030u: goto label_8003E030;
    case 0x8003E034u: goto label_8003E034;
    case 0x8003E038u: goto label_8003E038;
    case 0x8003E03Cu: goto label_8003E03C;
    case 0x8003E040u: goto label_8003E040;
    case 0x8003E044u: goto label_8003E044;
    case 0x8003E048u: goto label_8003E048;
    case 0x8003E04Cu: goto label_8003E04C;
    case 0x8003E050u: goto label_8003E050;
    case 0x8003E054u: goto label_8003E054;
    case 0x8003E058u: goto label_8003E058;
    case 0x8003E05Cu: goto label_8003E05C;
    case 0x8003E060u: goto label_8003E060;
    case 0x8003E064u: goto label_8003E064;
    case 0x8003E068u: goto label_8003E068;
    case 0x8003E06Cu: goto label_8003E06C;
    case 0x8003E070u: goto label_8003E070;
    case 0x8003E074u: goto label_8003E074;
    case 0x8003E078u: goto label_8003E078;
    case 0x8003E07Cu: goto label_8003E07C;
    case 0x8003E080u: goto label_8003E080;
    case 0x8003E084u: goto label_8003E084;
    case 0x8003E088u: goto label_8003E088;
    case 0x8003E08Cu: goto label_8003E08C;
    case 0x8003E090u: goto label_8003E090;
    case 0x8003E094u: goto label_8003E094;
    case 0x8003E098u: goto label_8003E098;
    case 0x8003E09Cu: goto label_8003E09C;
    case 0x8003E0A0u: goto label_8003E0A0;
    case 0x8003E0A4u: goto label_8003E0A4;
    case 0x8003E0A8u: goto label_8003E0A8;
    case 0x8003E0ACu: goto label_8003E0AC;
    case 0x8003E0B0u: goto label_8003E0B0;
    case 0x8003E0B4u: goto label_8003E0B4;
    case 0x8003E0B8u: goto label_8003E0B8;
    case 0x8003E0BCu: goto label_8003E0BC;
    case 0x8003E0C0u: goto label_8003E0C0;
    case 0x8003E0C4u: goto label_8003E0C4;
    case 0x8003E0C8u: goto label_8003E0C8;
    case 0x8003E0CCu: goto label_8003E0CC;
    case 0x8003E0D0u: goto label_8003E0D0;
    case 0x8003E0D4u: goto label_8003E0D4;
    case 0x8003E0D8u: goto label_8003E0D8;
    case 0x8003E0DCu: goto label_8003E0DC;
    case 0x8003E0E0u: goto label_8003E0E0;
    case 0x8003E0E4u: goto label_8003E0E4;
    case 0x8003E0E8u: goto label_8003E0E8;
    case 0x8003E0ECu: goto label_8003E0EC;
    case 0x8003E0F0u: goto label_8003E0F0;
    case 0x8003E0F4u: goto label_8003E0F4;
    case 0x8003E0F8u: goto label_8003E0F8;
    case 0x8003E0FCu: goto label_8003E0FC;
    case 0x8003E100u: goto label_8003E100;
    case 0x8003E104u: goto label_8003E104;
    case 0x8003E108u: goto label_8003E108;
    case 0x8003E10Cu: goto label_8003E10C;
    case 0x8003E110u: goto label_8003E110;
    case 0x8003E114u: goto label_8003E114;
    case 0x8003E118u: goto label_8003E118;
    case 0x8003E11Cu: goto label_8003E11C;
    case 0x8003E120u: goto label_8003E120;
    case 0x8003E124u: goto label_8003E124;
    case 0x8003E128u: goto label_8003E128;
    case 0x8003E12Cu: goto label_8003E12C;
    case 0x8003E130u: goto label_8003E130;
    case 0x8003E134u: goto label_8003E134;
    case 0x8003E138u: goto label_8003E138;
    case 0x8003E13Cu: goto label_8003E13C;
    case 0x8003E140u: goto label_8003E140;
    case 0x8003E144u: goto label_8003E144;
    case 0x8003E148u: goto label_8003E148;
    case 0x8003E14Cu: goto label_8003E14C;
    case 0x8003E150u: goto label_8003E150;
    case 0x8003E154u: goto label_8003E154;
    case 0x8003E158u: goto label_8003E158;
    case 0x8003E15Cu: goto label_8003E15C;
    case 0x8003E160u: goto label_8003E160;
    case 0x8003E164u: goto label_8003E164;
    case 0x8003E168u: goto label_8003E168;
    case 0x8003E16Cu: goto label_8003E16C;
    case 0x8003E170u: goto label_8003E170;
    case 0x8003E174u: goto label_8003E174;
    case 0x8003E178u: goto label_8003E178;
    case 0x8003E17Cu: goto label_8003E17C;
    case 0x8003E180u: goto label_8003E180;
    case 0x8003E184u: goto label_8003E184;
    case 0x8003E188u: goto label_8003E188;
    case 0x8003E18Cu: goto label_8003E18C;
    case 0x8003E190u: goto label_8003E190;
    case 0x8003E194u: goto label_8003E194;
    case 0x8003E198u: goto label_8003E198;
    case 0x8003E19Cu: goto label_8003E19C;
    case 0x8003E1A0u: goto label_8003E1A0;
    case 0x8003E1A4u: goto label_8003E1A4;
    case 0x8003E1A8u: goto label_8003E1A8;
    case 0x8003E1ACu: goto label_8003E1AC;
    case 0x8003E1B0u: goto label_8003E1B0;
    case 0x8003E1B4u: goto label_8003E1B4;
    case 0x8003E1B8u: goto label_8003E1B8;
    case 0x8003E1BCu: goto label_8003E1BC;
    case 0x8003E1C0u: goto label_8003E1C0;
    case 0x8003E1C4u: goto label_8003E1C4;
    case 0x8003E1C8u: goto label_8003E1C8;
    case 0x8003E1CCu: goto label_8003E1CC;
    case 0x8003E1D0u: goto label_8003E1D0;
    case 0x8003E1D4u: goto label_8003E1D4;
    case 0x8003E1D8u: goto label_8003E1D8;
    case 0x8003E1DCu: goto label_8003E1DC;
    case 0x8003E1E0u: goto label_8003E1E0;
    case 0x8003E1E4u: goto label_8003E1E4;
    case 0x8003E1E8u: goto label_8003E1E8;
    case 0x8003E1ECu: goto label_8003E1EC;
    case 0x8003E1F0u: goto label_8003E1F0;
    case 0x8003E1F4u: goto label_8003E1F4;
    case 0x8003E1F8u: goto label_8003E1F8;
    case 0x8003E1FCu: goto label_8003E1FC;
    case 0x8003E200u: goto label_8003E200;
    case 0x8003E204u: goto label_8003E204;
    case 0x8003E208u: goto label_8003E208;
    case 0x8003E20Cu: goto label_8003E20C;
    case 0x8003E210u: goto label_8003E210;
    case 0x8003E214u: goto label_8003E214;
    case 0x8003E218u: goto label_8003E218;
    case 0x8003E21Cu: goto label_8003E21C;
    case 0x8003E220u: goto label_8003E220;
    case 0x8003E224u: goto label_8003E224;
    case 0x8003E228u: goto label_8003E228;
    case 0x8003E22Cu: goto label_8003E22C;
    case 0x8003E230u: goto label_8003E230;
    case 0x8003E234u: goto label_8003E234;
    case 0x8003E238u: goto label_8003E238;
    case 0x8003E23Cu: goto label_8003E23C;
    case 0x8003E240u: goto label_8003E240;
    case 0x8003E244u: goto label_8003E244;
    case 0x8003E248u: goto label_8003E248;
    case 0x8003E24Cu: goto label_8003E24C;
    case 0x8003E250u: goto label_8003E250;
    case 0x8003E254u: goto label_8003E254;
    case 0x8003E258u: goto label_8003E258;
    case 0x8003E25Cu: goto label_8003E25C;
    case 0x8003E260u: goto label_8003E260;
    case 0x8003E264u: goto label_8003E264;
    case 0x8003E268u: goto label_8003E268;
    case 0x8003E26Cu: goto label_8003E26C;
    case 0x8003E270u: goto label_8003E270;
    case 0x8003E274u: goto label_8003E274;
    case 0x8003E278u: goto label_8003E278;
    case 0x8003E27Cu: goto label_8003E27C;
    case 0x8003E280u: goto label_8003E280;
    case 0x8003E284u: goto label_8003E284;
    case 0x8003E288u: goto label_8003E288;
    case 0x8003E28Cu: goto label_8003E28C;
    case 0x8003E290u: goto label_8003E290;
    case 0x8003E294u: goto label_8003E294;
    case 0x8003E298u: goto label_8003E298;
    case 0x8003E29Cu: goto label_8003E29C;
    case 0x8003E2A0u: goto label_8003E2A0;
    case 0x8003E2A4u: goto label_8003E2A4;
    case 0x8003E2A8u: goto label_8003E2A8;
    case 0x8003E2ACu: goto label_8003E2AC;
    case 0x8003E2B0u: goto label_8003E2B0;
    case 0x8003E2B4u: goto label_8003E2B4;
    case 0x8003E2B8u: goto label_8003E2B8;
    case 0x8003E2BCu: goto label_8003E2BC;
    case 0x8003E2C0u: goto label_8003E2C0;
    case 0x8003E2C4u: goto label_8003E2C4;
    case 0x8003E2C8u: goto label_8003E2C8;
    case 0x8003E2CCu: goto label_8003E2CC;
    case 0x8003E2D0u: goto label_8003E2D0;
    case 0x8003E2D4u: goto label_8003E2D4;
    case 0x8003E2D8u: goto label_8003E2D8;
    case 0x8003E2DCu: goto label_8003E2DC;
    case 0x8003E2E0u: goto label_8003E2E0;
    case 0x8003E2E4u: goto label_8003E2E4;
    case 0x8003E2E8u: goto label_8003E2E8;
    case 0x8003E2ECu: goto label_8003E2EC;
    case 0x8003E2F0u: goto label_8003E2F0;
    case 0x8003E2F4u: goto label_8003E2F4;
    case 0x8003E2F8u: goto label_8003E2F8;
    case 0x8003E2FCu: goto label_8003E2FC;
    case 0x8003E300u: goto label_8003E300;
    case 0x8003E304u: goto label_8003E304;
    case 0x8003E308u: goto label_8003E308;
    case 0x8003E30Cu: goto label_8003E30C;
    case 0x8003E310u: goto label_8003E310;
    case 0x8003E314u: goto label_8003E314;
    case 0x8003E318u: goto label_8003E318;
    case 0x8003E31Cu: goto label_8003E31C;
    case 0x8003E320u: goto label_8003E320;
    case 0x8003E324u: goto label_8003E324;
    case 0x8003E328u: goto label_8003E328;
    case 0x8003E32Cu: goto label_8003E32C;
    case 0x8003E330u: goto label_8003E330;
    case 0x8003E334u: goto label_8003E334;
    case 0x8003E338u: goto label_8003E338;
    case 0x8003E33Cu: goto label_8003E33C;
    case 0x8003E340u: goto label_8003E340;
    case 0x8003E344u: goto label_8003E344;
    case 0x8003E348u: goto label_8003E348;
    case 0x8003E34Cu: goto label_8003E34C;
    case 0x8003E350u: goto label_8003E350;
    case 0x8003E354u: goto label_8003E354;
    case 0x8003E358u: goto label_8003E358;
    case 0x8003E35Cu: goto label_8003E35C;
    case 0x8003E360u: goto label_8003E360;
    case 0x8003E364u: goto label_8003E364;
    case 0x8003E368u: goto label_8003E368;
    case 0x8003E36Cu: goto label_8003E36C;
    case 0x8003E370u: goto label_8003E370;
    case 0x8003E374u: goto label_8003E374;
    case 0x8003E378u: goto label_8003E378;
    case 0x8003E37Cu: goto label_8003E37C;
    case 0x8003E380u: goto label_8003E380;
    case 0x8003E384u: goto label_8003E384;
    case 0x8003E388u: goto label_8003E388;
    case 0x8003E38Cu: goto label_8003E38C;
    case 0x8003E390u: goto label_8003E390;
    case 0x8003E394u: goto label_8003E394;
    case 0x8003E398u: goto label_8003E398;
    case 0x8003E39Cu: goto label_8003E39C;
    case 0x8003E3A0u: goto label_8003E3A0;
    case 0x8003E3A4u: goto label_8003E3A4;
    case 0x8003E3A8u: goto label_8003E3A8;
    case 0x8003E3ACu: goto label_8003E3AC;
    case 0x8003E3B0u: goto label_8003E3B0;
    case 0x8003E3B4u: goto label_8003E3B4;
    case 0x8003E3B8u: goto label_8003E3B8;
    case 0x8003E3BCu: goto label_8003E3BC;
    case 0x8003E3C0u: goto label_8003E3C0;
    case 0x8003E3C4u: goto label_8003E3C4;
    case 0x8003E3C8u: goto label_8003E3C8;
    case 0x8003E3CCu: goto label_8003E3CC;
    case 0x8003E3D0u: goto label_8003E3D0;
    case 0x8003E3D4u: goto label_8003E3D4;
    case 0x8003E3D8u: goto label_8003E3D8;
    case 0x8003E3DCu: goto label_8003E3DC;
    case 0x8003E3E0u: goto label_8003E3E0;
    case 0x8003E3E4u: goto label_8003E3E4;
    case 0x8003E3E8u: goto label_8003E3E8;
    case 0x8003E3ECu: goto label_8003E3EC;
    case 0x8003E3F0u: goto label_8003E3F0;
    case 0x8003E3F4u: goto label_8003E3F4;
    case 0x8003E3F8u: goto label_8003E3F8;
    case 0x8003E3FCu: goto label_8003E3FC;
    case 0x8003E400u: goto label_8003E400;
    case 0x8003E404u: goto label_8003E404;
    case 0x8003E408u: goto label_8003E408;
    case 0x8003E40Cu: goto label_8003E40C;
    case 0x8003E410u: goto label_8003E410;
    case 0x8003E414u: goto label_8003E414;
    case 0x8003E418u: goto label_8003E418;
    case 0x8003E41Cu: goto label_8003E41C;
    case 0x8003E420u: goto label_8003E420;
    case 0x8003E424u: goto label_8003E424;
    case 0x8003E428u: goto label_8003E428;
    case 0x8003E42Cu: goto label_8003E42C;
    case 0x8003E430u: goto label_8003E430;
    case 0x8003E434u: goto label_8003E434;
    case 0x8003E438u: goto label_8003E438;
    case 0x8003E43Cu: goto label_8003E43C;
    case 0x8003E440u: goto label_8003E440;
    case 0x8003E444u: goto label_8003E444;
    case 0x8003E448u: goto label_8003E448;
    case 0x8003E44Cu: goto label_8003E44C;
    case 0x8003E450u: goto label_8003E450;
    case 0x8003E454u: goto label_8003E454;
    case 0x8003E458u: goto label_8003E458;
    case 0x8003E45Cu: goto label_8003E45C;
    case 0x8003E460u: goto label_8003E460;
    case 0x8003E464u: goto label_8003E464;
    case 0x8003E468u: goto label_8003E468;
    case 0x8003E46Cu: goto label_8003E46C;
    case 0x8003E470u: goto label_8003E470;
    case 0x8003E474u: goto label_8003E474;
    case 0x8003E478u: goto label_8003E478;
    case 0x8003E47Cu: goto label_8003E47C;
    case 0x8003E480u: goto label_8003E480;
    case 0x8003E484u: goto label_8003E484;
    case 0x8003E488u: goto label_8003E488;
    case 0x8003E48Cu: goto label_8003E48C;
    case 0x8003E490u: goto label_8003E490;
    case 0x8003E494u: goto label_8003E494;
    case 0x8003E498u: goto label_8003E498;
    case 0x8003E49Cu: goto label_8003E49C;
    case 0x8003E4A0u: goto label_8003E4A0;
    case 0x8003E4A4u: goto label_8003E4A4;
    case 0x8003E4A8u: goto label_8003E4A8;
    case 0x8003E4ACu: goto label_8003E4AC;
    case 0x8003E4B0u: goto label_8003E4B0;
    case 0x8003E4B4u: goto label_8003E4B4;
    case 0x8003E4B8u: goto label_8003E4B8;
    case 0x8003E4BCu: goto label_8003E4BC;
    case 0x8003E4C0u: goto label_8003E4C0;
    case 0x8003E4C4u: goto label_8003E4C4;
    case 0x8003E4C8u: goto label_8003E4C8;
    case 0x8003E4CCu: goto label_8003E4CC;
    case 0x8003E4D0u: goto label_8003E4D0;
    case 0x8003E4D4u: goto label_8003E4D4;
    case 0x8003E4D8u: goto label_8003E4D8;
    case 0x8003E4DCu: goto label_8003E4DC;
    case 0x8003E4E0u: goto label_8003E4E0;
    case 0x8003E4E4u: goto label_8003E4E4;
    case 0x8003E4E8u: goto label_8003E4E8;
    case 0x8003E4ECu: goto label_8003E4EC;
    case 0x8003E4F0u: goto label_8003E4F0;
    case 0x8003E4F4u: goto label_8003E4F4;
    case 0x8003E4F8u: goto label_8003E4F8;
    case 0x8003E4FCu: goto label_8003E4FC;
    case 0x8003E500u: goto label_8003E500;
    case 0x8003E504u: goto label_8003E504;
    case 0x8003E508u: goto label_8003E508;
    case 0x8003E50Cu: goto label_8003E50C;
    case 0x8003E510u: goto label_8003E510;
    case 0x8003E514u: goto label_8003E514;
    case 0x8003E518u: goto label_8003E518;
    case 0x8003E51Cu: goto label_8003E51C;
    case 0x8003E520u: goto label_8003E520;
    case 0x8003E524u: goto label_8003E524;
    case 0x8003E528u: goto label_8003E528;
    case 0x8003E52Cu: goto label_8003E52C;
    case 0x8003E530u: goto label_8003E530;
    case 0x8003E534u: goto label_8003E534;
    case 0x8003E538u: goto label_8003E538;
    case 0x8003E53Cu: goto label_8003E53C;
    case 0x8003E540u: goto label_8003E540;
    case 0x8003E544u: goto label_8003E544;
    case 0x8003E548u: goto label_8003E548;
    case 0x8003E54Cu: goto label_8003E54C;
    case 0x8003E550u: goto label_8003E550;
    case 0x8003E554u: goto label_8003E554;
    case 0x8003E558u: goto label_8003E558;
    case 0x8003E55Cu: goto label_8003E55C;
    case 0x8003E560u: goto label_8003E560;
    case 0x8003E564u: goto label_8003E564;
    case 0x8003E568u: goto label_8003E568;
    case 0x8003E56Cu: goto label_8003E56C;
    case 0x8003E570u: goto label_8003E570;
    case 0x8003E574u: goto label_8003E574;
    case 0x8003E578u: goto label_8003E578;
    case 0x8003E57Cu: goto label_8003E57C;
    case 0x8003E580u: goto label_8003E580;
    case 0x8003E584u: goto label_8003E584;
    case 0x8003E588u: goto label_8003E588;
    case 0x8003E58Cu: goto label_8003E58C;
    case 0x8003E590u: goto label_8003E590;
    case 0x8003E594u: goto label_8003E594;
    case 0x8003E598u: goto label_8003E598;
    case 0x8003E59Cu: goto label_8003E59C;
    case 0x8003E5A0u: goto label_8003E5A0;
    case 0x8003E5A4u: goto label_8003E5A4;
    case 0x8003E5A8u: goto label_8003E5A8;
    case 0x8003E5ACu: goto label_8003E5AC;
    case 0x8003E5B0u: goto label_8003E5B0;
    case 0x8003E5B4u: goto label_8003E5B4;
    case 0x8003E5B8u: goto label_8003E5B8;
    case 0x8003E5BCu: goto label_8003E5BC;
    case 0x8003E5C0u: goto label_8003E5C0;
    case 0x8003E5C4u: goto label_8003E5C4;
    case 0x8003E5C8u: goto label_8003E5C8;
    case 0x8003E5CCu: goto label_8003E5CC;
    case 0x8003E5D0u: goto label_8003E5D0;
    case 0x8003E5D4u: goto label_8003E5D4;
    case 0x8003E5D8u: goto label_8003E5D8;
    case 0x8003E5DCu: goto label_8003E5DC;
    case 0x8003E5E0u: goto label_8003E5E0;
    case 0x8003E5E4u: goto label_8003E5E4;
    case 0x8003E5E8u: goto label_8003E5E8;
    case 0x8003E5ECu: goto label_8003E5EC;
    case 0x8003E5F0u: goto label_8003E5F0;
    case 0x8003E5F4u: goto label_8003E5F4;
    case 0x8003E5F8u: goto label_8003E5F8;
    case 0x8003E5FCu: goto label_8003E5FC;
    case 0x8003E600u: goto label_8003E600;
    case 0x8003E604u: goto label_8003E604;
    case 0x8003E608u: goto label_8003E608;
    case 0x8003E60Cu: goto label_8003E60C;
    case 0x8003E610u: goto label_8003E610;
    case 0x8003E614u: goto label_8003E614;
    case 0x8003E618u: goto label_8003E618;
    case 0x8003E61Cu: goto label_8003E61C;
    case 0x8003E620u: goto label_8003E620;
    case 0x8003E624u: goto label_8003E624;
    case 0x8003E628u: goto label_8003E628;
    case 0x8003E62Cu: goto label_8003E62C;
    case 0x8003E630u: goto label_8003E630;
    case 0x8003E634u: goto label_8003E634;
    case 0x8003E638u: goto label_8003E638;
    case 0x8003E63Cu: goto label_8003E63C;
    case 0x8003E640u: goto label_8003E640;
    case 0x8003E644u: goto label_8003E644;
    case 0x8003E648u: goto label_8003E648;
    case 0x8003E64Cu: goto label_8003E64C;
    case 0x8003E650u: goto label_8003E650;
    case 0x8003E654u: goto label_8003E654;
    case 0x8003E658u: goto label_8003E658;
    case 0x8003E65Cu: goto label_8003E65C;
    case 0x8003E660u: goto label_8003E660;
    case 0x8003E664u: goto label_8003E664;
    case 0x8003E668u: goto label_8003E668;
    case 0x8003E66Cu: goto label_8003E66C;
    case 0x8003E670u: goto label_8003E670;
    case 0x8003E674u: goto label_8003E674;
    case 0x8003E678u: goto label_8003E678;
    case 0x8003E67Cu: goto label_8003E67C;
    case 0x8003E680u: goto label_8003E680;
    case 0x8003E684u: goto label_8003E684;
    case 0x8003E688u: goto label_8003E688;
    case 0x8003E68Cu: goto label_8003E68C;
    case 0x8003E690u: goto label_8003E690;
    case 0x8003E694u: goto label_8003E694;
    case 0x8003E698u: goto label_8003E698;
    case 0x8003E69Cu: goto label_8003E69C;
    case 0x8003E6A0u: goto label_8003E6A0;
    case 0x8003E6A4u: goto label_8003E6A4;
    case 0x8003E6A8u: goto label_8003E6A8;
    case 0x8003E6ACu: goto label_8003E6AC;
    case 0x8003E6B0u: goto label_8003E6B0;
    case 0x8003E6B4u: goto label_8003E6B4;
    case 0x8003E6B8u: goto label_8003E6B8;
    case 0x8003E6BCu: goto label_8003E6BC;
    case 0x8003E6C0u: goto label_8003E6C0;
    case 0x8003E6C4u: goto label_8003E6C4;
    case 0x8003E6C8u: goto label_8003E6C8;
    case 0x8003E6CCu: goto label_8003E6CC;
    case 0x8003E6D0u: goto label_8003E6D0;
    case 0x8003E6D4u: goto label_8003E6D4;
    case 0x8003E6D8u: goto label_8003E6D8;
    case 0x8003E6DCu: goto label_8003E6DC;
    case 0x8003E6E0u: goto label_8003E6E0;
    case 0x8003E6E4u: goto label_8003E6E4;
    case 0x8003E6E8u: goto label_8003E6E8;
    case 0x8003E6ECu: goto label_8003E6EC;
    case 0x8003E6F0u: goto label_8003E6F0;
    case 0x8003E6F4u: goto label_8003E6F4;
    case 0x8003E6F8u: goto label_8003E6F8;
    case 0x8003E6FCu: goto label_8003E6FC;
    case 0x8003E700u: goto label_8003E700;
    case 0x8003E704u: goto label_8003E704;
    case 0x8003E708u: goto label_8003E708;
    case 0x8003E70Cu: goto label_8003E70C;
    case 0x8003E710u: goto label_8003E710;
    case 0x8003E714u: goto label_8003E714;
    case 0x8003E718u: goto label_8003E718;
    case 0x8003E71Cu: goto label_8003E71C;
    case 0x8003E720u: goto label_8003E720;
    case 0x8003E724u: goto label_8003E724;
    case 0x8003E728u: goto label_8003E728;
    case 0x8003E72Cu: goto label_8003E72C;
    case 0x8003E730u: goto label_8003E730;
    case 0x8003E734u: goto label_8003E734;
    case 0x8003E738u: goto label_8003E738;
    case 0x8003E73Cu: goto label_8003E73C;
    case 0x8003E740u: goto label_8003E740;
    case 0x8003E744u: goto label_8003E744;
    case 0x8003E748u: goto label_8003E748;
    case 0x8003E74Cu: goto label_8003E74C;
    case 0x8003E750u: goto label_8003E750;
    case 0x8003E754u: goto label_8003E754;
    case 0x8003E758u: goto label_8003E758;
    case 0x8003E75Cu: goto label_8003E75C;
    case 0x8003E760u: goto label_8003E760;
    case 0x8003E764u: goto label_8003E764;
    case 0x8003E768u: goto label_8003E768;
    case 0x8003E76Cu: goto label_8003E76C;
    case 0x8003E770u: goto label_8003E770;
    case 0x8003E774u: goto label_8003E774;
    case 0x8003E778u: goto label_8003E778;
    case 0x8003E77Cu: goto label_8003E77C;
    case 0x8003E780u: goto label_8003E780;
    case 0x8003E784u: goto label_8003E784;
    case 0x8003E788u: goto label_8003E788;
    case 0x8003E78Cu: goto label_8003E78C;
    case 0x8003E790u: goto label_8003E790;
    case 0x8003E794u: goto label_8003E794;
    case 0x8003E798u: goto label_8003E798;
    case 0x8003E79Cu: goto label_8003E79C;
    case 0x8003E7A0u: goto label_8003E7A0;
    case 0x8003E7A4u: goto label_8003E7A4;
    case 0x8003E7A8u: goto label_8003E7A8;
    case 0x8003E7ACu: goto label_8003E7AC;
    case 0x8003E7B0u: goto label_8003E7B0;
    case 0x8003E7B4u: goto label_8003E7B4;
    case 0x8003E7B8u: goto label_8003E7B8;
    case 0x8003E7BCu: goto label_8003E7BC;
    case 0x8003E7C0u: goto label_8003E7C0;
    case 0x8003E7C4u: goto label_8003E7C4;
    case 0x8003E7C8u: goto label_8003E7C8;
    case 0x8003E7CCu: goto label_8003E7CC;
    case 0x8003E7D0u: goto label_8003E7D0;
    case 0x8003E7D4u: goto label_8003E7D4;
    case 0x8003E7D8u: goto label_8003E7D8;
    case 0x8003E7DCu: goto label_8003E7DC;
    case 0x8003E7E0u: goto label_8003E7E0;
    case 0x8003E7E4u: goto label_8003E7E4;
    case 0x8003E7E8u: goto label_8003E7E8;
    case 0x8003E7ECu: goto label_8003E7EC;
    case 0x8003E7F0u: goto label_8003E7F0;
    case 0x8003E7F4u: goto label_8003E7F4;
    case 0x8003E7F8u: goto label_8003E7F8;
    case 0x8003E7FCu: goto label_8003E7FC;
    case 0x8003E800u: goto label_8003E800;
    case 0x8003E804u: goto label_8003E804;
    case 0x8003E808u: goto label_8003E808;
    case 0x8003E80Cu: goto label_8003E80C;
    case 0x8003E810u: goto label_8003E810;
    case 0x8003E814u: goto label_8003E814;
    case 0x8003E818u: goto label_8003E818;
    case 0x8003E81Cu: goto label_8003E81C;
    case 0x8003E820u: goto label_8003E820;
    case 0x8003E824u: goto label_8003E824;
    case 0x8003E828u: goto label_8003E828;
    case 0x8003E82Cu: goto label_8003E82C;
    case 0x8003E830u: goto label_8003E830;
    case 0x8003E834u: goto label_8003E834;
    case 0x8003E838u: goto label_8003E838;
    case 0x8003E83Cu: goto label_8003E83C;
    case 0x8003E840u: goto label_8003E840;
    case 0x8003E844u: goto label_8003E844;
    case 0x8003E848u: goto label_8003E848;
    case 0x8003E84Cu: goto label_8003E84C;
    case 0x8003E850u: goto label_8003E850;
    case 0x8003E854u: goto label_8003E854;
    case 0x8003E858u: goto label_8003E858;
    case 0x8003E85Cu: goto label_8003E85C;
    case 0x8003E860u: goto label_8003E860;
    case 0x8003E864u: goto label_8003E864;
    case 0x8003E868u: goto label_8003E868;
    case 0x8003E86Cu: goto label_8003E86C;
    case 0x8003E870u: goto label_8003E870;
    case 0x8003E874u: goto label_8003E874;
    case 0x8003E878u: goto label_8003E878;
    case 0x8003E87Cu: goto label_8003E87C;
    case 0x8003E880u: goto label_8003E880;
    case 0x8003E884u: goto label_8003E884;
    case 0x8003E888u: goto label_8003E888;
    case 0x8003E88Cu: goto label_8003E88C;
    case 0x8003E890u: goto label_8003E890;
    case 0x8003E894u: goto label_8003E894;
    case 0x8003E898u: goto label_8003E898;
    case 0x8003E89Cu: goto label_8003E89C;
    case 0x8003E8A0u: goto label_8003E8A0;
    case 0x8003E8A4u: goto label_8003E8A4;
    case 0x8003E8A8u: goto label_8003E8A8;
    case 0x8003E8ACu: goto label_8003E8AC;
    case 0x8003E8B0u: goto label_8003E8B0;
    case 0x8003E8B4u: goto label_8003E8B4;
    case 0x8003E8B8u: goto label_8003E8B8;
    case 0x8003E8BCu: goto label_8003E8BC;
    case 0x8003E8C0u: goto label_8003E8C0;
    case 0x8003E8C4u: goto label_8003E8C4;
    case 0x8003E8C8u: goto label_8003E8C8;
    case 0x8003E8CCu: goto label_8003E8CC;
    case 0x8003E8D0u: goto label_8003E8D0;
    case 0x8003E8D4u: goto label_8003E8D4;
    case 0x8003E8D8u: goto label_8003E8D8;
    case 0x8003E8DCu: goto label_8003E8DC;
    case 0x8003E8E0u: goto label_8003E8E0;
    case 0x8003E8E4u: goto label_8003E8E4;
    case 0x8003E8E8u: goto label_8003E8E8;
    case 0x8003E8ECu: goto label_8003E8EC;
    case 0x8003E8F0u: goto label_8003E8F0;
    case 0x8003E8F4u: goto label_8003E8F4;
    case 0x8003E8F8u: goto label_8003E8F8;
    case 0x8003E8FCu: goto label_8003E8FC;
    case 0x8003E900u: goto label_8003E900;
    case 0x8003E904u: goto label_8003E904;
    case 0x8003E908u: goto label_8003E908;
    case 0x8003E90Cu: goto label_8003E90C;
    case 0x8003E910u: goto label_8003E910;
    case 0x8003E914u: goto label_8003E914;
    case 0x8003E918u: goto label_8003E918;
    case 0x8003E91Cu: goto label_8003E91C;
    case 0x8003E920u: goto label_8003E920;
    case 0x8003E924u: goto label_8003E924;
    case 0x8003E928u: goto label_8003E928;
    case 0x8003E92Cu: goto label_8003E92C;
    case 0x8003E930u: goto label_8003E930;
    case 0x8003E934u: goto label_8003E934;
    case 0x8003E938u: goto label_8003E938;
    case 0x8003E93Cu: goto label_8003E93C;
    case 0x8003E940u: goto label_8003E940;
    case 0x8003E944u: goto label_8003E944;
    case 0x8003E948u: goto label_8003E948;
    case 0x8003E94Cu: goto label_8003E94C;
    case 0x8003E950u: goto label_8003E950;
    case 0x8003E954u: goto label_8003E954;
    case 0x8003E958u: goto label_8003E958;
    case 0x8003E95Cu: goto label_8003E95C;
    case 0x8003E960u: goto label_8003E960;
    case 0x8003E964u: goto label_8003E964;
    case 0x8003E968u: goto label_8003E968;
    case 0x8003E96Cu: goto label_8003E96C;
    case 0x8003E970u: goto label_8003E970;
    case 0x8003E974u: goto label_8003E974;
    case 0x8003E978u: goto label_8003E978;
    case 0x8003E97Cu: goto label_8003E97C;
    case 0x8003E980u: goto label_8003E980;
    case 0x8003E984u: goto label_8003E984;
    case 0x8003E988u: goto label_8003E988;
    case 0x8003E98Cu: goto label_8003E98C;
    case 0x8003E990u: goto label_8003E990;
    case 0x8003E994u: goto label_8003E994;
    case 0x8003E998u: goto label_8003E998;
    case 0x8003E99Cu: goto label_8003E99C;
    case 0x8003E9A0u: goto label_8003E9A0;
    case 0x8003E9A4u: goto label_8003E9A4;
    case 0x8003E9A8u: goto label_8003E9A8;
    case 0x8003E9ACu: goto label_8003E9AC;
    case 0x8003E9B0u: goto label_8003E9B0;
    case 0x8003E9B4u: goto label_8003E9B4;
    case 0x8003E9B8u: goto label_8003E9B8;
    case 0x8003E9BCu: goto label_8003E9BC;
    case 0x8003E9C0u: goto label_8003E9C0;
    case 0x8003E9C4u: goto label_8003E9C4;
    case 0x8003E9C8u: goto label_8003E9C8;
    case 0x8003E9CCu: goto label_8003E9CC;
    case 0x8003E9D0u: goto label_8003E9D0;
    case 0x8003E9D4u: goto label_8003E9D4;
    case 0x8003E9D8u: goto label_8003E9D8;
    case 0x8003E9DCu: goto label_8003E9DC;
    case 0x8003E9E0u: goto label_8003E9E0;
    case 0x8003E9E4u: goto label_8003E9E4;
    case 0x8003E9E8u: goto label_8003E9E8;
    case 0x8003E9ECu: goto label_8003E9EC;
    case 0x8003E9F0u: goto label_8003E9F0;
    case 0x8003E9F4u: goto label_8003E9F4;
    case 0x8003E9F8u: goto label_8003E9F8;
    case 0x8003E9FCu: goto label_8003E9FC;
    case 0x8003EA00u: goto label_8003EA00;
    case 0x8003EA04u: goto label_8003EA04;
    case 0x8003EA08u: goto label_8003EA08;
    case 0x8003EA0Cu: goto label_8003EA0C;
    case 0x8003EA10u: goto label_8003EA10;
    case 0x8003EA14u: goto label_8003EA14;
    case 0x8003EA18u: goto label_8003EA18;
    case 0x8003EA1Cu: goto label_8003EA1C;
    case 0x8003EA20u: goto label_8003EA20;
    case 0x8003EA24u: goto label_8003EA24;
    case 0x8003EA28u: goto label_8003EA28;
    case 0x8003EA2Cu: goto label_8003EA2C;
    case 0x8003EA30u: goto label_8003EA30;
    case 0x8003EA34u: goto label_8003EA34;
    case 0x8003EA38u: goto label_8003EA38;
    case 0x8003EA3Cu: goto label_8003EA3C;
    case 0x8003EA40u: goto label_8003EA40;
    case 0x8003EA44u: goto label_8003EA44;
    case 0x8003EA48u: goto label_8003EA48;
    case 0x8003EA4Cu: goto label_8003EA4C;
    case 0x8003EA50u: goto label_8003EA50;
    case 0x8003EA54u: goto label_8003EA54;
    case 0x8003EA58u: goto label_8003EA58;
    case 0x8003EA5Cu: goto label_8003EA5C;
    case 0x8003EA60u: goto label_8003EA60;
    case 0x8003EA64u: goto label_8003EA64;
    case 0x8003EA68u: goto label_8003EA68;
    case 0x8003EA6Cu: goto label_8003EA6C;
    case 0x8003EA70u: goto label_8003EA70;
    case 0x8003EA74u: goto label_8003EA74;
    case 0x8003EA78u: goto label_8003EA78;
    case 0x8003EA7Cu: goto label_8003EA7C;
    case 0x8003EA80u: goto label_8003EA80;
    case 0x8003EA84u: goto label_8003EA84;
    case 0x8003EA88u: goto label_8003EA88;
    case 0x8003EA8Cu: goto label_8003EA8C;
    case 0x8003EA90u: goto label_8003EA90;
    case 0x8003EA94u: goto label_8003EA94;
    case 0x8003EA98u: goto label_8003EA98;
    case 0x8003EA9Cu: goto label_8003EA9C;
    case 0x8003EAA0u: goto label_8003EAA0;
    case 0x8003EAA4u: goto label_8003EAA4;
    case 0x8003EAA8u: goto label_8003EAA8;
    case 0x8003EAACu: goto label_8003EAAC;
    case 0x8003EAB0u: goto label_8003EAB0;
    case 0x8003EAB4u: goto label_8003EAB4;
    case 0x8003EAB8u: goto label_8003EAB8;
    case 0x8003EABCu: goto label_8003EABC;
    case 0x8003EAC0u: goto label_8003EAC0;
    case 0x8003EAC4u: goto label_8003EAC4;
    case 0x8003EAC8u: goto label_8003EAC8;
    case 0x8003EACCu: goto label_8003EACC;
    case 0x8003EAD0u: goto label_8003EAD0;
    case 0x8003EAD4u: goto label_8003EAD4;
    case 0x8003EAD8u: goto label_8003EAD8;
    case 0x8003EADCu: goto label_8003EADC;
    case 0x8003EAE0u: goto label_8003EAE0;
    case 0x8003EAE4u: goto label_8003EAE4;
    case 0x8003EAE8u: goto label_8003EAE8;
    case 0x8003EAECu: goto label_8003EAEC;
    case 0x8003EAF0u: goto label_8003EAF0;
    case 0x8003EAF4u: goto label_8003EAF4;
    case 0x8003EAF8u: goto label_8003EAF8;
    case 0x8003EAFCu: goto label_8003EAFC;
    case 0x8003EB00u: goto label_8003EB00;
    case 0x8003EB04u: goto label_8003EB04;
    case 0x8003EB08u: goto label_8003EB08;
    case 0x8003EB0Cu: goto label_8003EB0C;
    case 0x8003EB10u: goto label_8003EB10;
    case 0x8003EB14u: goto label_8003EB14;
    case 0x8003EB18u: goto label_8003EB18;
    case 0x8003EB1Cu: goto label_8003EB1C;
    case 0x8003EB20u: goto label_8003EB20;
    case 0x8003EB24u: goto label_8003EB24;
    case 0x8003EB28u: goto label_8003EB28;
    case 0x8003EB2Cu: goto label_8003EB2C;
    case 0x8003EB30u: goto label_8003EB30;
    case 0x8003EB34u: goto label_8003EB34;
    case 0x8003EB38u: goto label_8003EB38;
    case 0x8003EB3Cu: goto label_8003EB3C;
    case 0x8003EB40u: goto label_8003EB40;
    case 0x8003EB44u: goto label_8003EB44;
    case 0x8003EB48u: goto label_8003EB48;
    case 0x8003EB4Cu: goto label_8003EB4C;
    case 0x8003EB50u: goto label_8003EB50;
    case 0x8003EB54u: goto label_8003EB54;
    case 0x8003EB58u: goto label_8003EB58;
    case 0x8003EB5Cu: goto label_8003EB5C;
    case 0x8003EB60u: goto label_8003EB60;
    case 0x8003EB64u: goto label_8003EB64;
    case 0x8003EB68u: goto label_8003EB68;
    case 0x8003EB6Cu: goto label_8003EB6C;
    case 0x8003EB70u: goto label_8003EB70;
    case 0x8003EB74u: goto label_8003EB74;
    case 0x8003EB78u: goto label_8003EB78;
    case 0x8003EB7Cu: goto label_8003EB7C;
    case 0x8003EB80u: goto label_8003EB80;
    case 0x8003EB84u: goto label_8003EB84;
    case 0x8003EB88u: goto label_8003EB88;
    case 0x8003EB8Cu: goto label_8003EB8C;
    case 0x8003EB90u: goto label_8003EB90;
    case 0x8003EB94u: goto label_8003EB94;
    case 0x8003EB98u: goto label_8003EB98;
    case 0x8003EB9Cu: goto label_8003EB9C;
    case 0x8003EBA0u: goto label_8003EBA0;
    case 0x8003EBA4u: goto label_8003EBA4;
    case 0x8003EBA8u: goto label_8003EBA8;
    case 0x8003EBACu: goto label_8003EBAC;
    case 0x8003EBB0u: goto label_8003EBB0;
    case 0x8003EBB4u: goto label_8003EBB4;
    case 0x8003EBB8u: goto label_8003EBB8;
    case 0x8003EBBCu: goto label_8003EBBC;
    case 0x8003EBC0u: goto label_8003EBC0;
    case 0x8003EBC4u: goto label_8003EBC4;
    case 0x8003EBC8u: goto label_8003EBC8;
    case 0x8003EBCCu: goto label_8003EBCC;
    case 0x8003EBD0u: goto label_8003EBD0;
    case 0x8003EBD4u: goto label_8003EBD4;
    case 0x8003EBD8u: goto label_8003EBD8;
    case 0x8003EBDCu: goto label_8003EBDC;
    case 0x8003EBE0u: goto label_8003EBE0;
    case 0x8003EBE4u: goto label_8003EBE4;
    case 0x8003EBE8u: goto label_8003EBE8;
    case 0x8003EBECu: goto label_8003EBEC;
    case 0x8003EBF0u: goto label_8003EBF0;
    case 0x8003EBF4u: goto label_8003EBF4;
    case 0x8003EBF8u: goto label_8003EBF8;
    case 0x8003EBFCu: goto label_8003EBFC;
    case 0x8003EC00u: goto label_8003EC00;
    case 0x8003EC04u: goto label_8003EC04;
    case 0x8003EC08u: goto label_8003EC08;
    case 0x8003EC0Cu: goto label_8003EC0C;
    case 0x8003EC10u: goto label_8003EC10;
    case 0x8003EC14u: goto label_8003EC14;
    case 0x8003EC18u: goto label_8003EC18;
    case 0x8003EC1Cu: goto label_8003EC1C;
    case 0x8003EC20u: goto label_8003EC20;
    case 0x8003EC24u: goto label_8003EC24;
    case 0x8003EC28u: goto label_8003EC28;
    case 0x8003EC2Cu: goto label_8003EC2C;
    case 0x8003EC30u: goto label_8003EC30;
    case 0x8003EC34u: goto label_8003EC34;
    case 0x8003EC38u: goto label_8003EC38;
    case 0x8003EC3Cu: goto label_8003EC3C;
    case 0x8003EC40u: goto label_8003EC40;
    case 0x8003EC44u: goto label_8003EC44;
    case 0x8003EC48u: goto label_8003EC48;
    case 0x8003EC4Cu: goto label_8003EC4C;
    case 0x8003EC50u: goto label_8003EC50;
    case 0x8003EC54u: goto label_8003EC54;
    case 0x8003EC58u: goto label_8003EC58;
    case 0x8003EC5Cu: goto label_8003EC5C;
    case 0x8003EC60u: goto label_8003EC60;
    case 0x8003EC64u: goto label_8003EC64;
    case 0x8003EC68u: goto label_8003EC68;
    case 0x8003EC6Cu: goto label_8003EC6C;
    case 0x8003EC70u: goto label_8003EC70;
    case 0x8003EC74u: goto label_8003EC74;
    case 0x8003EC78u: goto label_8003EC78;
    case 0x8003EC7Cu: goto label_8003EC7C;
    case 0x8003EC80u: goto label_8003EC80;
    case 0x8003EC84u: goto label_8003EC84;
    case 0x8003EC88u: goto label_8003EC88;
    case 0x8003EC8Cu: goto label_8003EC8C;
    case 0x8003EC90u: goto label_8003EC90;
    case 0x8003EC94u: goto label_8003EC94;
    case 0x8003EC98u: goto label_8003EC98;
    case 0x8003EC9Cu: goto label_8003EC9C;
    case 0x8003ECA0u: goto label_8003ECA0;
    case 0x8003ECA4u: goto label_8003ECA4;
    case 0x8003ECA8u: goto label_8003ECA8;
    case 0x8003ECACu: goto label_8003ECAC;
    case 0x8003ECB0u: goto label_8003ECB0;
    case 0x8003ECB4u: goto label_8003ECB4;
    case 0x8003ECB8u: goto label_8003ECB8;
    case 0x8003ECBCu: goto label_8003ECBC;
    case 0x8003ECC0u: goto label_8003ECC0;
    case 0x8003ECC4u: goto label_8003ECC4;
    case 0x8003ECC8u: goto label_8003ECC8;
    case 0x8003ECCCu: goto label_8003ECCC;
    case 0x8003ECD0u: goto label_8003ECD0;
    case 0x8003ECD4u: goto label_8003ECD4;
    case 0x8003ECD8u: goto label_8003ECD8;
    case 0x8003ECDCu: goto label_8003ECDC;
    case 0x8003ECE0u: goto label_8003ECE0;
    case 0x8003ECE4u: goto label_8003ECE4;
    case 0x8003ECE8u: goto label_8003ECE8;
    case 0x8003ECECu: goto label_8003ECEC;
    case 0x8003ECF0u: goto label_8003ECF0;
    case 0x8003ECF4u: goto label_8003ECF4;
    case 0x8003ECF8u: goto label_8003ECF8;
    case 0x8003ECFCu: goto label_8003ECFC;
    case 0x8003ED00u: goto label_8003ED00;
    case 0x8003ED04u: goto label_8003ED04;
    case 0x8003ED08u: goto label_8003ED08;
    case 0x8003ED0Cu: goto label_8003ED0C;
    case 0x8003ED10u: goto label_8003ED10;
    case 0x8003ED14u: goto label_8003ED14;
    case 0x8003ED18u: goto label_8003ED18;
    case 0x8003ED1Cu: goto label_8003ED1C;
    case 0x8003ED20u: goto label_8003ED20;
    case 0x8003ED24u: goto label_8003ED24;
    case 0x8003ED28u: goto label_8003ED28;
    case 0x8003ED2Cu: goto label_8003ED2C;
    case 0x8003ED30u: goto label_8003ED30;
    case 0x8003ED34u: goto label_8003ED34;
    case 0x8003ED38u: goto label_8003ED38;
    case 0x8003ED3Cu: goto label_8003ED3C;
    case 0x8003ED40u: goto label_8003ED40;
    case 0x8003ED44u: goto label_8003ED44;
    case 0x8003ED48u: goto label_8003ED48;
    case 0x8003ED4Cu: goto label_8003ED4C;
    case 0x8003ED50u: goto label_8003ED50;
    case 0x8003ED54u: goto label_8003ED54;
    case 0x8003ED58u: goto label_8003ED58;
    case 0x8003ED5Cu: goto label_8003ED5C;
    case 0x8003ED60u: goto label_8003ED60;
    case 0x8003ED64u: goto label_8003ED64;
    case 0x8003ED68u: goto label_8003ED68;
    case 0x8003ED6Cu: goto label_8003ED6C;
    case 0x8003ED70u: goto label_8003ED70;
    case 0x8003ED74u: goto label_8003ED74;
    case 0x8003ED78u: goto label_8003ED78;
    case 0x8003ED7Cu: goto label_8003ED7C;
    case 0x8003ED80u: goto label_8003ED80;
    case 0x8003ED84u: goto label_8003ED84;
    case 0x8003ED88u: goto label_8003ED88;
    case 0x8003ED8Cu: goto label_8003ED8C;
    case 0x8003ED90u: goto label_8003ED90;
    case 0x8003ED94u: goto label_8003ED94;
    case 0x8003ED98u: goto label_8003ED98;
    case 0x8003ED9Cu: goto label_8003ED9C;
    case 0x8003EDA0u: goto label_8003EDA0;
    case 0x8003EDA4u: goto label_8003EDA4;
    case 0x8003EDA8u: goto label_8003EDA8;
    case 0x8003EDACu: goto label_8003EDAC;
    case 0x8003EDB0u: goto label_8003EDB0;
    case 0x8003EDB4u: goto label_8003EDB4;
    case 0x8003EDB8u: goto label_8003EDB8;
    case 0x8003EDBCu: goto label_8003EDBC;
    case 0x8003EDC0u: goto label_8003EDC0;
    case 0x8003EDC4u: goto label_8003EDC4;
    case 0x8003EDC8u: goto label_8003EDC8;
    case 0x8003EDCCu: goto label_8003EDCC;
    case 0x8003EDD0u: goto label_8003EDD0;
    case 0x8003EDD4u: goto label_8003EDD4;
    case 0x8003EDD8u: goto label_8003EDD8;
    case 0x8003EDDCu: goto label_8003EDDC;
    case 0x8003EDE0u: goto label_8003EDE0;
    case 0x8003EDE4u: goto label_8003EDE4;
    case 0x8003EDE8u: goto label_8003EDE8;
    case 0x8003EDECu: goto label_8003EDEC;
    case 0x8003EDF0u: goto label_8003EDF0;
    case 0x8003EDF4u: goto label_8003EDF4;
    case 0x8003EDF8u: goto label_8003EDF8;
    case 0x8003EDFCu: goto label_8003EDFC;
    case 0x8003EE00u: goto label_8003EE00;
    case 0x8003EE04u: goto label_8003EE04;
    case 0x8003EE08u: goto label_8003EE08;
    case 0x8003EE0Cu: goto label_8003EE0C;
    case 0x8003EE10u: goto label_8003EE10;
    case 0x8003EE14u: goto label_8003EE14;
    case 0x8003EE18u: goto label_8003EE18;
    case 0x8003EE1Cu: goto label_8003EE1C;
    case 0x8003EE20u: goto label_8003EE20;
    case 0x8003EE24u: goto label_8003EE24;
    case 0x8003EE28u: goto label_8003EE28;
    case 0x8003EE2Cu: goto label_8003EE2C;
    case 0x8003EE30u: goto label_8003EE30;
    case 0x8003EE34u: goto label_8003EE34;
    case 0x8003EE38u: goto label_8003EE38;
    case 0x8003EE3Cu: goto label_8003EE3C;
    case 0x8003EE40u: goto label_8003EE40;
    case 0x8003EE44u: goto label_8003EE44;
    case 0x8003EE48u: goto label_8003EE48;
    case 0x8003EE4Cu: goto label_8003EE4C;
    case 0x8003EE50u: goto label_8003EE50;
    case 0x8003EE54u: goto label_8003EE54;
    case 0x8003EE58u: goto label_8003EE58;
    case 0x8003EE5Cu: goto label_8003EE5C;
    case 0x8003EE60u: goto label_8003EE60;
    case 0x8003EE64u: goto label_8003EE64;
    case 0x8003EE68u: goto label_8003EE68;
    case 0x8003EE6Cu: goto label_8003EE6C;
    case 0x8003EE70u: goto label_8003EE70;
    case 0x8003EE74u: goto label_8003EE74;
    case 0x8003EE78u: goto label_8003EE78;
    case 0x8003EE7Cu: goto label_8003EE7C;
    case 0x8003EE80u: goto label_8003EE80;
    case 0x8003EE84u: goto label_8003EE84;
    case 0x8003EE88u: goto label_8003EE88;
    case 0x8003EE8Cu: goto label_8003EE8C;
    case 0x8003EE90u: goto label_8003EE90;
    case 0x8003EE94u: goto label_8003EE94;
    case 0x8003EE98u: goto label_8003EE98;
    case 0x8003EE9Cu: goto label_8003EE9C;
    case 0x8003EEA0u: goto label_8003EEA0;
    case 0x8003EEA4u: goto label_8003EEA4;
    case 0x8003EEA8u: goto label_8003EEA8;
    case 0x8003EEACu: goto label_8003EEAC;
    case 0x8003EEB0u: goto label_8003EEB0;
    case 0x8003EEB4u: goto label_8003EEB4;
    case 0x8003EEB8u: goto label_8003EEB8;
    case 0x8003EEBCu: goto label_8003EEBC;
    case 0x8003EEC0u: goto label_8003EEC0;
    case 0x8003EEC4u: goto label_8003EEC4;
    case 0x8003EEC8u: goto label_8003EEC8;
    case 0x8003EECCu: goto label_8003EECC;
    case 0x8003EED0u: goto label_8003EED0;
    case 0x8003EED4u: goto label_8003EED4;
    case 0x8003EED8u: goto label_8003EED8;
    case 0x8003EEDCu: goto label_8003EEDC;
    case 0x8003EEE0u: goto label_8003EEE0;
    case 0x8003EEE4u: goto label_8003EEE4;
    case 0x8003EEE8u: goto label_8003EEE8;
    case 0x8003EEECu: goto label_8003EEEC;
    case 0x8003EEF0u: goto label_8003EEF0;
    case 0x8003EEF4u: goto label_8003EEF4;
    case 0x8003EEF8u: goto label_8003EEF8;
    case 0x8003EEFCu: goto label_8003EEFC;
    case 0x8003EF00u: goto label_8003EF00;
    case 0x8003EF04u: goto label_8003EF04;
    case 0x8003EF08u: goto label_8003EF08;
    case 0x8003EF0Cu: goto label_8003EF0C;
    case 0x8003EF10u: goto label_8003EF10;
    case 0x8003EF14u: goto label_8003EF14;
    case 0x8003EF18u: goto label_8003EF18;
    case 0x8003EF1Cu: goto label_8003EF1C;
    case 0x8003EF20u: goto label_8003EF20;
    case 0x8003EF24u: goto label_8003EF24;
    case 0x8003EF28u: goto label_8003EF28;
    case 0x8003EF2Cu: goto label_8003EF2C;
    case 0x8003EF30u: goto label_8003EF30;
    case 0x8003EF34u: goto label_8003EF34;
    case 0x8003EF38u: goto label_8003EF38;
    case 0x8003EF3Cu: goto label_8003EF3C;
    case 0x8003EF40u: goto label_8003EF40;
    case 0x8003EF44u: goto label_8003EF44;
    case 0x8003EF48u: goto label_8003EF48;
    case 0x8003EF4Cu: goto label_8003EF4C;
    case 0x8003EF50u: goto label_8003EF50;
    case 0x8003EF54u: goto label_8003EF54;
    case 0x8003EF58u: goto label_8003EF58;
    case 0x8003EF5Cu: goto label_8003EF5C;
    case 0x8003EF60u: goto label_8003EF60;
    case 0x8003EF64u: goto label_8003EF64;
    case 0x8003EF68u: goto label_8003EF68;
    case 0x8003EF6Cu: goto label_8003EF6C;
    case 0x8003EF70u: goto label_8003EF70;
    case 0x8003EF74u: goto label_8003EF74;
    case 0x8003EF78u: goto label_8003EF78;
    case 0x8003EF7Cu: goto label_8003EF7C;
    case 0x8003EF80u: goto label_8003EF80;
    case 0x8003EF84u: goto label_8003EF84;
    case 0x8003EF88u: goto label_8003EF88;
    case 0x8003EF8Cu: goto label_8003EF8C;
    case 0x8003EF90u: goto label_8003EF90;
    case 0x8003EF94u: goto label_8003EF94;
    case 0x8003EF98u: goto label_8003EF98;
    case 0x8003EF9Cu: goto label_8003EF9C;
    case 0x8003EFA0u: goto label_8003EFA0;
    case 0x8003EFA4u: goto label_8003EFA4;
    case 0x8003EFA8u: goto label_8003EFA8;
    case 0x8003EFACu: goto label_8003EFAC;
    case 0x8003EFB0u: goto label_8003EFB0;
    case 0x8003EFB4u: goto label_8003EFB4;
    case 0x8003EFB8u: goto label_8003EFB8;
    case 0x8003EFBCu: goto label_8003EFBC;
    case 0x8003EFC0u: goto label_8003EFC0;
    case 0x8003EFC4u: goto label_8003EFC4;
    case 0x8003EFC8u: goto label_8003EFC8;
    case 0x8003EFCCu: goto label_8003EFCC;
    case 0x8003EFD0u: goto label_8003EFD0;
    case 0x8003EFD4u: goto label_8003EFD4;
    case 0x8003EFD8u: goto label_8003EFD8;
    case 0x8003EFDCu: goto label_8003EFDC;
    case 0x8003EFE0u: goto label_8003EFE0;
    case 0x8003EFE4u: goto label_8003EFE4;
    case 0x8003EFE8u: goto label_8003EFE8;
    case 0x8003EFECu: goto label_8003EFEC;
    case 0x8003EFF0u: goto label_8003EFF0;
    case 0x8003EFF4u: goto label_8003EFF4;
    case 0x8003EFF8u: goto label_8003EFF8;
    case 0x8003EFFCu: goto label_8003EFFC;
    case 0x8003F000u: goto label_8003F000;
    case 0x8003F004u: goto label_8003F004;
    case 0x8003F008u: goto label_8003F008;
    case 0x8003F00Cu: goto label_8003F00C;
    case 0x8003F010u: goto label_8003F010;
    case 0x8003F014u: goto label_8003F014;
    case 0x8003F018u: goto label_8003F018;
    case 0x8003F01Cu: goto label_8003F01C;
    case 0x8003F020u: goto label_8003F020;
    case 0x8003F024u: goto label_8003F024;
    case 0x8003F028u: goto label_8003F028;
    case 0x8003F02Cu: goto label_8003F02C;
    case 0x8003F030u: goto label_8003F030;
    case 0x8003F034u: goto label_8003F034;
    case 0x8003F038u: goto label_8003F038;
    case 0x8003F03Cu: goto label_8003F03C;
    case 0x8003F040u: goto label_8003F040;
    case 0x8003F044u: goto label_8003F044;
    case 0x8003F048u: goto label_8003F048;
    case 0x8003F04Cu: goto label_8003F04C;
    case 0x8003F050u: goto label_8003F050;
    case 0x8003F054u: goto label_8003F054;
    case 0x8003F058u: goto label_8003F058;
    case 0x8003F05Cu: goto label_8003F05C;
    case 0x8003F060u: goto label_8003F060;
    case 0x8003F064u: goto label_8003F064;
    case 0x8003F068u: goto label_8003F068;
    case 0x8003F06Cu: goto label_8003F06C;
    case 0x8003F070u: goto label_8003F070;
    case 0x8003F074u: goto label_8003F074;
    case 0x8003F078u: goto label_8003F078;
    case 0x8003F07Cu: goto label_8003F07C;
    case 0x8003F080u: goto label_8003F080;
    case 0x8003F084u: goto label_8003F084;
    case 0x8003F088u: goto label_8003F088;
    case 0x8003F08Cu: goto label_8003F08C;
    case 0x8003F090u: goto label_8003F090;
    case 0x8003F094u: goto label_8003F094;
    case 0x8003F098u: goto label_8003F098;
    case 0x8003F09Cu: goto label_8003F09C;
    case 0x8003F0A0u: goto label_8003F0A0;
    case 0x8003F0A4u: goto label_8003F0A4;
    case 0x8003F0A8u: goto label_8003F0A8;
    case 0x8003F0ACu: goto label_8003F0AC;
    case 0x8003F0B0u: goto label_8003F0B0;
    case 0x8003F0B4u: goto label_8003F0B4;
    case 0x8003F0B8u: goto label_8003F0B8;
    case 0x8003F0BCu: goto label_8003F0BC;
    case 0x8003F0C0u: goto label_8003F0C0;
    case 0x8003F0C4u: goto label_8003F0C4;
    case 0x8003F0C8u: goto label_8003F0C8;
    case 0x8003F0CCu: goto label_8003F0CC;
    case 0x8003F0D0u: goto label_8003F0D0;
    case 0x8003F0D4u: goto label_8003F0D4;
    case 0x8003F0D8u: goto label_8003F0D8;
    case 0x8003F0DCu: goto label_8003F0DC;
    case 0x8003F0E0u: goto label_8003F0E0;
    case 0x8003F0E4u: goto label_8003F0E4;
    case 0x8003F0E8u: goto label_8003F0E8;
    case 0x8003F0ECu: goto label_8003F0EC;
    case 0x8003F0F0u: goto label_8003F0F0;
    case 0x8003F0F4u: goto label_8003F0F4;
    case 0x8003F0F8u: goto label_8003F0F8;
    case 0x8003F0FCu: goto label_8003F0FC;
    case 0x8003F100u: goto label_8003F100;
    case 0x8003F104u: goto label_8003F104;
    case 0x8003F108u: goto label_8003F108;
    case 0x8003F10Cu: goto label_8003F10C;
    case 0x8003F110u: goto label_8003F110;
    case 0x8003F114u: goto label_8003F114;
    case 0x8003F118u: goto label_8003F118;
    case 0x8003F11Cu: goto label_8003F11C;
    case 0x8003F120u: goto label_8003F120;
    case 0x8003F124u: goto label_8003F124;
    case 0x8003F128u: goto label_8003F128;
    case 0x8003F12Cu: goto label_8003F12C;
    case 0x8003F130u: goto label_8003F130;
    case 0x8003F134u: goto label_8003F134;
    case 0x8003F138u: goto label_8003F138;
    case 0x8003F13Cu: goto label_8003F13C;
    case 0x8003F140u: goto label_8003F140;
    case 0x8003F144u: goto label_8003F144;
    case 0x8003F148u: goto label_8003F148;
    case 0x8003F14Cu: goto label_8003F14C;
    case 0x8003F150u: goto label_8003F150;
    case 0x8003F154u: goto label_8003F154;
    case 0x8003F158u: goto label_8003F158;
    case 0x8003F15Cu: goto label_8003F15C;
    case 0x8003F160u: goto label_8003F160;
    case 0x8003F164u: goto label_8003F164;
    case 0x8003F168u: goto label_8003F168;
    case 0x8003F16Cu: goto label_8003F16C;
    case 0x8003F170u: goto label_8003F170;
    case 0x8003F174u: goto label_8003F174;
    case 0x8003F178u: goto label_8003F178;
    case 0x8003F17Cu: goto label_8003F17C;
    case 0x8003F180u: goto label_8003F180;
    case 0x8003F184u: goto label_8003F184;
    case 0x8003F188u: goto label_8003F188;
    case 0x8003F18Cu: goto label_8003F18C;
    case 0x8003F190u: goto label_8003F190;
    case 0x8003F194u: goto label_8003F194;
    case 0x8003F198u: goto label_8003F198;
    case 0x8003F19Cu: goto label_8003F19C;
    case 0x8003F1A0u: goto label_8003F1A0;
    case 0x8003F1A4u: goto label_8003F1A4;
    case 0x8003F1A8u: goto label_8003F1A8;
    case 0x8003F1ACu: goto label_8003F1AC;
    case 0x8003F1B0u: goto label_8003F1B0;
    case 0x8003F1B4u: goto label_8003F1B4;
    case 0x8003F1B8u: goto label_8003F1B8;
    case 0x8003F1BCu: goto label_8003F1BC;
    case 0x8003F1C0u: goto label_8003F1C0;
    case 0x8003F1C4u: goto label_8003F1C4;
    case 0x8003F1C8u: goto label_8003F1C8;
    case 0x8003F1CCu: goto label_8003F1CC;
    case 0x8003F1D0u: goto label_8003F1D0;
    case 0x8003F1D4u: goto label_8003F1D4;
    case 0x8003F1D8u: goto label_8003F1D8;
    case 0x8003F1DCu: goto label_8003F1DC;
    case 0x8003F1E0u: goto label_8003F1E0;
    case 0x8003F1E4u: goto label_8003F1E4;
    case 0x8003F1E8u: goto label_8003F1E8;
    case 0x8003F1ECu: goto label_8003F1EC;
    case 0x8003F1F0u: goto label_8003F1F0;
    case 0x8003F1F4u: goto label_8003F1F4;
    case 0x8003F1F8u: goto label_8003F1F8;
    case 0x8003F1FCu: goto label_8003F1FC;
    case 0x8003F200u: goto label_8003F200;
    case 0x8003F204u: goto label_8003F204;
    case 0x8003F208u: goto label_8003F208;
    case 0x8003F20Cu: goto label_8003F20C;
    case 0x8003F210u: goto label_8003F210;
    case 0x8003F214u: goto label_8003F214;
    case 0x8003F218u: goto label_8003F218;
    case 0x8003F21Cu: goto label_8003F21C;
    case 0x8003F220u: goto label_8003F220;
    case 0x8003F224u: goto label_8003F224;
    case 0x8003F228u: goto label_8003F228;
    case 0x8003F22Cu: goto label_8003F22C;
    case 0x8003F230u: goto label_8003F230;
    case 0x8003F234u: goto label_8003F234;
    case 0x8003F238u: goto label_8003F238;
    case 0x8003F23Cu: goto label_8003F23C;
    case 0x8003F240u: goto label_8003F240;
    case 0x8003F244u: goto label_8003F244;
    case 0x8003F248u: goto label_8003F248;
    case 0x8003F24Cu: goto label_8003F24C;
    case 0x8003F250u: goto label_8003F250;
    case 0x8003F254u: goto label_8003F254;
    case 0x8003F258u: goto label_8003F258;
    case 0x8003F25Cu: goto label_8003F25C;
    case 0x8003F260u: goto label_8003F260;
    case 0x8003F264u: goto label_8003F264;
    case 0x8003F268u: goto label_8003F268;
    case 0x8003F26Cu: goto label_8003F26C;
    case 0x8003F270u: goto label_8003F270;
    case 0x8003F274u: goto label_8003F274;
    case 0x8003F278u: goto label_8003F278;
    case 0x8003F27Cu: goto label_8003F27C;
    case 0x8003F280u: goto label_8003F280;
    case 0x8003F284u: goto label_8003F284;
    case 0x8003F288u: goto label_8003F288;
    case 0x8003F28Cu: goto label_8003F28C;
    case 0x8003F290u: goto label_8003F290;
    case 0x8003F294u: goto label_8003F294;
    case 0x8003F298u: goto label_8003F298;
    case 0x8003F29Cu: goto label_8003F29C;
    case 0x8003F2A0u: goto label_8003F2A0;
    case 0x8003F2A4u: goto label_8003F2A4;
    case 0x8003F2A8u: goto label_8003F2A8;
    case 0x8003F2ACu: goto label_8003F2AC;
    case 0x8003F2B0u: goto label_8003F2B0;
    case 0x8003F2B4u: goto label_8003F2B4;
    case 0x8003F2B8u: goto label_8003F2B8;
    case 0x8003F2BCu: goto label_8003F2BC;
    case 0x8003F2C0u: goto label_8003F2C0;
    case 0x8003F2C4u: goto label_8003F2C4;
    case 0x8003F2C8u: goto label_8003F2C8;
    case 0x8003F2CCu: goto label_8003F2CC;
    case 0x8003F2D0u: goto label_8003F2D0;
    case 0x8003F2D4u: goto label_8003F2D4;
    case 0x8003F2D8u: goto label_8003F2D8;
    case 0x8003F2DCu: goto label_8003F2DC;
    case 0x8003F2E0u: goto label_8003F2E0;
    case 0x8003F2E4u: goto label_8003F2E4;
    case 0x8003F2E8u: goto label_8003F2E8;
    case 0x8003F2ECu: goto label_8003F2EC;
    case 0x8003F2F0u: goto label_8003F2F0;
    case 0x8003F2F4u: goto label_8003F2F4;
    case 0x8003F2F8u: goto label_8003F2F8;
    case 0x8003F2FCu: goto label_8003F2FC;
    case 0x8003F300u: goto label_8003F300;
    case 0x8003F304u: goto label_8003F304;
    case 0x8003F308u: goto label_8003F308;
    case 0x8003F30Cu: goto label_8003F30C;
    case 0x8003F310u: goto label_8003F310;
    case 0x8003F314u: goto label_8003F314;
    case 0x8003F318u: goto label_8003F318;
    case 0x8003F31Cu: goto label_8003F31C;
    case 0x8003F320u: goto label_8003F320;
    case 0x8003F324u: goto label_8003F324;
    case 0x8003F328u: goto label_8003F328;
    case 0x8003F32Cu: goto label_8003F32C;
    case 0x8003F330u: goto label_8003F330;
    case 0x8003F334u: goto label_8003F334;
    case 0x8003F338u: goto label_8003F338;
    case 0x8003F33Cu: goto label_8003F33C;
    case 0x8003F340u: goto label_8003F340;
    case 0x8003F344u: goto label_8003F344;
    case 0x8003F348u: goto label_8003F348;
    case 0x8003F34Cu: goto label_8003F34C;
    case 0x8003F350u: goto label_8003F350;
    case 0x8003F354u: goto label_8003F354;
    case 0x8003F358u: goto label_8003F358;
    case 0x8003F35Cu: goto label_8003F35C;
    case 0x8003F360u: goto label_8003F360;
    case 0x8003F364u: goto label_8003F364;
    case 0x8003F368u: goto label_8003F368;
    case 0x8003F36Cu: goto label_8003F36C;
    case 0x8003F370u: goto label_8003F370;
    case 0x8003F374u: goto label_8003F374;
    case 0x8003F378u: goto label_8003F378;
    case 0x8003F37Cu: goto label_8003F37C;
    case 0x8003F380u: goto label_8003F380;
    case 0x8003F384u: goto label_8003F384;
    case 0x8003F388u: goto label_8003F388;
    case 0x8003F38Cu: goto label_8003F38C;
    case 0x8003F390u: goto label_8003F390;
    case 0x8003F394u: goto label_8003F394;
    case 0x8003F398u: goto label_8003F398;
    case 0x8003F39Cu: goto label_8003F39C;
    case 0x8003F3A0u: goto label_8003F3A0;
    case 0x8003F3A4u: goto label_8003F3A4;
    case 0x8003F3A8u: goto label_8003F3A8;
    case 0x8003F3ACu: goto label_8003F3AC;
    case 0x8003F3B0u: goto label_8003F3B0;
    case 0x8003F3B4u: goto label_8003F3B4;
    case 0x8003F3B8u: goto label_8003F3B8;
    case 0x8003F3BCu: goto label_8003F3BC;
    case 0x8003F3C0u: goto label_8003F3C0;
    case 0x8003F3C4u: goto label_8003F3C4;
    case 0x8003F3C8u: goto label_8003F3C8;
    case 0x8003F3CCu: goto label_8003F3CC;
    case 0x8003F3D0u: goto label_8003F3D0;
    case 0x8003F3D4u: goto label_8003F3D4;
    case 0x8003F3D8u: goto label_8003F3D8;
    case 0x8003F3DCu: goto label_8003F3DC;
    case 0x8003F3E0u: goto label_8003F3E0;
    case 0x8003F3E4u: goto label_8003F3E4;
    case 0x8003F3E8u: goto label_8003F3E8;
    case 0x8003F3ECu: goto label_8003F3EC;
    case 0x8003F3F0u: goto label_8003F3F0;
    case 0x8003F3F4u: goto label_8003F3F4;
    case 0x8003F3F8u: goto label_8003F3F8;
    case 0x8003F3FCu: goto label_8003F3FC;
    case 0x8003F400u: goto label_8003F400;
    case 0x8003F404u: goto label_8003F404;
    case 0x8003F408u: goto label_8003F408;
    case 0x8003F40Cu: goto label_8003F40C;
    case 0x8003F410u: goto label_8003F410;
    case 0x8003F414u: goto label_8003F414;
    case 0x8003F418u: goto label_8003F418;
    case 0x8003F41Cu: goto label_8003F41C;
    case 0x8003F420u: goto label_8003F420;
    case 0x8003F424u: goto label_8003F424;
    case 0x8003F428u: goto label_8003F428;
    case 0x8003F42Cu: goto label_8003F42C;
    case 0x8003F430u: goto label_8003F430;
    case 0x8003F434u: goto label_8003F434;
    case 0x8003F438u: goto label_8003F438;
    case 0x8003F43Cu: goto label_8003F43C;
    case 0x8003F440u: goto label_8003F440;
    case 0x8003F444u: goto label_8003F444;
    case 0x8003F448u: goto label_8003F448;
    case 0x8003F44Cu: goto label_8003F44C;
    case 0x8003F450u: goto label_8003F450;
    case 0x8003F454u: goto label_8003F454;
    case 0x8003F458u: goto label_8003F458;
    case 0x8003F45Cu: goto label_8003F45C;
    case 0x8003F460u: goto label_8003F460;
    case 0x8003F464u: goto label_8003F464;
    case 0x8003F468u: goto label_8003F468;
    case 0x8003F46Cu: goto label_8003F46C;
    case 0x8003F470u: goto label_8003F470;
    case 0x8003F474u: goto label_8003F474;
    case 0x8003F478u: goto label_8003F478;
    case 0x8003F47Cu: goto label_8003F47C;
    case 0x8003F480u: goto label_8003F480;
    case 0x8003F484u: goto label_8003F484;
    case 0x8003F488u: goto label_8003F488;
    case 0x8003F48Cu: goto label_8003F48C;
    case 0x8003F490u: goto label_8003F490;
    case 0x8003F494u: goto label_8003F494;
    case 0x8003F498u: goto label_8003F498;
    case 0x8003F49Cu: goto label_8003F49C;
    case 0x8003F4A0u: goto label_8003F4A0;
    case 0x8003F4A4u: goto label_8003F4A4;
    case 0x8003F4A8u: goto label_8003F4A8;
    case 0x8003F4ACu: goto label_8003F4AC;
    case 0x8003F4B0u: goto label_8003F4B0;
    case 0x8003F4B4u: goto label_8003F4B4;
    case 0x8003F4B8u: goto label_8003F4B8;
    case 0x8003F4BCu: goto label_8003F4BC;
    case 0x8003F4C0u: goto label_8003F4C0;
    case 0x8003F4C4u: goto label_8003F4C4;
    case 0x8003F4C8u: goto label_8003F4C8;
    case 0x8003F4CCu: goto label_8003F4CC;
    case 0x8003F4D0u: goto label_8003F4D0;
    case 0x8003F4D4u: goto label_8003F4D4;
    case 0x8003F4D8u: goto label_8003F4D8;
    case 0x8003F4DCu: goto label_8003F4DC;
    case 0x8003F4E0u: goto label_8003F4E0;
    case 0x8003F4E4u: goto label_8003F4E4;
    case 0x8003F4E8u: goto label_8003F4E8;
    case 0x8003F4ECu: goto label_8003F4EC;
    case 0x8003F4F0u: goto label_8003F4F0;
    case 0x8003F4F4u: goto label_8003F4F4;
    case 0x8003F4F8u: goto label_8003F4F8;
    case 0x8003F4FCu: goto label_8003F4FC;
    case 0x8003F500u: goto label_8003F500;
    case 0x8003F504u: goto label_8003F504;
    case 0x8003F508u: goto label_8003F508;
    case 0x8003F50Cu: goto label_8003F50C;
    case 0x8003F510u: goto label_8003F510;
    case 0x8003F514u: goto label_8003F514;
    case 0x8003F518u: goto label_8003F518;
    case 0x8003F51Cu: goto label_8003F51C;
    case 0x8003F520u: goto label_8003F520;
    case 0x8003F524u: goto label_8003F524;
    case 0x8003F528u: goto label_8003F528;
    case 0x8003F52Cu: goto label_8003F52C;
    case 0x8003F530u: goto label_8003F530;
    case 0x8003F534u: goto label_8003F534;
    case 0x8003F538u: goto label_8003F538;
    case 0x8003F53Cu: goto label_8003F53C;
    case 0x8003F540u: goto label_8003F540;
    case 0x8003F544u: goto label_8003F544;
    case 0x8003F548u: goto label_8003F548;
    case 0x8003F54Cu: goto label_8003F54C;
    case 0x8003F550u: goto label_8003F550;
    case 0x8003F554u: goto label_8003F554;
    case 0x8003F558u: goto label_8003F558;
    case 0x8003F55Cu: goto label_8003F55C;
    case 0x8003F560u: goto label_8003F560;
    case 0x8003F564u: goto label_8003F564;
    case 0x8003F568u: goto label_8003F568;
    case 0x8003F56Cu: goto label_8003F56C;
    case 0x8003F570u: goto label_8003F570;
    case 0x8003F574u: goto label_8003F574;
    case 0x8003F578u: goto label_8003F578;
    case 0x8003F57Cu: goto label_8003F57C;
    case 0x8003F580u: goto label_8003F580;
    case 0x8003F584u: goto label_8003F584;
    case 0x8003F588u: goto label_8003F588;
    case 0x8003F58Cu: goto label_8003F58C;
    case 0x8003F590u: goto label_8003F590;
    case 0x8003F594u: goto label_8003F594;
    case 0x8003F598u: goto label_8003F598;
    case 0x8003F59Cu: goto label_8003F59C;
    case 0x8003F5A0u: goto label_8003F5A0;
    case 0x8003F5A4u: goto label_8003F5A4;
    case 0x8003F5A8u: goto label_8003F5A8;
    case 0x8003F5ACu: goto label_8003F5AC;
    case 0x8003F5B0u: goto label_8003F5B0;
    case 0x8003F5B4u: goto label_8003F5B4;
    case 0x8003F5B8u: goto label_8003F5B8;
    case 0x8003F5BCu: goto label_8003F5BC;
    case 0x8003F5C0u: goto label_8003F5C0;
    case 0x8003F5C4u: goto label_8003F5C4;
    case 0x8003F5C8u: goto label_8003F5C8;
    case 0x8003F5CCu: goto label_8003F5CC;
    case 0x8003F5D0u: goto label_8003F5D0;
    case 0x8003F5D4u: goto label_8003F5D4;
    case 0x8003F5D8u: goto label_8003F5D8;
    case 0x8003F5DCu: goto label_8003F5DC;
    case 0x8003F5E0u: goto label_8003F5E0;
    case 0x8003F5E4u: goto label_8003F5E4;
    case 0x8003F5E8u: goto label_8003F5E8;
    case 0x8003F5ECu: goto label_8003F5EC;
    case 0x8003F5F0u: goto label_8003F5F0;
    case 0x8003F5F4u: goto label_8003F5F4;
    case 0x8003F5F8u: goto label_8003F5F8;
    case 0x8003F5FCu: goto label_8003F5FC;
    case 0x8003F600u: goto label_8003F600;
    case 0x8003F604u: goto label_8003F604;
    case 0x8003F608u: goto label_8003F608;
    case 0x8003F60Cu: goto label_8003F60C;
    case 0x8003F610u: goto label_8003F610;
    case 0x8003F614u: goto label_8003F614;
    case 0x8003F618u: goto label_8003F618;
    case 0x8003F61Cu: goto label_8003F61C;
    case 0x8003F620u: goto label_8003F620;
    case 0x8003F624u: goto label_8003F624;
    case 0x8003F628u: goto label_8003F628;
    case 0x8003F62Cu: goto label_8003F62C;
    case 0x8003F630u: goto label_8003F630;
    case 0x8003F634u: goto label_8003F634;
    case 0x8003F638u: goto label_8003F638;
    case 0x8003F63Cu: goto label_8003F63C;
    case 0x8003F640u: goto label_8003F640;
    case 0x8003F644u: goto label_8003F644;
    case 0x8003F648u: goto label_8003F648;
    case 0x8003F64Cu: goto label_8003F64C;
    case 0x8003F650u: goto label_8003F650;
    case 0x8003F654u: goto label_8003F654;
    case 0x8003F658u: goto label_8003F658;
    case 0x8003F65Cu: goto label_8003F65C;
    case 0x8003F660u: goto label_8003F660;
    case 0x8003F664u: goto label_8003F664;
    case 0x8003F668u: goto label_8003F668;
    case 0x8003F66Cu: goto label_8003F66C;
    case 0x8003F670u: goto label_8003F670;
    case 0x8003F674u: goto label_8003F674;
    case 0x8003F678u: goto label_8003F678;
    case 0x8003F67Cu: goto label_8003F67C;
    case 0x8003F680u: goto label_8003F680;
    case 0x8003F684u: goto label_8003F684;
    case 0x8003F688u: goto label_8003F688;
    case 0x8003F68Cu: goto label_8003F68C;
    case 0x8003F690u: goto label_8003F690;
    case 0x8003F694u: goto label_8003F694;
    case 0x8003F698u: goto label_8003F698;
    case 0x8003F69Cu: goto label_8003F69C;
    case 0x8003F6A0u: goto label_8003F6A0;
    case 0x8003F6A4u: goto label_8003F6A4;
    case 0x8003F6A8u: goto label_8003F6A8;
    case 0x8003F6ACu: goto label_8003F6AC;
    case 0x8003F6B0u: goto label_8003F6B0;
    case 0x8003F6B4u: goto label_8003F6B4;
    case 0x8003F6B8u: goto label_8003F6B8;
    case 0x8003F6BCu: goto label_8003F6BC;
    case 0x8003F6C0u: goto label_8003F6C0;
    case 0x8003F6C4u: goto label_8003F6C4;
    case 0x8003F6C8u: goto label_8003F6C8;
    case 0x8003F6CCu: goto label_8003F6CC;
    case 0x8003F6D0u: goto label_8003F6D0;
    case 0x8003F6D4u: goto label_8003F6D4;
    case 0x8003F6D8u: goto label_8003F6D8;
    case 0x8003F6DCu: goto label_8003F6DC;
    case 0x8003F6E0u: goto label_8003F6E0;
    case 0x8003F6E4u: goto label_8003F6E4;
    case 0x8003F6E8u: goto label_8003F6E8;
    case 0x8003F6ECu: goto label_8003F6EC;
    case 0x8003F6F0u: goto label_8003F6F0;
    case 0x8003F6F4u: goto label_8003F6F4;
    case 0x8003F6F8u: goto label_8003F6F8;
    case 0x8003F6FCu: goto label_8003F6FC;
    case 0x8003F700u: goto label_8003F700;
    case 0x8003F704u: goto label_8003F704;
    case 0x8003F708u: goto label_8003F708;
    case 0x8003F70Cu: goto label_8003F70C;
    case 0x8003F710u: goto label_8003F710;
    case 0x8003F714u: goto label_8003F714;
    case 0x8003F718u: goto label_8003F718;
    case 0x8003F71Cu: goto label_8003F71C;
    case 0x8003F720u: goto label_8003F720;
    case 0x8003F724u: goto label_8003F724;
    case 0x8003F728u: goto label_8003F728;
    case 0x8003F72Cu: goto label_8003F72C;
    case 0x8003F730u: goto label_8003F730;
    case 0x8003F734u: goto label_8003F734;
    case 0x8003F738u: goto label_8003F738;
    case 0x8003F73Cu: goto label_8003F73C;
    case 0x8003F740u: goto label_8003F740;
    case 0x8003F744u: goto label_8003F744;
    case 0x8003F748u: goto label_8003F748;
    case 0x8003F74Cu: goto label_8003F74C;
    case 0x8003F750u: goto label_8003F750;
    case 0x8003F754u: goto label_8003F754;
    case 0x8003F758u: goto label_8003F758;
    case 0x8003F75Cu: goto label_8003F75C;
    case 0x8003F760u: goto label_8003F760;
    case 0x8003F764u: goto label_8003F764;
    case 0x8003F768u: goto label_8003F768;
    case 0x8003F76Cu: goto label_8003F76C;
    case 0x8003F770u: goto label_8003F770;
    case 0x8003F774u: goto label_8003F774;
    case 0x8003F778u: goto label_8003F778;
    case 0x8003F77Cu: goto label_8003F77C;
    case 0x8003F780u: goto label_8003F780;
    case 0x8003F784u: goto label_8003F784;
    case 0x8003F788u: goto label_8003F788;
    case 0x8003F78Cu: goto label_8003F78C;
    case 0x8003F790u: goto label_8003F790;
    case 0x8003F794u: goto label_8003F794;
    case 0x8003F798u: goto label_8003F798;
    case 0x8003F79Cu: goto label_8003F79C;
    case 0x8003F7A0u: goto label_8003F7A0;
    case 0x8003F7A4u: goto label_8003F7A4;
    case 0x8003F7A8u: goto label_8003F7A8;
    case 0x8003F7ACu: goto label_8003F7AC;
    case 0x8003F7B0u: goto label_8003F7B0;
    case 0x8003F7B4u: goto label_8003F7B4;
    case 0x8003F7B8u: goto label_8003F7B8;
    case 0x8003F7BCu: goto label_8003F7BC;
    case 0x8003F7C0u: goto label_8003F7C0;
    case 0x8003F7C4u: goto label_8003F7C4;
    case 0x8003F7C8u: goto label_8003F7C8;
    case 0x8003F7CCu: goto label_8003F7CC;
    case 0x8003F7D0u: goto label_8003F7D0;
    case 0x8003F7D4u: goto label_8003F7D4;
    case 0x8003F7D8u: goto label_8003F7D8;
    case 0x8003F7DCu: goto label_8003F7DC;
    case 0x8003F7E0u: goto label_8003F7E0;
    case 0x8003F7E4u: goto label_8003F7E4;
    case 0x8003F7E8u: goto label_8003F7E8;
    case 0x8003F7ECu: goto label_8003F7EC;
    case 0x8003F7F0u: goto label_8003F7F0;
    case 0x8003F7F4u: goto label_8003F7F4;
    case 0x8003F7F8u: goto label_8003F7F8;
    case 0x8003F7FCu: goto label_8003F7FC;
    case 0x8003F800u: goto label_8003F800;
    case 0x8003F804u: goto label_8003F804;
    case 0x8003F808u: goto label_8003F808;
    case 0x8003F80Cu: goto label_8003F80C;
    case 0x8003F810u: goto label_8003F810;
    case 0x8003F814u: goto label_8003F814;
    case 0x8003F818u: goto label_8003F818;
    case 0x8003F81Cu: goto label_8003F81C;
    case 0x8003F820u: goto label_8003F820;
    case 0x8003F824u: goto label_8003F824;
    case 0x8003F828u: goto label_8003F828;
    case 0x8003F82Cu: goto label_8003F82C;
    case 0x8003F830u: goto label_8003F830;
    case 0x8003F834u: goto label_8003F834;
    case 0x8003F838u: goto label_8003F838;
    case 0x8003F83Cu: goto label_8003F83C;
    case 0x8003F840u: goto label_8003F840;
    case 0x8003F844u: goto label_8003F844;
    case 0x8003F848u: goto label_8003F848;
    case 0x8003F84Cu: goto label_8003F84C;
    case 0x8003F850u: goto label_8003F850;
    case 0x8003F854u: goto label_8003F854;
    case 0x8003F858u: goto label_8003F858;
    case 0x8003F85Cu: goto label_8003F85C;
    case 0x8003F860u: goto label_8003F860;
    case 0x8003F864u: goto label_8003F864;
    case 0x8003F868u: goto label_8003F868;
    case 0x8003F86Cu: goto label_8003F86C;
    case 0x8003F870u: goto label_8003F870;
    case 0x8003F874u: goto label_8003F874;
    case 0x8003F878u: goto label_8003F878;
    case 0x8003F87Cu: goto label_8003F87C;
    case 0x8003F880u: goto label_8003F880;
    case 0x8003F884u: goto label_8003F884;
    case 0x8003F888u: goto label_8003F888;
    case 0x8003F88Cu: goto label_8003F88C;
    case 0x8003F890u: goto label_8003F890;
    case 0x8003F894u: goto label_8003F894;
    case 0x8003F898u: goto label_8003F898;
    case 0x8003F89Cu: goto label_8003F89C;
    case 0x8003F8A0u: goto label_8003F8A0;
    case 0x8003F8A4u: goto label_8003F8A4;
    case 0x8003F8A8u: goto label_8003F8A8;
    case 0x8003F8ACu: goto label_8003F8AC;
    case 0x8003F8B0u: goto label_8003F8B0;
    case 0x8003F8B4u: goto label_8003F8B4;
    case 0x8003F8B8u: goto label_8003F8B8;
    case 0x8003F8BCu: goto label_8003F8BC;
    case 0x8003F8C0u: goto label_8003F8C0;
    case 0x8003F8C4u: goto label_8003F8C4;
    case 0x8003F8C8u: goto label_8003F8C8;
    case 0x8003F8CCu: goto label_8003F8CC;
    case 0x8003F8D0u: goto label_8003F8D0;
    case 0x8003F8D4u: goto label_8003F8D4;
    case 0x8003F8D8u: goto label_8003F8D8;
    case 0x8003F8DCu: goto label_8003F8DC;
    case 0x8003F8E0u: goto label_8003F8E0;
    case 0x8003F8E4u: goto label_8003F8E4;
    case 0x8003F8E8u: goto label_8003F8E8;
    case 0x8003F8ECu: goto label_8003F8EC;
    case 0x8003F8F0u: goto label_8003F8F0;
    case 0x8003F8F4u: goto label_8003F8F4;
    case 0x8003F8F8u: goto label_8003F8F8;
    case 0x8003F8FCu: goto label_8003F8FC;
    case 0x8003F900u: goto label_8003F900;
    case 0x8003F904u: goto label_8003F904;
    case 0x8003F908u: goto label_8003F908;
    case 0x8003F90Cu: goto label_8003F90C;
    case 0x8003F910u: goto label_8003F910;
    case 0x8003F914u: goto label_8003F914;
    case 0x8003F918u: goto label_8003F918;
    case 0x8003F91Cu: goto label_8003F91C;
    case 0x8003F920u: goto label_8003F920;
    case 0x8003F924u: goto label_8003F924;
    case 0x8003F928u: goto label_8003F928;
    case 0x8003F92Cu: goto label_8003F92C;
    case 0x8003F930u: goto label_8003F930;
    case 0x8003F934u: goto label_8003F934;
    case 0x8003F938u: goto label_8003F938;
    case 0x8003F93Cu: goto label_8003F93C;
    case 0x8003F940u: goto label_8003F940;
    case 0x8003F944u: goto label_8003F944;
    case 0x8003F948u: goto label_8003F948;
    case 0x8003F94Cu: goto label_8003F94C;
    case 0x8003F950u: goto label_8003F950;
    case 0x8003F954u: goto label_8003F954;
    case 0x8003F958u: goto label_8003F958;
    case 0x8003F95Cu: goto label_8003F95C;
    case 0x8003F960u: goto label_8003F960;
    case 0x8003F964u: goto label_8003F964;
    case 0x8003F968u: goto label_8003F968;
    case 0x8003F96Cu: goto label_8003F96C;
    case 0x8003F970u: goto label_8003F970;
    case 0x8003F974u: goto label_8003F974;
    case 0x8003F978u: goto label_8003F978;
    case 0x8003F97Cu: goto label_8003F97C;
    case 0x8003F980u: goto label_8003F980;
    case 0x8003F984u: goto label_8003F984;
    case 0x8003F988u: goto label_8003F988;
    case 0x8003F98Cu: goto label_8003F98C;
    case 0x8003F990u: goto label_8003F990;
    case 0x8003F994u: goto label_8003F994;
    case 0x8003F998u: goto label_8003F998;
    case 0x8003F99Cu: goto label_8003F99C;
    case 0x8003F9A0u: goto label_8003F9A0;
    case 0x8003F9A4u: goto label_8003F9A4;
    case 0x8003F9A8u: goto label_8003F9A8;
    case 0x8003F9ACu: goto label_8003F9AC;
    case 0x8003F9B0u: goto label_8003F9B0;
    case 0x8003F9B4u: goto label_8003F9B4;
    case 0x8003F9B8u: goto label_8003F9B8;
    case 0x8003F9BCu: goto label_8003F9BC;
    case 0x8003F9C0u: goto label_8003F9C0;
    case 0x8003F9C4u: goto label_8003F9C4;
    case 0x8003F9C8u: goto label_8003F9C8;
    case 0x8003F9CCu: goto label_8003F9CC;
    case 0x8003F9D0u: goto label_8003F9D0;
    case 0x8003F9D4u: goto label_8003F9D4;
    case 0x8003F9D8u: goto label_8003F9D8;
    case 0x8003F9DCu: goto label_8003F9DC;
    case 0x8003F9E0u: goto label_8003F9E0;
    case 0x8003F9E4u: goto label_8003F9E4;
    case 0x8003F9E8u: goto label_8003F9E8;
    case 0x8003F9ECu: goto label_8003F9EC;
    case 0x8003F9F0u: goto label_8003F9F0;
    case 0x8003F9F4u: goto label_8003F9F4;
    case 0x8003F9F8u: goto label_8003F9F8;
    case 0x8003F9FCu: goto label_8003F9FC;
    case 0x8003FA00u: goto label_8003FA00;
    case 0x8003FA04u: goto label_8003FA04;
    case 0x8003FA08u: goto label_8003FA08;
    case 0x8003FA0Cu: goto label_8003FA0C;
    case 0x8003FA10u: goto label_8003FA10;
    case 0x8003FA14u: goto label_8003FA14;
    case 0x8003FA18u: goto label_8003FA18;
    case 0x8003FA1Cu: goto label_8003FA1C;
    case 0x8003FA20u: goto label_8003FA20;
    case 0x8003FA24u: goto label_8003FA24;
    case 0x8003FA28u: goto label_8003FA28;
    case 0x8003FA2Cu: goto label_8003FA2C;
    case 0x8003FA30u: goto label_8003FA30;
    case 0x8003FA34u: goto label_8003FA34;
    case 0x8003FA38u: goto label_8003FA38;
    case 0x8003FA3Cu: goto label_8003FA3C;
    case 0x8003FA40u: goto label_8003FA40;
    case 0x8003FA44u: goto label_8003FA44;
    case 0x8003FA48u: goto label_8003FA48;
    case 0x8003FA4Cu: goto label_8003FA4C;
    case 0x8003FA50u: goto label_8003FA50;
    case 0x8003FA54u: goto label_8003FA54;
    case 0x8003FA58u: goto label_8003FA58;
    case 0x8003FA5Cu: goto label_8003FA5C;
    case 0x8003FA60u: goto label_8003FA60;
    case 0x8003FA64u: goto label_8003FA64;
    case 0x8003FA68u: goto label_8003FA68;
    case 0x8003FA6Cu: goto label_8003FA6C;
    case 0x8003FA70u: goto label_8003FA70;
    case 0x8003FA74u: goto label_8003FA74;
    case 0x8003FA78u: goto label_8003FA78;
    case 0x8003FA7Cu: goto label_8003FA7C;
    case 0x8003FA80u: goto label_8003FA80;
    case 0x8003FA84u: goto label_8003FA84;
    case 0x8003FA88u: goto label_8003FA88;
    case 0x8003FA8Cu: goto label_8003FA8C;
    case 0x8003FA90u: goto label_8003FA90;
    case 0x8003FA94u: goto label_8003FA94;
    case 0x8003FA98u: goto label_8003FA98;
    case 0x8003FA9Cu: goto label_8003FA9C;
    case 0x8003FAA0u: goto label_8003FAA0;
    case 0x8003FAA4u: goto label_8003FAA4;
    case 0x8003FAA8u: goto label_8003FAA8;
    case 0x8003FAACu: goto label_8003FAAC;
    case 0x8003FAB0u: goto label_8003FAB0;
    case 0x8003FAB4u: goto label_8003FAB4;
    case 0x8003FAB8u: goto label_8003FAB8;
    case 0x8003FABCu: goto label_8003FABC;
    case 0x8003FAC0u: goto label_8003FAC0;
    case 0x8003FAC4u: goto label_8003FAC4;
    case 0x8003FAC8u: goto label_8003FAC8;
    case 0x8003FACCu: goto label_8003FACC;
    case 0x8003FAD0u: goto label_8003FAD0;
    case 0x8003FAD4u: goto label_8003FAD4;
    case 0x8003FAD8u: goto label_8003FAD8;
    case 0x8003FADCu: goto label_8003FADC;
    case 0x8003FAE0u: goto label_8003FAE0;
    case 0x8003FAE4u: goto label_8003FAE4;
    case 0x8003FAE8u: goto label_8003FAE8;
    case 0x8003FAECu: goto label_8003FAEC;
    case 0x8003FAF0u: goto label_8003FAF0;
    case 0x8003FAF4u: goto label_8003FAF4;
    case 0x8003FAF8u: goto label_8003FAF8;
    case 0x8003FAFCu: goto label_8003FAFC;
    case 0x8003FB00u: goto label_8003FB00;
    case 0x8003FB04u: goto label_8003FB04;
    case 0x8003FB08u: goto label_8003FB08;
    case 0x8003FB0Cu: goto label_8003FB0C;
    case 0x8003FB10u: goto label_8003FB10;
    case 0x8003FB14u: goto label_8003FB14;
    case 0x8003FB18u: goto label_8003FB18;
    case 0x8003FB1Cu: goto label_8003FB1C;
    case 0x8003FB20u: goto label_8003FB20;
    case 0x8003FB24u: goto label_8003FB24;
    case 0x8003FB28u: goto label_8003FB28;
    case 0x8003FB2Cu: goto label_8003FB2C;
    case 0x8003FB30u: goto label_8003FB30;
    case 0x8003FB34u: goto label_8003FB34;
    case 0x8003FB38u: goto label_8003FB38;
    case 0x8003FB3Cu: goto label_8003FB3C;
    case 0x8003FB40u: goto label_8003FB40;
    case 0x8003FB44u: goto label_8003FB44;
    case 0x8003FB48u: goto label_8003FB48;
    case 0x8003FB4Cu: goto label_8003FB4C;
    case 0x8003FB50u: goto label_8003FB50;
    case 0x8003FB54u: goto label_8003FB54;
    case 0x8003FB58u: goto label_8003FB58;
    case 0x8003FB5Cu: goto label_8003FB5C;
    case 0x8003FB60u: goto label_8003FB60;
    case 0x8003FB64u: goto label_8003FB64;
    case 0x8003FB68u: goto label_8003FB68;
    case 0x8003FB6Cu: goto label_8003FB6C;
    case 0x8003FB70u: goto label_8003FB70;
    case 0x8003FB74u: goto label_8003FB74;
    case 0x8003FB78u: goto label_8003FB78;
    case 0x8003FB7Cu: goto label_8003FB7C;
    case 0x8003FB80u: goto label_8003FB80;
    case 0x8003FB84u: goto label_8003FB84;
    case 0x8003FB88u: goto label_8003FB88;
    case 0x8003FB8Cu: goto label_8003FB8C;
    case 0x8003FB90u: goto label_8003FB90;
    case 0x8003FB94u: goto label_8003FB94;
    case 0x8003FB98u: goto label_8003FB98;
    case 0x8003FB9Cu: goto label_8003FB9C;
    case 0x8003FBA0u: goto label_8003FBA0;
    case 0x8003FBA4u: goto label_8003FBA4;
    case 0x8003FBA8u: goto label_8003FBA8;
    case 0x8003FBACu: goto label_8003FBAC;
    case 0x8003FBB0u: goto label_8003FBB0;
    case 0x8003FBB4u: goto label_8003FBB4;
    case 0x8003FBB8u: goto label_8003FBB8;
    case 0x8003FBBCu: goto label_8003FBBC;
    case 0x8003FBC0u: goto label_8003FBC0;
    case 0x8003FBC4u: goto label_8003FBC4;
    case 0x8003FBC8u: goto label_8003FBC8;
    case 0x8003FBCCu: goto label_8003FBCC;
    case 0x8003FBD0u: goto label_8003FBD0;
    case 0x8003FBD4u: goto label_8003FBD4;
    case 0x8003FBD8u: goto label_8003FBD8;
    case 0x8003FBDCu: goto label_8003FBDC;
    case 0x8003FBE0u: goto label_8003FBE0;
    case 0x8003FBE4u: goto label_8003FBE4;
    case 0x8003FBE8u: goto label_8003FBE8;
    case 0x8003FBECu: goto label_8003FBEC;
    case 0x8003FBF0u: goto label_8003FBF0;
    case 0x8003FBF4u: goto label_8003FBF4;
    case 0x8003FBF8u: goto label_8003FBF8;
    case 0x8003FBFCu: goto label_8003FBFC;
    case 0x8003FC00u: goto label_8003FC00;
    case 0x8003FC04u: goto label_8003FC04;
    case 0x8003FC08u: goto label_8003FC08;
    case 0x8003FC0Cu: goto label_8003FC0C;
    case 0x8003FC10u: goto label_8003FC10;
    case 0x8003FC14u: goto label_8003FC14;
    case 0x8003FC18u: goto label_8003FC18;
    case 0x8003FC1Cu: goto label_8003FC1C;
    case 0x8003FC20u: goto label_8003FC20;
    case 0x8003FC24u: goto label_8003FC24;
    case 0x8003FC28u: goto label_8003FC28;
    case 0x8003FC2Cu: goto label_8003FC2C;
    case 0x8003FC30u: goto label_8003FC30;
    case 0x8003FC34u: goto label_8003FC34;
    case 0x8003FC38u: goto label_8003FC38;
    case 0x8003FC3Cu: goto label_8003FC3C;
    case 0x8003FC40u: goto label_8003FC40;
    case 0x8003FC44u: goto label_8003FC44;
    case 0x8003FC48u: goto label_8003FC48;
    case 0x8003FC4Cu: goto label_8003FC4C;
    case 0x8003FC50u: goto label_8003FC50;
    case 0x8003FC54u: goto label_8003FC54;
    case 0x8003FC58u: goto label_8003FC58;
    case 0x8003FC5Cu: goto label_8003FC5C;
    case 0x8003FC60u: goto label_8003FC60;
    case 0x8003FC64u: goto label_8003FC64;
    case 0x8003FC68u: goto label_8003FC68;
    case 0x8003FC6Cu: goto label_8003FC6C;
    case 0x8003FC70u: goto label_8003FC70;
    case 0x8003FC74u: goto label_8003FC74;
    case 0x8003FC78u: goto label_8003FC78;
    case 0x8003FC7Cu: goto label_8003FC7C;
    case 0x8003FC80u: goto label_8003FC80;
    case 0x8003FC84u: goto label_8003FC84;
    case 0x8003FC88u: goto label_8003FC88;
    case 0x8003FC8Cu: goto label_8003FC8C;
    case 0x8003FC90u: goto label_8003FC90;
    case 0x8003FC94u: goto label_8003FC94;
    case 0x8003FC98u: goto label_8003FC98;
    case 0x8003FC9Cu: goto label_8003FC9C;
    case 0x8003FCA0u: goto label_8003FCA0;
    case 0x8003FCA4u: goto label_8003FCA4;
    case 0x8003FCA8u: goto label_8003FCA8;
    case 0x8003FCACu: goto label_8003FCAC;
    case 0x8003FCB0u: goto label_8003FCB0;
    case 0x8003FCB4u: goto label_8003FCB4;
    case 0x8003FCB8u: goto label_8003FCB8;
    case 0x8003FCBCu: goto label_8003FCBC;
    case 0x8003FCC0u: goto label_8003FCC0;
    case 0x8003FCC4u: goto label_8003FCC4;
    case 0x8003FCC8u: goto label_8003FCC8;
    case 0x8003FCCCu: goto label_8003FCCC;
    case 0x8003FCD0u: goto label_8003FCD0;
    case 0x8003FCD4u: goto label_8003FCD4;
    case 0x8003FCD8u: goto label_8003FCD8;
    case 0x8003FCDCu: goto label_8003FCDC;
    case 0x8003FCE0u: goto label_8003FCE0;
    case 0x8003FCE4u: goto label_8003FCE4;
    case 0x8003FCE8u: goto label_8003FCE8;
    case 0x8003FCECu: goto label_8003FCEC;
    case 0x8003FCF0u: goto label_8003FCF0;
    case 0x8003FCF4u: goto label_8003FCF4;
    case 0x8003FCF8u: goto label_8003FCF8;
    case 0x8003FCFCu: goto label_8003FCFC;
    case 0x8003FD00u: goto label_8003FD00;
    case 0x8003FD04u: goto label_8003FD04;
    case 0x8003FD08u: goto label_8003FD08;
    case 0x8003FD0Cu: goto label_8003FD0C;
    case 0x8003FD10u: goto label_8003FD10;
    case 0x8003FD14u: goto label_8003FD14;
    case 0x8003FD18u: goto label_8003FD18;
    case 0x8003FD1Cu: goto label_8003FD1C;
    case 0x8003FD20u: goto label_8003FD20;
    case 0x8003FD24u: goto label_8003FD24;
    case 0x8003FD28u: goto label_8003FD28;
    case 0x8003FD2Cu: goto label_8003FD2C;
    case 0x8003FD30u: goto label_8003FD30;
    case 0x8003FD34u: goto label_8003FD34;
    case 0x8003FD38u: goto label_8003FD38;
    case 0x8003FD3Cu: goto label_8003FD3C;
    case 0x8003FD40u: goto label_8003FD40;
    case 0x8003FD44u: goto label_8003FD44;
    case 0x8003FD48u: goto label_8003FD48;
    case 0x8003FD4Cu: goto label_8003FD4C;
    case 0x8003FD50u: goto label_8003FD50;
    case 0x8003FD54u: goto label_8003FD54;
    case 0x8003FD58u: goto label_8003FD58;
    case 0x8003FD5Cu: goto label_8003FD5C;
    case 0x8003FD60u: goto label_8003FD60;
    case 0x8003FD64u: goto label_8003FD64;
    case 0x8003FD68u: goto label_8003FD68;
    case 0x8003FD6Cu: goto label_8003FD6C;
    case 0x8003FD70u: goto label_8003FD70;
    case 0x8003FD74u: goto label_8003FD74;
    case 0x8003FD78u: goto label_8003FD78;
    case 0x8003FD7Cu: goto label_8003FD7C;
    case 0x8003FD80u: goto label_8003FD80;
    case 0x8003FD84u: goto label_8003FD84;
    case 0x8003FD88u: goto label_8003FD88;
    case 0x8003FD8Cu: goto label_8003FD8C;
    case 0x8003FD90u: goto label_8003FD90;
    case 0x8003FD94u: goto label_8003FD94;
    case 0x8003FD98u: goto label_8003FD98;
    case 0x8003FD9Cu: goto label_8003FD9C;
    case 0x8003FDA0u: goto label_8003FDA0;
    case 0x8003FDA4u: goto label_8003FDA4;
    case 0x8003FDA8u: goto label_8003FDA8;
    case 0x8003FDACu: goto label_8003FDAC;
    case 0x8003FDB0u: goto label_8003FDB0;
    case 0x8003FDB4u: goto label_8003FDB4;
    case 0x8003FDB8u: goto label_8003FDB8;
    case 0x8003FDBCu: goto label_8003FDBC;
    case 0x8003FDC0u: goto label_8003FDC0;
    case 0x8003FDC4u: goto label_8003FDC4;
    case 0x8003FDC8u: goto label_8003FDC8;
    case 0x8003FDCCu: goto label_8003FDCC;
    case 0x8003FDD0u: goto label_8003FDD0;
    case 0x8003FDD4u: goto label_8003FDD4;
    case 0x8003FDD8u: goto label_8003FDD8;
    case 0x8003FDDCu: goto label_8003FDDC;
    case 0x8003FDE0u: goto label_8003FDE0;
    case 0x8003FDE4u: goto label_8003FDE4;
    case 0x8003FDE8u: goto label_8003FDE8;
    case 0x8003FDECu: goto label_8003FDEC;
    case 0x8003FDF0u: goto label_8003FDF0;
    case 0x8003FDF4u: goto label_8003FDF4;
    case 0x8003FDF8u: goto label_8003FDF8;
    case 0x8003FDFCu: goto label_8003FDFC;
    case 0x8003FE00u: goto label_8003FE00;
    case 0x8003FE04u: goto label_8003FE04;
    case 0x8003FE08u: goto label_8003FE08;
    case 0x8003FE0Cu: goto label_8003FE0C;
    case 0x8003FE10u: goto label_8003FE10;
    case 0x8003FE14u: goto label_8003FE14;
    case 0x8003FE18u: goto label_8003FE18;
    case 0x8003FE1Cu: goto label_8003FE1C;
    case 0x8003FE20u: goto label_8003FE20;
    case 0x8003FE24u: goto label_8003FE24;
    case 0x8003FE28u: goto label_8003FE28;
    case 0x8003FE2Cu: goto label_8003FE2C;
    case 0x8003FE30u: goto label_8003FE30;
    case 0x8003FE34u: goto label_8003FE34;
    case 0x8003FE38u: goto label_8003FE38;
    case 0x8003FE3Cu: goto label_8003FE3C;
    case 0x8003FE40u: goto label_8003FE40;
    case 0x8003FE44u: goto label_8003FE44;
    case 0x8003FE48u: goto label_8003FE48;
    case 0x8003FE4Cu: goto label_8003FE4C;
    case 0x8003FE50u: goto label_8003FE50;
    case 0x8003FE54u: goto label_8003FE54;
    case 0x8003FE58u: goto label_8003FE58;
    case 0x8003FE5Cu: goto label_8003FE5C;
    case 0x8003FE60u: goto label_8003FE60;
    case 0x8003FE64u: goto label_8003FE64;
    case 0x8003FE68u: goto label_8003FE68;
    case 0x8003FE6Cu: goto label_8003FE6C;
    case 0x8003FE70u: goto label_8003FE70;
    case 0x8003FE74u: goto label_8003FE74;
    case 0x8003FE78u: goto label_8003FE78;
    case 0x8003FE7Cu: goto label_8003FE7C;
    case 0x8003FE80u: goto label_8003FE80;
    case 0x8003FE84u: goto label_8003FE84;
    case 0x8003FE88u: goto label_8003FE88;
    case 0x8003FE8Cu: goto label_8003FE8C;
    case 0x8003FE90u: goto label_8003FE90;
    case 0x8003FE94u: goto label_8003FE94;
    case 0x8003FE98u: goto label_8003FE98;
    case 0x8003FE9Cu: goto label_8003FE9C;
    case 0x8003FEA0u: goto label_8003FEA0;
    case 0x8003FEA4u: goto label_8003FEA4;
    case 0x8003FEA8u: goto label_8003FEA8;
    case 0x8003FEACu: goto label_8003FEAC;
    case 0x8003FEB0u: goto label_8003FEB0;
    case 0x8003FEB4u: goto label_8003FEB4;
    case 0x8003FEB8u: goto label_8003FEB8;
    case 0x8003FEBCu: goto label_8003FEBC;
    case 0x8003FEC0u: goto label_8003FEC0;
    case 0x8003FEC4u: goto label_8003FEC4;
    case 0x8003FEC8u: goto label_8003FEC8;
    case 0x8003FECCu: goto label_8003FECC;
    case 0x8003FED0u: goto label_8003FED0;
    case 0x8003FED4u: goto label_8003FED4;
    case 0x8003FED8u: goto label_8003FED8;
    case 0x8003FEDCu: goto label_8003FEDC;
    case 0x8003FEE0u: goto label_8003FEE0;
    case 0x8003FEE4u: goto label_8003FEE4;
    case 0x8003FEE8u: goto label_8003FEE8;
    case 0x8003FEECu: goto label_8003FEEC;
    case 0x8003FEF0u: goto label_8003FEF0;
    case 0x8003FEF4u: goto label_8003FEF4;
    case 0x8003FEF8u: goto label_8003FEF8;
    case 0x8003FEFCu: goto label_8003FEFC;
    case 0x8003FF00u: goto label_8003FF00;
    case 0x8003FF04u: goto label_8003FF04;
    case 0x8003FF08u: goto label_8003FF08;
    case 0x8003FF0Cu: goto label_8003FF0C;
    case 0x8003FF10u: goto label_8003FF10;
    case 0x8003FF14u: goto label_8003FF14;
    case 0x8003FF18u: goto label_8003FF18;
    case 0x8003FF1Cu: goto label_8003FF1C;
    case 0x8003FF20u: goto label_8003FF20;
    case 0x8003FF24u: goto label_8003FF24;
    case 0x8003FF28u: goto label_8003FF28;
    case 0x8003FF2Cu: goto label_8003FF2C;
    case 0x8003FF30u: goto label_8003FF30;
    case 0x8003FF34u: goto label_8003FF34;
    case 0x8003FF38u: goto label_8003FF38;
    case 0x8003FF3Cu: goto label_8003FF3C;
    case 0x8003FF40u: goto label_8003FF40;
    case 0x8003FF44u: goto label_8003FF44;
    case 0x8003FF48u: goto label_8003FF48;
    case 0x8003FF4Cu: goto label_8003FF4C;
    case 0x8003FF50u: goto label_8003FF50;
    case 0x8003FF54u: goto label_8003FF54;
    case 0x8003FF58u: goto label_8003FF58;
    case 0x8003FF5Cu: goto label_8003FF5C;
    case 0x8003FF60u: goto label_8003FF60;
    case 0x8003FF64u: goto label_8003FF64;
    case 0x8003FF68u: goto label_8003FF68;
    case 0x8003FF6Cu: goto label_8003FF6C;
    case 0x8003FF70u: goto label_8003FF70;
    case 0x8003FF74u: goto label_8003FF74;
    case 0x8003FF78u: goto label_8003FF78;
    case 0x8003FF7Cu: goto label_8003FF7C;
    case 0x8003FF80u: goto label_8003FF80;
    case 0x8003FF84u: goto label_8003FF84;
    case 0x8003FF88u: goto label_8003FF88;
    case 0x8003FF8Cu: goto label_8003FF8C;
    case 0x8003FF90u: goto label_8003FF90;
    case 0x8003FF94u: goto label_8003FF94;
    case 0x8003FF98u: goto label_8003FF98;
    case 0x8003FF9Cu: goto label_8003FF9C;
    case 0x8003FFA0u: goto label_8003FFA0;
    case 0x8003FFA4u: goto label_8003FFA4;
    case 0x8003FFA8u: goto label_8003FFA8;
    case 0x8003FFACu: goto label_8003FFAC;
    case 0x8003FFB0u: goto label_8003FFB0;
    case 0x8003FFB4u: goto label_8003FFB4;
    case 0x8003FFB8u: goto label_8003FFB8;
    case 0x8003FFBCu: goto label_8003FFBC;
    case 0x8003FFC0u: goto label_8003FFC0;
    case 0x8003FFC4u: goto label_8003FFC4;
    case 0x8003FFC8u: goto label_8003FFC8;
    case 0x8003FFCCu: goto label_8003FFCC;
    case 0x8003FFD0u: goto label_8003FFD0;
    case 0x8003FFD4u: goto label_8003FFD4;
    case 0x8003FFD8u: goto label_8003FFD8;
    case 0x8003FFDCu: goto label_8003FFDC;
    case 0x8003FFE0u: goto label_8003FFE0;
    case 0x8003FFE4u: goto label_8003FFE4;
    case 0x8003FFE8u: goto label_8003FFE8;
    case 0x8003FFECu: goto label_8003FFEC;
    case 0x8003FFF0u: goto label_8003FFF0;
    case 0x8003FFF4u: goto label_8003FFF4;
    case 0x8003FFF8u: goto label_8003FFF8;
    case 0x8003FFFCu: goto label_8003FFFC;
    case 0x80040000u: goto label_80040000;
    case 0x80040004u: goto label_80040004;
    case 0x80040008u: goto label_80040008;
    case 0x8004000Cu: goto label_8004000C;
    case 0x80040010u: goto label_80040010;
    case 0x80040014u: goto label_80040014;
    case 0x80040018u: goto label_80040018;
    case 0x8004001Cu: goto label_8004001C;
    case 0x80040020u: goto label_80040020;
    case 0x80040024u: goto label_80040024;
    case 0x80040028u: goto label_80040028;
    case 0x8004002Cu: goto label_8004002C;
    case 0x80040030u: goto label_80040030;
    case 0x80040034u: goto label_80040034;
    case 0x80040038u: goto label_80040038;
    case 0x8004003Cu: goto label_8004003C;
    case 0x80040040u: goto label_80040040;
    case 0x80040044u: goto label_80040044;
    case 0x80040048u: goto label_80040048;
    case 0x8004004Cu: goto label_8004004C;
    case 0x80040050u: goto label_80040050;
    case 0x80040054u: goto label_80040054;
    case 0x80040058u: goto label_80040058;
    case 0x8004005Cu: goto label_8004005C;
    case 0x80040060u: goto label_80040060;
    case 0x80040064u: goto label_80040064;
    case 0x80040068u: goto label_80040068;
    case 0x8004006Cu: goto label_8004006C;
    case 0x80040070u: goto label_80040070;
    case 0x80040074u: goto label_80040074;
    case 0x80040078u: goto label_80040078;
    case 0x8004007Cu: goto label_8004007C;
    case 0x80040080u: goto label_80040080;
    case 0x80040084u: goto label_80040084;
    case 0x80040088u: goto label_80040088;
    case 0x8004008Cu: goto label_8004008C;
    case 0x80040090u: goto label_80040090;
    case 0x80040094u: goto label_80040094;
    case 0x80040098u: goto label_80040098;
    case 0x8004009Cu: goto label_8004009C;
    case 0x800400A0u: goto label_800400A0;
    case 0x800400A4u: goto label_800400A4;
    case 0x800400A8u: goto label_800400A8;
    case 0x800400ACu: goto label_800400AC;
    case 0x800400B0u: goto label_800400B0;
    case 0x800400B4u: goto label_800400B4;
    case 0x800400B8u: goto label_800400B8;
    case 0x800400BCu: goto label_800400BC;
    case 0x800400C0u: goto label_800400C0;
    case 0x800400C4u: goto label_800400C4;
    case 0x800400C8u: goto label_800400C8;
    case 0x800400CCu: goto label_800400CC;
    case 0x800400D0u: goto label_800400D0;
    case 0x800400D4u: goto label_800400D4;
    case 0x800400D8u: goto label_800400D8;
    case 0x800400DCu: goto label_800400DC;
    case 0x800400E0u: goto label_800400E0;
    case 0x800400E4u: goto label_800400E4;
    case 0x800400E8u: goto label_800400E8;
    case 0x800400ECu: goto label_800400EC;
    case 0x800400F0u: goto label_800400F0;
    case 0x800400F4u: goto label_800400F4;
    case 0x800400F8u: goto label_800400F8;
    case 0x800400FCu: goto label_800400FC;
    case 0x80040100u: goto label_80040100;
    case 0x80040104u: goto label_80040104;
    case 0x80040108u: goto label_80040108;
    case 0x8004010Cu: goto label_8004010C;
    case 0x80040110u: goto label_80040110;
    case 0x80040114u: goto label_80040114;
    case 0x80040118u: goto label_80040118;
    case 0x8004011Cu: goto label_8004011C;
    case 0x80040120u: goto label_80040120;
    case 0x80040124u: goto label_80040124;
    case 0x80040128u: goto label_80040128;
    case 0x8004012Cu: goto label_8004012C;
    case 0x80040130u: goto label_80040130;
    case 0x80040134u: goto label_80040134;
    case 0x80040138u: goto label_80040138;
    case 0x8004013Cu: goto label_8004013C;
    case 0x80040140u: goto label_80040140;
    case 0x80040144u: goto label_80040144;
    case 0x80040148u: goto label_80040148;
    case 0x8004014Cu: goto label_8004014C;
    case 0x80040150u: goto label_80040150;
    case 0x80040154u: goto label_80040154;
    case 0x80040158u: goto label_80040158;
    case 0x8004015Cu: goto label_8004015C;
    case 0x80040160u: goto label_80040160;
    case 0x80040164u: goto label_80040164;
    case 0x80040168u: goto label_80040168;
    case 0x8004016Cu: goto label_8004016C;
    case 0x80040170u: goto label_80040170;
    case 0x80040174u: goto label_80040174;
    case 0x80040178u: goto label_80040178;
    case 0x8004017Cu: goto label_8004017C;
    case 0x80040180u: goto label_80040180;
    case 0x80040184u: goto label_80040184;
    case 0x80040188u: goto label_80040188;
    case 0x8004018Cu: goto label_8004018C;
    case 0x80040190u: goto label_80040190;
    case 0x80040194u: goto label_80040194;
    case 0x80040198u: goto label_80040198;
    case 0x8004019Cu: goto label_8004019C;
    case 0x800401A0u: goto label_800401A0;
    case 0x800401A4u: goto label_800401A4;
    case 0x800401A8u: goto label_800401A8;
    case 0x800401ACu: goto label_800401AC;
    case 0x800401B0u: goto label_800401B0;
    case 0x800401B4u: goto label_800401B4;
    case 0x800401B8u: goto label_800401B8;
    case 0x800401BCu: goto label_800401BC;
    case 0x800401C0u: goto label_800401C0;
    case 0x800401C4u: goto label_800401C4;
    case 0x800401C8u: goto label_800401C8;
    case 0x800401CCu: goto label_800401CC;
    case 0x800401D0u: goto label_800401D0;
    case 0x800401D4u: goto label_800401D4;
    case 0x800401D8u: goto label_800401D8;
    case 0x800401DCu: goto label_800401DC;
    case 0x800401E0u: goto label_800401E0;
    case 0x800401E4u: goto label_800401E4;
    case 0x800401E8u: goto label_800401E8;
    case 0x800401ECu: goto label_800401EC;
    case 0x800401F0u: goto label_800401F0;
    case 0x800401F4u: goto label_800401F4;
    case 0x800401F8u: goto label_800401F8;
    case 0x800401FCu: goto label_800401FC;
    case 0x80040200u: goto label_80040200;
    case 0x80040204u: goto label_80040204;
    case 0x80040208u: goto label_80040208;
    case 0x8004020Cu: goto label_8004020C;
    case 0x80040210u: goto label_80040210;
    case 0x80040214u: goto label_80040214;
    case 0x80040218u: goto label_80040218;
    case 0x8004021Cu: goto label_8004021C;
    case 0x80040220u: goto label_80040220;
    case 0x80040224u: goto label_80040224;
    case 0x80040228u: goto label_80040228;
    case 0x8004022Cu: goto label_8004022C;
    case 0x80040230u: goto label_80040230;
    case 0x80040234u: goto label_80040234;
    case 0x80040238u: goto label_80040238;
    case 0x8004023Cu: goto label_8004023C;
    case 0x80040240u: goto label_80040240;
    case 0x80040244u: goto label_80040244;
    case 0x80040248u: goto label_80040248;
    case 0x8004024Cu: goto label_8004024C;
    case 0x80040250u: goto label_80040250;
    case 0x80040254u: goto label_80040254;
    case 0x80040258u: goto label_80040258;
    case 0x8004025Cu: goto label_8004025C;
    case 0x80040260u: goto label_80040260;
    case 0x80040264u: goto label_80040264;
    case 0x80040268u: goto label_80040268;
    case 0x8004026Cu: goto label_8004026C;
    case 0x80040270u: goto label_80040270;
    case 0x80040274u: goto label_80040274;
    case 0x80040278u: goto label_80040278;
    case 0x8004027Cu: goto label_8004027C;
    case 0x80040280u: goto label_80040280;
    case 0x80040284u: goto label_80040284;
    case 0x80040288u: goto label_80040288;
    case 0x8004028Cu: goto label_8004028C;
    case 0x80040290u: goto label_80040290;
    case 0x80040294u: goto label_80040294;
    case 0x80040298u: goto label_80040298;
    case 0x8004029Cu: goto label_8004029C;
    case 0x800402A0u: goto label_800402A0;
    case 0x800402A4u: goto label_800402A4;
    case 0x800402A8u: goto label_800402A8;
    case 0x800402ACu: goto label_800402AC;
    case 0x800402B0u: goto label_800402B0;
    case 0x800402B4u: goto label_800402B4;
    case 0x800402B8u: goto label_800402B8;
    case 0x800402BCu: goto label_800402BC;
    case 0x800402C0u: goto label_800402C0;
    case 0x800402C4u: goto label_800402C4;
    case 0x800402C8u: goto label_800402C8;
    case 0x800402CCu: goto label_800402CC;
    case 0x800402D0u: goto label_800402D0;
    case 0x800402D4u: goto label_800402D4;
    case 0x800402D8u: goto label_800402D8;
    case 0x800402DCu: goto label_800402DC;
    case 0x800402E0u: goto label_800402E0;
    case 0x800402E4u: goto label_800402E4;
    case 0x800402E8u: goto label_800402E8;
    case 0x800402ECu: goto label_800402EC;
    case 0x800402F0u: goto label_800402F0;
    case 0x800402F4u: goto label_800402F4;
    case 0x800402F8u: goto label_800402F8;
    case 0x800402FCu: goto label_800402FC;
    case 0x80040300u: goto label_80040300;
    case 0x80040304u: goto label_80040304;
    case 0x80040308u: goto label_80040308;
    case 0x8004030Cu: goto label_8004030C;
    case 0x80040310u: goto label_80040310;
    case 0x80040314u: goto label_80040314;
    case 0x80040318u: goto label_80040318;
    case 0x8004031Cu: goto label_8004031C;
    case 0x80040320u: goto label_80040320;
    case 0x80040324u: goto label_80040324;
    case 0x80040328u: goto label_80040328;
    case 0x8004032Cu: goto label_8004032C;
    case 0x80040330u: goto label_80040330;
    case 0x80040334u: goto label_80040334;
    case 0x80040338u: goto label_80040338;
    case 0x8004033Cu: goto label_8004033C;
    case 0x80040340u: goto label_80040340;
    case 0x80040344u: goto label_80040344;
    case 0x80040348u: goto label_80040348;
    case 0x8004034Cu: goto label_8004034C;
    case 0x80040350u: goto label_80040350;
    case 0x80040354u: goto label_80040354;
    case 0x80040358u: goto label_80040358;
    case 0x8004035Cu: goto label_8004035C;
    case 0x80040360u: goto label_80040360;
    case 0x80040364u: goto label_80040364;
    case 0x80040368u: goto label_80040368;
    case 0x8004036Cu: goto label_8004036C;
    case 0x80040370u: goto label_80040370;
    case 0x80040374u: goto label_80040374;
    case 0x80040378u: goto label_80040378;
    case 0x8004037Cu: goto label_8004037C;
    case 0x80040380u: goto label_80040380;
    case 0x80040384u: goto label_80040384;
    case 0x80040388u: goto label_80040388;
    case 0x8004038Cu: goto label_8004038C;
    case 0x80040390u: goto label_80040390;
    case 0x80040394u: goto label_80040394;
    case 0x80040398u: goto label_80040398;
    case 0x8004039Cu: goto label_8004039C;
    case 0x800403A0u: goto label_800403A0;
    case 0x800403A4u: goto label_800403A4;
    case 0x800403A8u: goto label_800403A8;
    case 0x800403ACu: goto label_800403AC;
    case 0x800403B0u: goto label_800403B0;
    case 0x800403B4u: goto label_800403B4;
    case 0x800403B8u: goto label_800403B8;
    case 0x800403BCu: goto label_800403BC;
    case 0x800403C0u: goto label_800403C0;
    case 0x800403C4u: goto label_800403C4;
    case 0x800403C8u: goto label_800403C8;
    case 0x800403CCu: goto label_800403CC;
    case 0x800403D0u: goto label_800403D0;
    case 0x800403D4u: goto label_800403D4;
    case 0x800403D8u: goto label_800403D8;
    case 0x800403DCu: goto label_800403DC;
    case 0x800403E0u: goto label_800403E0;
    case 0x800403E4u: goto label_800403E4;
    case 0x800403E8u: goto label_800403E8;
    case 0x800403ECu: goto label_800403EC;
    case 0x800403F0u: goto label_800403F0;
    case 0x800403F4u: goto label_800403F4;
    case 0x800403F8u: goto label_800403F8;
    case 0x800403FCu: goto label_800403FC;
    case 0x80040400u: goto label_80040400;
    case 0x80040404u: goto label_80040404;
    case 0x80040408u: goto label_80040408;
    case 0x8004040Cu: goto label_8004040C;
    case 0x80040410u: goto label_80040410;
    case 0x80040414u: goto label_80040414;
    case 0x80040418u: goto label_80040418;
    case 0x8004041Cu: goto label_8004041C;
    case 0x80040420u: goto label_80040420;
    case 0x80040424u: goto label_80040424;
    case 0x80040428u: goto label_80040428;
    case 0x8004042Cu: goto label_8004042C;
    case 0x80040430u: goto label_80040430;
    case 0x80040434u: goto label_80040434;
    case 0x80040438u: goto label_80040438;
    case 0x8004043Cu: goto label_8004043C;
    case 0x80040440u: goto label_80040440;
    case 0x80040444u: goto label_80040444;
    case 0x80040448u: goto label_80040448;
    case 0x8004044Cu: goto label_8004044C;
    case 0x80040450u: goto label_80040450;
    case 0x80040454u: goto label_80040454;
    case 0x80040458u: goto label_80040458;
    case 0x8004045Cu: goto label_8004045C;
    case 0x80040460u: goto label_80040460;
    case 0x80040464u: goto label_80040464;
    case 0x80040468u: goto label_80040468;
    case 0x8004046Cu: goto label_8004046C;
    case 0x80040470u: goto label_80040470;
    case 0x80040474u: goto label_80040474;
    case 0x80040478u: goto label_80040478;
    case 0x8004047Cu: goto label_8004047C;
    case 0x80040480u: goto label_80040480;
    case 0x80040484u: goto label_80040484;
    case 0x80040488u: goto label_80040488;
    case 0x8004048Cu: goto label_8004048C;
    case 0x80040490u: goto label_80040490;
    case 0x80040494u: goto label_80040494;
    case 0x80040498u: goto label_80040498;
    case 0x8004049Cu: goto label_8004049C;
    case 0x800404A0u: goto label_800404A0;
    case 0x800404A4u: goto label_800404A4;
    case 0x800404A8u: goto label_800404A8;
    case 0x800404ACu: goto label_800404AC;
    case 0x800404B0u: goto label_800404B0;
    case 0x800404B4u: goto label_800404B4;
    case 0x800404B8u: goto label_800404B8;
    case 0x800404BCu: goto label_800404BC;
    case 0x800404C0u: goto label_800404C0;
    case 0x800404C4u: goto label_800404C4;
    case 0x800404C8u: goto label_800404C8;
    case 0x800404CCu: goto label_800404CC;
    case 0x800404D0u: goto label_800404D0;
    case 0x800404D4u: goto label_800404D4;
    case 0x800404D8u: goto label_800404D8;
    case 0x800404DCu: goto label_800404DC;
    case 0x800404E0u: goto label_800404E0;
    case 0x800404E4u: goto label_800404E4;
    case 0x800404E8u: goto label_800404E8;
    case 0x800404ECu: goto label_800404EC;
    case 0x800404F0u: goto label_800404F0;
    case 0x800404F4u: goto label_800404F4;
    case 0x800404F8u: goto label_800404F8;
    case 0x800404FCu: goto label_800404FC;
    case 0x80040500u: goto label_80040500;
    case 0x80040504u: goto label_80040504;
    case 0x80040508u: goto label_80040508;
    case 0x8004050Cu: goto label_8004050C;
    case 0x80040510u: goto label_80040510;
    case 0x80040514u: goto label_80040514;
    case 0x80040518u: goto label_80040518;
    case 0x8004051Cu: goto label_8004051C;
    case 0x80040520u: goto label_80040520;
    case 0x80040524u: goto label_80040524;
    case 0x80040528u: goto label_80040528;
    case 0x8004052Cu: goto label_8004052C;
    case 0x80040530u: goto label_80040530;
    case 0x80040534u: goto label_80040534;
    case 0x80040538u: goto label_80040538;
    case 0x8004053Cu: goto label_8004053C;
    case 0x80040540u: goto label_80040540;
    case 0x80040544u: goto label_80040544;
    case 0x80040548u: goto label_80040548;
    case 0x8004054Cu: goto label_8004054C;
    case 0x80040550u: goto label_80040550;
    case 0x80040554u: goto label_80040554;
    case 0x80040558u: goto label_80040558;
    case 0x8004055Cu: goto label_8004055C;
    case 0x80040560u: goto label_80040560;
    case 0x80040564u: goto label_80040564;
    case 0x80040568u: goto label_80040568;
    case 0x8004056Cu: goto label_8004056C;
    case 0x80040570u: goto label_80040570;
    case 0x80040574u: goto label_80040574;
    case 0x80040578u: goto label_80040578;
    case 0x8004057Cu: goto label_8004057C;
    case 0x80040580u: goto label_80040580;
    case 0x80040584u: goto label_80040584;
    case 0x80040588u: goto label_80040588;
    case 0x8004058Cu: goto label_8004058C;
    case 0x80040590u: goto label_80040590;
    case 0x80040594u: goto label_80040594;
    case 0x80040598u: goto label_80040598;
    case 0x8004059Cu: goto label_8004059C;
    case 0x800405A0u: goto label_800405A0;
    case 0x800405A4u: goto label_800405A4;
    case 0x800405A8u: goto label_800405A8;
    case 0x800405ACu: goto label_800405AC;
    case 0x800405B0u: goto label_800405B0;
    case 0x800405B4u: goto label_800405B4;
    case 0x800405B8u: goto label_800405B8;
    case 0x800405BCu: goto label_800405BC;
    case 0x800405C0u: goto label_800405C0;
    case 0x800405C4u: goto label_800405C4;
    case 0x800405C8u: goto label_800405C8;
    case 0x800405CCu: goto label_800405CC;
    case 0x800405D0u: goto label_800405D0;
    case 0x800405D4u: goto label_800405D4;
    case 0x800405D8u: goto label_800405D8;
    case 0x800405DCu: goto label_800405DC;
    case 0x800405E0u: goto label_800405E0;
    case 0x800405E4u: goto label_800405E4;
    case 0x800405E8u: goto label_800405E8;
    case 0x800405ECu: goto label_800405EC;
    case 0x800405F0u: goto label_800405F0;
    case 0x800405F4u: goto label_800405F4;
    case 0x800405F8u: goto label_800405F8;
    case 0x800405FCu: goto label_800405FC;
    case 0x80040600u: goto label_80040600;
    case 0x80040604u: goto label_80040604;
    case 0x80040608u: goto label_80040608;
    case 0x8004060Cu: goto label_8004060C;
    case 0x80040610u: goto label_80040610;
    case 0x80040614u: goto label_80040614;
    case 0x80040618u: goto label_80040618;
    case 0x8004061Cu: goto label_8004061C;
    case 0x80040620u: goto label_80040620;
    case 0x80040624u: goto label_80040624;
    case 0x80040628u: goto label_80040628;
    case 0x8004062Cu: goto label_8004062C;
    case 0x80040630u: goto label_80040630;
    case 0x80040634u: goto label_80040634;
    case 0x80040638u: goto label_80040638;
    case 0x8004063Cu: goto label_8004063C;
    case 0x80040640u: goto label_80040640;
    case 0x80040644u: goto label_80040644;
    case 0x80040648u: goto label_80040648;
    case 0x8004064Cu: goto label_8004064C;
    case 0x80040650u: goto label_80040650;
    case 0x80040654u: goto label_80040654;
    case 0x80040658u: goto label_80040658;
    case 0x8004065Cu: goto label_8004065C;
    case 0x80040660u: goto label_80040660;
    case 0x80040664u: goto label_80040664;
    case 0x80040668u: goto label_80040668;
    case 0x8004066Cu: goto label_8004066C;
    case 0x80040670u: goto label_80040670;
    case 0x80040674u: goto label_80040674;
    case 0x80040678u: goto label_80040678;
    case 0x8004067Cu: goto label_8004067C;
    case 0x80040680u: goto label_80040680;
    case 0x80040684u: goto label_80040684;
    case 0x80040688u: goto label_80040688;
    case 0x8004068Cu: goto label_8004068C;
    case 0x80040690u: goto label_80040690;
    case 0x80040694u: goto label_80040694;
    case 0x80040698u: goto label_80040698;
    case 0x8004069Cu: goto label_8004069C;
    case 0x800406A0u: goto label_800406A0;
    case 0x800406A4u: goto label_800406A4;
    case 0x800406A8u: goto label_800406A8;
    case 0x800406ACu: goto label_800406AC;
    case 0x800406B0u: goto label_800406B0;
    case 0x800406B4u: goto label_800406B4;
    case 0x800406B8u: goto label_800406B8;
    case 0x800406BCu: goto label_800406BC;
    case 0x800406C0u: goto label_800406C0;
    case 0x800406C4u: goto label_800406C4;
    case 0x800406C8u: goto label_800406C8;
    case 0x800406CCu: goto label_800406CC;
    case 0x800406D0u: goto label_800406D0;
    case 0x800406D4u: goto label_800406D4;
    case 0x800406D8u: goto label_800406D8;
    case 0x800406DCu: goto label_800406DC;
    case 0x800406E0u: goto label_800406E0;
    case 0x800406E4u: goto label_800406E4;
    case 0x800406E8u: goto label_800406E8;
    case 0x800406ECu: goto label_800406EC;
    case 0x800406F0u: goto label_800406F0;
    case 0x800406F4u: goto label_800406F4;
    case 0x800406F8u: goto label_800406F8;
    case 0x800406FCu: goto label_800406FC;
    case 0x80040700u: goto label_80040700;
    case 0x80040704u: goto label_80040704;
    case 0x80040708u: goto label_80040708;
    case 0x8004070Cu: goto label_8004070C;
    case 0x80040710u: goto label_80040710;
    case 0x80040714u: goto label_80040714;
    case 0x80040718u: goto label_80040718;
    case 0x8004071Cu: goto label_8004071C;
    case 0x80040720u: goto label_80040720;
    case 0x80040724u: goto label_80040724;
    case 0x80040728u: goto label_80040728;
    case 0x8004072Cu: goto label_8004072C;
    case 0x80040730u: goto label_80040730;
    case 0x80040734u: goto label_80040734;
    case 0x80040738u: goto label_80040738;
    case 0x8004073Cu: goto label_8004073C;
    case 0x80040740u: goto label_80040740;
    case 0x80040744u: goto label_80040744;
    case 0x80040748u: goto label_80040748;
    case 0x8004074Cu: goto label_8004074C;
    case 0x80040750u: goto label_80040750;
    case 0x80040754u: goto label_80040754;
    case 0x80040758u: goto label_80040758;
    case 0x8004075Cu: goto label_8004075C;
    case 0x80040760u: goto label_80040760;
    case 0x80040764u: goto label_80040764;
    case 0x80040768u: goto label_80040768;
    case 0x8004076Cu: goto label_8004076C;
    case 0x80040770u: goto label_80040770;
    case 0x80040774u: goto label_80040774;
    case 0x80040778u: goto label_80040778;
    case 0x8004077Cu: goto label_8004077C;
    case 0x80040780u: goto label_80040780;
    case 0x80040784u: goto label_80040784;
    case 0x80040788u: goto label_80040788;
    case 0x8004078Cu: goto label_8004078C;
    case 0x80040790u: goto label_80040790;
    case 0x80040794u: goto label_80040794;
    case 0x80040798u: goto label_80040798;
    case 0x8004079Cu: goto label_8004079C;
    case 0x800407A0u: goto label_800407A0;
    case 0x800407A4u: goto label_800407A4;
    case 0x800407A8u: goto label_800407A8;
    case 0x800407ACu: goto label_800407AC;
    case 0x800407B0u: goto label_800407B0;
    case 0x800407B4u: goto label_800407B4;
    case 0x800407B8u: goto label_800407B8;
    case 0x800407BCu: goto label_800407BC;
    case 0x800407C0u: goto label_800407C0;
    case 0x800407C4u: goto label_800407C4;
    case 0x800407C8u: goto label_800407C8;
    case 0x800407CCu: goto label_800407CC;
    case 0x800407D0u: goto label_800407D0;
    case 0x800407D4u: goto label_800407D4;
    case 0x800407D8u: goto label_800407D8;
    case 0x800407DCu: goto label_800407DC;
    case 0x800407E0u: goto label_800407E0;
    case 0x800407E4u: goto label_800407E4;
    case 0x800407E8u: goto label_800407E8;
    case 0x800407ECu: goto label_800407EC;
    case 0x800407F0u: goto label_800407F0;
    case 0x800407F4u: goto label_800407F4;
    case 0x800407F8u: goto label_800407F8;
    case 0x800407FCu: goto label_800407FC;
    case 0x80040800u: goto label_80040800;
    case 0x80040804u: goto label_80040804;
    case 0x80040808u: goto label_80040808;
    case 0x8004080Cu: goto label_8004080C;
    case 0x80040810u: goto label_80040810;
    case 0x80040814u: goto label_80040814;
    case 0x80040818u: goto label_80040818;
    case 0x8004081Cu: goto label_8004081C;
    case 0x80040820u: goto label_80040820;
    case 0x80040824u: goto label_80040824;
    case 0x80040828u: goto label_80040828;
    case 0x8004082Cu: goto label_8004082C;
    case 0x80040830u: goto label_80040830;
    case 0x80040834u: goto label_80040834;
    case 0x80040838u: goto label_80040838;
    case 0x8004083Cu: goto label_8004083C;
    case 0x80040840u: goto label_80040840;
    case 0x80040844u: goto label_80040844;
    case 0x80040848u: goto label_80040848;
    case 0x8004084Cu: goto label_8004084C;
    case 0x80040850u: goto label_80040850;
    case 0x80040854u: goto label_80040854;
    case 0x80040858u: goto label_80040858;
    case 0x8004085Cu: goto label_8004085C;
    case 0x80040860u: goto label_80040860;
    case 0x80040864u: goto label_80040864;
    case 0x80040868u: goto label_80040868;
    case 0x8004086Cu: goto label_8004086C;
    case 0x80040870u: goto label_80040870;
    case 0x80040874u: goto label_80040874;
    case 0x80040878u: goto label_80040878;
    case 0x8004087Cu: goto label_8004087C;
    case 0x80040880u: goto label_80040880;
    case 0x80040884u: goto label_80040884;
    case 0x80040888u: goto label_80040888;
    case 0x8004088Cu: goto label_8004088C;
    case 0x80040890u: goto label_80040890;
    case 0x80040894u: goto label_80040894;
    case 0x80040898u: goto label_80040898;
    case 0x8004089Cu: goto label_8004089C;
    case 0x800408A0u: goto label_800408A0;
    case 0x800408A4u: goto label_800408A4;
    case 0x800408A8u: goto label_800408A8;
    case 0x800408ACu: goto label_800408AC;
    case 0x800408B0u: goto label_800408B0;
    case 0x800408B4u: goto label_800408B4;
    case 0x800408B8u: goto label_800408B8;
    case 0x800408BCu: goto label_800408BC;
    case 0x800408C0u: goto label_800408C0;
    case 0x800408C4u: goto label_800408C4;
    case 0x800408C8u: goto label_800408C8;
    case 0x800408CCu: goto label_800408CC;
    case 0x800408D0u: goto label_800408D0;
    case 0x800408D4u: goto label_800408D4;
    case 0x800408D8u: goto label_800408D8;
    case 0x800408DCu: goto label_800408DC;
    case 0x800408E0u: goto label_800408E0;
    case 0x800408E4u: goto label_800408E4;
    case 0x800408E8u: goto label_800408E8;
    case 0x800408ECu: goto label_800408EC;
    case 0x800408F0u: goto label_800408F0;
    case 0x800408F4u: goto label_800408F4;
    case 0x800408F8u: goto label_800408F8;
    case 0x800408FCu: goto label_800408FC;
    case 0x80040900u: goto label_80040900;
    case 0x80040904u: goto label_80040904;
    case 0x80040908u: goto label_80040908;
    case 0x8004090Cu: goto label_8004090C;
    case 0x80040910u: goto label_80040910;
    case 0x80040914u: goto label_80040914;
    case 0x80040918u: goto label_80040918;
    case 0x8004091Cu: goto label_8004091C;
    case 0x80040920u: goto label_80040920;
    case 0x80040924u: goto label_80040924;
    case 0x80040928u: goto label_80040928;
    case 0x8004092Cu: goto label_8004092C;
    case 0x80040930u: goto label_80040930;
    case 0x80040934u: goto label_80040934;
    case 0x80040938u: goto label_80040938;
    case 0x8004093Cu: goto label_8004093C;
    case 0x80040940u: goto label_80040940;
    case 0x80040944u: goto label_80040944;
    case 0x80040948u: goto label_80040948;
    case 0x8004094Cu: goto label_8004094C;
    case 0x80040950u: goto label_80040950;
    case 0x80040954u: goto label_80040954;
    case 0x80040958u: goto label_80040958;
    case 0x8004095Cu: goto label_8004095C;
    case 0x80040960u: goto label_80040960;
    case 0x80040964u: goto label_80040964;
    case 0x80040968u: goto label_80040968;
    case 0x8004096Cu: goto label_8004096C;
    case 0x80040970u: goto label_80040970;
    case 0x80040974u: goto label_80040974;
    case 0x80040978u: goto label_80040978;
    case 0x8004097Cu: goto label_8004097C;
    case 0x80040980u: goto label_80040980;
    case 0x80040984u: goto label_80040984;
    case 0x80040988u: goto label_80040988;
    case 0x8004098Cu: goto label_8004098C;
    case 0x80040990u: goto label_80040990;
    case 0x80040994u: goto label_80040994;
    case 0x80040998u: goto label_80040998;
    case 0x8004099Cu: goto label_8004099C;
    case 0x800409A0u: goto label_800409A0;
    case 0x800409A4u: goto label_800409A4;
    case 0x800409A8u: goto label_800409A8;
    case 0x800409ACu: goto label_800409AC;
    case 0x800409B0u: goto label_800409B0;
    case 0x800409B4u: goto label_800409B4;
    case 0x800409B8u: goto label_800409B8;
    case 0x800409BCu: goto label_800409BC;
    case 0x800409C0u: goto label_800409C0;
    case 0x800409C4u: goto label_800409C4;
    case 0x800409C8u: goto label_800409C8;
    case 0x800409CCu: goto label_800409CC;
    case 0x800409D0u: goto label_800409D0;
    case 0x800409D4u: goto label_800409D4;
    case 0x800409D8u: goto label_800409D8;
    case 0x800409DCu: goto label_800409DC;
    case 0x800409E0u: goto label_800409E0;
    case 0x800409E4u: goto label_800409E4;
    case 0x800409E8u: goto label_800409E8;
    case 0x800409ECu: goto label_800409EC;
    case 0x800409F0u: goto label_800409F0;
    case 0x800409F4u: goto label_800409F4;
    case 0x800409F8u: goto label_800409F8;
    case 0x800409FCu: goto label_800409FC;
    case 0x80040A00u: goto label_80040A00;
    case 0x80040A04u: goto label_80040A04;
    case 0x80040A08u: goto label_80040A08;
    case 0x80040A0Cu: goto label_80040A0C;
    case 0x80040A10u: goto label_80040A10;
    case 0x80040A14u: goto label_80040A14;
    case 0x80040A18u: goto label_80040A18;
    case 0x80040A1Cu: goto label_80040A1C;
    case 0x80040A20u: goto label_80040A20;
    case 0x80040A24u: goto label_80040A24;
    case 0x80040A28u: goto label_80040A28;
    case 0x80040A2Cu: goto label_80040A2C;
    case 0x80040A30u: goto label_80040A30;
    case 0x80040A34u: goto label_80040A34;
    case 0x80040A38u: goto label_80040A38;
    case 0x80040A3Cu: goto label_80040A3C;
    case 0x80040A40u: goto label_80040A40;
    case 0x80040A44u: goto label_80040A44;
    case 0x80040A48u: goto label_80040A48;
    case 0x80040A4Cu: goto label_80040A4C;
    case 0x80040A50u: goto label_80040A50;
    case 0x80040A54u: goto label_80040A54;
    case 0x80040A58u: goto label_80040A58;
    case 0x80040A5Cu: goto label_80040A5C;
    case 0x80040A60u: goto label_80040A60;
    case 0x80040A64u: goto label_80040A64;
    case 0x80040A68u: goto label_80040A68;
    case 0x80040A6Cu: goto label_80040A6C;
    case 0x80040A70u: goto label_80040A70;
    case 0x80040A74u: goto label_80040A74;
    case 0x80040A78u: goto label_80040A78;
    case 0x80040A7Cu: goto label_80040A7C;
    case 0x80040A80u: goto label_80040A80;
    case 0x80040A84u: goto label_80040A84;
    case 0x80040A88u: goto label_80040A88;
    case 0x80040A8Cu: goto label_80040A8C;
    case 0x80040A90u: goto label_80040A90;
    case 0x80040A94u: goto label_80040A94;
    case 0x80040A98u: goto label_80040A98;
    case 0x80040A9Cu: goto label_80040A9C;
    case 0x80040AA0u: goto label_80040AA0;
    case 0x80040AA4u: goto label_80040AA4;
    case 0x80040AA8u: goto label_80040AA8;
    case 0x80040AACu: goto label_80040AAC;
    case 0x80040AB0u: goto label_80040AB0;
    case 0x80040AB4u: goto label_80040AB4;
    case 0x80040AB8u: goto label_80040AB8;
    case 0x80040ABCu: goto label_80040ABC;
    case 0x80040AC0u: goto label_80040AC0;
    case 0x80040AC4u: goto label_80040AC4;
    case 0x80040AC8u: goto label_80040AC8;
    case 0x80040ACCu: goto label_80040ACC;
    case 0x80040AD0u: goto label_80040AD0;
    case 0x80040AD4u: goto label_80040AD4;
    case 0x80040AD8u: goto label_80040AD8;
    case 0x80040ADCu: goto label_80040ADC;
    case 0x80040AE0u: goto label_80040AE0;
    case 0x80040AE4u: goto label_80040AE4;
    case 0x80040AE8u: goto label_80040AE8;
    case 0x80040AECu: goto label_80040AEC;
    case 0x80040AF0u: goto label_80040AF0;
    case 0x80040AF4u: goto label_80040AF4;
    case 0x80040AF8u: goto label_80040AF8;
    case 0x80040AFCu: goto label_80040AFC;
    case 0x80040B00u: goto label_80040B00;
    case 0x80040B04u: goto label_80040B04;
    case 0x80040B08u: goto label_80040B08;
    case 0x80040B0Cu: goto label_80040B0C;
    case 0x80040B10u: goto label_80040B10;
    case 0x80040B14u: goto label_80040B14;
    case 0x80040B18u: goto label_80040B18;
    case 0x80040B1Cu: goto label_80040B1C;
    case 0x80040B20u: goto label_80040B20;
    case 0x80040B24u: goto label_80040B24;
    case 0x80040B28u: goto label_80040B28;
    case 0x80040B2Cu: goto label_80040B2C;
    case 0x80040B30u: goto label_80040B30;
    case 0x80040B34u: goto label_80040B34;
    case 0x80040B38u: goto label_80040B38;
    case 0x80040B3Cu: goto label_80040B3C;
    case 0x80040B40u: goto label_80040B40;
    case 0x80040B44u: goto label_80040B44;
    case 0x80040B48u: goto label_80040B48;
    case 0x80040B4Cu: goto label_80040B4C;
    case 0x80040B50u: goto label_80040B50;
    case 0x80040B54u: goto label_80040B54;
    case 0x80040B58u: goto label_80040B58;
    case 0x80040B5Cu: goto label_80040B5C;
    case 0x80040B60u: goto label_80040B60;
    case 0x80040B64u: goto label_80040B64;
    case 0x80040B68u: goto label_80040B68;
    case 0x80040B6Cu: goto label_80040B6C;
    case 0x80040B70u: goto label_80040B70;
    case 0x80040B74u: goto label_80040B74;
    case 0x80040B78u: goto label_80040B78;
    case 0x80040B7Cu: goto label_80040B7C;
    case 0x80040B80u: goto label_80040B80;
    case 0x80040B84u: goto label_80040B84;
    case 0x80040B88u: goto label_80040B88;
    case 0x80040B8Cu: goto label_80040B8C;
    case 0x80040B90u: goto label_80040B90;
    case 0x80040B94u: goto label_80040B94;
    case 0x80040B98u: goto label_80040B98;
    case 0x80040B9Cu: goto label_80040B9C;
    case 0x80040BA0u: goto label_80040BA0;
    case 0x80040BA4u: goto label_80040BA4;
    case 0x80040BA8u: goto label_80040BA8;
    case 0x80040BACu: goto label_80040BAC;
    case 0x80040BB0u: goto label_80040BB0;
    case 0x80040BB4u: goto label_80040BB4;
    case 0x80040BB8u: goto label_80040BB8;
    case 0x80040BBCu: goto label_80040BBC;
    case 0x80040BC0u: goto label_80040BC0;
    case 0x80040BC4u: goto label_80040BC4;
    case 0x80040BC8u: goto label_80040BC8;
    case 0x80040BCCu: goto label_80040BCC;
    case 0x80040BD0u: goto label_80040BD0;
    case 0x80040BD4u: goto label_80040BD4;
    case 0x80040BD8u: goto label_80040BD8;
    case 0x80040BDCu: goto label_80040BDC;
    case 0x80040BE0u: goto label_80040BE0;
    case 0x80040BE4u: goto label_80040BE4;
    case 0x80040BE8u: goto label_80040BE8;
    case 0x80040BECu: goto label_80040BEC;
    case 0x80040BF0u: goto label_80040BF0;
    case 0x80040BF4u: goto label_80040BF4;
    case 0x80040BF8u: goto label_80040BF8;
    case 0x80040BFCu: goto label_80040BFC;
    case 0x80040C00u: goto label_80040C00;
    case 0x80040C04u: goto label_80040C04;
    case 0x80040C08u: goto label_80040C08;
    case 0x80040C0Cu: goto label_80040C0C;
    case 0x80040C10u: goto label_80040C10;
    case 0x80040C14u: goto label_80040C14;
    case 0x80040C18u: goto label_80040C18;
    case 0x80040C1Cu: goto label_80040C1C;
    case 0x80040C20u: goto label_80040C20;
    case 0x80040C24u: goto label_80040C24;
    case 0x80040C28u: goto label_80040C28;
    case 0x80040C2Cu: goto label_80040C2C;
    case 0x80040C30u: goto label_80040C30;
    case 0x80040C34u: goto label_80040C34;
    case 0x80040C38u: goto label_80040C38;
    case 0x80040C3Cu: goto label_80040C3C;
    case 0x80040C40u: goto label_80040C40;
    case 0x80040C44u: goto label_80040C44;
    case 0x80040C48u: goto label_80040C48;
    case 0x80040C4Cu: goto label_80040C4C;
    case 0x80040C50u: goto label_80040C50;
    case 0x80040C54u: goto label_80040C54;
    case 0x80040C58u: goto label_80040C58;
    case 0x80040C5Cu: goto label_80040C5C;
    case 0x80040C60u: goto label_80040C60;
    case 0x80040C64u: goto label_80040C64;
    case 0x80040C68u: goto label_80040C68;
    case 0x80040C6Cu: goto label_80040C6C;
    case 0x80040C70u: goto label_80040C70;
    case 0x80040C74u: goto label_80040C74;
    case 0x80040C78u: goto label_80040C78;
    case 0x80040C7Cu: goto label_80040C7C;
    case 0x80040C80u: goto label_80040C80;
    case 0x80040C84u: goto label_80040C84;
    case 0x80040C88u: goto label_80040C88;
    case 0x80040C8Cu: goto label_80040C8C;
    case 0x80040C90u: goto label_80040C90;
    case 0x80040C94u: goto label_80040C94;
    case 0x80040C98u: goto label_80040C98;
    case 0x80040C9Cu: goto label_80040C9C;
    case 0x80040CA0u: goto label_80040CA0;
    case 0x80040CA4u: goto label_80040CA4;
    case 0x80040CA8u: goto label_80040CA8;
    case 0x80040CACu: goto label_80040CAC;
    case 0x80040CB0u: goto label_80040CB0;
    case 0x80040CB4u: goto label_80040CB4;
    case 0x80040CB8u: goto label_80040CB8;
    case 0x80040CBCu: goto label_80040CBC;
    case 0x80040CC0u: goto label_80040CC0;
    case 0x80040CC4u: goto label_80040CC4;
    case 0x80040CC8u: goto label_80040CC8;
    case 0x80040CCCu: goto label_80040CCC;
    case 0x80040CD0u: goto label_80040CD0;
    case 0x80040CD4u: goto label_80040CD4;
    case 0x80040CD8u: goto label_80040CD8;
    case 0x80040CDCu: goto label_80040CDC;
    case 0x80040CE0u: goto label_80040CE0;
    case 0x80040CE4u: goto label_80040CE4;
    case 0x80040CE8u: goto label_80040CE8;
    case 0x80040CECu: goto label_80040CEC;
    case 0x80040CF0u: goto label_80040CF0;
    case 0x80040CF4u: goto label_80040CF4;
    case 0x80040CF8u: goto label_80040CF8;
    case 0x80040CFCu: goto label_80040CFC;
    case 0x80040D00u: goto label_80040D00;
    case 0x80040D04u: goto label_80040D04;
    case 0x80040D08u: goto label_80040D08;
    case 0x80040D0Cu: goto label_80040D0C;
    case 0x80040D10u: goto label_80040D10;
    case 0x80040D14u: goto label_80040D14;
    case 0x80040D18u: goto label_80040D18;
    case 0x80040D1Cu: goto label_80040D1C;
    case 0x80040D20u: goto label_80040D20;
    case 0x80040D24u: goto label_80040D24;
    case 0x80040D28u: goto label_80040D28;
    case 0x80040D2Cu: goto label_80040D2C;
    case 0x80040D30u: goto label_80040D30;
    case 0x80040D34u: goto label_80040D34;
    case 0x80040D38u: goto label_80040D38;
    case 0x80040D3Cu: goto label_80040D3C;
    case 0x80040D40u: goto label_80040D40;
    case 0x80040D44u: goto label_80040D44;
    case 0x80040D48u: goto label_80040D48;
    case 0x80040D4Cu: goto label_80040D4C;
    case 0x80040D50u: goto label_80040D50;
    case 0x80040D54u: goto label_80040D54;
    case 0x80040D58u: goto label_80040D58;
    case 0x80040D5Cu: goto label_80040D5C;
    case 0x80040D60u: goto label_80040D60;
    case 0x80040D64u: goto label_80040D64;
    case 0x80040D68u: goto label_80040D68;
    case 0x80040D6Cu: goto label_80040D6C;
    case 0x80040D70u: goto label_80040D70;
    case 0x80040D74u: goto label_80040D74;
    case 0x80040D78u: goto label_80040D78;
    case 0x80040D7Cu: goto label_80040D7C;
    case 0x80040D80u: goto label_80040D80;
    case 0x80040D84u: goto label_80040D84;
    case 0x80040D88u: goto label_80040D88;
    case 0x80040D8Cu: goto label_80040D8C;
    case 0x80040D90u: goto label_80040D90;
    case 0x80040D94u: goto label_80040D94;
    case 0x80040D98u: goto label_80040D98;
    case 0x80040D9Cu: goto label_80040D9C;
    case 0x80040DA0u: goto label_80040DA0;
    case 0x80040DA4u: goto label_80040DA4;
    case 0x80040DA8u: goto label_80040DA8;
    case 0x80040DACu: goto label_80040DAC;
    case 0x80040DB0u: goto label_80040DB0;
    case 0x80040DB4u: goto label_80040DB4;
    case 0x80040DB8u: goto label_80040DB8;
    case 0x80040DBCu: goto label_80040DBC;
    case 0x80040DC0u: goto label_80040DC0;
    case 0x80040DC4u: goto label_80040DC4;
    case 0x80040DC8u: goto label_80040DC8;
    case 0x80040DCCu: goto label_80040DCC;
    case 0x80040DD0u: goto label_80040DD0;
    case 0x80040DD4u: goto label_80040DD4;
    case 0x80040DD8u: goto label_80040DD8;
    case 0x80040DDCu: goto label_80040DDC;
    case 0x80040DE0u: goto label_80040DE0;
    case 0x80040DE4u: goto label_80040DE4;
    case 0x80040DE8u: goto label_80040DE8;
    case 0x80040DECu: goto label_80040DEC;
    case 0x80040DF0u: goto label_80040DF0;
    case 0x80040DF4u: goto label_80040DF4;
    case 0x80040DF8u: goto label_80040DF8;
    case 0x80040DFCu: goto label_80040DFC;
    case 0x80040E00u: goto label_80040E00;
    case 0x80040E04u: goto label_80040E04;
    case 0x80040E08u: goto label_80040E08;
    case 0x80040E0Cu: goto label_80040E0C;
    case 0x80040E10u: goto label_80040E10;
    case 0x80040E14u: goto label_80040E14;
    case 0x80040E18u: goto label_80040E18;
    case 0x80040E1Cu: goto label_80040E1C;
    case 0x80040E20u: goto label_80040E20;
    case 0x80040E24u: goto label_80040E24;
    case 0x80040E28u: goto label_80040E28;
    case 0x80040E2Cu: goto label_80040E2C;
    case 0x80040E30u: goto label_80040E30;
    case 0x80040E34u: goto label_80040E34;
    case 0x80040E38u: goto label_80040E38;
    case 0x80040E3Cu: goto label_80040E3C;
    case 0x80040E40u: goto label_80040E40;
    case 0x80040E44u: goto label_80040E44;
    case 0x80040E48u: goto label_80040E48;
    case 0x80040E4Cu: goto label_80040E4C;
    case 0x80040E50u: goto label_80040E50;
    case 0x80040E54u: goto label_80040E54;
    case 0x80040E58u: goto label_80040E58;
    case 0x80040E5Cu: goto label_80040E5C;
    case 0x80040E60u: goto label_80040E60;
    case 0x80040E64u: goto label_80040E64;
    case 0x80040E68u: goto label_80040E68;
    case 0x80040E6Cu: goto label_80040E6C;
    case 0x80040E70u: goto label_80040E70;
    case 0x80040E74u: goto label_80040E74;
    case 0x80040E78u: goto label_80040E78;
    case 0x80040E7Cu: goto label_80040E7C;
    case 0x80040E80u: goto label_80040E80;
    case 0x80040E84u: goto label_80040E84;
    case 0x80040E88u: goto label_80040E88;
    case 0x80040E8Cu: goto label_80040E8C;
    case 0x80040E90u: goto label_80040E90;
    case 0x80040E94u: goto label_80040E94;
    case 0x80040E98u: goto label_80040E98;
    case 0x80040E9Cu: goto label_80040E9C;
    case 0x80040EA0u: goto label_80040EA0;
    case 0x80040EA4u: goto label_80040EA4;
    case 0x80040EA8u: goto label_80040EA8;
    case 0x80040EACu: goto label_80040EAC;
    case 0x80040EB0u: goto label_80040EB0;
    case 0x80040EB4u: goto label_80040EB4;
    case 0x80040EB8u: goto label_80040EB8;
    case 0x80040EBCu: goto label_80040EBC;
    case 0x80040EC0u: goto label_80040EC0;
    case 0x80040EC4u: goto label_80040EC4;
    case 0x80040EC8u: goto label_80040EC8;
    case 0x80040ECCu: goto label_80040ECC;
    case 0x80040ED0u: goto label_80040ED0;
    case 0x80040ED4u: goto label_80040ED4;
    case 0x80040ED8u: goto label_80040ED8;
    case 0x80040EDCu: goto label_80040EDC;
    case 0x80040EE0u: goto label_80040EE0;
    case 0x80040EE4u: goto label_80040EE4;
    case 0x80040EE8u: goto label_80040EE8;
    case 0x80040EECu: goto label_80040EEC;
    case 0x80040EF0u: goto label_80040EF0;
    case 0x80040EF4u: goto label_80040EF4;
    case 0x80040EF8u: goto label_80040EF8;
    case 0x80040EFCu: goto label_80040EFC;
    case 0x80040F00u: goto label_80040F00;
    case 0x80040F04u: goto label_80040F04;
    case 0x80040F08u: goto label_80040F08;
    case 0x80040F0Cu: goto label_80040F0C;
    case 0x80040F10u: goto label_80040F10;
    case 0x80040F14u: goto label_80040F14;
    case 0x80040F18u: goto label_80040F18;
    case 0x80040F1Cu: goto label_80040F1C;
    case 0x80040F20u: goto label_80040F20;
    case 0x80040F24u: goto label_80040F24;
    case 0x80040F28u: goto label_80040F28;
    case 0x80040F2Cu: goto label_80040F2C;
    case 0x80040F30u: goto label_80040F30;
    case 0x80040F34u: goto label_80040F34;
    case 0x80040F38u: goto label_80040F38;
    case 0x80040F3Cu: goto label_80040F3C;
    case 0x80040F40u: goto label_80040F40;
    case 0x80040F44u: goto label_80040F44;
    case 0x80040F48u: goto label_80040F48;
    case 0x80040F4Cu: goto label_80040F4C;
    case 0x80040F50u: goto label_80040F50;
    case 0x80040F54u: goto label_80040F54;
    case 0x80040F58u: goto label_80040F58;
    case 0x80040F5Cu: goto label_80040F5C;
    case 0x80040F60u: goto label_80040F60;
    case 0x80040F64u: goto label_80040F64;
    case 0x80040F68u: goto label_80040F68;
    case 0x80040F6Cu: goto label_80040F6C;
    case 0x80040F70u: goto label_80040F70;
    case 0x80040F74u: goto label_80040F74;
    case 0x80040F78u: goto label_80040F78;
    case 0x80040F7Cu: goto label_80040F7C;
    case 0x80040F80u: goto label_80040F80;
    case 0x80040F84u: goto label_80040F84;
    case 0x80040F88u: goto label_80040F88;
    case 0x80040F8Cu: goto label_80040F8C;
    case 0x80040F90u: goto label_80040F90;
    case 0x80040F94u: goto label_80040F94;
    case 0x80040F98u: goto label_80040F98;
    case 0x80040F9Cu: goto label_80040F9C;
    case 0x80040FA0u: goto label_80040FA0;
    case 0x80040FA4u: goto label_80040FA4;
    case 0x80040FA8u: goto label_80040FA8;
    case 0x80040FACu: goto label_80040FAC;
    case 0x80040FB0u: goto label_80040FB0;
    case 0x80040FB4u: goto label_80040FB4;
    case 0x80040FB8u: goto label_80040FB8;
    case 0x80040FBCu: goto label_80040FBC;
    case 0x80040FC0u: goto label_80040FC0;
    case 0x80040FC4u: goto label_80040FC4;
    case 0x80040FC8u: goto label_80040FC8;
    case 0x80040FCCu: goto label_80040FCC;
    case 0x80040FD0u: goto label_80040FD0;
    case 0x80040FD4u: goto label_80040FD4;
    case 0x80040FD8u: goto label_80040FD8;
    case 0x80040FDCu: goto label_80040FDC;
    case 0x80040FE0u: goto label_80040FE0;
    case 0x80040FE4u: goto label_80040FE4;
    case 0x80040FE8u: goto label_80040FE8;
    case 0x80040FECu: goto label_80040FEC;
    case 0x80040FF0u: goto label_80040FF0;
    case 0x80040FF4u: goto label_80040FF4;
    case 0x80040FF8u: goto label_80040FF8;
    case 0x80040FFCu: goto label_80040FFC;
    case 0x80041000u: goto label_80041000;
    case 0x80041004u: goto label_80041004;
    case 0x80041008u: goto label_80041008;
    case 0x8004100Cu: goto label_8004100C;
    case 0x80041010u: goto label_80041010;
    case 0x80041014u: goto label_80041014;
    case 0x80041018u: goto label_80041018;
    case 0x8004101Cu: goto label_8004101C;
    case 0x80041020u: goto label_80041020;
    case 0x80041024u: goto label_80041024;
    case 0x80041028u: goto label_80041028;
    case 0x8004102Cu: goto label_8004102C;
    case 0x80041030u: goto label_80041030;
    case 0x80041034u: goto label_80041034;
    case 0x80041038u: goto label_80041038;
    case 0x8004103Cu: goto label_8004103C;
    case 0x80041040u: goto label_80041040;
    case 0x80041044u: goto label_80041044;
    case 0x80041048u: goto label_80041048;
    case 0x8004104Cu: goto label_8004104C;
    case 0x80041050u: goto label_80041050;
    case 0x80041054u: goto label_80041054;
    case 0x80041058u: goto label_80041058;
    case 0x8004105Cu: goto label_8004105C;
    case 0x80041060u: goto label_80041060;
    case 0x80041064u: goto label_80041064;
    case 0x80041068u: goto label_80041068;
    case 0x8004106Cu: goto label_8004106C;
    case 0x80041070u: goto label_80041070;
    case 0x80041074u: goto label_80041074;
    case 0x80041078u: goto label_80041078;
    case 0x8004107Cu: goto label_8004107C;
    case 0x80041080u: goto label_80041080;
    case 0x80041084u: goto label_80041084;
    case 0x80041088u: goto label_80041088;
    case 0x8004108Cu: goto label_8004108C;
    case 0x80041090u: goto label_80041090;
    case 0x80041094u: goto label_80041094;
    case 0x80041098u: goto label_80041098;
    case 0x8004109Cu: goto label_8004109C;
    case 0x800410A0u: goto label_800410A0;
    case 0x800410A4u: goto label_800410A4;
    case 0x800410A8u: goto label_800410A8;
    case 0x800410ACu: goto label_800410AC;
    case 0x800410B0u: goto label_800410B0;
    case 0x800410B4u: goto label_800410B4;
    case 0x800410B8u: goto label_800410B8;
    case 0x800410BCu: goto label_800410BC;
    case 0x800410C0u: goto label_800410C0;
    case 0x800410C4u: goto label_800410C4;
    case 0x800410C8u: goto label_800410C8;
    case 0x800410CCu: goto label_800410CC;
    case 0x800410D0u: goto label_800410D0;
    case 0x800410D4u: goto label_800410D4;
    case 0x800410D8u: goto label_800410D8;
    case 0x800410DCu: goto label_800410DC;
    case 0x800410E0u: goto label_800410E0;
    case 0x800410E4u: goto label_800410E4;
    case 0x800410E8u: goto label_800410E8;
    case 0x800410ECu: goto label_800410EC;
    case 0x800410F0u: goto label_800410F0;
    case 0x800410F4u: goto label_800410F4;
    case 0x800410F8u: goto label_800410F8;
    case 0x800410FCu: goto label_800410FC;
    case 0x80041100u: goto label_80041100;
    case 0x80041104u: goto label_80041104;
    case 0x80041108u: goto label_80041108;
    case 0x8004110Cu: goto label_8004110C;
    case 0x80041110u: goto label_80041110;
    case 0x80041114u: goto label_80041114;
    case 0x80041118u: goto label_80041118;
    case 0x8004111Cu: goto label_8004111C;
    case 0x80041120u: goto label_80041120;
    case 0x80041124u: goto label_80041124;
    case 0x80041128u: goto label_80041128;
    case 0x8004112Cu: goto label_8004112C;
    case 0x80041130u: goto label_80041130;
    case 0x80041134u: goto label_80041134;
    case 0x80041138u: goto label_80041138;
    case 0x8004113Cu: goto label_8004113C;
    case 0x80041140u: goto label_80041140;
    case 0x80041144u: goto label_80041144;
    case 0x80041148u: goto label_80041148;
    case 0x8004114Cu: goto label_8004114C;
    case 0x80041150u: goto label_80041150;
    case 0x80041154u: goto label_80041154;
    case 0x80041158u: goto label_80041158;
    case 0x8004115Cu: goto label_8004115C;
    case 0x80041160u: goto label_80041160;
    case 0x80041164u: goto label_80041164;
    case 0x80041168u: goto label_80041168;
    case 0x8004116Cu: goto label_8004116C;
    case 0x80041170u: goto label_80041170;
    case 0x80041174u: goto label_80041174;
    case 0x80041178u: goto label_80041178;
    case 0x8004117Cu: goto label_8004117C;
    case 0x80041180u: goto label_80041180;
    case 0x80041184u: goto label_80041184;
    case 0x80041188u: goto label_80041188;
    case 0x8004118Cu: goto label_8004118C;
    case 0x80041190u: goto label_80041190;
    case 0x80041194u: goto label_80041194;
    case 0x80041198u: goto label_80041198;
    case 0x8004119Cu: goto label_8004119C;
    case 0x800411A0u: goto label_800411A0;
    case 0x800411A4u: goto label_800411A4;
    case 0x800411A8u: goto label_800411A8;
    case 0x800411ACu: goto label_800411AC;
    case 0x800411B0u: goto label_800411B0;
    case 0x800411B4u: goto label_800411B4;
    case 0x800411B8u: goto label_800411B8;
    case 0x800411BCu: goto label_800411BC;
    case 0x800411C0u: goto label_800411C0;
    case 0x800411C4u: goto label_800411C4;
    case 0x800411C8u: goto label_800411C8;
    case 0x800411CCu: goto label_800411CC;
    case 0x800411D0u: goto label_800411D0;
    case 0x800411D4u: goto label_800411D4;
    case 0x800411D8u: goto label_800411D8;
    case 0x800411DCu: goto label_800411DC;
    case 0x800411E0u: goto label_800411E0;
    case 0x800411E4u: goto label_800411E4;
    case 0x800411E8u: goto label_800411E8;
    case 0x800411ECu: goto label_800411EC;
    case 0x800411F0u: goto label_800411F0;
    case 0x800411F4u: goto label_800411F4;
    case 0x800411F8u: goto label_800411F8;
    case 0x800411FCu: goto label_800411FC;
    case 0x80041200u: goto label_80041200;
    case 0x80041204u: goto label_80041204;
    case 0x80041208u: goto label_80041208;
    case 0x8004120Cu: goto label_8004120C;
    case 0x80041210u: goto label_80041210;
    case 0x80041214u: goto label_80041214;
    case 0x80041218u: goto label_80041218;
    case 0x8004121Cu: goto label_8004121C;
    case 0x80041220u: goto label_80041220;
    case 0x80041224u: goto label_80041224;
    case 0x80041228u: goto label_80041228;
    case 0x8004122Cu: goto label_8004122C;
    case 0x80041230u: goto label_80041230;
    case 0x80041234u: goto label_80041234;
    case 0x80041238u: goto label_80041238;
    case 0x8004123Cu: goto label_8004123C;
    case 0x80041240u: goto label_80041240;
    case 0x80041244u: goto label_80041244;
    case 0x80041248u: goto label_80041248;
    case 0x8004124Cu: goto label_8004124C;
    case 0x80041250u: goto label_80041250;
    case 0x80041254u: goto label_80041254;
    case 0x80041258u: goto label_80041258;
    case 0x8004125Cu: goto label_8004125C;
    case 0x80041260u: goto label_80041260;
    case 0x80041264u: goto label_80041264;
    case 0x80041268u: goto label_80041268;
    case 0x8004126Cu: goto label_8004126C;
    case 0x80041270u: goto label_80041270;
    case 0x80041274u: goto label_80041274;
    case 0x80041278u: goto label_80041278;
    case 0x8004127Cu: goto label_8004127C;
    case 0x80041280u: goto label_80041280;
    case 0x80041284u: goto label_80041284;
    case 0x80041288u: goto label_80041288;
    case 0x8004128Cu: goto label_8004128C;
    case 0x80041290u: goto label_80041290;
    case 0x80041294u: goto label_80041294;
    case 0x80041298u: goto label_80041298;
    case 0x8004129Cu: goto label_8004129C;
    case 0x800412A0u: goto label_800412A0;
    case 0x800412A4u: goto label_800412A4;
    case 0x800412A8u: goto label_800412A8;
    case 0x800412ACu: goto label_800412AC;
    case 0x800412B0u: goto label_800412B0;
    case 0x800412B4u: goto label_800412B4;
    case 0x800412B8u: goto label_800412B8;
    case 0x800412BCu: goto label_800412BC;
    case 0x800412C0u: goto label_800412C0;
    case 0x800412C4u: goto label_800412C4;
    case 0x800412C8u: goto label_800412C8;
    case 0x800412CCu: goto label_800412CC;
    case 0x800412D0u: goto label_800412D0;
    case 0x800412D4u: goto label_800412D4;
    case 0x800412D8u: goto label_800412D8;
    case 0x800412DCu: goto label_800412DC;
    case 0x800412E0u: goto label_800412E0;
    case 0x800412E4u: goto label_800412E4;
    case 0x800412E8u: goto label_800412E8;
    case 0x800412ECu: goto label_800412EC;
    case 0x800412F0u: goto label_800412F0;
    case 0x800412F4u: goto label_800412F4;
    case 0x800412F8u: goto label_800412F8;
    case 0x800412FCu: goto label_800412FC;
    case 0x80041300u: goto label_80041300;
    case 0x80041304u: goto label_80041304;
    case 0x80041308u: goto label_80041308;
    case 0x8004130Cu: goto label_8004130C;
    case 0x80041310u: goto label_80041310;
    case 0x80041314u: goto label_80041314;
    case 0x80041318u: goto label_80041318;
    case 0x8004131Cu: goto label_8004131C;
    case 0x80041320u: goto label_80041320;
    case 0x80041324u: goto label_80041324;
    case 0x80041328u: goto label_80041328;
    case 0x8004132Cu: goto label_8004132C;
    case 0x80041330u: goto label_80041330;
    case 0x80041334u: goto label_80041334;
    case 0x80041338u: goto label_80041338;
    case 0x8004133Cu: goto label_8004133C;
    case 0x80041340u: goto label_80041340;
    case 0x80041344u: goto label_80041344;
    case 0x80041348u: goto label_80041348;
    case 0x8004134Cu: goto label_8004134C;
    case 0x80041350u: goto label_80041350;
    case 0x80041354u: goto label_80041354;
    case 0x80041358u: goto label_80041358;
    case 0x8004135Cu: goto label_8004135C;
    case 0x80041360u: goto label_80041360;
    case 0x80041364u: goto label_80041364;
    case 0x80041368u: goto label_80041368;
    case 0x8004136Cu: goto label_8004136C;
    case 0x80041370u: goto label_80041370;
    case 0x80041374u: goto label_80041374;
    case 0x80041378u: goto label_80041378;
    case 0x8004137Cu: goto label_8004137C;
    case 0x80041380u: goto label_80041380;
    case 0x80041384u: goto label_80041384;
    case 0x80041388u: goto label_80041388;
    case 0x8004138Cu: goto label_8004138C;
    case 0x80041390u: goto label_80041390;
    case 0x80041394u: goto label_80041394;
    case 0x80041398u: goto label_80041398;
    case 0x8004139Cu: goto label_8004139C;
    case 0x800413A0u: goto label_800413A0;
    case 0x800413A4u: goto label_800413A4;
    case 0x800413A8u: goto label_800413A8;
    case 0x800413ACu: goto label_800413AC;
    case 0x800413B0u: goto label_800413B0;
    case 0x800413B4u: goto label_800413B4;
    case 0x800413B8u: goto label_800413B8;
    case 0x800413BCu: goto label_800413BC;
    case 0x800413C0u: goto label_800413C0;
    case 0x800413C4u: goto label_800413C4;
    case 0x800413C8u: goto label_800413C8;
    case 0x800413CCu: goto label_800413CC;
    case 0x800413D0u: goto label_800413D0;
    case 0x800413D4u: goto label_800413D4;
    case 0x800413D8u: goto label_800413D8;
    case 0x800413DCu: goto label_800413DC;
    case 0x800413E0u: goto label_800413E0;
    case 0x800413E4u: goto label_800413E4;
    case 0x800413E8u: goto label_800413E8;
    case 0x800413ECu: goto label_800413EC;
    case 0x800413F0u: goto label_800413F0;
    case 0x800413F4u: goto label_800413F4;
    case 0x800413F8u: goto label_800413F8;
    case 0x800413FCu: goto label_800413FC;
    case 0x80041400u: goto label_80041400;
    case 0x80041404u: goto label_80041404;
    case 0x80041408u: goto label_80041408;
    case 0x8004140Cu: goto label_8004140C;
    case 0x80041410u: goto label_80041410;
    case 0x80041414u: goto label_80041414;
    case 0x80041418u: goto label_80041418;
    case 0x8004141Cu: goto label_8004141C;
    case 0x80041420u: goto label_80041420;
    case 0x80041424u: goto label_80041424;
    case 0x80041428u: goto label_80041428;
    case 0x8004142Cu: goto label_8004142C;
    case 0x80041430u: goto label_80041430;
    case 0x80041434u: goto label_80041434;
    case 0x80041438u: goto label_80041438;
    case 0x8004143Cu: goto label_8004143C;
    case 0x80041440u: goto label_80041440;
    case 0x80041444u: goto label_80041444;
    case 0x80041448u: goto label_80041448;
    case 0x8004144Cu: goto label_8004144C;
    case 0x80041450u: goto label_80041450;
    case 0x80041454u: goto label_80041454;
    case 0x80041458u: goto label_80041458;
    case 0x8004145Cu: goto label_8004145C;
    case 0x80041460u: goto label_80041460;
    case 0x80041464u: goto label_80041464;
    case 0x80041468u: goto label_80041468;
    case 0x8004146Cu: goto label_8004146C;
    case 0x80041470u: goto label_80041470;
    case 0x80041474u: goto label_80041474;
    case 0x80041478u: goto label_80041478;
    case 0x8004147Cu: goto label_8004147C;
    case 0x80041480u: goto label_80041480;
    case 0x80041484u: goto label_80041484;
    case 0x80041488u: goto label_80041488;
    case 0x8004148Cu: goto label_8004148C;
    case 0x80041490u: goto label_80041490;
    case 0x80041494u: goto label_80041494;
    case 0x80041498u: goto label_80041498;
    case 0x8004149Cu: goto label_8004149C;
    case 0x800414A0u: goto label_800414A0;
    case 0x800414A4u: goto label_800414A4;
    case 0x800414A8u: goto label_800414A8;
    case 0x800414ACu: goto label_800414AC;
    case 0x800414B0u: goto label_800414B0;
    case 0x800414B4u: goto label_800414B4;
    case 0x800414B8u: goto label_800414B8;
    case 0x800414BCu: goto label_800414BC;
    case 0x800414C0u: goto label_800414C0;
    case 0x800414C4u: goto label_800414C4;
    case 0x800414C8u: goto label_800414C8;
    case 0x800414CCu: goto label_800414CC;
    case 0x800414D0u: goto label_800414D0;
    case 0x800414D4u: goto label_800414D4;
    case 0x800414D8u: goto label_800414D8;
    case 0x800414DCu: goto label_800414DC;
    case 0x800414E0u: goto label_800414E0;
    case 0x800414E4u: goto label_800414E4;
    case 0x800414E8u: goto label_800414E8;
    case 0x800414ECu: goto label_800414EC;
    case 0x800414F0u: goto label_800414F0;
    case 0x800414F4u: goto label_800414F4;
    case 0x800414F8u: goto label_800414F8;
    case 0x800414FCu: goto label_800414FC;
    case 0x80041500u: goto label_80041500;
    case 0x80041504u: goto label_80041504;
    case 0x80041508u: goto label_80041508;
    case 0x8004150Cu: goto label_8004150C;
    case 0x80041510u: goto label_80041510;
    case 0x80041514u: goto label_80041514;
    case 0x80041518u: goto label_80041518;
    case 0x8004151Cu: goto label_8004151C;
    case 0x80041520u: goto label_80041520;
    case 0x80041524u: goto label_80041524;
    case 0x80041528u: goto label_80041528;
    case 0x8004152Cu: goto label_8004152C;
    case 0x80041530u: goto label_80041530;
    case 0x80041534u: goto label_80041534;
    case 0x80041538u: goto label_80041538;
    case 0x8004153Cu: goto label_8004153C;
    case 0x80041540u: goto label_80041540;
    case 0x80041544u: goto label_80041544;
    case 0x80041548u: goto label_80041548;
    case 0x8004154Cu: goto label_8004154C;
    case 0x80041550u: goto label_80041550;
    case 0x80041554u: goto label_80041554;
    case 0x80041558u: goto label_80041558;
    case 0x8004155Cu: goto label_8004155C;
    case 0x80041560u: goto label_80041560;
    case 0x80041564u: goto label_80041564;
    case 0x80041568u: goto label_80041568;
    case 0x8004156Cu: goto label_8004156C;
    case 0x80041570u: goto label_80041570;
    case 0x80041574u: goto label_80041574;
    case 0x80041578u: goto label_80041578;
    case 0x8004157Cu: goto label_8004157C;
    case 0x80041580u: goto label_80041580;
    case 0x80041584u: goto label_80041584;
    case 0x80041588u: goto label_80041588;
    case 0x8004158Cu: goto label_8004158C;
    case 0x80041590u: goto label_80041590;
    case 0x80041594u: goto label_80041594;
    case 0x80041598u: goto label_80041598;
    case 0x8004159Cu: goto label_8004159C;
    case 0x800415A0u: goto label_800415A0;
    case 0x800415A4u: goto label_800415A4;
    case 0x800415A8u: goto label_800415A8;
    case 0x800415ACu: goto label_800415AC;
    case 0x800415B0u: goto label_800415B0;
    case 0x800415B4u: goto label_800415B4;
    case 0x800415B8u: goto label_800415B8;
    case 0x800415BCu: goto label_800415BC;
    case 0x800415C0u: goto label_800415C0;
    case 0x800415C4u: goto label_800415C4;
    case 0x800415C8u: goto label_800415C8;
    case 0x800415CCu: goto label_800415CC;
    case 0x800415D0u: goto label_800415D0;
    case 0x800415D4u: goto label_800415D4;
    case 0x800415D8u: goto label_800415D8;
    case 0x800415DCu: goto label_800415DC;
    default: return;
    }
label_8003D5E0:
    ctx->pc = 0x8003D5E0u;
    ctx->downcount -= 6;
    // 8003D5E0: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003D5E4:
    ctx->pc = 0x8003D5E4u;
    // 8003D5E4: stw     r0, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003D5E8:
    ctx->pc = 0x8003D5E8u;
    // 8003D5E8: lbz     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003D5EC:
    ctx->pc = 0x8003D5ECu;
    // 8003D5EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003D5F0:
    ctx->pc = 0x8003D5F0u;
    // 8003D5F0: stw     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003D5F4:
    ctx->pc = 0x8003D5F4u;
    // 8003D5F4: bl      0x80022E38
    {
            ctx->lr = 0x8003D5F8u;
            ctx->pc = 0x80022E38u;
            return;
    }

label_8003D5F8:
    ctx->pc = 0x8003D5F8u;
    ctx->downcount -= 1;
    // 8003D5F8: bl      0x80024A8C
    {
            ctx->lr = 0x8003D5FCu;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_8003D5FC:
    ctx->pc = 0x8003D5FCu;
    ctx->downcount -= 5;
    // 8003D5FC: addi    r21, r4, 0
    ctx->gpr[21] = ctx->gpr[4] + (u32)(s32)(0);

label_8003D600:
    ctx->pc = 0x8003D600u;
    // 8003D600: addi    r20, r3, 0
    ctx->gpr[20] = ctx->gpr[3] + (u32)(s32)(0);

label_8003D604:
    ctx->pc = 0x8003D604u;
    // 8003D604: addi    r26, r21, 0
    ctx->gpr[26] = ctx->gpr[21] + (u32)(s32)(0);

label_8003D608:
    ctx->pc = 0x8003D608u;
    // 8003D608: addi    r30, r20, 0
    ctx->gpr[30] = ctx->gpr[20] + (u32)(s32)(0);

label_8003D60C:
    ctx->pc = 0x8003D60Cu;
    // 8003D60C: bl      0x80022AA0
    {
            ctx->lr = 0x8003D610u;
            ctx->pc = 0x80022AA0u;
            return;
    }

label_8003D610:
    ctx->pc = 0x8003D610u;
    ctx->downcount -= 10;
    // 8003D610: mulli   r0, r22, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[22] * (s64)(s32)12);

label_8003D614:
    ctx->pc = 0x8003D614u;
    // 8003D614: add   r25, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_8003D618:
    ctx->pc = 0x8003D618u;
    // 8003D618: lis     r3, 16838
    ctx->gpr[3] = ((u32)(s32)(16838) << 16);

label_8003D61C:
    ctx->pc = 0x8003D61Cu;
    // 8003D61C: addi    r24, r25, 0
    ctx->gpr[24] = ctx->gpr[25] + (u32)(s32)(0);

label_8003D620:
    ctx->pc = 0x8003D620u;
    // 8003D620: addi    r31, r3, 20077
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(20077);

label_8003D624:
    ctx->pc = 0x8003D624u;
    // 8003D624: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8003D628:
    ctx->pc = 0x8003D628u;
    // 8003D628: li      r23, 4
    ctx->gpr[23] = (u32)(s32)(4);

label_8003D62C:
    ctx->pc = 0x8003D62Cu;
    // 8003D62C: b       0x8003D9A0
    {
            goto label_8003D9A0;
    }

label_8003D630:
    ctx->downcount -= 28;
    // 8003D630: mullw   r5, r30, r31
    {
        s64 product = (s64)(s32)ctx->gpr[30] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[5] = (u32)product;
    }

label_8003D634:
    // 8003D634: mulhwu   r3, r26, r31
    {
        u64 product = (u64)ctx->gpr[26] * (u64)ctx->gpr[31];
        ctx->gpr[3] = (u32)(product >> 32);
    }

label_8003D638:
    // 8003D638: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8003D63C:
    // 8003D63C: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8003D640:
    // 8003D640: mullw   r3, r26, r30
    {
        s64 product = (s64)(s32)ctx->gpr[26] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[3] = (u32)product;
    }

label_8003D644:
    // 8003D644: mullw   r0, r26, r31
    {
        s64 product = (s64)(s32)ctx->gpr[26] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D648:
    // 8003D648: li      r29, 12345
    ctx->gpr[29] = (u32)(s32)(12345);

label_8003D64C:
    // 8003D64C: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D650:
    // 8003D650: add   r0, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D654:
    // 8003D654: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D658:
    // 8003D658: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D65C:
    // 8003D65C: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D660u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D660:
    ctx->downcount -= 30;
    // 8003D660: mullw   r6, r3, r31
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[6] = (u32)product;
    }

label_8003D664:
    ctx->pc = 0x8003D664u;
    // 8003D664: lbz     r0, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003D668:
    // 8003D668: mulhwu   r5, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8003D66C:
    // 8003D66C: add   r6, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8003D670:
    // 8003D670: addc   r8, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[8] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D674:
    // 8003D674: extsh r7, r28
    {
        ctx->gpr[7] = (u32)(s32)(s16)ctx->gpr[28];
    }

label_8003D678:
    // 8003D678: mullw   r5, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[5] = (u32)product;
    }

label_8003D67C:
    ctx->pc = 0x8003D67Cu;
    // 8003D67C: stbx    r8, r27, r7
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[7];
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_8003D680:
    // 8003D680: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D684:
    // 8003D684: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D688:
    // 8003D688: add   r0, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D68C:
    // 8003D68C: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D690:
    // 8003D690: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D694:
    // 8003D694: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D698u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D698:
    ctx->downcount -= 29;
    // 8003D698: li      r26, 32767
    ctx->gpr[26] = (u32)(s32)(32767);

label_8003D69C:
    // 8003D69C: and   r0, r3, r30
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[30];
    }

label_8003D6A0:
    // 8003D6A0: and   r4, r4, r26
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[26];
    }

label_8003D6A4:
    // 8003D6A4: mullw   r5, r0, r31
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[5] = (u32)product;
    }

label_8003D6A8:
    // 8003D6A8: mulhwu   r3, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[3] = (u32)(product >> 32);
    }

label_8003D6AC:
    // 8003D6AC: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8003D6B0:
    // 8003D6B0: mullw   r3, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[3] = (u32)product;
    }

label_8003D6B4:
    // 8003D6B4: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D6B8:
    // 8003D6B8: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D6BC:
    // 8003D6BC: add   r0, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D6C0:
    // 8003D6C0: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D6C4:
    // 8003D6C4: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D6C8:
    // 8003D6C8: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D6CCu;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D6CC:
    ctx->downcount -= 31;
    // 8003D6CC: mullw   r6, r3, r31
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[6] = (u32)product;
    }

label_8003D6D0:
    // 8003D6D0: mulhwu   r5, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8003D6D4:
    // 8003D6D4: addi    r9, r28, 1
    ctx->gpr[9] = ctx->gpr[28] + (u32)(s32)(1);

label_8003D6D8:
    // 8003D6D8: extsh r9, r9
    {
        ctx->gpr[9] = (u32)(s32)(s16)ctx->gpr[9];
    }

label_8003D6DC:
    ctx->pc = 0x8003D6DCu;
    // 8003D6DC: lbzx    r0, r25, r9
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[9];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003D6E0:
    // 8003D6E0: add   r6, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8003D6E4:
    // 8003D6E4: mullw   r5, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[5] = (u32)product;
    }

label_8003D6E8:
    // 8003D6E8: addc   r7, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D6EC:
    // 8003D6EC: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D6F0:
    ctx->pc = 0x8003D6F0u;
    // 8003D6F0: stbx    r7, r27, r9
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[9];
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_8003D6F4:
    // 8003D6F4: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D6F8:
    // 8003D6F8: add   r0, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D6FC:
    // 8003D6FC: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D700:
    // 8003D700: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D704:
    // 8003D704: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D708u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D708:
    ctx->downcount -= 28;
    // 8003D708: and   r0, r3, r30
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[30];
    }

label_8003D70C:
    // 8003D70C: and   r4, r4, r26
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[26];
    }

label_8003D710:
    // 8003D710: mullw   r5, r0, r31
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[5] = (u32)product;
    }

label_8003D714:
    // 8003D714: mulhwu   r3, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[3] = (u32)(product >> 32);
    }

label_8003D718:
    // 8003D718: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8003D71C:
    // 8003D71C: mullw   r3, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[3] = (u32)product;
    }

label_8003D720:
    // 8003D720: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D724:
    // 8003D724: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D728:
    // 8003D728: add   r0, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D72C:
    // 8003D72C: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D730:
    // 8003D730: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D734:
    // 8003D734: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D738u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D738:
    ctx->downcount -= 31;
    // 8003D738: mullw   r6, r3, r31
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[6] = (u32)product;
    }

label_8003D73C:
    // 8003D73C: mulhwu   r5, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8003D740:
    // 8003D740: addi    r9, r28, 2
    ctx->gpr[9] = ctx->gpr[28] + (u32)(s32)(2);

label_8003D744:
    // 8003D744: extsh r9, r9
    {
        ctx->gpr[9] = (u32)(s32)(s16)ctx->gpr[9];
    }

label_8003D748:
    ctx->pc = 0x8003D748u;
    // 8003D748: lbzx    r0, r25, r9
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[9];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003D74C:
    // 8003D74C: add   r6, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8003D750:
    // 8003D750: mullw   r5, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[5] = (u32)product;
    }

label_8003D754:
    // 8003D754: addc   r7, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D758:
    // 8003D758: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D75C:
    ctx->pc = 0x8003D75Cu;
    // 8003D75C: stbx    r7, r27, r9
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[9];
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_8003D760:
    // 8003D760: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D764:
    // 8003D764: add   r0, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D768:
    // 8003D768: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D76C:
    // 8003D76C: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D770:
    // 8003D770: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D774u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D774:
    ctx->downcount -= 28;
    // 8003D774: and   r0, r3, r30
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[30];
    }

label_8003D778:
    // 8003D778: and   r4, r4, r26
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[26];
    }

label_8003D77C:
    // 8003D77C: mullw   r5, r0, r31
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[5] = (u32)product;
    }

label_8003D780:
    // 8003D780: mulhwu   r3, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[3] = (u32)(product >> 32);
    }

label_8003D784:
    // 8003D784: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8003D788:
    // 8003D788: mullw   r3, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[3] = (u32)product;
    }

label_8003D78C:
    // 8003D78C: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D790:
    // 8003D790: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D794:
    // 8003D794: add   r0, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D798:
    // 8003D798: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D79C:
    // 8003D79C: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D7A0:
    // 8003D7A0: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D7A4u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D7A4:
    ctx->downcount -= 31;
    // 8003D7A4: mullw   r6, r3, r31
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[6] = (u32)product;
    }

label_8003D7A8:
    // 8003D7A8: mulhwu   r5, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8003D7AC:
    // 8003D7AC: addi    r9, r28, 3
    ctx->gpr[9] = ctx->gpr[28] + (u32)(s32)(3);

label_8003D7B0:
    // 8003D7B0: extsh r9, r9
    {
        ctx->gpr[9] = (u32)(s32)(s16)ctx->gpr[9];
    }

label_8003D7B4:
    ctx->pc = 0x8003D7B4u;
    // 8003D7B4: lbzx    r0, r25, r9
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[9];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003D7B8:
    // 8003D7B8: add   r6, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8003D7BC:
    // 8003D7BC: mullw   r5, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[5] = (u32)product;
    }

label_8003D7C0:
    // 8003D7C0: addc   r7, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D7C4:
    // 8003D7C4: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D7C8:
    ctx->pc = 0x8003D7C8u;
    // 8003D7C8: stbx    r7, r27, r9
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[9];
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_8003D7CC:
    // 8003D7CC: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D7D0:
    // 8003D7D0: add   r0, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D7D4:
    // 8003D7D4: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D7D8:
    // 8003D7D8: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D7DC:
    // 8003D7DC: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D7E0u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D7E0:
    ctx->downcount -= 28;
    // 8003D7E0: and   r0, r3, r30
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[30];
    }

label_8003D7E4:
    // 8003D7E4: and   r4, r4, r26
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[26];
    }

label_8003D7E8:
    // 8003D7E8: mullw   r5, r0, r31
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[5] = (u32)product;
    }

label_8003D7EC:
    // 8003D7EC: mulhwu   r3, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[3] = (u32)(product >> 32);
    }

label_8003D7F0:
    // 8003D7F0: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8003D7F4:
    // 8003D7F4: mullw   r3, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[3] = (u32)product;
    }

label_8003D7F8:
    // 8003D7F8: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D7FC:
    // 8003D7FC: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D800:
    // 8003D800: add   r0, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D804:
    // 8003D804: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D808:
    // 8003D808: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D80C:
    // 8003D80C: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D810u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D810:
    ctx->downcount -= 31;
    // 8003D810: mullw   r6, r3, r31
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[6] = (u32)product;
    }

label_8003D814:
    // 8003D814: mulhwu   r5, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8003D818:
    // 8003D818: addi    r9, r28, 4
    ctx->gpr[9] = ctx->gpr[28] + (u32)(s32)(4);

label_8003D81C:
    // 8003D81C: extsh r9, r9
    {
        ctx->gpr[9] = (u32)(s32)(s16)ctx->gpr[9];
    }

label_8003D820:
    ctx->pc = 0x8003D820u;
    // 8003D820: lbzx    r0, r25, r9
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[9];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003D824:
    // 8003D824: add   r6, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8003D828:
    // 8003D828: mullw   r5, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[5] = (u32)product;
    }

label_8003D82C:
    // 8003D82C: addc   r7, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D830:
    // 8003D830: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D834:
    ctx->pc = 0x8003D834u;
    // 8003D834: stbx    r7, r27, r9
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[9];
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_8003D838:
    // 8003D838: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D83C:
    // 8003D83C: add   r0, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D840:
    // 8003D840: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D844:
    // 8003D844: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D848:
    // 8003D848: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D84Cu;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D84C:
    ctx->downcount -= 28;
    // 8003D84C: and   r0, r3, r30
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[30];
    }

label_8003D850:
    // 8003D850: and   r4, r4, r26
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[26];
    }

label_8003D854:
    // 8003D854: mullw   r5, r0, r31
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[5] = (u32)product;
    }

label_8003D858:
    // 8003D858: mulhwu   r3, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[3] = (u32)(product >> 32);
    }

label_8003D85C:
    // 8003D85C: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8003D860:
    // 8003D860: mullw   r3, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[3] = (u32)product;
    }

label_8003D864:
    // 8003D864: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D868:
    // 8003D868: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D86C:
    // 8003D86C: add   r0, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D870:
    // 8003D870: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D874:
    // 8003D874: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D878:
    // 8003D878: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D87Cu;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D87C:
    ctx->downcount -= 31;
    // 8003D87C: mullw   r6, r3, r31
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[6] = (u32)product;
    }

label_8003D880:
    // 8003D880: mulhwu   r5, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8003D884:
    // 8003D884: addi    r9, r28, 5
    ctx->gpr[9] = ctx->gpr[28] + (u32)(s32)(5);

label_8003D888:
    // 8003D888: extsh r9, r9
    {
        ctx->gpr[9] = (u32)(s32)(s16)ctx->gpr[9];
    }

label_8003D88C:
    ctx->pc = 0x8003D88Cu;
    // 8003D88C: lbzx    r0, r25, r9
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[9];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003D890:
    // 8003D890: add   r6, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8003D894:
    // 8003D894: mullw   r5, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[5] = (u32)product;
    }

label_8003D898:
    // 8003D898: addc   r7, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D89C:
    // 8003D89C: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D8A0:
    ctx->pc = 0x8003D8A0u;
    // 8003D8A0: stbx    r7, r27, r9
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[9];
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_8003D8A4:
    // 8003D8A4: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D8A8:
    // 8003D8A8: add   r0, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D8AC:
    // 8003D8AC: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D8B0:
    // 8003D8B0: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D8B4:
    // 8003D8B4: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D8B8u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D8B8:
    ctx->downcount -= 28;
    // 8003D8B8: and   r0, r3, r30
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[30];
    }

label_8003D8BC:
    // 8003D8BC: and   r4, r4, r26
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[26];
    }

label_8003D8C0:
    // 8003D8C0: mullw   r5, r0, r31
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[5] = (u32)product;
    }

label_8003D8C4:
    // 8003D8C4: mulhwu   r3, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[3] = (u32)(product >> 32);
    }

label_8003D8C8:
    // 8003D8C8: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8003D8CC:
    // 8003D8CC: mullw   r3, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[3] = (u32)product;
    }

label_8003D8D0:
    // 8003D8D0: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D8D4:
    // 8003D8D4: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D8D8:
    // 8003D8D8: add   r0, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D8DC:
    // 8003D8DC: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D8E0:
    // 8003D8E0: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D8E4:
    // 8003D8E4: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D8E8u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D8E8:
    ctx->downcount -= 31;
    // 8003D8E8: mullw   r6, r3, r31
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[6] = (u32)product;
    }

label_8003D8EC:
    // 8003D8EC: mulhwu   r5, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8003D8F0:
    // 8003D8F0: addi    r9, r28, 6
    ctx->gpr[9] = ctx->gpr[28] + (u32)(s32)(6);

label_8003D8F4:
    // 8003D8F4: extsh r9, r9
    {
        ctx->gpr[9] = (u32)(s32)(s16)ctx->gpr[9];
    }

label_8003D8F8:
    ctx->pc = 0x8003D8F8u;
    // 8003D8F8: lbzx    r0, r25, r9
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[9];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003D8FC:
    // 8003D8FC: add   r6, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8003D900:
    // 8003D900: mullw   r5, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[5] = (u32)product;
    }

label_8003D904:
    // 8003D904: addc   r7, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D908:
    // 8003D908: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D90C:
    ctx->pc = 0x8003D90Cu;
    // 8003D90C: stbx    r7, r27, r9
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[9];
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_8003D910:
    // 8003D910: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D914:
    // 8003D914: add   r0, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D918:
    // 8003D918: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D91C:
    // 8003D91C: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D920:
    // 8003D920: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D924u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D924:
    ctx->downcount -= 28;
    // 8003D924: and   r0, r3, r30
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[30];
    }

label_8003D928:
    // 8003D928: and   r4, r4, r26
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[26];
    }

label_8003D92C:
    // 8003D92C: mullw   r5, r0, r31
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[5] = (u32)product;
    }

label_8003D930:
    // 8003D930: mulhwu   r3, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[3] = (u32)(product >> 32);
    }

label_8003D934:
    // 8003D934: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8003D938:
    // 8003D938: mullw   r3, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[3] = (u32)product;
    }

label_8003D93C:
    // 8003D93C: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D940:
    // 8003D940: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D944:
    // 8003D944: add   r0, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D948:
    // 8003D948: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D94C:
    // 8003D94C: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D950:
    // 8003D950: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D954u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D954:
    ctx->downcount -= 31;
    // 8003D954: mullw   r6, r3, r31
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[6] = (u32)product;
    }

label_8003D958:
    // 8003D958: mulhwu   r5, r4, r31
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[31];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8003D95C:
    // 8003D95C: addi    r9, r28, 7
    ctx->gpr[9] = ctx->gpr[28] + (u32)(s32)(7);

label_8003D960:
    // 8003D960: extsh r9, r9
    {
        ctx->gpr[9] = (u32)(s32)(s16)ctx->gpr[9];
    }

label_8003D964:
    ctx->pc = 0x8003D964u;
    // 8003D964: lbzx    r0, r25, r9
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[9];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003D968:
    // 8003D968: add   r6, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8003D96C:
    // 8003D96C: mullw   r5, r4, r30
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[5] = (u32)product;
    }

label_8003D970:
    // 8003D970: addc   r7, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D974:
    // 8003D974: mullw   r0, r4, r31
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[31];
        ctx->gpr[0] = (u32)product;
    }

label_8003D978:
    ctx->pc = 0x8003D978u;
    // 8003D978: stbx    r7, r27, r9
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[9];
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_8003D97C:
    // 8003D97C: addc   r4, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D980:
    // 8003D980: add   r0, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D984:
    // 8003D984: adde   r3, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D988:
    // 8003D988: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D98C:
    // 8003D98C: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D990u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D990:
    ctx->downcount -= 4;
    // 8003D990: and   r26, r4, r26
    {
        ctx->gpr[26] = ctx->gpr[4] & ctx->gpr[26];
    }

label_8003D994:
    // 8003D994: and   r30, r3, r30
    {
        ctx->gpr[30] = ctx->gpr[3] & ctx->gpr[30];
    }

label_8003D998:
    // 8003D998: addi    r24, r24, 8
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(8);

label_8003D99C:
    // 8003D99C: addi    r28, r28, 8
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(8);

label_8003D9A0:
    ctx->downcount -= 3;
    // 8003D9A0: extsh r0, r28
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[28];
    }

label_8003D9A4:
    // 8003D9A4: cmpw    r0, r23
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003D9A8:
    // 8003D9A8: bc    12, 0, 0x8003D630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003D630u;
                return;
            }
            goto label_8003D630;
        }
    }

label_8003D9AC:
    ctx->pc = 0x8003D9ACu;
    ctx->downcount -= 1;
    // 8003D9AC: b       0x8003DBC4
    {
            goto label_8003DBC4;
    }

label_8003D9B0:
    ctx->downcount -= 3;
    // 8003D9B0: lis     r3, 16838
    ctx->gpr[3] = ((u32)(s32)(16838) << 16);

label_8003D9B4:
    // 8003D9B4: addi    r25, r3, 20077
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(20077);

label_8003D9B8:
    // 8003D9B8: b       0x8003DA38
    {
            goto label_8003DA38;
    }

label_8003D9BC:
    ctx->downcount -= 28;
    // 8003D9BC: mullw   r5, r30, r25
    {
        s64 product = (s64)(s32)ctx->gpr[30] * (s64)(s32)ctx->gpr[25];
        ctx->gpr[5] = (u32)product;
    }

label_8003D9C0:
    // 8003D9C0: mulhwu   r3, r26, r25
    {
        u64 product = (u64)ctx->gpr[26] * (u64)ctx->gpr[25];
        ctx->gpr[3] = (u32)(product >> 32);
    }

label_8003D9C4:
    // 8003D9C4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8003D9C8:
    // 8003D9C8: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8003D9CC:
    // 8003D9CC: mullw   r3, r26, r24
    {
        s64 product = (s64)(s32)ctx->gpr[26] * (s64)(s32)ctx->gpr[24];
        ctx->gpr[3] = (u32)product;
    }

label_8003D9D0:
    // 8003D9D0: mullw   r0, r26, r25
    {
        s64 product = (s64)(s32)ctx->gpr[26] * (s64)(s32)ctx->gpr[25];
        ctx->gpr[0] = (u32)product;
    }

label_8003D9D4:
    // 8003D9D4: li      r23, 12345
    ctx->gpr[23] = (u32)(s32)(12345);

label_8003D9D8:
    // 8003D9D8: addc   r4, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D9DC:
    // 8003D9DC: add   r0, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003D9E0:
    // 8003D9E0: adde   r3, r0, r24
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003D9E4:
    // 8003D9E4: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003D9E8:
    // 8003D9E8: bl      0x8000E1D4
    {
            ctx->lr = 0x8003D9ECu;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003D9EC:
    ctx->downcount -= 30;
    // 8003D9EC: mullw   r6, r3, r25
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[25];
        ctx->gpr[6] = (u32)product;
    }

label_8003D9F0:
    ctx->pc = 0x8003D9F0u;
    // 8003D9F0: lbz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003D9F4:
    // 8003D9F4: mulhwu   r5, r4, r25
    {
        u64 product = (u64)ctx->gpr[4] * (u64)ctx->gpr[25];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8003D9F8:
    // 8003D9F8: add   r6, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8003D9FC:
    // 8003D9FC: addc   r8, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[8] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003DA00:
    // 8003DA00: extsh r7, r28
    {
        ctx->gpr[7] = (u32)(s32)(s16)ctx->gpr[28];
    }

label_8003DA04:
    // 8003DA04: mullw   r5, r4, r24
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[24];
        ctx->gpr[5] = (u32)product;
    }

label_8003DA08:
    ctx->pc = 0x8003DA08u;
    // 8003DA08: stbx    r8, r27, r7
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[7];
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_8003DA0C:
    // 8003DA0C: mullw   r0, r4, r25
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[25];
        ctx->gpr[0] = (u32)product;
    }

label_8003DA10:
    // 8003DA10: addc   r4, r0, r23
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[23];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003DA14:
    // 8003DA14: add   r0, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003DA18:
    // 8003DA18: adde   r3, r0, r24
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[24];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003DA1C:
    // 8003DA1C: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8003DA20:
    // 8003DA20: bl      0x8000E1D4
    {
            ctx->lr = 0x8003DA24u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8003DA24:
    ctx->downcount -= 5;
    // 8003DA24: li      r0, 32767
    ctx->gpr[0] = (u32)(s32)(32767);

label_8003DA28:
    // 8003DA28: and   r26, r4, r0
    {
        ctx->gpr[26] = ctx->gpr[4] & ctx->gpr[0];
    }

label_8003DA2C:
    // 8003DA2C: and   r30, r3, r24
    {
        ctx->gpr[30] = ctx->gpr[3] & ctx->gpr[24];
    }

label_8003DA30:
    // 8003DA30: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8003DA34:
    // 8003DA34: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8003DA38:
    ctx->downcount -= 3;
    // 8003DA38: extsh r0, r28
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[28];
    }

label_8003DA3C:
    // 8003DA3C: cmpwi   r0, 12
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

label_8003DA40:
    // 8003DA40: bc    12, 0, 0x8003D9BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003D9BCu;
                return;
            }
            goto label_8003D9BC;
        }
    }

label_8003DA44:
    ctx->downcount -= 2;
    // 8003DA44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003DA48:
    // 8003DA48: bl      0x80022E5C
    {
            ctx->lr = 0x8003DA4Cu;
            ctx->pc = 0x80022E5Cu;
            return;
    }

label_8003DA4C:
    ctx->pc = 0x8003DA4Cu;
    ctx->downcount -= 13;
    // 8003DA4C: stw     r18, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[18]);
    }

label_8003DA50:
    // 8003DA50: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_8003DA54:
    // 8003DA54: addi    r3, r27, 0
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(0);

label_8003DA58:
    ctx->pc = 0x8003DA58u;
    // 8003DA58: stw     r21, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_8003DA5C:
    // 8003DA5C: addi    r5, r27, 508
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(508);

label_8003DA60:
    // 8003DA60: addi    r6, r27, 510
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(510);

label_8003DA64:
    ctx->pc = 0x8003DA64u;
    // 8003DA64: stw     r20, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[20]);
    }

label_8003DA68:
    // 8003DA68: li      r4, 508
    ctx->gpr[4] = (u32)(s32)(508);

label_8003DA6C:
    ctx->pc = 0x8003DA6Cu;
    // 8003DA6C: sth     r18, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[18]);
    }

label_8003DA70:
    ctx->pc = 0x8003DA70u;
    // 8003DA70: lwz     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8003DA74:
    ctx->pc = 0x8003DA74u;
    // 8003DA74: lhz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003DA78:
    ctx->pc = 0x8003DA78u;
    // 8003DA78: sth     r0, 34(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003DA7C:
    // 8003DA7C: bl      0x8003BA1C
    {
            ctx->lr = 0x8003DA80u;
            ctx->pc = 0x8003BA1Cu;
            return;
    }

label_8003DA80:
    ctx->downcount -= 1;
    // 8003DA80: b       0x8003DACC
    {
            goto label_8003DACC;
    }

label_8003DA84:
    ctx->pc = 0x8003DA84u;
    ctx->downcount -= 10;
    // 8003DA84: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003DA88:
    // 8003DA88: extsh r3, r18
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[18];
    }

label_8003DA8C:
    // 8003DA8C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8003DA90:
    ctx->pc = 0x8003DA90u;
    // 8003DA90: lwz     r3, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003DA94:
    // 8003DA94: rlwinm r0, r0, 13, 0, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 13u) & 0xFFFFE000u;
    }

label_8003DA98:
    // 8003DA98: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_8003DA9C:
    // 8003DA9C: add   r20, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_8003DAA0:
    // 8003DAA0: addi    r3, r20, 0
    ctx->gpr[3] = ctx->gpr[20] + (u32)(s32)(0);

label_8003DAA4:
    // 8003DAA4: li      r5, 8192
    ctx->gpr[5] = (u32)(s32)(8192);

label_8003DAA8:
    // 8003DAA8: bl      0x800050B4
    {
            ctx->lr = 0x8003DAACu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8003DAAC:
    ctx->downcount -= 7;
    // 8003DAAC: addi    r4, r20, 8128
    ctx->gpr[4] = ctx->gpr[20] + (u32)(s32)(8128);

label_8003DAB0:
    ctx->pc = 0x8003DAB0u;
    // 8003DAB0: sth     r18, 8186(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8186);
        mem_write16(ctx, ea, (u16)ctx->gpr[18]);
    }

label_8003DAB4:
    // 8003DAB4: addi    r3, r20, 0
    ctx->gpr[3] = ctx->gpr[20] + (u32)(s32)(0);

label_8003DAB8:
    // 8003DAB8: addi    r5, r4, 60
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(60);

label_8003DABC:
    // 8003DABC: addi    r6, r4, 62
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(62);

label_8003DAC0:
    // 8003DAC0: li      r4, 8188
    ctx->gpr[4] = (u32)(s32)(8188);

label_8003DAC4:
    // 8003DAC4: bl      0x8003BA1C
    {
            ctx->lr = 0x8003DAC8u;
            ctx->pc = 0x8003BA1Cu;
            return;
    }

label_8003DAC8:
    ctx->downcount -= 1;
    // 8003DAC8: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_8003DACC:
    ctx->downcount -= 3;
    // 8003DACC: extsh r0, r18
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[18];
    }

label_8003DAD0:
    // 8003DAD0: cmpwi   r0, 2
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

label_8003DAD4:
    // 8003DAD4: bc    12, 0, 0x8003DA84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DA84u;
                return;
            }
            goto label_8003DA84;
        }
    }

label_8003DAD8:
    ctx->downcount -= 2;
    // 8003DAD8: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_8003DADC:
    // 8003DADC: b       0x8003DB3C
    {
            goto label_8003DB3C;
    }

label_8003DAE0:
    ctx->pc = 0x8003DAE0u;
    ctx->downcount -= 10;
    // 8003DAE0: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003DAE4:
    // 8003DAE4: extsh r3, r18
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[18];
    }

label_8003DAE8:
    // 8003DAE8: addi    r0, r3, 3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3);

label_8003DAEC:
    ctx->pc = 0x8003DAECu;
    // 8003DAEC: lwz     r3, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003DAF0:
    // 8003DAF0: rlwinm r0, r0, 13, 0, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 13u) & 0xFFFFE000u;
    }

label_8003DAF4:
    // 8003DAF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8003DAF8:
    // 8003DAF8: add   r20, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_8003DAFC:
    // 8003DAFC: addi    r3, r20, 0
    ctx->gpr[3] = ctx->gpr[20] + (u32)(s32)(0);

label_8003DB00:
    // 8003DB00: li      r5, 8192
    ctx->gpr[5] = (u32)(s32)(8192);

label_8003DB04:
    // 8003DB04: bl      0x800050B4
    {
            ctx->lr = 0x8003DB08u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8003DB08:
    ctx->pc = 0x8003DB08u;
    ctx->downcount -= 12;
    // 8003DB08: sth     r18, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[18]);
    }

label_8003DB0C:
    // 8003DB0C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_8003DB10:
    // 8003DB10: addi    r5, r20, 0
    ctx->gpr[5] = ctx->gpr[20] + (u32)(s32)(0);

label_8003DB14:
    ctx->pc = 0x8003DB14u;
    // 8003DB14: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003DB18:
    // 8003DB18: addi    r3, r20, 4
    ctx->gpr[3] = ctx->gpr[20] + (u32)(s32)(4);

label_8003DB1C:
    // 8003DB1C: addi    r6, r20, 2
    ctx->gpr[6] = ctx->gpr[20] + (u32)(s32)(2);

label_8003DB20:
    ctx->pc = 0x8003DB20u;
    // 8003DB20: lhz     r7, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_8003DB24:
    // 8003DB24: li      r4, 8188
    ctx->gpr[4] = (u32)(s32)(8188);

label_8003DB28:
    // 8003DB28: addi    r7, r7, -5
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-5);

label_8003DB2C:
    ctx->pc = 0x8003DB2Cu;
    // 8003DB2C: sth     r7, 6(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_8003DB30:
    ctx->pc = 0x8003DB30u;
    // 8003DB30: sth     r0, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003DB34:
    // 8003DB34: bl      0x8003BA1C
    {
            ctx->lr = 0x8003DB38u;
            ctx->pc = 0x8003BA1Cu;
            return;
    }

label_8003DB38:
    ctx->downcount -= 1;
    // 8003DB38: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_8003DB3C:
    ctx->downcount -= 3;
    // 8003DB3C: extsh r0, r18
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[18];
    }

label_8003DB40:
    // 8003DB40: cmpwi   r0, 2
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

label_8003DB44:
    // 8003DB44: bc    12, 0, 0x8003DAE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DAE0u;
                return;
            }
            goto label_8003DAE0;
        }
    }

label_8003DB48:
    ctx->downcount -= 2;
    // 8003DB48: cmplwi  r19, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[19]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003DB4C:
    // 8003DB4C: bc    12, 2, 0x8003DB58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003DB58;
        }
    }

label_8003DB50:
    ctx->downcount -= 2;
    // 8003DB50: or   r0, r19, r19
    {
        ctx->gpr[0] = ctx->gpr[19] | ctx->gpr[19];
    }

label_8003DB54:
    // 8003DB54: b       0x8003DB60
    {
            goto label_8003DB60;
    }

label_8003DB58:
    ctx->downcount -= 2;
    // 8003DB58: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003DB5C:
    // 8003DB5C: addi    r0, r3, -29796
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29796);

label_8003DB60:
    ctx->pc = 0x8003DB60u;
    ctx->downcount -= 7;
    // 8003DB60: lwz     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003DB64:
    // 8003DB64: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_8003DB68:
    // 8003DB68: addi    r4, r3, -24576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-24576);

label_8003DB6C:
    ctx->pc = 0x8003DB6Cu;
    // 8003DB6C: stw     r0, 208(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003DB70:
    ctx->pc = 0x8003DB70u;
    // 8003DB70: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003DB74:
    ctx->pc = 0x8003DB74u;
    // 8003DB74: lwz     r3, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003DB78:
    // 8003DB78: bl      0x8001DA7C
    {
            ctx->lr = 0x8003DB7Cu;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_8003DB7C:
    ctx->pc = 0x8003DB7Cu;
    ctx->downcount -= 15;
    // 8003DB7C: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003DB80:
    // 8003DB80: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003DB84:
    // 8003DB84: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003DB88:
    ctx->pc = 0x8003DB88u;
    // 8003DB88: stw     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003DB8C:
    // 8003DB8C: addi    r5, r3, -11196
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-11196);

label_8003DB90:
    // 8003DB90: addi    r3, r22, 0
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(0);

label_8003DB94:
    ctx->pc = 0x8003DB94u;
    // 8003DB94: lwz     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003DB98:
    ctx->pc = 0x8003DB98u;
    // 8003DB98: lwz     r4, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003DB9C:
    ctx->pc = 0x8003DB9Cu;
    // 8003DB9C: lwz     r0, 40(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003DBA0:
    // 8003DBA0: mullw   r4, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[4] = (u32)product;
    }

label_8003DBA4:
    // 8003DBA4: bl      0x80039930
    {
            ctx->lr = 0x8003DBA8u;
            ctx->pc = 0x80039930u;
            return;
    }

label_8003DBA8:
    ctx->downcount -= 2;
    // 8003DBA8: or.   r18, r3, r3
    {
        ctx->gpr[18] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[18];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003DBAC:
    // 8003DBAC: bc    4, 0, 0x8003DBBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DBBC;
        }
    }

label_8003DBB0:
    ctx->pc = 0x8003DBB0u;
    ctx->downcount -= 3;
    // 8003DBB0: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003DBB4:
    // 8003DBB4: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_8003DBB8:
    // 8003DBB8: bl      0x80039BB4
    {
            ctx->lr = 0x8003DBBCu;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003DBBC:
    ctx->downcount -= 2;
    // 8003DBBC: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_8003DBC0:
    // 8003DBC0: b       0x8003DBCC
    {
            goto label_8003DBCC;
    }

label_8003DBC4:
    ctx->downcount -= 2;
    // 8003DBC4: add   r29, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8003DBC8:
    // 8003DBC8: b       0x8003D9B0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003D9B0u;
                return;
            }
            goto label_8003D9B0;
    }

label_8003DBCC:
    ctx->pc = 0x8003DBCCu;
    ctx->downcount -= 16;
    // 8003DBCC: lmw     r18, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 18; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8003DBD0:
    ctx->pc = 0x8003DBD0u;
    // 8003DBD0: lwz     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003DBD4:
    ctx->pc = 0x8003DBD4u;
    // 8003DBD4: addi    r1, r1, 88
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(88);

label_8003DBD8:
    ctx->pc = 0x8003DBD8u;
    // 8003DBD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003DBDC:
    ctx->pc = 0x8003DBDCu;
    // 8003DBDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003DBE0:
    ctx->pc = 0x8003DBE0u;
    ctx->downcount -= 6;
    // 8003DBE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003DBE4:
    ctx->pc = 0x8003DBE4u;
    // 8003DBE4: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003DBE8:
    ctx->pc = 0x8003DBE8u;
    // 8003DBE8: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003DBEC:
    ctx->pc = 0x8003DBECu;
    // 8003DBEC: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003DBF0:
    ctx->pc = 0x8003DBF0u;
    // 8003DBF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8003DBF4:
    ctx->pc = 0x8003DBF4u;
    // 8003DBF4: bl      0x80039ABC
    {
            ctx->lr = 0x8003DBF8u;
            ctx->pc = 0x80039ABCu;
            return;
    }

label_8003DBF8:
    ctx->pc = 0x8003DBF8u;
    ctx->downcount -= 5;
    // 8003DBF8: lis     r5, -32764
    ctx->gpr[5] = ((u32)(s32)(-32764) << 16);

label_8003DBFC:
    ctx->pc = 0x8003DBFCu;
    // 8003DBFC: addi    r4, r3, 0
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(0);

label_8003DC00:
    ctx->pc = 0x8003DC00u;
    // 8003DC00: addi    r5, r5, -29792
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29792);

label_8003DC04:
    ctx->pc = 0x8003DC04u;
    // 8003DC04: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8003DC08:
    ctx->pc = 0x8003DC08u;
    // 8003DC08: bl      0x8003D588
    {
            ctx->lr = 0x8003DC0Cu;
            ctx->pc = 0x8003D588u;
            return;
    }

label_8003DC0C:
    ctx->pc = 0x8003DC0Cu;
    ctx->downcount -= 2;
    // 8003DC0C: cmpwi   r3, 0
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

label_8003DC10:
    ctx->pc = 0x8003DC10u;
    // 8003DC10: bc    4, 0, 0x8003DC18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DC18;
        }
    }

label_8003DC14:
    ctx->pc = 0x8003DC14u;
    ctx->downcount -= 1;
    // 8003DC14: b       0x8003DC20
    {
            goto label_8003DC20;
    }

label_8003DC18:
    ctx->pc = 0x8003DC18u;
    ctx->downcount -= 2;
    // 8003DC18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003DC1C:
    ctx->pc = 0x8003DC1Cu;
    // 8003DC1C: bl      0x80039DEC
    {
            ctx->lr = 0x8003DC20u;
            ctx->pc = 0x80039DECu;
            return;
    }

label_8003DC20:
    ctx->pc = 0x8003DC20u;
    ctx->downcount -= 6;
    // 8003DC20: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003DC24:
    ctx->pc = 0x8003DC24u;
    // 8003DC24: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003DC28:
    ctx->pc = 0x8003DC28u;
    // 8003DC28: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8003DC2C:
    ctx->pc = 0x8003DC2Cu;
    // 8003DC2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003DC30:
    ctx->pc = 0x8003DC30u;
    // 8003DC30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003DC34:
    ctx->pc = 0x8003DC34u;
    ctx->downcount -= 3;
    // 8003DC34: addi    r5, r3, 8
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(8);

label_8003DC38:
    ctx->pc = 0x8003DC38u;
    // 8003DC38: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_8003DC3C:
    ctx->pc = 0x8003DC3Cu;
    // 8003DC3C: b       0x8003DC78
    {
            goto label_8003DC78;
    }

label_8003DC40:
    ctx->pc = 0x8003DC40u;
    ctx->downcount -= 8;
    // 8003DC40: lbz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003DC44:
    // 8003DC44: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_8003DC48:
    ctx->pc = 0x8003DC48u;
    // 8003DC48: lbz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8003DC4C:
    // 8003DC4C: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_8003DC50:
    // 8003DC50: extsb r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8003DC54:
    // 8003DC54: extsb r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8003DC58:
    // 8003DC58: cmpw    r3, r0
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

label_8003DC5C:
    // 8003DC5C: bc    12, 2, 0x8003DC68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003DC68;
        }
    }

label_8003DC60:
    ctx->downcount -= 2;
    // 8003DC60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003DC64:
    ctx->pc = 0x8003DC64u;
    // 8003DC64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003DC68:
    ctx->downcount -= 2;
    // 8003DC68: extsb. r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003DC6C:
    // 8003DC6C: bc    4, 2, 0x8003DC78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DC78;
        }
    }

label_8003DC70:
    ctx->downcount -= 2;
    // 8003DC70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8003DC74:
    ctx->pc = 0x8003DC74u;
    // 8003DC74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003DC78:
    ctx->downcount -= 2;
    // 8003DC78: addic.  r7, r7, -1
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

label_8003DC7C:
    // 8003DC7C: bc    4, 0, 0x8003DC40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DC40u;
                return;
            }
            goto label_8003DC40;
        }
    }

label_8003DC80:
    ctx->pc = 0x8003DC80u;
    ctx->downcount -= 3;
    // 8003DC80: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003DC84:
    ctx->pc = 0x8003DC84u;
    // 8003DC84: extsb. r0, r0
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

label_8003DC88:
    ctx->pc = 0x8003DC88u;
    // 8003DC88: bc    4, 2, 0x8003DC94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DC94;
        }
    }

label_8003DC8C:
    ctx->pc = 0x8003DC8Cu;
    ctx->downcount -= 2;
    // 8003DC8C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8003DC90:
    ctx->pc = 0x8003DC90u;
    // 8003DC90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003DC94:
    ctx->pc = 0x8003DC94u;
    ctx->downcount -= 2;
    // 8003DC94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003DC98:
    ctx->pc = 0x8003DC98u;
    // 8003DC98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003DC9C:
    ctx->pc = 0x8003DC9Cu;
    ctx->downcount -= 10;
    // 8003DC9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003DCA0:
    ctx->pc = 0x8003DCA0u;
    // 8003DCA0: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003DCA4:
    ctx->pc = 0x8003DCA4u;
    // 8003DCA4: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003DCA8:
    ctx->pc = 0x8003DCA8u;
    // 8003DCA8: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003DCAC:
    ctx->pc = 0x8003DCACu;
    // 8003DCAC: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003DCB0:
    ctx->pc = 0x8003DCB0u;
    // 8003DCB0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8003DCB4:
    ctx->pc = 0x8003DCB4u;
    // 8003DCB4: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003DCB8:
    ctx->pc = 0x8003DCB8u;
    // 8003DCB8: lwz     r31, 268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(268);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003DCBC:
    ctx->pc = 0x8003DCBCu;
    // 8003DCBC: cmplwi  r0, 0x00FF
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

label_8003DCC0:
    ctx->pc = 0x8003DCC0u;
    // 8003DCC0: bc    4, 2, 0x8003DCCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DCCC;
        }
    }

label_8003DCC4:
    ctx->pc = 0x8003DCC4u;
    ctx->downcount -= 2;
    // 8003DCC4: li      r3, -4
    ctx->gpr[3] = (u32)(s32)(-4);

label_8003DCC8:
    ctx->pc = 0x8003DCC8u;
    // 8003DCC8: b       0x8003DD18
    {
            goto label_8003DD18;
    }

label_8003DCCC:
    ctx->pc = 0x8003DCCCu;
    ctx->downcount -= 4;
    // 8003DCCC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8003DCD0:
    ctx->pc = 0x8003DCD0u;
    // 8003DCD0: addi    r0, r3, -20704
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-20704);

label_8003DCD4:
    ctx->pc = 0x8003DCD4u;
    // 8003DCD4: cmplw   r31, r0
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003DCD8:
    ctx->pc = 0x8003DCD8u;
    // 8003DCD8: bc    12, 2, 0x8003DD0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003DD0C;
        }
    }

label_8003DCDC:
    ctx->pc = 0x8003DCDCu;
    ctx->downcount -= 4;
    // 8003DCDC: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_8003DCE0:
    ctx->pc = 0x8003DCE0u;
    // 8003DCE0: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8003DCE4:
    ctx->pc = 0x8003DCE4u;
    // 8003DCE4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8003DCE8:
    ctx->pc = 0x8003DCE8u;
    // 8003DCE8: bl      0x8001213C
    {
            ctx->lr = 0x8003DCECu;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DCEC:
    ctx->pc = 0x8003DCECu;
    ctx->downcount -= 2;
    // 8003DCEC: cmpwi   r3, 0
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

label_8003DCF0:
    ctx->pc = 0x8003DCF0u;
    // 8003DCF0: bc    4, 2, 0x8003DD14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DD14;
        }
    }

label_8003DCF4:
    ctx->pc = 0x8003DCF4u;
    ctx->downcount -= 4;
    // 8003DCF4: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_8003DCF8:
    ctx->pc = 0x8003DCF8u;
    // 8003DCF8: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_8003DCFC:
    ctx->pc = 0x8003DCFCu;
    // 8003DCFC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8003DD00:
    ctx->pc = 0x8003DD00u;
    // 8003DD00: bl      0x8001213C
    {
            ctx->lr = 0x8003DD04u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DD04:
    ctx->pc = 0x8003DD04u;
    ctx->downcount -= 2;
    // 8003DD04: cmpwi   r3, 0
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

label_8003DD08:
    ctx->pc = 0x8003DD08u;
    // 8003DD08: bc    4, 2, 0x8003DD14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DD14;
        }
    }

label_8003DD0C:
    ctx->pc = 0x8003DD0Cu;
    ctx->downcount -= 2;
    // 8003DD0C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003DD10:
    ctx->pc = 0x8003DD10u;
    // 8003DD10: b       0x8003DD18
    {
            goto label_8003DD18;
    }

label_8003DD14:
    ctx->pc = 0x8003DD14u;
    ctx->downcount -= 1;
    // 8003DD14: li      r3, -10
    ctx->gpr[3] = (u32)(s32)(-10);

label_8003DD18:
    ctx->pc = 0x8003DD18u;
    ctx->downcount -= 7;
    // 8003DD18: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003DD1C:
    ctx->pc = 0x8003DD1Cu;
    // 8003DD1C: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003DD20:
    ctx->pc = 0x8003DD20u;
    // 8003DD20: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003DD24:
    ctx->pc = 0x8003DD24u;
    // 8003DD24: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8003DD28:
    ctx->pc = 0x8003DD28u;
    // 8003DD28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003DD2C:
    ctx->pc = 0x8003DD2Cu;
    // 8003DD2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003DD30:
    ctx->pc = 0x8003DD30u;
    ctx->downcount -= 19;
    // 8003DD30: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003DD34:
    ctx->pc = 0x8003DD34u;
    // 8003DD34: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003DD38:
    ctx->pc = 0x8003DD38u;
    // 8003DD38: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003DD3C:
    ctx->pc = 0x8003DD3Cu;
    // 8003DD3C: stmw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8003DD40:
    ctx->pc = 0x8003DD40u;
    // 8003DD40: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8003DD44:
    ctx->pc = 0x8003DD44u;
    // 8003DD44: lbz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003DD48:
    ctx->pc = 0x8003DD48u;
    // 8003DD48: lwz     r29, 268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(268);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003DD4C:
    ctx->pc = 0x8003DD4Cu;
    // 8003DD4C: cmplwi  r0, 0x00FF
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

label_8003DD50:
    ctx->pc = 0x8003DD50u;
    // 8003DD50: bc    4, 2, 0x8003DD5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DD5C;
        }
    }

label_8003DD54:
    ctx->pc = 0x8003DD54u;
    ctx->downcount -= 2;
    // 8003DD54: li      r30, -4
    ctx->gpr[30] = (u32)(s32)(-4);

label_8003DD58:
    ctx->pc = 0x8003DD58u;
    // 8003DD58: b       0x8003DDA8
    {
            goto label_8003DDA8;
    }

label_8003DD5C:
    ctx->pc = 0x8003DD5Cu;
    ctx->downcount -= 4;
    // 8003DD5C: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8003DD60:
    ctx->pc = 0x8003DD60u;
    // 8003DD60: addi    r0, r3, -20704
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-20704);

label_8003DD64:
    ctx->pc = 0x8003DD64u;
    // 8003DD64: cmplw   r29, r0
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003DD68:
    ctx->pc = 0x8003DD68u;
    // 8003DD68: bc    12, 2, 0x8003DD9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003DD9C;
        }
    }

label_8003DD6C:
    ctx->pc = 0x8003DD6Cu;
    ctx->downcount -= 4;
    // 8003DD6C: addi    r3, r27, 0
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(0);

label_8003DD70:
    ctx->pc = 0x8003DD70u;
    // 8003DD70: addi    r4, r29, 0
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(0);

label_8003DD74:
    ctx->pc = 0x8003DD74u;
    // 8003DD74: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8003DD78:
    ctx->pc = 0x8003DD78u;
    // 8003DD78: bl      0x8001213C
    {
            ctx->lr = 0x8003DD7Cu;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DD7C:
    ctx->pc = 0x8003DD7Cu;
    ctx->downcount -= 2;
    // 8003DD7C: cmpwi   r3, 0
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

label_8003DD80:
    ctx->pc = 0x8003DD80u;
    // 8003DD80: bc    4, 2, 0x8003DDA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DDA4;
        }
    }

label_8003DD84:
    ctx->pc = 0x8003DD84u;
    ctx->downcount -= 4;
    // 8003DD84: addi    r3, r27, 4
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(4);

label_8003DD88:
    ctx->pc = 0x8003DD88u;
    // 8003DD88: addi    r4, r29, 4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(4);

label_8003DD8C:
    ctx->pc = 0x8003DD8Cu;
    // 8003DD8C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8003DD90:
    ctx->pc = 0x8003DD90u;
    // 8003DD90: bl      0x8001213C
    {
            ctx->lr = 0x8003DD94u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DD94:
    ctx->pc = 0x8003DD94u;
    ctx->downcount -= 2;
    // 8003DD94: cmpwi   r3, 0
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

label_8003DD98:
    ctx->pc = 0x8003DD98u;
    // 8003DD98: bc    4, 2, 0x8003DDA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DDA4;
        }
    }

label_8003DD9C:
    ctx->pc = 0x8003DD9Cu;
    ctx->downcount -= 2;
    // 8003DD9C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8003DDA0:
    ctx->pc = 0x8003DDA0u;
    // 8003DDA0: b       0x8003DDA8
    {
            goto label_8003DDA8;
    }

label_8003DDA4:
    ctx->pc = 0x8003DDA4u;
    ctx->downcount -= 1;
    // 8003DDA4: li      r30, -10
    ctx->gpr[30] = (u32)(s32)(-10);

label_8003DDA8:
    ctx->pc = 0x8003DDA8u;
    ctx->downcount -= 2;
    // 8003DDA8: cmpwi   r30, -10
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(-10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003DDAC:
    ctx->pc = 0x8003DDACu;
    // 8003DDAC: bc    4, 2, 0x8003DE4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DE4C;
        }
    }

label_8003DDB0:
    ctx->pc = 0x8003DDB0u;
    ctx->downcount -= 6;
    // 8003DDB0: lbz     r3, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8003DDB4:
    ctx->pc = 0x8003DDB4u;
    // 8003DDB4: lbz     r0, -32446(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32446);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003DDB8:
    ctx->pc = 0x8003DDB8u;
    // 8003DDB8: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_8003DDBC:
    ctx->pc = 0x8003DDBCu;
    // 8003DDBC: rlwinm r28, r0, 0, 24, 31
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_8003DDC0:
    ctx->pc = 0x8003DDC0u;
    // 8003DDC0: rlwinm. r0, r0, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003DDC4:
    ctx->pc = 0x8003DDC4u;
    // 8003DDC4: bc    12, 2, 0x8003DE08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003DE08;
        }
    }

label_8003DDC8:
    ctx->pc = 0x8003DDC8u;
    ctx->downcount -= 6;
    // 8003DDC8: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8003DDCC:
    ctx->pc = 0x8003DDCCu;
    // 8003DDCC: addi    r31, r3, -20704
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-20704);

label_8003DDD0:
    ctx->pc = 0x8003DDD0u;
    // 8003DDD0: addi    r3, r27, 0
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(0);

label_8003DDD4:
    ctx->pc = 0x8003DDD4u;
    // 8003DDD4: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8003DDD8:
    ctx->pc = 0x8003DDD8u;
    // 8003DDD8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8003DDDC:
    ctx->pc = 0x8003DDDCu;
    // 8003DDDC: bl      0x8001213C
    {
            ctx->lr = 0x8003DDE0u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DDE0:
    ctx->pc = 0x8003DDE0u;
    ctx->downcount -= 2;
    // 8003DDE0: cmpwi   r3, 0
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

label_8003DDE4:
    ctx->pc = 0x8003DDE4u;
    // 8003DDE4: bc    4, 2, 0x8003DE08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DE08;
        }
    }

label_8003DDE8:
    ctx->pc = 0x8003DDE8u;
    ctx->downcount -= 4;
    // 8003DDE8: addi    r3, r27, 4
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(4);

label_8003DDEC:
    ctx->pc = 0x8003DDECu;
    // 8003DDEC: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_8003DDF0:
    ctx->pc = 0x8003DDF0u;
    // 8003DDF0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8003DDF4:
    ctx->pc = 0x8003DDF4u;
    // 8003DDF4: bl      0x8001213C
    {
            ctx->lr = 0x8003DDF8u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DDF8:
    ctx->pc = 0x8003DDF8u;
    ctx->downcount -= 2;
    // 8003DDF8: cmpwi   r3, 0
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

label_8003DDFC:
    ctx->pc = 0x8003DDFCu;
    // 8003DDFC: bc    4, 2, 0x8003DE08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DE08;
        }
    }

label_8003DE00:
    ctx->pc = 0x8003DE00u;
    ctx->downcount -= 2;
    // 8003DE00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003DE04:
    ctx->pc = 0x8003DE04u;
    // 8003DE04: b       0x8003DE50
    {
            goto label_8003DE50;
    }

label_8003DE08:
    ctx->pc = 0x8003DE08u;
    ctx->downcount -= 2;
    // 8003DE08: rlwinm. r0, r28, 0, 25, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x00000040u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003DE0C:
    ctx->pc = 0x8003DE0Cu;
    // 8003DE0C: bc    12, 2, 0x8003DE4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003DE4C;
        }
    }

label_8003DE10:
    ctx->pc = 0x8003DE10u;
    ctx->downcount -= 5;
    // 8003DE10: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8003DE14:
    ctx->pc = 0x8003DE14u;
    // 8003DE14: addi    r4, r3, -20704
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-20704);

label_8003DE18:
    ctx->pc = 0x8003DE18u;
    // 8003DE18: addi    r3, r27, 0
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(0);

label_8003DE1C:
    ctx->pc = 0x8003DE1Cu;
    // 8003DE1C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8003DE20:
    ctx->pc = 0x8003DE20u;
    // 8003DE20: bl      0x8001213C
    {
            ctx->lr = 0x8003DE24u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DE24:
    ctx->pc = 0x8003DE24u;
    ctx->downcount -= 2;
    // 8003DE24: cmpwi   r3, 0
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

label_8003DE28:
    ctx->pc = 0x8003DE28u;
    // 8003DE28: bc    4, 2, 0x8003DE4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DE4C;
        }
    }

label_8003DE2C:
    ctx->pc = 0x8003DE2Cu;
    ctx->downcount -= 4;
    // 8003DE2C: addi    r3, r27, 4
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(4);

label_8003DE30:
    ctx->pc = 0x8003DE30u;
    // 8003DE30: addi    r4, r29, 4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(4);

label_8003DE34:
    ctx->pc = 0x8003DE34u;
    // 8003DE34: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8003DE38:
    ctx->pc = 0x8003DE38u;
    // 8003DE38: bl      0x8001213C
    {
            ctx->lr = 0x8003DE3Cu;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DE3C:
    ctx->pc = 0x8003DE3Cu;
    ctx->downcount -= 2;
    // 8003DE3C: cmpwi   r3, 0
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

label_8003DE40:
    ctx->pc = 0x8003DE40u;
    // 8003DE40: bc    4, 2, 0x8003DE4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DE4C;
        }
    }

label_8003DE44:
    ctx->pc = 0x8003DE44u;
    ctx->downcount -= 2;
    // 8003DE44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003DE48:
    ctx->pc = 0x8003DE48u;
    // 8003DE48: b       0x8003DE50
    {
            goto label_8003DE50;
    }

label_8003DE4C:
    ctx->pc = 0x8003DE4Cu;
    ctx->downcount -= 1;
    // 8003DE4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8003DE50:
    ctx->pc = 0x8003DE50u;
    ctx->downcount -= 16;
    // 8003DE50: lmw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8003DE54:
    ctx->pc = 0x8003DE54u;
    // 8003DE54: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003DE58:
    ctx->pc = 0x8003DE58u;
    // 8003DE58: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_8003DE5C:
    ctx->pc = 0x8003DE5Cu;
    // 8003DE5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003DE60:
    ctx->pc = 0x8003DE60u;
    // 8003DE60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003DE64:
    ctx->pc = 0x8003DE64u;
    ctx->downcount -= 17;
    // 8003DE64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003DE68:
    ctx->pc = 0x8003DE68u;
    // 8003DE68: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003DE6C:
    ctx->pc = 0x8003DE6Cu;
    // 8003DE6C: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003DE70:
    ctx->pc = 0x8003DE70u;
    // 8003DE70: stmw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8003DE74:
    ctx->pc = 0x8003DE74u;
    // 8003DE74: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8003DE78:
    ctx->pc = 0x8003DE78u;
    // 8003DE78: lwz     r28, 268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(268);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8003DE7C:
    ctx->pc = 0x8003DE7Cu;
    // 8003DE7C: bl      0x8003DC9C
    {
            ctx->lr = 0x8003DE80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DC9Cu;
                return;
            }
            goto label_8003DC9C;
    }

label_8003DE80:
    ctx->pc = 0x8003DE80u;
    ctx->downcount -= 3;
    // 8003DE80: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_8003DE84:
    ctx->pc = 0x8003DE84u;
    // 8003DE84: cmpwi   r29, -10
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003DE88:
    ctx->pc = 0x8003DE88u;
    // 8003DE88: bc    4, 2, 0x8003DF24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DF24;
        }
    }

label_8003DE8C:
    ctx->pc = 0x8003DE8Cu;
    ctx->downcount -= 6;
    // 8003DE8C: lbz     r3, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8003DE90:
    ctx->pc = 0x8003DE90u;
    // 8003DE90: lbz     r0, -32446(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32446);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003DE94:
    ctx->pc = 0x8003DE94u;
    // 8003DE94: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_8003DE98:
    ctx->pc = 0x8003DE98u;
    // 8003DE98: rlwinm r30, r0, 0, 24, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_8003DE9C:
    ctx->pc = 0x8003DE9Cu;
    // 8003DE9C: rlwinm. r0, r0, 0, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003DEA0:
    ctx->pc = 0x8003DEA0u;
    // 8003DEA0: bc    12, 2, 0x8003DEE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003DEE4;
        }
    }

label_8003DEA4:
    ctx->pc = 0x8003DEA4u;
    ctx->downcount -= 6;
    // 8003DEA4: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8003DEA8:
    ctx->pc = 0x8003DEA8u;
    // 8003DEA8: addi    r31, r3, -20704
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-20704);

label_8003DEAC:
    ctx->pc = 0x8003DEACu;
    // 8003DEAC: addi    r3, r27, 0
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(0);

label_8003DEB0:
    ctx->pc = 0x8003DEB0u;
    // 8003DEB0: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8003DEB4:
    ctx->pc = 0x8003DEB4u;
    // 8003DEB4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8003DEB8:
    ctx->pc = 0x8003DEB8u;
    // 8003DEB8: bl      0x8001213C
    {
            ctx->lr = 0x8003DEBCu;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DEBC:
    ctx->pc = 0x8003DEBCu;
    ctx->downcount -= 2;
    // 8003DEBC: cmpwi   r3, 0
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

label_8003DEC0:
    ctx->pc = 0x8003DEC0u;
    // 8003DEC0: bc    4, 2, 0x8003DEE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DEE4;
        }
    }

label_8003DEC4:
    ctx->pc = 0x8003DEC4u;
    ctx->downcount -= 4;
    // 8003DEC4: addi    r3, r27, 4
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(4);

label_8003DEC8:
    ctx->pc = 0x8003DEC8u;
    // 8003DEC8: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_8003DECC:
    ctx->pc = 0x8003DECCu;
    // 8003DECC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8003DED0:
    ctx->pc = 0x8003DED0u;
    // 8003DED0: bl      0x8001213C
    {
            ctx->lr = 0x8003DED4u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DED4:
    ctx->pc = 0x8003DED4u;
    ctx->downcount -= 2;
    // 8003DED4: cmpwi   r3, 0
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

label_8003DED8:
    ctx->pc = 0x8003DED8u;
    // 8003DED8: bc    4, 2, 0x8003DEE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DEE4;
        }
    }

label_8003DEDC:
    ctx->pc = 0x8003DEDCu;
    ctx->downcount -= 2;
    // 8003DEDC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8003DEE0:
    ctx->pc = 0x8003DEE0u;
    // 8003DEE0: b       0x8003DF24
    {
            goto label_8003DF24;
    }

label_8003DEE4:
    ctx->pc = 0x8003DEE4u;
    ctx->downcount -= 2;
    // 8003DEE4: rlwinm. r0, r30, 0, 25, 25
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

label_8003DEE8:
    ctx->pc = 0x8003DEE8u;
    // 8003DEE8: bc    12, 2, 0x8003DF24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003DF24;
        }
    }

label_8003DEEC:
    ctx->pc = 0x8003DEECu;
    ctx->downcount -= 5;
    // 8003DEEC: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8003DEF0:
    ctx->pc = 0x8003DEF0u;
    // 8003DEF0: addi    r4, r3, -20704
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-20704);

label_8003DEF4:
    ctx->pc = 0x8003DEF4u;
    // 8003DEF4: addi    r3, r27, 0
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(0);

label_8003DEF8:
    ctx->pc = 0x8003DEF8u;
    // 8003DEF8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8003DEFC:
    ctx->pc = 0x8003DEFCu;
    // 8003DEFC: bl      0x8001213C
    {
            ctx->lr = 0x8003DF00u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DF00:
    ctx->pc = 0x8003DF00u;
    ctx->downcount -= 2;
    // 8003DF00: cmpwi   r3, 0
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

label_8003DF04:
    ctx->pc = 0x8003DF04u;
    // 8003DF04: bc    4, 2, 0x8003DF24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DF24;
        }
    }

label_8003DF08:
    ctx->pc = 0x8003DF08u;
    ctx->downcount -= 4;
    // 8003DF08: addi    r3, r27, 4
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(4);

label_8003DF0C:
    ctx->pc = 0x8003DF0Cu;
    // 8003DF0C: addi    r4, r28, 4
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(4);

label_8003DF10:
    ctx->pc = 0x8003DF10u;
    // 8003DF10: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8003DF14:
    ctx->pc = 0x8003DF14u;
    // 8003DF14: bl      0x8001213C
    {
            ctx->lr = 0x8003DF18u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DF18:
    ctx->pc = 0x8003DF18u;
    ctx->downcount -= 2;
    // 8003DF18: cmpwi   r3, 0
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

label_8003DF1C:
    ctx->pc = 0x8003DF1Cu;
    // 8003DF1C: bc    4, 2, 0x8003DF24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DF24;
        }
    }

label_8003DF20:
    ctx->pc = 0x8003DF20u;
    ctx->downcount -= 1;
    // 8003DF20: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8003DF24:
    ctx->pc = 0x8003DF24u;
    ctx->downcount -= 2;
    // 8003DF24: cmpwi   r29, -10
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(-10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003DF28:
    ctx->pc = 0x8003DF28u;
    // 8003DF28: bc    4, 2, 0x8003DF40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DF40;
        }
    }

label_8003DF2C:
    ctx->pc = 0x8003DF2Cu;
    ctx->downcount -= 3;
    // 8003DF2C: lbz     r0, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003DF30:
    ctx->pc = 0x8003DF30u;
    // 8003DF30: rlwinm. r0, r0, 0, 29, 29
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

label_8003DF34:
    ctx->pc = 0x8003DF34u;
    // 8003DF34: bc    12, 2, 0x8003DF40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003DF40;
        }
    }

label_8003DF38:
    ctx->pc = 0x8003DF38u;
    ctx->downcount -= 2;
    // 8003DF38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003DF3C:
    ctx->pc = 0x8003DF3Cu;
    // 8003DF3C: b       0x8003DF44
    {
            goto label_8003DF44;
    }

label_8003DF40:
    ctx->pc = 0x8003DF40u;
    ctx->downcount -= 1;
    // 8003DF40: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8003DF44:
    ctx->pc = 0x8003DF44u;
    ctx->downcount -= 16;
    // 8003DF44: lmw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8003DF48:
    ctx->pc = 0x8003DF48u;
    // 8003DF48: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003DF4C:
    ctx->pc = 0x8003DF4Cu;
    // 8003DF4C: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_8003DF50:
    ctx->pc = 0x8003DF50u;
    // 8003DF50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003DF54:
    ctx->pc = 0x8003DF54u;
    // 8003DF54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003DF58:
    ctx->pc = 0x8003DF58u;
    ctx->downcount -= 20;
    // 8003DF58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003DF5C:
    ctx->pc = 0x8003DF5Cu;
    // 8003DF5C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003DF60:
    ctx->pc = 0x8003DF60u;
    // 8003DF60: stwu     r1, -56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-56);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003DF64:
    ctx->pc = 0x8003DF64u;
    // 8003DF64: stmw     r25, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8003DF68:
    ctx->pc = 0x8003DF68u;
    // 8003DF68: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8003DF6C:
    ctx->pc = 0x8003DF6Cu;
    // 8003DF6C: addi    r28, r4, 0
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(0);

label_8003DF70:
    ctx->pc = 0x8003DF70u;
    // 8003DF70: addi    r29, r5, 0
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(0);

label_8003DF74:
    ctx->pc = 0x8003DF74u;
    // 8003DF74: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003DF78:
    ctx->pc = 0x8003DF78u;
    // 8003DF78: cmpwi   r0, 0
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

label_8003DF7C:
    ctx->pc = 0x8003DF7Cu;
    // 8003DF7C: bc    4, 2, 0x8003DF88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DF88;
        }
    }

label_8003DF80:
    ctx->pc = 0x8003DF80u;
    ctx->downcount -= 2;
    // 8003DF80: li      r3, -3
    ctx->gpr[3] = (u32)(s32)(-3);

label_8003DF84:
    ctx->pc = 0x8003DF84u;
    // 8003DF84: b       0x8003E094
    {
            goto label_8003E094;
    }

label_8003DF88:
    ctx->pc = 0x8003DF88u;
    ctx->downcount -= 2;
    // 8003DF88: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8003DF8C:
    ctx->pc = 0x8003DF8Cu;
    // 8003DF8C: bl      0x8003B7B8
    {
            ctx->lr = 0x8003DF90u;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003DF90:
    ctx->pc = 0x8003DF90u;
    ctx->downcount -= 4;
    // 8003DF90: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8003DF94:
    ctx->pc = 0x8003DF94u;
    // 8003DF94: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8003DF98:
    ctx->pc = 0x8003DF98u;
    // 8003DF98: addi    r26, r4, -20704
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(-20704);

label_8003DF9C:
    ctx->pc = 0x8003DF9Cu;
    // 8003DF9C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8003DFA0:
    ctx->pc = 0x8003DFA0u;
    ctx->downcount -= 4;
    // 8003DFA0: lbz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003DFA4:
    ctx->pc = 0x8003DFA4u;
    // 8003DFA4: lwz     r25, 268(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(268);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_8003DFA8:
    // 8003DFA8: cmplwi  r0, 0x00FF
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

label_8003DFAC:
    // 8003DFAC: bc    4, 2, 0x8003DFB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DFB8;
        }
    }

label_8003DFB0:
    ctx->downcount -= 2;
    // 8003DFB0: li      r0, -4
    ctx->gpr[0] = (u32)(s32)(-4);

label_8003DFB4:
    // 8003DFB4: b       0x8003DFFC
    {
            goto label_8003DFFC;
    }

label_8003DFB8:
    ctx->downcount -= 2;
    // 8003DFB8: cmplw   r25, r26
    {
        u32 val_a = (u32)(ctx->gpr[25]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003DFBC:
    // 8003DFBC: bc    12, 2, 0x8003DFF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003DFF0;
        }
    }

label_8003DFC0:
    ctx->downcount -= 4;
    // 8003DFC0: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8003DFC4:
    // 8003DFC4: addi    r4, r25, 0
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(0);

label_8003DFC8:
    // 8003DFC8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8003DFCC:
    // 8003DFCC: bl      0x8001213C
    {
            ctx->lr = 0x8003DFD0u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DFD0:
    ctx->downcount -= 2;
    // 8003DFD0: cmpwi   r3, 0
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

label_8003DFD4:
    // 8003DFD4: bc    4, 2, 0x8003DFF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DFF8;
        }
    }

label_8003DFD8:
    ctx->downcount -= 4;
    // 8003DFD8: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_8003DFDC:
    // 8003DFDC: addi    r4, r25, 4
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(4);

label_8003DFE0:
    // 8003DFE0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8003DFE4:
    // 8003DFE4: bl      0x8001213C
    {
            ctx->lr = 0x8003DFE8u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003DFE8:
    ctx->downcount -= 2;
    // 8003DFE8: cmpwi   r3, 0
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

label_8003DFEC:
    // 8003DFEC: bc    4, 2, 0x8003DFF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003DFF8;
        }
    }

label_8003DFF0:
    ctx->downcount -= 2;
    // 8003DFF0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003DFF4:
    // 8003DFF4: b       0x8003DFFC
    {
            goto label_8003DFFC;
    }

label_8003DFF8:
    ctx->downcount -= 1;
    // 8003DFF8: li      r0, -10
    ctx->gpr[0] = (u32)(s32)(-10);

label_8003DFFC:
    ctx->downcount -= 2;
    // 8003DFFC: cmpwi   r0, 0
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

label_8003E000:
    // 8003E000: bc    12, 0, 0x8003E080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E080;
        }
    }

label_8003E004:
    ctx->downcount -= 4;
    // 8003E004: addi    r7, r28, 0
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(0);

label_8003E008:
    // 8003E008: addi    r6, r31, 8
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(8);

label_8003E00C:
    // 8003E00C: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8003E010:
    // 8003E010: b       0x8003E04C
    {
            goto label_8003E04C;
    }

label_8003E014:
    ctx->pc = 0x8003E014u;
    ctx->downcount -= 8;
    // 8003E014: lbz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003E018:
    // 8003E018: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_8003E01C:
    ctx->pc = 0x8003E01Cu;
    // 8003E01C: lbz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8003E020:
    // 8003E020: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_8003E024:
    // 8003E024: extsb r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8003E028:
    // 8003E028: extsb r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_8003E02C:
    // 8003E02C: cmpw    r3, r0
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

label_8003E030:
    // 8003E030: bc    12, 2, 0x8003E03C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E03C;
        }
    }

label_8003E034:
    ctx->downcount -= 2;
    // 8003E034: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003E038:
    // 8003E038: b       0x8003E06C
    {
            goto label_8003E06C;
    }

label_8003E03C:
    ctx->downcount -= 2;
    // 8003E03C: extsb. r0, r5
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[5];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003E040:
    // 8003E040: bc    4, 2, 0x8003E04C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E04C;
        }
    }

label_8003E044:
    ctx->downcount -= 2;
    // 8003E044: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8003E048:
    // 8003E048: b       0x8003E06C
    {
            goto label_8003E06C;
    }

label_8003E04C:
    ctx->downcount -= 2;
    // 8003E04C: addic.  r4, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003E050:
    // 8003E050: bc    4, 0, 0x8003E014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003E014u;
                return;
            }
            goto label_8003E014;
        }
    }

label_8003E054:
    ctx->pc = 0x8003E054u;
    ctx->downcount -= 3;
    // 8003E054: lbz     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003E058:
    // 8003E058: extsb. r0, r0
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

label_8003E05C:
    // 8003E05C: bc    4, 2, 0x8003E068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E068;
        }
    }

label_8003E060:
    ctx->downcount -= 2;
    // 8003E060: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8003E064:
    // 8003E064: b       0x8003E06C
    {
            goto label_8003E06C;
    }

label_8003E068:
    ctx->downcount -= 1;
    // 8003E068: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003E06C:
    ctx->downcount -= 2;
    // 8003E06C: cmpwi   r0, 0
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

label_8003E070:
    // 8003E070: bc    12, 2, 0x8003E080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E080;
        }
    }

label_8003E074:
    ctx->pc = 0x8003E074u;
    ctx->downcount -= 3;
    // 8003E074: stw     r30, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003E078:
    // 8003E078: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003E07C:
    // 8003E07C: b       0x8003E094
    {
            goto label_8003E094;
    }

label_8003E080:
    ctx->downcount -= 4;
    // 8003E080: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8003E084:
    // 8003E084: cmpwi   r30, 127
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(127);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E088:
    // 8003E088: addi    r31, r31, 64
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(64);

label_8003E08C:
    // 8003E08C: bc    12, 0, 0x8003DFA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DFA0u;
                return;
            }
            goto label_8003DFA0;
        }
    }

label_8003E090:
    ctx->pc = 0x8003E090u;
    ctx->downcount -= 1;
    // 8003E090: li      r3, -4
    ctx->gpr[3] = (u32)(s32)(-4);

label_8003E094:
    ctx->pc = 0x8003E094u;
    ctx->downcount -= 16;
    // 8003E094: lmw     r25, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8003E098:
    ctx->pc = 0x8003E098u;
    // 8003E098: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E09C:
    ctx->pc = 0x8003E09Cu;
    // 8003E09C: addi    r1, r1, 56
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(56);

label_8003E0A0:
    ctx->pc = 0x8003E0A0u;
    // 8003E0A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003E0A4:
    ctx->pc = 0x8003E0A4u;
    // 8003E0A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E0A8:
    ctx->pc = 0x8003E0A8u;
    ctx->downcount -= 21;
    // 8003E0A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003E0AC:
    ctx->pc = 0x8003E0ACu;
    // 8003E0AC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E0B0:
    ctx->pc = 0x8003E0B0u;
    // 8003E0B0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8003E0B4:
    ctx->pc = 0x8003E0B4u;
    // 8003E0B4: stwu     r1, -56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-56);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003E0B8:
    ctx->pc = 0x8003E0B8u;
    // 8003E0B8: stmw     r25, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8003E0BC:
    ctx->pc = 0x8003E0BCu;
    // 8003E0BC: addi    r25, r4, 0
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(0);

label_8003E0C0:
    ctx->pc = 0x8003E0C0u;
    // 8003E0C0: addi    r30, r5, 0
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(0);

label_8003E0C4:
    ctx->pc = 0x8003E0C4u;
    // 8003E0C4: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_8003E0C8:
    ctx->pc = 0x8003E0C8u;
    // 8003E0C8: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_8003E0CC:
    ctx->pc = 0x8003E0CCu;
    // 8003E0CC: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E0D0:
    ctx->pc = 0x8003E0D0u;
    // 8003E0D0: bl      0x80039AFC
    {
            ctx->lr = 0x8003E0D4u;
            ctx->pc = 0x80039AFCu;
            return;
    }

label_8003E0D4:
    ctx->pc = 0x8003E0D4u;
    ctx->downcount -= 2;
    // 8003E0D4: cmpwi   r3, 0
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

label_8003E0D8:
    ctx->pc = 0x8003E0D8u;
    // 8003E0D8: bc    4, 0, 0x8003E0E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E0E0;
        }
    }

label_8003E0DC:
    ctx->pc = 0x8003E0DCu;
    ctx->downcount -= 1;
    // 8003E0DC: b       0x8003E1B0
    {
            goto label_8003E1B0;
    }

label_8003E0E0:
    ctx->pc = 0x8003E0E0u;
    ctx->downcount -= 4;
    // 8003E0E0: lwz     r26, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8003E0E4:
    ctx->pc = 0x8003E0E4u;
    // 8003E0E4: lwz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E0E8:
    ctx->pc = 0x8003E0E8u;
    // 8003E0E8: cmpwi   r0, 0
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

label_8003E0EC:
    ctx->pc = 0x8003E0ECu;
    // 8003E0EC: bc    4, 2, 0x8003E0F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E0F8;
        }
    }

label_8003E0F0:
    ctx->pc = 0x8003E0F0u;
    ctx->downcount -= 2;
    // 8003E0F0: li      r26, -3
    ctx->gpr[26] = (u32)(s32)(-3);

label_8003E0F4:
    ctx->pc = 0x8003E0F4u;
    // 8003E0F4: b       0x8003E150
    {
            goto label_8003E150;
    }

label_8003E0F8:
    ctx->pc = 0x8003E0F8u;
    ctx->downcount -= 2;
    // 8003E0F8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8003E0FC:
    ctx->pc = 0x8003E0FCu;
    // 8003E0FC: bl      0x8003B7B8
    {
            ctx->lr = 0x8003E100u;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003E100:
    ctx->pc = 0x8003E100u;
    ctx->downcount -= 2;
    // 8003E100: addi    r27, r3, 0
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(0);

label_8003E104:
    ctx->pc = 0x8003E104u;
    // 8003E104: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8003E108:
    ctx->downcount -= 3;
    // 8003E108: addi    r3, r26, 0
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(0);

label_8003E10C:
    // 8003E10C: addi    r4, r27, 0
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(0);

label_8003E110:
    // 8003E110: bl      0x8003DC9C
    {
            ctx->lr = 0x8003E114u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DC9Cu;
                return;
            }
            goto label_8003DC9C;
    }

label_8003E114:
    ctx->downcount -= 2;
    // 8003E114: cmpwi   r3, 0
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

label_8003E118:
    // 8003E118: bc    12, 0, 0x8003E13C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E13C;
        }
    }

label_8003E11C:
    ctx->downcount -= 3;
    // 8003E11C: addi    r3, r27, 0
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(0);

label_8003E120:
    // 8003E120: addi    r4, r25, 0
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(0);

label_8003E124:
    // 8003E124: bl      0x8003DC34
    {
            ctx->lr = 0x8003E128u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DC34u;
                return;
            }
            goto label_8003DC34;
    }

label_8003E128:
    ctx->downcount -= 2;
    // 8003E128: cmpwi   r3, 0
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

label_8003E12C:
    // 8003E12C: bc    12, 2, 0x8003E13C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E13C;
        }
    }

label_8003E130:
    ctx->downcount -= 3;
    // 8003E130: addi    r31, r28, 0
    ctx->gpr[31] = ctx->gpr[28] + (u32)(s32)(0);

label_8003E134:
    // 8003E134: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_8003E138:
    // 8003E138: b       0x8003E150
    {
            goto label_8003E150;
    }

label_8003E13C:
    ctx->downcount -= 4;
    // 8003E13C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8003E140:
    // 8003E140: cmpwi   r28, 127
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(127);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E144:
    // 8003E144: addi    r27, r27, 64
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(64);

label_8003E148:
    // 8003E148: bc    12, 0, 0x8003E108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003E108u;
                return;
            }
            goto label_8003E108;
        }
    }

label_8003E14C:
    ctx->pc = 0x8003E14Cu;
    ctx->downcount -= 1;
    // 8003E14C: li      r26, -4
    ctx->gpr[26] = (u32)(s32)(-4);

label_8003E150:
    ctx->pc = 0x8003E150u;
    ctx->downcount -= 2;
    // 8003E150: cmpwi   r26, 0
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

label_8003E154:
    ctx->pc = 0x8003E154u;
    // 8003E154: bc    12, 0, 0x8003E1A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E1A4;
        }
    }

label_8003E158:
    ctx->pc = 0x8003E158u;
    ctx->downcount -= 2;
    // 8003E158: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E15C:
    ctx->pc = 0x8003E15Cu;
    // 8003E15C: bl      0x8003B7B8
    {
            ctx->lr = 0x8003E160u;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003E160:
    ctx->pc = 0x8003E160u;
    ctx->downcount -= 5;
    // 8003E160: rlwinm r0, r31, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 6u) & 0xFFFFFFC0u;
    }

label_8003E164:
    ctx->pc = 0x8003E164u;
    // 8003E164: add   r5, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8003E168:
    ctx->pc = 0x8003E168u;
    // 8003E168: lhz     r4, 54(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(54);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8003E16C:
    ctx->pc = 0x8003E16Cu;
    // 8003E16C: cmplwi  r4, 0x0005
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0005u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E170:
    ctx->pc = 0x8003E170u;
    // 8003E170: bc    12, 0, 0x8003E184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E184;
        }
    }

label_8003E174:
    ctx->pc = 0x8003E174u;
    ctx->downcount -= 4;
    // 8003E174: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E178:
    ctx->pc = 0x8003E178u;
    // 8003E178: lhz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E17C:
    ctx->pc = 0x8003E17Cu;
    // 8003E17C: cmplw   r4, r0
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

label_8003E180:
    ctx->pc = 0x8003E180u;
    // 8003E180: bc    12, 0, 0x8003E18C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E18C;
        }
    }

label_8003E184:
    ctx->pc = 0x8003E184u;
    ctx->downcount -= 2;
    // 8003E184: li      r26, -6
    ctx->gpr[26] = (u32)(s32)(-6);

label_8003E188:
    ctx->pc = 0x8003E188u;
    // 8003E188: b       0x8003E1A4
    {
            goto label_8003E1A4;
    }

label_8003E18C:
    ctx->pc = 0x8003E18Cu;
    ctx->downcount -= 6;
    // 8003E18C: stw     r29, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003E190:
    ctx->pc = 0x8003E190u;
    // 8003E190: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003E194:
    ctx->pc = 0x8003E194u;
    // 8003E194: stw     r31, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003E198:
    ctx->pc = 0x8003E198u;
    // 8003E198: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E19C:
    ctx->pc = 0x8003E19Cu;
    // 8003E19C: lhz     r0, 54(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(54);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E1A0:
    ctx->pc = 0x8003E1A0u;
    // 8003E1A0: sth     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003E1A4:
    ctx->pc = 0x8003E1A4u;
    ctx->downcount -= 3;
    // 8003E1A4: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E1A8:
    ctx->pc = 0x8003E1A8u;
    // 8003E1A8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8003E1AC:
    ctx->pc = 0x8003E1ACu;
    // 8003E1AC: bl      0x80039BB4
    {
            ctx->lr = 0x8003E1B0u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E1B0:
    ctx->pc = 0x8003E1B0u;
    ctx->downcount -= 16;
    // 8003E1B0: lmw     r25, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8003E1B4:
    ctx->pc = 0x8003E1B4u;
    // 8003E1B4: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E1B8:
    ctx->pc = 0x8003E1B8u;
    // 8003E1B8: addi    r1, r1, 56
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(56);

label_8003E1BC:
    ctx->pc = 0x8003E1BCu;
    // 8003E1BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003E1C0:
    ctx->pc = 0x8003E1C0u;
    // 8003E1C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E1C4:
    ctx->pc = 0x8003E1C4u;
    ctx->downcount -= 8;
    // 8003E1C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003E1C8:
    ctx->pc = 0x8003E1C8u;
    // 8003E1C8: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E1CC:
    ctx->pc = 0x8003E1CCu;
    // 8003E1CC: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003E1D0:
    ctx->pc = 0x8003E1D0u;
    // 8003E1D0: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003E1D4:
    ctx->pc = 0x8003E1D4u;
    // 8003E1D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8003E1D8:
    ctx->pc = 0x8003E1D8u;
    // 8003E1D8: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_8003E1DC:
    ctx->pc = 0x8003E1DCu;
    // 8003E1DC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E1E0:
    ctx->pc = 0x8003E1E0u;
    // 8003E1E0: bl      0x80039AFC
    {
            ctx->lr = 0x8003E1E4u;
            ctx->pc = 0x80039AFCu;
            return;
    }

label_8003E1E4:
    ctx->pc = 0x8003E1E4u;
    ctx->downcount -= 2;
    // 8003E1E4: cmpwi   r3, 0
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

label_8003E1E8:
    ctx->pc = 0x8003E1E8u;
    // 8003E1E8: bc    4, 0, 0x8003E1F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E1F0;
        }
    }

label_8003E1EC:
    ctx->pc = 0x8003E1ECu;
    ctx->downcount -= 1;
    // 8003E1EC: b       0x8003E204
    {
            goto label_8003E204;
    }

label_8003E1F0:
    ctx->pc = 0x8003E1F0u;
    ctx->downcount -= 5;
    // 8003E1F0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8003E1F4:
    ctx->pc = 0x8003E1F4u;
    // 8003E1F4: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E1F8:
    ctx->pc = 0x8003E1F8u;
    // 8003E1F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8003E1FC:
    ctx->pc = 0x8003E1FCu;
    // 8003E1FC: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E200:
    ctx->pc = 0x8003E200u;
    // 8003E200: bl      0x80039BB4
    {
            ctx->lr = 0x8003E204u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E204:
    ctx->pc = 0x8003E204u;
    ctx->downcount -= 6;
    // 8003E204: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E208:
    ctx->pc = 0x8003E208u;
    // 8003E208: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003E20C:
    ctx->pc = 0x8003E20Cu;
    // 8003E20C: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8003E210:
    ctx->pc = 0x8003E210u;
    // 8003E210: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003E214:
    ctx->pc = 0x8003E214u;
    // 8003E214: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E218:
    ctx->pc = 0x8003E218u;
    ctx->downcount -= 2;
    // 8003E218: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003E21C:
    ctx->pc = 0x8003E21Cu;
    // 8003E21C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E220:
    ctx->pc = 0x8003E220u;
    ctx->downcount -= 26;
    // 8003E220: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003E224:
    ctx->pc = 0x8003E224u;
    // 8003E224: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E228:
    ctx->pc = 0x8003E228u;
    // 8003E228: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003E22C:
    ctx->pc = 0x8003E22Cu;
    // 8003E22C: stmw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8003E230:
    ctx->pc = 0x8003E230u;
    // 8003E230: addi    r28, r3, 0
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(0);

label_8003E234:
    ctx->pc = 0x8003E234u;
    // 8003E234: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8003E238:
    ctx->pc = 0x8003E238u;
    // 8003E238: mulli   r5, r28, 272
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[28] * (s64)(s32)272);

label_8003E23C:
    ctx->pc = 0x8003E23Cu;
    // 8003E23C: addi    r0, r3, -21248
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-21248);

label_8003E240:
    ctx->pc = 0x8003E240u;
    // 8003E240: add   r31, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_8003E244:
    ctx->pc = 0x8003E244u;
    // 8003E244: lwz     r29, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003E248:
    ctx->pc = 0x8003E248u;
    // 8003E248: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8003E24C:
    ctx->pc = 0x8003E24Cu;
    // 8003E24C: or.   r30, r4, r4
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

label_8003E250:
    ctx->pc = 0x8003E250u;
    // 8003E250: stw     r27, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_8003E254:
    ctx->pc = 0x8003E254u;
    // 8003E254: bc    12, 0, 0x8003E314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E314;
        }
    }

label_8003E258:
    ctx->pc = 0x8003E258u;
    ctx->downcount -= 2;
    // 8003E258: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003E25C:
    ctx->pc = 0x8003E25Cu;
    // 8003E25C: bl      0x8003B7B8
    {
            ctx->lr = 0x8003E260u;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003E260:
    ctx->pc = 0x8003E260u;
    ctx->downcount -= 7;
    // 8003E260: lhz     r0, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E264:
    ctx->pc = 0x8003E264u;
    // 8003E264: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8003E268:
    ctx->pc = 0x8003E268u;
    // 8003E268: lwz     r4, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E26C:
    ctx->pc = 0x8003E26Cu;
    // 8003E26C: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_8003E270:
    ctx->pc = 0x8003E270u;
    // 8003E270: add   r30, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_8003E274:
    ctx->pc = 0x8003E274u;
    // 8003E274: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_8003E278:
    ctx->pc = 0x8003E278u;
    // 8003E278: bl      0x8000519C
    {
            ctx->lr = 0x8003E27Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8003E27C:
    ctx->pc = 0x8003E27Cu;
    ctx->downcount -= 5;
    // 8003E27C: lwz     r4, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E280:
    ctx->pc = 0x8003E280u;
    // 8003E280: addi    r3, r30, 4
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(4);

label_8003E284:
    ctx->pc = 0x8003E284u;
    // 8003E284: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8003E288:
    ctx->pc = 0x8003E288u;
    // 8003E288: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8003E28C:
    ctx->pc = 0x8003E28Cu;
    // 8003E28C: bl      0x8000519C
    {
            ctx->lr = 0x8003E290u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8003E290:
    ctx->pc = 0x8003E290u;
    ctx->downcount -= 24;
    // 8003E290: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_8003E294:
    ctx->pc = 0x8003E294u;
    // 8003E294: stb     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8003E298:
    ctx->pc = 0x8003E298u;
    // 8003E298: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8003E29C:
    ctx->pc = 0x8003E29Cu;
    // 8003E29C: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8003E2A0:
    ctx->pc = 0x8003E2A0u;
    // 8003E2A0: stb     r27, 53(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(53);
        mem_write8(ctx, ea, (u8)ctx->gpr[27]);
    }

label_8003E2A4:
    ctx->pc = 0x8003E2A4u;
    // 8003E2A4: lhz     r4, 190(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(190);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8003E2A8:
    ctx->pc = 0x8003E2A8u;
    // 8003E2A8: sth     r4, 54(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8003E2AC:
    ctx->pc = 0x8003E2ACu;
    // 8003E2AC: stb     r27, 7(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[27]);
    }

label_8003E2B0:
    ctx->pc = 0x8003E2B0u;
    // 8003E2B0: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E2B4:
    ctx->pc = 0x8003E2B4u;
    // 8003E2B4: sth     r27, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[27]);
    }

label_8003E2B8:
    ctx->pc = 0x8003E2B8u;
    // 8003E2B8: sth     r27, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[27]);
    }

label_8003E2BC:
    ctx->pc = 0x8003E2BCu;
    // 8003E2BC: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E2C0:
    ctx->pc = 0x8003E2C0u;
    // 8003E2C0: lhz     r0, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E2C4:
    ctx->pc = 0x8003E2C4u;
    // 8003E2C4: rlwinm r0, r0, 0, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFCu;
    }

label_8003E2C8:
    ctx->pc = 0x8003E2C8u;
    // 8003E2C8: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_8003E2CC:
    ctx->pc = 0x8003E2CCu;
    // 8003E2CC: sth     r0, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003E2D0:
    ctx->pc = 0x8003E2D0u;
    // 8003E2D0: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E2D4:
    ctx->pc = 0x8003E2D4u;
    // 8003E2D4: stw     r27, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_8003E2D8:
    ctx->pc = 0x8003E2D8u;
    // 8003E2D8: lhz     r0, 54(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(54);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E2DC:
    ctx->pc = 0x8003E2DCu;
    // 8003E2DC: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E2E0:
    ctx->pc = 0x8003E2E0u;
    // 8003E2E0: sth     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003E2E4:
    ctx->pc = 0x8003E2E4u;
    // 8003E2E4: lwz     r0, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E2E8:
    ctx->pc = 0x8003E2E8u;
    // 8003E2E8: rlwinm r27, r0, 30, 2, 31
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_8003E2EC:
    ctx->pc = 0x8003E2ECu;
    // 8003E2EC: bl      0x80024A8C
    {
            ctx->lr = 0x8003E2F0u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_8003E2F0:
    ctx->pc = 0x8003E2F0u;
    ctx->downcount -= 3;
    // 8003E2F0: addi    r6, r27, 0
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(0);

label_8003E2F4:
    ctx->pc = 0x8003E2F4u;
    // 8003E2F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8003E2F8:
    ctx->pc = 0x8003E2F8u;
    // 8003E2F8: bl      0x8000DE64
    {
            ctx->lr = 0x8003E2FCu;
            ctx->pc = 0x8000DE64u;
            return;
    }

label_8003E2FC:
    ctx->pc = 0x8003E2FCu;
    ctx->downcount -= 4;
    // 8003E2FC: stw     r4, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003E300:
    ctx->pc = 0x8003E300u;
    // 8003E300: addi    r3, r28, 0
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(0);

label_8003E304:
    ctx->pc = 0x8003E304u;
    // 8003E304: addi    r4, r29, 0
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(0);

label_8003E308:
    ctx->pc = 0x8003E308u;
    // 8003E308: bl      0x8003B958
    {
            ctx->lr = 0x8003E30Cu;
            ctx->pc = 0x8003B958u;
            return;
    }

label_8003E30C:
    ctx->pc = 0x8003E30Cu;
    ctx->downcount -= 2;
    // 8003E30C: or.   r30, r3, r3
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

label_8003E310:
    ctx->pc = 0x8003E310u;
    // 8003E310: bc    4, 0, 0x8003E33C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E33C;
        }
    }

label_8003E314:
    ctx->pc = 0x8003E314u;
    ctx->downcount -= 3;
    // 8003E314: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8003E318:
    ctx->pc = 0x8003E318u;
    // 8003E318: addi    r4, r30, 0
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(0);

label_8003E31C:
    ctx->pc = 0x8003E31Cu;
    // 8003E31C: bl      0x80039BB4
    {
            ctx->lr = 0x8003E320u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E320:
    ctx->pc = 0x8003E320u;
    ctx->downcount -= 2;
    // 8003E320: cmplwi  r29, 0x0000
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

label_8003E324:
    ctx->pc = 0x8003E324u;
    // 8003E324: bc    12, 2, 0x8003E33C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E33C;
        }
    }

label_8003E328:
    ctx->pc = 0x8003E328u;
    ctx->downcount -= 6;
    // 8003E328: addi    r12, r29, 0
    ctx->gpr[12] = ctx->gpr[29] + (u32)(s32)(0);

label_8003E32C:
    ctx->pc = 0x8003E32Cu;
    // 8003E32C: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_8003E330:
    ctx->pc = 0x8003E330u;
    // 8003E330: addi    r3, r28, 0
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(0);

label_8003E334:
    ctx->pc = 0x8003E334u;
    // 8003E334: addi    r4, r30, 0
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(0);

label_8003E338:
    ctx->pc = 0x8003E338u;
    // 8003E338: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8003E33Cu;
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E33C:
    ctx->pc = 0x8003E33Cu;
    ctx->downcount -= 16;
    // 8003E33C: lmw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8003E340:
    ctx->pc = 0x8003E340u;
    // 8003E340: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E344:
    ctx->pc = 0x8003E344u;
    // 8003E344: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_8003E348:
    ctx->pc = 0x8003E348u;
    // 8003E348: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003E34C:
    ctx->pc = 0x8003E34Cu;
    // 8003E34C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E350:
    ctx->pc = 0x8003E350u;
    ctx->downcount -= 21;
    // 8003E350: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003E354:
    ctx->pc = 0x8003E354u;
    // 8003E354: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E358:
    ctx->pc = 0x8003E358u;
    // 8003E358: stwu     r1, -72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-72);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003E35C:
    ctx->pc = 0x8003E35Cu;
    // 8003E35C: stmw     r23, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8003E360:
    ctx->pc = 0x8003E360u;
    // 8003E360: addi    r26, r4, 0
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(0);

label_8003E364:
    ctx->pc = 0x8003E364u;
    // 8003E364: addi    r25, r3, 0
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(0);

label_8003E368:
    ctx->pc = 0x8003E368u;
    // 8003E368: addi    r27, r5, 0
    ctx->gpr[27] = ctx->gpr[5] + (u32)(s32)(0);

label_8003E36C:
    ctx->pc = 0x8003E36Cu;
    // 8003E36C: addi    r28, r6, 0
    ctx->gpr[28] = ctx->gpr[6] + (u32)(s32)(0);

label_8003E370:
    ctx->pc = 0x8003E370u;
    // 8003E370: addi    r29, r7, 0
    ctx->gpr[29] = ctx->gpr[7] + (u32)(s32)(0);

label_8003E374:
    ctx->pc = 0x8003E374u;
    // 8003E374: addi    r3, r26, 0
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(0);

label_8003E378:
    ctx->pc = 0x8003E378u;
    // 8003E378: bl      0x80014B68
    {
            ctx->lr = 0x8003E37Cu;
            ctx->pc = 0x80014B68u;
            return;
    }

label_8003E37C:
    ctx->pc = 0x8003E37Cu;
    ctx->downcount -= 2;
    // 8003E37C: cmplwi  r3, 0x0020
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0020u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E380:
    ctx->pc = 0x8003E380u;
    // 8003E380: bc    4, 1, 0x8003E38C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E38C;
        }
    }

label_8003E384:
    ctx->pc = 0x8003E384u;
    ctx->downcount -= 2;
    // 8003E384: li      r3, -12
    ctx->gpr[3] = (u32)(s32)(-12);

label_8003E388:
    ctx->pc = 0x8003E388u;
    // 8003E388: b       0x8003E55C
    {
            goto label_8003E55C;
    }

label_8003E38C:
    ctx->pc = 0x8003E38Cu;
    ctx->downcount -= 3;
    // 8003E38C: addi    r3, r25, 0
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(0);

label_8003E390:
    ctx->pc = 0x8003E390u;
    // 8003E390: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_8003E394:
    ctx->pc = 0x8003E394u;
    // 8003E394: bl      0x80039AFC
    {
            ctx->lr = 0x8003E398u;
            ctx->pc = 0x80039AFCu;
            return;
    }

label_8003E398:
    ctx->pc = 0x8003E398u;
    ctx->downcount -= 2;
    // 8003E398: cmpwi   r3, 0
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

label_8003E39C:
    ctx->pc = 0x8003E39Cu;
    // 8003E39C: bc    4, 0, 0x8003E3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E3A4;
        }
    }

label_8003E3A0:
    ctx->pc = 0x8003E3A0u;
    ctx->downcount -= 1;
    // 8003E3A0: b       0x8003E55C
    {
            goto label_8003E55C;
    }

label_8003E3A4:
    ctx->pc = 0x8003E3A4u;
    ctx->downcount -= 2;
    // 8003E3A4: cmplwi  r27, 0x0000
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

label_8003E3A8:
    ctx->pc = 0x8003E3A8u;
    // 8003E3A8: bc    12, 2, 0x8003E3C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E3C4;
        }
    }

label_8003E3AC:
    ctx->pc = 0x8003E3ACu;
    ctx->downcount -= 49;
    // 8003E3AC: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E3B0:
    ctx->pc = 0x8003E3B0u;
    // 8003E3B0: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E3B4:
    ctx->pc = 0x8003E3B4u;
    // 8003E3B4: divwu   r0, r27, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[27] / divisor;
    }

label_8003E3B8:
    ctx->pc = 0x8003E3B8u;
    // 8003E3B8: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_8003E3BC:
    ctx->pc = 0x8003E3BCu;
    // 8003E3BC: subf.   r0, r0, r27
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[27];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003E3C0:
    ctx->pc = 0x8003E3C0u;
    // 8003E3C0: bc    12, 2, 0x8003E3CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E3CC;
        }
    }

label_8003E3C4:
    ctx->pc = 0x8003E3C4u;
    ctx->downcount -= 2;
    // 8003E3C4: li      r3, -128
    ctx->gpr[3] = (u32)(s32)(-128);

label_8003E3C8:
    ctx->pc = 0x8003E3C8u;
    // 8003E3C8: b       0x8003E55C
    {
            goto label_8003E55C;
    }

label_8003E3CC:
    ctx->pc = 0x8003E3CCu;
    ctx->downcount -= 3;
    // 8003E3CC: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_8003E3D0:
    ctx->pc = 0x8003E3D0u;
    // 8003E3D0: addi    r30, r4, -1
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-1);

label_8003E3D4:
    ctx->pc = 0x8003E3D4u;
    // 8003E3D4: bl      0x8003B7B8
    {
            ctx->lr = 0x8003E3D8u;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003E3D8:
    ctx->pc = 0x8003E3D8u;
    ctx->downcount -= 4;
    // 8003E3D8: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8003E3DC:
    ctx->pc = 0x8003E3DCu;
    // 8003E3DC: addi    r24, r31, 0
    ctx->gpr[24] = ctx->gpr[31] + (u32)(s32)(0);

label_8003E3E0:
    ctx->pc = 0x8003E3E0u;
    // 8003E3E0: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_8003E3E4:
    ctx->pc = 0x8003E3E4u;
    // 8003E3E4: b       0x8003E470
    {
            goto label_8003E470;
    }

label_8003E3E8:
    ctx->pc = 0x8003E3E8u;
    ctx->downcount -= 3;
    // 8003E3E8: lbz     r0, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003E3EC:
    // 8003E3EC: cmplwi  r0, 0x00FF
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

label_8003E3F0:
    // 8003E3F0: bc    4, 2, 0x8003E408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E408;
        }
    }

label_8003E3F4:
    ctx->downcount -= 3;
    // 8003E3F4: rlwinm r0, r30, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x0000FFFFu;
    }

label_8003E3F8:
    // 8003E3F8: cmplwi  r0, 0xFFFF
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

label_8003E3FC:
    // 8003E3FC: bc    4, 2, 0x8003E468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E468;
        }
    }

label_8003E400:
    ctx->downcount -= 2;
    // 8003E400: or   r30, r23, r23
    {
        ctx->gpr[30] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8003E404:
    // 8003E404: b       0x8003E468
    {
            goto label_8003E468;
    }

label_8003E408:
    ctx->pc = 0x8003E408u;
    ctx->downcount -= 5;
    // 8003E408: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E40C:
    // 8003E40C: addi    r3, r24, 0
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(0);

label_8003E410:
    // 8003E410: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8003E414:
    ctx->pc = 0x8003E414u;
    // 8003E414: lwz     r4, 268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(268);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E418:
    // 8003E418: bl      0x8001213C
    {
            ctx->lr = 0x8003E41Cu;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003E41C:
    ctx->downcount -= 2;
    // 8003E41C: cmpwi   r3, 0
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

label_8003E420:
    // 8003E420: bc    4, 2, 0x8003E468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E468;
        }
    }

label_8003E424:
    ctx->pc = 0x8003E424u;
    ctx->downcount -= 6;
    // 8003E424: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E428:
    // 8003E428: addi    r3, r24, 4
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(4);

label_8003E42C:
    // 8003E42C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8003E430:
    ctx->pc = 0x8003E430u;
    // 8003E430: lwz     r4, 268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(268);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E434:
    // 8003E434: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8003E438:
    // 8003E438: bl      0x8001213C
    {
            ctx->lr = 0x8003E43Cu;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003E43C:
    ctx->downcount -= 2;
    // 8003E43C: cmpwi   r3, 0
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

label_8003E440:
    // 8003E440: bc    4, 2, 0x8003E468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E468;
        }
    }

label_8003E444:
    ctx->downcount -= 3;
    // 8003E444: addi    r3, r24, 0
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(0);

label_8003E448:
    // 8003E448: addi    r4, r26, 0
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(0);

label_8003E44C:
    // 8003E44C: bl      0x8003DC34
    {
            ctx->lr = 0x8003E450u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DC34u;
                return;
            }
            goto label_8003DC34;
    }

label_8003E450:
    ctx->downcount -= 2;
    // 8003E450: cmpwi   r3, 0
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

label_8003E454:
    // 8003E454: bc    12, 2, 0x8003E468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E468;
        }
    }

label_8003E458:
    ctx->pc = 0x8003E458u;
    ctx->downcount -= 3;
    // 8003E458: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E45C:
    // 8003E45C: li      r4, -7
    ctx->gpr[4] = (u32)(s32)(-7);

label_8003E460:
    // 8003E460: bl      0x80039BB4
    {
            ctx->lr = 0x8003E464u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E464:
    ctx->downcount -= 1;
    // 8003E464: b       0x8003E55C
    {
            goto label_8003E55C;
    }

label_8003E468:
    ctx->downcount -= 2;
    // 8003E468: addi    r24, r24, 64
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(64);

label_8003E46C:
    // 8003E46C: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_8003E470:
    ctx->downcount -= 3;
    // 8003E470: rlwinm r0, r23, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[23], 0u) & 0x0000FFFFu;
    }

label_8003E474:
    // 8003E474: cmplwi  r0, 0x007F
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x007Fu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E478:
    // 8003E478: bc    12, 0, 0x8003E3E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003E3E8u;
                return;
            }
            goto label_8003E3E8;
        }
    }

label_8003E47C:
    ctx->pc = 0x8003E47Cu;
    ctx->downcount -= 3;
    // 8003E47C: rlwinm r0, r30, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x0000FFFFu;
    }

label_8003E480:
    ctx->pc = 0x8003E480u;
    // 8003E480: cmplwi  r0, 0xFFFF
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

label_8003E484:
    ctx->pc = 0x8003E484u;
    // 8003E484: bc    4, 2, 0x8003E498
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E498;
        }
    }

label_8003E488:
    ctx->pc = 0x8003E488u;
    ctx->downcount -= 3;
    // 8003E488: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E48C:
    ctx->pc = 0x8003E48Cu;
    // 8003E48C: li      r4, -8
    ctx->gpr[4] = (u32)(s32)(-8);

label_8003E490:
    ctx->pc = 0x8003E490u;
    // 8003E490: bl      0x80039BB4
    {
            ctx->lr = 0x8003E494u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E494:
    ctx->pc = 0x8003E494u;
    ctx->downcount -= 1;
    // 8003E494: b       0x8003E55C
    {
            goto label_8003E55C;
    }

label_8003E498:
    ctx->pc = 0x8003E498u;
    ctx->downcount -= 2;
    // 8003E498: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E49C:
    ctx->pc = 0x8003E49Cu;
    // 8003E49C: bl      0x8003B3B4
    {
            ctx->lr = 0x8003E4A0u;
            ctx->pc = 0x8003B3B4u;
            return;
    }

label_8003E4A0:
    ctx->pc = 0x8003E4A0u;
    ctx->downcount -= 10;
    // 8003E4A0: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E4A4:
    ctx->pc = 0x8003E4A4u;
    // 8003E4A4: lhz     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E4A8:
    ctx->pc = 0x8003E4A8u;
    // 8003E4A8: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E4AC:
    ctx->pc = 0x8003E4ACu;
    // 8003E4AC: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_8003E4B0:
    ctx->pc = 0x8003E4B0u;
    // 8003E4B0: cmplw   r0, r27
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E4B4:
    ctx->pc = 0x8003E4B4u;
    // 8003E4B4: bc    4, 0, 0x8003E4C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E4C8;
        }
    }

label_8003E4B8:
    ctx->pc = 0x8003E4B8u;
    ctx->downcount -= 3;
    // 8003E4B8: addi    r3, r4, 0
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(0);

label_8003E4BC:
    ctx->pc = 0x8003E4BCu;
    // 8003E4BC: li      r4, -9
    ctx->gpr[4] = (u32)(s32)(-9);

label_8003E4C0:
    ctx->pc = 0x8003E4C0u;
    // 8003E4C0: bl      0x80039BB4
    {
            ctx->lr = 0x8003E4C4u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E4C4:
    ctx->pc = 0x8003E4C4u;
    ctx->downcount -= 1;
    // 8003E4C4: b       0x8003E55C
    {
            goto label_8003E55C;
    }

label_8003E4C8:
    ctx->pc = 0x8003E4C8u;
    ctx->downcount -= 2;
    // 8003E4C8: cmplwi  r29, 0x0000
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

label_8003E4CC:
    ctx->pc = 0x8003E4CCu;
    // 8003E4CC: bc    12, 2, 0x8003E4D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E4D8;
        }
    }

label_8003E4D0:
    ctx->pc = 0x8003E4D0u;
    ctx->downcount -= 2;
    // 8003E4D0: or   r0, r29, r29
    {
        ctx->gpr[0] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8003E4D4:
    ctx->pc = 0x8003E4D4u;
    // 8003E4D4: b       0x8003E4E0
    {
            goto label_8003E4E0;
    }

label_8003E4D8:
    ctx->pc = 0x8003E4D8u;
    ctx->downcount -= 2;
    // 8003E4D8: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003E4DC:
    ctx->pc = 0x8003E4DCu;
    // 8003E4DC: addi    r0, r3, -29796
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29796);

label_8003E4E0:
    ctx->pc = 0x8003E4E0u;
    ctx->downcount -= 53;
    // 8003E4E0: stw     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E4E4:
    ctx->pc = 0x8003E4E4u;
    // 8003E4E4: rlwinm r0, r30, 6, 10, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 6u) & 0x003FFFC0u;
    }

label_8003E4E8:
    ctx->pc = 0x8003E4E8u;
    // 8003E4E8: add   r7, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8003E4EC:
    ctx->pc = 0x8003E4ECu;
    // 8003E4EC: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E4F0:
    ctx->pc = 0x8003E4F0u;
    // 8003E4F0: rlwinm r29, r30, 0, 16, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x0000FFFFu;
    }

label_8003E4F4:
    ctx->pc = 0x8003E4F4u;
    // 8003E4F4: addi    r4, r26, 0
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(0);

label_8003E4F8:
    ctx->pc = 0x8003E4F8u;
    // 8003E4F8: sth     r30, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_8003E4FC:
    ctx->pc = 0x8003E4FCu;
    // 8003E4FC: addi    r3, r7, 8
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(8);

label_8003E500:
    ctx->pc = 0x8003E500u;
    // 8003E500: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8003E504:
    ctx->pc = 0x8003E504u;
    // 8003E504: lwz     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003E508:
    ctx->pc = 0x8003E508u;
    // 8003E508: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E50C:
    ctx->pc = 0x8003E50Cu;
    // 8003E50C: divwu   r0, r27, r0
    {
        u32 divisor = ctx->gpr[0];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[27] / divisor;
    }

label_8003E510:
    ctx->pc = 0x8003E510u;
    // 8003E510: sth     r0, 56(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003E514:
    ctx->pc = 0x8003E514u;
    // 8003E514: bl      0x80014A6C
    {
            ctx->lr = 0x8003E518u;
            ctx->pc = 0x80014A6Cu;
            return;
    }

label_8003E518:
    ctx->pc = 0x8003E518u;
    ctx->downcount -= 50;
    // 8003E518: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E51C:
    ctx->pc = 0x8003E51Cu;
    // 8003E51C: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003E520:
    ctx->pc = 0x8003E520u;
    // 8003E520: addi    r5, r3, -7648
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-7648);

label_8003E524:
    ctx->pc = 0x8003E524u;
    // 8003E524: stw     r28, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003E528:
    ctx->pc = 0x8003E528u;
    // 8003E528: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8003E52C:
    ctx->pc = 0x8003E52Cu;
    // 8003E52C: stw     r25, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_8003E530:
    ctx->pc = 0x8003E530u;
    // 8003E530: stw     r29, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003E534:
    ctx->pc = 0x8003E534u;
    // 8003E534: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E538:
    ctx->pc = 0x8003E538u;
    // 8003E538: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E53C:
    ctx->pc = 0x8003E53Cu;
    // 8003E53C: divwu   r4, r27, r0
    {
        u32 divisor = ctx->gpr[0];
        ctx->gpr[4] = divisor == 0 ? 0u : ctx->gpr[27] / divisor;
    }

label_8003E540:
    ctx->pc = 0x8003E540u;
    // 8003E540: bl      0x8003B558
    {
            ctx->lr = 0x8003E544u;
            ctx->pc = 0x8003B558u;
            return;
    }

label_8003E544:
    ctx->pc = 0x8003E544u;
    ctx->downcount -= 2;
    // 8003E544: or.   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003E548:
    ctx->pc = 0x8003E548u;
    // 8003E548: bc    4, 0, 0x8003E558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E558;
        }
    }

label_8003E54C:
    ctx->pc = 0x8003E54Cu;
    ctx->downcount -= 2;
    // 8003E54C: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E550:
    ctx->pc = 0x8003E550u;
    // 8003E550: bl      0x80039BB4
    {
            ctx->lr = 0x8003E554u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E554:
    ctx->pc = 0x8003E554u;
    ctx->downcount -= 1;
    // 8003E554: b       0x8003E55C
    {
            goto label_8003E55C;
    }

label_8003E558:
    ctx->pc = 0x8003E558u;
    ctx->downcount -= 1;
    // 8003E558: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8003E55C:
    ctx->pc = 0x8003E55Cu;
    ctx->downcount -= 16;
    // 8003E55C: lmw     r23, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8003E560:
    ctx->pc = 0x8003E560u;
    // 8003E560: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E564:
    ctx->pc = 0x8003E564u;
    // 8003E564: addi    r1, r1, 72
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(72);

label_8003E568:
    ctx->pc = 0x8003E568u;
    // 8003E568: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003E56C:
    ctx->pc = 0x8003E56Cu;
    // 8003E56C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E570:
    ctx->pc = 0x8003E570u;
    ctx->downcount -= 8;
    // 8003E570: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003E574:
    ctx->pc = 0x8003E574u;
    // 8003E574: lis     r7, -32764
    ctx->gpr[7] = ((u32)(s32)(-32764) << 16);

label_8003E578:
    ctx->pc = 0x8003E578u;
    // 8003E578: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E57C:
    ctx->pc = 0x8003E57Cu;
    // 8003E57C: addi    r7, r7, -29792
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29792);

label_8003E580:
    ctx->pc = 0x8003E580u;
    // 8003E580: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003E584:
    ctx->pc = 0x8003E584u;
    // 8003E584: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003E588:
    ctx->pc = 0x8003E588u;
    // 8003E588: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8003E58C:
    ctx->pc = 0x8003E58Cu;
    // 8003E58C: bl      0x8003E350
    {
            ctx->lr = 0x8003E590u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003E350u;
                return;
            }
            goto label_8003E350;
    }

label_8003E590:
    ctx->pc = 0x8003E590u;
    ctx->downcount -= 2;
    // 8003E590: cmpwi   r3, 0
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

label_8003E594:
    ctx->pc = 0x8003E594u;
    // 8003E594: bc    4, 0, 0x8003E59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E59C;
        }
    }

label_8003E598:
    ctx->pc = 0x8003E598u;
    ctx->downcount -= 1;
    // 8003E598: b       0x8003E5A4
    {
            goto label_8003E5A4;
    }

label_8003E59C:
    ctx->pc = 0x8003E59Cu;
    ctx->downcount -= 2;
    // 8003E59C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003E5A0:
    ctx->pc = 0x8003E5A0u;
    // 8003E5A0: bl      0x80039DEC
    {
            ctx->lr = 0x8003E5A4u;
            ctx->pc = 0x80039DECu;
            return;
    }

label_8003E5A4:
    ctx->pc = 0x8003E5A4u;
    ctx->downcount -= 6;
    // 8003E5A4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E5A8:
    ctx->pc = 0x8003E5A8u;
    // 8003E5A8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003E5AC:
    ctx->pc = 0x8003E5ACu;
    // 8003E5AC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003E5B0:
    ctx->pc = 0x8003E5B0u;
    // 8003E5B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003E5B4:
    ctx->pc = 0x8003E5B4u;
    // 8003E5B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E5B8:
    ctx->pc = 0x8003E5B8u;
    ctx->downcount -= 14;
    // 8003E5B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003E5BC:
    ctx->pc = 0x8003E5BCu;
    // 8003E5BC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E5C0:
    ctx->pc = 0x8003E5C0u;
    // 8003E5C0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003E5C4:
    ctx->pc = 0x8003E5C4u;
    // 8003E5C4: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003E5C8:
    ctx->pc = 0x8003E5C8u;
    // 8003E5C8: addi    r31, r6, 0
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(0);

label_8003E5CC:
    ctx->pc = 0x8003E5CCu;
    // 8003E5CC: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003E5D0:
    ctx->pc = 0x8003E5D0u;
    // 8003E5D0: addi    r30, r5, 0
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(0);

label_8003E5D4:
    ctx->pc = 0x8003E5D4u;
    // 8003E5D4: stw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003E5D8:
    ctx->pc = 0x8003E5D8u;
    // 8003E5D8: addi    r29, r4, 0
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(0);

label_8003E5DC:
    ctx->pc = 0x8003E5DCu;
    // 8003E5DC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_8003E5E0:
    ctx->pc = 0x8003E5E0u;
    // 8003E5E0: stw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003E5E4:
    ctx->pc = 0x8003E5E4u;
    // 8003E5E4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8003E5E8:
    ctx->pc = 0x8003E5E8u;
    // 8003E5E8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E5EC:
    ctx->pc = 0x8003E5ECu;
    // 8003E5EC: bl      0x80039AFC
    {
            ctx->lr = 0x8003E5F0u;
            ctx->pc = 0x80039AFCu;
            return;
    }

label_8003E5F0:
    ctx->pc = 0x8003E5F0u;
    ctx->downcount -= 2;
    // 8003E5F0: cmpwi   r3, 0
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

label_8003E5F4:
    ctx->pc = 0x8003E5F4u;
    // 8003E5F4: bc    4, 0, 0x8003E5FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E5FC;
        }
    }

label_8003E5F8:
    ctx->pc = 0x8003E5F8u;
    ctx->downcount -= 1;
    // 8003E5F8: b       0x8003E750
    {
            goto label_8003E750;
    }

label_8003E5FC:
    ctx->pc = 0x8003E5FCu;
    ctx->downcount -= 3;
    // 8003E5FC: lhz     r0, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E600:
    ctx->pc = 0x8003E600u;
    // 8003E600: cmplwi  r0, 0x0005
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0005u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E604:
    ctx->pc = 0x8003E604u;
    // 8003E604: bc    12, 0, 0x8003E62C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E62C;
        }
    }

label_8003E608:
    ctx->pc = 0x8003E608u;
    ctx->downcount -= 4;
    // 8003E608: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E60C:
    ctx->pc = 0x8003E60Cu;
    // 8003E60C: lhz     r5, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8003E610:
    ctx->pc = 0x8003E610u;
    // 8003E610: cmplw   r0, r5
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E614:
    ctx->pc = 0x8003E614u;
    // 8003E614: bc    4, 0, 0x8003E62C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E62C;
        }
    }

label_8003E618:
    ctx->pc = 0x8003E618u;
    ctx->downcount -= 9;
    // 8003E618: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E61C:
    ctx->pc = 0x8003E61Cu;
    // 8003E61C: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E620:
    ctx->pc = 0x8003E620u;
    // 8003E620: mullw   r4, r5, r4
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[4] = (u32)product;
    }

label_8003E624:
    ctx->pc = 0x8003E624u;
    // 8003E624: cmpw    r4, r0
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

label_8003E628:
    ctx->pc = 0x8003E628u;
    // 8003E628: bc    12, 1, 0x8003E63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E63C;
        }
    }

label_8003E62C:
    ctx->pc = 0x8003E62Cu;
    ctx->downcount -= 3;
    // 8003E62C: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E630:
    ctx->pc = 0x8003E630u;
    // 8003E630: li      r4, -128
    ctx->gpr[4] = (u32)(s32)(-128);

label_8003E634:
    ctx->pc = 0x8003E634u;
    // 8003E634: bl      0x80039BB4
    {
            ctx->lr = 0x8003E638u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E638:
    ctx->pc = 0x8003E638u;
    ctx->downcount -= 1;
    // 8003E638: b       0x8003E750
    {
            goto label_8003E750;
    }

label_8003E63C:
    ctx->pc = 0x8003E63Cu;
    ctx->downcount -= 1;
    // 8003E63C: bl      0x8003B7B8
    {
            ctx->lr = 0x8003E640u;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003E640:
    ctx->pc = 0x8003E640u;
    ctx->downcount -= 13;
    // 8003E640: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E644:
    ctx->pc = 0x8003E644u;
    // 8003E644: lwz     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003E648:
    ctx->pc = 0x8003E648u;
    // 8003E648: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_8003E64C:
    ctx->pc = 0x8003E64Cu;
    // 8003E64C: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8003E650:
    ctx->pc = 0x8003E650u;
    // 8003E650: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E654:
    ctx->pc = 0x8003E654u;
    // 8003E654: lhz     r0, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E658:
    ctx->pc = 0x8003E658u;
    // 8003E658: mullw   r3, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[3] = (u32)product;
    }

label_8003E65C:
    ctx->pc = 0x8003E65Cu;
    // 8003E65C: cmpw    r3, r30
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E660:
    ctx->pc = 0x8003E660u;
    // 8003E660: bc    4, 1, 0x8003E670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E670;
        }
    }

label_8003E664:
    ctx->pc = 0x8003E664u;
    ctx->downcount -= 3;
    // 8003E664: add   r0, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003E668:
    ctx->pc = 0x8003E668u;
    // 8003E668: cmpw    r3, r0
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

label_8003E66C:
    ctx->pc = 0x8003E66Cu;
    // 8003E66C: bc    4, 0, 0x8003E680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E680;
        }
    }

label_8003E670:
    ctx->pc = 0x8003E670u;
    ctx->downcount -= 3;
    // 8003E670: addi    r3, r5, 0
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(0);

label_8003E674:
    ctx->pc = 0x8003E674u;
    // 8003E674: li      r4, -11
    ctx->gpr[4] = (u32)(s32)(-11);

label_8003E678:
    ctx->pc = 0x8003E678u;
    // 8003E678: bl      0x80039BB4
    {
            ctx->lr = 0x8003E67Cu;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E67C:
    ctx->pc = 0x8003E67Cu;
    ctx->downcount -= 1;
    // 8003E67C: b       0x8003E750
    {
            goto label_8003E750;
    }

label_8003E680:
    ctx->pc = 0x8003E680u;
    ctx->downcount -= 5;
    // 8003E680: stw     r28, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003E684:
    ctx->pc = 0x8003E684u;
    // 8003E684: stw     r29, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003E688:
    ctx->pc = 0x8003E688u;
    // 8003E688: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E68C:
    ctx->pc = 0x8003E68Cu;
    // 8003E68C: cmpw    r30, r0
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

label_8003E690:
    ctx->pc = 0x8003E690u;
    // 8003E690: bc    4, 0, 0x8003E6D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E6D0;
        }
    }

label_8003E694:
    ctx->pc = 0x8003E694u;
    ctx->downcount -= 7;
    // 8003E694: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003E698:
    ctx->pc = 0x8003E698u;
    // 8003E698: stw     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E69C:
    ctx->pc = 0x8003E69Cu;
    // 8003E69C: lhz     r0, 54(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(54);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E6A0:
    ctx->pc = 0x8003E6A0u;
    // 8003E6A0: sth     r0, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003E6A4:
    ctx->pc = 0x8003E6A4u;
    // 8003E6A4: lhz     r4, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8003E6A8:
    ctx->pc = 0x8003E6A8u;
    // 8003E6A8: cmplwi  r4, 0x0005
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0005u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E6AC:
    ctx->pc = 0x8003E6ACu;
    // 8003E6AC: bc    12, 0, 0x8003E6C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E6C0;
        }
    }

label_8003E6B0:
    ctx->pc = 0x8003E6B0u;
    ctx->downcount -= 4;
    // 8003E6B0: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E6B4:
    ctx->pc = 0x8003E6B4u;
    // 8003E6B4: lhz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E6B8:
    ctx->pc = 0x8003E6B8u;
    // 8003E6B8: cmplw   r4, r0
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

label_8003E6BC:
    ctx->pc = 0x8003E6BCu;
    // 8003E6BC: bc    12, 0, 0x8003E6D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E6D0;
        }
    }

label_8003E6C0:
    ctx->pc = 0x8003E6C0u;
    ctx->downcount -= 3;
    // 8003E6C0: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E6C4:
    ctx->pc = 0x8003E6C4u;
    // 8003E6C4: li      r4, -6
    ctx->gpr[4] = (u32)(s32)(-6);

label_8003E6C8:
    ctx->pc = 0x8003E6C8u;
    // 8003E6C8: bl      0x80039BB4
    {
            ctx->lr = 0x8003E6CCu;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E6CC:
    ctx->pc = 0x8003E6CCu;
    ctx->downcount -= 1;
    // 8003E6CC: b       0x8003E750
    {
            goto label_8003E750;
    }

label_8003E6D0:
    ctx->pc = 0x8003E6D0u;
    ctx->downcount -= 2;
    // 8003E6D0: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E6D4:
    ctx->pc = 0x8003E6D4u;
    // 8003E6D4: bl      0x8003B3B4
    {
            ctx->lr = 0x8003E6D8u;
            ctx->pc = 0x8003B3B4u;
            return;
    }

label_8003E6D8:
    ctx->pc = 0x8003E6D8u;
    ctx->downcount -= 1;
    // 8003E6D8: b       0x8003E724
    {
            goto label_8003E724;
    }

label_8003E6DC:
    ctx->pc = 0x8003E6DCu;
    ctx->downcount -= 10;
    // 8003E6DC: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E6E0:
    // 8003E6E0: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003E6E4:
    ctx->pc = 0x8003E6E4u;
    // 8003E6E4: stw     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E6E8:
    ctx->pc = 0x8003E6E8u;
    // 8003E6E8: lhz     r0, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E6EC:
    // 8003E6EC: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_8003E6F0:
    ctx->pc = 0x8003E6F0u;
    // 8003E6F0: lhzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E6F4:
    ctx->pc = 0x8003E6F4u;
    // 8003E6F4: sth     r0, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003E6F8:
    ctx->pc = 0x8003E6F8u;
    // 8003E6F8: lhz     r5, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8003E6FC:
    // 8003E6FC: cmplwi  r5, 0x0005
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0005u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E700:
    // 8003E700: bc    12, 0, 0x8003E714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E714;
        }
    }

label_8003E704:
    ctx->pc = 0x8003E704u;
    ctx->downcount -= 4;
    // 8003E704: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E708:
    ctx->pc = 0x8003E708u;
    // 8003E708: lhz     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E70C:
    // 8003E70C: cmplw   r5, r0
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E710:
    // 8003E710: bc    12, 0, 0x8003E724
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E724;
        }
    }

label_8003E714:
    ctx->pc = 0x8003E714u;
    ctx->downcount -= 3;
    // 8003E714: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E718:
    // 8003E718: li      r4, -6
    ctx->gpr[4] = (u32)(s32)(-6);

label_8003E71C:
    // 8003E71C: bl      0x80039BB4
    {
            ctx->lr = 0x8003E720u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E720:
    ctx->downcount -= 1;
    // 8003E720: b       0x8003E750
    {
            goto label_8003E750;
    }

label_8003E724:
    ctx->pc = 0x8003E724u;
    ctx->downcount -= 7;
    // 8003E724: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E728:
    ctx->pc = 0x8003E728u;
    // 8003E728: lwz     r5, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003E72C:
    ctx->pc = 0x8003E72Cu;
    // 8003E72C: lwz     r4, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E730:
    // 8003E730: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_8003E734:
    // 8003E734: andc   r0, r30, r0
    {
        ctx->gpr[0] = ctx->gpr[30] & ~ctx->gpr[0];
    }

label_8003E738:
    // 8003E738: cmplw   r5, r0
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E73C:
    // 8003E73C: bc    12, 0, 0x8003E6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003E6DCu;
                return;
            }
            goto label_8003E6DC;
        }
    }

label_8003E740:
    ctx->pc = 0x8003E740u;
    ctx->downcount -= 4;
    // 8003E740: stw     r30, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003E744:
    ctx->pc = 0x8003E744u;
    // 8003E744: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003E748:
    ctx->pc = 0x8003E748u;
    // 8003E748: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E74C:
    ctx->pc = 0x8003E74Cu;
    // 8003E74C: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E750:
    ctx->pc = 0x8003E750u;
    ctx->downcount -= 9;
    // 8003E750: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E754:
    ctx->pc = 0x8003E754u;
    // 8003E754: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003E758:
    ctx->pc = 0x8003E758u;
    // 8003E758: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003E75C:
    ctx->pc = 0x8003E75Cu;
    // 8003E75C: lwz     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003E760:
    ctx->pc = 0x8003E760u;
    // 8003E760: lwz     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8003E764:
    ctx->pc = 0x8003E764u;
    // 8003E764: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8003E768:
    ctx->pc = 0x8003E768u;
    // 8003E768: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003E76C:
    ctx->pc = 0x8003E76Cu;
    // 8003E76C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E770:
    ctx->pc = 0x8003E770u;
    ctx->downcount -= 23;
    // 8003E770: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003E774:
    ctx->pc = 0x8003E774u;
    // 8003E774: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E778:
    ctx->pc = 0x8003E778u;
    // 8003E778: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003E77C:
    ctx->pc = 0x8003E77Cu;
    // 8003E77C: stmw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8003E780:
    ctx->pc = 0x8003E780u;
    // 8003E780: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_8003E784:
    ctx->pc = 0x8003E784u;
    // 8003E784: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8003E788:
    ctx->pc = 0x8003E788u;
    // 8003E788: mulli   r5, r29, 272
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)272);

label_8003E78C:
    ctx->pc = 0x8003E78Cu;
    // 8003E78C: addi    r0, r3, -21248
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-21248);

label_8003E790:
    ctx->pc = 0x8003E790u;
    // 8003E790: or.   r30, r4, r4
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

label_8003E794:
    ctx->pc = 0x8003E794u;
    // 8003E794: add   r31, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_8003E798:
    ctx->pc = 0x8003E798u;
    // 8003E798: bc    12, 0, 0x8003E860
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E860;
        }
    }

label_8003E79C:
    ctx->pc = 0x8003E79Cu;
    ctx->downcount -= 4;
    // 8003E79C: lwz     r28, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8003E7A0:
    ctx->pc = 0x8003E7A0u;
    // 8003E7A0: lwz     r4, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E7A4:
    ctx->pc = 0x8003E7A4u;
    // 8003E7A4: cmpwi   r4, 0
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

label_8003E7A8:
    ctx->pc = 0x8003E7A8u;
    // 8003E7A8: bc    4, 0, 0x8003E7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E7B4;
        }
    }

label_8003E7AC:
    ctx->pc = 0x8003E7ACu;
    ctx->downcount -= 2;
    // 8003E7AC: li      r30, -14
    ctx->gpr[30] = (u32)(s32)(-14);

label_8003E7B0:
    ctx->pc = 0x8003E7B0u;
    // 8003E7B0: b       0x8003E860
    {
            goto label_8003E860;
    }

label_8003E7B4:
    ctx->pc = 0x8003E7B4u;
    ctx->downcount -= 12;
    // 8003E7B4: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003E7B8:
    ctx->pc = 0x8003E7B8u;
    // 8003E7B8: lwz     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003E7BC:
    ctx->pc = 0x8003E7BCu;
    // 8003E7BC: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_8003E7C0:
    ctx->pc = 0x8003E7C0u;
    // 8003E7C0: nor   r3, r0, r0
    {
        ctx->gpr[3] = ~(ctx->gpr[0] | ctx->gpr[0]);
    }

label_8003E7C4:
    ctx->pc = 0x8003E7C4u;
    // 8003E7C4: add   r0, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003E7C8:
    ctx->pc = 0x8003E7C8u;
    // 8003E7C8: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_8003E7CC:
    ctx->pc = 0x8003E7CCu;
    // 8003E7CC: subf   r27, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[27] = res;
    }

label_8003E7D0:
    ctx->pc = 0x8003E7D0u;
    // 8003E7D0: subf   r0, r27, r4
    {
        u32 a = ~ctx->gpr[27];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8003E7D4:
    ctx->pc = 0x8003E7D4u;
    // 8003E7D4: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E7D8:
    ctx->pc = 0x8003E7D8u;
    // 8003E7D8: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E7DC:
    ctx->pc = 0x8003E7DCu;
    // 8003E7DC: cmpwi   r0, 0
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

label_8003E7E0:
    ctx->pc = 0x8003E7E0u;
    // 8003E7E0: bc    4, 1, 0x8003E860
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E860;
        }
    }

label_8003E7E4:
    ctx->pc = 0x8003E7E4u;
    ctx->downcount -= 2;
    // 8003E7E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003E7E8:
    ctx->pc = 0x8003E7E8u;
    // 8003E7E8: bl      0x8003B3B4
    {
            ctx->lr = 0x8003E7ECu;
            ctx->pc = 0x8003B3B4u;
            return;
    }

label_8003E7EC:
    ctx->pc = 0x8003E7ECu;
    ctx->downcount -= 10;
    // 8003E7EC: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E7F0:
    ctx->pc = 0x8003E7F0u;
    // 8003E7F0: add   r0, r0, r27
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003E7F4:
    ctx->pc = 0x8003E7F4u;
    // 8003E7F4: stw     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E7F8:
    ctx->pc = 0x8003E7F8u;
    // 8003E7F8: lhz     r0, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E7FC:
    ctx->pc = 0x8003E7FCu;
    // 8003E7FC: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_8003E800:
    ctx->pc = 0x8003E800u;
    // 8003E800: lhzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E804:
    ctx->pc = 0x8003E804u;
    // 8003E804: sth     r0, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003E808:
    ctx->pc = 0x8003E808u;
    // 8003E808: lhz     r3, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8003E80C:
    ctx->pc = 0x8003E80Cu;
    // 8003E80C: cmplwi  r3, 0x0005
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0005u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E810:
    ctx->pc = 0x8003E810u;
    // 8003E810: bc    12, 0, 0x8003E820
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E820;
        }
    }

label_8003E814:
    ctx->pc = 0x8003E814u;
    ctx->downcount -= 3;
    // 8003E814: lhz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E818:
    ctx->pc = 0x8003E818u;
    // 8003E818: cmplw   r3, r0
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

label_8003E81C:
    ctx->pc = 0x8003E81Cu;
    // 8003E81C: bc    12, 0, 0x8003E828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E828;
        }
    }

label_8003E820:
    ctx->pc = 0x8003E820u;
    ctx->downcount -= 2;
    // 8003E820: li      r30, -6
    ctx->gpr[30] = (u32)(s32)(-6);

label_8003E824:
    ctx->pc = 0x8003E824u;
    // 8003E824: b       0x8003E860
    {
            goto label_8003E860;
    }

label_8003E828:
    ctx->pc = 0x8003E828u;
    ctx->downcount -= 4;
    // 8003E828: lwz     r5, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003E82C:
    ctx->pc = 0x8003E82Cu;
    // 8003E82C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E830:
    ctx->pc = 0x8003E830u;
    // 8003E830: cmpw    r5, r0
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

label_8003E834:
    ctx->pc = 0x8003E834u;
    // 8003E834: bc    4, 0, 0x8003E83C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E83C;
        }
    }

label_8003E838:
    ctx->pc = 0x8003E838u;
    ctx->downcount -= 1;
    // 8003E838: b       0x8003E840
    {
            goto label_8003E840;
    }

label_8003E83C:
    ctx->pc = 0x8003E83Cu;
    ctx->downcount -= 1;
    // 8003E83C: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8003E840:
    ctx->pc = 0x8003E840u;
    ctx->downcount -= 10;
    // 8003E840: mullw   r4, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[4] = (u32)product;
    }

label_8003E844:
    ctx->pc = 0x8003E844u;
    // 8003E844: lwz     r6, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003E848:
    ctx->pc = 0x8003E848u;
    // 8003E848: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003E84C:
    ctx->pc = 0x8003E84Cu;
    // 8003E84C: addi    r7, r3, -6288
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-6288);

label_8003E850:
    ctx->pc = 0x8003E850u;
    // 8003E850: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8003E854:
    ctx->pc = 0x8003E854u;
    // 8003E854: bl      0x8003B210
    {
            ctx->lr = 0x8003E858u;
            ctx->pc = 0x8003B210u;
            return;
    }

label_8003E858:
    ctx->pc = 0x8003E858u;
    ctx->downcount -= 2;
    // 8003E858: or.   r30, r3, r3
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

label_8003E85C:
    ctx->pc = 0x8003E85Cu;
    // 8003E85C: bc    4, 0, 0x8003E88C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E88C;
        }
    }

label_8003E860:
    ctx->pc = 0x8003E860u;
    ctx->downcount -= 6;
    // 8003E860: lwz     r27, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_8003E864:
    ctx->pc = 0x8003E864u;
    // 8003E864: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003E868:
    ctx->pc = 0x8003E868u;
    // 8003E868: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8003E86C:
    ctx->pc = 0x8003E86Cu;
    // 8003E86C: stw     r0, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E870:
    ctx->pc = 0x8003E870u;
    // 8003E870: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8003E874:
    ctx->pc = 0x8003E874u;
    // 8003E874: bl      0x80039BB4
    {
            ctx->lr = 0x8003E878u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E878:
    ctx->pc = 0x8003E878u;
    ctx->downcount -= 6;
    // 8003E878: addi    r12, r27, 0
    ctx->gpr[12] = ctx->gpr[27] + (u32)(s32)(0);

label_8003E87C:
    ctx->pc = 0x8003E87Cu;
    // 8003E87C: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_8003E880:
    ctx->pc = 0x8003E880u;
    // 8003E880: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8003E884:
    ctx->pc = 0x8003E884u;
    // 8003E884: addi    r4, r30, 0
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(0);

label_8003E888:
    ctx->pc = 0x8003E888u;
    // 8003E888: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8003E88Cu;
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E88C:
    ctx->pc = 0x8003E88Cu;
    ctx->downcount -= 16;
    // 8003E88C: lmw     r27, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8003E890:
    ctx->pc = 0x8003E890u;
    // 8003E890: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E894:
    ctx->pc = 0x8003E894u;
    // 8003E894: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_8003E898:
    ctx->pc = 0x8003E898u;
    // 8003E898: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003E89C:
    ctx->pc = 0x8003E89Cu;
    // 8003E89C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E8A0:
    ctx->pc = 0x8003E8A0u;
    ctx->downcount -= 13;
    // 8003E8A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003E8A4:
    ctx->pc = 0x8003E8A4u;
    // 8003E8A4: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E8A8:
    ctx->pc = 0x8003E8A8u;
    // 8003E8A8: rlwinm. r0, r6, 0, 23, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x000001FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003E8AC:
    ctx->pc = 0x8003E8ACu;
    // 8003E8AC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003E8B0:
    ctx->pc = 0x8003E8B0u;
    // 8003E8B0: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003E8B4:
    ctx->pc = 0x8003E8B4u;
    // 8003E8B4: addi    r31, r5, 0
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(0);

label_8003E8B8:
    ctx->pc = 0x8003E8B8u;
    // 8003E8B8: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003E8BC:
    ctx->pc = 0x8003E8BCu;
    // 8003E8BC: addi    r30, r4, 0
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(0);

label_8003E8C0:
    ctx->pc = 0x8003E8C0u;
    // 8003E8C0: stw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003E8C4:
    ctx->pc = 0x8003E8C4u;
    // 8003E8C4: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_8003E8C8:
    ctx->pc = 0x8003E8C8u;
    // 8003E8C8: stw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003E8CC:
    ctx->pc = 0x8003E8CCu;
    // 8003E8CC: addi    r28, r7, 0
    ctx->gpr[28] = ctx->gpr[7] + (u32)(s32)(0);

label_8003E8D0:
    ctx->pc = 0x8003E8D0u;
    // 8003E8D0: bc    4, 2, 0x8003E8DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E8DC;
        }
    }

label_8003E8D4:
    ctx->pc = 0x8003E8D4u;
    ctx->downcount -= 2;
    // 8003E8D4: rlwinm. r0, r31, 0, 23, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000001FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003E8D8:
    ctx->pc = 0x8003E8D8u;
    // 8003E8D8: bc    12, 2, 0x8003E8E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E8E4;
        }
    }

label_8003E8DC:
    ctx->pc = 0x8003E8DCu;
    ctx->downcount -= 2;
    // 8003E8DC: li      r3, -128
    ctx->gpr[3] = (u32)(s32)(-128);

label_8003E8E0:
    ctx->pc = 0x8003E8E0u;
    // 8003E8E0: b       0x8003E9C4
    {
            goto label_8003E9C4;
    }

label_8003E8E4:
    ctx->pc = 0x8003E8E4u;
    ctx->downcount -= 5;
    // 8003E8E4: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8003E8E8:
    ctx->pc = 0x8003E8E8u;
    // 8003E8E8: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8003E8EC:
    ctx->pc = 0x8003E8ECu;
    // 8003E8EC: addi    r5, r6, 0
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(0);

label_8003E8F0:
    ctx->pc = 0x8003E8F0u;
    // 8003E8F0: addi    r6, r1, 28
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(28);

label_8003E8F4:
    ctx->pc = 0x8003E8F4u;
    // 8003E8F4: bl      0x8003E5B8
    {
            ctx->lr = 0x8003E8F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003E5B8u;
                return;
            }
            goto label_8003E5B8;
    }

label_8003E8F8:
    ctx->pc = 0x8003E8F8u;
    ctx->downcount -= 2;
    // 8003E8F8: cmpwi   r3, 0
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

label_8003E8FC:
    ctx->pc = 0x8003E8FCu;
    // 8003E8FC: bc    4, 0, 0x8003E904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E904;
        }
    }

label_8003E900:
    ctx->pc = 0x8003E900u;
    ctx->downcount -= 1;
    // 8003E900: b       0x8003E9C4
    {
            goto label_8003E9C4;
    }

label_8003E904:
    ctx->pc = 0x8003E904u;
    ctx->downcount -= 2;
    // 8003E904: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E908:
    ctx->pc = 0x8003E908u;
    // 8003E908: bl      0x8003B7B8
    {
            ctx->lr = 0x8003E90Cu;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003E90C:
    ctx->pc = 0x8003E90Cu;
    ctx->downcount -= 5;
    // 8003E90C: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E910:
    ctx->pc = 0x8003E910u;
    // 8003E910: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_8003E914:
    ctx->pc = 0x8003E914u;
    // 8003E914: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8003E918:
    ctx->pc = 0x8003E918u;
    // 8003E918: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E91C:
    ctx->pc = 0x8003E91Cu;
    // 8003E91C: bl      0x8003DE64
    {
            ctx->lr = 0x8003E920u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DE64u;
                return;
            }
            goto label_8003DE64;
    }

label_8003E920:
    ctx->pc = 0x8003E920u;
    ctx->downcount -= 2;
    // 8003E920: or.   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003E924:
    ctx->pc = 0x8003E924u;
    // 8003E924: bc    4, 0, 0x8003E934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E934;
        }
    }

label_8003E928:
    ctx->pc = 0x8003E928u;
    ctx->downcount -= 2;
    // 8003E928: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E92C:
    ctx->pc = 0x8003E92Cu;
    // 8003E92C: bl      0x80039BB4
    {
            ctx->lr = 0x8003E930u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E930:
    ctx->pc = 0x8003E930u;
    ctx->downcount -= 1;
    // 8003E930: b       0x8003E9C4
    {
            goto label_8003E9C4;
    }

label_8003E934:
    ctx->pc = 0x8003E934u;
    ctx->downcount -= 3;
    // 8003E934: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_8003E938:
    ctx->pc = 0x8003E938u;
    // 8003E938: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8003E93C:
    ctx->pc = 0x8003E93Cu;
    // 8003E93C: bl      0x8001DA20
    {
            ctx->lr = 0x8003E940u;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_8003E940:
    ctx->pc = 0x8003E940u;
    ctx->downcount -= 2;
    // 8003E940: cmplwi  r28, 0x0000
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

label_8003E944:
    ctx->pc = 0x8003E944u;
    // 8003E944: bc    12, 2, 0x8003E950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003E950;
        }
    }

label_8003E948:
    ctx->pc = 0x8003E948u;
    ctx->downcount -= 2;
    // 8003E948: or   r0, r28, r28
    {
        ctx->gpr[0] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8003E94C:
    ctx->pc = 0x8003E94Cu;
    // 8003E94C: b       0x8003E958
    {
            goto label_8003E958;
    }

label_8003E950:
    ctx->pc = 0x8003E950u;
    ctx->downcount -= 2;
    // 8003E950: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003E954:
    ctx->pc = 0x8003E954u;
    // 8003E954: addi    r0, r3, -29796
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29796);

label_8003E958:
    ctx->pc = 0x8003E958u;
    ctx->downcount -= 10;
    // 8003E958: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E95C:
    ctx->pc = 0x8003E95Cu;
    // 8003E95C: stw     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E960:
    ctx->pc = 0x8003E960u;
    // 8003E960: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E964:
    ctx->pc = 0x8003E964u;
    // 8003E964: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003E968:
    ctx->pc = 0x8003E968u;
    // 8003E968: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003E96C:
    ctx->pc = 0x8003E96Cu;
    // 8003E96C: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_8003E970:
    ctx->pc = 0x8003E970u;
    // 8003E970: and   r8, r4, r0
    {
        ctx->gpr[8] = ctx->gpr[4] & ctx->gpr[0];
    }

label_8003E974:
    ctx->pc = 0x8003E974u;
    // 8003E974: subf   r3, r8, r5
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8003E978:
    ctx->pc = 0x8003E978u;
    // 8003E978: cmpw    r31, r3
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003E97C:
    ctx->pc = 0x8003E97Cu;
    // 8003E97C: bc    4, 0, 0x8003E984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E984;
        }
    }

label_8003E980:
    ctx->pc = 0x8003E980u;
    ctx->downcount -= 1;
    // 8003E980: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003E984:
    ctx->pc = 0x8003E984u;
    ctx->downcount -= 14;
    // 8003E984: lhz     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003E988:
    ctx->pc = 0x8003E988u;
    // 8003E988: lis     r4, -32764
    ctx->gpr[4] = ((u32)(s32)(-32764) << 16);

label_8003E98C:
    ctx->pc = 0x8003E98Cu;
    // 8003E98C: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8003E990:
    ctx->pc = 0x8003E990u;
    // 8003E990: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E994:
    ctx->pc = 0x8003E994u;
    // 8003E994: mullw   r0, r5, r0
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_8003E998:
    ctx->pc = 0x8003E998u;
    // 8003E998: addi    r7, r4, -6288
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-6288);

label_8003E99C:
    ctx->pc = 0x8003E99Cu;
    // 8003E99C: addi    r5, r31, 0
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(0);

label_8003E9A0:
    ctx->pc = 0x8003E9A0u;
    // 8003E9A0: addi    r6, r30, 0
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(0);

label_8003E9A4:
    ctx->pc = 0x8003E9A4u;
    // 8003E9A4: add   r4, r8, r0
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8003E9A8:
    ctx->pc = 0x8003E9A8u;
    // 8003E9A8: bl      0x8003B210
    {
            ctx->lr = 0x8003E9ACu;
            ctx->pc = 0x8003B210u;
            return;
    }

label_8003E9AC:
    ctx->pc = 0x8003E9ACu;
    ctx->downcount -= 2;
    // 8003E9AC: or.   r29, r3, r3
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

label_8003E9B0:
    ctx->pc = 0x8003E9B0u;
    // 8003E9B0: bc    4, 0, 0x8003E9C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003E9C0;
        }
    }

label_8003E9B4:
    ctx->pc = 0x8003E9B4u;
    ctx->downcount -= 3;
    // 8003E9B4: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003E9B8:
    ctx->pc = 0x8003E9B8u;
    // 8003E9B8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8003E9BC:
    ctx->pc = 0x8003E9BCu;
    // 8003E9BC: bl      0x80039BB4
    {
            ctx->lr = 0x8003E9C0u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003E9C0:
    ctx->pc = 0x8003E9C0u;
    ctx->downcount -= 1;
    // 8003E9C0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8003E9C4:
    ctx->pc = 0x8003E9C4u;
    ctx->downcount -= 9;
    // 8003E9C4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003E9C8:
    ctx->pc = 0x8003E9C8u;
    // 8003E9C8: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003E9CC:
    ctx->pc = 0x8003E9CCu;
    // 8003E9CC: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003E9D0:
    ctx->pc = 0x8003E9D0u;
    // 8003E9D0: lwz     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003E9D4:
    ctx->pc = 0x8003E9D4u;
    // 8003E9D4: lwz     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8003E9D8:
    ctx->pc = 0x8003E9D8u;
    // 8003E9D8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8003E9DC:
    ctx->pc = 0x8003E9DCu;
    // 8003E9DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003E9E0:
    ctx->pc = 0x8003E9E0u;
    // 8003E9E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003E9E4:
    ctx->pc = 0x8003E9E4u;
    ctx->downcount -= 8;
    // 8003E9E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003E9E8:
    ctx->pc = 0x8003E9E8u;
    // 8003E9E8: lis     r7, -32764
    ctx->gpr[7] = ((u32)(s32)(-32764) << 16);

label_8003E9EC:
    ctx->pc = 0x8003E9ECu;
    // 8003E9EC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003E9F0:
    ctx->pc = 0x8003E9F0u;
    // 8003E9F0: addi    r7, r7, -29792
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29792);

label_8003E9F4:
    ctx->pc = 0x8003E9F4u;
    // 8003E9F4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003E9F8:
    ctx->pc = 0x8003E9F8u;
    // 8003E9F8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003E9FC:
    ctx->pc = 0x8003E9FCu;
    // 8003E9FC: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8003EA00:
    ctx->pc = 0x8003EA00u;
    // 8003EA00: bl      0x8003E8A0
    {
            ctx->lr = 0x8003EA04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003E8A0u;
                return;
            }
            goto label_8003E8A0;
    }

label_8003EA04:
    ctx->pc = 0x8003EA04u;
    ctx->downcount -= 2;
    // 8003EA04: cmpwi   r3, 0
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

label_8003EA08:
    ctx->pc = 0x8003EA08u;
    // 8003EA08: bc    4, 0, 0x8003EA10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EA10;
        }
    }

label_8003EA0C:
    ctx->pc = 0x8003EA0Cu;
    ctx->downcount -= 1;
    // 8003EA0C: b       0x8003EA18
    {
            goto label_8003EA18;
    }

label_8003EA10:
    ctx->pc = 0x8003EA10u;
    ctx->downcount -= 2;
    // 8003EA10: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003EA14:
    ctx->pc = 0x8003EA14u;
    // 8003EA14: bl      0x80039DEC
    {
            ctx->lr = 0x8003EA18u;
            ctx->pc = 0x80039DECu;
            return;
    }

label_8003EA18:
    ctx->pc = 0x8003EA18u;
    ctx->downcount -= 6;
    // 8003EA18: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EA1C:
    ctx->pc = 0x8003EA1Cu;
    // 8003EA1C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003EA20:
    ctx->pc = 0x8003EA20u;
    // 8003EA20: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003EA24:
    ctx->pc = 0x8003EA24u;
    // 8003EA24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003EA28:
    ctx->pc = 0x8003EA28u;
    // 8003EA28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003EA2C:
    ctx->pc = 0x8003EA2Cu;
    ctx->downcount -= 16;
    // 8003EA2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003EA30:
    ctx->pc = 0x8003EA30u;
    // 8003EA30: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EA34:
    ctx->pc = 0x8003EA34u;
    // 8003EA34: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003EA38:
    ctx->pc = 0x8003EA38u;
    // 8003EA38: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003EA3C:
    ctx->pc = 0x8003EA3Cu;
    // 8003EA3C: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003EA40:
    ctx->pc = 0x8003EA40u;
    // 8003EA40: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_8003EA44:
    ctx->pc = 0x8003EA44u;
    // 8003EA44: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8003EA48:
    ctx->pc = 0x8003EA48u;
    // 8003EA48: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003EA4C:
    ctx->pc = 0x8003EA4Cu;
    // 8003EA4C: mulli   r5, r30, 272
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[30] * (s64)(s32)272);

label_8003EA50:
    ctx->pc = 0x8003EA50u;
    // 8003EA50: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003EA54:
    ctx->pc = 0x8003EA54u;
    // 8003EA54: addi    r0, r3, -21248
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-21248);

label_8003EA58:
    ctx->pc = 0x8003EA58u;
    // 8003EA58: or.   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003EA5C:
    ctx->pc = 0x8003EA5Cu;
    // 8003EA5C: add   r31, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_8003EA60:
    ctx->pc = 0x8003EA60u;
    // 8003EA60: bc    12, 0, 0x8003EB50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003EB50;
        }
    }

label_8003EA64:
    ctx->pc = 0x8003EA64u;
    ctx->downcount -= 4;
    // 8003EA64: lwz     r29, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003EA68:
    ctx->pc = 0x8003EA68u;
    // 8003EA68: lwz     r3, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003EA6C:
    ctx->pc = 0x8003EA6Cu;
    // 8003EA6C: cmpwi   r3, 0
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

label_8003EA70:
    ctx->pc = 0x8003EA70u;
    // 8003EA70: bc    4, 0, 0x8003EA7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EA7C;
        }
    }

label_8003EA74:
    ctx->pc = 0x8003EA74u;
    ctx->downcount -= 2;
    // 8003EA74: li      r28, -14
    ctx->gpr[28] = (u32)(s32)(-14);

label_8003EA78:
    ctx->pc = 0x8003EA78u;
    // 8003EA78: b       0x8003EB50
    {
            goto label_8003EB50;
    }

label_8003EA7C:
    ctx->pc = 0x8003EA7Cu;
    ctx->downcount -= 6;
    // 8003EA7C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EA80:
    ctx->pc = 0x8003EA80u;
    // 8003EA80: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8003EA84:
    ctx->pc = 0x8003EA84u;
    // 8003EA84: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EA88:
    ctx->pc = 0x8003EA88u;
    // 8003EA88: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EA8C:
    ctx->pc = 0x8003EA8Cu;
    // 8003EA8C: cmpwi   r0, 0
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

label_8003EA90:
    ctx->pc = 0x8003EA90u;
    // 8003EA90: bc    12, 1, 0x8003EAE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003EAE4;
        }
    }

label_8003EA94:
    ctx->pc = 0x8003EA94u;
    ctx->downcount -= 2;
    // 8003EA94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003EA98:
    ctx->pc = 0x8003EA98u;
    // 8003EA98: bl      0x8003B7B8
    {
            ctx->lr = 0x8003EA9Cu;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003EA9C:
    ctx->pc = 0x8003EA9Cu;
    ctx->downcount -= 7;
    // 8003EA9C: lwz     r5, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003EAA0:
    ctx->pc = 0x8003EAA0u;
    // 8003EAA0: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_8003EAA4:
    ctx->pc = 0x8003EAA4u;
    // 8003EAA4: lwz     r0, 248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EAA8:
    ctx->pc = 0x8003EAA8u;
    // 8003EAA8: rlwinm r4, r5, 6, 0, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 6u) & 0xFFFFFFC0u;
    }

label_8003EAAC:
    ctx->pc = 0x8003EAACu;
    // 8003EAAC: add   r28, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_8003EAB0:
    ctx->pc = 0x8003EAB0u;
    // 8003EAB0: rlwinm r29, r0, 30, 2, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_8003EAB4:
    ctx->pc = 0x8003EAB4u;
    // 8003EAB4: bl      0x80024A8C
    {
            ctx->lr = 0x8003EAB8u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_8003EAB8:
    ctx->pc = 0x8003EAB8u;
    ctx->downcount -= 3;
    // 8003EAB8: addi    r6, r29, 0
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(0);

label_8003EABC:
    ctx->pc = 0x8003EABCu;
    // 8003EABC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8003EAC0:
    ctx->pc = 0x8003EAC0u;
    // 8003EAC0: bl      0x8000DE64
    {
            ctx->lr = 0x8003EAC4u;
            ctx->pc = 0x8000DE64u;
            return;
    }

label_8003EAC4:
    ctx->pc = 0x8003EAC4u;
    ctx->downcount -= 6;
    // 8003EAC4: stw     r4, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003EAC8:
    ctx->pc = 0x8003EAC8u;
    // 8003EAC8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003EACC:
    ctx->pc = 0x8003EACCu;
    // 8003EACC: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_8003EAD0:
    ctx->pc = 0x8003EAD0u;
    // 8003EAD0: lwz     r4, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003EAD4:
    ctx->pc = 0x8003EAD4u;
    // 8003EAD4: stw     r0, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EAD8:
    ctx->pc = 0x8003EAD8u;
    // 8003EAD8: bl      0x8003B958
    {
            ctx->lr = 0x8003EADCu;
            ctx->pc = 0x8003B958u;
            return;
    }

label_8003EADC:
    ctx->pc = 0x8003EADCu;
    ctx->downcount -= 2;
    // 8003EADC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8003EAE0:
    ctx->pc = 0x8003EAE0u;
    // 8003EAE0: b       0x8003EB48
    {
            goto label_8003EB48;
    }

label_8003EAE4:
    ctx->pc = 0x8003EAE4u;
    ctx->downcount -= 2;
    // 8003EAE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003EAE8:
    ctx->pc = 0x8003EAE8u;
    // 8003EAE8: bl      0x8003B3B4
    {
            ctx->lr = 0x8003EAECu;
            ctx->pc = 0x8003B3B4u;
            return;
    }

label_8003EAEC:
    ctx->pc = 0x8003EAECu;
    ctx->downcount -= 11;
    // 8003EAEC: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003EAF0:
    ctx->pc = 0x8003EAF0u;
    // 8003EAF0: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EAF4:
    ctx->pc = 0x8003EAF4u;
    // 8003EAF4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8003EAF8:
    ctx->pc = 0x8003EAF8u;
    // 8003EAF8: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EAFC:
    ctx->pc = 0x8003EAFCu;
    // 8003EAFC: lhz     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003EB00:
    ctx->pc = 0x8003EB00u;
    // 8003EB00: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_8003EB04:
    ctx->pc = 0x8003EB04u;
    // 8003EB04: lhzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003EB08:
    ctx->pc = 0x8003EB08u;
    // 8003EB08: sth     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003EB0C:
    ctx->pc = 0x8003EB0Cu;
    // 8003EB0C: lhz     r4, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8003EB10:
    ctx->pc = 0x8003EB10u;
    // 8003EB10: cmplwi  r4, 0x0005
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0005u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003EB14:
    ctx->pc = 0x8003EB14u;
    // 8003EB14: bc    12, 0, 0x8003EB24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003EB24;
        }
    }

label_8003EB18:
    ctx->pc = 0x8003EB18u;
    ctx->downcount -= 3;
    // 8003EB18: lhz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003EB1C:
    ctx->pc = 0x8003EB1Cu;
    // 8003EB1C: cmplw   r4, r0
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

label_8003EB20:
    ctx->pc = 0x8003EB20u;
    // 8003EB20: bc    12, 0, 0x8003EB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003EB2C;
        }
    }

label_8003EB24:
    ctx->pc = 0x8003EB24u;
    ctx->downcount -= 2;
    // 8003EB24: li      r28, -6
    ctx->gpr[28] = (u32)(s32)(-6);

label_8003EB28:
    ctx->pc = 0x8003EB28u;
    // 8003EB28: b       0x8003EB50
    {
            goto label_8003EB50;
    }

label_8003EB2C:
    ctx->pc = 0x8003EB2Cu;
    ctx->downcount -= 10;
    // 8003EB2C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EB30:
    ctx->pc = 0x8003EB30u;
    // 8003EB30: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003EB34:
    ctx->pc = 0x8003EB34u;
    // 8003EB34: addi    r5, r3, -5220
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5220);

label_8003EB38:
    ctx->pc = 0x8003EB38u;
    // 8003EB38: mullw   r4, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[4] = (u32)product;
    }

label_8003EB3C:
    ctx->pc = 0x8003EB3Cu;
    // 8003EB3C: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_8003EB40:
    ctx->pc = 0x8003EB40u;
    // 8003EB40: bl      0x80039930
    {
            ctx->lr = 0x8003EB44u;
            ctx->pc = 0x80039930u;
            return;
    }

label_8003EB44:
    ctx->pc = 0x8003EB44u;
    ctx->downcount -= 1;
    // 8003EB44: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8003EB48:
    ctx->pc = 0x8003EB48u;
    ctx->downcount -= 2;
    // 8003EB48: cmpwi   r28, 0
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

label_8003EB4C:
    ctx->pc = 0x8003EB4Cu;
    // 8003EB4C: bc    4, 0, 0x8003EB7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EB7C;
        }
    }

label_8003EB50:
    ctx->pc = 0x8003EB50u;
    ctx->downcount -= 6;
    // 8003EB50: lwz     r29, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003EB54:
    ctx->pc = 0x8003EB54u;
    // 8003EB54: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003EB58:
    ctx->pc = 0x8003EB58u;
    // 8003EB58: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8003EB5C:
    ctx->pc = 0x8003EB5Cu;
    // 8003EB5C: stw     r0, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EB60:
    ctx->pc = 0x8003EB60u;
    // 8003EB60: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8003EB64:
    ctx->pc = 0x8003EB64u;
    // 8003EB64: bl      0x80039BB4
    {
            ctx->lr = 0x8003EB68u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003EB68:
    ctx->pc = 0x8003EB68u;
    ctx->downcount -= 6;
    // 8003EB68: addi    r12, r29, 0
    ctx->gpr[12] = ctx->gpr[29] + (u32)(s32)(0);

label_8003EB6C:
    ctx->pc = 0x8003EB6Cu;
    // 8003EB6C: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_8003EB70:
    ctx->pc = 0x8003EB70u;
    // 8003EB70: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_8003EB74:
    ctx->pc = 0x8003EB74u;
    // 8003EB74: addi    r4, r28, 0
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(0);

label_8003EB78:
    ctx->pc = 0x8003EB78u;
    // 8003EB78: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8003EB7Cu;
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003EB7C:
    ctx->pc = 0x8003EB7Cu;
    ctx->downcount -= 9;
    // 8003EB7C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EB80:
    ctx->pc = 0x8003EB80u;
    // 8003EB80: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003EB84:
    ctx->pc = 0x8003EB84u;
    // 8003EB84: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003EB88:
    ctx->pc = 0x8003EB88u;
    // 8003EB88: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003EB8C:
    ctx->pc = 0x8003EB8Cu;
    // 8003EB8C: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8003EB90:
    ctx->pc = 0x8003EB90u;
    // 8003EB90: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003EB94:
    ctx->pc = 0x8003EB94u;
    // 8003EB94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003EB98:
    ctx->pc = 0x8003EB98u;
    // 8003EB98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003EB9C:
    ctx->pc = 0x8003EB9Cu;
    ctx->downcount -= 16;
    // 8003EB9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003EBA0:
    ctx->pc = 0x8003EBA0u;
    // 8003EBA0: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EBA4:
    ctx->pc = 0x8003EBA4u;
    // 8003EBA4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003EBA8:
    ctx->pc = 0x8003EBA8u;
    // 8003EBA8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003EBAC:
    ctx->pc = 0x8003EBACu;
    // 8003EBAC: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003EBB0:
    ctx->pc = 0x8003EBB0u;
    // 8003EBB0: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003EBB4:
    ctx->pc = 0x8003EBB4u;
    // 8003EBB4: or.   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003EBB8:
    ctx->pc = 0x8003EBB8u;
    // 8003EBB8: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003EBBC:
    ctx->pc = 0x8003EBBCu;
    // 8003EBBC: addi    r28, r3, 0
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(0);

label_8003EBC0:
    ctx->pc = 0x8003EBC0u;
    // 8003EBC0: mulli   r5, r28, 272
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[28] * (s64)(s32)272);

label_8003EBC4:
    ctx->pc = 0x8003EBC4u;
    // 8003EBC4: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8003EBC8:
    ctx->pc = 0x8003EBC8u;
    // 8003EBC8: addi    r0, r3, -21248
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-21248);

label_8003EBCC:
    ctx->pc = 0x8003EBCCu;
    // 8003EBCC: add   r31, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_8003EBD0:
    ctx->pc = 0x8003EBD0u;
    // 8003EBD0: bc    12, 0, 0x8003EC00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003EC00;
        }
    }

label_8003EBD4:
    ctx->pc = 0x8003EBD4u;
    ctx->downcount -= 13;
    // 8003EBD4: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003EBD8:
    ctx->pc = 0x8003EBD8u;
    // 8003EBD8: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003EBDC:
    ctx->pc = 0x8003EBDCu;
    // 8003EBDC: addi    r7, r3, -5588
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-5588);

label_8003EBE0:
    ctx->pc = 0x8003EBE0u;
    // 8003EBE0: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003EBE4:
    ctx->pc = 0x8003EBE4u;
    // 8003EBE4: lhz     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003EBE8:
    ctx->pc = 0x8003EBE8u;
    // 8003EBE8: lwz     r6, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003EBEC:
    ctx->pc = 0x8003EBECu;
    // 8003EBEC: addi    r3, r28, 0
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(0);

label_8003EBF0:
    ctx->pc = 0x8003EBF0u;
    // 8003EBF0: mullw   r4, r5, r0
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[4] = (u32)product;
    }

label_8003EBF4:
    ctx->pc = 0x8003EBF4u;
    // 8003EBF4: bl      0x8003B350
    {
            ctx->lr = 0x8003EBF8u;
            ctx->pc = 0x8003B350u;
            return;
    }

label_8003EBF8:
    ctx->pc = 0x8003EBF8u;
    ctx->downcount -= 2;
    // 8003EBF8: or.   r29, r3, r3
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

label_8003EBFC:
    ctx->pc = 0x8003EBFCu;
    // 8003EBFC: bc    4, 0, 0x8003EC2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EC2C;
        }
    }

label_8003EC00:
    ctx->pc = 0x8003EC00u;
    ctx->downcount -= 6;
    // 8003EC00: lwz     r30, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003EC04:
    ctx->pc = 0x8003EC04u;
    // 8003EC04: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003EC08:
    ctx->pc = 0x8003EC08u;
    // 8003EC08: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8003EC0C:
    ctx->pc = 0x8003EC0Cu;
    // 8003EC0C: stw     r0, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EC10:
    ctx->pc = 0x8003EC10u;
    // 8003EC10: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8003EC14:
    ctx->pc = 0x8003EC14u;
    // 8003EC14: bl      0x80039BB4
    {
            ctx->lr = 0x8003EC18u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003EC18:
    ctx->pc = 0x8003EC18u;
    ctx->downcount -= 6;
    // 8003EC18: addi    r12, r30, 0
    ctx->gpr[12] = ctx->gpr[30] + (u32)(s32)(0);

label_8003EC1C:
    ctx->pc = 0x8003EC1Cu;
    // 8003EC1C: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_8003EC20:
    ctx->pc = 0x8003EC20u;
    // 8003EC20: addi    r3, r28, 0
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(0);

label_8003EC24:
    ctx->pc = 0x8003EC24u;
    // 8003EC24: addi    r4, r29, 0
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(0);

label_8003EC28:
    ctx->pc = 0x8003EC28u;
    // 8003EC28: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8003EC2Cu;
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003EC2C:
    ctx->pc = 0x8003EC2Cu;
    ctx->downcount -= 9;
    // 8003EC2C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EC30:
    ctx->pc = 0x8003EC30u;
    // 8003EC30: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003EC34:
    ctx->pc = 0x8003EC34u;
    // 8003EC34: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003EC38:
    ctx->pc = 0x8003EC38u;
    // 8003EC38: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003EC3C:
    ctx->pc = 0x8003EC3Cu;
    // 8003EC3C: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8003EC40:
    ctx->pc = 0x8003EC40u;
    // 8003EC40: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003EC44:
    ctx->pc = 0x8003EC44u;
    // 8003EC44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003EC48:
    ctx->pc = 0x8003EC48u;
    // 8003EC48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003EC4C:
    ctx->pc = 0x8003EC4Cu;
    ctx->downcount -= 23;
    // 8003EC4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003EC50:
    ctx->pc = 0x8003EC50u;
    // 8003EC50: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EC54:
    ctx->pc = 0x8003EC54u;
    // 8003EC54: stwu     r1, -56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-56);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003EC58:
    ctx->pc = 0x8003EC58u;
    // 8003EC58: stmw     r27, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8003EC5C:
    ctx->pc = 0x8003EC5Cu;
    // 8003EC5C: addi    r28, r6, 0
    ctx->gpr[28] = ctx->gpr[6] + (u32)(s32)(0);

label_8003EC60:
    ctx->pc = 0x8003EC60u;
    // 8003EC60: addi    r27, r5, 0
    ctx->gpr[27] = ctx->gpr[5] + (u32)(s32)(0);

label_8003EC64:
    ctx->pc = 0x8003EC64u;
    // 8003EC64: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_8003EC68:
    ctx->pc = 0x8003EC68u;
    // 8003EC68: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_8003EC6C:
    ctx->pc = 0x8003EC6Cu;
    // 8003EC6C: addi    r29, r7, 0
    ctx->gpr[29] = ctx->gpr[7] + (u32)(s32)(0);

label_8003EC70:
    ctx->pc = 0x8003EC70u;
    // 8003EC70: addi    r4, r27, 0
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(0);

label_8003EC74:
    ctx->pc = 0x8003EC74u;
    // 8003EC74: addi    r5, r28, 0
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(0);

label_8003EC78:
    ctx->pc = 0x8003EC78u;
    // 8003EC78: addi    r6, r1, 28
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(28);

label_8003EC7C:
    ctx->pc = 0x8003EC7Cu;
    // 8003EC7C: bl      0x8003E5B8
    {
            ctx->lr = 0x8003EC80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003E5B8u;
                return;
            }
            goto label_8003E5B8;
    }

label_8003EC80:
    ctx->pc = 0x8003EC80u;
    ctx->downcount -= 2;
    // 8003EC80: cmpwi   r3, 0
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

label_8003EC84:
    ctx->pc = 0x8003EC84u;
    // 8003EC84: bc    4, 0, 0x8003EC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EC8C;
        }
    }

label_8003EC88:
    ctx->pc = 0x8003EC88u;
    ctx->downcount -= 1;
    // 8003EC88: b       0x8003ED4C
    {
            goto label_8003ED4C;
    }

label_8003EC8C:
    ctx->pc = 0x8003EC8Cu;
    ctx->downcount -= 5;
    // 8003EC8C: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003EC90:
    ctx->pc = 0x8003EC90u;
    // 8003EC90: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003EC94:
    ctx->pc = 0x8003EC94u;
    // 8003EC94: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_8003EC98:
    ctx->pc = 0x8003EC98u;
    // 8003EC98: and.   r0, r28, r4
    {
        ctx->gpr[0] = ctx->gpr[28] & ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003EC9C:
    ctx->pc = 0x8003EC9Cu;
    // 8003EC9C: bc    4, 2, 0x8003ECA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003ECA8;
        }
    }

label_8003ECA0:
    ctx->pc = 0x8003ECA0u;
    ctx->downcount -= 2;
    // 8003ECA0: and.   r0, r27, r4
    {
        ctx->gpr[0] = ctx->gpr[27] & ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003ECA4:
    ctx->pc = 0x8003ECA4u;
    // 8003ECA4: bc    12, 2, 0x8003ECB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003ECB4;
        }
    }

label_8003ECA8:
    ctx->pc = 0x8003ECA8u;
    ctx->downcount -= 2;
    // 8003ECA8: li      r4, -128
    ctx->gpr[4] = (u32)(s32)(-128);

label_8003ECAC:
    ctx->pc = 0x8003ECACu;
    // 8003ECAC: bl      0x80039BB4
    {
            ctx->lr = 0x8003ECB0u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003ECB0:
    ctx->pc = 0x8003ECB0u;
    ctx->downcount -= 1;
    // 8003ECB0: b       0x8003ED4C
    {
            goto label_8003ED4C;
    }

label_8003ECB4:
    ctx->pc = 0x8003ECB4u;
    ctx->downcount -= 1;
    // 8003ECB4: bl      0x8003B7B8
    {
            ctx->lr = 0x8003ECB8u;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003ECB8:
    ctx->pc = 0x8003ECB8u;
    ctx->downcount -= 5;
    // 8003ECB8: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003ECBC:
    ctx->pc = 0x8003ECBCu;
    // 8003ECBC: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_8003ECC0:
    ctx->pc = 0x8003ECC0u;
    // 8003ECC0: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8003ECC4:
    ctx->pc = 0x8003ECC4u;
    // 8003ECC4: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003ECC8:
    ctx->pc = 0x8003ECC8u;
    // 8003ECC8: bl      0x8003DD30
    {
            ctx->lr = 0x8003ECCCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DD30u;
                return;
            }
            goto label_8003DD30;
    }

label_8003ECCC:
    ctx->pc = 0x8003ECCCu;
    ctx->downcount -= 2;
    // 8003ECCC: or.   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003ECD0:
    ctx->pc = 0x8003ECD0u;
    // 8003ECD0: bc    4, 0, 0x8003ECE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003ECE0;
        }
    }

label_8003ECD4:
    ctx->pc = 0x8003ECD4u;
    ctx->downcount -= 2;
    // 8003ECD4: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003ECD8:
    ctx->pc = 0x8003ECD8u;
    // 8003ECD8: bl      0x80039BB4
    {
            ctx->lr = 0x8003ECDCu;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003ECDC:
    ctx->pc = 0x8003ECDCu;
    ctx->downcount -= 1;
    // 8003ECDC: b       0x8003ED4C
    {
            goto label_8003ED4C;
    }

label_8003ECE0:
    ctx->pc = 0x8003ECE0u;
    ctx->downcount -= 3;
    // 8003ECE0: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8003ECE4:
    ctx->pc = 0x8003ECE4u;
    // 8003ECE4: addi    r4, r27, 0
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(0);

label_8003ECE8:
    ctx->pc = 0x8003ECE8u;
    // 8003ECE8: bl      0x8001DA7C
    {
            ctx->lr = 0x8003ECECu;
            ctx->pc = 0x8001DA7Cu;
            return;
    }

label_8003ECEC:
    ctx->pc = 0x8003ECECu;
    ctx->downcount -= 2;
    // 8003ECEC: cmplwi  r29, 0x0000
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

label_8003ECF0:
    ctx->pc = 0x8003ECF0u;
    // 8003ECF0: bc    12, 2, 0x8003ECFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003ECFC;
        }
    }

label_8003ECF4:
    ctx->pc = 0x8003ECF4u;
    ctx->downcount -= 2;
    // 8003ECF4: or   r0, r29, r29
    {
        ctx->gpr[0] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8003ECF8:
    ctx->pc = 0x8003ECF8u;
    // 8003ECF8: b       0x8003ED04
    {
            goto label_8003ED04;
    }

label_8003ECFC:
    ctx->pc = 0x8003ECFCu;
    ctx->downcount -= 2;
    // 8003ECFC: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003ED00:
    ctx->pc = 0x8003ED00u;
    // 8003ED00: addi    r0, r3, -29796
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29796);

label_8003ED04:
    ctx->pc = 0x8003ED04u;
    ctx->downcount -= 16;
    // 8003ED04: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003ED08:
    ctx->pc = 0x8003ED08u;
    // 8003ED08: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003ED0C:
    ctx->pc = 0x8003ED0Cu;
    // 8003ED0C: addi    r5, r3, -5220
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5220);

label_8003ED10:
    ctx->pc = 0x8003ED10u;
    // 8003ED10: stw     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003ED14:
    ctx->pc = 0x8003ED14u;
    // 8003ED14: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003ED18:
    ctx->pc = 0x8003ED18u;
    // 8003ED18: stw     r31, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003ED1C:
    ctx->pc = 0x8003ED1Cu;
    // 8003ED1C: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003ED20:
    ctx->pc = 0x8003ED20u;
    // 8003ED20: lhz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003ED24:
    ctx->pc = 0x8003ED24u;
    // 8003ED24: lwz     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003ED28:
    ctx->pc = 0x8003ED28u;
    // 8003ED28: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003ED2C:
    ctx->pc = 0x8003ED2Cu;
    // 8003ED2C: mullw   r4, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[4] = (u32)product;
    }

label_8003ED30:
    ctx->pc = 0x8003ED30u;
    // 8003ED30: bl      0x80039930
    {
            ctx->lr = 0x8003ED34u;
            ctx->pc = 0x80039930u;
            return;
    }

label_8003ED34:
    ctx->pc = 0x8003ED34u;
    ctx->downcount -= 2;
    // 8003ED34: or.   r30, r3, r3
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

label_8003ED38:
    ctx->pc = 0x8003ED38u;
    // 8003ED38: bc    4, 0, 0x8003ED48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003ED48;
        }
    }

label_8003ED3C:
    ctx->pc = 0x8003ED3Cu;
    ctx->downcount -= 3;
    // 8003ED3C: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003ED40:
    ctx->pc = 0x8003ED40u;
    // 8003ED40: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8003ED44:
    ctx->pc = 0x8003ED44u;
    // 8003ED44: bl      0x80039BB4
    {
            ctx->lr = 0x8003ED48u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003ED48:
    ctx->pc = 0x8003ED48u;
    ctx->downcount -= 1;
    // 8003ED48: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8003ED4C:
    ctx->pc = 0x8003ED4Cu;
    ctx->downcount -= 16;
    // 8003ED4C: lmw     r27, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8003ED50:
    ctx->pc = 0x8003ED50u;
    // 8003ED50: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003ED54:
    ctx->pc = 0x8003ED54u;
    // 8003ED54: addi    r1, r1, 56
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(56);

label_8003ED58:
    ctx->pc = 0x8003ED58u;
    // 8003ED58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003ED5C:
    ctx->pc = 0x8003ED5Cu;
    // 8003ED5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003ED60:
    ctx->pc = 0x8003ED60u;
    ctx->downcount -= 8;
    // 8003ED60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003ED64:
    ctx->pc = 0x8003ED64u;
    // 8003ED64: lis     r7, -32764
    ctx->gpr[7] = ((u32)(s32)(-32764) << 16);

label_8003ED68:
    ctx->pc = 0x8003ED68u;
    // 8003ED68: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003ED6C:
    ctx->pc = 0x8003ED6Cu;
    // 8003ED6C: addi    r7, r7, -29792
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29792);

label_8003ED70:
    ctx->pc = 0x8003ED70u;
    // 8003ED70: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003ED74:
    ctx->pc = 0x8003ED74u;
    // 8003ED74: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003ED78:
    ctx->pc = 0x8003ED78u;
    // 8003ED78: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8003ED7C:
    ctx->pc = 0x8003ED7Cu;
    // 8003ED7C: bl      0x8003EC4C
    {
            ctx->lr = 0x8003ED80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003EC4Cu;
                return;
            }
            goto label_8003EC4C;
    }

label_8003ED80:
    ctx->pc = 0x8003ED80u;
    ctx->downcount -= 2;
    // 8003ED80: cmpwi   r3, 0
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

label_8003ED84:
    ctx->pc = 0x8003ED84u;
    // 8003ED84: bc    4, 0, 0x8003ED8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003ED8C;
        }
    }

label_8003ED88:
    ctx->pc = 0x8003ED88u;
    ctx->downcount -= 1;
    // 8003ED88: b       0x8003ED94
    {
            goto label_8003ED94;
    }

label_8003ED8C:
    ctx->pc = 0x8003ED8Cu;
    ctx->downcount -= 2;
    // 8003ED8C: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003ED90:
    ctx->pc = 0x8003ED90u;
    // 8003ED90: bl      0x80039DEC
    {
            ctx->lr = 0x8003ED94u;
            ctx->pc = 0x80039DECu;
            return;
    }

label_8003ED94:
    ctx->pc = 0x8003ED94u;
    ctx->downcount -= 6;
    // 8003ED94: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003ED98:
    ctx->pc = 0x8003ED98u;
    // 8003ED98: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003ED9C:
    ctx->pc = 0x8003ED9Cu;
    // 8003ED9C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003EDA0:
    ctx->pc = 0x8003EDA0u;
    // 8003EDA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003EDA4:
    ctx->pc = 0x8003EDA4u;
    // 8003EDA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003EDA8:
    ctx->pc = 0x8003EDA8u;
    ctx->downcount -= 19;
    // 8003EDA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003EDAC:
    ctx->pc = 0x8003EDACu;
    // 8003EDAC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EDB0:
    ctx->pc = 0x8003EDB0u;
    // 8003EDB0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003EDB4:
    ctx->pc = 0x8003EDB4u;
    // 8003EDB4: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003EDB8:
    ctx->pc = 0x8003EDB8u;
    // 8003EDB8: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003EDBC:
    ctx->pc = 0x8003EDBCu;
    // 8003EDBC: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003EDC0:
    ctx->pc = 0x8003EDC0u;
    // 8003EDC0: or.   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003EDC4:
    ctx->pc = 0x8003EDC4u;
    // 8003EDC4: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003EDC8:
    ctx->pc = 0x8003EDC8u;
    // 8003EDC8: addi    r28, r3, 0
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(0);

label_8003EDCC:
    ctx->pc = 0x8003EDCCu;
    // 8003EDCC: mulli   r5, r28, 272
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[28] * (s64)(s32)272);

label_8003EDD0:
    ctx->pc = 0x8003EDD0u;
    // 8003EDD0: lis     r3, -32735
    ctx->gpr[3] = ((u32)(s32)(-32735) << 16);

label_8003EDD4:
    ctx->pc = 0x8003EDD4u;
    // 8003EDD4: addi    r0, r3, -21248
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-21248);

label_8003EDD8:
    ctx->pc = 0x8003EDD8u;
    // 8003EDD8: add   r31, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_8003EDDC:
    ctx->pc = 0x8003EDDCu;
    // 8003EDDC: lwz     r30, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003EDE0:
    ctx->pc = 0x8003EDE0u;
    // 8003EDE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003EDE4:
    ctx->pc = 0x8003EDE4u;
    // 8003EDE4: stw     r0, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EDE8:
    ctx->pc = 0x8003EDE8u;
    // 8003EDE8: bc    12, 0, 0x8003EE04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003EE04;
        }
    }

label_8003EDEC:
    ctx->pc = 0x8003EDECu;
    ctx->downcount -= 4;
    // 8003EDEC: lhz     r4, 190(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(190);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8003EDF0:
    ctx->pc = 0x8003EDF0u;
    // 8003EDF0: addi    r3, r28, 0
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(0);

label_8003EDF4:
    ctx->pc = 0x8003EDF4u;
    // 8003EDF4: addi    r5, r30, 0
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(0);

label_8003EDF8:
    ctx->pc = 0x8003EDF8u;
    // 8003EDF8: bl      0x8003B670
    {
            ctx->lr = 0x8003EDFCu;
            ctx->pc = 0x8003B670u;
            return;
    }

label_8003EDFC:
    ctx->pc = 0x8003EDFCu;
    ctx->downcount -= 2;
    // 8003EDFC: or.   r29, r3, r3
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

label_8003EE00:
    ctx->pc = 0x8003EE00u;
    // 8003EE00: bc    4, 0, 0x8003EE2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EE2C;
        }
    }

label_8003EE04:
    ctx->pc = 0x8003EE04u;
    ctx->downcount -= 3;
    // 8003EE04: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8003EE08:
    ctx->pc = 0x8003EE08u;
    // 8003EE08: addi    r4, r29, 0
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(0);

label_8003EE0C:
    ctx->pc = 0x8003EE0Cu;
    // 8003EE0C: bl      0x80039BB4
    {
            ctx->lr = 0x8003EE10u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003EE10:
    ctx->pc = 0x8003EE10u;
    ctx->downcount -= 2;
    // 8003EE10: cmplwi  r30, 0x0000
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

label_8003EE14:
    ctx->pc = 0x8003EE14u;
    // 8003EE14: bc    12, 2, 0x8003EE2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003EE2C;
        }
    }

label_8003EE18:
    ctx->pc = 0x8003EE18u;
    ctx->downcount -= 6;
    // 8003EE18: addi    r12, r30, 0
    ctx->gpr[12] = ctx->gpr[30] + (u32)(s32)(0);

label_8003EE1C:
    ctx->pc = 0x8003EE1Cu;
    // 8003EE1C: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_8003EE20:
    ctx->pc = 0x8003EE20u;
    // 8003EE20: addi    r3, r28, 0
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(0);

label_8003EE24:
    ctx->pc = 0x8003EE24u;
    // 8003EE24: addi    r4, r29, 0
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(0);

label_8003EE28:
    ctx->pc = 0x8003EE28u;
    // 8003EE28: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8003EE2Cu;
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003EE2C:
    ctx->pc = 0x8003EE2Cu;
    ctx->downcount -= 9;
    // 8003EE2C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EE30:
    ctx->pc = 0x8003EE30u;
    // 8003EE30: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003EE34:
    ctx->pc = 0x8003EE34u;
    // 8003EE34: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003EE38:
    ctx->pc = 0x8003EE38u;
    // 8003EE38: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003EE3C:
    ctx->pc = 0x8003EE3Cu;
    // 8003EE3C: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8003EE40:
    ctx->pc = 0x8003EE40u;
    // 8003EE40: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003EE44:
    ctx->pc = 0x8003EE44u;
    // 8003EE44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003EE48:
    ctx->pc = 0x8003EE48u;
    // 8003EE48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003EE4C:
    ctx->pc = 0x8003EE4Cu;
    ctx->downcount -= 11;
    // 8003EE4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003EE50:
    ctx->pc = 0x8003EE50u;
    // 8003EE50: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EE54:
    ctx->pc = 0x8003EE54u;
    // 8003EE54: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003EE58:
    ctx->pc = 0x8003EE58u;
    // 8003EE58: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003EE5C:
    ctx->pc = 0x8003EE5Cu;
    // 8003EE5C: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8003EE60:
    ctx->pc = 0x8003EE60u;
    // 8003EE60: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003EE64:
    ctx->pc = 0x8003EE64u;
    // 8003EE64: addi    r30, r5, 0
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(0);

label_8003EE68:
    ctx->pc = 0x8003EE68u;
    // 8003EE68: stw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003EE6C:
    ctx->pc = 0x8003EE6Cu;
    // 8003EE6C: addi    r29, r4, 0
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(0);

label_8003EE70:
    ctx->pc = 0x8003EE70u;
    // 8003EE70: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_8003EE74:
    ctx->pc = 0x8003EE74u;
    // 8003EE74: bl      0x80039AFC
    {
            ctx->lr = 0x8003EE78u;
            ctx->pc = 0x80039AFCu;
            return;
    }

label_8003EE78:
    ctx->pc = 0x8003EE78u;
    ctx->downcount -= 2;
    // 8003EE78: cmpwi   r3, 0
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

label_8003EE7C:
    ctx->pc = 0x8003EE7Cu;
    // 8003EE7C: bc    4, 0, 0x8003EE84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EE84;
        }
    }

label_8003EE80:
    ctx->pc = 0x8003EE80u;
    ctx->downcount -= 1;
    // 8003EE80: b       0x8003EF40
    {
            goto label_8003EF40;
    }

label_8003EE84:
    ctx->pc = 0x8003EE84u;
    ctx->downcount -= 4;
    // 8003EE84: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003EE88:
    ctx->pc = 0x8003EE88u;
    // 8003EE88: addi    r4, r29, 0
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(0);

label_8003EE8C:
    ctx->pc = 0x8003EE8Cu;
    // 8003EE8C: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_8003EE90:
    ctx->pc = 0x8003EE90u;
    // 8003EE90: bl      0x8003DF58
    {
            ctx->lr = 0x8003EE94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DF58u;
                return;
            }
            goto label_8003DF58;
    }

label_8003EE94:
    ctx->pc = 0x8003EE94u;
    ctx->downcount -= 2;
    // 8003EE94: or.   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003EE98:
    ctx->pc = 0x8003EE98u;
    // 8003EE98: bc    4, 0, 0x8003EEA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EEA8;
        }
    }

label_8003EE9C:
    ctx->pc = 0x8003EE9Cu;
    ctx->downcount -= 2;
    // 8003EE9C: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003EEA0:
    ctx->pc = 0x8003EEA0u;
    // 8003EEA0: bl      0x80039BB4
    {
            ctx->lr = 0x8003EEA4u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003EEA4:
    ctx->pc = 0x8003EEA4u;
    ctx->downcount -= 1;
    // 8003EEA4: b       0x8003EF40
    {
            goto label_8003EF40;
    }

label_8003EEA8:
    ctx->pc = 0x8003EEA8u;
    ctx->downcount -= 3;
    // 8003EEA8: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003EEAC:
    ctx->pc = 0x8003EEACu;
    // 8003EEAC: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003EEB0:
    ctx->pc = 0x8003EEB0u;
    // 8003EEB0: bl      0x8003E218
    {
            ctx->lr = 0x8003EEB4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003E218u;
                return;
            }
            goto label_8003E218;
    }

label_8003EEB4:
    ctx->pc = 0x8003EEB4u;
    ctx->downcount -= 2;
    // 8003EEB4: cmpwi   r3, 0
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

label_8003EEB8:
    ctx->pc = 0x8003EEB8u;
    // 8003EEB8: bc    12, 2, 0x8003EECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003EECC;
        }
    }

label_8003EEBC:
    ctx->pc = 0x8003EEBCu;
    ctx->downcount -= 3;
    // 8003EEBC: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003EEC0:
    ctx->pc = 0x8003EEC0u;
    // 8003EEC0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8003EEC4:
    ctx->pc = 0x8003EEC4u;
    // 8003EEC4: bl      0x80039BB4
    {
            ctx->lr = 0x8003EEC8u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003EEC8:
    ctx->pc = 0x8003EEC8u;
    ctx->downcount -= 1;
    // 8003EEC8: b       0x8003EF40
    {
            goto label_8003EF40;
    }

label_8003EECC:
    ctx->pc = 0x8003EECCu;
    ctx->downcount -= 2;
    // 8003EECC: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003EED0:
    ctx->pc = 0x8003EED0u;
    // 8003EED0: bl      0x8003B7B8
    {
            ctx->lr = 0x8003EED4u;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003EED4:
    ctx->pc = 0x8003EED4u;
    ctx->downcount -= 9;
    // 8003EED4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EED8:
    ctx->pc = 0x8003EED8u;
    // 8003EED8: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_8003EEDC:
    ctx->pc = 0x8003EEDCu;
    // 8003EEDC: lwz     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003EEE0:
    ctx->pc = 0x8003EEE0u;
    // 8003EEE0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8003EEE4:
    ctx->pc = 0x8003EEE4u;
    // 8003EEE4: rlwinm r0, r0, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFC0u;
    }

label_8003EEE8:
    ctx->pc = 0x8003EEE8u;
    // 8003EEE8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8003EEEC:
    ctx->pc = 0x8003EEECu;
    // 8003EEEC: lhz     r0, 54(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(54);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003EEF0:
    ctx->pc = 0x8003EEF0u;
    // 8003EEF0: sth     r0, 190(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(190);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003EEF4:
    ctx->pc = 0x8003EEF4u;
    // 8003EEF4: bl      0x800050B4
    {
            ctx->lr = 0x8003EEF8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8003EEF8:
    ctx->pc = 0x8003EEF8u;
    ctx->downcount -= 2;
    // 8003EEF8: cmplwi  r30, 0x0000
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

label_8003EEFC:
    ctx->pc = 0x8003EEFCu;
    // 8003EEFC: bc    12, 2, 0x8003EF08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003EF08;
        }
    }

label_8003EF00:
    ctx->pc = 0x8003EF00u;
    ctx->downcount -= 2;
    // 8003EF00: or   r0, r30, r30
    {
        ctx->gpr[0] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8003EF04:
    ctx->pc = 0x8003EF04u;
    // 8003EF04: b       0x8003EF10
    {
            goto label_8003EF10;
    }

label_8003EF08:
    ctx->pc = 0x8003EF08u;
    ctx->downcount -= 2;
    // 8003EF08: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003EF0C:
    ctx->pc = 0x8003EF0Cu;
    // 8003EF0C: addi    r0, r3, -29796
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29796);

label_8003EF10:
    ctx->pc = 0x8003EF10u;
    ctx->downcount -= 6;
    // 8003EF10: lwz     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003EF14:
    ctx->pc = 0x8003EF14u;
    // 8003EF14: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8003EF18:
    ctx->pc = 0x8003EF18u;
    // 8003EF18: addi    r4, r3, -4696
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4696);

label_8003EF1C:
    ctx->pc = 0x8003EF1Cu;
    // 8003EF1C: stw     r0, 208(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EF20:
    ctx->pc = 0x8003EF20u;
    // 8003EF20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003EF24:
    ctx->pc = 0x8003EF24u;
    // 8003EF24: bl      0x8003B958
    {
            ctx->lr = 0x8003EF28u;
            ctx->pc = 0x8003B958u;
            return;
    }

label_8003EF28:
    ctx->pc = 0x8003EF28u;
    ctx->downcount -= 2;
    // 8003EF28: or.   r31, r3, r3
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

label_8003EF2C:
    ctx->pc = 0x8003EF2Cu;
    // 8003EF2C: bc    4, 0, 0x8003EF3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EF3C;
        }
    }

label_8003EF30:
    ctx->pc = 0x8003EF30u;
    ctx->downcount -= 3;
    // 8003EF30: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003EF34:
    ctx->pc = 0x8003EF34u;
    // 8003EF34: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003EF38:
    ctx->pc = 0x8003EF38u;
    // 8003EF38: bl      0x80039BB4
    {
            ctx->lr = 0x8003EF3Cu;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003EF3C:
    ctx->pc = 0x8003EF3Cu;
    ctx->downcount -= 1;
    // 8003EF3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003EF40:
    ctx->pc = 0x8003EF40u;
    ctx->downcount -= 8;
    // 8003EF40: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EF44:
    ctx->pc = 0x8003EF44u;
    // 8003EF44: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003EF48:
    ctx->pc = 0x8003EF48u;
    // 8003EF48: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003EF4C:
    ctx->pc = 0x8003EF4Cu;
    // 8003EF4C: lwz     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003EF50:
    ctx->pc = 0x8003EF50u;
    // 8003EF50: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8003EF54:
    ctx->pc = 0x8003EF54u;
    // 8003EF54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003EF58:
    ctx->pc = 0x8003EF58u;
    // 8003EF58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003EF5C:
    ctx->pc = 0x8003EF5Cu;
    ctx->downcount -= 8;
    // 8003EF5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003EF60:
    ctx->pc = 0x8003EF60u;
    // 8003EF60: lis     r5, -32764
    ctx->gpr[5] = ((u32)(s32)(-32764) << 16);

label_8003EF64:
    ctx->pc = 0x8003EF64u;
    // 8003EF64: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EF68:
    ctx->pc = 0x8003EF68u;
    // 8003EF68: addi    r5, r5, -29792
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29792);

label_8003EF6C:
    ctx->pc = 0x8003EF6Cu;
    // 8003EF6C: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003EF70:
    ctx->pc = 0x8003EF70u;
    // 8003EF70: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003EF74:
    ctx->pc = 0x8003EF74u;
    // 8003EF74: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8003EF78:
    ctx->pc = 0x8003EF78u;
    // 8003EF78: bl      0x8003EE4C
    {
            ctx->lr = 0x8003EF7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003EE4Cu;
                return;
            }
            goto label_8003EE4C;
    }

label_8003EF7C:
    ctx->pc = 0x8003EF7Cu;
    ctx->downcount -= 2;
    // 8003EF7C: cmpwi   r3, 0
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

label_8003EF80:
    ctx->pc = 0x8003EF80u;
    // 8003EF80: bc    4, 0, 0x8003EF88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EF88;
        }
    }

label_8003EF84:
    ctx->pc = 0x8003EF84u;
    ctx->downcount -= 1;
    // 8003EF84: b       0x8003EF90
    {
            goto label_8003EF90;
    }

label_8003EF88:
    ctx->pc = 0x8003EF88u;
    ctx->downcount -= 2;
    // 8003EF88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003EF8C:
    ctx->pc = 0x8003EF8Cu;
    // 8003EF8C: bl      0x80039DEC
    {
            ctx->lr = 0x8003EF90u;
            ctx->pc = 0x80039DECu;
            return;
    }

label_8003EF90:
    ctx->pc = 0x8003EF90u;
    ctx->downcount -= 6;
    // 8003EF90: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003EF94:
    ctx->pc = 0x8003EF94u;
    // 8003EF94: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003EF98:
    ctx->pc = 0x8003EF98u;
    // 8003EF98: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8003EF9C:
    ctx->pc = 0x8003EF9Cu;
    // 8003EF9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003EFA0:
    ctx->pc = 0x8003EFA0u;
    // 8003EFA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003EFA4:
    ctx->pc = 0x8003EFA4u;
    ctx->downcount -= 4;
    // 8003EFA4: lwz     r8, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8003EFA8:
    ctx->pc = 0x8003EFA8u;
    // 8003EFA8: addis   r0, r8, 1
    ctx->gpr[0] = ctx->gpr[8] + ((u32)(s32)(1) << 16);

label_8003EFAC:
    ctx->pc = 0x8003EFACu;
    // 8003EFAC: cmplwi  r0, 0xFFFF
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

label_8003EFB0:
    ctx->pc = 0x8003EFB0u;
    // 8003EFB0: bc    4, 2, 0x8003EFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EFC8;
        }
    }

label_8003EFB4:
    ctx->pc = 0x8003EFB4u;
    ctx->downcount -= 5;
    // 8003EFB4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003EFB8:
    ctx->pc = 0x8003EFB8u;
    // 8003EFB8: stb     r0, 46(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(46);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8003EFBC:
    ctx->pc = 0x8003EFBCu;
    // 8003EFBC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8003EFC0:
    ctx->pc = 0x8003EFC0u;
    // 8003EFC0: sth     r0, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003EFC4:
    ctx->pc = 0x8003EFC4u;
    // 8003EFC4: sth     r0, 54(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003EFC8:
    ctx->pc = 0x8003EFC8u;
    ctx->downcount -= 5;
    // 8003EFC8: lbz     r0, 7(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003EFCC:
    ctx->pc = 0x8003EFCCu;
    // 8003EFCC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8003EFD0:
    ctx->pc = 0x8003EFD0u;
    // 8003EFD0: rlwinm r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
    }

label_8003EFD4:
    ctx->pc = 0x8003EFD4u;
    // 8003EFD4: cmpwi   r0, 2
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

label_8003EFD8:
    ctx->pc = 0x8003EFD8u;
    // 8003EFD8: bc    12, 2, 0x8003F000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F000;
        }
    }

label_8003EFDC:
    ctx->pc = 0x8003EFDCu;
    ctx->downcount -= 1;
    // 8003EFDC: bc    4, 0, 0x8003F014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F014;
        }
    }

label_8003EFE0:
    ctx->pc = 0x8003EFE0u;
    ctx->downcount -= 2;
    // 8003EFE0: cmpwi   r0, 1
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

label_8003EFE4:
    ctx->pc = 0x8003EFE4u;
    // 8003EFE4: bc    4, 0, 0x8003EFEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003EFEC;
        }
    }

label_8003EFE8:
    ctx->pc = 0x8003EFE8u;
    ctx->downcount -= 1;
    // 8003EFE8: b       0x8003F014
    {
            goto label_8003F014;
    }

label_8003EFEC:
    ctx->pc = 0x8003EFECu;
    ctx->downcount -= 5;
    // 8003EFEC: stw     r8, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003EFF0:
    ctx->pc = 0x8003EFF0u;
    // 8003EFF0: addi    r0, r8, 3072
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(3072);

label_8003EFF4:
    ctx->pc = 0x8003EFF4u;
    // 8003EFF4: addi    r8, r8, 3584
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(3584);

label_8003EFF8:
    ctx->pc = 0x8003EFF8u;
    // 8003EFF8: stw     r0, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003EFFC:
    ctx->pc = 0x8003EFFCu;
    // 8003EFFC: b       0x8003F020
    {
            goto label_8003F020;
    }

label_8003F000:
    ctx->pc = 0x8003F000u;
    ctx->downcount -= 5;
    // 8003F000: stw     r8, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003F004:
    ctx->pc = 0x8003F004u;
    // 8003F004: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8003F008:
    ctx->pc = 0x8003F008u;
    // 8003F008: addi    r8, r8, 6144
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(6144);

label_8003F00C:
    ctx->pc = 0x8003F00Cu;
    // 8003F00C: stw     r0, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F010:
    ctx->pc = 0x8003F010u;
    // 8003F010: b       0x8003F020
    {
            goto label_8003F020;
    }

label_8003F014:
    ctx->pc = 0x8003F014u;
    ctx->downcount -= 3;
    // 8003F014: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8003F018:
    ctx->pc = 0x8003F018u;
    // 8003F018: stw     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F01C:
    ctx->pc = 0x8003F01Cu;
    // 8003F01C: stw     r0, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F020:
    ctx->pc = 0x8003F020u;
    ctx->downcount -= 7;
    // 8003F020: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8003F024:
    ctx->pc = 0x8003F024u;
    // 8003F024: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8003F028:
    ctx->pc = 0x8003F028u;
    // 8003F028: addi    r7, r4, 0
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(0);

label_8003F02C:
    ctx->pc = 0x8003F02Cu;
    // 8003F02C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8003F030:
    ctx->pc = 0x8003F030u;
    // 8003F030: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8003F034:
    ctx->pc = 0x8003F034u;
    // 8003F034: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8003F038:
    ctx->pc = 0x8003F038u;
    ctx->downcount -= 5;
    // 8003F038: lhz     r5, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8003F03C:
    // 8003F03C: sraw   r5, r5, r6
    {
        u32 sh = ctx->gpr[6] & 0x3Fu;
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

label_8003F040:
    // 8003F040: rlwinm r5, r5, 0, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000003u;
    }

label_8003F044:
    // 8003F044: cmpwi   r5, 2
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

label_8003F048:
    // 8003F048: bc    12, 2, 0x8003F06C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F06C;
        }
    }

label_8003F04C:
    ctx->downcount -= 1;
    // 8003F04C: bc    4, 0, 0x8003F078
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F078;
        }
    }

label_8003F050:
    ctx->downcount -= 2;
    // 8003F050: cmpwi   r5, 1
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

label_8003F054:
    // 8003F054: bc    4, 0, 0x8003F05C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F05C;
        }
    }

label_8003F058:
    ctx->downcount -= 1;
    // 8003F058: b       0x8003F078
    {
            goto label_8003F078;
    }

label_8003F05C:
    ctx->pc = 0x8003F05Cu;
    ctx->downcount -= 4;
    // 8003F05C: stw     r8, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003F060:
    // 8003F060: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_8003F064:
    // 8003F064: addi    r8, r8, 1024
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1024);

label_8003F068:
    // 8003F068: b       0x8003F07C
    {
            goto label_8003F07C;
    }

label_8003F06C:
    ctx->pc = 0x8003F06Cu;
    ctx->downcount -= 3;
    // 8003F06C: stw     r8, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003F070:
    // 8003F070: addi    r8, r8, 2048
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(2048);

label_8003F074:
    // 8003F074: b       0x8003F07C
    {
            goto label_8003F07C;
    }

label_8003F078:
    ctx->pc = 0x8003F078u;
    ctx->downcount -= 1;
    // 8003F078: stw     r0, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F07C:
    ctx->pc = 0x8003F07Cu;
    ctx->downcount -= 7;
    // 8003F07C: lhz     r5, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8003F080:
    // 8003F080: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_8003F084:
    // 8003F084: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

label_8003F088:
    // 8003F088: sraw   r5, r5, r6
    {
        u32 sh = ctx->gpr[6] & 0x3Fu;
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

label_8003F08C:
    // 8003F08C: rlwinm r5, r5, 0, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000003u;
    }

label_8003F090:
    // 8003F090: cmpwi   r5, 2
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

label_8003F094:
    // 8003F094: bc    12, 2, 0x8003F0B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F0B8;
        }
    }

label_8003F098:
    ctx->downcount -= 1;
    // 8003F098: bc    4, 0, 0x8003F0C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F0C4;
        }
    }

label_8003F09C:
    ctx->downcount -= 2;
    // 8003F09C: cmpwi   r5, 1
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

label_8003F0A0:
    // 8003F0A0: bc    4, 0, 0x8003F0A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F0A8;
        }
    }

label_8003F0A4:
    ctx->downcount -= 1;
    // 8003F0A4: b       0x8003F0C4
    {
            goto label_8003F0C4;
    }

label_8003F0A8:
    ctx->pc = 0x8003F0A8u;
    ctx->downcount -= 4;
    // 8003F0A8: stw     r8, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003F0AC:
    // 8003F0AC: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_8003F0B0:
    // 8003F0B0: addi    r8, r8, 1024
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1024);

label_8003F0B4:
    // 8003F0B4: b       0x8003F0C8
    {
            goto label_8003F0C8;
    }

label_8003F0B8:
    ctx->pc = 0x8003F0B8u;
    ctx->downcount -= 3;
    // 8003F0B8: stw     r8, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003F0BC:
    // 8003F0BC: addi    r8, r8, 2048
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(2048);

label_8003F0C0:
    // 8003F0C0: b       0x8003F0C8
    {
            goto label_8003F0C8;
    }

label_8003F0C4:
    ctx->pc = 0x8003F0C4u;
    ctx->downcount -= 1;
    // 8003F0C4: stw     r0, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F0C8:
    ctx->pc = 0x8003F0C8u;
    ctx->downcount -= 8;
    // 8003F0C8: lhz     r5, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8003F0CC:
    // 8003F0CC: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_8003F0D0:
    // 8003F0D0: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_8003F0D4:
    // 8003F0D4: sraw   r5, r5, r6
    {
        u32 sh = ctx->gpr[6] & 0x3Fu;
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

label_8003F0D8:
    // 8003F0D8: rlwinm r5, r5, 0, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000003u;
    }

label_8003F0DC:
    // 8003F0DC: cmpwi   r5, 2
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

label_8003F0E0:
    // 8003F0E0: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

label_8003F0E4:
    // 8003F0E4: bc    12, 2, 0x8003F108
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F108;
        }
    }

label_8003F0E8:
    ctx->downcount -= 1;
    // 8003F0E8: bc    4, 0, 0x8003F114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F114;
        }
    }

label_8003F0EC:
    ctx->downcount -= 2;
    // 8003F0EC: cmpwi   r5, 1
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

label_8003F0F0:
    // 8003F0F0: bc    4, 0, 0x8003F0F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F0F8;
        }
    }

label_8003F0F4:
    ctx->downcount -= 1;
    // 8003F0F4: b       0x8003F114
    {
            goto label_8003F114;
    }

label_8003F0F8:
    ctx->pc = 0x8003F0F8u;
    ctx->downcount -= 4;
    // 8003F0F8: stw     r8, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003F0FC:
    // 8003F0FC: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_8003F100:
    // 8003F100: addi    r8, r8, 1024
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1024);

label_8003F104:
    // 8003F104: b       0x8003F118
    {
            goto label_8003F118;
    }

label_8003F108:
    ctx->pc = 0x8003F108u;
    ctx->downcount -= 3;
    // 8003F108: stw     r8, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003F10C:
    // 8003F10C: addi    r8, r8, 2048
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(2048);

label_8003F110:
    // 8003F110: b       0x8003F118
    {
            goto label_8003F118;
    }

label_8003F114:
    ctx->pc = 0x8003F114u;
    ctx->downcount -= 1;
    // 8003F114: stw     r0, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F118:
    ctx->pc = 0x8003F118u;
    ctx->downcount -= 8;
    // 8003F118: lhz     r5, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8003F11C:
    // 8003F11C: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_8003F120:
    // 8003F120: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_8003F124:
    // 8003F124: sraw   r5, r5, r6
    {
        u32 sh = ctx->gpr[6] & 0x3Fu;
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

label_8003F128:
    // 8003F128: rlwinm r5, r5, 0, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000003u;
    }

label_8003F12C:
    // 8003F12C: cmpwi   r5, 2
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

label_8003F130:
    // 8003F130: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

label_8003F134:
    // 8003F134: bc    12, 2, 0x8003F158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F158;
        }
    }

label_8003F138:
    ctx->downcount -= 1;
    // 8003F138: bc    4, 0, 0x8003F164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F164;
        }
    }

label_8003F13C:
    ctx->downcount -= 2;
    // 8003F13C: cmpwi   r5, 1
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

label_8003F140:
    // 8003F140: bc    4, 0, 0x8003F148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F148;
        }
    }

label_8003F144:
    ctx->downcount -= 1;
    // 8003F144: b       0x8003F164
    {
            goto label_8003F164;
    }

label_8003F148:
    ctx->pc = 0x8003F148u;
    ctx->downcount -= 4;
    // 8003F148: stw     r8, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003F14C:
    // 8003F14C: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_8003F150:
    // 8003F150: addi    r8, r8, 1024
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1024);

label_8003F154:
    // 8003F154: b       0x8003F168
    {
            goto label_8003F168;
    }

label_8003F158:
    ctx->pc = 0x8003F158u;
    ctx->downcount -= 3;
    // 8003F158: stw     r8, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003F15C:
    // 8003F15C: addi    r8, r8, 2048
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(2048);

label_8003F160:
    // 8003F160: b       0x8003F168
    {
            goto label_8003F168;
    }

label_8003F164:
    ctx->pc = 0x8003F164u;
    ctx->downcount -= 1;
    // 8003F164: stw     r0, 68(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F168:
    ctx->downcount -= 4;
    // 8003F168: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_8003F16C:
    // 8003F16C: addi    r7, r7, 4
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4);

label_8003F170:
    // 8003F170: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_8003F174:
    // 8003F174: bc    16, 0, 0x8003F038
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003F038u;
                return;
            }
            goto label_8003F038;
        }
    }

label_8003F178:
    ctx->pc = 0x8003F178u;
    ctx->downcount -= 2;
    // 8003F178: cmpwi   r9, 0
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

label_8003F17C:
    ctx->pc = 0x8003F17Cu;
    // 8003F17C: bc    12, 2, 0x8003F18C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F18C;
        }
    }

label_8003F180:
    ctx->pc = 0x8003F180u;
    ctx->downcount -= 3;
    // 8003F180: stw     r8, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003F184:
    ctx->pc = 0x8003F184u;
    // 8003F184: addi    r8, r8, 512
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(512);

label_8003F188:
    ctx->pc = 0x8003F188u;
    // 8003F188: b       0x8003F194
    {
            goto label_8003F194;
    }

label_8003F18C:
    ctx->pc = 0x8003F18Cu;
    ctx->downcount -= 2;
    // 8003F18C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8003F190:
    ctx->pc = 0x8003F190u;
    // 8003F190: stw     r0, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F194:
    ctx->pc = 0x8003F194u;
    ctx->downcount -= 2;
    // 8003F194: stw     r8, 104(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003F198:
    ctx->pc = 0x8003F198u;
    // 8003F198: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003F19C:
    ctx->pc = 0x8003F19Cu;
    ctx->downcount -= 9;
    // 8003F19C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003F1A0:
    ctx->pc = 0x8003F1A0u;
    // 8003F1A0: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F1A4:
    ctx->pc = 0x8003F1A4u;
    // 8003F1A4: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003F1A8:
    ctx->pc = 0x8003F1A8u;
    // 8003F1A8: stw     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F1AC:
    ctx->pc = 0x8003F1ACu;
    // 8003F1AC: addi    r31, r5, 0
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(0);

label_8003F1B0:
    ctx->pc = 0x8003F1B0u;
    // 8003F1B0: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003F1B4:
    ctx->pc = 0x8003F1B4u;
    // 8003F1B4: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003F1B8:
    ctx->pc = 0x8003F1B8u;
    // 8003F1B8: or.   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003F1BC:
    ctx->pc = 0x8003F1BCu;
    // 8003F1BC: bc    12, 0, 0x8003F1C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F1C8;
        }
    }

label_8003F1C0:
    ctx->pc = 0x8003F1C0u;
    ctx->downcount -= 2;
    // 8003F1C0: cmpwi   r29, 127
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(127);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003F1C4:
    ctx->pc = 0x8003F1C4u;
    // 8003F1C4: bc    12, 0, 0x8003F1D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F1D0;
        }
    }

label_8003F1C8:
    ctx->pc = 0x8003F1C8u;
    ctx->downcount -= 2;
    // 8003F1C8: li      r3, -128
    ctx->gpr[3] = (u32)(s32)(-128);

label_8003F1CC:
    ctx->pc = 0x8003F1CCu;
    // 8003F1CC: b       0x8003F294
    {
            goto label_8003F294;
    }

label_8003F1D0:
    ctx->pc = 0x8003F1D0u;
    ctx->downcount -= 2;
    // 8003F1D0: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_8003F1D4:
    ctx->pc = 0x8003F1D4u;
    // 8003F1D4: bl      0x80039AFC
    {
            ctx->lr = 0x8003F1D8u;
            ctx->pc = 0x80039AFCu;
            return;
    }

label_8003F1D8:
    ctx->pc = 0x8003F1D8u;
    ctx->downcount -= 2;
    // 8003F1D8: cmpwi   r3, 0
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

label_8003F1DC:
    ctx->pc = 0x8003F1DCu;
    // 8003F1DC: bc    4, 0, 0x8003F1E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F1E4;
        }
    }

label_8003F1E0:
    ctx->pc = 0x8003F1E0u;
    ctx->downcount -= 1;
    // 8003F1E0: b       0x8003F294
    {
            goto label_8003F294;
    }

label_8003F1E4:
    ctx->pc = 0x8003F1E4u;
    ctx->downcount -= 2;
    // 8003F1E4: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F1E8:
    ctx->pc = 0x8003F1E8u;
    // 8003F1E8: bl      0x8003B7B8
    {
            ctx->lr = 0x8003F1ECu;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003F1EC:
    ctx->pc = 0x8003F1ECu;
    ctx->downcount -= 5;
    // 8003F1EC: rlwinm r0, r29, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 6u) & 0xFFFFFFC0u;
    }

label_8003F1F0:
    ctx->pc = 0x8003F1F0u;
    // 8003F1F0: add   r29, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8003F1F4:
    ctx->pc = 0x8003F1F4u;
    // 8003F1F4: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F1F8:
    ctx->pc = 0x8003F1F8u;
    // 8003F1F8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8003F1FC:
    ctx->pc = 0x8003F1FCu;
    // 8003F1FC: bl      0x8003DE64
    {
            ctx->lr = 0x8003F200u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DE64u;
                return;
            }
            goto label_8003DE64;
    }

label_8003F200:
    ctx->pc = 0x8003F200u;
    ctx->downcount -= 2;
    // 8003F200: or.   r30, r3, r3
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

label_8003F204:
    ctx->pc = 0x8003F204u;
    // 8003F204: bc    12, 0, 0x8003F288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F288;
        }
    }

label_8003F208:
    ctx->pc = 0x8003F208u;
    ctx->downcount -= 4;
    // 8003F208: addi    r4, r29, 0
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(0);

label_8003F20C:
    ctx->pc = 0x8003F20Cu;
    // 8003F20C: addi    r3, r31, 40
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(40);

label_8003F210:
    ctx->pc = 0x8003F210u;
    // 8003F210: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8003F214:
    ctx->pc = 0x8003F214u;
    // 8003F214: bl      0x8000519C
    {
            ctx->lr = 0x8003F218u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8003F218:
    ctx->pc = 0x8003F218u;
    ctx->downcount -= 4;
    // 8003F218: addi    r3, r31, 44
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(44);

label_8003F21C:
    ctx->pc = 0x8003F21Cu;
    // 8003F21C: addi    r4, r29, 4
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(4);

label_8003F220:
    ctx->pc = 0x8003F220u;
    // 8003F220: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8003F224:
    ctx->pc = 0x8003F224u;
    // 8003F224: bl      0x8000519C
    {
            ctx->lr = 0x8003F228u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8003F228:
    ctx->pc = 0x8003F228u;
    ctx->downcount -= 13;
    // 8003F228: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003F22C:
    ctx->pc = 0x8003F22Cu;
    // 8003F22C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003F230:
    ctx->pc = 0x8003F230u;
    // 8003F230: lhz     r6, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8003F234:
    ctx->pc = 0x8003F234u;
    // 8003F234: addi    r4, r29, 8
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(8);

label_8003F238:
    ctx->pc = 0x8003F238u;
    // 8003F238: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F23C:
    ctx->pc = 0x8003F23Cu;
    // 8003F23C: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8003F240:
    ctx->pc = 0x8003F240u;
    // 8003F240: mullw   r0, r6, r0
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_8003F244:
    ctx->pc = 0x8003F244u;
    // 8003F244: stw     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F248:
    ctx->pc = 0x8003F248u;
    // 8003F248: bl      0x8000519C
    {
            ctx->lr = 0x8003F24Cu;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_8003F24C:
    ctx->pc = 0x8003F24Cu;
    ctx->downcount -= 15;
    // 8003F24C: lwz     r0, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F250:
    ctx->pc = 0x8003F250u;
    // 8003F250: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8003F254:
    ctx->pc = 0x8003F254u;
    // 8003F254: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8003F258:
    ctx->pc = 0x8003F258u;
    // 8003F258: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F25C:
    ctx->pc = 0x8003F25Cu;
    // 8003F25C: lbz     r0, 7(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(7);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003F260:
    ctx->pc = 0x8003F260u;
    // 8003F260: stb     r0, 46(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(46);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8003F264:
    ctx->pc = 0x8003F264u;
    // 8003F264: lwz     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F268:
    ctx->pc = 0x8003F268u;
    // 8003F268: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F26C:
    ctx->pc = 0x8003F26Cu;
    // 8003F26C: lhz     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003F270:
    ctx->pc = 0x8003F270u;
    // 8003F270: sth     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003F274:
    ctx->pc = 0x8003F274u;
    // 8003F274: lhz     r0, 50(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(50);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003F278:
    ctx->pc = 0x8003F278u;
    // 8003F278: sth     r0, 54(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003F27C:
    ctx->pc = 0x8003F27Cu;
    // 8003F27C: lwz     r0, 60(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F280:
    ctx->pc = 0x8003F280u;
    // 8003F280: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F284:
    ctx->pc = 0x8003F284u;
    // 8003F284: bl      0x8003EFA4
    {
            ctx->lr = 0x8003F288u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003EFA4u;
                return;
            }
            goto label_8003EFA4;
    }

label_8003F288:
    ctx->pc = 0x8003F288u;
    ctx->downcount -= 3;
    // 8003F288: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F28C:
    ctx->pc = 0x8003F28Cu;
    // 8003F28C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8003F290:
    ctx->pc = 0x8003F290u;
    // 8003F290: bl      0x80039BB4
    {
            ctx->lr = 0x8003F294u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003F294:
    ctx->pc = 0x8003F294u;
    ctx->downcount -= 8;
    // 8003F294: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F298:
    ctx->pc = 0x8003F298u;
    // 8003F298: lwz     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003F29C:
    ctx->pc = 0x8003F29Cu;
    // 8003F29C: lwz     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003F2A0:
    ctx->pc = 0x8003F2A0u;
    // 8003F2A0: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003F2A4:
    ctx->pc = 0x8003F2A4u;
    // 8003F2A4: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_8003F2A8:
    ctx->pc = 0x8003F2A8u;
    // 8003F2A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003F2AC:
    ctx->pc = 0x8003F2ACu;
    // 8003F2AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003F2B0:
    ctx->pc = 0x8003F2B0u;
    ctx->downcount -= 12;
    // 8003F2B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003F2B4:
    ctx->pc = 0x8003F2B4u;
    // 8003F2B4: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F2B8:
    ctx->pc = 0x8003F2B8u;
    // 8003F2B8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003F2BC:
    ctx->pc = 0x8003F2BCu;
    // 8003F2BC: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F2C0:
    ctx->pc = 0x8003F2C0u;
    // 8003F2C0: or.   r31, r4, r4
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

label_8003F2C4:
    ctx->pc = 0x8003F2C4u;
    // 8003F2C4: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003F2C8:
    ctx->pc = 0x8003F2C8u;
    // 8003F2C8: addi    r30, r6, 0
    ctx->gpr[30] = ctx->gpr[6] + (u32)(s32)(0);

label_8003F2CC:
    ctx->pc = 0x8003F2CCu;
    // 8003F2CC: stw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003F2D0:
    ctx->pc = 0x8003F2D0u;
    // 8003F2D0: addi    r29, r5, 0
    ctx->gpr[29] = ctx->gpr[5] + (u32)(s32)(0);

label_8003F2D4:
    ctx->pc = 0x8003F2D4u;
    // 8003F2D4: stw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003F2D8:
    ctx->pc = 0x8003F2D8u;
    // 8003F2D8: addi    r28, r3, 0
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(0);

label_8003F2DC:
    ctx->pc = 0x8003F2DCu;
    // 8003F2DC: bc    12, 0, 0x8003F31C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F31C;
        }
    }

label_8003F2E0:
    ctx->pc = 0x8003F2E0u;
    ctx->downcount -= 2;
    // 8003F2E0: cmpwi   r31, 127
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(127);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003F2E4:
    ctx->pc = 0x8003F2E4u;
    // 8003F2E4: bc    4, 0, 0x8003F31C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F31C;
        }
    }

label_8003F2E8:
    ctx->pc = 0x8003F2E8u;
    ctx->downcount -= 4;
    // 8003F2E8: lwz     r3, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F2EC:
    ctx->pc = 0x8003F2ECu;
    // 8003F2EC: addis   r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(1) << 16);

label_8003F2F0:
    ctx->pc = 0x8003F2F0u;
    // 8003F2F0: cmplwi  r0, 0xFFFF
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

label_8003F2F4:
    ctx->pc = 0x8003F2F4u;
    // 8003F2F4: bc    12, 2, 0x8003F300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F300;
        }
    }

label_8003F2F8:
    ctx->pc = 0x8003F2F8u;
    ctx->downcount -= 2;
    // 8003F2F8: cmplwi  r3, 0x0200
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0200u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003F2FC:
    ctx->pc = 0x8003F2FCu;
    // 8003F2FC: bc    4, 0, 0x8003F31C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F31C;
        }
    }

label_8003F300:
    ctx->pc = 0x8003F300u;
    ctx->downcount -= 4;
    // 8003F300: lwz     r3, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F304:
    ctx->pc = 0x8003F304u;
    // 8003F304: addis   r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(1) << 16);

label_8003F308:
    ctx->pc = 0x8003F308u;
    // 8003F308: cmplwi  r0, 0xFFFF
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

label_8003F30C:
    ctx->pc = 0x8003F30Cu;
    // 8003F30C: bc    12, 2, 0x8003F324
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F324;
        }
    }

label_8003F310:
    ctx->pc = 0x8003F310u;
    ctx->downcount -= 3;
    // 8003F310: rlwinm r0, r3, 0, 19, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00001FFFu;
    }

label_8003F314:
    ctx->pc = 0x8003F314u;
    // 8003F314: cmplwi  r0, 0x1FC0
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x1FC0u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003F318:
    ctx->pc = 0x8003F318u;
    // 8003F318: bc    4, 1, 0x8003F324
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F324;
        }
    }

label_8003F31C:
    ctx->pc = 0x8003F31Cu;
    ctx->downcount -= 2;
    // 8003F31C: li      r3, -128
    ctx->gpr[3] = (u32)(s32)(-128);

label_8003F320:
    ctx->pc = 0x8003F320u;
    // 8003F320: b       0x8003F404
    {
            goto label_8003F404;
    }

label_8003F324:
    ctx->pc = 0x8003F324u;
    ctx->downcount -= 3;
    // 8003F324: addi    r3, r28, 0
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(0);

label_8003F328:
    ctx->pc = 0x8003F328u;
    // 8003F328: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_8003F32C:
    ctx->pc = 0x8003F32Cu;
    // 8003F32C: bl      0x80039AFC
    {
            ctx->lr = 0x8003F330u;
            ctx->pc = 0x80039AFCu;
            return;
    }

label_8003F330:
    ctx->pc = 0x8003F330u;
    ctx->downcount -= 2;
    // 8003F330: cmpwi   r3, 0
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

label_8003F334:
    ctx->pc = 0x8003F334u;
    // 8003F334: bc    4, 0, 0x8003F33C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F33C;
        }
    }

label_8003F338:
    ctx->pc = 0x8003F338u;
    ctx->downcount -= 1;
    // 8003F338: b       0x8003F404
    {
            goto label_8003F404;
    }

label_8003F33C:
    ctx->pc = 0x8003F33Cu;
    ctx->downcount -= 2;
    // 8003F33C: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F340:
    ctx->pc = 0x8003F340u;
    // 8003F340: bl      0x8003B7B8
    {
            ctx->lr = 0x8003F344u;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003F344:
    ctx->pc = 0x8003F344u;
    ctx->downcount -= 5;
    // 8003F344: rlwinm r0, r31, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 6u) & 0xFFFFFFC0u;
    }

label_8003F348:
    ctx->pc = 0x8003F348u;
    // 8003F348: add   r31, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_8003F34C:
    ctx->pc = 0x8003F34Cu;
    // 8003F34C: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F350:
    ctx->pc = 0x8003F350u;
    // 8003F350: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003F354:
    ctx->pc = 0x8003F354u;
    // 8003F354: bl      0x8003DD30
    {
            ctx->lr = 0x8003F358u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DD30u;
                return;
            }
            goto label_8003DD30;
    }

label_8003F358:
    ctx->pc = 0x8003F358u;
    ctx->downcount -= 2;
    // 8003F358: or.   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003F35C:
    ctx->pc = 0x8003F35Cu;
    // 8003F35C: bc    4, 0, 0x8003F36C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F36C;
        }
    }

label_8003F360:
    ctx->pc = 0x8003F360u;
    ctx->downcount -= 2;
    // 8003F360: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F364:
    ctx->pc = 0x8003F364u;
    // 8003F364: bl      0x80039BB4
    {
            ctx->lr = 0x8003F368u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003F368:
    ctx->pc = 0x8003F368u;
    ctx->downcount -= 1;
    // 8003F368: b       0x8003F404
    {
            goto label_8003F404;
    }

label_8003F36C:
    ctx->pc = 0x8003F36Cu;
    ctx->downcount -= 13;
    // 8003F36C: lbz     r0, 46(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(46);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003F370:
    ctx->pc = 0x8003F370u;
    // 8003F370: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8003F374:
    ctx->pc = 0x8003F374u;
    // 8003F374: addi    r4, r29, 0
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(0);

label_8003F378:
    ctx->pc = 0x8003F378u;
    // 8003F378: stb     r0, 7(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8003F37C:
    ctx->pc = 0x8003F37Cu;
    // 8003F37C: lwz     r0, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F380:
    ctx->pc = 0x8003F380u;
    // 8003F380: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F384:
    ctx->pc = 0x8003F384u;
    // 8003F384: lhz     r0, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003F388:
    ctx->pc = 0x8003F388u;
    // 8003F388: sth     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003F38C:
    ctx->pc = 0x8003F38Cu;
    // 8003F38C: lhz     r0, 54(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(54);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003F390:
    ctx->pc = 0x8003F390u;
    // 8003F390: sth     r0, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003F394:
    ctx->pc = 0x8003F394u;
    // 8003F394: lwz     r0, 56(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F398:
    ctx->pc = 0x8003F398u;
    // 8003F398: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F39C:
    ctx->pc = 0x8003F39Cu;
    // 8003F39C: bl      0x8003EFA4
    {
            ctx->lr = 0x8003F3A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003EFA4u;
                return;
            }
            goto label_8003EFA4;
    }

label_8003F3A0:
    ctx->pc = 0x8003F3A0u;
    ctx->downcount -= 4;
    // 8003F3A0: lwz     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F3A4:
    ctx->pc = 0x8003F3A4u;
    // 8003F3A4: addis   r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(1) << 16);

label_8003F3A8:
    ctx->pc = 0x8003F3A8u;
    // 8003F3A8: cmplwi  r0, 0xFFFF
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

label_8003F3AC:
    ctx->pc = 0x8003F3ACu;
    // 8003F3AC: bc    4, 2, 0x8003F3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F3C0;
        }
    }

label_8003F3B0:
    ctx->pc = 0x8003F3B0u;
    ctx->downcount -= 4;
    // 8003F3B0: lhz     r0, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003F3B4:
    ctx->pc = 0x8003F3B4u;
    // 8003F3B4: rlwinm r0, r0, 0, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFCu;
    }

label_8003F3B8:
    ctx->pc = 0x8003F3B8u;
    // 8003F3B8: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_8003F3BC:
    ctx->pc = 0x8003F3BCu;
    // 8003F3BC: sth     r0, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003F3C0:
    ctx->pc = 0x8003F3C0u;
    ctx->downcount -= 4;
    // 8003F3C0: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8003F3C4:
    ctx->pc = 0x8003F3C4u;
    // 8003F3C4: lwz     r0, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F3C8:
    ctx->pc = 0x8003F3C8u;
    // 8003F3C8: rlwinm r29, r0, 30, 2, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_8003F3CC:
    ctx->pc = 0x8003F3CCu;
    // 8003F3CC: bl      0x80024A8C
    {
            ctx->lr = 0x8003F3D0u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_8003F3D0:
    ctx->pc = 0x8003F3D0u;
    ctx->downcount -= 3;
    // 8003F3D0: addi    r6, r29, 0
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(0);

label_8003F3D4:
    ctx->pc = 0x8003F3D4u;
    // 8003F3D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8003F3D8:
    ctx->pc = 0x8003F3D8u;
    // 8003F3D8: bl      0x8000DE64
    {
            ctx->lr = 0x8003F3DCu;
            ctx->pc = 0x8000DE64u;
            return;
    }

label_8003F3DC:
    ctx->pc = 0x8003F3DCu;
    ctx->downcount -= 4;
    // 8003F3DC: stw     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003F3E0:
    ctx->pc = 0x8003F3E0u;
    // 8003F3E0: addi    r3, r28, 0
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(0);

label_8003F3E4:
    ctx->pc = 0x8003F3E4u;
    // 8003F3E4: addi    r4, r30, 0
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(0);

label_8003F3E8:
    ctx->pc = 0x8003F3E8u;
    // 8003F3E8: bl      0x8003B958
    {
            ctx->lr = 0x8003F3ECu;
            ctx->pc = 0x8003B958u;
            return;
    }

label_8003F3EC:
    ctx->pc = 0x8003F3ECu;
    ctx->downcount -= 2;
    // 8003F3EC: or.   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003F3F0:
    ctx->pc = 0x8003F3F0u;
    // 8003F3F0: bc    4, 0, 0x8003F400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F400;
        }
    }

label_8003F3F4:
    ctx->pc = 0x8003F3F4u;
    ctx->downcount -= 3;
    // 8003F3F4: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F3F8:
    ctx->pc = 0x8003F3F8u;
    // 8003F3F8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8003F3FC:
    ctx->pc = 0x8003F3FCu;
    // 8003F3FC: bl      0x80039BB4
    {
            ctx->lr = 0x8003F400u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003F400:
    ctx->pc = 0x8003F400u;
    ctx->downcount -= 1;
    // 8003F400: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8003F404:
    ctx->pc = 0x8003F404u;
    ctx->downcount -= 9;
    // 8003F404: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F408:
    ctx->pc = 0x8003F408u;
    // 8003F408: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003F40C:
    ctx->pc = 0x8003F40Cu;
    // 8003F40C: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003F410:
    ctx->pc = 0x8003F410u;
    // 8003F410: lwz     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003F414:
    ctx->pc = 0x8003F414u;
    // 8003F414: lwz     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8003F418:
    ctx->pc = 0x8003F418u;
    // 8003F418: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8003F41C:
    ctx->pc = 0x8003F41Cu;
    // 8003F41C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003F420:
    ctx->pc = 0x8003F420u;
    // 8003F420: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003F424:
    ctx->pc = 0x8003F424u;
    ctx->downcount -= 8;
    // 8003F424: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003F428:
    ctx->pc = 0x8003F428u;
    // 8003F428: lis     r6, -32764
    ctx->gpr[6] = ((u32)(s32)(-32764) << 16);

label_8003F42C:
    ctx->pc = 0x8003F42Cu;
    // 8003F42C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F430:
    ctx->pc = 0x8003F430u;
    // 8003F430: addi    r6, r6, -29792
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29792);

label_8003F434:
    ctx->pc = 0x8003F434u;
    // 8003F434: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003F438:
    ctx->pc = 0x8003F438u;
    // 8003F438: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F43C:
    ctx->pc = 0x8003F43Cu;
    // 8003F43C: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8003F440:
    ctx->pc = 0x8003F440u;
    // 8003F440: bl      0x8003F2B0
    {
            ctx->lr = 0x8003F444u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003F2B0u;
                return;
            }
            goto label_8003F2B0;
    }

label_8003F444:
    ctx->pc = 0x8003F444u;
    ctx->downcount -= 2;
    // 8003F444: cmpwi   r3, 0
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

label_8003F448:
    ctx->pc = 0x8003F448u;
    // 8003F448: bc    4, 0, 0x8003F450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F450;
        }
    }

label_8003F44C:
    ctx->pc = 0x8003F44Cu;
    ctx->downcount -= 1;
    // 8003F44C: b       0x8003F458
    {
            goto label_8003F458;
    }

label_8003F450:
    ctx->pc = 0x8003F450u;
    ctx->downcount -= 2;
    // 8003F450: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003F454:
    ctx->pc = 0x8003F454u;
    // 8003F454: bl      0x80039DEC
    {
            ctx->lr = 0x8003F458u;
            ctx->pc = 0x80039DECu;
            return;
    }

label_8003F458:
    ctx->pc = 0x8003F458u;
    ctx->downcount -= 6;
    // 8003F458: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F45C:
    ctx->pc = 0x8003F45Cu;
    // 8003F45C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003F460:
    ctx->pc = 0x8003F460u;
    // 8003F460: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003F464:
    ctx->pc = 0x8003F464u;
    // 8003F464: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003F468:
    ctx->pc = 0x8003F468u;
    // 8003F468: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003F46C:
    ctx->pc = 0x8003F46Cu;
    ctx->downcount -= 22;
    // 8003F46C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003F470:
    ctx->pc = 0x8003F470u;
    // 8003F470: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F474:
    ctx->pc = 0x8003F474u;
    // 8003F474: stwu     r1, -72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-72);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003F478:
    ctx->pc = 0x8003F478u;
    // 8003F478: stmw     r23, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8003F47C:
    ctx->pc = 0x8003F47Cu;
    // 8003F47C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8003F480:
    ctx->pc = 0x8003F480u;
    // 8003F480: addi    r28, r3, 0
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(0);

label_8003F484:
    ctx->pc = 0x8003F484u;
    // 8003F484: addi    r30, r5, 0
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(0);

label_8003F488:
    ctx->pc = 0x8003F488u;
    // 8003F488: addi    r31, r6, 0
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(0);

label_8003F48C:
    ctx->pc = 0x8003F48Cu;
    // 8003F48C: lbz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8003F490:
    ctx->pc = 0x8003F490u;
    // 8003F490: extsb r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_8003F494:
    ctx->pc = 0x8003F494u;
    // 8003F494: cmpwi   r0, 255
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

label_8003F498:
    ctx->pc = 0x8003F498u;
    // 8003F498: bc    12, 2, 0x8003F4BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F4BC;
        }
    }

label_8003F49C:
    ctx->pc = 0x8003F49Cu;
    ctx->downcount -= 4;
    // 8003F49C: lbz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8003F4A0:
    ctx->pc = 0x8003F4A0u;
    // 8003F4A0: extsb r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_8003F4A4:
    ctx->pc = 0x8003F4A4u;
    // 8003F4A4: cmpwi   r0, 255
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

label_8003F4A8:
    ctx->pc = 0x8003F4A8u;
    // 8003F4A8: bc    12, 2, 0x8003F4BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F4BC;
        }
    }

label_8003F4AC:
    ctx->pc = 0x8003F4ACu;
    ctx->downcount -= 2;
    // 8003F4AC: extsb. r0, r4
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

label_8003F4B0:
    ctx->pc = 0x8003F4B0u;
    // 8003F4B0: bc    12, 2, 0x8003F4BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F4BC;
        }
    }

label_8003F4B4:
    ctx->pc = 0x8003F4B4u;
    ctx->downcount -= 2;
    // 8003F4B4: extsb. r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003F4B8:
    ctx->pc = 0x8003F4B8u;
    // 8003F4B8: bc    4, 2, 0x8003F4C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F4C4;
        }
    }

label_8003F4BC:
    ctx->pc = 0x8003F4BCu;
    ctx->downcount -= 2;
    // 8003F4BC: li      r3, -128
    ctx->gpr[3] = (u32)(s32)(-128);

label_8003F4C0:
    ctx->pc = 0x8003F4C0u;
    // 8003F4C0: b       0x8003F654
    {
            goto label_8003F654;
    }

label_8003F4C4:
    ctx->pc = 0x8003F4C4u;
    ctx->downcount -= 2;
    // 8003F4C4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8003F4C8:
    ctx->pc = 0x8003F4C8u;
    // 8003F4C8: bl      0x80014B68
    {
            ctx->lr = 0x8003F4CCu;
            ctx->pc = 0x80014B68u;
            return;
    }

label_8003F4CC:
    ctx->pc = 0x8003F4CCu;
    ctx->downcount -= 2;
    // 8003F4CC: cmplwi  r3, 0x0020
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0020u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003F4D0:
    ctx->pc = 0x8003F4D0u;
    // 8003F4D0: bc    12, 1, 0x8003F4E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F4E4;
        }
    }

label_8003F4D4:
    ctx->pc = 0x8003F4D4u;
    ctx->downcount -= 2;
    // 8003F4D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8003F4D8:
    ctx->pc = 0x8003F4D8u;
    // 8003F4D8: bl      0x80014B68
    {
            ctx->lr = 0x8003F4DCu;
            ctx->pc = 0x80014B68u;
            return;
    }

label_8003F4DC:
    ctx->pc = 0x8003F4DCu;
    ctx->downcount -= 2;
    // 8003F4DC: cmplwi  r3, 0x0020
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0020u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003F4E0:
    ctx->pc = 0x8003F4E0u;
    // 8003F4E0: bc    4, 1, 0x8003F4EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F4EC;
        }
    }

label_8003F4E4:
    ctx->pc = 0x8003F4E4u;
    ctx->downcount -= 2;
    // 8003F4E4: li      r3, -12
    ctx->gpr[3] = (u32)(s32)(-12);

label_8003F4E8:
    ctx->pc = 0x8003F4E8u;
    // 8003F4E8: b       0x8003F654
    {
            goto label_8003F654;
    }

label_8003F4EC:
    ctx->pc = 0x8003F4ECu;
    ctx->downcount -= 3;
    // 8003F4EC: addi    r3, r28, 0
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(0);

label_8003F4F0:
    ctx->pc = 0x8003F4F0u;
    // 8003F4F0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_8003F4F4:
    ctx->pc = 0x8003F4F4u;
    // 8003F4F4: bl      0x80039AFC
    {
            ctx->lr = 0x8003F4F8u;
            ctx->pc = 0x80039AFCu;
            return;
    }

label_8003F4F8:
    ctx->pc = 0x8003F4F8u;
    ctx->downcount -= 2;
    // 8003F4F8: cmpwi   r3, 0
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

label_8003F4FC:
    ctx->pc = 0x8003F4FCu;
    // 8003F4FC: bc    4, 0, 0x8003F504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F504;
        }
    }

label_8003F500:
    ctx->pc = 0x8003F500u;
    ctx->downcount -= 1;
    // 8003F500: b       0x8003F654
    {
            goto label_8003F654;
    }

label_8003F504:
    ctx->pc = 0x8003F504u;
    ctx->downcount -= 4;
    // 8003F504: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F508:
    ctx->pc = 0x8003F508u;
    // 8003F508: li      r23, -1
    ctx->gpr[23] = (u32)(s32)(-1);

label_8003F50C:
    ctx->pc = 0x8003F50Cu;
    // 8003F50C: li      r24, -1
    ctx->gpr[24] = (u32)(s32)(-1);

label_8003F510:
    ctx->pc = 0x8003F510u;
    // 8003F510: bl      0x8003B7B8
    {
            ctx->lr = 0x8003F514u;
            ctx->pc = 0x8003B7B8u;
            return;
    }

label_8003F514:
    ctx->pc = 0x8003F514u;
    ctx->downcount -= 3;
    // 8003F514: addi    r26, r3, 0
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(0);

label_8003F518:
    ctx->pc = 0x8003F518u;
    // 8003F518: addi    r27, r26, 0
    ctx->gpr[27] = ctx->gpr[26] + (u32)(s32)(0);

label_8003F51C:
    ctx->pc = 0x8003F51Cu;
    // 8003F51C: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8003F520:
    ctx->pc = 0x8003F520u;
    ctx->downcount -= 3;
    // 8003F520: lbz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8003F524:
    // 8003F524: cmplwi  r0, 0x00FF
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

label_8003F528:
    // 8003F528: bc    12, 2, 0x8003F598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F598;
        }
    }

label_8003F52C:
    ctx->pc = 0x8003F52Cu;
    ctx->downcount -= 5;
    // 8003F52C: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003F530:
    // 8003F530: addi    r3, r27, 0
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(0);

label_8003F534:
    // 8003F534: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8003F538:
    ctx->pc = 0x8003F538u;
    // 8003F538: lwz     r4, 268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(268);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003F53C:
    // 8003F53C: bl      0x8001213C
    {
            ctx->lr = 0x8003F540u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003F540:
    ctx->downcount -= 2;
    // 8003F540: cmpwi   r3, 0
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

label_8003F544:
    // 8003F544: bc    4, 2, 0x8003F598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F598;
        }
    }

label_8003F548:
    ctx->pc = 0x8003F548u;
    ctx->downcount -= 6;
    // 8003F548: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003F54C:
    // 8003F54C: addi    r3, r27, 4
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(4);

label_8003F550:
    // 8003F550: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8003F554:
    ctx->pc = 0x8003F554u;
    // 8003F554: lwz     r4, 268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(268);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003F558:
    // 8003F558: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8003F55C:
    // 8003F55C: bl      0x8001213C
    {
            ctx->lr = 0x8003F560u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8003F560:
    ctx->downcount -= 2;
    // 8003F560: cmpwi   r3, 0
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

label_8003F564:
    // 8003F564: bc    4, 2, 0x8003F598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F598;
        }
    }

label_8003F568:
    ctx->downcount -= 3;
    // 8003F568: addi    r3, r27, 0
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(0);

label_8003F56C:
    // 8003F56C: addi    r4, r29, 0
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(0);

label_8003F570:
    // 8003F570: bl      0x8003DC34
    {
            ctx->lr = 0x8003F574u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DC34u;
                return;
            }
            goto label_8003DC34;
    }

label_8003F574:
    ctx->downcount -= 2;
    // 8003F574: cmpwi   r3, 0
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

label_8003F578:
    // 8003F578: bc    12, 2, 0x8003F580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F580;
        }
    }

label_8003F57C:
    ctx->downcount -= 1;
    // 8003F57C: or   r23, r25, r25
    {
        ctx->gpr[23] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8003F580:
    ctx->downcount -= 3;
    // 8003F580: addi    r3, r27, 0
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(0);

label_8003F584:
    // 8003F584: addi    r4, r30, 0
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(0);

label_8003F588:
    // 8003F588: bl      0x8003DC34
    {
            ctx->lr = 0x8003F58Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DC34u;
                return;
            }
            goto label_8003DC34;
    }

label_8003F58C:
    ctx->downcount -= 2;
    // 8003F58C: cmpwi   r3, 0
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

label_8003F590:
    // 8003F590: bc    12, 2, 0x8003F598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F598;
        }
    }

label_8003F594:
    ctx->downcount -= 1;
    // 8003F594: or   r24, r25, r25
    {
        ctx->gpr[24] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8003F598:
    ctx->downcount -= 4;
    // 8003F598: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8003F59C:
    // 8003F59C: cmpwi   r25, 127
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(127);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003F5A0:
    // 8003F5A0: addi    r27, r27, 64
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(64);

label_8003F5A4:
    // 8003F5A4: bc    12, 0, 0x8003F520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003F520u;
                return;
            }
            goto label_8003F520;
        }
    }

label_8003F5A8:
    ctx->pc = 0x8003F5A8u;
    ctx->downcount -= 2;
    // 8003F5A8: cmpwi   r23, -1
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003F5AC:
    ctx->pc = 0x8003F5ACu;
    // 8003F5AC: bc    4, 2, 0x8003F5C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F5C0;
        }
    }

label_8003F5B0:
    ctx->pc = 0x8003F5B0u;
    ctx->downcount -= 3;
    // 8003F5B0: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F5B4:
    ctx->pc = 0x8003F5B4u;
    // 8003F5B4: li      r4, -4
    ctx->gpr[4] = (u32)(s32)(-4);

label_8003F5B8:
    ctx->pc = 0x8003F5B8u;
    // 8003F5B8: bl      0x80039BB4
    {
            ctx->lr = 0x8003F5BCu;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003F5BC:
    ctx->pc = 0x8003F5BCu;
    ctx->downcount -= 1;
    // 8003F5BC: b       0x8003F654
    {
            goto label_8003F654;
    }

label_8003F5C0:
    ctx->pc = 0x8003F5C0u;
    ctx->downcount -= 2;
    // 8003F5C0: cmpwi   r24, -1
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

label_8003F5C4:
    ctx->pc = 0x8003F5C4u;
    // 8003F5C4: bc    12, 2, 0x8003F5D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F5D8;
        }
    }

label_8003F5C8:
    ctx->pc = 0x8003F5C8u;
    ctx->downcount -= 3;
    // 8003F5C8: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F5CC:
    ctx->pc = 0x8003F5CCu;
    // 8003F5CC: li      r4, -7
    ctx->gpr[4] = (u32)(s32)(-7);

label_8003F5D0:
    ctx->pc = 0x8003F5D0u;
    // 8003F5D0: bl      0x80039BB4
    {
            ctx->lr = 0x8003F5D4u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003F5D4:
    ctx->pc = 0x8003F5D4u;
    ctx->downcount -= 1;
    // 8003F5D4: b       0x8003F654
    {
            goto label_8003F654;
    }

label_8003F5D8:
    ctx->pc = 0x8003F5D8u;
    ctx->downcount -= 5;
    // 8003F5D8: rlwinm r0, r23, 6, 0, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[23], 6u) & 0xFFFFFFC0u;
    }

label_8003F5DC:
    ctx->pc = 0x8003F5DCu;
    // 8003F5DC: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F5E0:
    ctx->pc = 0x8003F5E0u;
    // 8003F5E0: add   r27, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_8003F5E4:
    ctx->pc = 0x8003F5E4u;
    // 8003F5E4: addi    r4, r27, 0
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(0);

label_8003F5E8:
    ctx->pc = 0x8003F5E8u;
    // 8003F5E8: bl      0x8003DD30
    {
            ctx->lr = 0x8003F5ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003DD30u;
                return;
            }
            goto label_8003DD30;
    }

label_8003F5EC:
    ctx->pc = 0x8003F5ECu;
    ctx->downcount -= 2;
    // 8003F5EC: or.   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003F5F0:
    ctx->pc = 0x8003F5F0u;
    // 8003F5F0: bc    4, 0, 0x8003F600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F600;
        }
    }

label_8003F5F4:
    ctx->pc = 0x8003F5F4u;
    ctx->downcount -= 2;
    // 8003F5F4: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F5F8:
    ctx->pc = 0x8003F5F8u;
    // 8003F5F8: bl      0x80039BB4
    {
            ctx->lr = 0x8003F5FCu;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003F5FC:
    ctx->pc = 0x8003F5FCu;
    ctx->downcount -= 1;
    // 8003F5FC: b       0x8003F654
    {
            goto label_8003F654;
    }

label_8003F600:
    ctx->pc = 0x8003F600u;
    ctx->downcount -= 4;
    // 8003F600: addi    r4, r30, 0
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(0);

label_8003F604:
    ctx->pc = 0x8003F604u;
    // 8003F604: addi    r3, r27, 8
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(8);

label_8003F608:
    ctx->pc = 0x8003F608u;
    // 8003F608: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8003F60C:
    ctx->pc = 0x8003F60Cu;
    // 8003F60C: bl      0x80014A6C
    {
            ctx->lr = 0x8003F610u;
            ctx->pc = 0x80014A6Cu;
            return;
    }

label_8003F610:
    ctx->pc = 0x8003F610u;
    ctx->downcount -= 4;
    // 8003F610: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8003F614:
    ctx->pc = 0x8003F614u;
    // 8003F614: lwz     r0, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F618:
    ctx->pc = 0x8003F618u;
    // 8003F618: rlwinm r29, r0, 30, 2, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_8003F61C:
    ctx->pc = 0x8003F61Cu;
    // 8003F61C: bl      0x80024A8C
    {
            ctx->lr = 0x8003F620u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_8003F620:
    ctx->pc = 0x8003F620u;
    ctx->downcount -= 3;
    // 8003F620: addi    r6, r29, 0
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(0);

label_8003F624:
    ctx->pc = 0x8003F624u;
    // 8003F624: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8003F628:
    ctx->pc = 0x8003F628u;
    // 8003F628: bl      0x8000DE64
    {
            ctx->lr = 0x8003F62Cu;
            ctx->pc = 0x8000DE64u;
            return;
    }

label_8003F62C:
    ctx->pc = 0x8003F62Cu;
    ctx->downcount -= 4;
    // 8003F62C: stw     r4, 40(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003F630:
    ctx->pc = 0x8003F630u;
    // 8003F630: addi    r3, r28, 0
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(0);

label_8003F634:
    ctx->pc = 0x8003F634u;
    // 8003F634: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8003F638:
    ctx->pc = 0x8003F638u;
    // 8003F638: bl      0x8003B958
    {
            ctx->lr = 0x8003F63Cu;
            ctx->pc = 0x8003B958u;
            return;
    }

label_8003F63C:
    ctx->pc = 0x8003F63Cu;
    ctx->downcount -= 2;
    // 8003F63C: or.   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[27];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8003F640:
    ctx->pc = 0x8003F640u;
    // 8003F640: bc    4, 0, 0x8003F650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F650;
        }
    }

label_8003F644:
    ctx->pc = 0x8003F644u;
    ctx->downcount -= 3;
    // 8003F644: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F648:
    ctx->pc = 0x8003F648u;
    // 8003F648: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8003F64C:
    ctx->pc = 0x8003F64Cu;
    // 8003F64C: bl      0x80039BB4
    {
            ctx->lr = 0x8003F650u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003F650:
    ctx->pc = 0x8003F650u;
    ctx->downcount -= 1;
    // 8003F650: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8003F654:
    ctx->pc = 0x8003F654u;
    ctx->downcount -= 16;
    // 8003F654: lmw     r23, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8003F658:
    ctx->pc = 0x8003F658u;
    // 8003F658: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F65C:
    ctx->pc = 0x8003F65Cu;
    // 8003F65C: addi    r1, r1, 72
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(72);

label_8003F660:
    ctx->pc = 0x8003F660u;
    // 8003F660: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003F664:
    ctx->pc = 0x8003F664u;
    // 8003F664: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003F668:
    ctx->pc = 0x8003F668u;
    ctx->downcount -= 8;
    // 8003F668: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003F66C:
    ctx->pc = 0x8003F66Cu;
    // 8003F66C: lis     r6, -32764
    ctx->gpr[6] = ((u32)(s32)(-32764) << 16);

label_8003F670:
    ctx->pc = 0x8003F670u;
    // 8003F670: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F674:
    ctx->pc = 0x8003F674u;
    // 8003F674: addi    r6, r6, -29792
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-29792);

label_8003F678:
    ctx->pc = 0x8003F678u;
    // 8003F678: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003F67C:
    ctx->pc = 0x8003F67Cu;
    // 8003F67C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F680:
    ctx->pc = 0x8003F680u;
    // 8003F680: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8003F684:
    ctx->pc = 0x8003F684u;
    // 8003F684: bl      0x8003F46C
    {
            ctx->lr = 0x8003F688u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003F46Cu;
                return;
            }
            goto label_8003F46C;
    }

label_8003F688:
    ctx->pc = 0x8003F688u;
    ctx->downcount -= 2;
    // 8003F688: cmpwi   r3, 0
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

label_8003F68C:
    ctx->pc = 0x8003F68Cu;
    // 8003F68C: bc    4, 0, 0x8003F694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F694;
        }
    }

label_8003F690:
    ctx->pc = 0x8003F690u;
    ctx->downcount -= 1;
    // 8003F690: b       0x8003F69C
    {
            goto label_8003F69C;
    }

label_8003F694:
    ctx->pc = 0x8003F694u;
    ctx->downcount -= 2;
    // 8003F694: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8003F698:
    ctx->pc = 0x8003F698u;
    // 8003F698: bl      0x80039DEC
    {
            ctx->lr = 0x8003F69Cu;
            ctx->pc = 0x80039DECu;
            return;
    }

label_8003F69C:
    ctx->pc = 0x8003F69Cu;
    ctx->downcount -= 6;
    // 8003F69C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F6A0:
    ctx->pc = 0x8003F6A0u;
    // 8003F6A0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003F6A4:
    ctx->pc = 0x8003F6A4u;
    // 8003F6A4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003F6A8:
    ctx->pc = 0x8003F6A8u;
    // 8003F6A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003F6AC:
    ctx->pc = 0x8003F6ACu;
    // 8003F6AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003F6B0:
    ctx->pc = 0x8003F6B0u;
    ctx->downcount -= 7;
    // 8003F6B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003F6B4:
    ctx->pc = 0x8003F6B4u;
    // 8003F6B4: cmpwi   r3, 0
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

label_8003F6B8:
    ctx->pc = 0x8003F6B8u;
    // 8003F6B8: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F6BC:
    ctx->pc = 0x8003F6BCu;
    // 8003F6BC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003F6C0:
    ctx->pc = 0x8003F6C0u;
    // 8003F6C0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F6C4:
    ctx->pc = 0x8003F6C4u;
    // 8003F6C4: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_8003F6C8:
    ctx->pc = 0x8003F6C8u;
    // 8003F6C8: bc    12, 0, 0x8003F6D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F6D4;
        }
    }

label_8003F6CC:
    ctx->pc = 0x8003F6CCu;
    ctx->downcount -= 2;
    // 8003F6CC: cmpwi   r3, 2
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

label_8003F6D0:
    ctx->pc = 0x8003F6D0u;
    // 8003F6D0: bc    12, 0, 0x8003F6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F6DC;
        }
    }

label_8003F6D4:
    ctx->pc = 0x8003F6D4u;
    ctx->downcount -= 2;
    // 8003F6D4: li      r3, -128
    ctx->gpr[3] = (u32)(s32)(-128);

label_8003F6D8:
    ctx->pc = 0x8003F6D8u;
    // 8003F6D8: b       0x8003F760
    {
            goto label_8003F760;
    }

label_8003F6DC:
    ctx->pc = 0x8003F6DCu;
    ctx->downcount -= 2;
    // 8003F6DC: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_8003F6E0:
    ctx->pc = 0x8003F6E0u;
    // 8003F6E0: bl      0x80039AFC
    {
            ctx->lr = 0x8003F6E4u;
            ctx->pc = 0x80039AFCu;
            return;
    }

label_8003F6E4:
    ctx->pc = 0x8003F6E4u;
    ctx->downcount -= 2;
    // 8003F6E4: cmpwi   r3, 0
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

label_8003F6E8:
    ctx->pc = 0x8003F6E8u;
    // 8003F6E8: bc    4, 0, 0x8003F6F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F6F0;
        }
    }

label_8003F6EC:
    ctx->pc = 0x8003F6ECu;
    ctx->downcount -= 1;
    // 8003F6EC: b       0x8003F760
    {
            goto label_8003F760;
    }

label_8003F6F0:
    ctx->pc = 0x8003F6F0u;
    ctx->downcount -= 28;
    // 8003F6F0: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F6F4:
    ctx->pc = 0x8003F6F4u;
    // 8003F6F4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8003F6F8:
    ctx->pc = 0x8003F6F8u;
    // 8003F6F8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8003F6FC:
    ctx->pc = 0x8003F6FCu;
    // 8003F6FC: lwz     r5, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003F700:
    ctx->pc = 0x8003F700u;
    // 8003F700: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8003F704:
    ctx->pc = 0x8003F704u;
    // 8003F704: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F708:
    ctx->pc = 0x8003F708u;
    // 8003F708: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F70C:
    ctx->pc = 0x8003F70Cu;
    // 8003F70C: xor   r7, r7, r3
    {
        ctx->gpr[7] = ctx->gpr[7] ^ ctx->gpr[3];
    }

label_8003F710:
    ctx->pc = 0x8003F710u;
    // 8003F710: addi    r3, r5, 8
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(8);

label_8003F714:
    ctx->pc = 0x8003F714u;
    // 8003F714: xor   r6, r6, r0
    {
        ctx->gpr[6] = ctx->gpr[6] ^ ctx->gpr[0];
    }

label_8003F718:
    ctx->pc = 0x8003F718u;
    // 8003F718: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F71C:
    ctx->pc = 0x8003F71Cu;
    // 8003F71C: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F720:
    ctx->pc = 0x8003F720u;
    // 8003F720: xor   r6, r6, r0
    {
        ctx->gpr[6] = ctx->gpr[6] ^ ctx->gpr[0];
    }

label_8003F724:
    ctx->pc = 0x8003F724u;
    // 8003F724: xor   r7, r7, r3
    {
        ctx->gpr[7] = ctx->gpr[7] ^ ctx->gpr[3];
    }

label_8003F728:
    ctx->pc = 0x8003F728u;
    // 8003F728: addi    r3, r5, 16
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(16);

label_8003F72C:
    ctx->pc = 0x8003F72Cu;
    // 8003F72C: lwz     r0, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F730:
    ctx->pc = 0x8003F730u;
    // 8003F730: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F734:
    ctx->pc = 0x8003F734u;
    // 8003F734: xor   r6, r6, r0
    {
        ctx->gpr[6] = ctx->gpr[6] ^ ctx->gpr[0];
    }

label_8003F738:
    ctx->pc = 0x8003F738u;
    // 8003F738: xor   r7, r7, r3
    {
        ctx->gpr[7] = ctx->gpr[7] ^ ctx->gpr[3];
    }

label_8003F73C:
    ctx->pc = 0x8003F73Cu;
    // 8003F73C: addi    r3, r5, 24
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(24);

label_8003F740:
    ctx->pc = 0x8003F740u;
    // 8003F740: lwz     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F744:
    ctx->pc = 0x8003F744u;
    // 8003F744: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F748:
    ctx->pc = 0x8003F748u;
    // 8003F748: xor   r6, r6, r0
    {
        ctx->gpr[6] = ctx->gpr[6] ^ ctx->gpr[0];
    }

label_8003F74C:
    ctx->pc = 0x8003F74Cu;
    // 8003F74C: xor   r7, r7, r3
    {
        ctx->gpr[7] = ctx->gpr[7] ^ ctx->gpr[3];
    }

label_8003F750:
    ctx->pc = 0x8003F750u;
    // 8003F750: stw     r7, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8003F754:
    ctx->pc = 0x8003F754u;
    // 8003F754: stw     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8003F758:
    ctx->pc = 0x8003F758u;
    // 8003F758: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F75C:
    ctx->pc = 0x8003F75Cu;
    // 8003F75C: bl      0x80039BB4
    {
            ctx->lr = 0x8003F760u;
            ctx->pc = 0x80039BB4u;
            return;
    }

label_8003F760:
    ctx->pc = 0x8003F760u;
    ctx->downcount -= 6;
    // 8003F760: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F764:
    ctx->pc = 0x8003F764u;
    // 8003F764: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003F768:
    ctx->pc = 0x8003F768u;
    // 8003F768: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003F76C:
    ctx->pc = 0x8003F76Cu;
    // 8003F76C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003F770:
    ctx->pc = 0x8003F770u;
    // 8003F770: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003F774:
    ctx->pc = 0x8003F774u;
    ctx->downcount -= 10;
    // 8003F774: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003F778:
    ctx->pc = 0x8003F778u;
    // 8003F778: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F77C:
    ctx->pc = 0x8003F77Cu;
    // 8003F77C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003F780:
    ctx->pc = 0x8003F780u;
    // 8003F780: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F784:
    ctx->pc = 0x8003F784u;
    // 8003F784: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8003F788:
    ctx->pc = 0x8003F788u;
    // 8003F788: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003F78C:
    ctx->pc = 0x8003F78Cu;
    // 8003F78C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8003F790:
    ctx->pc = 0x8003F790u;
    // 8003F790: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8003F794:
    ctx->pc = 0x8003F794u;
    // 8003F794: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8003F798:
    ctx->pc = 0x8003F798u;
    // 8003F798: bl      0x800447DC
    {
            ctx->lr = 0x8003F79Cu;
            ctx->pc = 0x800447DCu;
            return;
    }

label_8003F79C:
    ctx->pc = 0x8003F79Cu;
    ctx->downcount -= 3;
    // 8003F79C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8003F7A0:
    ctx->pc = 0x8003F7A0u;
    // 8003F7A0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8003F7A4:
    ctx->pc = 0x8003F7A4u;
    // 8003F7A4: bl      0x800447E4
    {
            ctx->lr = 0x8003F7A8u;
            ctx->pc = 0x800447E4u;
            return;
    }

label_8003F7A8:
    ctx->pc = 0x8003F7A8u;
    ctx->downcount -= 6;
    // 8003F7A8: srawi r4, r30, 3
    {
        u32 sh = 3u;
        u32 value = ctx->gpr[30];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[4] = value;
        } else if (sh > 31) {
            ctx->gpr[4] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[4] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8003F7AC:
    ctx->pc = 0x8003F7ACu;
    // 8003F7AC: addze  r4, r4
    {
        u32 a = ctx->gpr[4];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003F7B0:
    ctx->pc = 0x8003F7B0u;
    // 8003F7B0: rlwinm r4, r4, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 3u) & 0xFFFFFFF8u;
    }

label_8003F7B4:
    ctx->pc = 0x8003F7B4u;
    // 8003F7B4: cmpwi   r31, 7
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003F7B8:
    ctx->pc = 0x8003F7B8u;
    // 8003F7B8: subfc   r4, r4, r30
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003F7BC:
    ctx->pc = 0x8003F7BCu;
    // 8003F7BC: bc    12, 2, 0x8003F824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F824;
        }
    }

label_8003F7C0:
    ctx->pc = 0x8003F7C0u;
    ctx->downcount -= 1;
    // 8003F7C0: bc    4, 0, 0x8003F7D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F7D0;
        }
    }

label_8003F7C4:
    ctx->pc = 0x8003F7C4u;
    ctx->downcount -= 2;
    // 8003F7C4: cmpwi   r31, 6
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

label_8003F7C8:
    ctx->pc = 0x8003F7C8u;
    // 8003F7C8: bc    4, 0, 0x8003F7DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F7DC;
        }
    }

label_8003F7CC:
    ctx->pc = 0x8003F7CCu;
    ctx->downcount -= 1;
    // 8003F7CC: b       0x8003F824
    {
            goto label_8003F824;
    }

label_8003F7D0:
    ctx->pc = 0x8003F7D0u;
    ctx->downcount -= 2;
    // 8003F7D0: cmpwi   r31, 11
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

label_8003F7D4:
    ctx->pc = 0x8003F7D4u;
    // 8003F7D4: bc    4, 0, 0x8003F824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F824;
        }
    }

label_8003F7D8:
    ctx->pc = 0x8003F7D8u;
    ctx->downcount -= 1;
    // 8003F7D8: b       0x8003F810
    {
            goto label_8003F810;
    }

label_8003F7DC:
    ctx->pc = 0x8003F7DCu;
    ctx->downcount -= 3;
    // 8003F7DC: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_8003F7E0:
    ctx->pc = 0x8003F7E0u;
    // 8003F7E0: cmplwi  r0, 0x0000
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

label_8003F7E4:
    ctx->pc = 0x8003F7E4u;
    // 8003F7E4: bc    12, 2, 0x8003F7FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F7FC;
        }
    }

label_8003F7E8:
    ctx->pc = 0x8003F7E8u;
    ctx->downcount -= 5;
    // 8003F7E8: rlwinm r3, r4, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_8003F7EC:
    ctx->pc = 0x8003F7ECu;
    // 8003F7EC: lwz     r0, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F7F0:
    ctx->pc = 0x8003F7F0u;
    // 8003F7F0: addi    r3, r3, 776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(776);

label_8003F7F4:
    ctx->pc = 0x8003F7F4u;
    // 8003F7F4: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8003F7F8:
    ctx->pc = 0x8003F7F8u;
    // 8003F7F8: b       0x8003F854
    {
            goto label_8003F854;
    }

label_8003F7FC:
    ctx->pc = 0x8003F7FCu;
    ctx->downcount -= 5;
    // 8003F7FC: rlwinm r3, r4, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_8003F800:
    ctx->pc = 0x8003F800u;
    // 8003F800: lwz     r0, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F804:
    ctx->pc = 0x8003F804u;
    // 8003F804: addi    r3, r3, 648
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(648);

label_8003F808:
    ctx->pc = 0x8003F808u;
    // 8003F808: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8003F80C:
    ctx->pc = 0x8003F80Cu;
    // 8003F80C: b       0x8003F854
    {
            goto label_8003F854;
    }

label_8003F810:
    ctx->pc = 0x8003F810u;
    ctx->downcount -= 5;
    // 8003F810: rlwinm r3, r4, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_8003F814:
    ctx->pc = 0x8003F814u;
    // 8003F814: lwz     r0, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F818:
    ctx->pc = 0x8003F818u;
    // 8003F818: addi    r3, r3, 520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(520);

label_8003F81C:
    ctx->pc = 0x8003F81Cu;
    // 8003F81C: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8003F820:
    ctx->pc = 0x8003F820u;
    // 8003F820: b       0x8003F854
    {
            goto label_8003F854;
    }

label_8003F824:
    ctx->pc = 0x8003F824u;
    ctx->downcount -= 3;
    // 8003F824: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_8003F828:
    ctx->pc = 0x8003F828u;
    // 8003F828: cmplwi  r0, 0x0000
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

label_8003F82C:
    ctx->pc = 0x8003F82Cu;
    // 8003F82C: bc    12, 2, 0x8003F844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F844;
        }
    }

label_8003F830:
    ctx->pc = 0x8003F830u;
    ctx->downcount -= 5;
    // 8003F830: rlwinm r3, r4, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_8003F834:
    ctx->pc = 0x8003F834u;
    // 8003F834: lwz     r0, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F838:
    ctx->pc = 0x8003F838u;
    // 8003F838: addi    r3, r3, 648
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(648);

label_8003F83C:
    ctx->pc = 0x8003F83Cu;
    // 8003F83C: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8003F840:
    ctx->pc = 0x8003F840u;
    // 8003F840: b       0x8003F854
    {
            goto label_8003F854;
    }

label_8003F844:
    ctx->pc = 0x8003F844u;
    ctx->downcount -= 4;
    // 8003F844: rlwinm r3, r4, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_8003F848:
    ctx->pc = 0x8003F848u;
    // 8003F848: lwz     r0, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F84C:
    ctx->pc = 0x8003F84Cu;
    // 8003F84C: addi    r3, r3, 520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(520);

label_8003F850:
    ctx->pc = 0x8003F850u;
    // 8003F850: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8003F854:
    ctx->pc = 0x8003F854u;
    ctx->downcount -= 8;
    // 8003F854: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F858:
    ctx->pc = 0x8003F858u;
    // 8003F858: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003F85C:
    ctx->pc = 0x8003F85Cu;
    // 8003F85C: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003F860:
    ctx->pc = 0x8003F860u;
    // 8003F860: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8003F864:
    ctx->pc = 0x8003F864u;
    // 8003F864: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003F868:
    ctx->pc = 0x8003F868u;
    // 8003F868: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003F86C:
    ctx->pc = 0x8003F86Cu;
    // 8003F86C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003F870:
    ctx->pc = 0x8003F870u;
    ctx->downcount -= 2;
    // 8003F870: cmplwi  r3, 0x0014
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0014u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003F874:
    ctx->pc = 0x8003F874u;
    // 8003F874: bc    12, 0, 0x8003F880
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F880;
        }
    }

label_8003F878:
    ctx->pc = 0x8003F878u;
    ctx->downcount -= 2;
    // 8003F878: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003F87C:
    ctx->pc = 0x8003F87Cu;
    // 8003F87C: b       0x8003F890
    {
            goto label_8003F890;
    }

label_8003F880:
    ctx->pc = 0x8003F880u;
    ctx->downcount -= 4;
    // 8003F880: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_8003F884:
    ctx->pc = 0x8003F884u;
    // 8003F884: lwz     r0, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F888:
    ctx->pc = 0x8003F888u;
    // 8003F888: addi    r3, r3, 904
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(904);

label_8003F88C:
    ctx->pc = 0x8003F88Cu;
    // 8003F88C: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8003F890:
    ctx->pc = 0x8003F890u;
    ctx->downcount -= 1;
    // 8003F890: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003F894:
    ctx->pc = 0x8003F894u;
    ctx->downcount -= 6;
    // 8003F894: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003F898:
    ctx->pc = 0x8003F898u;
    // 8003F898: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F89C:
    ctx->pc = 0x8003F89Cu;
    // 8003F89C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003F8A0:
    ctx->pc = 0x8003F8A0u;
    // 8003F8A0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F8A4:
    ctx->pc = 0x8003F8A4u;
    // 8003F8A4: cmpwi   r3, 0
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

label_8003F8A8:
    ctx->pc = 0x8003F8A8u;
    // 8003F8A8: bc    4, 2, 0x8003F9A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F9A4;
        }
    }

label_8003F8AC:
    ctx->pc = 0x8003F8ACu;
    ctx->downcount -= 3;
    // 8003F8AC: lwz     r0, -31168(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F8B0:
    ctx->pc = 0x8003F8B0u;
    // 8003F8B0: cmplwi  r0, 0x0000
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

label_8003F8B4:
    ctx->pc = 0x8003F8B4u;
    // 8003F8B4: bc    4, 2, 0x8003F90C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003F90C;
        }
    }

label_8003F8B8:
    ctx->pc = 0x8003F8B8u;
    ctx->downcount -= 5;
    // 8003F8B8: lwz     r3, -31188(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F8BC:
    ctx->pc = 0x8003F8BCu;
    // 8003F8BC: addi    r6, r3, 78
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(78);

label_8003F8C0:
    ctx->pc = 0x8003F8C0u;
    // 8003F8C0: lhz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8003F8C4:
    ctx->pc = 0x8003F8C4u;
    // 8003F8C4: addi    r5, r3, 80
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(80);

label_8003F8C8:
    ctx->pc = 0x8003F8C8u;
    // 8003F8C8: b       0x8003F8CC
    {
            goto label_8003F8CC;
    }

label_8003F8CC:
    ctx->pc = 0x8003F8CCu;
    ctx->downcount -= 1;
    // 8003F8CC: b       0x8003F8D0
    {
            goto label_8003F8D0;
    }

label_8003F8D0:
    loop_8003F8D0(ctx);
    if (ctx->pc == 0x8003F8E4u) goto label_8003F8E4;
    return;
label_8003F8D4:
    ctx->pc = 0x8003F8D4u;
    // 8003F8D4: lhz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8003F8D8:
    ctx->pc = 0x8003F8D8u;
    // 8003F8D8: lhz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8003F8DC:
    // 8003F8DC: cmplw   r4, r0
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

label_8003F8E0:
    // 8003F8E0: bc    4, 2, 0x8003F8D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003F8D0u;
                return;
            }
            goto label_8003F8D0;
        }
    }

label_8003F8E4:
    ctx->pc = 0x8003F8E4u;
    ctx->downcount -= 4;
    // 8003F8E4: rlwinm r0, r4, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_8003F8E8:
    ctx->pc = 0x8003F8E8u;
    // 8003F8E8: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8003F8EC:
    ctx->pc = 0x8003F8ECu;
    // 8003F8EC: stw     r0, -31184(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F8F0:
    ctx->pc = 0x8003F8F0u;
    // 8003F8F0: bl      0x80024A8C
    {
            ctx->lr = 0x8003F8F4u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_8003F8F4:
    ctx->pc = 0x8003F8F4u;
    ctx->downcount -= 6;
    // 8003F8F4: stw     r4, -31172(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31172);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003F8F8:
    ctx->pc = 0x8003F8F8u;
    // 8003F8F8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8003F8FC:
    ctx->pc = 0x8003F8FCu;
    // 8003F8FC: stw     r3, -31176(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8003F900:
    ctx->pc = 0x8003F900u;
    // 8003F900: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003F904:
    ctx->pc = 0x8003F904u;
    // 8003F904: stw     r0, -31168(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003F908:
    ctx->pc = 0x8003F908u;
    // 8003F908: b       0x8003FA10
    {
            goto label_8003FA10;
    }

label_8003F90C:
    ctx->pc = 0x8003F90Cu;
    ctx->downcount -= 1;
    // 8003F90C: bl      0x80024A8C
    {
            ctx->lr = 0x8003F910u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_8003F910:
    ctx->pc = 0x8003F910u;
    ctx->downcount -= 5;
    // 8003F910: lwz     r5, -31188(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31188);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003F914:
    ctx->pc = 0x8003F914u;
    // 8003F914: addi    r6, r5, 78
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(78);

label_8003F918:
    ctx->pc = 0x8003F918u;
    // 8003F918: lhz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_8003F91C:
    ctx->pc = 0x8003F91Cu;
    // 8003F91C: addi    r5, r5, 80
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(80);

label_8003F920:
    ctx->pc = 0x8003F920u;
    // 8003F920: b       0x8003F924
    {
            goto label_8003F924;
    }

label_8003F924:
    ctx->pc = 0x8003F924u;
    ctx->downcount -= 1;
    // 8003F924: b       0x8003F928
    {
            goto label_8003F928;
    }

label_8003F928:
    loop_8003F928(ctx);
    if (ctx->pc == 0x8003F93Cu) goto label_8003F93C;
    return;
label_8003F92C:
    ctx->pc = 0x8003F92Cu;
    // 8003F92C: lhz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_8003F930:
    ctx->pc = 0x8003F930u;
    // 8003F930: lhz     r10, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read16(ctx, ea);
    }

label_8003F934:
    // 8003F934: cmplw   r7, r0
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

label_8003F938:
    // 8003F938: bc    4, 2, 0x8003F928
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003F928u;
                return;
            }
            goto label_8003F928;
        }
    }

label_8003F93C:
    ctx->pc = 0x8003F93Cu;
    ctx->downcount -= 16;
    // 8003F93C: lwz     r6, -31172(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31172);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003F940:
    ctx->pc = 0x8003F940u;
    // 8003F940: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003F944:
    ctx->pc = 0x8003F944u;
    // 8003F944: lwz     r5, -31176(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31176);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003F948:
    ctx->pc = 0x8003F948u;
    // 8003F948: rlwinm r9, r7, 16, 0, 15
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[7], 16u) & 0xFFFF0000u;
    }

label_8003F94C:
    ctx->pc = 0x8003F94Cu;
    // 8003F94C: subfc   r8, r6, r4
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[8] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003F950:
    ctx->pc = 0x8003F950u;
    // 8003F950: subfe   r5, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003F954:
    ctx->pc = 0x8003F954u;
    // 8003F954: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_8003F958:
    ctx->pc = 0x8003F958u;
    // 8003F958: xoris   r6, r5, 0x8000
    ctx->gpr[6] = ctx->gpr[5] ^ (0x8000u << 16);

label_8003F95C:
    ctx->pc = 0x8003F95Cu;
    // 8003F95C: xoris   r5, r0, 0x8000
    ctx->gpr[5] = ctx->gpr[0] ^ (0x8000u << 16);

label_8003F960:
    ctx->pc = 0x8003F960u;
    // 8003F960: subfc   r0, r7, r8
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[8];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003F964:
    ctx->pc = 0x8003F964u;
    // 8003F964: subfe   r5, r5, r6
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003F968:
    ctx->pc = 0x8003F968u;
    // 8003F968: subfe   r5, r6, r6
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[6];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003F96C:
    ctx->pc = 0x8003F96Cu;
    // 8003F96C: neg  r5, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[5] = (~a) + 1u;
    }

label_8003F970:
    ctx->pc = 0x8003F970u;
    // 8003F970: cmpwi   r5, 0
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

label_8003F974:
    ctx->pc = 0x8003F974u;
    // 8003F974: or   r5, r9, r10
    {
        ctx->gpr[5] = ctx->gpr[9] | ctx->gpr[10];
    }

label_8003F978:
    ctx->pc = 0x8003F978u;
    // 8003F978: bc    12, 2, 0x8003F984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003F984;
        }
    }

label_8003F97C:
    ctx->pc = 0x8003F97Cu;
    ctx->downcount -= 2;
    // 8003F97C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003F980:
    ctx->pc = 0x8003F980u;
    // 8003F980: b       0x8003FA10
    {
            goto label_8003FA10;
    }

label_8003F984:
    ctx->pc = 0x8003F984u;
    ctx->downcount -= 3;
    // 8003F984: lwz     r0, -31184(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003F988:
    ctx->pc = 0x8003F988u;
    // 8003F988: cmplw   r5, r0
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8003F98C:
    ctx->pc = 0x8003F98Cu;
    // 8003F98C: bc    12, 2, 0x8003FA0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003FA0C;
        }
    }

label_8003F990:
    ctx->pc = 0x8003F990u;
    ctx->downcount -= 5;
    // 8003F990: stw     r4, -31172(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31172);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003F994:
    ctx->pc = 0x8003F994u;
    // 8003F994: stw     r3, -31176(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8003F998:
    ctx->pc = 0x8003F998u;
    // 8003F998: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003F99C:
    ctx->pc = 0x8003F99Cu;
    // 8003F99C: stw     r5, -31184(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31184);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003F9A0:
    ctx->pc = 0x8003F9A0u;
    // 8003F9A0: b       0x8003FA10
    {
            goto label_8003FA10;
    }

label_8003F9A4:
    ctx->pc = 0x8003F9A4u;
    ctx->downcount -= 2;
    // 8003F9A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003F9A8:
    ctx->pc = 0x8003F9A8u;
    // 8003F9A8: bl      0x80041194
    {
            ctx->lr = 0x8003F9ACu;
            goto label_80041194;
    }

label_8003F9AC:
    ctx->pc = 0x8003F9ACu;
    ctx->downcount -= 2;
    // 8003F9AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003F9B0:
    ctx->pc = 0x8003F9B0u;
    // 8003F9B0: bl      0x80042B88
    {
            ctx->lr = 0x8003F9B4u;
            ctx->pc = 0x80042B88u;
            return;
    }

label_8003F9B4:
    ctx->pc = 0x8003F9B4u;
    ctx->downcount -= 2;
    // 8003F9B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003F9B8:
    ctx->pc = 0x8003F9B8u;
    // 8003F9B8: bl      0x80042C54
    {
            ctx->lr = 0x8003F9BCu;
            ctx->pc = 0x80042C54u;
            return;
    }

label_8003F9BC:
    ctx->pc = 0x8003F9BCu;
    ctx->downcount -= 11;
    // 8003F9BC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8003F9C0:
    ctx->pc = 0x8003F9C0u;
    // 8003F9C0: lis     r3, -13311
    ctx->gpr[3] = ((u32)(s32)(-13311) << 16);

label_8003F9C4:
    ctx->pc = 0x8003F9C4u;
    // 8003F9C4: stw     r31, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F9C8:
    ctx->pc = 0x8003F9C8u;
    // 8003F9C8: stw     r31, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F9CC:
    ctx->pc = 0x8003F9CCu;
    // 8003F9CC: stw     r31, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F9D0:
    ctx->pc = 0x8003F9D0u;
    // 8003F9D0: stw     r31, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F9D4:
    ctx->pc = 0x8003F9D4u;
    // 8003F9D4: stw     r31, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F9D8:
    ctx->pc = 0x8003F9D8u;
    // 8003F9D8: stw     r31, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F9DC:
    ctx->pc = 0x8003F9DCu;
    // 8003F9DC: stw     r31, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F9E0:
    ctx->pc = 0x8003F9E0u;
    // 8003F9E0: stw     r31, -32768(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003F9E4:
    ctx->pc = 0x8003F9E4u;
    // 8003F9E4: bl      0x8001BFE8
    {
            ctx->lr = 0x8003F9E8u;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_8003F9E8:
    ctx->pc = 0x8003F9E8u;
    ctx->downcount -= 9;
    // 8003F9E8: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F9EC:
    ctx->pc = 0x8003F9ECu;
    // 8003F9EC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8003F9F0:
    ctx->pc = 0x8003F9F0u;
    // 8003F9F0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8003F9F4:
    ctx->pc = 0x8003F9F4u;
    // 8003F9F4: sth     r31, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_8003F9F8:
    ctx->pc = 0x8003F9F8u;
    // 8003F9F8: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003F9FC:
    ctx->pc = 0x8003F9FCu;
    // 8003F9FC: sth     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8003FA00:
    ctx->pc = 0x8003FA00u;
    // 8003FA00: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003FA04:
    ctx->pc = 0x8003FA04u;
    // 8003FA04: stb     r0, 1450(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1450);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8003FA08:
    ctx->pc = 0x8003FA08u;
    // 8003FA08: bl      0x80042600
    {
            ctx->lr = 0x8003FA0Cu;
            ctx->pc = 0x80042600u;
            return;
    }

label_8003FA0C:
    ctx->pc = 0x8003FA0Cu;
    ctx->downcount -= 1;
    // 8003FA0C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8003FA10:
    ctx->pc = 0x8003FA10u;
    ctx->downcount -= 6;
    // 8003FA10: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FA14:
    ctx->pc = 0x8003FA14u;
    // 8003FA14: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003FA18:
    ctx->pc = 0x8003FA18u;
    // 8003FA18: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8003FA1C:
    ctx->pc = 0x8003FA1Cu;
    // 8003FA1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003FA20:
    ctx->pc = 0x8003FA20u;
    // 8003FA20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8003FA24:
    ctx->pc = 0x8003FA24u;
    ctx->downcount -= 20;
    // 8003FA24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003FA28:
    ctx->pc = 0x8003FA28u;
    // 8003FA28: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FA2C:
    ctx->pc = 0x8003FA2Cu;
    // 8003FA2C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8003FA30:
    ctx->pc = 0x8003FA30u;
    // 8003FA30: stmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8003FA34:
    ctx->pc = 0x8003FA34u;
    // 8003FA34: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8003FA38:
    ctx->pc = 0x8003FA38u;
    // 8003FA38: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8003FA3C:
    ctx->pc = 0x8003FA3Cu;
    // 8003FA3C: lis     r4, -32735
    ctx->gpr[4] = ((u32)(s32)(-32735) << 16);

label_8003FA40:
    ctx->pc = 0x8003FA40u;
    // 8003FA40: lwz     r3, -32440(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32440);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003FA44:
    ctx->pc = 0x8003FA44u;
    // 8003FA44: addi    r30, r4, -20672
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-20672);

label_8003FA48:
    ctx->pc = 0x8003FA48u;
    // 8003FA48: bl      0x8001CB90
    {
            ctx->lr = 0x8003FA4Cu;
            ctx->pc = 0x8001CB90u;
            return;
    }

label_8003FA4C:
    ctx->pc = 0x8003FA4Cu;
    ctx->downcount -= 11;
    // 8003FA4C: lwz     r5, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003FA50:
    ctx->pc = 0x8003FA50u;
    // 8003FA50: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003FA54:
    ctx->pc = 0x8003FA54u;
    // 8003FA54: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_8003FA58:
    ctx->pc = 0x8003FA58u;
    // 8003FA58: stb     r0, 1448(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1448);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8003FA5C:
    ctx->pc = 0x8003FA5Cu;
    // 8003FA5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8003FA60:
    ctx->pc = 0x8003FA60u;
    // 8003FA60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8003FA64:
    ctx->pc = 0x8003FA64u;
    // 8003FA64: stb     r28, 1449(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1449);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_8003FA68:
    ctx->pc = 0x8003FA68u;
    // 8003FA68: stb     r28, 1450(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1450);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_8003FA6C:
    ctx->pc = 0x8003FA6Cu;
    // 8003FA6C: stw     r0, 1428(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FA70:
    ctx->pc = 0x8003FA70u;
    // 8003FA70: stw     r0, 1432(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FA74:
    ctx->pc = 0x8003FA74u;
    // 8003FA74: bl      0x800424DC
    {
            ctx->lr = 0x8003FA78u;
            ctx->pc = 0x800424DCu;
            return;
    }

label_8003FA78:
    ctx->pc = 0x8003FA78u;
    ctx->downcount -= 9;
    // 8003FA78: lis     r4, -13312
    ctx->gpr[4] = ((u32)(s32)(-13312) << 16);

label_8003FA7C:
    ctx->pc = 0x8003FA7Cu;
    // 8003FA7C: addi    r5, r4, 12288
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12288);

label_8003FA80:
    ctx->pc = 0x8003FA80u;
    // 8003FA80: stw     r4, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003FA84:
    ctx->pc = 0x8003FA84u;
    // 8003FA84: addi    r3, r4, 4096
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4096);

label_8003FA88:
    ctx->pc = 0x8003FA88u;
    // 8003FA88: addi    r0, r4, 16384
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(16384);

label_8003FA8C:
    ctx->pc = 0x8003FA8Cu;
    // 8003FA8C: stw     r5, -31200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31200);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003FA90:
    ctx->pc = 0x8003FA90u;
    // 8003FA90: stw     r3, -31192(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31192);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8003FA94:
    ctx->pc = 0x8003FA94u;
    // 8003FA94: stw     r0, -31188(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FA98:
    ctx->pc = 0x8003FA98u;
    // 8003FA98: bl      0x80041264
    {
            ctx->lr = 0x8003FA9Cu;
            goto label_80041264;
    }

label_8003FA9C:
    ctx->pc = 0x8003FA9Cu;
    ctx->downcount -= 4;
    // 8003FA9C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8003FAA0:
    ctx->pc = 0x8003FAA0u;
    // 8003FAA0: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8003FAA4:
    ctx->pc = 0x8003FAA4u;
    // 8003FAA4: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8003FAA8:
    ctx->pc = 0x8003FAA8u;
    // 8003FAA8: bl      0x80040C28
    {
            ctx->lr = 0x8003FAACu;
            goto label_80040C28;
    }

label_8003FAAC:
    ctx->pc = 0x8003FAACu;
    ctx->downcount -= 2;
    // 8003FAAC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8003FAB0:
    ctx->pc = 0x8003FAB0u;
    // 8003FAB0: bl      0x80040D10
    {
            ctx->lr = 0x8003FAB4u;
            goto label_80040D10;
    }

label_8003FAB4:
    ctx->pc = 0x8003FAB4u;
    ctx->downcount -= 2;
    // 8003FAB4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8003FAB8:
    ctx->pc = 0x8003FAB8u;
    // 8003FAB8: bl      0x80040E38
    {
            ctx->lr = 0x8003FABCu;
            goto label_80040E38;
    }

label_8003FABC:
    ctx->pc = 0x8003FABCu;
    ctx->downcount -= 3;
    // 8003FABC: lwz     r0, -31164(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FAC0:
    ctx->pc = 0x8003FAC0u;
    // 8003FAC0: cmplwi  r0, 0x0000
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

label_8003FAC4:
    ctx->pc = 0x8003FAC4u;
    // 8003FAC4: bc    4, 2, 0x8003FAD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8003FAD8;
        }
    }

label_8003FAC8:
    ctx->pc = 0x8003FAC8u;
    ctx->downcount -= 3;
    // 8003FAC8: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8003FACC:
    ctx->pc = 0x8003FACCu;
    // 8003FACC: addi    r3, r3, 26444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26444);

label_8003FAD0:
    ctx->pc = 0x8003FAD0u;
    // 8003FAD0: bl      0x80021F4C
    {
            ctx->lr = 0x8003FAD4u;
            ctx->pc = 0x80021F4Cu;
            return;
    }

label_8003FAD4:
    ctx->pc = 0x8003FAD4u;
    ctx->downcount -= 1;
    // 8003FAD4: stw     r28, -31164(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31164);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FAD8:
    ctx->pc = 0x8003FAD8u;
    ctx->downcount -= 1;
    // 8003FAD8: bl      0x80042D18
    {
            ctx->lr = 0x8003FADCu;
            ctx->pc = 0x80042D18u;
            return;
    }

label_8003FADC:
    ctx->pc = 0x8003FADCu;
    ctx->downcount -= 1;
    // 8003FADC: bl      0x8001C07C
    {
            ctx->lr = 0x8003FAE0u;
            ctx->pc = 0x8001C07Cu;
            return;
    }

label_8003FAE0:
    ctx->pc = 0x8003FAE0u;
    ctx->downcount -= 4;
    // 8003FAE0: lis     r4, 3073
    ctx->gpr[4] = ((u32)(s32)(3073) << 16);

label_8003FAE4:
    ctx->pc = 0x8003FAE4u;
    // 8003FAE4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8003FAE8:
    ctx->pc = 0x8003FAE8u;
    // 8003FAE8: addi    r3, r4, -32768
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-32768);

label_8003FAEC:
    ctx->pc = 0x8003FAECu;
    // 8003FAEC: bl      0x8001C098
    {
            ctx->lr = 0x8003FAF0u;
            ctx->pc = 0x8001C098u;
            return;
    }

label_8003FAF0:
    ctx->pc = 0x8003FAF0u;
    ctx->downcount -= 2;
    // 8003FAF0: oris    r3, r28, 0x4000
    ctx->gpr[3] = ctx->gpr[28] | (0x4000u << 16);

label_8003FAF4:
    ctx->pc = 0x8003FAF4u;
    // 8003FAF4: bl      0x8001C084
    {
            ctx->lr = 0x8003FAF8u;
            ctx->pc = 0x8001C084u;
            return;
    }

label_8003FAF8:
    ctx->pc = 0x8003FAF8u;
    ctx->downcount -= 22;
    // 8003FAF8: lwz     r6, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003FAFC:
    ctx->pc = 0x8003FAFCu;
    // 8003FAFC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8003FB00:
    ctx->pc = 0x8003FB00u;
    // 8003FB00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8003FB04:
    ctx->pc = 0x8003FB04u;
    // 8003FB04: stw     r29, 516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003FB08:
    ctx->pc = 0x8003FB08u;
    // 8003FB08: rlwinm r7, r3, 1, 0, 30
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0xFFFFFFFEu;
    }

label_8003FB0C:
    ctx->pc = 0x8003FB0Cu;
    // 8003FB0C: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_8003FB10:
    ctx->pc = 0x8003FB10u;
    // 8003FB10: lwz     r0, 516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(516);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FB14:
    ctx->pc = 0x8003FB14u;
    // 8003FB14: rlwimi r0, r29, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[29], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FB18:
    ctx->pc = 0x8003FB18u;
    // 8003FB18: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_8003FB1C:
    ctx->pc = 0x8003FB1Cu;
    // 8003FB1C: stw     r0, 516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FB20:
    ctx->pc = 0x8003FB20u;
    // 8003FB20: li      r0, 34
    ctx->gpr[0] = (u32)(s32)(34);

label_8003FB24:
    ctx->pc = 0x8003FB24u;
    // 8003FB24: addi    r31, r7, 192
    ctx->gpr[31] = ctx->gpr[7] + (u32)(s32)(192);

label_8003FB28:
    ctx->pc = 0x8003FB28u;
    // 8003FB28: stw     r5, 292(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003FB2C:
    ctx->pc = 0x8003FB2Cu;
    // 8003FB2C: addi    r27, r7, 193
    ctx->gpr[27] = ctx->gpr[7] + (u32)(s32)(193);

label_8003FB30:
    ctx->pc = 0x8003FB30u;
    // 8003FB30: lwz     r5, 292(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(292);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003FB34:
    ctx->pc = 0x8003FB34u;
    // 8003FB34: rlwimi r5, r4, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FB38:
    ctx->pc = 0x8003FB38u;
    // 8003FB38: stw     r5, 292(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003FB3C:
    ctx->pc = 0x8003FB3Cu;
    // 8003FB3C: stw     r29, 124(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003FB40:
    ctx->pc = 0x8003FB40u;
    // 8003FB40: lwz     r4, 124(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(124);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003FB44:
    ctx->pc = 0x8003FB44u;
    // 8003FB44: rlwimi r4, r0, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 24u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FB48:
    ctx->pc = 0x8003FB48u;
    // 8003FB48: stw     r4, 124(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003FB4C:
    ctx->pc = 0x8003FB4Cu;
    // 8003FB4C: b       0x8003FB50
    {
            goto label_8003FB50;
    }

label_8003FB50:
    ctx->pc = 0x8003FB50u;
    ctx->downcount -= 4;
    // 8003FB50: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_8003FB54:
    ctx->pc = 0x8003FB54u;
    // 8003FB54: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8003FB58:
    ctx->pc = 0x8003FB58u;
    // 8003FB58: b       0x8003FB5C
    {
            goto label_8003FB5C;
    }

label_8003FB5C:
    ctx->pc = 0x8003FB5Cu;
    ctx->downcount -= 1;
    // 8003FB5C: b       0x8003FB60
    {
            goto label_8003FB60;
    }

label_8003FB60:
    loop_8003FB60(ctx);
    if (ctx->pc == 0x8003FC58u) goto label_8003FC58;
    return;
label_8003FB64:
    // 8003FB64: rlwinm r26, r3, 31, 1, 31
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[3], 31u) & 0x7FFFFFFFu;
    }

label_8003FB68:
    // 8003FB68: addi    r11, r29, 304
    ctx->gpr[11] = ctx->gpr[29] + (u32)(s32)(304);

label_8003FB6C:
    // 8003FB6C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8003FB70:
    ctx->pc = 0x8003FB70u;
    // 8003FB70: stwx    r28, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FB74:
    // 8003FB74: addi    r10, r29, 368
    ctx->gpr[10] = ctx->gpr[29] + (u32)(s32)(368);

label_8003FB78:
    // 8003FB78: rlwinm r25, r26, 2, 0, 29
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[26], 2u) & 0xFFFFFFFCu;
    }

label_8003FB7C:
    ctx->pc = 0x8003FB7Cu;
    // 8003FB7C: stwx    r28, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FB80:
    // 8003FB80: addi    r9, r25, 256
    ctx->gpr[9] = ctx->gpr[25] + (u32)(s32)(256);

label_8003FB84:
    // 8003FB84: addi    r7, r29, 1364
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(1364);

label_8003FB88:
    ctx->pc = 0x8003FB88u;
    // 8003FB88: stwx    r28, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FB8C:
    // 8003FB8C: li      r8, 255
    ctx->gpr[8] = (u32)(s32)(255);

label_8003FB90:
    // 8003FB90: addi    r6, r25, 432
    ctx->gpr[6] = ctx->gpr[25] + (u32)(s32)(432);

label_8003FB94:
    ctx->pc = 0x8003FB94u;
    // 8003FB94: stwx    r8, r12, r7
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003FB98:
    // 8003FB98: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_8003FB9C:
    // 8003FB9C: addi    r4, r26, 246
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(246);

label_8003FBA0:
    ctx->pc = 0x8003FBA0u;
    // 8003FBA0: lwzx    r5, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003FBA4:
    // 8003FBA4: rlwimi r5, r31, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[31], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FBA8:
    // 8003FBA8: addi    r0, r26, 40
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(40);

label_8003FBAC:
    ctx->pc = 0x8003FBACu;
    // 8003FBAC: stwx    r5, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003FBB0:
    // 8003FBB0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8003FBB4:
    // 8003FBB4: rlwinm r26, r3, 31, 1, 31
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[3], 31u) & 0x7FFFFFFFu;
    }

label_8003FBB8:
    ctx->pc = 0x8003FBB8u;
    // 8003FBB8: lwzx    r5, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003FBBC:
    // 8003FBBC: rlwimi r5, r27, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[27], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FBC0:
    // 8003FBC0: addi    r11, r29, 304
    ctx->gpr[11] = ctx->gpr[29] + (u32)(s32)(304);

label_8003FBC4:
    ctx->pc = 0x8003FBC4u;
    // 8003FBC4: stwx    r5, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003FBC8:
    // 8003FBC8: addi    r10, r29, 368
    ctx->gpr[10] = ctx->gpr[29] + (u32)(s32)(368);

label_8003FBCC:
    // 8003FBCC: addi    r7, r29, 1364
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(1364);

label_8003FBD0:
    ctx->pc = 0x8003FBD0u;
    // 8003FBD0: lwzx    r5, r12, r6
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[6];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003FBD4:
    // 8003FBD4: rlwimi r5, r4, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FBD8:
    // 8003FBD8: rlwinm r25, r26, 2, 0, 29
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[26], 2u) & 0xFFFFFFFCu;
    }

label_8003FBDC:
    ctx->pc = 0x8003FBDCu;
    // 8003FBDC: stwx    r5, r12, r6
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003FBE0:
    // 8003FBE0: addi    r31, r31, 2
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(2);

label_8003FBE4:
    // 8003FBE4: addi    r27, r27, 2
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(2);

label_8003FBE8:
    ctx->pc = 0x8003FBE8u;
    // 8003FBE8: lwzx    r4, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003FBEC:
    // 8003FBEC: rlwimi r4, r0, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 24u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FBF0:
    // 8003FBF0: addi    r6, r25, 432
    ctx->gpr[6] = ctx->gpr[25] + (u32)(s32)(432);

label_8003FBF4:
    ctx->pc = 0x8003FBF4u;
    // 8003FBF4: stwx    r4, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003FBF8:
    // 8003FBF8: addi    r9, r25, 256
    ctx->gpr[9] = ctx->gpr[25] + (u32)(s32)(256);

label_8003FBFC:
    // 8003FBFC: addi    r4, r26, 246
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(246);

label_8003FC00:
    ctx->pc = 0x8003FC00u;
    // 8003FC00: stwx    r28, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FC04:
    // 8003FC04: addi    r0, r26, 40
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(40);

label_8003FC08:
    // 8003FC08: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_8003FC0C:
    ctx->pc = 0x8003FC0Cu;
    // 8003FC0C: stwx    r28, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FC10:
    // 8003FC10: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8003FC14:
    ctx->pc = 0x8003FC14u;
    // 8003FC14: stwx    r28, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FC18:
    ctx->pc = 0x8003FC18u;
    // 8003FC18: stwx    r8, r12, r7
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003FC1C:
    ctx->pc = 0x8003FC1Cu;
    // 8003FC1C: lwzx    r5, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003FC20:
    // 8003FC20: rlwimi r5, r31, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[31], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FC24:
    // 8003FC24: addi    r31, r31, 2
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(2);

label_8003FC28:
    ctx->pc = 0x8003FC28u;
    // 8003FC28: stwx    r5, r12, r11
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[11];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003FC2C:
    ctx->pc = 0x8003FC2Cu;
    // 8003FC2C: lwzx    r5, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003FC30:
    // 8003FC30: rlwimi r5, r27, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[27], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FC34:
    // 8003FC34: addi    r27, r27, 2
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(2);

label_8003FC38:
    ctx->pc = 0x8003FC38u;
    // 8003FC38: stwx    r5, r12, r10
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[10];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003FC3C:
    ctx->pc = 0x8003FC3Cu;
    // 8003FC3C: lwzx    r5, r12, r6
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[6];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003FC40:
    // 8003FC40: rlwimi r5, r4, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FC44:
    ctx->pc = 0x8003FC44u;
    // 8003FC44: stwx    r5, r12, r6
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003FC48:
    ctx->pc = 0x8003FC48u;
    // 8003FC48: lwzx    r4, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003FC4C:
    // 8003FC4C: rlwimi r4, r0, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 24u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FC50:
    ctx->pc = 0x8003FC50u;
    // 8003FC50: stwx    r4, r12, r9
    {
        u32 ea = ctx->gpr[12] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003FC54:
    // 8003FC54: bc    16, 0, 0x8003FB60
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003FB60u;
                return;
            }
            goto label_8003FB60;
        }
    }

label_8003FC58:
    ctx->pc = 0x8003FC58u;
    ctx->downcount -= 10;
    // 8003FC58: stw     r28, 288(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FC5C:
    ctx->pc = 0x8003FC5Cu;
    // 8003FC5C: rlwinm r4, r28, 1, 0, 30
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[28], 1u) & 0xFFFFFFFEu;
    }

label_8003FC60:
    ctx->pc = 0x8003FC60u;
    // 8003FC60: li      r0, 39
    ctx->gpr[0] = (u32)(s32)(39);

label_8003FC64:
    ctx->pc = 0x8003FC64u;
    // 8003FC64: lwz     r3, 288(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003FC68:
    ctx->pc = 0x8003FC68u;
    // 8003FC68: rlwimi r3, r0, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 24u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FC6C:
    ctx->pc = 0x8003FC6Cu;
    // 8003FC6C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8003FC70:
    ctx->pc = 0x8003FC70u;
    // 8003FC70: stw     r3, 288(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8003FC74:
    ctx->pc = 0x8003FC74u;
    // 8003FC74: addi    r6, r4, 48
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(48);

label_8003FC78:
    ctx->pc = 0x8003FC78u;
    // 8003FC78: addi    r7, r4, 49
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(49);

label_8003FC7C:
    ctx->pc = 0x8003FC7Cu;
    // 8003FC7C: b       0x8003FC80
    {
            goto label_8003FC80;
    }

label_8003FC80:
    ctx->pc = 0x8003FC80u;
    ctx->downcount -= 4;
    // 8003FC80: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8003FC84:
    ctx->pc = 0x8003FC84u;
    // 8003FC84: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8003FC88:
    ctx->pc = 0x8003FC88u;
    // 8003FC88: b       0x8003FC8C
    {
            goto label_8003FC8C;
    }

label_8003FC8C:
    ctx->pc = 0x8003FC8Cu;
    ctx->downcount -= 1;
    // 8003FC8C: b       0x8003FC90
    {
            goto label_8003FC90;
    }

label_8003FC90:
    loop_8003FC90(ctx);
    if (ctx->pc == 0x8003FD68u) goto label_8003FD68;
    return;
label_8003FC94:
    // 8003FC94: addi    r4, r5, 184
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(184);

label_8003FC98:
    // 8003FC98: addi    r3, r5, 216
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(216);

label_8003FC9C:
    ctx->pc = 0x8003FC9Cu;
    // 8003FC9C: stwx    r28, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FCA0:
    // 8003FCA0: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_8003FCA4:
    ctx->pc = 0x8003FCA4u;
    // 8003FCA4: stwx    r28, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FCA8:
    ctx->pc = 0x8003FCA8u;
    // 8003FCA8: lwzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FCAC:
    // 8003FCAC: rlwimi r0, r6, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FCB0:
    // 8003FCB0: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_8003FCB4:
    ctx->pc = 0x8003FCB4u;
    // 8003FCB4: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FCB8:
    // 8003FCB8: addi    r4, r5, 184
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(184);

label_8003FCBC:
    ctx->pc = 0x8003FCBCu;
    // 8003FCBC: lwzx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FCC0:
    // 8003FCC0: rlwimi r0, r7, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FCC4:
    // 8003FCC4: addi    r7, r7, 2
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2);

label_8003FCC8:
    ctx->pc = 0x8003FCC8u;
    // 8003FCC8: stwx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FCCC:
    // 8003FCCC: addi    r3, r5, 216
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(216);

label_8003FCD0:
    // 8003FCD0: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_8003FCD4:
    ctx->pc = 0x8003FCD4u;
    // 8003FCD4: stwx    r28, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FCD8:
    ctx->pc = 0x8003FCD8u;
    // 8003FCD8: stwx    r28, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FCDC:
    ctx->pc = 0x8003FCDCu;
    // 8003FCDC: lwzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FCE0:
    // 8003FCE0: rlwimi r0, r6, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FCE4:
    // 8003FCE4: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_8003FCE8:
    ctx->pc = 0x8003FCE8u;
    // 8003FCE8: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FCEC:
    // 8003FCEC: addi    r4, r5, 184
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(184);

label_8003FCF0:
    ctx->pc = 0x8003FCF0u;
    // 8003FCF0: lwzx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FCF4:
    // 8003FCF4: rlwimi r0, r7, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FCF8:
    // 8003FCF8: addi    r7, r7, 2
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2);

label_8003FCFC:
    ctx->pc = 0x8003FCFCu;
    // 8003FCFC: stwx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FD00:
    // 8003FD00: addi    r3, r5, 216
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(216);

label_8003FD04:
    // 8003FD04: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_8003FD08:
    ctx->pc = 0x8003FD08u;
    // 8003FD08: stwx    r28, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FD0C:
    ctx->pc = 0x8003FD0Cu;
    // 8003FD0C: stwx    r28, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FD10:
    ctx->pc = 0x8003FD10u;
    // 8003FD10: lwzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FD14:
    // 8003FD14: rlwimi r0, r6, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FD18:
    // 8003FD18: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_8003FD1C:
    ctx->pc = 0x8003FD1Cu;
    // 8003FD1C: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FD20:
    // 8003FD20: addi    r4, r5, 184
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(184);

label_8003FD24:
    ctx->pc = 0x8003FD24u;
    // 8003FD24: lwzx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FD28:
    // 8003FD28: rlwimi r0, r7, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FD2C:
    // 8003FD2C: addi    r7, r7, 2
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2);

label_8003FD30:
    ctx->pc = 0x8003FD30u;
    // 8003FD30: stwx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FD34:
    // 8003FD34: addi    r3, r5, 216
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(216);

label_8003FD38:
    // 8003FD38: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_8003FD3C:
    ctx->pc = 0x8003FD3Cu;
    // 8003FD3C: stwx    r28, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FD40:
    ctx->pc = 0x8003FD40u;
    // 8003FD40: stwx    r28, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8003FD44:
    ctx->pc = 0x8003FD44u;
    // 8003FD44: lwzx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FD48:
    // 8003FD48: rlwimi r0, r6, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FD4C:
    // 8003FD4C: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_8003FD50:
    ctx->pc = 0x8003FD50u;
    // 8003FD50: stwx    r0, r8, r4
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FD54:
    ctx->pc = 0x8003FD54u;
    // 8003FD54: lwzx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FD58:
    // 8003FD58: rlwimi r0, r7, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 24u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FD5C:
    // 8003FD5C: addi    r7, r7, 2
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(2);

label_8003FD60:
    ctx->pc = 0x8003FD60u;
    // 8003FD60: stwx    r0, r8, r3
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FD64:
    // 8003FD64: bc    16, 0, 0x8003FC90
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003FC90u;
                return;
            }
            goto label_8003FC90;
        }
    }

label_8003FD68:
    ctx->pc = 0x8003FD68u;
    ctx->downcount -= 45;
    // 8003FD68: lwz     r3, 248(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8003FD6C:
    ctx->pc = 0x8003FD6Cu;
    // 8003FD6C: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_8003FD70:
    ctx->pc = 0x8003FD70u;
    // 8003FD70: rlwimi r3, r0, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 24u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FD74:
    ctx->pc = 0x8003FD74u;
    // 8003FD74: stw     r3, 248(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(248);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8003FD78:
    ctx->pc = 0x8003FD78u;
    // 8003FD78: lis     r3, 4194
    ctx->gpr[3] = ((u32)(s32)(4194) << 16);

label_8003FD7C:
    ctx->pc = 0x8003FD7Cu;
    // 8003FD7C: li      r0, 33
    ctx->gpr[0] = (u32)(s32)(33);

label_8003FD80:
    ctx->pc = 0x8003FD80u;
    // 8003FD80: lwz     r4, 252(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003FD84:
    ctx->pc = 0x8003FD84u;
    // 8003FD84: rlwimi r4, r0, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 24u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FD88:
    ctx->pc = 0x8003FD88u;
    // 8003FD88: li      r0, 65
    ctx->gpr[0] = (u32)(s32)(65);

label_8003FD8C:
    ctx->pc = 0x8003FD8Cu;
    // 8003FD8C: stw     r4, 252(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003FD90:
    ctx->pc = 0x8003FD90u;
    // 8003FD90: li      r6, 66
    ctx->gpr[6] = (u32)(s32)(66);

label_8003FD94:
    ctx->pc = 0x8003FD94u;
    // 8003FD94: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8003FD98:
    ctx->pc = 0x8003FD98u;
    // 8003FD98: lwz     r4, 464(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8003FD9C:
    ctx->pc = 0x8003FD9Cu;
    // 8003FD9C: rlwimi r4, r0, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 24u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FDA0:
    ctx->pc = 0x8003FDA0u;
    // 8003FDA0: li      r0, 67
    ctx->gpr[0] = (u32)(s32)(67);

label_8003FDA4:
    ctx->pc = 0x8003FDA4u;
    // 8003FDA4: stw     r4, 464(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(464);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003FDA8:
    ctx->pc = 0x8003FDA8u;
    // 8003FDA8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8003FDAC:
    ctx->pc = 0x8003FDACu;
    // 8003FDAC: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_8003FDB0:
    ctx->pc = 0x8003FDB0u;
    // 8003FDB0: lwz     r7, 468(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(468);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8003FDB4:
    ctx->pc = 0x8003FDB4u;
    // 8003FDB4: rlwimi r7, r6, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 24u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FDB8:
    ctx->pc = 0x8003FDB8u;
    // 8003FDB8: addi    r3, r3, 19923
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19923);

label_8003FDBC:
    ctx->pc = 0x8003FDBCu;
    // 8003FDBC: stw     r7, 468(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8003FDC0:
    ctx->pc = 0x8003FDC0u;
    // 8003FDC0: lwz     r6, 472(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(472);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8003FDC4:
    ctx->pc = 0x8003FDC4u;
    // 8003FDC4: rlwimi r6, r5, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 24u);
        ctx->gpr[6] = (ctx->gpr[6] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FDC8:
    ctx->pc = 0x8003FDC8u;
    // 8003FDC8: stw     r6, 472(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8003FDCC:
    ctx->pc = 0x8003FDCCu;
    // 8003FDCC: lwz     r5, 476(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(476);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003FDD0:
    ctx->pc = 0x8003FDD0u;
    // 8003FDD0: rlwimi r5, r0, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 24u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FDD4:
    ctx->pc = 0x8003FDD4u;
    // 8003FDD4: stw     r5, 476(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(476);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003FDD8:
    ctx->pc = 0x8003FDD8u;
    // 8003FDD8: lwz     r0, 508(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(508);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FDDC:
    ctx->pc = 0x8003FDDCu;
    // 8003FDDC: rlwimi r0, r29, 7, 23, 24
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[29], 7u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000180u) | (rot & 0x00000180u);
    }

label_8003FDE0:
    ctx->pc = 0x8003FDE0u;
    // 8003FDE0: stw     r0, 508(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(508);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FDE4:
    ctx->pc = 0x8003FDE4u;
    // 8003FDE4: lfs     f0, -31324(r2)
    if (!ppc_fp_available_inline(ctx, 0x8003FDE4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8003FDE8:
    ctx->pc = 0x8003FDE8u;
    // 8003FDE8: stfs     f0, 1296(r8)
    if (!ppc_fp_available_inline(ctx, 0x8003FDE8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8003FDEC:
    ctx->pc = 0x8003FDECu;
    // 8003FDEC: lfs     f0, -31320(r2)
    if (!ppc_fp_available_inline(ctx, 0x8003FDECu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8003FDF0:
    ctx->pc = 0x8003FDF0u;
    // 8003FDF0: stfs     f0, 1292(r8)
    if (!ppc_fp_available_inline(ctx, 0x8003FDF0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1292);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8003FDF4:
    ctx->pc = 0x8003FDF4u;
    // 8003FDF4: stw     r29, 1452(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1452);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8003FDF8:
    ctx->pc = 0x8003FDF8u;
    // 8003FDF8: stb     r29, 1451(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1451);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_8003FDFC:
    ctx->pc = 0x8003FDFCu;
    // 8003FDFC: lwz     r0, 248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FE00:
    ctx->pc = 0x8003FE00u;
    // 8003FE00: mulhwu   r0, r3, r0
    {
        u64 product = (u64)ctx->gpr[3] * (u64)ctx->gpr[0];
        ctx->gpr[0] = (u32)(product >> 32);
    }

label_8003FE04:
    ctx->pc = 0x8003FE04u;
    // 8003FE04: rlwinm r25, r0, 27, 5, 31
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_8003FE08:
    ctx->pc = 0x8003FE08u;
    // 8003FE08: bl      0x80045768
    {
            ctx->lr = 0x8003FE0Cu;
            ctx->pc = 0x80045768u;
            return;
    }

label_8003FE0C:
    ctx->pc = 0x8003FE0Cu;
    ctx->downcount -= 8;
    // 8003FE0C: rlwinm r0, r25, 21, 11, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 21u) & 0x001FFFFFu;
    }

label_8003FE10:
    ctx->pc = 0x8003FE10u;
    // 8003FE10: oris    r0, r0, 0x6900
    ctx->gpr[0] = ctx->gpr[0] | (0x6900u << 16);

label_8003FE14:
    ctx->pc = 0x8003FE14u;
    // 8003FE14: li      r28, 97
    ctx->gpr[28] = (u32)(s32)(97);

label_8003FE18:
    ctx->pc = 0x8003FE18u;
    // 8003FE18: lis     r31, -13311
    ctx->gpr[31] = ((u32)(s32)(-13311) << 16);

label_8003FE1C:
    ctx->pc = 0x8003FE1Cu;
    // 8003FE1C: stb     r28, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_8003FE20:
    ctx->pc = 0x8003FE20u;
    // 8003FE20: ori     r0, r0, 0x0400
    ctx->gpr[0] = ctx->gpr[0] | 0x0400u;

label_8003FE24:
    ctx->pc = 0x8003FE24u;
    // 8003FE24: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FE28:
    ctx->pc = 0x8003FE28u;
    // 8003FE28: bl      0x80045768
    {
            ctx->lr = 0x8003FE2Cu;
            ctx->pc = 0x80045768u;
            return;
    }

label_8003FE2C:
    ctx->pc = 0x8003FE2Cu;
    ctx->downcount -= 14;
    // 8003FE2C: lis     r3, 15888
    ctx->gpr[3] = ((u32)(s32)(15888) << 16);

label_8003FE30:
    ctx->pc = 0x8003FE30u;
    // 8003FE30: stb     r28, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_8003FE34:
    ctx->pc = 0x8003FE34u;
    // 8003FE34: addi    r0, r3, -31775
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31775);

label_8003FE38:
    ctx->pc = 0x8003FE38u;
    // 8003FE38: mulhwu   r0, r0, r25
    {
        u64 product = (u64)ctx->gpr[0] * (u64)ctx->gpr[25];
        ctx->gpr[0] = (u32)(product >> 32);
    }

label_8003FE3C:
    ctx->pc = 0x8003FE3Cu;
    // 8003FE3C: rlwinm r0, r0, 22, 10, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 22u) & 0x003FFFFFu;
    }

label_8003FE40:
    ctx->pc = 0x8003FE40u;
    // 8003FE40: oris    r0, r0, 0x4600
    ctx->gpr[0] = ctx->gpr[0] | (0x4600u << 16);

label_8003FE44:
    ctx->pc = 0x8003FE44u;
    // 8003FE44: ori     r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | 0x0200u;

label_8003FE48:
    ctx->pc = 0x8003FE48u;
    // 8003FE48: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FE4C:
    ctx->pc = 0x8003FE4Cu;
    // 8003FE4C: rlwinm r9, r29, 2, 0, 29
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_8003FE50:
    ctx->pc = 0x8003FE50u;
    // 8003FE50: b       0x8003FE54
    {
            goto label_8003FE54;
    }

label_8003FE54:
    ctx->pc = 0x8003FE54u;
    ctx->downcount -= 6;
    // 8003FE54: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8003FE58:
    ctx->pc = 0x8003FE58u;
    // 8003FE58: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8003FE5C:
    ctx->pc = 0x8003FE5Cu;
    // 8003FE5C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8003FE60:
    ctx->pc = 0x8003FE60u;
    // 8003FE60: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_8003FE64:
    ctx->pc = 0x8003FE64u;
    // 8003FE64: b       0x8003FE68
    {
            goto label_8003FE68;
    }

label_8003FE68:
    ctx->pc = 0x8003FE68u;
    ctx->downcount -= 1;
    // 8003FE68: b       0x8003FE6C
    {
            goto label_8003FE6C;
    }

label_8003FE6C:
    loop_8003FE6C(ctx);
    if (ctx->pc == 0x8003FF64u) goto label_8003FF64;
    return;
label_8003FE70:
    // 8003FE70: addi    r7, r9, 28
    ctx->gpr[7] = ctx->gpr[9] + (u32)(s32)(28);

label_8003FE74:
    // 8003FE74: addi    r5, r9, 60
    ctx->gpr[5] = ctx->gpr[9] + (u32)(s32)(60);

label_8003FE78:
    ctx->pc = 0x8003FE78u;
    // 8003FE78: lwzx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FE7C:
    // 8003FE7C: rlwimi r0, r6, 30, 1, 1
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 30u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x40000000u) | (rot & 0x40000000u);
    }

label_8003FE80:
    // 8003FE80: ori     r3, r29, 0x0080
    ctx->gpr[3] = ctx->gpr[29] | 0x0080u;

label_8003FE84:
    ctx->pc = 0x8003FE84u;
    // 8003FE84: stwx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FE88:
    // 8003FE88: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

label_8003FE8C:
    // 8003FE8C: addi    r7, r9, 28
    ctx->gpr[7] = ctx->gpr[9] + (u32)(s32)(28);

label_8003FE90:
    ctx->pc = 0x8003FE90u;
    // 8003FE90: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FE94:
    // 8003FE94: rlwimi r0, r6, 31, 0, 0
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 31u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x80000000u) | (rot & 0x80000000u);
    }

label_8003FE98:
    // 8003FE98: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8003FE9C:
    ctx->pc = 0x8003FE9Cu;
    // 8003FE9C: stwx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FEA0:
    ctx->pc = 0x8003FEA0u;
    // 8003FEA0: stb     r4, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8003FEA4:
    ctx->pc = 0x8003FEA4u;
    // 8003FEA4: stb     r3, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8003FEA8:
    // 8003FEA8: ori     r3, r29, 0x0080
    ctx->gpr[3] = ctx->gpr[29] | 0x0080u;

label_8003FEAC:
    // 8003FEAC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8003FEB0:
    ctx->pc = 0x8003FEB0u;
    // 8003FEB0: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FEB4:
    // 8003FEB4: addi    r5, r9, 60
    ctx->gpr[5] = ctx->gpr[9] + (u32)(s32)(60);

label_8003FEB8:
    // 8003FEB8: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

label_8003FEBC:
    ctx->pc = 0x8003FEBCu;
    // 8003FEBC: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FEC0:
    ctx->pc = 0x8003FEC0u;
    // 8003FEC0: lwzx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FEC4:
    // 8003FEC4: rlwimi r0, r6, 30, 1, 1
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 30u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x40000000u) | (rot & 0x40000000u);
    }

label_8003FEC8:
    ctx->pc = 0x8003FEC8u;
    // 8003FEC8: stwx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FECC:
    // 8003FECC: addi    r7, r9, 28
    ctx->gpr[7] = ctx->gpr[9] + (u32)(s32)(28);

label_8003FED0:
    ctx->pc = 0x8003FED0u;
    // 8003FED0: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FED4:
    // 8003FED4: rlwimi r0, r6, 31, 0, 0
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 31u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x80000000u) | (rot & 0x80000000u);
    }

label_8003FED8:
    ctx->pc = 0x8003FED8u;
    // 8003FED8: stwx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FEDC:
    ctx->pc = 0x8003FEDCu;
    // 8003FEDC: stb     r4, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8003FEE0:
    ctx->pc = 0x8003FEE0u;
    // 8003FEE0: stb     r3, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8003FEE4:
    // 8003FEE4: ori     r3, r29, 0x0080
    ctx->gpr[3] = ctx->gpr[29] | 0x0080u;

label_8003FEE8:
    // 8003FEE8: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8003FEEC:
    ctx->pc = 0x8003FEECu;
    // 8003FEEC: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FEF0:
    // 8003FEF0: addi    r5, r9, 60
    ctx->gpr[5] = ctx->gpr[9] + (u32)(s32)(60);

label_8003FEF4:
    // 8003FEF4: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

label_8003FEF8:
    ctx->pc = 0x8003FEF8u;
    // 8003FEF8: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FEFC:
    ctx->pc = 0x8003FEFCu;
    // 8003FEFC: lwzx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FF00:
    // 8003FF00: rlwimi r0, r6, 30, 1, 1
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 30u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x40000000u) | (rot & 0x40000000u);
    }

label_8003FF04:
    ctx->pc = 0x8003FF04u;
    // 8003FF04: stwx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FF08:
    // 8003FF08: addi    r7, r9, 28
    ctx->gpr[7] = ctx->gpr[9] + (u32)(s32)(28);

label_8003FF0C:
    ctx->pc = 0x8003FF0Cu;
    // 8003FF0C: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FF10:
    // 8003FF10: rlwimi r0, r6, 31, 0, 0
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 31u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x80000000u) | (rot & 0x80000000u);
    }

label_8003FF14:
    ctx->pc = 0x8003FF14u;
    // 8003FF14: stwx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FF18:
    ctx->pc = 0x8003FF18u;
    // 8003FF18: stb     r4, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8003FF1C:
    ctx->pc = 0x8003FF1Cu;
    // 8003FF1C: stb     r3, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8003FF20:
    // 8003FF20: ori     r3, r29, 0x0080
    ctx->gpr[3] = ctx->gpr[29] | 0x0080u;

label_8003FF24:
    // 8003FF24: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8003FF28:
    ctx->pc = 0x8003FF28u;
    // 8003FF28: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FF2C:
    // 8003FF2C: addi    r5, r9, 60
    ctx->gpr[5] = ctx->gpr[9] + (u32)(s32)(60);

label_8003FF30:
    // 8003FF30: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

label_8003FF34:
    ctx->pc = 0x8003FF34u;
    // 8003FF34: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FF38:
    ctx->pc = 0x8003FF38u;
    // 8003FF38: lwzx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FF3C:
    // 8003FF3C: rlwimi r0, r6, 30, 1, 1
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 30u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x40000000u) | (rot & 0x40000000u);
    }

label_8003FF40:
    ctx->pc = 0x8003FF40u;
    // 8003FF40: stwx    r0, r8, r7
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[7];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FF44:
    ctx->pc = 0x8003FF44u;
    // 8003FF44: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FF48:
    // 8003FF48: rlwimi r0, r6, 31, 0, 0
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 31u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x80000000u) | (rot & 0x80000000u);
    }

label_8003FF4C:
    ctx->pc = 0x8003FF4Cu;
    // 8003FF4C: stwx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FF50:
    ctx->pc = 0x8003FF50u;
    // 8003FF50: stb     r4, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8003FF54:
    ctx->pc = 0x8003FF54u;
    // 8003FF54: stb     r3, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8003FF58:
    ctx->pc = 0x8003FF58u;
    // 8003FF58: lwzx    r0, r8, r5
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003FF5C:
    ctx->pc = 0x8003FF5Cu;
    // 8003FF5C: stw     r0, -32768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FF60:
    // 8003FF60: bc    16, 0, 0x8003FE6C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003FE6Cu;
                return;
            }
            goto label_8003FE6C;
        }
    }

label_8003FF64:
    ctx->pc = 0x8003FF64u;
    ctx->downcount -= 39;
    // 8003FF64: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8003FF68:
    ctx->pc = 0x8003FF68u;
    // 8003FF68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003FF6C:
    ctx->pc = 0x8003FF6Cu;
    // 8003FF6C: rlwimi r0, r5, 0, 31, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000001u) | (rot & 0x00000001u);
    }

label_8003FF70:
    ctx->pc = 0x8003FF70u;
    // 8003FF70: or   r8, r0, r0
    {
        ctx->gpr[8] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8003FF74:
    ctx->pc = 0x8003FF74u;
    // 8003FF74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8003FF78:
    ctx->pc = 0x8003FF78u;
    // 8003FF78: rlwimi r0, r5, 0, 31, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000001u) | (rot & 0x00000001u);
    }

label_8003FF7C:
    ctx->pc = 0x8003FF7Cu;
    // 8003FF7C: or   r9, r0, r0
    {
        ctx->gpr[9] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8003FF80:
    ctx->pc = 0x8003FF80u;
    // 8003FF80: rlwimi r8, r5, 1, 30, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 1u);
        ctx->gpr[8] = (ctx->gpr[8] & ~0x00000002u) | (rot & 0x00000002u);
    }

label_8003FF84:
    ctx->pc = 0x8003FF84u;
    // 8003FF84: rlwimi r8, r5, 2, 29, 29
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 2u);
        ctx->gpr[8] = (ctx->gpr[8] & ~0x00000004u) | (rot & 0x00000004u);
    }

label_8003FF88:
    ctx->pc = 0x8003FF88u;
    // 8003FF88: rlwimi r8, r5, 3, 28, 28
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 3u);
        ctx->gpr[8] = (ctx->gpr[8] & ~0x00000008u) | (rot & 0x00000008u);
    }

label_8003FF8C:
    ctx->pc = 0x8003FF8Cu;
    // 8003FF8C: rlwimi r8, r5, 4, 27, 27
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 4u);
        ctx->gpr[8] = (ctx->gpr[8] & ~0x00000010u) | (rot & 0x00000010u);
    }

label_8003FF90:
    ctx->pc = 0x8003FF90u;
    // 8003FF90: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8003FF94:
    ctx->pc = 0x8003FF94u;
    // 8003FF94: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_8003FF98:
    ctx->pc = 0x8003FF98u;
    // 8003FF98: lis     r6, -13311
    ctx->gpr[6] = ((u32)(s32)(-13311) << 16);

label_8003FF9C:
    ctx->pc = 0x8003FF9Cu;
    // 8003FF9C: rlwimi r9, r5, 1, 30, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 1u);
        ctx->gpr[9] = (ctx->gpr[9] & ~0x00000002u) | (rot & 0x00000002u);
    }

label_8003FFA0:
    ctx->pc = 0x8003FFA0u;
    // 8003FFA0: stb     r7, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_8003FFA4:
    ctx->pc = 0x8003FFA4u;
    // 8003FFA4: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_8003FFA8:
    ctx->pc = 0x8003FFA8u;
    // 8003FFA8: stw     r0, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003FFAC:
    ctx->pc = 0x8003FFACu;
    // 8003FFAC: rlwimi r8, r5, 5, 26, 26
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 5u);
        ctx->gpr[8] = (ctx->gpr[8] & ~0x00000020u) | (rot & 0x00000020u);
    }

label_8003FFB0:
    ctx->pc = 0x8003FFB0u;
    // 8003FFB0: rlwimi r9, r5, 2, 29, 29
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 2u);
        ctx->gpr[9] = (ctx->gpr[9] & ~0x00000004u) | (rot & 0x00000004u);
    }

label_8003FFB4:
    ctx->pc = 0x8003FFB4u;
    // 8003FFB4: stw     r8, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8003FFB8:
    ctx->pc = 0x8003FFB8u;
    // 8003FFB8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8003FFBC:
    ctx->pc = 0x8003FFBCu;
    // 8003FFBC: li      r4, 4114
    ctx->gpr[4] = (u32)(s32)(4114);

label_8003FFC0:
    ctx->pc = 0x8003FFC0u;
    // 8003FFC0: stb     r7, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_8003FFC4:
    ctx->pc = 0x8003FFC4u;
    // 8003FFC4: rlwimi r10, r5, 0, 31, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[10] = (ctx->gpr[10] & ~0x00000001u) | (rot & 0x00000001u);
    }

label_8003FFC8:
    ctx->pc = 0x8003FFC8u;
    // 8003FFC8: rlwimi r9, r5, 3, 28, 28
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 3u);
        ctx->gpr[9] = (ctx->gpr[9] & ~0x00000008u) | (rot & 0x00000008u);
    }

label_8003FFCC:
    ctx->pc = 0x8003FFCCu;
    // 8003FFCC: stw     r4, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8003FFD0:
    ctx->pc = 0x8003FFD0u;
    // 8003FFD0: li      r0, 88
    ctx->gpr[0] = (u32)(s32)(88);

label_8003FFD4:
    ctx->pc = 0x8003FFD4u;
    // 8003FFD4: li      r5, 97
    ctx->gpr[5] = (u32)(s32)(97);

label_8003FFD8:
    ctx->pc = 0x8003FFD8u;
    // 8003FFD8: stw     r10, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8003FFDC:
    ctx->pc = 0x8003FFDCu;
    // 8003FFDC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8003FFE0:
    ctx->pc = 0x8003FFE0u;
    // 8003FFE0: rlwimi r9, r0, 24, 0, 7
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 24u);
        ctx->gpr[9] = (ctx->gpr[9] & ~0xFF000000u) | (rot & 0xFF000000u);
    }

label_8003FFE4:
    ctx->pc = 0x8003FFE4u;
    // 8003FFE4: stb     r5, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_8003FFE8:
    ctx->pc = 0x8003FFE8u;
    // 8003FFE8: rlwinm r4, r31, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_8003FFEC:
    ctx->pc = 0x8003FFECu;
    // 8003FFEC: addi    r0, r3, 26252
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(26252);

label_8003FFF0:
    ctx->pc = 0x8003FFF0u;
    // 8003FFF0: stw     r9, -32768(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8003FFF4:
    ctx->pc = 0x8003FFF4u;
    // 8003FFF4: add   r27, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_8003FFF8:
    ctx->pc = 0x8003FFF8u;
    // 8003FFF8: rlwinm r28, r31, 4, 0, 27
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_8003FFFC:
    ctx->pc = 0x8003FFFCu;
    // 8003FFFC: b       0x80040000
    {
            goto label_80040000;
    }

label_80040000:
    ctx->pc = 0x80040000u;
    ctx->downcount -= 1;
    // 80040000: b       0x80040004
    {
            goto label_80040004;
    }

label_80040004:
    ctx->pc = 0x80040004u;
    ctx->downcount -= 1;
    // 80040004: b       0x80040008
    {
            goto label_80040008;
    }

label_80040008:
    ctx->pc = 0x80040008u;
    ctx->downcount -= 9;
    // 80040008: lwz     r0, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004000C:
    // 8004000C: addi    r3, r28, 520
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(520);

label_80040010:
    ctx->pc = 0x80040010u;
    // 80040010: lwz     r5, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80040014:
    // 80040014: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040018:
    ctx->pc = 0x80040018u;
    // 80040018: lwz     r7, 32(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8004001C:
    // 8004001C: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80040020:
    // 80040020: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80040024:
    // 80040024: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80040028:
    // 80040028: bl      0x80044A9C
    {
            ctx->lr = 0x8004002Cu;
            ctx->pc = 0x80044A9Cu;
            return;
    }

label_8004002C:
    ctx->pc = 0x8004002Cu;
    ctx->downcount -= 9;
    // 8004002C: lwz     r0, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040030:
    // 80040030: addi    r3, r28, 648
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(648);

label_80040034:
    ctx->pc = 0x80040034u;
    // 80040034: lwz     r5, 64(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80040038:
    // 80040038: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004003C:
    ctx->pc = 0x8004003Cu;
    // 8004003C: lwz     r7, 96(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(96);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80040040:
    // 80040040: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80040044:
    // 80040044: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80040048:
    // 80040048: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8004004C:
    // 8004004C: bl      0x80044A9C
    {
            ctx->lr = 0x80040050u;
            ctx->pc = 0x80044A9Cu;
            return;
    }

label_80040050:
    ctx->pc = 0x80040050u;
    ctx->downcount -= 9;
    // 80040050: lwz     r0, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040054:
    // 80040054: addi    r3, r28, 776
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(776);

label_80040058:
    ctx->pc = 0x80040058u;
    // 80040058: lwz     r5, 128(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(128);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8004005C:
    // 8004005C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80040060:
    ctx->pc = 0x80040060u;
    // 80040060: lwz     r7, 160(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(160);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80040064:
    // 80040064: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80040068:
    // 80040068: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8004006C:
    // 8004006C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80040070:
    // 80040070: bl      0x80044A9C
    {
            ctx->lr = 0x80040074u;
            ctx->pc = 0x80044A9Cu;
            return;
    }

label_80040074:
    ctx->downcount -= 5;
    // 80040074: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_80040078:
    // 80040078: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_8004007C:
    // 8004007C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80040080:
    // 80040080: cmplwi  r31, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80040084:
    // 80040084: bc    12, 0, 0x80040008
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80040008u;
                return;
            }
            goto label_80040008;
        }
    }

label_80040088:
    ctx->pc = 0x80040088u;
    ctx->downcount -= 5;
    // 80040088: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8004008C:
    ctx->pc = 0x8004008Cu;
    // 8004008C: rlwinm r3, r25, 13, 0, 18
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[25], 13u) & 0xFFFFE000u;
    }

label_80040090:
    ctx->pc = 0x80040090u;
    // 80040090: addis   r27, r3, 12
    ctx->gpr[27] = ctx->gpr[3] + ((u32)(s32)(12) << 16);

label_80040094:
    ctx->pc = 0x80040094u;
    // 80040094: rlwinm r28, r25, 4, 0, 27
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[25], 4u) & 0xFFFFFFF0u;
    }

label_80040098:
    ctx->pc = 0x80040098u;
    // 80040098: b       0x8004009C
    {
            goto label_8004009C;
    }

label_8004009C:
    ctx->pc = 0x8004009Cu;
    ctx->downcount -= 1;
    // 8004009C: b       0x800400A0
    {
            goto label_800400A0;
    }

label_800400A0:
    ctx->pc = 0x800400A0u;
    ctx->downcount -= 1;
    // 800400A0: b       0x800400A4
    {
            goto label_800400A4;
    }

label_800400A4:
    ctx->pc = 0x800400A4u;
    ctx->downcount -= 6;
    // 800400A4: lwz     r0, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800400A8:
    // 800400A8: addi    r3, r28, 904
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(904);

label_800400AC:
    // 800400AC: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800400B0:
    // 800400B0: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800400B4:
    // 800400B4: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_800400B8:
    // 800400B8: bl      0x80044B90
    {
            ctx->lr = 0x800400BCu;
            ctx->pc = 0x80044B90u;
            return;
    }

label_800400BC:
    ctx->downcount -= 5;
    // 800400BC: addi    r27, r27, 8192
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(8192);

label_800400C0:
    // 800400C0: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_800400C4:
    // 800400C4: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_800400C8:
    // 800400C8: cmplwi  r25, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[25]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800400CC:
    // 800400CC: bc    12, 0, 0x800400A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800400A4u;
                return;
            }
            goto label_800400A4;
        }
    }

label_800400D0:
    ctx->pc = 0x800400D0u;
    ctx->downcount -= 4;
    // 800400D0: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_800400D4:
    ctx->pc = 0x800400D4u;
    // 800400D4: rlwinm r3, r25, 15, 0, 16
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[25], 15u) & 0xFFFF8000u;
    }

label_800400D8:
    ctx->pc = 0x800400D8u;
    // 800400D8: addis   r27, r3, 14
    ctx->gpr[27] = ctx->gpr[3] + ((u32)(s32)(14) << 16);

label_800400DC:
    ctx->pc = 0x800400DCu;
    // 800400DC: b       0x800400E0
    {
            goto label_800400E0;
    }

label_800400E0:
    ctx->pc = 0x800400E0u;
    ctx->downcount -= 1;
    // 800400E0: b       0x800400E4
    {
            goto label_800400E4;
    }

label_800400E4:
    ctx->pc = 0x800400E4u;
    ctx->downcount -= 1;
    // 800400E4: b       0x800400E8
    {
            goto label_800400E8;
    }

label_800400E8:
    ctx->downcount -= 8;
    // 800400E8: addi    r0, r25, 16
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(16);

label_800400EC:
    ctx->pc = 0x800400ECu;
    // 800400EC: lwz     r5, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800400F0:
    // 800400F0: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_800400F4:
    // 800400F4: addi    r3, r3, 904
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(904);

label_800400F8:
    // 800400F8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800400FC:
    // 800400FC: add   r3, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80040100:
    // 80040100: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80040104:
    // 80040104: bl      0x80044B90
    {
            ctx->lr = 0x80040108u;
            ctx->pc = 0x80044B90u;
            return;
    }

label_80040108:
    ctx->downcount -= 5;
    // 80040108: addis   r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_8004010C:
    // 8004010C: addi    r27, r27, -32768
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-32768);

label_80040110:
    // 80040110: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_80040114:
    // 80040114: cmplwi  r25, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[25]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80040118:
    // 80040118: bc    12, 0, 0x800400E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800400E8u;
                return;
            }
            goto label_800400E8;
        }
    }

label_8004011C:
    ctx->pc = 0x8004011Cu;
    ctx->downcount -= 31;
    // 8004011C: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040120:
    ctx->pc = 0x80040120u;
    // 80040120: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_80040124:
    ctx->pc = 0x80040124u;
    // 80040124: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_80040128:
    ctx->pc = 0x80040128u;
    // 80040128: sth     r12, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[12]);
    }

label_8004012C:
    ctx->pc = 0x8004012Cu;
    // 8004012C: lis     r10, -13311
    ctx->gpr[10] = ((u32)(s32)(-13311) << 16);

label_80040130:
    ctx->pc = 0x80040130u;
    // 80040130: li      r9, 32
    ctx->gpr[9] = (u32)(s32)(32);

label_80040134:
    ctx->pc = 0x80040134u;
    // 80040134: lwz     r11, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80040138:
    ctx->pc = 0x80040138u;
    // 80040138: li      r8, 16
    ctx->gpr[8] = (u32)(s32)(16);

label_8004013C:
    ctx->pc = 0x8004013Cu;
    // 8004013C: li      r7, 4102
    ctx->gpr[7] = (u32)(s32)(4102);

label_80040140:
    ctx->pc = 0x80040140u;
    // 80040140: lwz     r3, 1444(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(1444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040144:
    ctx->pc = 0x80040144u;
    // 80040144: rlwimi r3, r12, 4, 24, 27
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[12], 4u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x000000F0u) | (rot & 0x000000F0u);
    }

label_80040148:
    ctx->pc = 0x80040148u;
    // 80040148: li      r6, 97
    ctx->gpr[6] = (u32)(s32)(97);

label_8004014C:
    ctx->pc = 0x8004014Cu;
    // 8004014C: stw     r3, 1444(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(1444);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80040150:
    ctx->pc = 0x80040150u;
    // 80040150: lis     r5, 8960
    ctx->gpr[5] = ((u32)(s32)(8960) << 16);

label_80040154:
    ctx->pc = 0x80040154u;
    // 80040154: lis     r4, 9216
    ctx->gpr[4] = ((u32)(s32)(9216) << 16);

label_80040158:
    ctx->pc = 0x80040158u;
    // 80040158: stb     r0, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8004015C:
    ctx->pc = 0x8004015Cu;
    // 8004015C: lis     r0, 26368
    ctx->gpr[0] = ((u32)(s32)(26368) << 16);

label_80040160:
    ctx->pc = 0x80040160u;
    // 80040160: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040164:
    ctx->pc = 0x80040164u;
    // 80040164: stb     r9, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80040168:
    ctx->pc = 0x80040168u;
    // 80040168: lwz     r9, 1444(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(1444);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8004016C:
    ctx->pc = 0x8004016Cu;
    // 8004016C: stw     r9, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80040170:
    ctx->pc = 0x80040170u;
    // 80040170: stb     r8, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_80040174:
    ctx->pc = 0x80040174u;
    // 80040174: stw     r7, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80040178:
    ctx->pc = 0x80040178u;
    // 80040178: stw     r12, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_8004017C:
    ctx->pc = 0x8004017Cu;
    // 8004017C: stb     r6, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80040180:
    ctx->pc = 0x80040180u;
    // 80040180: stw     r5, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80040184:
    ctx->pc = 0x80040184u;
    // 80040184: stb     r6, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80040188:
    ctx->pc = 0x80040188u;
    // 80040188: stw     r4, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8004018C:
    ctx->pc = 0x8004018Cu;
    // 8004018C: stb     r6, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80040190:
    ctx->pc = 0x80040190u;
    // 80040190: stw     r0, -32768(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-32768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040194:
    ctx->pc = 0x80040194u;
    // 80040194: bl      0x80045738
    {
            ctx->lr = 0x80040198u;
            ctx->pc = 0x80045738u;
            return;
    }

label_80040198:
    ctx->pc = 0x80040198u;
    ctx->downcount -= 2;
    // 80040198: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8004019C:
    ctx->pc = 0x8004019Cu;
    // 8004019C: bl      0x80044E54
    {
            ctx->lr = 0x800401A0u;
            ctx->pc = 0x80044E54u;
            return;
    }

label_800401A0:
    ctx->pc = 0x800401A0u;
    ctx->downcount -= 1;
    // 800401A0: bl      0x800401BC
    {
            ctx->lr = 0x800401A4u;
            goto label_800401BC;
    }

label_800401A4:
    ctx->pc = 0x800401A4u;
    ctx->downcount -= 17;
    // 800401A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800401A8:
    ctx->pc = 0x800401A8u;
    // 800401A8: lmw     r25, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_800401AC:
    ctx->pc = 0x800401ACu;
    // 800401AC: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800401B0:
    ctx->pc = 0x800401B0u;
    // 800401B0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_800401B4:
    ctx->pc = 0x800401B4u;
    // 800401B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800401B8:
    ctx->pc = 0x800401B8u;
    // 800401B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_800401BC:
    ctx->pc = 0x800401BCu;
    ctx->downcount -= 15;
    // 800401BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800401C0:
    ctx->pc = 0x800401C0u;
    // 800401C0: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800401C4:
    ctx->pc = 0x800401C4u;
    // 800401C4: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800401C8:
    ctx->pc = 0x800401C8u;
    // 800401C8: stw     r31, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800401CC:
    ctx->pc = 0x800401CCu;
    // 800401CC: stw     r30, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800401D0:
    ctx->pc = 0x800401D0u;
    // 800401D0: stw     r29, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800401D4:
    ctx->pc = 0x800401D4u;
    // 800401D4: lwz     r4, -31316(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31316);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800401D8:
    ctx->pc = 0x800401D8u;
    // 800401D8: lis     r5, -32738
    ctx->gpr[5] = ((u32)(s32)(-32738) << 16);

label_800401DC:
    ctx->pc = 0x800401DCu;
    // 800401DC: lwz     r3, -31312(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800401E0:
    ctx->pc = 0x800401E0u;
    // 800401E0: addi    r31, r5, 25888
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(25888);

label_800401E4:
    ctx->pc = 0x800401E4u;
    // 800401E4: lwz     r0, -31308(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800401E8:
    ctx->pc = 0x800401E8u;
    // 800401E8: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800401EC:
    ctx->pc = 0x800401ECu;
    // 800401EC: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800401F0:
    ctx->pc = 0x800401F0u;
    // 800401F0: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800401F4:
    ctx->pc = 0x800401F4u;
    // 800401F4: bl      0x8002C9F0
    {
            ctx->lr = 0x800401F8u;
            ctx->pc = 0x8002C9F0u;
            return;
    }

label_800401F8:
    ctx->pc = 0x800401F8u;
    ctx->downcount -= 2;
    // 800401F8: cmpwi   r3, 2
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

label_800401FC:
    ctx->pc = 0x800401FCu;
    // 800401FC: bc    12, 2, 0x80040250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80040250;
        }
    }

label_80040200:
    ctx->pc = 0x80040200u;
    ctx->downcount -= 1;
    // 80040200: bc    4, 0, 0x80040214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80040214;
        }
    }

label_80040204:
    ctx->pc = 0x80040204u;
    ctx->downcount -= 2;
    // 80040204: cmpwi   r3, 0
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

label_80040208:
    ctx->pc = 0x80040208u;
    // 80040208: bc    12, 2, 0x80040220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80040220;
        }
    }

label_8004020C:
    ctx->pc = 0x8004020Cu;
    ctx->downcount -= 1;
    // 8004020C: bc    4, 0, 0x80040230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80040230;
        }
    }

label_80040210:
    ctx->pc = 0x80040210u;
    ctx->downcount -= 1;
    // 80040210: b       0x80040260
    {
            goto label_80040260;
    }

label_80040214:
    ctx->pc = 0x80040214u;
    ctx->downcount -= 2;
    // 80040214: cmpwi   r3, 5
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80040218:
    ctx->pc = 0x80040218u;
    // 80040218: bc    12, 2, 0x80040240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80040240;
        }
    }

label_8004021C:
    ctx->pc = 0x8004021Cu;
    ctx->downcount -= 1;
    // 8004021C: b       0x80040260
    {
            goto label_80040260;
    }

label_80040220:
    ctx->pc = 0x80040220u;
    ctx->downcount -= 4;
    // 80040220: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80040224:
    ctx->pc = 0x80040224u;
    // 80040224: addi    r0, r3, 26920
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(26920);

label_80040228:
    ctx->pc = 0x80040228u;
    // 80040228: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004022C:
    ctx->pc = 0x8004022Cu;
    // 8004022C: b       0x8004026C
    {
            goto label_8004026C;
    }

label_80040230:
    ctx->pc = 0x80040230u;
    ctx->downcount -= 4;
    // 80040230: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80040234:
    ctx->pc = 0x80040234u;
    // 80040234: addi    r0, r3, 27040
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(27040);

label_80040238:
    ctx->pc = 0x80040238u;
    // 80040238: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004023C:
    ctx->pc = 0x8004023Cu;
    // 8004023C: b       0x8004026C
    {
            goto label_8004026C;
    }

label_80040240:
    ctx->pc = 0x80040240u;
    ctx->downcount -= 4;
    // 80040240: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80040244:
    ctx->pc = 0x80040244u;
    // 80040244: addi    r0, r3, 27100
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(27100);

label_80040248:
    ctx->pc = 0x80040248u;
    // 80040248: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004024C:
    ctx->pc = 0x8004024Cu;
    // 8004024C: b       0x8004026C
    {
            goto label_8004026C;
    }

label_80040250:
    ctx->pc = 0x80040250u;
    ctx->downcount -= 4;
    // 80040250: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80040254:
    ctx->pc = 0x80040254u;
    // 80040254: addi    r0, r3, 26980
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(26980);

label_80040258:
    ctx->pc = 0x80040258u;
    // 80040258: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004025C:
    ctx->pc = 0x8004025Cu;
    // 8004025C: b       0x8004026C
    {
            goto label_8004026C;
    }

label_80040260:
    ctx->pc = 0x80040260u;
    ctx->downcount -= 3;
    // 80040260: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_80040264:
    ctx->pc = 0x80040264u;
    // 80040264: addi    r0, r3, 26920
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(26920);

label_80040268:
    ctx->pc = 0x80040268u;
    // 80040268: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8004026C:
    ctx->pc = 0x8004026Cu;
    ctx->downcount -= 6;
    // 8004026C: lwz     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040270:
    ctx->pc = 0x80040270u;
    // 80040270: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_80040274:
    ctx->pc = 0x80040274u;
    // 80040274: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_80040278:
    ctx->pc = 0x80040278u;
    // 80040278: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004027C:
    ctx->pc = 0x8004027Cu;
    // 8004027C: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80040280:
    ctx->pc = 0x80040280u;
    // 80040280: bl      0x800434B0
    {
            ctx->lr = 0x80040284u;
            ctx->pc = 0x800434B0u;
            return;
    }

label_80040284:
    ctx->pc = 0x80040284u;
    ctx->downcount -= 7;
    // 80040284: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040288:
    ctx->pc = 0x80040288u;
    // 80040288: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004028C:
    ctx->pc = 0x8004028Cu;
    // 8004028C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80040290:
    ctx->pc = 0x80040290u;
    // 80040290: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_80040294:
    ctx->pc = 0x80040294u;
    // 80040294: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80040298:
    ctx->pc = 0x80040298u;
    // 80040298: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_8004029C:
    ctx->pc = 0x8004029Cu;
    // 8004029C: bl      0x80042220
    {
            ctx->lr = 0x800402A0u;
            ctx->pc = 0x80042220u;
            return;
    }

label_800402A0:
    ctx->pc = 0x800402A0u;
    ctx->downcount -= 7;
    // 800402A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800402A4:
    ctx->pc = 0x800402A4u;
    // 800402A4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800402A8:
    ctx->pc = 0x800402A8u;
    // 800402A8: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_800402AC:
    ctx->pc = 0x800402ACu;
    // 800402AC: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_800402B0:
    ctx->pc = 0x800402B0u;
    // 800402B0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_800402B4:
    ctx->pc = 0x800402B4u;
    // 800402B4: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_800402B8:
    ctx->pc = 0x800402B8u;
    // 800402B8: bl      0x80042220
    {
            ctx->lr = 0x800402BCu;
            ctx->pc = 0x80042220u;
            return;
    }

label_800402BC:
    ctx->pc = 0x800402BCu;
    ctx->downcount -= 7;
    // 800402BC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_800402C0:
    ctx->pc = 0x800402C0u;
    // 800402C0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800402C4:
    ctx->pc = 0x800402C4u;
    // 800402C4: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_800402C8:
    ctx->pc = 0x800402C8u;
    // 800402C8: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_800402CC:
    ctx->pc = 0x800402CCu;
    // 800402CC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_800402D0:
    ctx->pc = 0x800402D0u;
    // 800402D0: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_800402D4:
    ctx->pc = 0x800402D4u;
    // 800402D4: bl      0x80042220
    {
            ctx->lr = 0x800402D8u;
            ctx->pc = 0x80042220u;
            return;
    }

label_800402D8:
    ctx->pc = 0x800402D8u;
    ctx->downcount -= 7;
    // 800402D8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_800402DC:
    ctx->pc = 0x800402DCu;
    // 800402DC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800402E0:
    ctx->pc = 0x800402E0u;
    // 800402E0: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_800402E4:
    ctx->pc = 0x800402E4u;
    // 800402E4: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_800402E8:
    ctx->pc = 0x800402E8u;
    // 800402E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_800402EC:
    ctx->pc = 0x800402ECu;
    // 800402EC: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_800402F0:
    ctx->pc = 0x800402F0u;
    // 800402F0: bl      0x80042220
    {
            ctx->lr = 0x800402F4u;
            ctx->pc = 0x80042220u;
            return;
    }

label_800402F4:
    ctx->pc = 0x800402F4u;
    ctx->downcount -= 7;
    // 800402F4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_800402F8:
    ctx->pc = 0x800402F8u;
    // 800402F8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800402FC:
    ctx->pc = 0x800402FCu;
    // 800402FC: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_80040300:
    ctx->pc = 0x80040300u;
    // 80040300: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_80040304:
    ctx->pc = 0x80040304u;
    // 80040304: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80040308:
    ctx->pc = 0x80040308u;
    // 80040308: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_8004030C:
    ctx->pc = 0x8004030Cu;
    // 8004030C: bl      0x80042220
    {
            ctx->lr = 0x80040310u;
            ctx->pc = 0x80042220u;
            return;
    }

label_80040310:
    ctx->pc = 0x80040310u;
    ctx->downcount -= 7;
    // 80040310: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80040314:
    ctx->pc = 0x80040314u;
    // 80040314: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80040318:
    ctx->pc = 0x80040318u;
    // 80040318: li      r5, 9
    ctx->gpr[5] = (u32)(s32)(9);

label_8004031C:
    ctx->pc = 0x8004031Cu;
    // 8004031C: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_80040320:
    ctx->pc = 0x80040320u;
    // 80040320: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80040324:
    ctx->pc = 0x80040324u;
    // 80040324: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80040328:
    ctx->pc = 0x80040328u;
    // 80040328: bl      0x80042220
    {
            ctx->lr = 0x8004032Cu;
            ctx->pc = 0x80042220u;
            return;
    }

label_8004032C:
    ctx->pc = 0x8004032Cu;
    ctx->downcount -= 7;
    // 8004032C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80040330:
    ctx->pc = 0x80040330u;
    // 80040330: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80040334:
    ctx->pc = 0x80040334u;
    // 80040334: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_80040338:
    ctx->pc = 0x80040338u;
    // 80040338: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_8004033C:
    ctx->pc = 0x8004033Cu;
    // 8004033C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80040340:
    ctx->pc = 0x80040340u;
    // 80040340: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80040344:
    ctx->pc = 0x80040344u;
    // 80040344: bl      0x80042220
    {
            ctx->lr = 0x80040348u;
            ctx->pc = 0x80042220u;
            return;
    }

label_80040348:
    ctx->pc = 0x80040348u;
    ctx->downcount -= 7;
    // 80040348: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_8004034C:
    ctx->pc = 0x8004034Cu;
    // 8004034C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80040350:
    ctx->pc = 0x80040350u;
    // 80040350: li      r5, 11
    ctx->gpr[5] = (u32)(s32)(11);

label_80040354:
    ctx->pc = 0x80040354u;
    // 80040354: li      r6, 60
    ctx->gpr[6] = (u32)(s32)(60);

label_80040358:
    ctx->pc = 0x80040358u;
    // 80040358: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8004035C:
    ctx->pc = 0x8004035Cu;
    // 8004035C: li      r8, 125
    ctx->gpr[8] = (u32)(s32)(125);

label_80040360:
    ctx->pc = 0x80040360u;
    // 80040360: bl      0x80042220
    {
            ctx->lr = 0x80040364u;
            ctx->pc = 0x80042220u;
            return;
    }

label_80040364:
    ctx->pc = 0x80040364u;
    ctx->downcount -= 2;
    // 80040364: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040368:
    ctx->pc = 0x80040368u;
    // 80040368: bl      0x800424A0
    {
            ctx->lr = 0x8004036Cu;
            ctx->pc = 0x800424A0u;
            return;
    }

label_8004036C:
    ctx->pc = 0x8004036Cu;
    ctx->downcount -= 1;
    // 8004036C: bl      0x80041BD4
    {
            ctx->lr = 0x80040370u;
            ctx->pc = 0x80041BD4u;
            return;
    }

label_80040370:
    ctx->pc = 0x80040370u;
    ctx->downcount -= 1;
    // 80040370: bl      0x80042210
    {
            ctx->lr = 0x80040374u;
            ctx->pc = 0x80042210u;
            return;
    }

label_80040374:
    ctx->pc = 0x80040374u;
    ctx->downcount -= 2;
    // 80040374: li      r29, 9
    ctx->gpr[29] = (u32)(s32)(9);

label_80040378:
    ctx->pc = 0x80040378u;
    // 80040378: b       0x8004037C
    {
            goto label_8004037C;
    }

label_8004037C:
    ctx->pc = 0x8004037Cu;
    ctx->downcount -= 1;
    // 8004037C: b       0x80040380
    {
            goto label_80040380;
    }

label_80040380:
    ctx->pc = 0x80040380u;
    ctx->downcount -= 1;
    // 80040380: b       0x80040384
    {
            goto label_80040384;
    }

label_80040384:
    ctx->pc = 0x80040384u;
    ctx->downcount -= 4;
    // 80040384: lwz     r4, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80040388:
    // 80040388: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8004038C:
    // 8004038C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80040390:
    // 80040390: bl      0x80042184
    {
            ctx->lr = 0x80040394u;
            ctx->pc = 0x80042184u;
            return;
    }

label_80040394:
    ctx->downcount -= 3;
    // 80040394: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80040398:
    // 80040398: cmplwi  r29, 0x0018
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0018u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004039C:
    // 8004039C: bc    4, 1, 0x80040384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80040384u;
                return;
            }
            goto label_80040384;
        }
    }

label_800403A0:
    ctx->pc = 0x800403A0u;
    ctx->downcount -= 2;
    // 800403A0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_800403A4:
    ctx->pc = 0x800403A4u;
    // 800403A4: b       0x800403A8
    {
            goto label_800403A8;
    }

label_800403A8:
    ctx->pc = 0x800403A8u;
    ctx->downcount -= 1;
    // 800403A8: b       0x800403AC
    {
            goto label_800403AC;
    }

label_800403AC:
    ctx->pc = 0x800403ACu;
    ctx->downcount -= 1;
    // 800403AC: b       0x800403B0
    {
            goto label_800403B0;
    }

label_800403B0:
    ctx->downcount -= 3;
    // 800403B0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_800403B4:
    // 800403B4: addi    r4, r31, 128
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(128);

label_800403B8:
    // 800403B8: bl      0x80041E68
    {
            ctx->lr = 0x800403BCu;
            ctx->pc = 0x80041E68u;
            return;
    }

label_800403BC:
    ctx->downcount -= 3;
    // 800403BC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_800403C0:
    // 800403C0: cmplwi  r29, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800403C4:
    // 800403C4: bc    12, 0, 0x800403B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800403B0u;
                return;
            }
            goto label_800403B0;
        }
    }

label_800403C8:
    ctx->pc = 0x800403C8u;
    ctx->downcount -= 3;
    // 800403C8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_800403CC:
    ctx->pc = 0x800403CCu;
    // 800403CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800403D0:
    ctx->pc = 0x800403D0u;
    // 800403D0: bl      0x80042F64
    {
            ctx->lr = 0x800403D4u;
            ctx->pc = 0x80042F64u;
            return;
    }

label_800403D4:
    ctx->pc = 0x800403D4u;
    ctx->downcount -= 3;
    // 800403D4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_800403D8:
    ctx->pc = 0x800403D8u;
    // 800403D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800403DC:
    ctx->pc = 0x800403DCu;
    // 800403DC: bl      0x80042FA4
    {
            ctx->lr = 0x800403E0u;
            ctx->pc = 0x80042FA4u;
            return;
    }

label_800403E0:
    ctx->pc = 0x800403E0u;
    ctx->downcount -= 4;
    // 800403E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800403E4:
    ctx->pc = 0x800403E4u;
    // 800403E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800403E8:
    ctx->pc = 0x800403E8u;
    // 800403E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800403EC:
    ctx->pc = 0x800403ECu;
    // 800403EC: bl      0x80042FE4
    {
            ctx->lr = 0x800403F0u;
            ctx->pc = 0x80042FE4u;
            return;
    }

label_800403F0:
    ctx->pc = 0x800403F0u;
    ctx->downcount -= 4;
    // 800403F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800403F4:
    ctx->pc = 0x800403F4u;
    // 800403F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800403F8:
    ctx->pc = 0x800403F8u;
    // 800403F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800403FC:
    ctx->pc = 0x800403FCu;
    // 800403FC: bl      0x80042FE4
    {
            ctx->lr = 0x80040400u;
            ctx->pc = 0x80042FE4u;
            return;
    }

label_80040400:
    ctx->pc = 0x80040400u;
    ctx->downcount -= 4;
    // 80040400: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80040404:
    ctx->pc = 0x80040404u;
    // 80040404: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040408:
    ctx->pc = 0x80040408u;
    // 80040408: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004040C:
    ctx->pc = 0x8004040Cu;
    // 8004040C: bl      0x80042FE4
    {
            ctx->lr = 0x80040410u;
            ctx->pc = 0x80042FE4u;
            return;
    }

label_80040410:
    ctx->pc = 0x80040410u;
    ctx->downcount -= 4;
    // 80040410: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80040414:
    ctx->pc = 0x80040414u;
    // 80040414: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040418:
    ctx->pc = 0x80040418u;
    // 80040418: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004041C:
    ctx->pc = 0x8004041Cu;
    // 8004041C: bl      0x80042FE4
    {
            ctx->lr = 0x80040420u;
            ctx->pc = 0x80042FE4u;
            return;
    }

label_80040420:
    ctx->pc = 0x80040420u;
    ctx->downcount -= 4;
    // 80040420: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80040424:
    ctx->pc = 0x80040424u;
    // 80040424: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040428:
    ctx->pc = 0x80040428u;
    // 80040428: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004042C:
    ctx->pc = 0x8004042Cu;
    // 8004042C: bl      0x80042FE4
    {
            ctx->lr = 0x80040430u;
            ctx->pc = 0x80042FE4u;
            return;
    }

label_80040430:
    ctx->pc = 0x80040430u;
    ctx->downcount -= 4;
    // 80040430: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_80040434:
    ctx->pc = 0x80040434u;
    // 80040434: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040438:
    ctx->pc = 0x80040438u;
    // 80040438: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004043C:
    ctx->pc = 0x8004043Cu;
    // 8004043C: bl      0x80042FE4
    {
            ctx->lr = 0x80040440u;
            ctx->pc = 0x80042FE4u;
            return;
    }

label_80040440:
    ctx->pc = 0x80040440u;
    ctx->downcount -= 4;
    // 80040440: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80040444:
    ctx->pc = 0x80040444u;
    // 80040444: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040448:
    ctx->pc = 0x80040448u;
    // 80040448: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004044C:
    ctx->pc = 0x8004044Cu;
    // 8004044C: bl      0x80042FE4
    {
            ctx->lr = 0x80040450u;
            ctx->pc = 0x80042FE4u;
            return;
    }

label_80040450:
    ctx->pc = 0x80040450u;
    ctx->downcount -= 4;
    // 80040450: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80040454:
    ctx->pc = 0x80040454u;
    // 80040454: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040458:
    ctx->pc = 0x80040458u;
    // 80040458: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004045C:
    ctx->pc = 0x8004045Cu;
    // 8004045C: bl      0x80042FE4
    {
            ctx->lr = 0x80040460u;
            ctx->pc = 0x80042FE4u;
            return;
    }

label_80040460:
    ctx->pc = 0x80040460u;
    ctx->downcount -= 17;
    // 80040460: lfs     f1, -31304(r2)
    if (!ppc_fp_available_inline(ctx, 0x80040460u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80040464:
    ctx->pc = 0x80040464u;
    // 80040464: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_80040468:
    ctx->pc = 0x80040468u;
    // 80040468: lfs     f0, -31320(r2)
    if (!ppc_fp_available_inline(ctx, 0x80040468u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8004046C:
    ctx->pc = 0x8004046Cu;
    // 8004046C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040470:
    ctx->pc = 0x80040470u;
    // 80040470: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040470u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80040474:
    ctx->pc = 0x80040474u;
    // 80040474: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040474u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80040478:
    ctx->pc = 0x80040478u;
    // 80040478: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040478u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8004047C:
    ctx->pc = 0x8004047Cu;
    // 8004047C: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004047Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80040480:
    ctx->pc = 0x80040480u;
    // 80040480: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040480u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80040484:
    ctx->pc = 0x80040484u;
    // 80040484: stfs     f1, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040484u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80040488:
    ctx->pc = 0x80040488u;
    // 80040488: stfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040488u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8004048C:
    ctx->pc = 0x8004048Cu;
    // 8004048C: stfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004048Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80040490:
    ctx->pc = 0x80040490u;
    // 80040490: stfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040490u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80040494:
    ctx->pc = 0x80040494u;
    // 80040494: stfs     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040494u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80040498:
    ctx->pc = 0x80040498u;
    // 80040498: stfs     f1, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040498u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8004049C:
    ctx->pc = 0x8004049Cu;
    // 8004049C: stfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004049Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_800404A0:
    ctx->pc = 0x800404A0u;
    // 800404A0: bl      0x80046A30
    {
            ctx->lr = 0x800404A4u;
            ctx->pc = 0x80046A30u;
            return;
    }

label_800404A4:
    ctx->pc = 0x800404A4u;
    ctx->downcount -= 3;
    // 800404A4: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_800404A8:
    ctx->pc = 0x800404A8u;
    // 800404A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800404AC:
    ctx->pc = 0x800404ACu;
    // 800404AC: bl      0x80046AB0
    {
            ctx->lr = 0x800404B0u;
            ctx->pc = 0x80046AB0u;
            return;
    }

label_800404B0:
    ctx->pc = 0x800404B0u;
    ctx->downcount -= 2;
    // 800404B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800404B4:
    ctx->pc = 0x800404B4u;
    // 800404B4: bl      0x80046B34
    {
            ctx->lr = 0x800404B8u;
            ctx->pc = 0x80046B34u;
            return;
    }

label_800404B8:
    ctx->pc = 0x800404B8u;
    ctx->downcount -= 4;
    // 800404B8: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_800404BC:
    ctx->pc = 0x800404BCu;
    // 800404BC: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_800404C0:
    ctx->pc = 0x800404C0u;
    // 800404C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800404C4:
    ctx->pc = 0x800404C4u;
    // 800404C4: bl      0x80046B68
    {
            ctx->lr = 0x800404C8u;
            ctx->pc = 0x80046B68u;
            return;
    }

label_800404C8:
    ctx->pc = 0x800404C8u;
    ctx->downcount -= 4;
    // 800404C8: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_800404CC:
    ctx->pc = 0x800404CCu;
    // 800404CC: li      r4, 125
    ctx->gpr[4] = (u32)(s32)(125);

label_800404D0:
    ctx->pc = 0x800404D0u;
    // 800404D0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800404D4:
    ctx->pc = 0x800404D4u;
    // 800404D4: bl      0x80046B68
    {
            ctx->lr = 0x800404D8u;
            ctx->pc = 0x80046B68u;
            return;
    }

label_800404D8:
    ctx->pc = 0x800404D8u;
    ctx->downcount -= 17;
    // 800404D8: lhz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_800404DC:
    ctx->pc = 0x800404DCu;
    // 800404DC: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_800404E0:
    ctx->pc = 0x800404E0u;
    // 800404E0: lhz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800404E4:
    ctx->pc = 0x800404E4u;
    // 800404E4: stw     r4, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_800404E8:
    ctx->pc = 0x800404E8u;
    // 800404E8: lfs     f1, -31320(r2)
    if (!ppc_fp_available_inline(ctx, 0x800404E8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_800404EC:
    ctx->pc = 0x800404ECu;
    // 800404EC: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800404F0:
    ctx->pc = 0x800404F0u;
    // 800404F0: lfd     f4, -31296(r2)
    if (!ppc_fp_available_inline(ctx, 0x800404F0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31296);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_800404F4:
    ctx->pc = 0x800404F4u;
    // 800404F4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x800404F4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_800404F8:
    ctx->pc = 0x800404F8u;
    // 800404F8: stw     r3, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800404FC:
    ctx->pc = 0x800404FCu;
    // 800404FC: fmr    f5, f1
    if (!ppc_fp_available_inline(ctx, 0x800404FCu)) return;
    ctx->fpr[5] = ctx->fpr[1];

label_80040500:
    ctx->pc = 0x80040500u;
    // 80040500: lfs     f6, -31304(r2)
    if (!ppc_fp_available_inline(ctx, 0x80040500u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_80040504:
    ctx->pc = 0x80040504u;
    // 80040504: stw     r3, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80040508:
    ctx->pc = 0x80040508u;
    // 80040508: lfd     f3, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040508u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8004050C:
    ctx->pc = 0x8004050Cu;
    // 8004050C: lfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x8004050Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80040510:
    ctx->pc = 0x80040510u;
    // 80040510: fsubs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x80040510u)) return;
    ppc_fsubs(ctx, 3, 3, 4);

label_80040514:
    ctx->pc = 0x80040514u;
    // 80040514: fsubs   f4, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x80040514u)) return;
    ppc_fsubs(ctx, 4, 0, 4);

label_80040518:
    ctx->pc = 0x80040518u;
    // 80040518: bl      0x80046D04
    {
            ctx->lr = 0x8004051Cu;
            ctx->pc = 0x80046D04u;
            return;
    }

label_8004051C:
    ctx->pc = 0x8004051Cu;
    ctx->downcount -= 2;
    // 8004051C: addi    r3, r31, 336
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(336);

label_80040520:
    ctx->pc = 0x80040520u;
    // 80040520: bl      0x8004695C
    {
            ctx->lr = 0x80040524u;
            ctx->pc = 0x8004695Cu;
            return;
    }

label_80040524:
    ctx->pc = 0x80040524u;
    ctx->downcount -= 2;
    // 80040524: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040528:
    ctx->pc = 0x80040528u;
    // 80040528: bl      0x800430B4
    {
            ctx->lr = 0x8004052Cu;
            ctx->pc = 0x800430B4u;
            return;
    }

label_8004052C:
    ctx->pc = 0x8004052Cu;
    ctx->downcount -= 2;
    // 8004052C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80040530:
    ctx->pc = 0x80040530u;
    // 80040530: bl      0x8004302C
    {
            ctx->lr = 0x80040534u;
            ctx->pc = 0x8004302Cu;
            return;
    }

label_80040534:
    ctx->pc = 0x80040534u;
    ctx->downcount -= 2;
    // 80040534: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040538:
    ctx->pc = 0x80040538u;
    // 80040538: bl      0x80046E70
    {
            ctx->lr = 0x8004053Cu;
            ctx->pc = 0x80046E70u;
            return;
    }

label_8004053C:
    ctx->pc = 0x8004053Cu;
    ctx->downcount -= 5;
    // 8004053C: lhz     r5, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80040540:
    ctx->pc = 0x80040540u;
    // 80040540: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040544:
    ctx->pc = 0x80040544u;
    // 80040544: lhz     r6, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80040548:
    ctx->pc = 0x80040548u;
    // 80040548: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004054C:
    ctx->pc = 0x8004054Cu;
    // 8004054C: bl      0x80046D70
    {
            ctx->lr = 0x80040550u;
            ctx->pc = 0x80046D70u;
            return;
    }

label_80040550:
    ctx->pc = 0x80040550u;
    ctx->downcount -= 3;
    // 80040550: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040554:
    ctx->pc = 0x80040554u;
    // 80040554: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040558:
    ctx->pc = 0x80040558u;
    // 80040558: bl      0x80046E30
    {
            ctx->lr = 0x8004055Cu;
            ctx->pc = 0x80046E30u;
            return;
    }

label_8004055C:
    ctx->pc = 0x8004055Cu;
    ctx->downcount -= 2;
    // 8004055C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040560:
    ctx->pc = 0x80040560u;
    // 80040560: bl      0x80044084
    {
            ctx->lr = 0x80040564u;
            ctx->pc = 0x80044084u;
            return;
    }

label_80040564:
    ctx->pc = 0x80040564u;
    ctx->downcount -= 8;
    // 80040564: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80040568:
    ctx->pc = 0x80040568u;
    // 80040568: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004056C:
    ctx->pc = 0x8004056Cu;
    // 8004056C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80040570:
    ctx->pc = 0x80040570u;
    // 80040570: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80040574:
    ctx->pc = 0x80040574u;
    // 80040574: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80040578:
    ctx->pc = 0x80040578u;
    // 80040578: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8004057C:
    ctx->pc = 0x8004057Cu;
    // 8004057C: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_80040580:
    ctx->pc = 0x80040580u;
    // 80040580: bl      0x800440C0
    {
            ctx->lr = 0x80040584u;
            ctx->pc = 0x800440C0u;
            return;
    }

label_80040584:
    ctx->pc = 0x80040584u;
    ctx->downcount -= 5;
    // 80040584: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040588:
    ctx->pc = 0x80040588u;
    // 80040588: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_8004058C:
    ctx->pc = 0x8004058Cu;
    // 8004058C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_80040590:
    ctx->pc = 0x80040590u;
    // 80040590: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040594:
    ctx->pc = 0x80040594u;
    // 80040594: bl      0x80043EA4
    {
            ctx->lr = 0x80040598u;
            ctx->pc = 0x80043EA4u;
            return;
    }

label_80040598:
    ctx->pc = 0x80040598u;
    ctx->downcount -= 5;
    // 80040598: lwz     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004059C:
    ctx->pc = 0x8004059Cu;
    // 8004059C: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_800405A0:
    ctx->pc = 0x800405A0u;
    // 800405A0: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_800405A4:
    ctx->pc = 0x800405A4u;
    // 800405A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800405A8:
    ctx->pc = 0x800405A8u;
    // 800405A8: bl      0x80043F94
    {
            ctx->lr = 0x800405ACu;
            ctx->pc = 0x80043F94u;
            return;
    }

label_800405AC:
    ctx->pc = 0x800405ACu;
    ctx->downcount -= 8;
    // 800405AC: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_800405B0:
    ctx->pc = 0x800405B0u;
    // 800405B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800405B4:
    ctx->pc = 0x800405B4u;
    // 800405B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800405B8:
    ctx->pc = 0x800405B8u;
    // 800405B8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_800405BC:
    ctx->pc = 0x800405BCu;
    // 800405BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_800405C0:
    ctx->pc = 0x800405C0u;
    // 800405C0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_800405C4:
    ctx->pc = 0x800405C4u;
    // 800405C4: li      r9, 2
    ctx->gpr[9] = (u32)(s32)(2);

label_800405C8:
    ctx->pc = 0x800405C8u;
    // 800405C8: bl      0x800440C0
    {
            ctx->lr = 0x800405CCu;
            ctx->pc = 0x800440C0u;
            return;
    }

label_800405CC:
    ctx->pc = 0x800405CCu;
    ctx->downcount -= 5;
    // 800405CC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800405D0:
    ctx->pc = 0x800405D0u;
    // 800405D0: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_800405D4:
    ctx->pc = 0x800405D4u;
    // 800405D4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_800405D8:
    ctx->pc = 0x800405D8u;
    // 800405D8: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800405DC:
    ctx->pc = 0x800405DCu;
    // 800405DC: bl      0x80043EA4
    {
            ctx->lr = 0x800405E0u;
            ctx->pc = 0x80043EA4u;
            return;
    }

label_800405E0:
    ctx->pc = 0x800405E0u;
    ctx->downcount -= 5;
    // 800405E0: lwz     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800405E4:
    ctx->pc = 0x800405E4u;
    // 800405E4: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_800405E8:
    ctx->pc = 0x800405E8u;
    // 800405E8: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_800405EC:
    ctx->pc = 0x800405ECu;
    // 800405EC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800405F0:
    ctx->pc = 0x800405F0u;
    // 800405F0: bl      0x80043F94
    {
            ctx->lr = 0x800405F4u;
            ctx->pc = 0x80043F94u;
            return;
    }

label_800405F4:
    ctx->pc = 0x800405F4u;
    ctx->downcount -= 1;
    // 800405F4: bl      0x80044BC8
    {
            ctx->lr = 0x800405F8u;
            ctx->pc = 0x80044BC8u;
            return;
    }

label_800405F8:
    ctx->pc = 0x800405F8u;
    ctx->downcount -= 3;
    // 800405F8: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_800405FC:
    ctx->pc = 0x800405FCu;
    // 800405FC: addi    r3, r3, -2188
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2188);

label_80040600:
    ctx->pc = 0x80040600u;
    // 80040600: bl      0x80044C10
    {
            ctx->lr = 0x80040604u;
            ctx->pc = 0x80044C10u;
            return;
    }

label_80040604:
    ctx->pc = 0x80040604u;
    ctx->downcount -= 3;
    // 80040604: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_80040608:
    ctx->pc = 0x80040608u;
    // 80040608: addi    r3, r3, -1936
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1936);

label_8004060C:
    ctx->pc = 0x8004060Cu;
    // 8004060C: bl      0x80044C24
    {
            ctx->lr = 0x80040610u;
            ctx->pc = 0x80044C24u;
            return;
    }

label_80040610:
    ctx->pc = 0x80040610u;
    ctx->downcount -= 9;
    // 80040610: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_80040614:
    ctx->pc = 0x80040614u;
    // 80040614: addi    r4, r31, 96
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(96);

label_80040618:
    ctx->pc = 0x80040618u;
    // 80040618: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8004061C:
    ctx->pc = 0x8004061Cu;
    // 8004061C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80040620:
    ctx->pc = 0x80040620u;
    // 80040620: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80040624:
    ctx->pc = 0x80040624u;
    // 80040624: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80040628:
    ctx->pc = 0x80040628u;
    // 80040628: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8004062C:
    ctx->pc = 0x8004062Cu;
    // 8004062C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80040630:
    ctx->pc = 0x80040630u;
    // 80040630: bl      0x8004439C
    {
            ctx->lr = 0x80040634u;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_80040634:
    ctx->pc = 0x80040634u;
    ctx->downcount -= 3;
    // 80040634: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_80040638:
    ctx->pc = 0x80040638u;
    // 80040638: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004063C:
    ctx->pc = 0x8004063Cu;
    // 8004063C: bl      0x80044978
    {
            ctx->lr = 0x80040640u;
            ctx->pc = 0x80044978u;
            return;
    }

label_80040640:
    ctx->pc = 0x80040640u;
    ctx->downcount -= 3;
    // 80040640: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_80040644:
    ctx->pc = 0x80040644u;
    // 80040644: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80040648:
    ctx->pc = 0x80040648u;
    // 80040648: bl      0x80044978
    {
            ctx->lr = 0x8004064Cu;
            ctx->pc = 0x80044978u;
            return;
    }

label_8004064C:
    ctx->pc = 0x8004064Cu;
    ctx->downcount -= 3;
    // 8004064C: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_80040650:
    ctx->pc = 0x80040650u;
    // 80040650: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80040654:
    ctx->pc = 0x80040654u;
    // 80040654: bl      0x80044978
    {
            ctx->lr = 0x80040658u;
            ctx->pc = 0x80044978u;
            return;
    }

label_80040658:
    ctx->pc = 0x80040658u;
    ctx->downcount -= 3;
    // 80040658: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_8004065C:
    ctx->pc = 0x8004065Cu;
    // 8004065C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80040660:
    ctx->pc = 0x80040660u;
    // 80040660: bl      0x80044978
    {
            ctx->lr = 0x80040664u;
            ctx->pc = 0x80044978u;
            return;
    }

label_80040664:
    ctx->pc = 0x80040664u;
    ctx->downcount -= 3;
    // 80040664: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_80040668:
    ctx->pc = 0x80040668u;
    // 80040668: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004066C:
    ctx->pc = 0x8004066Cu;
    // 8004066C: bl      0x80044978
    {
            ctx->lr = 0x80040670u;
            ctx->pc = 0x80044978u;
            return;
    }

label_80040670:
    ctx->pc = 0x80040670u;
    ctx->downcount -= 3;
    // 80040670: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_80040674:
    ctx->pc = 0x80040674u;
    // 80040674: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80040678:
    ctx->pc = 0x80040678u;
    // 80040678: bl      0x80044978
    {
            ctx->lr = 0x8004067Cu;
            ctx->pc = 0x80044978u;
            return;
    }

label_8004067C:
    ctx->pc = 0x8004067Cu;
    ctx->downcount -= 3;
    // 8004067C: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_80040680:
    ctx->pc = 0x80040680u;
    // 80040680: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80040684:
    ctx->pc = 0x80040684u;
    // 80040684: bl      0x80044978
    {
            ctx->lr = 0x80040688u;
            ctx->pc = 0x80044978u;
            return;
    }

label_80040688:
    ctx->pc = 0x80040688u;
    ctx->downcount -= 3;
    // 80040688: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_8004068C:
    ctx->pc = 0x8004068Cu;
    // 8004068C: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80040690:
    ctx->pc = 0x80040690u;
    // 80040690: bl      0x80044978
    {
            ctx->lr = 0x80040694u;
            ctx->pc = 0x80044978u;
            return;
    }

label_80040694:
    ctx->pc = 0x80040694u;
    ctx->downcount -= 5;
    // 80040694: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040698:
    ctx->pc = 0x80040698u;
    // 80040698: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004069C:
    ctx->pc = 0x8004069Cu;
    // 8004069C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800406A0:
    ctx->pc = 0x800406A0u;
    // 800406A0: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_800406A4:
    ctx->pc = 0x800406A4u;
    // 800406A4: bl      0x80045D2C
    {
            ctx->lr = 0x800406A8u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_800406A8:
    ctx->pc = 0x800406A8u;
    ctx->downcount -= 5;
    // 800406A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800406AC:
    ctx->pc = 0x800406ACu;
    // 800406AC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800406B0:
    ctx->pc = 0x800406B0u;
    // 800406B0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_800406B4:
    ctx->pc = 0x800406B4u;
    // 800406B4: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_800406B8:
    ctx->pc = 0x800406B8u;
    // 800406B8: bl      0x80045D2C
    {
            ctx->lr = 0x800406BCu;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_800406BC:
    ctx->pc = 0x800406BCu;
    ctx->downcount -= 5;
    // 800406BC: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_800406C0:
    ctx->pc = 0x800406C0u;
    // 800406C0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_800406C4:
    ctx->pc = 0x800406C4u;
    // 800406C4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_800406C8:
    ctx->pc = 0x800406C8u;
    // 800406C8: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_800406CC:
    ctx->pc = 0x800406CCu;
    // 800406CC: bl      0x80045D2C
    {
            ctx->lr = 0x800406D0u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_800406D0:
    ctx->pc = 0x800406D0u;
    ctx->downcount -= 5;
    // 800406D0: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_800406D4:
    ctx->pc = 0x800406D4u;
    // 800406D4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_800406D8:
    ctx->pc = 0x800406D8u;
    // 800406D8: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_800406DC:
    ctx->pc = 0x800406DCu;
    // 800406DC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_800406E0:
    ctx->pc = 0x800406E0u;
    // 800406E0: bl      0x80045D2C
    {
            ctx->lr = 0x800406E4u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_800406E4:
    ctx->pc = 0x800406E4u;
    ctx->downcount -= 5;
    // 800406E4: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_800406E8:
    ctx->pc = 0x800406E8u;
    // 800406E8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_800406EC:
    ctx->pc = 0x800406ECu;
    // 800406EC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_800406F0:
    ctx->pc = 0x800406F0u;
    // 800406F0: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_800406F4:
    ctx->pc = 0x800406F4u;
    // 800406F4: bl      0x80045D2C
    {
            ctx->lr = 0x800406F8u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_800406F8:
    ctx->pc = 0x800406F8u;
    ctx->downcount -= 5;
    // 800406F8: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_800406FC:
    ctx->pc = 0x800406FCu;
    // 800406FC: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80040700:
    ctx->pc = 0x80040700u;
    // 80040700: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_80040704:
    ctx->pc = 0x80040704u;
    // 80040704: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80040708:
    ctx->pc = 0x80040708u;
    // 80040708: bl      0x80045D2C
    {
            ctx->lr = 0x8004070Cu;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_8004070C:
    ctx->pc = 0x8004070Cu;
    ctx->downcount -= 5;
    // 8004070C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80040710:
    ctx->pc = 0x80040710u;
    // 80040710: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80040714:
    ctx->pc = 0x80040714u;
    // 80040714: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80040718:
    ctx->pc = 0x80040718u;
    // 80040718: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_8004071C:
    ctx->pc = 0x8004071Cu;
    // 8004071C: bl      0x80045D2C
    {
            ctx->lr = 0x80040720u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_80040720:
    ctx->pc = 0x80040720u;
    ctx->downcount -= 5;
    // 80040720: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80040724:
    ctx->pc = 0x80040724u;
    // 80040724: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80040728:
    ctx->pc = 0x80040728u;
    // 80040728: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_8004072C:
    ctx->pc = 0x8004072Cu;
    // 8004072C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80040730:
    ctx->pc = 0x80040730u;
    // 80040730: bl      0x80045D2C
    {
            ctx->lr = 0x80040734u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_80040734:
    ctx->pc = 0x80040734u;
    ctx->downcount -= 5;
    // 80040734: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_80040738:
    ctx->pc = 0x80040738u;
    // 80040738: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_8004073C:
    ctx->pc = 0x8004073Cu;
    // 8004073C: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80040740:
    ctx->pc = 0x80040740u;
    // 80040740: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80040744:
    ctx->pc = 0x80040744u;
    // 80040744: bl      0x80045D2C
    {
            ctx->lr = 0x80040748u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_80040748:
    ctx->pc = 0x80040748u;
    ctx->downcount -= 5;
    // 80040748: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_8004074C:
    ctx->pc = 0x8004074Cu;
    // 8004074C: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80040750:
    ctx->pc = 0x80040750u;
    // 80040750: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80040754:
    ctx->pc = 0x80040754u;
    // 80040754: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80040758:
    ctx->pc = 0x80040758u;
    // 80040758: bl      0x80045D2C
    {
            ctx->lr = 0x8004075Cu;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_8004075C:
    ctx->pc = 0x8004075Cu;
    ctx->downcount -= 5;
    // 8004075C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_80040760:
    ctx->pc = 0x80040760u;
    // 80040760: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80040764:
    ctx->pc = 0x80040764u;
    // 80040764: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80040768:
    ctx->pc = 0x80040768u;
    // 80040768: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_8004076C:
    ctx->pc = 0x8004076Cu;
    // 8004076C: bl      0x80045D2C
    {
            ctx->lr = 0x80040770u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_80040770:
    ctx->pc = 0x80040770u;
    ctx->downcount -= 5;
    // 80040770: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_80040774:
    ctx->pc = 0x80040774u;
    // 80040774: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80040778:
    ctx->pc = 0x80040778u;
    // 80040778: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_8004077C:
    ctx->pc = 0x8004077Cu;
    // 8004077C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80040780:
    ctx->pc = 0x80040780u;
    // 80040780: bl      0x80045D2C
    {
            ctx->lr = 0x80040784u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_80040784:
    ctx->pc = 0x80040784u;
    ctx->downcount -= 5;
    // 80040784: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_80040788:
    ctx->pc = 0x80040788u;
    // 80040788: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_8004078C:
    ctx->pc = 0x8004078Cu;
    // 8004078C: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_80040790:
    ctx->pc = 0x80040790u;
    // 80040790: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_80040794:
    ctx->pc = 0x80040794u;
    // 80040794: bl      0x80045D2C
    {
            ctx->lr = 0x80040798u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_80040798:
    ctx->pc = 0x80040798u;
    ctx->downcount -= 5;
    // 80040798: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_8004079C:
    ctx->pc = 0x8004079Cu;
    // 8004079C: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_800407A0:
    ctx->pc = 0x800407A0u;
    // 800407A0: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_800407A4:
    ctx->pc = 0x800407A4u;
    // 800407A4: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_800407A8:
    ctx->pc = 0x800407A8u;
    // 800407A8: bl      0x80045D2C
    {
            ctx->lr = 0x800407ACu;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_800407AC:
    ctx->pc = 0x800407ACu;
    ctx->downcount -= 5;
    // 800407AC: li      r3, 14
    ctx->gpr[3] = (u32)(s32)(14);

label_800407B0:
    ctx->pc = 0x800407B0u;
    // 800407B0: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_800407B4:
    ctx->pc = 0x800407B4u;
    // 800407B4: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_800407B8:
    ctx->pc = 0x800407B8u;
    // 800407B8: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_800407BC:
    ctx->pc = 0x800407BCu;
    // 800407BC: bl      0x80045D2C
    {
            ctx->lr = 0x800407C0u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_800407C0:
    ctx->pc = 0x800407C0u;
    ctx->downcount -= 5;
    // 800407C0: li      r3, 15
    ctx->gpr[3] = (u32)(s32)(15);

label_800407C4:
    ctx->pc = 0x800407C4u;
    // 800407C4: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_800407C8:
    ctx->pc = 0x800407C8u;
    // 800407C8: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_800407CC:
    ctx->pc = 0x800407CCu;
    // 800407CC: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_800407D0:
    ctx->pc = 0x800407D0u;
    // 800407D0: bl      0x80045D2C
    {
            ctx->lr = 0x800407D4u;
            ctx->pc = 0x80045D2Cu;
            return;
    }

label_800407D4:
    ctx->pc = 0x800407D4u;
    ctx->downcount -= 2;
    // 800407D4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800407D8:
    ctx->pc = 0x800407D8u;
    // 800407D8: bl      0x80045EC8
    {
            ctx->lr = 0x800407DCu;
            ctx->pc = 0x80045EC8u;
            return;
    }

label_800407DC:
    ctx->pc = 0x800407DCu;
    ctx->downcount -= 3;
    // 800407DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800407E0:
    ctx->pc = 0x800407E0u;
    // 800407E0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_800407E4:
    ctx->pc = 0x800407E4u;
    // 800407E4: bl      0x8004578C
    {
            ctx->lr = 0x800407E8u;
            ctx->pc = 0x8004578Cu;
            return;
    }

label_800407E8:
    ctx->pc = 0x800407E8u;
    ctx->downcount -= 6;
    // 800407E8: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_800407EC:
    ctx->pc = 0x800407ECu;
    // 800407EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800407F0:
    ctx->pc = 0x800407F0u;
    // 800407F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800407F4:
    ctx->pc = 0x800407F4u;
    // 800407F4: li      r6, 7
    ctx->gpr[6] = (u32)(s32)(7);

label_800407F8:
    ctx->pc = 0x800407F8u;
    // 800407F8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_800407FC:
    ctx->pc = 0x800407FCu;
    // 800407FC: bl      0x80045C5C
    {
            ctx->lr = 0x80040800u;
            ctx->pc = 0x80045C5Cu;
            return;
    }

label_80040800:
    ctx->pc = 0x80040800u;
    ctx->downcount -= 4;
    // 80040800: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040804:
    ctx->pc = 0x80040804u;
    // 80040804: li      r4, 17
    ctx->gpr[4] = (u32)(s32)(17);

label_80040808:
    ctx->pc = 0x80040808u;
    // 80040808: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004080C:
    ctx->pc = 0x8004080Cu;
    // 8004080C: bl      0x80045CA0
    {
            ctx->lr = 0x80040810u;
            ctx->pc = 0x80045CA0u;
            return;
    }

label_80040810:
    ctx->pc = 0x80040810u;
    ctx->downcount -= 2;
    // 80040810: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80040814:
    ctx->pc = 0x80040814u;
    // 80040814: b       0x80040818
    {
            goto label_80040818;
    }

label_80040818:
    ctx->pc = 0x80040818u;
    ctx->downcount -= 1;
    // 80040818: b       0x8004081C
    {
            goto label_8004081C;
    }

label_8004081C:
    ctx->pc = 0x8004081Cu;
    ctx->downcount -= 1;
    // 8004081C: b       0x80040820
    {
            goto label_80040820;
    }

label_80040820:
    ctx->downcount -= 3;
    // 80040820: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80040824:
    // 80040824: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80040828:
    // 80040828: bl      0x80045ADC
    {
            ctx->lr = 0x8004082Cu;
            ctx->pc = 0x80045ADCu;
            return;
    }

label_8004082C:
    ctx->downcount -= 3;
    // 8004082C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80040830:
    // 80040830: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040834:
    // 80040834: bl      0x80045B38
    {
            ctx->lr = 0x80040838u;
            ctx->pc = 0x80045B38u;
            return;
    }

label_80040838:
    ctx->downcount -= 4;
    // 80040838: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004083C:
    // 8004083C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040840:
    // 80040840: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80040844:
    // 80040844: bl      0x80045B94
    {
            ctx->lr = 0x80040848u;
            ctx->pc = 0x80045B94u;
            return;
    }

label_80040848:
    ctx->downcount -= 3;
    // 80040848: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_8004084C:
    // 8004084C: cmplwi  r31, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80040850:
    // 80040850: bc    12, 0, 0x80040820
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80040820u;
                return;
            }
            goto label_80040820;
        }
    }

label_80040854:
    ctx->pc = 0x80040854u;
    ctx->downcount -= 6;
    // 80040854: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040858:
    ctx->pc = 0x80040858u;
    // 80040858: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004085C:
    ctx->pc = 0x8004085Cu;
    // 8004085C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80040860:
    ctx->pc = 0x80040860u;
    // 80040860: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80040864:
    ctx->pc = 0x80040864u;
    // 80040864: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80040868:
    ctx->pc = 0x80040868u;
    // 80040868: bl      0x80045BDC
    {
            ctx->lr = 0x8004086Cu;
            ctx->pc = 0x80045BDCu;
            return;
    }

label_8004086C:
    ctx->pc = 0x8004086Cu;
    ctx->downcount -= 6;
    // 8004086C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040870:
    ctx->pc = 0x80040870u;
    // 80040870: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040874:
    ctx->pc = 0x80040874u;
    // 80040874: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80040878:
    ctx->pc = 0x80040878u;
    // 80040878: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8004087C:
    ctx->pc = 0x8004087Cu;
    // 8004087C: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80040880:
    ctx->pc = 0x80040880u;
    // 80040880: bl      0x80045BDC
    {
            ctx->lr = 0x80040884u;
            ctx->pc = 0x80045BDCu;
            return;
    }

label_80040884:
    ctx->pc = 0x80040884u;
    ctx->downcount -= 6;
    // 80040884: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80040888:
    ctx->pc = 0x80040888u;
    // 80040888: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8004088C:
    ctx->pc = 0x8004088Cu;
    // 8004088C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80040890:
    ctx->pc = 0x80040890u;
    // 80040890: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80040894:
    ctx->pc = 0x80040894u;
    // 80040894: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80040898:
    ctx->pc = 0x80040898u;
    // 80040898: bl      0x80045BDC
    {
            ctx->lr = 0x8004089Cu;
            ctx->pc = 0x80045BDCu;
            return;
    }

label_8004089C:
    ctx->pc = 0x8004089Cu;
    ctx->downcount -= 6;
    // 8004089C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_800408A0:
    ctx->pc = 0x800408A0u;
    // 800408A0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_800408A4:
    ctx->pc = 0x800408A4u;
    // 800408A4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_800408A8:
    ctx->pc = 0x800408A8u;
    // 800408A8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_800408AC:
    ctx->pc = 0x800408ACu;
    // 800408AC: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_800408B0:
    ctx->pc = 0x800408B0u;
    // 800408B0: bl      0x80045BDC
    {
            ctx->lr = 0x800408B4u;
            ctx->pc = 0x80045BDCu;
            return;
    }

label_800408B4:
    ctx->pc = 0x800408B4u;
    ctx->downcount -= 2;
    // 800408B4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_800408B8:
    ctx->pc = 0x800408B8u;
    // 800408B8: b       0x800408BC
    {
            goto label_800408BC;
    }

label_800408BC:
    ctx->pc = 0x800408BCu;
    ctx->downcount -= 1;
    // 800408BC: b       0x800408C0
    {
            goto label_800408C0;
    }

label_800408C0:
    ctx->pc = 0x800408C0u;
    ctx->downcount -= 1;
    // 800408C0: b       0x800408C4
    {
            goto label_800408C4;
    }

label_800408C4:
    ctx->downcount -= 2;
    // 800408C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800408C8:
    // 800408C8: bl      0x800455E0
    {
            ctx->lr = 0x800408CCu;
            ctx->pc = 0x800455E0u;
            return;
    }

label_800408CC:
    ctx->downcount -= 3;
    // 800408CC: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_800408D0:
    // 800408D0: cmplwi  r31, 0x0010
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0010u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800408D4:
    // 800408D4: bc    12, 0, 0x800408C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800408C4u;
                return;
            }
            goto label_800408C4;
        }
    }

label_800408D8:
    ctx->pc = 0x800408D8u;
    ctx->downcount -= 2;
    // 800408D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800408DC:
    ctx->pc = 0x800408DCu;
    // 800408DC: bl      0x800455BC
    {
            ctx->lr = 0x800408E0u;
            ctx->pc = 0x800455BCu;
            return;
    }

label_800408E0:
    ctx->pc = 0x800408E0u;
    ctx->downcount -= 4;
    // 800408E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800408E4:
    ctx->pc = 0x800408E4u;
    // 800408E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800408E8:
    ctx->pc = 0x800408E8u;
    // 800408E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800408EC:
    ctx->pc = 0x800408ECu;
    // 800408EC: bl      0x8004538C
    {
            ctx->lr = 0x800408F0u;
            ctx->pc = 0x8004538Cu;
            return;
    }

label_800408F0:
    ctx->pc = 0x800408F0u;
    ctx->downcount -= 4;
    // 800408F0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800408F4:
    ctx->pc = 0x800408F4u;
    // 800408F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800408F8:
    ctx->pc = 0x800408F8u;
    // 800408F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800408FC:
    ctx->pc = 0x800408FCu;
    // 800408FC: bl      0x8004538C
    {
            ctx->lr = 0x80040900u;
            ctx->pc = 0x8004538Cu;
            return;
    }

label_80040900:
    ctx->pc = 0x80040900u;
    ctx->downcount -= 4;
    // 80040900: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80040904:
    ctx->pc = 0x80040904u;
    // 80040904: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040908:
    ctx->pc = 0x80040908u;
    // 80040908: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004090C:
    ctx->pc = 0x8004090Cu;
    // 8004090C: bl      0x8004538C
    {
            ctx->lr = 0x80040910u;
            ctx->pc = 0x8004538Cu;
            return;
    }

label_80040910:
    ctx->pc = 0x80040910u;
    ctx->downcount -= 4;
    // 80040910: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80040914:
    ctx->pc = 0x80040914u;
    // 80040914: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040918:
    ctx->pc = 0x80040918u;
    // 80040918: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8004091C:
    ctx->pc = 0x8004091Cu;
    // 8004091C: bl      0x8004538C
    {
            ctx->lr = 0x80040920u;
            ctx->pc = 0x8004538Cu;
            return;
    }

label_80040920:
    ctx->pc = 0x80040920u;
    ctx->downcount -= 9;
    // 80040920: lfs     f2, -31304(r2)
    if (!ppc_fp_available_inline(ctx, 0x80040920u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80040924:
    ctx->pc = 0x80040924u;
    // 80040924: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80040928:
    ctx->pc = 0x80040928u;
    // 80040928: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004092C:
    ctx->pc = 0x8004092Cu;
    // 8004092C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040930:
    ctx->pc = 0x80040930u;
    // 80040930: fmr    f4, f2
    if (!ppc_fp_available_inline(ctx, 0x80040930u)) return;
    ctx->fpr[4] = ctx->fpr[2];

label_80040934:
    ctx->pc = 0x80040934u;
    // 80040934: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040938:
    ctx->pc = 0x80040938u;
    // 80040938: lfs     f1, -31320(r2)
    if (!ppc_fp_available_inline(ctx, 0x80040938u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8004093C:
    ctx->pc = 0x8004093Cu;
    // 8004093C: lfs     f3, -31300(r2)
    if (!ppc_fp_available_inline(ctx, 0x8004093Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_80040940:
    ctx->pc = 0x80040940u;
    // 80040940: bl      0x80045EF0
    {
            ctx->lr = 0x80040944u;
            ctx->pc = 0x80045EF0u;
            return;
    }

label_80040944:
    ctx->pc = 0x80040944u;
    ctx->downcount -= 4;
    // 80040944: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040948:
    ctx->pc = 0x80040948u;
    // 80040948: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004094C:
    ctx->pc = 0x8004094Cu;
    // 8004094C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80040950:
    ctx->pc = 0x80040950u;
    // 80040950: bl      0x80046114
    {
            ctx->lr = 0x80040954u;
            ctx->pc = 0x80046114u;
            return;
    }

label_80040954:
    ctx->pc = 0x80040954u;
    ctx->downcount -= 5;
    // 80040954: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040958:
    ctx->pc = 0x80040958u;
    // 80040958: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8004095C:
    ctx->pc = 0x8004095Cu;
    // 8004095C: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_80040960:
    ctx->pc = 0x80040960u;
    // 80040960: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80040964:
    ctx->pc = 0x80040964u;
    // 80040964: bl      0x80046238
    {
            ctx->lr = 0x80040968u;
            ctx->pc = 0x80046238u;
            return;
    }

label_80040968:
    ctx->pc = 0x80040968u;
    ctx->downcount -= 2;
    // 80040968: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004096C:
    ctx->pc = 0x8004096Cu;
    // 8004096C: bl      0x8004628C
    {
            ctx->lr = 0x80040970u;
            ctx->pc = 0x8004628Cu;
            return;
    }

label_80040970:
    ctx->pc = 0x80040970u;
    ctx->downcount -= 2;
    // 80040970: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040974:
    ctx->pc = 0x80040974u;
    // 80040974: bl      0x800462B8
    {
            ctx->lr = 0x80040978u;
            ctx->pc = 0x800462B8u;
            return;
    }

label_80040978:
    ctx->pc = 0x80040978u;
    ctx->downcount -= 4;
    // 80040978: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004097C:
    ctx->pc = 0x8004097Cu;
    // 8004097C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80040980:
    ctx->pc = 0x80040980u;
    // 80040980: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80040984:
    ctx->pc = 0x80040984u;
    // 80040984: bl      0x800462E4
    {
            ctx->lr = 0x80040988u;
            ctx->pc = 0x800462E4u;
            return;
    }

label_80040988:
    ctx->pc = 0x80040988u;
    ctx->downcount -= 2;
    // 80040988: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004098C:
    ctx->pc = 0x8004098Cu;
    // 8004098C: bl      0x80046318
    {
            ctx->lr = 0x80040990u;
            ctx->pc = 0x80046318u;
            return;
    }

label_80040990:
    ctx->pc = 0x80040990u;
    ctx->downcount -= 2;
    // 80040990: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040994:
    ctx->pc = 0x80040994u;
    // 80040994: bl      0x80046420
    {
            ctx->lr = 0x80040998u;
            ctx->pc = 0x80046420u;
            return;
    }

label_80040998:
    ctx->pc = 0x80040998u;
    ctx->downcount -= 3;
    // 80040998: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8004099C:
    ctx->pc = 0x8004099Cu;
    // 8004099C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800409A0:
    ctx->pc = 0x800409A0u;
    // 800409A0: bl      0x8004644C
    {
            ctx->lr = 0x800409A4u;
            ctx->pc = 0x8004644Cu;
            return;
    }

label_800409A4:
    ctx->pc = 0x800409A4u;
    ctx->downcount -= 3;
    // 800409A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800409A8:
    ctx->pc = 0x800409A8u;
    // 800409A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800409AC:
    ctx->pc = 0x800409ACu;
    // 800409AC: bl      0x8004634C
    {
            ctx->lr = 0x800409B0u;
            ctx->pc = 0x8004634Cu;
            return;
    }

label_800409B0:
    ctx->pc = 0x800409B0u;
    ctx->downcount -= 3;
    // 800409B0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800409B4:
    ctx->pc = 0x800409B4u;
    // 800409B4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800409B8:
    ctx->pc = 0x800409B8u;
    // 800409B8: bl      0x80046488
    {
            ctx->lr = 0x800409BCu;
            ctx->pc = 0x80046488u;
            return;
    }

label_800409BC:
    ctx->pc = 0x800409BCu;
    ctx->downcount -= 5;
    // 800409BC: lhz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800409C0:
    ctx->pc = 0x800409C0u;
    // 800409C0: lhz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_800409C4:
    ctx->pc = 0x800409C4u;
    // 800409C4: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_800409C8:
    ctx->pc = 0x800409C8u;
    // 800409C8: cmpw    r3, r0
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

label_800409CC:
    ctx->pc = 0x800409CCu;
    // 800409CC: bc    4, 2, 0x800409D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800409D8;
        }
    }

label_800409D0:
    ctx->pc = 0x800409D0u;
    ctx->downcount -= 2;
    // 800409D0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_800409D4:
    ctx->pc = 0x800409D4u;
    // 800409D4: b       0x800409DC
    {
            goto label_800409DC;
    }

label_800409D8:
    ctx->pc = 0x800409D8u;
    ctx->downcount -= 1;
    // 800409D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800409DC:
    ctx->pc = 0x800409DCu;
    ctx->downcount -= 2;
    // 800409DC: lbz     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_800409E0:
    ctx->pc = 0x800409E0u;
    // 800409E0: bl      0x800464C0
    {
            ctx->lr = 0x800409E4u;
            ctx->pc = 0x800464C0u;
            return;
    }

label_800409E4:
    ctx->pc = 0x800409E4u;
    ctx->downcount -= 5;
    // 800409E4: lhz     r5, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_800409E8:
    ctx->pc = 0x800409E8u;
    // 800409E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800409EC:
    ctx->pc = 0x800409ECu;
    // 800409EC: lhz     r6, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_800409F0:
    ctx->pc = 0x800409F0u;
    // 800409F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800409F4:
    ctx->pc = 0x800409F4u;
    // 800409F4: bl      0x8004310C
    {
            ctx->lr = 0x800409F8u;
            ctx->pc = 0x8004310Cu;
            return;
    }

label_800409F8:
    ctx->pc = 0x800409F8u;
    ctx->downcount -= 3;
    // 800409F8: lhz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_800409FC:
    ctx->pc = 0x800409FCu;
    // 800409FC: lhz     r4, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80040A00:
    ctx->pc = 0x80040A00u;
    // 80040A00: bl      0x80043204
    {
            ctx->lr = 0x80040A04u;
            ctx->pc = 0x80043204u;
            return;
    }

label_80040A04:
    ctx->pc = 0x80040A04u;
    ctx->downcount -= 30;
    // 80040A04: lhz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80040A08:
    ctx->pc = 0x80040A08u;
    // 80040A08: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_80040A0C:
    ctx->pc = 0x80040A0Cu;
    // 80040A0C: lhz     r0, 6(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80040A10:
    ctx->pc = 0x80040A10u;
    // 80040A10: stw     r4, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80040A14:
    ctx->pc = 0x80040A14u;
    // 80040A14: lfd     f2, -31296(r2)
    if (!ppc_fp_available_inline(ctx, 0x80040A14u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31296);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80040A18:
    ctx->pc = 0x80040A18u;
    // 80040A18: stw     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040A1C:
    ctx->pc = 0x80040A1Cu;
    // 80040A1C: stw     r3, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80040A20:
    ctx->pc = 0x80040A20u;
    // 80040A20: stw     r3, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80040A24:
    ctx->pc = 0x80040A24u;
    // 80040A24: lfd     f1, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040A24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80040A28:
    ctx->pc = 0x80040A28u;
    // 80040A28: lfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x80040A28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80040A2C:
    ctx->pc = 0x80040A2Cu;
    // 80040A2C: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x80040A2Cu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_80040A30:
    ctx->pc = 0x80040A30u;
    // 80040A30: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x80040A30u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_80040A34:
    ctx->pc = 0x80040A34u;
    // 80040A34: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x80040A34u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_80040A38:
    ctx->pc = 0x80040A38u;
    // 80040A38: bl      0x800433E4
    {
            ctx->lr = 0x80040A3Cu;
            ctx->pc = 0x800433E4u;
            return;
    }

label_80040A3C:
    ctx->pc = 0x80040A3Cu;
    ctx->downcount -= 2;
    // 80040A3C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_80040A40:
    ctx->pc = 0x80040A40u;
    // 80040A40: bl      0x8004338C
    {
            ctx->lr = 0x80040A44u;
            ctx->pc = 0x8004338Cu;
            return;
    }

label_80040A44:
    ctx->pc = 0x80040A44u;
    ctx->downcount -= 5;
    // 80040A44: lbz     r3, 25(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80040A48:
    ctx->pc = 0x80040A48u;
    // 80040A48: addi    r4, r30, 26
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(26);

label_80040A4C:
    ctx->pc = 0x80040A4Cu;
    // 80040A4C: addi    r6, r30, 50
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(50);

label_80040A50:
    ctx->pc = 0x80040A50u;
    // 80040A50: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80040A54:
    ctx->pc = 0x80040A54u;
    // 80040A54: bl      0x80043528
    {
            ctx->lr = 0x80040A58u;
            ctx->pc = 0x80043528u;
            return;
    }

label_80040A58:
    ctx->pc = 0x80040A58u;
    ctx->downcount -= 2;
    // 80040A58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040A5C:
    ctx->pc = 0x80040A5Cu;
    // 80040A5C: bl      0x80043730
    {
            ctx->lr = 0x80040A60u;
            ctx->pc = 0x80043730u;
            return;
    }

label_80040A60:
    ctx->pc = 0x80040A60u;
    ctx->downcount -= 2;
    // 80040A60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040A64:
    ctx->pc = 0x80040A64u;
    // 80040A64: bl      0x80043368
    {
            ctx->lr = 0x80040A68u;
            ctx->pc = 0x80043368u;
            return;
    }

label_80040A68:
    ctx->pc = 0x80040A68u;
    ctx->downcount -= 1;
    // 80040A68: bl      0x80043A38
    {
            ctx->lr = 0x80040A6Cu;
            ctx->pc = 0x80043A38u;
            return;
    }

label_80040A6C:
    ctx->pc = 0x80040A6Cu;
    ctx->downcount -= 2;
    // 80040A6C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040A70:
    ctx->pc = 0x80040A70u;
    // 80040A70: bl      0x80042B14
    {
            ctx->lr = 0x80040A74u;
            ctx->pc = 0x80042B14u;
            return;
    }

label_80040A74:
    ctx->pc = 0x80040A74u;
    ctx->downcount -= 2;
    // 80040A74: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040A78:
    ctx->pc = 0x80040A78u;
    // 80040A78: bl      0x80042A98
    {
            ctx->lr = 0x80040A7Cu;
            ctx->pc = 0x80042A98u;
            return;
    }

label_80040A7C:
    ctx->pc = 0x80040A7Cu;
    ctx->downcount -= 2;
    // 80040A7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040A80:
    ctx->pc = 0x80040A80u;
    // 80040A80: bl      0x80042B50
    {
            ctx->lr = 0x80040A84u;
            ctx->pc = 0x80042B50u;
            return;
    }

label_80040A84:
    ctx->pc = 0x80040A84u;
    ctx->downcount -= 5;
    // 80040A84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040A88:
    ctx->pc = 0x80040A88u;
    // 80040A88: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040A8C:
    ctx->pc = 0x80040A8Cu;
    // 80040A8C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80040A90:
    ctx->pc = 0x80040A90u;
    // 80040A90: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_80040A94:
    ctx->pc = 0x80040A94u;
    // 80040A94: bl      0x80042AB0
    {
            ctx->lr = 0x80040A98u;
            ctx->pc = 0x80042AB0u;
            return;
    }

label_80040A98:
    ctx->pc = 0x80040A98u;
    ctx->downcount -= 3;
    // 80040A98: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_80040A9C:
    ctx->pc = 0x80040A9Cu;
    // 80040A9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040AA0:
    ctx->pc = 0x80040AA0u;
    // 80040AA0: bl      0x80042A64
    {
            ctx->lr = 0x80040AA4u;
            ctx->pc = 0x80042A64u;
            return;
    }

label_80040AA4:
    ctx->pc = 0x80040AA4u;
    ctx->downcount -= 2;
    // 80040AA4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040AA8:
    ctx->pc = 0x80040AA8u;
    // 80040AA8: bl      0x80042A78
    {
            ctx->lr = 0x80040AACu;
            ctx->pc = 0x80042A78u;
            return;
    }

label_80040AAC:
    ctx->pc = 0x80040AACu;
    ctx->downcount -= 3;
    // 80040AAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040AB0:
    ctx->pc = 0x80040AB0u;
    // 80040AB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040AB4:
    ctx->pc = 0x80040AB4u;
    // 80040AB4: bl      0x80042B2C
    {
            ctx->lr = 0x80040AB8u;
            ctx->pc = 0x80042B2Cu;
            return;
    }

label_80040AB8:
    ctx->pc = 0x80040AB8u;
    ctx->downcount -= 4;
    // 80040AB8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040ABC:
    ctx->pc = 0x80040ABCu;
    // 80040ABC: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80040AC0:
    ctx->pc = 0x80040AC0u;
    // 80040AC0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80040AC4:
    ctx->pc = 0x80040AC4u;
    // 80040AC4: bl      0x80042B68
    {
            ctx->lr = 0x80040AC8u;
            ctx->pc = 0x80042B68u;
            return;
    }

label_80040AC8:
    ctx->pc = 0x80040AC8u;
    ctx->downcount -= 3;
    // 80040AC8: li      r3, 35
    ctx->gpr[3] = (u32)(s32)(35);

label_80040ACC:
    ctx->pc = 0x80040ACCu;
    // 80040ACC: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_80040AD0:
    ctx->pc = 0x80040AD0u;
    // 80040AD0: bl      0x80046F1C
    {
            ctx->lr = 0x80040AD4u;
            ctx->pc = 0x80046F1Cu;
            return;
    }

label_80040AD4:
    ctx->pc = 0x80040AD4u;
    ctx->downcount -= 1;
    // 80040AD4: bl      0x80047764
    {
            ctx->lr = 0x80040AD8u;
            ctx->pc = 0x80047764u;
            return;
    }

label_80040AD8:
    ctx->pc = 0x80040AD8u;
    ctx->downcount -= 8;
    // 80040AD8: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040ADC:
    ctx->pc = 0x80040ADCu;
    // 80040ADC: lwz     r31, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80040AE0:
    ctx->pc = 0x80040AE0u;
    // 80040AE0: lwz     r30, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80040AE4:
    ctx->pc = 0x80040AE4u;
    // 80040AE4: lwz     r29, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80040AE8:
    ctx->pc = 0x80040AE8u;
    // 80040AE8: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_80040AEC:
    ctx->pc = 0x80040AECu;
    // 80040AEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80040AF0:
    ctx->pc = 0x80040AF0u;
    // 80040AF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80040AF4:
    ctx->pc = 0x80040AF4u;
    ctx->downcount -= 12;
    // 80040AF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80040AF8:
    ctx->pc = 0x80040AF8u;
    // 80040AF8: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040AFC:
    ctx->pc = 0x80040AFCu;
    // 80040AFC: stwu     r1, -736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-736);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80040B00:
    ctx->pc = 0x80040B00u;
    // 80040B00: stw     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80040B04:
    ctx->pc = 0x80040B04u;
    // 80040B04: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80040B08:
    ctx->pc = 0x80040B08u;
    // 80040B08: lwz     r5, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80040B0C:
    ctx->pc = 0x80040B0Cu;
    // 80040B0C: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040B10:
    ctx->pc = 0x80040B10u;
    // 80040B10: lhz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80040B14:
    ctx->pc = 0x80040B14u;
    // 80040B14: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040B18:
    ctx->pc = 0x80040B18u;
    // 80040B18: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040B1C:
    ctx->pc = 0x80040B1Cu;
    // 80040B1C: rlwinm. r0, r0, 29, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 29u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80040B20:
    ctx->pc = 0x80040B20u;
    // 80040B20: bc    12, 2, 0x80040B58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80040B58;
        }
    }

label_80040B24:
    ctx->pc = 0x80040B24u;
    ctx->downcount -= 3;
    // 80040B24: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040B28:
    ctx->pc = 0x80040B28u;
    // 80040B28: rlwinm. r0, r0, 31, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 31u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80040B2C:
    ctx->pc = 0x80040B2Cu;
    // 80040B2C: bc    12, 2, 0x80040B58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80040B58;
        }
    }

label_80040B30:
    ctx->pc = 0x80040B30u;
    ctx->downcount -= 2;
    // 80040B30: lwz     r3, -31152(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040B34:
    ctx->pc = 0x80040B34u;
    // 80040B34: bl      0x800243F8
    {
            ctx->lr = 0x80040B38u;
            ctx->pc = 0x800243F8u;
            return;
    }

label_80040B38:
    ctx->pc = 0x80040B38u;
    ctx->downcount -= 5;
    // 80040B38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80040B3C:
    ctx->pc = 0x80040B3Cu;
    // 80040B3C: stw     r0, -31144(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040B40:
    ctx->pc = 0x80040B40u;
    // 80040B40: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040B44:
    ctx->pc = 0x80040B44u;
    // 80040B44: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80040B48:
    ctx->pc = 0x80040B48u;
    // 80040B48: bl      0x8004135C
    {
            ctx->lr = 0x80040B4Cu;
            goto label_8004135C;
    }

label_80040B4C:
    ctx->pc = 0x80040B4Cu;
    ctx->downcount -= 3;
    // 80040B4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040B50:
    ctx->pc = 0x80040B50u;
    // 80040B50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040B54:
    ctx->pc = 0x80040B54u;
    // 80040B54: bl      0x8004132C
    {
            ctx->lr = 0x80040B58u;
            goto label_8004132C;
    }

label_80040B58:
    ctx->pc = 0x80040B58u;
    ctx->downcount -= 4;
    // 80040B58: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040B5C:
    ctx->pc = 0x80040B5Cu;
    // 80040B5C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040B60:
    ctx->pc = 0x80040B60u;
    // 80040B60: rlwinm. r0, r0, 30, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80040B64:
    ctx->pc = 0x80040B64u;
    // 80040B64: bc    12, 2, 0x80040BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80040BA8;
        }
    }

label_80040B68:
    ctx->pc = 0x80040B68u;
    ctx->downcount -= 3;
    // 80040B68: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040B6C:
    ctx->pc = 0x80040B6Cu;
    // 80040B6C: rlwinm. r0, r0, 0, 31, 31
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

label_80040B70:
    ctx->pc = 0x80040B70u;
    // 80040B70: bc    12, 2, 0x80040BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80040BA8;
        }
    }

label_80040B74:
    ctx->pc = 0x80040B74u;
    ctx->downcount -= 6;
    // 80040B74: lwz     r5, -31136(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31136);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80040B78:
    ctx->pc = 0x80040B78u;
    // 80040B78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040B7C:
    ctx->pc = 0x80040B7Cu;
    // 80040B7C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80040B80:
    ctx->pc = 0x80040B80u;
    // 80040B80: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_80040B84:
    ctx->pc = 0x80040B84u;
    // 80040B84: stw     r0, -31136(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040B88:
    ctx->pc = 0x80040B88u;
    // 80040B88: bl      0x8004132C
    {
            ctx->lr = 0x80040B8Cu;
            goto label_8004132C;
    }

label_80040B8C:
    ctx->pc = 0x80040B8Cu;
    ctx->downcount -= 3;
    // 80040B8C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040B90:
    ctx->pc = 0x80040B90u;
    // 80040B90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040B94:
    ctx->pc = 0x80040B94u;
    // 80040B94: bl      0x8004135C
    {
            ctx->lr = 0x80040B98u;
            goto label_8004135C;
    }

label_80040B98:
    ctx->pc = 0x80040B98u;
    ctx->downcount -= 4;
    // 80040B98: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80040B9C:
    ctx->pc = 0x80040B9Cu;
    // 80040B9C: lwz     r3, -31152(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040BA0:
    ctx->pc = 0x80040BA0u;
    // 80040BA0: stw     r0, -31144(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040BA4:
    ctx->pc = 0x80040BA4u;
    // 80040BA4: bl      0x80024680
    {
            ctx->lr = 0x80040BA8u;
            ctx->pc = 0x80024680u;
            return;
    }

label_80040BA8:
    ctx->pc = 0x80040BA8u;
    ctx->downcount -= 4;
    // 80040BA8: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040BAC:
    ctx->pc = 0x80040BACu;
    // 80040BAC: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80040BB0:
    ctx->pc = 0x80040BB0u;
    // 80040BB0: rlwinm. r0, r4, 27, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 27u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80040BB4:
    ctx->pc = 0x80040BB4u;
    // 80040BB4: bc    12, 2, 0x80040C14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80040C14;
        }
    }

label_80040BB8:
    ctx->pc = 0x80040BB8u;
    ctx->downcount -= 3;
    // 80040BB8: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040BBC:
    ctx->pc = 0x80040BBCu;
    // 80040BBC: rlwinm. r0, r0, 28, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 28u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80040BC0:
    ctx->pc = 0x80040BC0u;
    // 80040BC0: bc    12, 2, 0x80040C14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80040C14;
        }
    }

label_80040BC4:
    ctx->pc = 0x80040BC4u;
    ctx->downcount -= 9;
    // 80040BC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80040BC8:
    ctx->pc = 0x80040BC8u;
    // 80040BC8: rlwimi r4, r0, 5, 26, 26
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 5u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x00000020u) | (rot & 0x00000020u);
    }

label_80040BCC:
    ctx->pc = 0x80040BCCu;
    // 80040BCC: stw     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80040BD0:
    ctx->pc = 0x80040BD0u;
    // 80040BD0: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040BD4:
    ctx->pc = 0x80040BD4u;
    // 80040BD4: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040BD8:
    ctx->pc = 0x80040BD8u;
    // 80040BD8: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040BDC:
    ctx->pc = 0x80040BDCu;
    // 80040BDC: lwz     r0, -31140(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040BE0:
    ctx->pc = 0x80040BE0u;
    // 80040BE0: cmplwi  r0, 0x0000
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

label_80040BE4:
    ctx->pc = 0x80040BE4u;
    // 80040BE4: bc    12, 2, 0x80040C14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80040C14;
        }
    }

label_80040BE8:
    ctx->pc = 0x80040BE8u;
    ctx->downcount -= 2;
    // 80040BE8: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80040BEC:
    ctx->pc = 0x80040BECu;
    // 80040BEC: bl      0x8001E4A4
    {
            ctx->lr = 0x80040BF0u;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_80040BF0:
    ctx->pc = 0x80040BF0u;
    ctx->downcount -= 2;
    // 80040BF0: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80040BF4:
    ctx->pc = 0x80040BF4u;
    // 80040BF4: bl      0x8001E2AC
    {
            ctx->lr = 0x80040BF8u;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_80040BF8:
    ctx->pc = 0x80040BF8u;
    ctx->downcount -= 4;
    // 80040BF8: lwz     r12, -31140(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31140);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80040BFC:
    ctx->pc = 0x80040BFCu;
    // 80040BFC: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_80040C00:
    ctx->pc = 0x80040C00u;
    // 80040C00: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80040C04u;
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80040C04:
    ctx->pc = 0x80040C04u;
    ctx->downcount -= 2;
    // 80040C04: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80040C08:
    ctx->pc = 0x80040C08u;
    // 80040C08: bl      0x8001E4A4
    {
            ctx->lr = 0x80040C0Cu;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_80040C0C:
    ctx->pc = 0x80040C0Cu;
    ctx->downcount -= 2;
    // 80040C0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80040C10:
    ctx->pc = 0x80040C10u;
    // 80040C10: bl      0x8001E2AC
    {
            ctx->lr = 0x80040C14u;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_80040C14:
    ctx->pc = 0x80040C14u;
    ctx->downcount -= 6;
    // 80040C14: lwz     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040C18:
    ctx->pc = 0x80040C18u;
    // 80040C18: lwz     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80040C1C:
    ctx->pc = 0x80040C1Cu;
    // 80040C1C: addi    r1, r1, 736
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(736);

label_80040C20:
    ctx->pc = 0x80040C20u;
    // 80040C20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80040C24:
    ctx->pc = 0x80040C24u;
    // 80040C24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80040C28:
    ctx->pc = 0x80040C28u;
    ctx->downcount -= 17;
    // 80040C28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80040C2C:
    ctx->pc = 0x80040C2Cu;
    // 80040C2C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040C30:
    ctx->pc = 0x80040C30u;
    // 80040C30: addi    r0, r5, -4
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-4);

label_80040C34:
    ctx->pc = 0x80040C34u;
    // 80040C34: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80040C38:
    ctx->pc = 0x80040C38u;
    // 80040C38: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80040C3C:
    ctx->pc = 0x80040C3Cu;
    // 80040C3C: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_80040C40:
    ctx->pc = 0x80040C40u;
    // 80040C40: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80040C44:
    ctx->pc = 0x80040C44u;
    // 80040C44: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80040C48:
    ctx->pc = 0x80040C48u;
    // 80040C48: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_80040C4C:
    ctx->pc = 0x80040C4Cu;
    // 80040C4C: addi    r4, r5, -16384
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-16384);

label_80040C50:
    ctx->pc = 0x80040C50u;
    // 80040C50: stw     r31, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80040C54:
    ctx->pc = 0x80040C54u;
    // 80040C54: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040C58:
    ctx->pc = 0x80040C58u;
    // 80040C58: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80040C5C:
    ctx->pc = 0x80040C5Cu;
    // 80040C5C: stw     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80040C60:
    ctx->pc = 0x80040C60u;
    // 80040C60: rlwinm r5, r5, 31, 1, 26
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 31u) & 0x7FFFFFE0u;
    }

label_80040C64:
    ctx->pc = 0x80040C64u;
    // 80040C64: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040C68:
    ctx->pc = 0x80040C68u;
    // 80040C68: bl      0x80040D04
    {
            ctx->lr = 0x80040C6Cu;
            goto label_80040D04;
    }

label_80040C6C:
    ctx->pc = 0x80040C6Cu;
    ctx->downcount -= 4;
    // 80040C6C: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_80040C70:
    ctx->pc = 0x80040C70u;
    // 80040C70: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_80040C74:
    ctx->pc = 0x80040C74u;
    // 80040C74: addi    r5, r31, 0
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(0);

label_80040C78:
    ctx->pc = 0x80040C78u;
    // 80040C78: bl      0x80040C94
    {
            ctx->lr = 0x80040C7Cu;
            goto label_80040C94;
    }

label_80040C7C:
    ctx->pc = 0x80040C7Cu;
    ctx->downcount -= 7;
    // 80040C7C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040C80:
    ctx->pc = 0x80040C80u;
    // 80040C80: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80040C84:
    ctx->pc = 0x80040C84u;
    // 80040C84: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80040C88:
    ctx->pc = 0x80040C88u;
    // 80040C88: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80040C8C:
    ctx->pc = 0x80040C8Cu;
    // 80040C8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80040C90:
    ctx->pc = 0x80040C90u;
    // 80040C90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80040C94:
    ctx->pc = 0x80040C94u;
    ctx->downcount -= 10;
    // 80040C94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80040C98:
    ctx->pc = 0x80040C98u;
    // 80040C98: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040C9C:
    ctx->pc = 0x80040C9Cu;
    // 80040C9C: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80040CA0:
    ctx->pc = 0x80040CA0u;
    // 80040CA0: stw     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80040CA4:
    ctx->pc = 0x80040CA4u;
    // 80040CA4: addi    r31, r5, 0
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(0);

label_80040CA8:
    ctx->pc = 0x80040CA8u;
    // 80040CA8: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80040CAC:
    ctx->pc = 0x80040CACu;
    // 80040CAC: addi    r30, r4, 0
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(0);

label_80040CB0:
    ctx->pc = 0x80040CB0u;
    // 80040CB0: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80040CB4:
    ctx->pc = 0x80040CB4u;
    // 80040CB4: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_80040CB8:
    ctx->pc = 0x80040CB8u;
    // 80040CB8: bl      0x80020680
    {
            ctx->lr = 0x80040CBCu;
            ctx->pc = 0x80020680u;
            return;
    }

label_80040CBC:
    ctx->pc = 0x80040CBCu;
    ctx->downcount -= 7;
    // 80040CBC: stw     r30, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80040CC0:
    ctx->pc = 0x80040CC0u;
    // 80040CC0: subf   r0, r30, r31
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80040CC4:
    ctx->pc = 0x80040CC4u;
    // 80040CC4: stw     r31, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80040CC8:
    ctx->pc = 0x80040CC8u;
    // 80040CC8: stw     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040CCC:
    ctx->pc = 0x80040CCCu;
    // 80040CCC: lwz     r4, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80040CD0:
    ctx->pc = 0x80040CD0u;
    // 80040CD0: cmpwi   r4, 0
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

label_80040CD4:
    ctx->pc = 0x80040CD4u;
    // 80040CD4: bc    4, 0, 0x80040CE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80040CE4;
        }
    }

label_80040CD8:
    ctx->pc = 0x80040CD8u;
    ctx->downcount -= 3;
    // 80040CD8: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040CDC:
    ctx->pc = 0x80040CDCu;
    // 80040CDC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80040CE0:
    ctx->pc = 0x80040CE0u;
    // 80040CE0: stw     r0, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040CE4:
    ctx->pc = 0x80040CE4u;
    ctx->downcount -= 1;
    // 80040CE4: bl      0x800206A8
    {
            ctx->lr = 0x80040CE8u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_80040CE8:
    ctx->pc = 0x80040CE8u;
    ctx->downcount -= 8;
    // 80040CE8: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040CEC:
    ctx->pc = 0x80040CECu;
    // 80040CEC: lwz     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80040CF0:
    ctx->pc = 0x80040CF0u;
    // 80040CF0: lwz     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80040CF4:
    ctx->pc = 0x80040CF4u;
    // 80040CF4: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80040CF8:
    ctx->pc = 0x80040CF8u;
    // 80040CF8: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_80040CFC:
    ctx->pc = 0x80040CFCu;
    // 80040CFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80040D00:
    ctx->pc = 0x80040D00u;
    // 80040D00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80040D04:
    ctx->pc = 0x80040D04u;
    ctx->downcount -= 3;
    // 80040D04: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80040D08:
    ctx->pc = 0x80040D08u;
    // 80040D08: stw     r5, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80040D0C:
    ctx->pc = 0x80040D0Cu;
    // 80040D0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80040D10:
    ctx->pc = 0x80040D10u;
    ctx->downcount -= 7;
    // 80040D10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80040D14:
    ctx->pc = 0x80040D14u;
    // 80040D14: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040D18:
    ctx->pc = 0x80040D18u;
    // 80040D18: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80040D1C:
    ctx->pc = 0x80040D1Cu;
    // 80040D1C: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80040D20:
    ctx->pc = 0x80040D20u;
    // 80040D20: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80040D24:
    ctx->pc = 0x80040D24u;
    // 80040D24: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80040D28:
    ctx->pc = 0x80040D28u;
    // 80040D28: bl      0x80020680
    {
            ctx->lr = 0x80040D2Cu;
            ctx->pc = 0x80020680u;
            return;
    }

label_80040D2C:
    ctx->pc = 0x80040D2Cu;
    ctx->downcount -= 5;
    // 80040D2C: lwz     r0, -31156(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040D30:
    ctx->pc = 0x80040D30u;
    // 80040D30: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_80040D34:
    ctx->pc = 0x80040D34u;
    // 80040D34: stw     r30, -31160(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31160);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80040D38:
    ctx->pc = 0x80040D38u;
    // 80040D38: cmplw   r30, r0
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80040D3C:
    ctx->pc = 0x80040D3Cu;
    // 80040D3C: bc    4, 2, 0x80040DAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80040DAC;
        }
    }

label_80040D40:
    ctx->pc = 0x80040D40u;
    ctx->downcount -= 21;
    // 80040D40: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040D44:
    ctx->pc = 0x80040D44u;
    // 80040D44: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80040D48:
    ctx->pc = 0x80040D48u;
    // 80040D48: lwz     r3, -31200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040D4C:
    ctx->pc = 0x80040D4Cu;
    // 80040D4C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80040D50:
    ctx->pc = 0x80040D50u;
    // 80040D50: rlwinm r0, r0, 0, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x3FFFFFFFu;
    }

label_80040D54:
    ctx->pc = 0x80040D54u;
    // 80040D54: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040D58:
    ctx->pc = 0x80040D58u;
    // 80040D58: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80040D5C:
    ctx->pc = 0x80040D5Cu;
    // 80040D5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040D60:
    ctx->pc = 0x80040D60u;
    // 80040D60: lwz     r7, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80040D64:
    ctx->pc = 0x80040D64u;
    // 80040D64: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80040D68:
    ctx->pc = 0x80040D68u;
    // 80040D68: lwz     r5, -31200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31200);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80040D6C:
    ctx->pc = 0x80040D6Cu;
    // 80040D6C: rlwinm r7, r7, 0, 2, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x3FFFFFFFu;
    }

label_80040D70:
    ctx->pc = 0x80040D70u;
    // 80040D70: stw     r7, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80040D74:
    ctx->pc = 0x80040D74u;
    // 80040D74: lwz     r7, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80040D78:
    ctx->pc = 0x80040D78u;
    // 80040D78: lwz     r5, -31200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31200);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80040D7C:
    ctx->pc = 0x80040D7Cu;
    // 80040D7C: rlwimi r8, r7, 0, 6, 26
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 0u);
        ctx->gpr[8] = (ctx->gpr[8] & ~0x03FFFFE0u) | (rot & 0x03FFFFE0u);
    }

label_80040D80:
    ctx->pc = 0x80040D80u;
    // 80040D80: addi    r7, r8, 0
    ctx->gpr[7] = ctx->gpr[8] + (u32)(s32)(0);

label_80040D84:
    ctx->pc = 0x80040D84u;
    // 80040D84: rlwimi r7, r6, 26, 5, 5
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 26u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0x04000000u) | (rot & 0x04000000u);
    }

label_80040D88:
    ctx->pc = 0x80040D88u;
    // 80040D88: stw     r7, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80040D8C:
    ctx->pc = 0x80040D8Cu;
    // 80040D8C: stb     r0, -31148(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31148);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80040D90:
    ctx->pc = 0x80040D90u;
    // 80040D90: bl      0x8004135C
    {
            ctx->lr = 0x80040D94u;
            goto label_8004135C;
    }

label_80040D94:
    ctx->pc = 0x80040D94u;
    ctx->downcount -= 3;
    // 80040D94: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040D98:
    ctx->pc = 0x80040D98u;
    // 80040D98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040D9C:
    ctx->pc = 0x80040D9Cu;
    // 80040D9C: bl      0x8004132C
    {
            ctx->lr = 0x80040DA0u;
            goto label_8004132C;
    }

label_80040DA0:
    ctx->pc = 0x80040DA0u;
    ctx->downcount -= 2;
    // 80040DA0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040DA4:
    ctx->pc = 0x80040DA4u;
    // 80040DA4: bl      0x800412F8
    {
            ctx->lr = 0x80040DA8u;
            goto label_800412F8;
    }

label_80040DA8:
    ctx->pc = 0x80040DA8u;
    ctx->downcount -= 1;
    // 80040DA8: b       0x80040E14
    {
            goto label_80040E14;
    }

label_80040DAC:
    ctx->pc = 0x80040DACu;
    ctx->downcount -= 3;
    // 80040DAC: lbz     r0, -31148(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31148);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80040DB0:
    ctx->pc = 0x80040DB0u;
    // 80040DB0: cmplwi  r0, 0x0000
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

label_80040DB4:
    ctx->pc = 0x80040DB4u;
    // 80040DB4: bc    12, 2, 0x80040DC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80040DC8;
        }
    }

label_80040DB8:
    ctx->pc = 0x80040DB8u;
    ctx->downcount -= 2;
    // 80040DB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040DBC:
    ctx->pc = 0x80040DBCu;
    // 80040DBC: bl      0x800412F8
    {
            ctx->lr = 0x80040DC0u;
            goto label_800412F8;
    }

label_80040DC0:
    ctx->pc = 0x80040DC0u;
    ctx->downcount -= 2;
    // 80040DC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80040DC4:
    ctx->pc = 0x80040DC4u;
    // 80040DC4: stb     r0, -31148(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31148);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80040DC8:
    ctx->pc = 0x80040DC8u;
    ctx->downcount -= 3;
    // 80040DC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040DCC:
    ctx->pc = 0x80040DCCu;
    // 80040DCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040DD0:
    ctx->pc = 0x80040DD0u;
    // 80040DD0: bl      0x8004132C
    {
            ctx->lr = 0x80040DD4u;
            goto label_8004132C;
    }

label_80040DD4:
    ctx->pc = 0x80040DD4u;
    ctx->downcount -= 16;
    // 80040DD4: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80040DD8:
    ctx->pc = 0x80040DD8u;
    // 80040DD8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80040DDC:
    ctx->pc = 0x80040DDCu;
    // 80040DDC: lwz     r3, -31200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040DE0:
    ctx->pc = 0x80040DE0u;
    // 80040DE0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80040DE4:
    ctx->pc = 0x80040DE4u;
    // 80040DE4: rlwinm r4, r4, 0, 2, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x3FFFFFFFu;
    }

label_80040DE8:
    ctx->pc = 0x80040DE8u;
    // 80040DE8: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80040DEC:
    ctx->pc = 0x80040DECu;
    // 80040DEC: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80040DF0:
    ctx->pc = 0x80040DF0u;
    // 80040DF0: lwz     r3, -31200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040DF4:
    ctx->pc = 0x80040DF4u;
    // 80040DF4: rlwinm r4, r4, 0, 2, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x3FFFFFFFu;
    }

label_80040DF8:
    ctx->pc = 0x80040DF8u;
    // 80040DF8: stw     r4, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80040DFC:
    ctx->pc = 0x80040DFCu;
    // 80040DFC: lwz     r4, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80040E00:
    ctx->pc = 0x80040E00u;
    // 80040E00: lwz     r3, -31200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040E04:
    ctx->pc = 0x80040E04u;
    // 80040E04: rlwimi r5, r4, 0, 6, 26
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0x03FFFFE0u) | (rot & 0x03FFFFE0u);
    }

label_80040E08:
    ctx->pc = 0x80040E08u;
    // 80040E08: addi    r4, r5, 0
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(0);

label_80040E0C:
    ctx->pc = 0x80040E0Cu;
    // 80040E0C: rlwimi r4, r0, 26, 5, 5
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 26u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x04000000u) | (rot & 0x04000000u);
    }

label_80040E10:
    ctx->pc = 0x80040E10u;
    // 80040E10: stw     r4, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80040E14:
    ctx->pc = 0x80040E14u;
    ctx->downcount -= 1;
    // 80040E14: bl      0x8001BFE8
    {
            ctx->lr = 0x80040E18u;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_80040E18:
    ctx->pc = 0x80040E18u;
    ctx->downcount -= 2;
    // 80040E18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80040E1C:
    ctx->pc = 0x80040E1Cu;
    // 80040E1C: bl      0x800206A8
    {
            ctx->lr = 0x80040E20u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_80040E20:
    ctx->pc = 0x80040E20u;
    ctx->downcount -= 7;
    // 80040E20: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040E24:
    ctx->pc = 0x80040E24u;
    // 80040E24: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80040E28:
    ctx->pc = 0x80040E28u;
    // 80040E28: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80040E2C:
    ctx->pc = 0x80040E2Cu;
    // 80040E2C: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_80040E30:
    ctx->pc = 0x80040E30u;
    // 80040E30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80040E34:
    ctx->pc = 0x80040E34u;
    // 80040E34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80040E38:
    ctx->pc = 0x80040E38u;
    ctx->downcount -= 7;
    // 80040E38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80040E3C:
    ctx->pc = 0x80040E3Cu;
    // 80040E3C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040E40:
    ctx->pc = 0x80040E40u;
    // 80040E40: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80040E44:
    ctx->pc = 0x80040E44u;
    // 80040E44: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80040E48:
    ctx->pc = 0x80040E48u;
    // 80040E48: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80040E4C:
    ctx->pc = 0x80040E4Cu;
    // 80040E4C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80040E50:
    ctx->pc = 0x80040E50u;
    // 80040E50: bl      0x80020680
    {
            ctx->lr = 0x80040E54u;
            ctx->pc = 0x80020680u;
            return;
    }

label_80040E54:
    ctx->pc = 0x80040E54u;
    ctx->downcount -= 2;
    // 80040E54: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80040E58:
    ctx->pc = 0x80040E58u;
    // 80040E58: bl      0x800412D4
    {
            ctx->lr = 0x80040E5Cu;
            goto label_800412D4;
    }

label_80040E5C:
    ctx->pc = 0x80040E5Cu;
    ctx->downcount -= 3;
    // 80040E5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040E60:
    ctx->pc = 0x80040E60u;
    // 80040E60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040E64:
    ctx->pc = 0x80040E64u;
    // 80040E64: bl      0x8004132C
    {
            ctx->lr = 0x80040E68u;
            goto label_8004132C;
    }

label_80040E68:
    ctx->pc = 0x80040E68u;
    ctx->downcount -= 51;
    // 80040E68: stw     r30, -31156(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31156);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80040E6C:
    ctx->pc = 0x80040E6Cu;
    // 80040E6C: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040E70:
    ctx->pc = 0x80040E70u;
    // 80040E70: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040E74:
    ctx->pc = 0x80040E74u;
    // 80040E74: sth     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040E78:
    ctx->pc = 0x80040E78u;
    // 80040E78: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040E7C:
    ctx->pc = 0x80040E7Cu;
    // 80040E7C: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040E80:
    ctx->pc = 0x80040E80u;
    // 80040E80: sth     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040E84:
    ctx->pc = 0x80040E84u;
    // 80040E84: lwz     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040E88:
    ctx->pc = 0x80040E88u;
    // 80040E88: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040E8C:
    ctx->pc = 0x80040E8Cu;
    // 80040E8C: sth     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040E90:
    ctx->pc = 0x80040E90u;
    // 80040E90: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040E94:
    ctx->pc = 0x80040E94u;
    // 80040E94: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040E98:
    ctx->pc = 0x80040E98u;
    // 80040E98: sth     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040E9C:
    ctx->pc = 0x80040E9Cu;
    // 80040E9C: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040EA0:
    ctx->pc = 0x80040EA0u;
    // 80040EA0: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040EA4:
    ctx->pc = 0x80040EA4u;
    // 80040EA4: sth     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040EA8:
    ctx->pc = 0x80040EA8u;
    // 80040EA8: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040EAC:
    ctx->pc = 0x80040EACu;
    // 80040EAC: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040EB0:
    ctx->pc = 0x80040EB0u;
    // 80040EB0: sth     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040EB4:
    ctx->pc = 0x80040EB4u;
    // 80040EB4: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040EB8:
    ctx->pc = 0x80040EB8u;
    // 80040EB8: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040EBC:
    ctx->pc = 0x80040EBCu;
    // 80040EBC: sth     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040EC0:
    ctx->pc = 0x80040EC0u;
    // 80040EC0: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040EC4:
    ctx->pc = 0x80040EC4u;
    // 80040EC4: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040EC8:
    ctx->pc = 0x80040EC8u;
    // 80040EC8: rlwinm r0, r0, 16, 18, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00003FFFu;
    }

label_80040ECC:
    ctx->pc = 0x80040ECCu;
    // 80040ECC: sth     r0, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040ED0:
    ctx->pc = 0x80040ED0u;
    // 80040ED0: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040ED4:
    ctx->pc = 0x80040ED4u;
    // 80040ED4: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040ED8:
    ctx->pc = 0x80040ED8u;
    // 80040ED8: rlwinm r0, r0, 16, 18, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00003FFFu;
    }

label_80040EDC:
    ctx->pc = 0x80040EDCu;
    // 80040EDC: sth     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040EE0:
    ctx->pc = 0x80040EE0u;
    // 80040EE0: lwz     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040EE4:
    ctx->pc = 0x80040EE4u;
    // 80040EE4: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040EE8:
    ctx->pc = 0x80040EE8u;
    // 80040EE8: srawi r0, r0, 16
    {
        u32 sh = 16u;
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

label_80040EEC:
    ctx->pc = 0x80040EECu;
    // 80040EEC: sth     r0, 50(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040EF0:
    ctx->pc = 0x80040EF0u;
    // 80040EF0: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040EF4:
    ctx->pc = 0x80040EF4u;
    // 80040EF4: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040EF8:
    ctx->pc = 0x80040EF8u;
    // 80040EF8: rlwinm r0, r0, 16, 18, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00003FFFu;
    }

label_80040EFC:
    ctx->pc = 0x80040EFCu;
    // 80040EFC: sth     r0, 54(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040F00:
    ctx->pc = 0x80040F00u;
    // 80040F00: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040F04:
    ctx->pc = 0x80040F04u;
    // 80040F04: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040F08:
    ctx->pc = 0x80040F08u;
    // 80040F08: rlwinm r0, r0, 16, 18, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00003FFFu;
    }

label_80040F0C:
    ctx->pc = 0x80040F0Cu;
    // 80040F0C: sth     r0, 58(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040F10:
    ctx->pc = 0x80040F10u;
    // 80040F10: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040F14:
    ctx->pc = 0x80040F14u;
    // 80040F14: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040F18:
    ctx->pc = 0x80040F18u;
    // 80040F18: rlwinm r0, r0, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x0000FFFFu;
    }

label_80040F1C:
    ctx->pc = 0x80040F1Cu;
    // 80040F1C: sth     r0, 42(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040F20:
    ctx->pc = 0x80040F20u;
    // 80040F20: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040F24:
    ctx->pc = 0x80040F24u;
    // 80040F24: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040F28:
    ctx->pc = 0x80040F28u;
    // 80040F28: rlwinm r0, r0, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x0000FFFFu;
    }

label_80040F2C:
    ctx->pc = 0x80040F2Cu;
    // 80040F2C: sth     r0, 46(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80040F30:
    ctx->pc = 0x80040F30u;
    // 80040F30: bl      0x8001BFE8
    {
            ctx->lr = 0x80040F34u;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_80040F34:
    ctx->pc = 0x80040F34u;
    ctx->downcount -= 4;
    // 80040F34: lwz     r3, -31160(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040F38:
    ctx->pc = 0x80040F38u;
    // 80040F38: lwz     r0, -31156(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040F3C:
    ctx->pc = 0x80040F3Cu;
    // 80040F3C: cmplw   r3, r0
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

label_80040F40:
    ctx->pc = 0x80040F40u;
    // 80040F40: bc    4, 2, 0x80040F64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80040F64;
        }
    }

label_80040F44:
    ctx->pc = 0x80040F44u;
    ctx->downcount -= 5;
    // 80040F44: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80040F48:
    ctx->pc = 0x80040F48u;
    // 80040F48: stb     r0, -31148(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31148);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80040F4C:
    ctx->pc = 0x80040F4Cu;
    // 80040F4C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040F50:
    ctx->pc = 0x80040F50u;
    // 80040F50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040F54:
    ctx->pc = 0x80040F54u;
    // 80040F54: bl      0x8004132C
    {
            ctx->lr = 0x80040F58u;
            goto label_8004132C;
    }

label_80040F58:
    ctx->pc = 0x80040F58u;
    ctx->downcount -= 2;
    // 80040F58: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040F5C:
    ctx->pc = 0x80040F5Cu;
    // 80040F5C: bl      0x800412F8
    {
            ctx->lr = 0x80040F60u;
            goto label_800412F8;
    }

label_80040F60:
    ctx->pc = 0x80040F60u;
    ctx->downcount -= 1;
    // 80040F60: b       0x80040F80
    {
            goto label_80040F80;
    }

label_80040F64:
    ctx->pc = 0x80040F64u;
    ctx->downcount -= 5;
    // 80040F64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80040F68:
    ctx->pc = 0x80040F68u;
    // 80040F68: stb     r0, -31148(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31148);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80040F6C:
    ctx->pc = 0x80040F6Cu;
    // 80040F6C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040F70:
    ctx->pc = 0x80040F70u;
    // 80040F70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80040F74:
    ctx->pc = 0x80040F74u;
    // 80040F74: bl      0x8004132C
    {
            ctx->lr = 0x80040F78u;
            goto label_8004132C;
    }

label_80040F78:
    ctx->pc = 0x80040F78u;
    ctx->downcount -= 2;
    // 80040F78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80040F7C:
    ctx->pc = 0x80040F7Cu;
    // 80040F7C: bl      0x800412F8
    {
            ctx->lr = 0x80040F80u;
            goto label_800412F8;
    }

label_80040F80:
    ctx->pc = 0x80040F80u;
    ctx->downcount -= 3;
    // 80040F80: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80040F84:
    ctx->pc = 0x80040F84u;
    // 80040F84: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80040F88:
    ctx->pc = 0x80040F88u;
    // 80040F88: bl      0x8004135C
    {
            ctx->lr = 0x80040F8Cu;
            goto label_8004135C;
    }

label_80040F8C:
    ctx->pc = 0x80040F8Cu;
    ctx->downcount -= 1;
    // 80040F8C: bl      0x800412B0
    {
            ctx->lr = 0x80040F90u;
            goto label_800412B0;
    }

label_80040F90:
    ctx->pc = 0x80040F90u;
    ctx->downcount -= 2;
    // 80040F90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80040F94:
    ctx->pc = 0x80040F94u;
    // 80040F94: bl      0x800206A8
    {
            ctx->lr = 0x80040F98u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_80040F98:
    ctx->pc = 0x80040F98u;
    ctx->downcount -= 7;
    // 80040F98: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040F9C:
    ctx->pc = 0x80040F9Cu;
    // 80040F9C: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80040FA0:
    ctx->pc = 0x80040FA0u;
    // 80040FA0: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80040FA4:
    ctx->pc = 0x80040FA4u;
    // 80040FA4: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_80040FA8:
    ctx->pc = 0x80040FA8u;
    // 80040FA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80040FAC:
    ctx->pc = 0x80040FACu;
    // 80040FAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80040FB0:
    ctx->pc = 0x80040FB0u;
    ctx->downcount -= 4;
    // 80040FB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80040FB4:
    ctx->pc = 0x80040FB4u;
    // 80040FB4: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040FB8:
    ctx->pc = 0x80040FB8u;
    // 80040FB8: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80040FBC:
    ctx->pc = 0x80040FBCu;
    // 80040FBC: bl      0x80040FD0
    {
            ctx->lr = 0x80040FC0u;
            goto label_80040FD0;
    }

label_80040FC0:
    ctx->pc = 0x80040FC0u;
    ctx->downcount -= 5;
    // 80040FC0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80040FC4:
    ctx->pc = 0x80040FC4u;
    // 80040FC4: addi    r1, r1, 8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(8);

label_80040FC8:
    ctx->pc = 0x80040FC8u;
    // 80040FC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80040FCC:
    ctx->pc = 0x80040FCCu;
    // 80040FCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80040FD0:
    ctx->pc = 0x80040FD0u;
    ctx->downcount -= 7;
    // 80040FD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80040FD4:
    ctx->pc = 0x80040FD4u;
    // 80040FD4: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80040FD8:
    ctx->pc = 0x80040FD8u;
    // 80040FD8: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80040FDC:
    ctx->pc = 0x80040FDCu;
    // 80040FDC: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80040FE0:
    ctx->pc = 0x80040FE0u;
    // 80040FE0: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80040FE4:
    ctx->pc = 0x80040FE4u;
    // 80040FE4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80040FE8:
    ctx->pc = 0x80040FE8u;
    // 80040FE8: bl      0x80020680
    {
            ctx->lr = 0x80040FECu;
            ctx->pc = 0x80020680u;
            return;
    }

label_80040FEC:
    ctx->pc = 0x80040FECu;
    ctx->downcount -= 2;
    // 80040FEC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80040FF0:
    ctx->pc = 0x80040FF0u;
    // 80040FF0: bl      0x80042570
    {
            ctx->lr = 0x80040FF4u;
            ctx->pc = 0x80042570u;
            return;
    }

label_80040FF4:
    ctx->pc = 0x80040FF4u;
    ctx->downcount -= 16;
    // 80040FF4: lwz     r3, -31200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040FF8:
    ctx->pc = 0x80040FF8u;
    // 80040FF8: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80040FFC:
    ctx->pc = 0x80040FFCu;
    // 80040FFC: addis   r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-32768) << 16);

label_80041000:
    ctx->pc = 0x80041000u;
    // 80041000: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041004:
    ctx->pc = 0x80041004u;
    // 80041004: lwz     r3, -31200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041008:
    ctx->pc = 0x80041008u;
    // 80041008: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004100C:
    ctx->pc = 0x8004100Cu;
    // 8004100C: addis   r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-32768) << 16);

label_80041010:
    ctx->pc = 0x80041010u;
    // 80041010: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041014:
    ctx->pc = 0x80041014u;
    // 80041014: lwz     r3, -31200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041018:
    ctx->pc = 0x80041018u;
    // 80041018: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004101C:
    ctx->pc = 0x8004101Cu;
    // 8004101C: rlwinm r3, r0, 0, 6, 4
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFBFFFFFFu;
    }

label_80041020:
    ctx->pc = 0x80041020u;
    // 80041020: addis   r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-32768) << 16);

label_80041024:
    ctx->pc = 0x80041024u;
    // 80041024: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041028:
    ctx->pc = 0x80041028u;
    // 80041028: lbz     r0, -31148(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31148);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8004102C:
    ctx->pc = 0x8004102Cu;
    // 8004102C: cmplwi  r0, 0x0000
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

label_80041030:
    ctx->pc = 0x80041030u;
    // 80041030: bc    12, 2, 0x80041064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80041064;
        }
    }

label_80041034:
    ctx->pc = 0x80041034u;
    ctx->downcount -= 12;
    // 80041034: lwz     r4, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80041038:
    ctx->pc = 0x80041038u;
    // 80041038: lhz     r3, 58(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(58);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8004103C:
    ctx->pc = 0x8004103Cu;
    // 8004103C: lhz     r4, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80041040:
    ctx->pc = 0x80041040u;
    // 80041040: rlwimi r4, r3, 16, 0, 15
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 16u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0xFFFF0000u) | (rot & 0xFFFF0000u);
    }

label_80041044:
    ctx->pc = 0x80041044u;
    // 80041044: addis   r0, r4, -32768
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(-32768) << 16);

label_80041048:
    ctx->pc = 0x80041048u;
    // 80041048: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004104C:
    ctx->pc = 0x8004104Cu;
    // 8004104C: lwz     r4, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80041050:
    ctx->pc = 0x80041050u;
    // 80041050: lhz     r3, 50(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(50);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80041054:
    ctx->pc = 0x80041054u;
    // 80041054: lhz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80041058:
    ctx->pc = 0x80041058u;
    // 80041058: rlwimi r0, r3, 16, 0, 15
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 16u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFFFF0000u) | (rot & 0xFFFF0000u);
    }

label_8004105C:
    ctx->pc = 0x8004105Cu;
    // 8004105C: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041060:
    ctx->pc = 0x80041060u;
    // 80041060: b       0x8004108C
    {
            goto label_8004108C;
    }

label_80041064:
    ctx->pc = 0x80041064u;
    ctx->downcount -= 7;
    // 80041064: lwz     r3, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041068:
    ctx->pc = 0x80041068u;
    // 80041068: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004106C:
    ctx->pc = 0x8004106Cu;
    // 8004106C: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80041070:
    ctx->pc = 0x80041070u;
    // 80041070: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041074:
    ctx->pc = 0x80041074u;
    // 80041074: lwz     r3, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041078:
    ctx->pc = 0x80041078u;
    // 80041078: cmpwi   r3, 0
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

label_8004107C:
    ctx->pc = 0x8004107Cu;
    // 8004107C: bc    4, 0, 0x8004108C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004108C;
        }
    }

label_80041080:
    ctx->pc = 0x80041080u;
    ctx->downcount -= 3;
    // 80041080: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041084:
    ctx->pc = 0x80041084u;
    // 80041084: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80041088:
    ctx->pc = 0x80041088u;
    // 80041088: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004108C:
    ctx->pc = 0x8004108Cu;
    ctx->downcount -= 2;
    // 8004108C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80041090:
    ctx->pc = 0x80041090u;
    // 80041090: bl      0x800206A8
    {
            ctx->lr = 0x80041094u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_80041094:
    ctx->pc = 0x80041094u;
    ctx->downcount -= 7;
    // 80041094: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041098:
    ctx->pc = 0x80041098u;
    // 80041098: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8004109C:
    ctx->pc = 0x8004109Cu;
    // 8004109C: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800410A0:
    ctx->pc = 0x800410A0u;
    // 800410A0: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_800410A4:
    ctx->pc = 0x800410A4u;
    // 800410A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800410A8:
    ctx->pc = 0x800410A8u;
    // 800410A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_800410AC:
    ctx->pc = 0x800410ACu;
    ctx->downcount -= 20;
    // 800410AC: lwz     r9, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_800410B0:
    ctx->pc = 0x800410B0u;
    // 800410B0: lwz     r8, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_800410B4:
    ctx->pc = 0x800410B4u;
    // 800410B4: lhz     r0, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800410B8:
    ctx->pc = 0x800410B8u;
    // 800410B8: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800410BC:
    ctx->pc = 0x800410BCu;
    // 800410BC: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800410C0:
    ctx->pc = 0x800410C0u;
    // 800410C0: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_800410C4:
    ctx->pc = 0x800410C4u;
    // 800410C4: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800410C8:
    ctx->pc = 0x800410C8u;
    // 800410C8: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800410CC:
    ctx->pc = 0x800410CCu;
    // 800410CC: rlwinm r0, r0, 31, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 31u) & 0x00000001u;
    }

label_800410D0:
    ctx->pc = 0x800410D0u;
    // 800410D0: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800410D4:
    ctx->pc = 0x800410D4u;
    // 800410D4: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800410D8:
    ctx->pc = 0x800410D8u;
    // 800410D8: rlwinm r0, r0, 30, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x00000001u;
    }

label_800410DC:
    ctx->pc = 0x800410DCu;
    // 800410DC: stb     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800410E0:
    ctx->pc = 0x800410E0u;
    // 800410E0: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800410E4:
    ctx->pc = 0x800410E4u;
    // 800410E4: rlwinm r0, r0, 29, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 29u) & 0x00000001u;
    }

label_800410E8:
    ctx->pc = 0x800410E8u;
    // 800410E8: stb     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800410EC:
    ctx->pc = 0x800410ECu;
    // 800410EC: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800410F0:
    ctx->pc = 0x800410F0u;
    // 800410F0: rlwinm r0, r0, 28, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 28u) & 0x00000001u;
    }

label_800410F4:
    ctx->pc = 0x800410F4u;
    // 800410F4: stb     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800410F8:
    ctx->pc = 0x800410F8u;
    // 800410F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_800410FC:
    ctx->pc = 0x800410FCu;
    ctx->downcount -= 3;
    // 800410FC: lwz     r0, -31160(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041100:
    ctx->pc = 0x80041100u;
    // 80041100: cmplw   r3, r0
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

label_80041104:
    ctx->pc = 0x80041104u;
    // 80041104: bc    4, 2, 0x8004111C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004111C;
        }
    }

label_80041108:
    ctx->pc = 0x80041108u;
    ctx->downcount -= 5;
    // 80041108: lwz     r6, -31200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31200);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004110C:
    ctx->pc = 0x8004110Cu;
    // 8004110C: lwz     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041110:
    ctx->pc = 0x80041110u;
    // 80041110: rlwinm r6, r0, 0, 6, 4
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFBFFFFFFu;
    }

label_80041114:
    ctx->pc = 0x80041114u;
    // 80041114: addis   r0, r6, -32768
    ctx->gpr[0] = ctx->gpr[6] + ((u32)(s32)(-32768) << 16);

label_80041118:
    ctx->pc = 0x80041118u;
    // 80041118: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004111C:
    ctx->pc = 0x8004111Cu;
    ctx->downcount -= 3;
    // 8004111C: lwz     r0, -31156(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041120:
    ctx->pc = 0x80041120u;
    // 80041120: cmplw   r3, r0
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

label_80041124:
    ctx->pc = 0x80041124u;
    // 80041124: bc    4, 2, 0x80041158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80041158;
        }
    }

label_80041128:
    ctx->pc = 0x80041128u;
    ctx->downcount -= 12;
    // 80041128: lwz     r7, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8004112C:
    ctx->pc = 0x8004112Cu;
    // 8004112C: lhz     r6, 58(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(58);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80041130:
    ctx->pc = 0x80041130u;
    // 80041130: lhz     r7, 56(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(56);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_80041134:
    ctx->pc = 0x80041134u;
    // 80041134: rlwimi r7, r6, 16, 0, 15
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 16u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0xFFFF0000u) | (rot & 0xFFFF0000u);
    }

label_80041138:
    ctx->pc = 0x80041138u;
    // 80041138: addis   r0, r7, -32768
    ctx->gpr[0] = ctx->gpr[7] + ((u32)(s32)(-32768) << 16);

label_8004113C:
    ctx->pc = 0x8004113Cu;
    // 8004113C: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041140:
    ctx->pc = 0x80041140u;
    // 80041140: lwz     r7, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80041144:
    ctx->pc = 0x80041144u;
    // 80041144: lhz     r6, 50(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(50);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80041148:
    ctx->pc = 0x80041148u;
    // 80041148: lhz     r0, 48(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8004114C:
    ctx->pc = 0x8004114Cu;
    // 8004114C: rlwimi r0, r6, 16, 0, 15
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 16u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0xFFFF0000u) | (rot & 0xFFFF0000u);
    }

label_80041150:
    ctx->pc = 0x80041150u;
    // 80041150: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041154:
    ctx->pc = 0x80041154u;
    // 80041154: b       0x80041180
    {
            goto label_80041180;
    }

label_80041158:
    ctx->pc = 0x80041158u;
    ctx->downcount -= 7;
    // 80041158: lwz     r6, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004115C:
    ctx->pc = 0x8004115Cu;
    // 8004115C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041160:
    ctx->pc = 0x80041160u;
    // 80041160: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80041164:
    ctx->pc = 0x80041164u;
    // 80041164: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041168:
    ctx->pc = 0x80041168u;
    // 80041168: lwz     r6, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8004116C:
    ctx->pc = 0x8004116Cu;
    // 8004116C: cmpwi   r6, 0
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

label_80041170:
    ctx->pc = 0x80041170u;
    // 80041170: bc    4, 0, 0x80041180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80041180;
        }
    }

label_80041174:
    ctx->pc = 0x80041174u;
    ctx->downcount -= 3;
    // 80041174: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041178:
    ctx->pc = 0x80041178u;
    // 80041178: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8004117C:
    ctx->pc = 0x8004117Cu;
    // 8004117C: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041180:
    ctx->pc = 0x80041180u;
    ctx->downcount -= 5;
    // 80041180: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041184:
    ctx->pc = 0x80041184u;
    // 80041184: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041188:
    ctx->pc = 0x80041188u;
    // 80041188: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004118C:
    ctx->pc = 0x8004118Cu;
    // 8004118C: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041190:
    ctx->pc = 0x80041190u;
    // 80041190: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80041194:
    ctx->pc = 0x80041194u;
    ctx->downcount -= 8;
    // 80041194: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80041198:
    ctx->pc = 0x80041198u;
    // 80041198: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004119C:
    ctx->pc = 0x8004119Cu;
    // 8004119C: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800411A0:
    ctx->pc = 0x800411A0u;
    // 800411A0: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800411A4:
    ctx->pc = 0x800411A4u;
    // 800411A4: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800411A8:
    ctx->pc = 0x800411A8u;
    // 800411A8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800411AC:
    ctx->pc = 0x800411ACu;
    // 800411AC: lwz     r31, -31140(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31140);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800411B0:
    ctx->pc = 0x800411B0u;
    // 800411B0: bl      0x80020680
    {
            ctx->lr = 0x800411B4u;
            ctx->pc = 0x80020680u;
            return;
    }

label_800411B4:
    ctx->pc = 0x800411B4u;
    ctx->downcount -= 2;
    // 800411B4: stw     r30, -31140(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31140);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800411B8:
    ctx->pc = 0x800411B8u;
    // 800411B8: bl      0x800206A8
    {
            ctx->lr = 0x800411BCu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_800411BC:
    ctx->pc = 0x800411BCu;
    ctx->downcount -= 8;
    // 800411BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800411C0:
    ctx->pc = 0x800411C0u;
    // 800411C0: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800411C4:
    ctx->pc = 0x800411C4u;
    // 800411C4: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800411C8:
    ctx->pc = 0x800411C8u;
    // 800411C8: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800411CC:
    ctx->pc = 0x800411CCu;
    // 800411CC: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_800411D0:
    ctx->pc = 0x800411D0u;
    // 800411D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800411D4:
    ctx->pc = 0x800411D4u;
    // 800411D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_800411D8:
    ctx->pc = 0x800411D8u;
    ctx->downcount -= 7;
    // 800411D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800411DC:
    ctx->pc = 0x800411DCu;
    // 800411DC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800411E0:
    ctx->pc = 0x800411E0u;
    // 800411E0: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800411E4:
    ctx->pc = 0x800411E4u;
    // 800411E4: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800411E8:
    ctx->pc = 0x800411E8u;
    // 800411E8: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800411EC:
    ctx->pc = 0x800411ECu;
    // 800411EC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800411F0:
    ctx->pc = 0x800411F0u;
    // 800411F0: bl      0x80020680
    {
            ctx->lr = 0x800411F4u;
            ctx->pc = 0x80020680u;
            return;
    }

label_800411F4:
    ctx->pc = 0x800411F4u;
    ctx->downcount -= 2;
    // 800411F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800411F8:
    ctx->pc = 0x800411F8u;
    // 800411F8: bl      0x800412D4
    {
            ctx->lr = 0x800411FCu;
            goto label_800412D4;
    }

label_800411FC:
    ctx->pc = 0x800411FCu;
    ctx->downcount -= 18;
    // 800411FC: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041200:
    ctx->pc = 0x80041200u;
    // 80041200: rlwinm r0, r30, 16, 18, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 16u) & 0x00003FFFu;
    }

label_80041204:
    ctx->pc = 0x80041204u;
    // 80041204: sth     r30, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_80041208:
    ctx->pc = 0x80041208u;
    // 80041208: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8004120C:
    ctx->pc = 0x8004120Cu;
    // 8004120C: lwz     r4, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80041210:
    ctx->pc = 0x80041210u;
    // 80041210: sth     r0, 62(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80041214:
    ctx->pc = 0x80041214u;
    // 80041214: lwz     r4, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80041218:
    ctx->pc = 0x80041218u;
    // 80041218: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004121C:
    ctx->pc = 0x8004121Cu;
    // 8004121C: rlwimi r0, r3, 1, 30, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 1u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000002u) | (rot & 0x00000002u);
    }

label_80041220:
    ctx->pc = 0x80041220u;
    // 80041220: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041224:
    ctx->pc = 0x80041224u;
    // 80041224: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041228:
    ctx->pc = 0x80041228u;
    // 80041228: rlwimi r0, r3, 5, 26, 26
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 5u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000020u) | (rot & 0x00000020u);
    }

label_8004122C:
    ctx->pc = 0x8004122Cu;
    // 8004122C: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041230:
    ctx->pc = 0x80041230u;
    // 80041230: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041234:
    ctx->pc = 0x80041234u;
    // 80041234: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041238:
    ctx->pc = 0x80041238u;
    // 80041238: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8004123C:
    ctx->pc = 0x8004123Cu;
    // 8004123C: stw     r30, -31132(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31132);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80041240:
    ctx->pc = 0x80041240u;
    // 80041240: bl      0x800412B0
    {
            ctx->lr = 0x80041244u;
            goto label_800412B0;
    }

label_80041244:
    ctx->pc = 0x80041244u;
    ctx->downcount -= 2;
    // 80041244: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80041248:
    ctx->pc = 0x80041248u;
    // 80041248: bl      0x800206A8
    {
            ctx->lr = 0x8004124Cu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8004124C:
    ctx->pc = 0x8004124Cu;
    ctx->downcount -= 7;
    // 8004124C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041250:
    ctx->pc = 0x80041250u;
    // 80041250: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80041254:
    ctx->pc = 0x80041254u;
    // 80041254: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80041258:
    ctx->pc = 0x80041258u;
    // 80041258: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8004125C:
    ctx->pc = 0x8004125Cu;
    // 8004125C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80041260:
    ctx->pc = 0x80041260u;
    // 80041260: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80041264:
    ctx->pc = 0x80041264u;
    ctx->downcount -= 7;
    // 80041264: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80041268:
    ctx->pc = 0x80041268u;
    // 80041268: lis     r3, -32764
    ctx->gpr[3] = ((u32)(s32)(-32764) << 16);

label_8004126C:
    ctx->pc = 0x8004126Cu;
    // 8004126C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041270:
    ctx->pc = 0x80041270u;
    // 80041270: addi    r4, r3, 2804
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(2804);

label_80041274:
    ctx->pc = 0x80041274u;
    // 80041274: li      r3, 17
    ctx->gpr[3] = (u32)(s32)(17);

label_80041278:
    ctx->pc = 0x80041278u;
    // 80041278: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8004127C:
    ctx->pc = 0x8004127Cu;
    // 8004127C: bl      0x800206CC
    {
            ctx->lr = 0x80041280u;
            ctx->pc = 0x800206CCu;
            return;
    }

label_80041280:
    ctx->pc = 0x80041280u;
    ctx->downcount -= 2;
    // 80041280: li      r3, 16384
    ctx->gpr[3] = (u32)(s32)(16384);

label_80041284:
    ctx->pc = 0x80041284u;
    // 80041284: bl      0x80020AD0
    {
            ctx->lr = 0x80041288u;
            ctx->pc = 0x80020AD0u;
            return;
    }

label_80041288:
    ctx->pc = 0x80041288u;
    ctx->downcount -= 1;
    // 80041288: bl      0x8002399C
    {
            ctx->lr = 0x8004128Cu;
            ctx->pc = 0x8002399Cu;
            return;
    }

label_8004128C:
    ctx->pc = 0x8004128Cu;
    ctx->downcount -= 10;
    // 8004128C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80041290:
    ctx->pc = 0x80041290u;
    // 80041290: stw     r3, -31152(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80041294:
    ctx->pc = 0x80041294u;
    // 80041294: stw     r0, -31144(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041298:
    ctx->pc = 0x80041298u;
    // 80041298: stw     r0, -31160(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004129C:
    ctx->pc = 0x8004129Cu;
    // 8004129C: stw     r0, -31156(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800412A0:
    ctx->pc = 0x800412A0u;
    // 800412A0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800412A4:
    ctx->pc = 0x800412A4u;
    // 800412A4: addi    r1, r1, 8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(8);

label_800412A8:
    ctx->pc = 0x800412A8u;
    // 800412A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800412AC:
    ctx->pc = 0x800412ACu;
    // 800412AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_800412B0:
    ctx->pc = 0x800412B0u;
    ctx->downcount -= 9;
    // 800412B0: lwz     r4, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800412B4:
    ctx->pc = 0x800412B4u;
    // 800412B4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800412B8:
    ctx->pc = 0x800412B8u;
    // 800412B8: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800412BC:
    ctx->pc = 0x800412BCu;
    // 800412BC: rlwimi r3, r0, 0, 31, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 0u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x00000001u) | (rot & 0x00000001u);
    }

label_800412C0:
    ctx->pc = 0x800412C0u;
    // 800412C0: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800412C4:
    ctx->pc = 0x800412C4u;
    // 800412C4: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800412C8:
    ctx->pc = 0x800412C8u;
    // 800412C8: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800412CC:
    ctx->pc = 0x800412CCu;
    // 800412CC: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800412D0:
    ctx->pc = 0x800412D0u;
    // 800412D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_800412D4:
    ctx->pc = 0x800412D4u;
    ctx->downcount -= 9;
    // 800412D4: lwz     r4, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800412D8:
    ctx->pc = 0x800412D8u;
    // 800412D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800412DC:
    ctx->pc = 0x800412DCu;
    // 800412DC: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800412E0:
    ctx->pc = 0x800412E0u;
    // 800412E0: rlwimi r3, r0, 0, 31, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 0u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x00000001u) | (rot & 0x00000001u);
    }

label_800412E4:
    ctx->pc = 0x800412E4u;
    // 800412E4: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800412E8:
    ctx->pc = 0x800412E8u;
    // 800412E8: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800412EC:
    ctx->pc = 0x800412ECu;
    // 800412EC: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800412F0:
    ctx->pc = 0x800412F0u;
    // 800412F0: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800412F4:
    ctx->pc = 0x800412F4u;
    // 800412F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_800412F8:
    ctx->pc = 0x800412F8u;
    ctx->downcount -= 2;
    // 800412F8: rlwinm. r0, r3, 0, 24, 31
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

label_800412FC:
    ctx->pc = 0x800412FCu;
    // 800412FC: bc    12, 2, 0x80041308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80041308;
        }
    }

label_80041300:
    ctx->pc = 0x80041300u;
    ctx->downcount -= 2;
    // 80041300: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80041304:
    ctx->pc = 0x80041304u;
    // 80041304: b       0x8004130C
    {
            goto label_8004130C;
    }

label_80041308:
    ctx->pc = 0x80041308u;
    ctx->downcount -= 1;
    // 80041308: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8004130C:
    ctx->pc = 0x8004130Cu;
    ctx->downcount -= 8;
    // 8004130C: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041310:
    ctx->pc = 0x80041310u;
    // 80041310: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041314:
    ctx->pc = 0x80041314u;
    // 80041314: rlwimi r0, r4, 4, 27, 27
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 4u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000010u) | (rot & 0x00000010u);
    }

label_80041318:
    ctx->pc = 0x80041318u;
    // 80041318: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004131C:
    ctx->pc = 0x8004131Cu;
    // 8004131C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041320:
    ctx->pc = 0x80041320u;
    // 80041320: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041324:
    ctx->pc = 0x80041324u;
    // 80041324: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80041328:
    ctx->pc = 0x80041328u;
    // 80041328: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8004132C:
    ctx->pc = 0x8004132Cu;
    ctx->downcount -= 12;
    // 8004132C: lwz     r5, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80041330:
    ctx->pc = 0x80041330u;
    // 80041330: rlwinm r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_80041334:
    ctx->pc = 0x80041334u;
    // 80041334: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80041338:
    ctx->pc = 0x80041338u;
    // 80041338: rlwimi r4, r3, 2, 29, 29
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 2u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x00000004u) | (rot & 0x00000004u);
    }

label_8004133C:
    ctx->pc = 0x8004133Cu;
    // 8004133C: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80041340:
    ctx->pc = 0x80041340u;
    // 80041340: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041344:
    ctx->pc = 0x80041344u;
    // 80041344: rlwimi r3, r0, 3, 28, 28
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 3u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x00000008u) | (rot & 0x00000008u);
    }

label_80041348:
    ctx->pc = 0x80041348u;
    // 80041348: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004134C:
    ctx->pc = 0x8004134Cu;
    // 8004134C: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041350:
    ctx->pc = 0x80041350u;
    // 80041350: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041354:
    ctx->pc = 0x80041354u;
    // 80041354: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80041358:
    ctx->pc = 0x80041358u;
    // 80041358: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8004135C:
    ctx->pc = 0x8004135Cu;
    ctx->downcount -= 12;
    // 8004135C: lwz     r5, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80041360:
    ctx->pc = 0x80041360u;
    // 80041360: rlwinm r0, r4, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_80041364:
    ctx->pc = 0x80041364u;
    // 80041364: lwz     r4, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80041368:
    ctx->pc = 0x80041368u;
    // 80041368: rlwimi r4, r3, 0, 31, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[4] = (ctx->gpr[4] & ~0x00000001u) | (rot & 0x00000001u);
    }

label_8004136C:
    ctx->pc = 0x8004136Cu;
    // 8004136C: stw     r4, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80041370:
    ctx->pc = 0x80041370u;
    // 80041370: lwz     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041374:
    ctx->pc = 0x80041374u;
    // 80041374: rlwimi r3, r0, 1, 30, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[0], 1u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x00000002u) | (rot & 0x00000002u);
    }

label_80041378:
    ctx->pc = 0x80041378u;
    // 80041378: stw     r3, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8004137C:
    ctx->pc = 0x8004137Cu;
    // 8004137C: lwz     r0, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041380:
    ctx->pc = 0x80041380u;
    // 80041380: lwz     r3, -31196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041384:
    ctx->pc = 0x80041384u;
    // 80041384: sth     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80041388:
    ctx->pc = 0x80041388u;
    // 80041388: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8004138C:
    ctx->pc = 0x8004138Cu;
    ctx->downcount -= 7;
    // 8004138C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80041390:
    ctx->pc = 0x80041390u;
    // 80041390: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041394:
    ctx->pc = 0x80041394u;
    // 80041394: stwu     r1, -168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-168);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80041398:
    ctx->pc = 0x80041398u;
    // 80041398: stw     r31, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004139C:
    ctx->pc = 0x8004139Cu;
    // 8004139C: stw     r30, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800413A0:
    ctx->pc = 0x800413A0u;
    // 800413A0: stw     r29, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800413A4:
    ctx->pc = 0x800413A4u;
    // 800413A4: bl      0x800414E0
    {
            ctx->lr = 0x800413A8u;
            goto label_800414E0;
    }

label_800413A8:
    ctx->pc = 0x800413A8u;
    ctx->downcount -= 2;
    // 800413A8: or.   r31, r3, r3
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

label_800413AC:
    ctx->pc = 0x800413ACu;
    // 800413AC: bc    12, 2, 0x80041470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80041470;
        }
    }

label_800413B0:
    ctx->pc = 0x800413B0u;
    ctx->downcount -= 1;
    // 800413B0: bl      0x800414D8
    {
            ctx->lr = 0x800413B4u;
            goto label_800414D8;
    }

label_800413B4:
    ctx->pc = 0x800413B4u;
    ctx->downcount -= 7;
    // 800413B4: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_800413B8:
    ctx->pc = 0x800413B8u;
    // 800413B8: lwz     r29, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800413BC:
    ctx->pc = 0x800413BCu;
    // 800413BC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_800413C0:
    ctx->pc = 0x800413C0u;
    // 800413C0: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_800413C4:
    ctx->pc = 0x800413C4u;
    // 800413C4: addi    r5, r1, 12
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(12);

label_800413C8:
    ctx->pc = 0x800413C8u;
    // 800413C8: addi    r4, r31, -8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(-8);

label_800413CC:
    loop_800413CC(ctx);
    if (ctx->pc == 0x800413E0u) goto label_800413E0;
    return;
label_800413D0:
    ctx->pc = 0x800413D0u;
    // 800413D0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800413D4:
    ctx->pc = 0x800413D4u;
    // 800413D4: stwu     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
        ctx->gpr[5] = ea;
    }

label_800413D8:
    ctx->pc = 0x800413D8u;
    // 800413D8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800413DC:
    // 800413DC: bc    16, 0, 0x800413CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800413CCu;
                return;
            }
            goto label_800413CC;
        }
    }

label_800413E0:
    ctx->pc = 0x800413E0u;
    ctx->downcount -= 1;
    // 800413E0: bl      0x80020680
    {
            ctx->lr = 0x800413E4u;
            ctx->pc = 0x80020680u;
            return;
    }

label_800413E4:
    ctx->pc = 0x800413E4u;
    ctx->downcount -= 7;
    // 800413E4: stw     r29, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800413E8:
    ctx->pc = 0x800413E8u;
    // 800413E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800413EC:
    ctx->pc = 0x800413ECu;
    // 800413EC: stw     r29, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800413F0:
    ctx->pc = 0x800413F0u;
    // 800413F0: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800413F4:
    ctx->pc = 0x800413F4u;
    // 800413F4: lwz     r4, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800413F8:
    ctx->pc = 0x800413F8u;
    // 800413F8: cmpwi   r4, 0
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

label_800413FC:
    ctx->pc = 0x800413FCu;
    // 800413FC: bc    4, 0, 0x8004140C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8004140C;
        }
    }

label_80041400:
    ctx->pc = 0x80041400u;
    ctx->downcount -= 3;
    // 80041400: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041404:
    ctx->pc = 0x80041404u;
    // 80041404: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80041408:
    ctx->pc = 0x80041408u;
    // 80041408: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004140C:
    ctx->pc = 0x8004140Cu;
    ctx->downcount -= 1;
    // 8004140C: bl      0x800206A8
    {
            ctx->lr = 0x80041410u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_80041410:
    ctx->pc = 0x80041410u;
    ctx->downcount -= 2;
    // 80041410: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_80041414:
    ctx->pc = 0x80041414u;
    // 80041414: bl      0x80040E38
    {
            ctx->lr = 0x80041418u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80040E38u;
                return;
            }
            goto label_80040E38;
    }

label_80041418:
    ctx->pc = 0x80041418u;
    ctx->downcount -= 2;
    // 80041418: cmplw   r30, r31
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8004141C:
    ctx->pc = 0x8004141Cu;
    // 8004141C: bc    4, 2, 0x80041428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80041428;
        }
    }

label_80041420:
    ctx->pc = 0x80041420u;
    ctx->downcount -= 2;
    // 80041420: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_80041424:
    ctx->pc = 0x80041424u;
    // 80041424: bl      0x80040D10
    {
            ctx->lr = 0x80041428u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80040D10u;
                return;
            }
            goto label_80040D10;
    }

label_80041428:
    ctx->pc = 0x80041428u;
    ctx->downcount -= 1;
    // 80041428: bl      0x80020680
    {
            ctx->lr = 0x8004142Cu;
            ctx->pc = 0x80020680u;
            return;
    }

label_8004142C:
    ctx->pc = 0x8004142Cu;
    ctx->downcount -= 7;
    // 8004142C: stw     r29, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80041430:
    ctx->pc = 0x80041430u;
    // 80041430: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80041434:
    ctx->pc = 0x80041434u;
    // 80041434: stw     r29, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80041438:
    ctx->pc = 0x80041438u;
    // 80041438: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004143C:
    ctx->pc = 0x8004143Cu;
    // 8004143C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80041440:
    ctx->pc = 0x80041440u;
    // 80041440: cmpwi   r4, 0
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

label_80041444:
    ctx->pc = 0x80041444u;
    // 80041444: bc    4, 0, 0x80041454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80041454;
        }
    }

label_80041448:
    ctx->pc = 0x80041448u;
    ctx->downcount -= 3;
    // 80041448: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004144C:
    ctx->pc = 0x8004144Cu;
    // 8004144C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80041450:
    ctx->pc = 0x80041450u;
    // 80041450: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041454:
    ctx->pc = 0x80041454u;
    ctx->downcount -= 1;
    // 80041454: bl      0x800206A8
    {
            ctx->lr = 0x80041458u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_80041458:
    ctx->pc = 0x80041458u;
    ctx->downcount -= 2;
    // 80041458: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8004145C:
    ctx->pc = 0x8004145Cu;
    // 8004145C: bl      0x80040E38
    {
            ctx->lr = 0x80041460u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80040E38u;
                return;
            }
            goto label_80040E38;
    }

label_80041460:
    ctx->pc = 0x80041460u;
    ctx->downcount -= 2;
    // 80041460: cmplw   r30, r31
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80041464:
    ctx->pc = 0x80041464u;
    // 80041464: bc    4, 2, 0x80041470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80041470;
        }
    }

label_80041468:
    ctx->pc = 0x80041468u;
    ctx->downcount -= 2;
    // 80041468: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8004146C:
    ctx->pc = 0x8004146Cu;
    // 8004146C: bl      0x80040D10
    {
            ctx->lr = 0x80041470u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80040D10u;
                return;
            }
            goto label_80040D10;
    }

label_80041470:
    ctx->pc = 0x80041470u;
    ctx->downcount -= 8;
    // 80041470: lwz     r0, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041474:
    ctx->pc = 0x80041474u;
    // 80041474: lwz     r31, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80041478:
    ctx->pc = 0x80041478u;
    // 80041478: lwz     r30, 160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8004147C:
    ctx->pc = 0x8004147Cu;
    // 8004147C: lwz     r29, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80041480:
    ctx->pc = 0x80041480u;
    // 80041480: addi    r1, r1, 168
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(168);

label_80041484:
    ctx->pc = 0x80041484u;
    // 80041484: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80041488:
    ctx->pc = 0x80041488u;
    // 80041488: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_8004148C:
    ctx->pc = 0x8004148Cu;
    ctx->downcount -= 6;
    // 8004148C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80041490:
    ctx->pc = 0x80041490u;
    // 80041490: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041494:
    ctx->pc = 0x80041494u;
    // 80041494: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80041498:
    ctx->pc = 0x80041498u;
    // 80041498: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8004149C:
    ctx->pc = 0x8004149Cu;
    // 8004149C: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800414A0:
    ctx->pc = 0x800414A0u;
    // 800414A0: bl      0x80020680
    {
            ctx->lr = 0x800414A4u;
            ctx->pc = 0x80020680u;
            return;
    }

label_800414A4:
    ctx->pc = 0x800414A4u;
    ctx->downcount -= 3;
    // 800414A4: lwz     r30, -31152(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31152);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800414A8:
    ctx->pc = 0x800414A8u;
    // 800414A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800414AC:
    ctx->pc = 0x800414ACu;
    // 800414AC: bl      0x8002399C
    {
            ctx->lr = 0x800414B0u;
            ctx->pc = 0x8002399Cu;
            return;
    }

label_800414B0:
    ctx->pc = 0x800414B0u;
    ctx->downcount -= 3;
    // 800414B0: stw     r3, -31152(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800414B4:
    ctx->pc = 0x800414B4u;
    // 800414B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800414B8:
    ctx->pc = 0x800414B8u;
    // 800414B8: bl      0x800206A8
    {
            ctx->lr = 0x800414BCu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_800414BC:
    ctx->pc = 0x800414BCu;
    ctx->downcount -= 8;
    // 800414BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_800414C0:
    ctx->pc = 0x800414C0u;
    // 800414C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800414C4:
    ctx->pc = 0x800414C4u;
    // 800414C4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800414C8:
    ctx->pc = 0x800414C8u;
    // 800414C8: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800414CC:
    ctx->pc = 0x800414CCu;
    // 800414CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800414D0:
    ctx->pc = 0x800414D0u;
    // 800414D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800414D4:
    ctx->pc = 0x800414D4u;
    // 800414D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_800414D8:
    ctx->pc = 0x800414D8u;
    ctx->downcount -= 2;
    // 800414D8: lwz     r3, -31160(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800414DC:
    ctx->pc = 0x800414DCu;
    // 800414DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_800414E0:
    ctx->pc = 0x800414E0u;
    ctx->downcount -= 2;
    // 800414E0: lwz     r3, -31156(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800414E4:
    ctx->pc = 0x800414E4u;
    // 800414E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_800414E8:
    ctx->pc = 0x800414E8u;
    ctx->downcount -= 2;
    // 800414E8: lwz     r3, -31136(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800414EC:
    ctx->pc = 0x800414ECu;
    // 800414EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_800414F0:
    ctx->pc = 0x800414F0u;
    ctx->downcount -= 4;
    // 800414F0: lwz     r3, -31136(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31136);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800414F4:
    ctx->pc = 0x800414F4u;
    // 800414F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800414F8:
    ctx->pc = 0x800414F8u;
    // 800414F8: stw     r0, -31136(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800414FC:
    ctx->pc = 0x800414FCu;
    // 800414FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8003D5E0;
        }
    }

label_80041500:
    ctx->pc = 0x80041500u;
    ctx->downcount -= 2;
    // 80041500: cmplwi  r3, 0x0019
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0019u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80041504:
    ctx->pc = 0x80041504u;
    // 80041504: bc    12, 1, 0x80041714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80041714u;
            return;
        }
    }

label_80041508:
    ctx->pc = 0x80041508u;
    ctx->downcount -= 7;
    // 80041508: lis     r5, -32738
    ctx->gpr[5] = ((u32)(s32)(-32738) << 16);

label_8004150C:
    ctx->pc = 0x8004150Cu;
    // 8004150C: addi    r5, r5, 26464
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(26464);

label_80041510:
    ctx->pc = 0x80041510u;
    // 80041510: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_80041514:
    ctx->pc = 0x80041514u;
    // 80041514: lwzx    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041518:
    ctx->pc = 0x80041518u;
    // 80041518: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8004151C:
    ctx->pc = 0x8004151Cu;
    // 8004151C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80041520:
    ctx->pc = 0x80041520u;
    ctx->downcount -= 5;
    // 80041520: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041524:
    ctx->pc = 0x80041524u;
    // 80041524: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041528:
    ctx->pc = 0x80041528u;
    // 80041528: rlwimi r0, r4, 0, 31, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000001u) | (rot & 0x00000001u);
    }

label_8004152C:
    ctx->pc = 0x8004152Cu;
    // 8004152C: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041530:
    ctx->pc = 0x80041530u;
    // 80041530: b       0x80041714
    {
            ctx->pc = 0x80041714u;
            return;
    }

label_80041534:
    ctx->pc = 0x80041534u;
    ctx->downcount -= 5;
    // 80041534: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041538:
    ctx->pc = 0x80041538u;
    // 80041538: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004153C:
    ctx->pc = 0x8004153Cu;
    // 8004153C: rlwimi r0, r4, 1, 30, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 1u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000002u) | (rot & 0x00000002u);
    }

label_80041540:
    ctx->pc = 0x80041540u;
    // 80041540: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041544:
    ctx->pc = 0x80041544u;
    // 80041544: b       0x80041714
    {
            ctx->pc = 0x80041714u;
            return;
    }

label_80041548:
    ctx->pc = 0x80041548u;
    ctx->downcount -= 5;
    // 80041548: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004154C:
    ctx->pc = 0x8004154Cu;
    // 8004154C: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041550:
    ctx->pc = 0x80041550u;
    // 80041550: rlwimi r0, r4, 2, 29, 29
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 2u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000004u) | (rot & 0x00000004u);
    }

label_80041554:
    ctx->pc = 0x80041554u;
    // 80041554: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041558:
    ctx->pc = 0x80041558u;
    // 80041558: b       0x80041714
    {
            ctx->pc = 0x80041714u;
            return;
    }

label_8004155C:
    ctx->pc = 0x8004155Cu;
    ctx->downcount -= 5;
    // 8004155C: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041560:
    ctx->pc = 0x80041560u;
    // 80041560: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041564:
    ctx->pc = 0x80041564u;
    // 80041564: rlwimi r0, r4, 3, 28, 28
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 3u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000008u) | (rot & 0x00000008u);
    }

label_80041568:
    ctx->pc = 0x80041568u;
    // 80041568: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8004156C:
    ctx->pc = 0x8004156Cu;
    // 8004156C: b       0x80041714
    {
            ctx->pc = 0x80041714u;
            return;
    }

label_80041570:
    ctx->pc = 0x80041570u;
    ctx->downcount -= 5;
    // 80041570: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041574:
    ctx->pc = 0x80041574u;
    // 80041574: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80041578:
    ctx->pc = 0x80041578u;
    // 80041578: rlwimi r0, r4, 4, 27, 27
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 4u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000010u) | (rot & 0x00000010u);
    }

label_8004157C:
    ctx->pc = 0x8004157Cu;
    // 8004157C: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041580:
    ctx->pc = 0x80041580u;
    // 80041580: b       0x80041714
    {
            ctx->pc = 0x80041714u;
            return;
    }

label_80041584:
    ctx->pc = 0x80041584u;
    ctx->downcount -= 5;
    // 80041584: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80041588:
    ctx->pc = 0x80041588u;
    // 80041588: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8004158C:
    ctx->pc = 0x8004158Cu;
    // 8004158C: rlwimi r0, r4, 5, 26, 26
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 5u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000020u) | (rot & 0x00000020u);
    }

label_80041590:
    ctx->pc = 0x80041590u;
    // 80041590: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80041594:
    ctx->pc = 0x80041594u;
    // 80041594: b       0x80041714
    {
            ctx->pc = 0x80041714u;
            return;
    }

label_80041598:
    ctx->pc = 0x80041598u;
    ctx->downcount -= 5;
    // 80041598: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8004159C:
    ctx->pc = 0x8004159Cu;
    // 8004159C: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800415A0:
    ctx->pc = 0x800415A0u;
    // 800415A0: rlwimi r0, r4, 6, 25, 25
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 6u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000040u) | (rot & 0x00000040u);
    }

label_800415A4:
    ctx->pc = 0x800415A4u;
    // 800415A4: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800415A8:
    ctx->pc = 0x800415A8u;
    // 800415A8: b       0x80041714
    {
            ctx->pc = 0x80041714u;
            return;
    }

label_800415AC:
    ctx->pc = 0x800415ACu;
    ctx->downcount -= 5;
    // 800415AC: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800415B0:
    ctx->pc = 0x800415B0u;
    // 800415B0: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800415B4:
    ctx->pc = 0x800415B4u;
    // 800415B4: rlwimi r0, r4, 7, 24, 24
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 7u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000080u) | (rot & 0x00000080u);
    }

label_800415B8:
    ctx->pc = 0x800415B8u;
    // 800415B8: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800415BC:
    ctx->pc = 0x800415BCu;
    // 800415BC: b       0x80041714
    {
            ctx->pc = 0x80041714u;
            return;
    }

label_800415C0:
    ctx->pc = 0x800415C0u;
    ctx->downcount -= 5;
    // 800415C0: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800415C4:
    ctx->pc = 0x800415C4u;
    // 800415C4: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800415C8:
    ctx->pc = 0x800415C8u;
    // 800415C8: rlwimi r0, r4, 8, 23, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 8u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000100u) | (rot & 0x00000100u);
    }

label_800415CC:
    ctx->pc = 0x800415CCu;
    // 800415CC: stw     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800415D0:
    ctx->pc = 0x800415D0u;
    // 800415D0: b       0x80041714
    {
            ctx->pc = 0x80041714u;
            return;
    }

label_800415D4:
    ctx->pc = 0x800415D4u;
    ctx->downcount -= 3;
    // 800415D4: lwz     r3, -31328(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800415D8:
    ctx->pc = 0x800415D8u;
    // 800415D8: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800415DC:
    ctx->pc = 0x800415DCu;
    // 800415DC: rlwimi r0, r4, 9, 21, 22
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 9u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000600u) | (rot & 0x00000600u);
    }

    ctx->pc = 0x800415E0u;
    return;
return_dispatch_8003D5E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x8003D5F8u: goto label_8003D5F8;
    case 0x8003D5FCu: goto label_8003D5FC;
    case 0x8003D610u: goto label_8003D610;
    case 0x8003D660u: goto label_8003D660;
    case 0x8003D698u: goto label_8003D698;
    case 0x8003D6CCu: goto label_8003D6CC;
    case 0x8003D708u: goto label_8003D708;
    case 0x8003D738u: goto label_8003D738;
    case 0x8003D774u: goto label_8003D774;
    case 0x8003D7A4u: goto label_8003D7A4;
    case 0x8003D7E0u: goto label_8003D7E0;
    case 0x8003D810u: goto label_8003D810;
    case 0x8003D84Cu: goto label_8003D84C;
    case 0x8003D87Cu: goto label_8003D87C;
    case 0x8003D8B8u: goto label_8003D8B8;
    case 0x8003D8E8u: goto label_8003D8E8;
    case 0x8003D924u: goto label_8003D924;
    case 0x8003D954u: goto label_8003D954;
    case 0x8003D990u: goto label_8003D990;
    case 0x8003D9ECu: goto label_8003D9EC;
    case 0x8003DA24u: goto label_8003DA24;
    case 0x8003DA4Cu: goto label_8003DA4C;
    case 0x8003DA80u: goto label_8003DA80;
    case 0x8003DAACu: goto label_8003DAAC;
    case 0x8003DAC8u: goto label_8003DAC8;
    case 0x8003DB08u: goto label_8003DB08;
    case 0x8003DB38u: goto label_8003DB38;
    case 0x8003DB7Cu: goto label_8003DB7C;
    case 0x8003DBA8u: goto label_8003DBA8;
    case 0x8003DBBCu: goto label_8003DBBC;
    case 0x8003DBF8u: goto label_8003DBF8;
    case 0x8003DC0Cu: goto label_8003DC0C;
    case 0x8003DC20u: goto label_8003DC20;
    case 0x8003DCECu: goto label_8003DCEC;
    case 0x8003DD04u: goto label_8003DD04;
    case 0x8003DD7Cu: goto label_8003DD7C;
    case 0x8003DD94u: goto label_8003DD94;
    case 0x8003DDE0u: goto label_8003DDE0;
    case 0x8003DDF8u: goto label_8003DDF8;
    case 0x8003DE24u: goto label_8003DE24;
    case 0x8003DE3Cu: goto label_8003DE3C;
    case 0x8003DE80u: goto label_8003DE80;
    case 0x8003DEBCu: goto label_8003DEBC;
    case 0x8003DED4u: goto label_8003DED4;
    case 0x8003DF00u: goto label_8003DF00;
    case 0x8003DF18u: goto label_8003DF18;
    case 0x8003DF90u: goto label_8003DF90;
    case 0x8003DFD0u: goto label_8003DFD0;
    case 0x8003DFE8u: goto label_8003DFE8;
    case 0x8003E0D4u: goto label_8003E0D4;
    case 0x8003E100u: goto label_8003E100;
    case 0x8003E114u: goto label_8003E114;
    case 0x8003E128u: goto label_8003E128;
    case 0x8003E160u: goto label_8003E160;
    case 0x8003E1B0u: goto label_8003E1B0;
    case 0x8003E1E4u: goto label_8003E1E4;
    case 0x8003E204u: goto label_8003E204;
    case 0x8003E260u: goto label_8003E260;
    case 0x8003E27Cu: goto label_8003E27C;
    case 0x8003E290u: goto label_8003E290;
    case 0x8003E2F0u: goto label_8003E2F0;
    case 0x8003E2FCu: goto label_8003E2FC;
    case 0x8003E30Cu: goto label_8003E30C;
    case 0x8003E320u: goto label_8003E320;
    case 0x8003E33Cu: goto label_8003E33C;
    case 0x8003E37Cu: goto label_8003E37C;
    case 0x8003E398u: goto label_8003E398;
    case 0x8003E3D8u: goto label_8003E3D8;
    case 0x8003E41Cu: goto label_8003E41C;
    case 0x8003E43Cu: goto label_8003E43C;
    case 0x8003E450u: goto label_8003E450;
    case 0x8003E464u: goto label_8003E464;
    case 0x8003E494u: goto label_8003E494;
    case 0x8003E4A0u: goto label_8003E4A0;
    case 0x8003E4C4u: goto label_8003E4C4;
    case 0x8003E518u: goto label_8003E518;
    case 0x8003E544u: goto label_8003E544;
    case 0x8003E554u: goto label_8003E554;
    case 0x8003E590u: goto label_8003E590;
    case 0x8003E5A4u: goto label_8003E5A4;
    case 0x8003E5F0u: goto label_8003E5F0;
    case 0x8003E638u: goto label_8003E638;
    case 0x8003E640u: goto label_8003E640;
    case 0x8003E67Cu: goto label_8003E67C;
    case 0x8003E6CCu: goto label_8003E6CC;
    case 0x8003E6D8u: goto label_8003E6D8;
    case 0x8003E720u: goto label_8003E720;
    case 0x8003E7ECu: goto label_8003E7EC;
    case 0x8003E858u: goto label_8003E858;
    case 0x8003E878u: goto label_8003E878;
    case 0x8003E88Cu: goto label_8003E88C;
    case 0x8003E8F8u: goto label_8003E8F8;
    case 0x8003E90Cu: goto label_8003E90C;
    case 0x8003E920u: goto label_8003E920;
    case 0x8003E930u: goto label_8003E930;
    case 0x8003E940u: goto label_8003E940;
    case 0x8003E9ACu: goto label_8003E9AC;
    case 0x8003E9C0u: goto label_8003E9C0;
    case 0x8003EA04u: goto label_8003EA04;
    case 0x8003EA18u: goto label_8003EA18;
    case 0x8003EA9Cu: goto label_8003EA9C;
    case 0x8003EAB8u: goto label_8003EAB8;
    case 0x8003EAC4u: goto label_8003EAC4;
    case 0x8003EADCu: goto label_8003EADC;
    case 0x8003EAECu: goto label_8003EAEC;
    case 0x8003EB44u: goto label_8003EB44;
    case 0x8003EB68u: goto label_8003EB68;
    case 0x8003EB7Cu: goto label_8003EB7C;
    case 0x8003EBF8u: goto label_8003EBF8;
    case 0x8003EC18u: goto label_8003EC18;
    case 0x8003EC2Cu: goto label_8003EC2C;
    case 0x8003EC80u: goto label_8003EC80;
    case 0x8003ECB0u: goto label_8003ECB0;
    case 0x8003ECB8u: goto label_8003ECB8;
    case 0x8003ECCCu: goto label_8003ECCC;
    case 0x8003ECDCu: goto label_8003ECDC;
    case 0x8003ECECu: goto label_8003ECEC;
    case 0x8003ED34u: goto label_8003ED34;
    case 0x8003ED48u: goto label_8003ED48;
    case 0x8003ED80u: goto label_8003ED80;
    case 0x8003ED94u: goto label_8003ED94;
    case 0x8003EDFCu: goto label_8003EDFC;
    case 0x8003EE10u: goto label_8003EE10;
    case 0x8003EE2Cu: goto label_8003EE2C;
    case 0x8003EE78u: goto label_8003EE78;
    case 0x8003EE94u: goto label_8003EE94;
    case 0x8003EEA4u: goto label_8003EEA4;
    case 0x8003EEB4u: goto label_8003EEB4;
    case 0x8003EEC8u: goto label_8003EEC8;
    case 0x8003EED4u: goto label_8003EED4;
    case 0x8003EEF8u: goto label_8003EEF8;
    case 0x8003EF28u: goto label_8003EF28;
    case 0x8003EF3Cu: goto label_8003EF3C;
    case 0x8003EF7Cu: goto label_8003EF7C;
    case 0x8003EF90u: goto label_8003EF90;
    case 0x8003F1D8u: goto label_8003F1D8;
    case 0x8003F1ECu: goto label_8003F1EC;
    case 0x8003F200u: goto label_8003F200;
    case 0x8003F218u: goto label_8003F218;
    case 0x8003F228u: goto label_8003F228;
    case 0x8003F24Cu: goto label_8003F24C;
    case 0x8003F288u: goto label_8003F288;
    case 0x8003F294u: goto label_8003F294;
    case 0x8003F330u: goto label_8003F330;
    case 0x8003F344u: goto label_8003F344;
    case 0x8003F358u: goto label_8003F358;
    case 0x8003F368u: goto label_8003F368;
    case 0x8003F3A0u: goto label_8003F3A0;
    case 0x8003F3D0u: goto label_8003F3D0;
    case 0x8003F3DCu: goto label_8003F3DC;
    case 0x8003F3ECu: goto label_8003F3EC;
    case 0x8003F400u: goto label_8003F400;
    case 0x8003F444u: goto label_8003F444;
    case 0x8003F458u: goto label_8003F458;
    case 0x8003F4CCu: goto label_8003F4CC;
    case 0x8003F4DCu: goto label_8003F4DC;
    case 0x8003F4F8u: goto label_8003F4F8;
    case 0x8003F514u: goto label_8003F514;
    case 0x8003F540u: goto label_8003F540;
    case 0x8003F560u: goto label_8003F560;
    case 0x8003F574u: goto label_8003F574;
    case 0x8003F58Cu: goto label_8003F58C;
    case 0x8003F5BCu: goto label_8003F5BC;
    case 0x8003F5D4u: goto label_8003F5D4;
    case 0x8003F5ECu: goto label_8003F5EC;
    case 0x8003F5FCu: goto label_8003F5FC;
    case 0x8003F610u: goto label_8003F610;
    case 0x8003F620u: goto label_8003F620;
    case 0x8003F62Cu: goto label_8003F62C;
    case 0x8003F63Cu: goto label_8003F63C;
    case 0x8003F650u: goto label_8003F650;
    case 0x8003F688u: goto label_8003F688;
    case 0x8003F69Cu: goto label_8003F69C;
    case 0x8003F6E4u: goto label_8003F6E4;
    case 0x8003F760u: goto label_8003F760;
    case 0x8003F79Cu: goto label_8003F79C;
    case 0x8003F7A8u: goto label_8003F7A8;
    case 0x8003F8F4u: goto label_8003F8F4;
    case 0x8003F910u: goto label_8003F910;
    case 0x8003F9ACu: goto label_8003F9AC;
    case 0x8003F9B4u: goto label_8003F9B4;
    case 0x8003F9BCu: goto label_8003F9BC;
    case 0x8003F9E8u: goto label_8003F9E8;
    case 0x8003FA0Cu: goto label_8003FA0C;
    case 0x8003FA4Cu: goto label_8003FA4C;
    case 0x8003FA78u: goto label_8003FA78;
    case 0x8003FA9Cu: goto label_8003FA9C;
    case 0x8003FAACu: goto label_8003FAAC;
    case 0x8003FAB4u: goto label_8003FAB4;
    case 0x8003FABCu: goto label_8003FABC;
    case 0x8003FAD4u: goto label_8003FAD4;
    case 0x8003FADCu: goto label_8003FADC;
    case 0x8003FAE0u: goto label_8003FAE0;
    case 0x8003FAF0u: goto label_8003FAF0;
    case 0x8003FAF8u: goto label_8003FAF8;
    case 0x8003FE0Cu: goto label_8003FE0C;
    case 0x8003FE2Cu: goto label_8003FE2C;
    case 0x8004002Cu: goto label_8004002C;
    case 0x80040050u: goto label_80040050;
    case 0x80040074u: goto label_80040074;
    case 0x800400BCu: goto label_800400BC;
    case 0x80040108u: goto label_80040108;
    case 0x80040198u: goto label_80040198;
    case 0x800401A0u: goto label_800401A0;
    case 0x800401A4u: goto label_800401A4;
    case 0x800401F8u: goto label_800401F8;
    case 0x80040284u: goto label_80040284;
    case 0x800402A0u: goto label_800402A0;
    case 0x800402BCu: goto label_800402BC;
    case 0x800402D8u: goto label_800402D8;
    case 0x800402F4u: goto label_800402F4;
    case 0x80040310u: goto label_80040310;
    case 0x8004032Cu: goto label_8004032C;
    case 0x80040348u: goto label_80040348;
    case 0x80040364u: goto label_80040364;
    case 0x8004036Cu: goto label_8004036C;
    case 0x80040370u: goto label_80040370;
    case 0x80040374u: goto label_80040374;
    case 0x80040394u: goto label_80040394;
    case 0x800403BCu: goto label_800403BC;
    case 0x800403D4u: goto label_800403D4;
    case 0x800403E0u: goto label_800403E0;
    case 0x800403F0u: goto label_800403F0;
    case 0x80040400u: goto label_80040400;
    case 0x80040410u: goto label_80040410;
    case 0x80040420u: goto label_80040420;
    case 0x80040430u: goto label_80040430;
    case 0x80040440u: goto label_80040440;
    case 0x80040450u: goto label_80040450;
    case 0x80040460u: goto label_80040460;
    case 0x800404A4u: goto label_800404A4;
    case 0x800404B0u: goto label_800404B0;
    case 0x800404B8u: goto label_800404B8;
    case 0x800404C8u: goto label_800404C8;
    case 0x800404D8u: goto label_800404D8;
    case 0x8004051Cu: goto label_8004051C;
    case 0x80040524u: goto label_80040524;
    case 0x8004052Cu: goto label_8004052C;
    case 0x80040534u: goto label_80040534;
    case 0x8004053Cu: goto label_8004053C;
    case 0x80040550u: goto label_80040550;
    case 0x8004055Cu: goto label_8004055C;
    case 0x80040564u: goto label_80040564;
    case 0x80040584u: goto label_80040584;
    case 0x80040598u: goto label_80040598;
    case 0x800405ACu: goto label_800405AC;
    case 0x800405CCu: goto label_800405CC;
    case 0x800405E0u: goto label_800405E0;
    case 0x800405F4u: goto label_800405F4;
    case 0x800405F8u: goto label_800405F8;
    case 0x80040604u: goto label_80040604;
    case 0x80040610u: goto label_80040610;
    case 0x80040634u: goto label_80040634;
    case 0x80040640u: goto label_80040640;
    case 0x8004064Cu: goto label_8004064C;
    case 0x80040658u: goto label_80040658;
    case 0x80040664u: goto label_80040664;
    case 0x80040670u: goto label_80040670;
    case 0x8004067Cu: goto label_8004067C;
    case 0x80040688u: goto label_80040688;
    case 0x80040694u: goto label_80040694;
    case 0x800406A8u: goto label_800406A8;
    case 0x800406BCu: goto label_800406BC;
    case 0x800406D0u: goto label_800406D0;
    case 0x800406E4u: goto label_800406E4;
    case 0x800406F8u: goto label_800406F8;
    case 0x8004070Cu: goto label_8004070C;
    case 0x80040720u: goto label_80040720;
    case 0x80040734u: goto label_80040734;
    case 0x80040748u: goto label_80040748;
    case 0x8004075Cu: goto label_8004075C;
    case 0x80040770u: goto label_80040770;
    case 0x80040784u: goto label_80040784;
    case 0x80040798u: goto label_80040798;
    case 0x800407ACu: goto label_800407AC;
    case 0x800407C0u: goto label_800407C0;
    case 0x800407D4u: goto label_800407D4;
    case 0x800407DCu: goto label_800407DC;
    case 0x800407E8u: goto label_800407E8;
    case 0x80040800u: goto label_80040800;
    case 0x80040810u: goto label_80040810;
    case 0x8004082Cu: goto label_8004082C;
    case 0x80040838u: goto label_80040838;
    case 0x80040848u: goto label_80040848;
    case 0x8004086Cu: goto label_8004086C;
    case 0x80040884u: goto label_80040884;
    case 0x8004089Cu: goto label_8004089C;
    case 0x800408B4u: goto label_800408B4;
    case 0x800408CCu: goto label_800408CC;
    case 0x800408E0u: goto label_800408E0;
    case 0x800408F0u: goto label_800408F0;
    case 0x80040900u: goto label_80040900;
    case 0x80040910u: goto label_80040910;
    case 0x80040920u: goto label_80040920;
    case 0x80040944u: goto label_80040944;
    case 0x80040954u: goto label_80040954;
    case 0x80040968u: goto label_80040968;
    case 0x80040970u: goto label_80040970;
    case 0x80040978u: goto label_80040978;
    case 0x80040988u: goto label_80040988;
    case 0x80040990u: goto label_80040990;
    case 0x80040998u: goto label_80040998;
    case 0x800409A4u: goto label_800409A4;
    case 0x800409B0u: goto label_800409B0;
    case 0x800409BCu: goto label_800409BC;
    case 0x800409E4u: goto label_800409E4;
    case 0x800409F8u: goto label_800409F8;
    case 0x80040A04u: goto label_80040A04;
    case 0x80040A3Cu: goto label_80040A3C;
    case 0x80040A44u: goto label_80040A44;
    case 0x80040A58u: goto label_80040A58;
    case 0x80040A60u: goto label_80040A60;
    case 0x80040A68u: goto label_80040A68;
    case 0x80040A6Cu: goto label_80040A6C;
    case 0x80040A74u: goto label_80040A74;
    case 0x80040A7Cu: goto label_80040A7C;
    case 0x80040A84u: goto label_80040A84;
    case 0x80040A98u: goto label_80040A98;
    case 0x80040AA4u: goto label_80040AA4;
    case 0x80040AACu: goto label_80040AAC;
    case 0x80040AB8u: goto label_80040AB8;
    case 0x80040AC8u: goto label_80040AC8;
    case 0x80040AD4u: goto label_80040AD4;
    case 0x80040AD8u: goto label_80040AD8;
    case 0x80040B38u: goto label_80040B38;
    case 0x80040B4Cu: goto label_80040B4C;
    case 0x80040B58u: goto label_80040B58;
    case 0x80040B8Cu: goto label_80040B8C;
    case 0x80040B98u: goto label_80040B98;
    case 0x80040BA8u: goto label_80040BA8;
    case 0x80040BF0u: goto label_80040BF0;
    case 0x80040BF8u: goto label_80040BF8;
    case 0x80040C04u: goto label_80040C04;
    case 0x80040C0Cu: goto label_80040C0C;
    case 0x80040C14u: goto label_80040C14;
    case 0x80040C6Cu: goto label_80040C6C;
    case 0x80040C7Cu: goto label_80040C7C;
    case 0x80040CBCu: goto label_80040CBC;
    case 0x80040CE8u: goto label_80040CE8;
    case 0x80040D2Cu: goto label_80040D2C;
    case 0x80040D94u: goto label_80040D94;
    case 0x80040DA0u: goto label_80040DA0;
    case 0x80040DA8u: goto label_80040DA8;
    case 0x80040DC0u: goto label_80040DC0;
    case 0x80040DD4u: goto label_80040DD4;
    case 0x80040E18u: goto label_80040E18;
    case 0x80040E20u: goto label_80040E20;
    case 0x80040E54u: goto label_80040E54;
    case 0x80040E5Cu: goto label_80040E5C;
    case 0x80040E68u: goto label_80040E68;
    case 0x80040F34u: goto label_80040F34;
    case 0x80040F58u: goto label_80040F58;
    case 0x80040F60u: goto label_80040F60;
    case 0x80040F78u: goto label_80040F78;
    case 0x80040F80u: goto label_80040F80;
    case 0x80040F8Cu: goto label_80040F8C;
    case 0x80040F90u: goto label_80040F90;
    case 0x80040F98u: goto label_80040F98;
    case 0x80040FC0u: goto label_80040FC0;
    case 0x80040FECu: goto label_80040FEC;
    case 0x80040FF4u: goto label_80040FF4;
    case 0x80041094u: goto label_80041094;
    case 0x800411B4u: goto label_800411B4;
    case 0x800411BCu: goto label_800411BC;
    case 0x800411F4u: goto label_800411F4;
    case 0x800411FCu: goto label_800411FC;
    case 0x80041244u: goto label_80041244;
    case 0x8004124Cu: goto label_8004124C;
    case 0x80041280u: goto label_80041280;
    case 0x80041288u: goto label_80041288;
    case 0x8004128Cu: goto label_8004128C;
    case 0x800413A8u: goto label_800413A8;
    case 0x800413B4u: goto label_800413B4;
    case 0x800413E4u: goto label_800413E4;
    case 0x80041410u: goto label_80041410;
    case 0x80041418u: goto label_80041418;
    case 0x80041428u: goto label_80041428;
    case 0x8004142Cu: goto label_8004142C;
    case 0x80041458u: goto label_80041458;
    case 0x80041460u: goto label_80041460;
    case 0x80041470u: goto label_80041470;
    case 0x800414A4u: goto label_800414A4;
    case 0x800414B0u: goto label_800414B0;
    case 0x800414BCu: goto label_800414BC;
    default: return;
    }
}

