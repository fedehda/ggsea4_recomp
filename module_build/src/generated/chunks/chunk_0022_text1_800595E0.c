// DolRecomp output
#include "../generated.h"

static void loop_80059C0C(CPUState* ctx) {
label_80059C0C:
    ctx->downcount -= 9;
    ctx->pc = 0x80059C0Cu;
    // 80059C0C: lbz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

    // 80059C10: rlwinm r3, r3, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

    // 80059C14: rlwinm r7, r4, 8, 0, 23
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

    // 80059C18: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

    // 80059C1C: rlwimi r3, r4, 8, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 8u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

    // 80059C20: srawi r0, r6, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[6];
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

    // 80059C24: or   r4, r7, r6
    {
        ctx->gpr[4] = ctx->gpr[7] | ctx->gpr[6];
    }

    // 80059C28: or   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[0];
    }

    // 80059C2C: bc    16, 0, 0x80059C0C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059C0Cu;
                return;
            }
            goto label_80059C0C;
        }
    }

    ctx->pc = 0x80059C30u;
}

static void loop_80059E48(CPUState* ctx) {
label_80059E48:
    ctx->downcount -= 19;
    ctx->pc = 0x80059E48u;
    // 80059E48: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80059E4Cu;
    // 80059E4C: lwz     r6, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80059E50u;
    // 80059E50: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80059E54: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    ctx->pc = 0x80059E58u;
    // 80059E58: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80059E5Cu;
    // 80059E5C: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80059E60u;
    // 80059E60: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80059E64u;
    // 80059E64: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80059E68u;
    // 80059E68: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80059E6Cu;
    // 80059E6C: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80059E70u;
    // 80059E70: lwz     r5, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 80059E74: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    ctx->pc = 0x80059E78u;
    // 80059E78: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80059E7Cu;
    // 80059E7C: lwz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80059E80u;
    // 80059E80: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80059E84u;
    // 80059E84: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80059E88u;
    // 80059E88: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    // 80059E8C: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

    ctx->pc = 0x80059E90u;
    // 80059E90: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80059E94u;
    // 80059E94: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80059E98: cmpw    r4, r0
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

    // 80059E9C: bc    4, 0, 0x80059E48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059E48u;
                return;
            }
            goto label_80059E48;
        }
    }

    ctx->pc = 0x80059EA0u;
}

static void loop_80059F10(CPUState* ctx) {
label_80059F10:
    ctx->downcount -= 1;
    // 80059F10: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

    ctx->pc = 0x80059F14u;
    // 80059F14: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80059F18: cmplwi  r0, 0x0000
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

    // 80059F1C: bc    4, 2, 0x80059F10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059F10u;
                return;
            }
            goto label_80059F10;
        }
    }

    ctx->pc = 0x80059F20u;
}

static void loop_80059F50(CPUState* ctx) {
label_80059F50:
    ctx->downcount -= 1;
    // 80059F50: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

    ctx->pc = 0x80059F54u;
    // 80059F54: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80059F58: cmplwi  r0, 0x0000
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

    // 80059F5C: bc    4, 2, 0x80059F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059F50u;
                return;
            }
            goto label_80059F50;
        }
    }

    ctx->pc = 0x80059F60u;
}

static void loop_8005B56C(CPUState* ctx) {
label_8005B56C:
    ctx->downcount -= 3;
    ctx->pc = 0x8005B56Cu;
    // 8005B56C: stwx    r0, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8005B570: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    // 8005B574: bc    16, 0, 0x8005B56C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B56Cu;
                return;
            }
            goto label_8005B56C;
        }
    }

    ctx->pc = 0x8005B578u;
}

static void loop_8005B800(CPUState* ctx) {
label_8005B800:
    ctx->downcount -= 2;
    // 8005B800: rlwinm r3, r3, 31, 1, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 31u) & 0x7FFFFFFFu;
    }

    // 8005B804: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

    // 8005B808: cmplwi  r3, 0x0000
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

    // 8005B80C: bc    4, 2, 0x8005B800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B800u;
                return;
            }
            goto label_8005B800;
        }
    }

    ctx->pc = 0x8005B810u;
}

static void loop_8005BB44(CPUState* ctx) {
label_8005BB44:
    ctx->downcount -= 1;
    // 8005BB44: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    // 8005BB48: slw   r0, r3, r5
    {
        u32 sh = ctx->gpr[5] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

    // 8005BB4C: and.   r0, r20, r0
    {
        ctx->gpr[0] = ctx->gpr[20] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    // 8005BB50: bc    12, 2, 0x8005BB44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005BB44u;
                return;
            }
            goto label_8005BB44;
        }
    }

    ctx->pc = 0x8005BB54u;
}

static void loop_8005C014(CPUState* ctx) {
label_8005C014:
    ctx->downcount -= 19;
    ctx->pc = 0x8005C014u;
    // 8005C014: lwz     r0, -4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8005C018u;
    // 8005C018: stw     r0, -4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8005C01C: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

    ctx->pc = 0x8005C020u;
    // 8005C020: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8005C024u;
    // 8005C024: lwz     r0, -8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8005C028u;
    // 8005C028: stw     r0, -8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8005C02C: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

    ctx->pc = 0x8005C030u;
    // 8005C030: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8005C034u;
    // 8005C034: lwz     r0, -12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8005C038u;
    // 8005C038: stw     r0, -12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8005C03C: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

    ctx->pc = 0x8005C040u;
    // 8005C040: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8005C044u;
    // 8005C044: lwzu     r0, -16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-16);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x8005C048u;
    // 8005C048: stwu     r0, -16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[3] = ea;
    }

    // 8005C04C: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

    ctx->pc = 0x8005C050u;
    // 8005C050: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8005C054: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

    // 8005C058: cmplw   r4, r5
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 8005C05C: bc    12, 0, 0x8005C014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C014u;
                return;
            }
            goto label_8005C014;
        }
    }

    ctx->pc = 0x8005C060u;
}

static void loop_8005C064(CPUState* ctx) {
label_8005C064:
    ctx->downcount -= 12;
    ctx->pc = 0x8005C064u;
    // 8005C064: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8005C068u;
    // 8005C068: stw     r0, -16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8005C06Cu;
    // 8005C06C: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8005C070u;
    // 8005C070: stw     r0, -12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8005C074u;
    // 8005C074: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8005C078u;
    // 8005C078: stw     r0, -8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8005C07Cu;
    // 8005C07C: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8005C080: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

    ctx->pc = 0x8005C084u;
    // 8005C084: stw     r0, -4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8005C088: addi    r3, r3, -16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16);

    // 8005C08C: cmplw   r3, r25
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 8005C090: bc    12, 1, 0x8005C064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C064u;
                return;
            }
            goto label_8005C064;
        }
    }

    ctx->pc = 0x8005C094u;
}

static void loop_8005D50C(CPUState* ctx) {
label_8005D50C:
    ctx->downcount -= 9;
    ctx->pc = 0x8005D50Cu;
    // 8005D50C: lwz     r3, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8005D510u;
    // 8005D510: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8005D514: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

    ctx->pc = 0x8005D518u;
    // 8005D518: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 8005D51C: bc    16, 0, 0x8005D50C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D50Cu;
                return;
            }
            goto label_8005D50C;
        }
    }

    ctx->pc = 0x8005D520u;
}

static void loop_8005D594(CPUState* ctx) {
label_8005D594:
    ctx->downcount -= 92;
    // 8005D594: divw   r6, r22, r28
    {
        s32 dividend = (s32)ctx->gpr[22];
        s32 divisor = (s32)ctx->gpr[28];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[6] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    ctx->pc = 0x8005D598u;
    // 8005D598: lwz     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8005D59Cu;
    // 8005D59C: lwz     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8005D5A0u;
    // 8005D5A0: lwzx    r3, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    // 8005D5A4: mullw   r0, r6, r28
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[28];
        ctx->gpr[0] = (u32)product;
    }

    ctx->pc = 0x8005D5A8u;
    // 8005D5A8: stwx    r6, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 8005D5AC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    // 8005D5B0: divw   r28, r28, r5
    {
        s32 dividend = (s32)ctx->gpr[28];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[28] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

    // 8005D5B4: subf   r22, r0, r22
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[22];
        u32 res = a + b + 1u;
        ctx->gpr[22] = res;
    }

    // 8005D5B8: bc    16, 0, 0x8005D594
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D594u;
                return;
            }
            goto label_8005D594;
        }
    }

    ctx->pc = 0x8005D5BCu;
}

void func_800595E0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x800595E0u: goto label_800595E0;
    case 0x800595E4u: goto label_800595E4;
    case 0x800595E8u: goto label_800595E8;
    case 0x800595ECu: goto label_800595EC;
    case 0x800595F0u: goto label_800595F0;
    case 0x800595F4u: goto label_800595F4;
    case 0x800595F8u: goto label_800595F8;
    case 0x800595FCu: goto label_800595FC;
    case 0x80059600u: goto label_80059600;
    case 0x80059604u: goto label_80059604;
    case 0x80059608u: goto label_80059608;
    case 0x8005960Cu: goto label_8005960C;
    case 0x80059610u: goto label_80059610;
    case 0x80059614u: goto label_80059614;
    case 0x80059618u: goto label_80059618;
    case 0x8005961Cu: goto label_8005961C;
    case 0x80059620u: goto label_80059620;
    case 0x80059624u: goto label_80059624;
    case 0x80059628u: goto label_80059628;
    case 0x8005962Cu: goto label_8005962C;
    case 0x80059630u: goto label_80059630;
    case 0x80059634u: goto label_80059634;
    case 0x80059638u: goto label_80059638;
    case 0x8005963Cu: goto label_8005963C;
    case 0x80059640u: goto label_80059640;
    case 0x80059644u: goto label_80059644;
    case 0x80059648u: goto label_80059648;
    case 0x8005964Cu: goto label_8005964C;
    case 0x80059650u: goto label_80059650;
    case 0x80059654u: goto label_80059654;
    case 0x80059658u: goto label_80059658;
    case 0x8005965Cu: goto label_8005965C;
    case 0x80059660u: goto label_80059660;
    case 0x80059664u: goto label_80059664;
    case 0x80059668u: goto label_80059668;
    case 0x8005966Cu: goto label_8005966C;
    case 0x80059670u: goto label_80059670;
    case 0x80059674u: goto label_80059674;
    case 0x80059678u: goto label_80059678;
    case 0x8005967Cu: goto label_8005967C;
    case 0x80059680u: goto label_80059680;
    case 0x80059684u: goto label_80059684;
    case 0x80059688u: goto label_80059688;
    case 0x8005968Cu: goto label_8005968C;
    case 0x80059690u: goto label_80059690;
    case 0x80059694u: goto label_80059694;
    case 0x80059698u: goto label_80059698;
    case 0x8005969Cu: goto label_8005969C;
    case 0x800596A0u: goto label_800596A0;
    case 0x800596A4u: goto label_800596A4;
    case 0x800596A8u: goto label_800596A8;
    case 0x800596ACu: goto label_800596AC;
    case 0x800596B0u: goto label_800596B0;
    case 0x800596B4u: goto label_800596B4;
    case 0x800596B8u: goto label_800596B8;
    case 0x800596BCu: goto label_800596BC;
    case 0x800596C0u: goto label_800596C0;
    case 0x800596C4u: goto label_800596C4;
    case 0x800596C8u: goto label_800596C8;
    case 0x800596CCu: goto label_800596CC;
    case 0x800596D0u: goto label_800596D0;
    case 0x800596D4u: goto label_800596D4;
    case 0x800596D8u: goto label_800596D8;
    case 0x800596DCu: goto label_800596DC;
    case 0x800596E0u: goto label_800596E0;
    case 0x800596E4u: goto label_800596E4;
    case 0x800596E8u: goto label_800596E8;
    case 0x800596ECu: goto label_800596EC;
    case 0x800596F0u: goto label_800596F0;
    case 0x800596F4u: goto label_800596F4;
    case 0x800596F8u: goto label_800596F8;
    case 0x800596FCu: goto label_800596FC;
    case 0x80059700u: goto label_80059700;
    case 0x80059704u: goto label_80059704;
    case 0x80059708u: goto label_80059708;
    case 0x8005970Cu: goto label_8005970C;
    case 0x80059710u: goto label_80059710;
    case 0x80059714u: goto label_80059714;
    case 0x80059718u: goto label_80059718;
    case 0x8005971Cu: goto label_8005971C;
    case 0x80059720u: goto label_80059720;
    case 0x80059724u: goto label_80059724;
    case 0x80059728u: goto label_80059728;
    case 0x8005972Cu: goto label_8005972C;
    case 0x80059730u: goto label_80059730;
    case 0x80059734u: goto label_80059734;
    case 0x80059738u: goto label_80059738;
    case 0x8005973Cu: goto label_8005973C;
    case 0x80059740u: goto label_80059740;
    case 0x80059744u: goto label_80059744;
    case 0x80059748u: goto label_80059748;
    case 0x8005974Cu: goto label_8005974C;
    case 0x80059750u: goto label_80059750;
    case 0x80059754u: goto label_80059754;
    case 0x80059758u: goto label_80059758;
    case 0x8005975Cu: goto label_8005975C;
    case 0x80059760u: goto label_80059760;
    case 0x80059764u: goto label_80059764;
    case 0x80059768u: goto label_80059768;
    case 0x8005976Cu: goto label_8005976C;
    case 0x80059770u: goto label_80059770;
    case 0x80059774u: goto label_80059774;
    case 0x80059778u: goto label_80059778;
    case 0x8005977Cu: goto label_8005977C;
    case 0x80059780u: goto label_80059780;
    case 0x80059784u: goto label_80059784;
    case 0x80059788u: goto label_80059788;
    case 0x8005978Cu: goto label_8005978C;
    case 0x80059790u: goto label_80059790;
    case 0x80059794u: goto label_80059794;
    case 0x80059798u: goto label_80059798;
    case 0x8005979Cu: goto label_8005979C;
    case 0x800597A0u: goto label_800597A0;
    case 0x800597A4u: goto label_800597A4;
    case 0x800597A8u: goto label_800597A8;
    case 0x800597ACu: goto label_800597AC;
    case 0x800597B0u: goto label_800597B0;
    case 0x800597B4u: goto label_800597B4;
    case 0x800597B8u: goto label_800597B8;
    case 0x800597BCu: goto label_800597BC;
    case 0x800597C0u: goto label_800597C0;
    case 0x800597C4u: goto label_800597C4;
    case 0x800597C8u: goto label_800597C8;
    case 0x800597CCu: goto label_800597CC;
    case 0x800597D0u: goto label_800597D0;
    case 0x800597D4u: goto label_800597D4;
    case 0x800597D8u: goto label_800597D8;
    case 0x800597DCu: goto label_800597DC;
    case 0x800597E0u: goto label_800597E0;
    case 0x800597E4u: goto label_800597E4;
    case 0x800597E8u: goto label_800597E8;
    case 0x800597ECu: goto label_800597EC;
    case 0x800597F0u: goto label_800597F0;
    case 0x800597F4u: goto label_800597F4;
    case 0x800597F8u: goto label_800597F8;
    case 0x800597FCu: goto label_800597FC;
    case 0x80059800u: goto label_80059800;
    case 0x80059804u: goto label_80059804;
    case 0x80059808u: goto label_80059808;
    case 0x8005980Cu: goto label_8005980C;
    case 0x80059810u: goto label_80059810;
    case 0x80059814u: goto label_80059814;
    case 0x80059818u: goto label_80059818;
    case 0x8005981Cu: goto label_8005981C;
    case 0x80059820u: goto label_80059820;
    case 0x80059824u: goto label_80059824;
    case 0x80059828u: goto label_80059828;
    case 0x8005982Cu: goto label_8005982C;
    case 0x80059830u: goto label_80059830;
    case 0x80059834u: goto label_80059834;
    case 0x80059838u: goto label_80059838;
    case 0x8005983Cu: goto label_8005983C;
    case 0x80059840u: goto label_80059840;
    case 0x80059844u: goto label_80059844;
    case 0x80059848u: goto label_80059848;
    case 0x8005984Cu: goto label_8005984C;
    case 0x80059850u: goto label_80059850;
    case 0x80059854u: goto label_80059854;
    case 0x80059858u: goto label_80059858;
    case 0x8005985Cu: goto label_8005985C;
    case 0x80059860u: goto label_80059860;
    case 0x80059864u: goto label_80059864;
    case 0x80059868u: goto label_80059868;
    case 0x8005986Cu: goto label_8005986C;
    case 0x80059870u: goto label_80059870;
    case 0x80059874u: goto label_80059874;
    case 0x80059878u: goto label_80059878;
    case 0x8005987Cu: goto label_8005987C;
    case 0x80059880u: goto label_80059880;
    case 0x80059884u: goto label_80059884;
    case 0x80059888u: goto label_80059888;
    case 0x8005988Cu: goto label_8005988C;
    case 0x80059890u: goto label_80059890;
    case 0x80059894u: goto label_80059894;
    case 0x80059898u: goto label_80059898;
    case 0x8005989Cu: goto label_8005989C;
    case 0x800598A0u: goto label_800598A0;
    case 0x800598A4u: goto label_800598A4;
    case 0x800598A8u: goto label_800598A8;
    case 0x800598ACu: goto label_800598AC;
    case 0x800598B0u: goto label_800598B0;
    case 0x800598B4u: goto label_800598B4;
    case 0x800598B8u: goto label_800598B8;
    case 0x800598BCu: goto label_800598BC;
    case 0x800598C0u: goto label_800598C0;
    case 0x800598C4u: goto label_800598C4;
    case 0x800598C8u: goto label_800598C8;
    case 0x800598CCu: goto label_800598CC;
    case 0x800598D0u: goto label_800598D0;
    case 0x800598D4u: goto label_800598D4;
    case 0x800598D8u: goto label_800598D8;
    case 0x800598DCu: goto label_800598DC;
    case 0x800598E0u: goto label_800598E0;
    case 0x800598E4u: goto label_800598E4;
    case 0x800598E8u: goto label_800598E8;
    case 0x800598ECu: goto label_800598EC;
    case 0x800598F0u: goto label_800598F0;
    case 0x800598F4u: goto label_800598F4;
    case 0x800598F8u: goto label_800598F8;
    case 0x800598FCu: goto label_800598FC;
    case 0x80059900u: goto label_80059900;
    case 0x80059904u: goto label_80059904;
    case 0x80059908u: goto label_80059908;
    case 0x8005990Cu: goto label_8005990C;
    case 0x80059910u: goto label_80059910;
    case 0x80059914u: goto label_80059914;
    case 0x80059918u: goto label_80059918;
    case 0x8005991Cu: goto label_8005991C;
    case 0x80059920u: goto label_80059920;
    case 0x80059924u: goto label_80059924;
    case 0x80059928u: goto label_80059928;
    case 0x8005992Cu: goto label_8005992C;
    case 0x80059930u: goto label_80059930;
    case 0x80059934u: goto label_80059934;
    case 0x80059938u: goto label_80059938;
    case 0x8005993Cu: goto label_8005993C;
    case 0x80059940u: goto label_80059940;
    case 0x80059944u: goto label_80059944;
    case 0x80059948u: goto label_80059948;
    case 0x8005994Cu: goto label_8005994C;
    case 0x80059950u: goto label_80059950;
    case 0x80059954u: goto label_80059954;
    case 0x80059958u: goto label_80059958;
    case 0x8005995Cu: goto label_8005995C;
    case 0x80059960u: goto label_80059960;
    case 0x80059964u: goto label_80059964;
    case 0x80059968u: goto label_80059968;
    case 0x8005996Cu: goto label_8005996C;
    case 0x80059970u: goto label_80059970;
    case 0x80059974u: goto label_80059974;
    case 0x80059978u: goto label_80059978;
    case 0x8005997Cu: goto label_8005997C;
    case 0x80059980u: goto label_80059980;
    case 0x80059984u: goto label_80059984;
    case 0x80059988u: goto label_80059988;
    case 0x8005998Cu: goto label_8005998C;
    case 0x80059990u: goto label_80059990;
    case 0x80059994u: goto label_80059994;
    case 0x80059998u: goto label_80059998;
    case 0x8005999Cu: goto label_8005999C;
    case 0x800599A0u: goto label_800599A0;
    case 0x800599A4u: goto label_800599A4;
    case 0x800599A8u: goto label_800599A8;
    case 0x800599ACu: goto label_800599AC;
    case 0x800599B0u: goto label_800599B0;
    case 0x800599B4u: goto label_800599B4;
    case 0x800599B8u: goto label_800599B8;
    case 0x800599BCu: goto label_800599BC;
    case 0x800599C0u: goto label_800599C0;
    case 0x800599C4u: goto label_800599C4;
    case 0x800599C8u: goto label_800599C8;
    case 0x800599CCu: goto label_800599CC;
    case 0x800599D0u: goto label_800599D0;
    case 0x800599D4u: goto label_800599D4;
    case 0x800599D8u: goto label_800599D8;
    case 0x800599DCu: goto label_800599DC;
    case 0x800599E0u: goto label_800599E0;
    case 0x800599E4u: goto label_800599E4;
    case 0x800599E8u: goto label_800599E8;
    case 0x800599ECu: goto label_800599EC;
    case 0x800599F0u: goto label_800599F0;
    case 0x800599F4u: goto label_800599F4;
    case 0x800599F8u: goto label_800599F8;
    case 0x800599FCu: goto label_800599FC;
    case 0x80059A00u: goto label_80059A00;
    case 0x80059A04u: goto label_80059A04;
    case 0x80059A08u: goto label_80059A08;
    case 0x80059A0Cu: goto label_80059A0C;
    case 0x80059A10u: goto label_80059A10;
    case 0x80059A14u: goto label_80059A14;
    case 0x80059A18u: goto label_80059A18;
    case 0x80059A1Cu: goto label_80059A1C;
    case 0x80059A20u: goto label_80059A20;
    case 0x80059A24u: goto label_80059A24;
    case 0x80059A28u: goto label_80059A28;
    case 0x80059A2Cu: goto label_80059A2C;
    case 0x80059A30u: goto label_80059A30;
    case 0x80059A34u: goto label_80059A34;
    case 0x80059A38u: goto label_80059A38;
    case 0x80059A3Cu: goto label_80059A3C;
    case 0x80059A40u: goto label_80059A40;
    case 0x80059A44u: goto label_80059A44;
    case 0x80059A48u: goto label_80059A48;
    case 0x80059A4Cu: goto label_80059A4C;
    case 0x80059A50u: goto label_80059A50;
    case 0x80059A54u: goto label_80059A54;
    case 0x80059A58u: goto label_80059A58;
    case 0x80059A5Cu: goto label_80059A5C;
    case 0x80059A60u: goto label_80059A60;
    case 0x80059A64u: goto label_80059A64;
    case 0x80059A68u: goto label_80059A68;
    case 0x80059A6Cu: goto label_80059A6C;
    case 0x80059A70u: goto label_80059A70;
    case 0x80059A74u: goto label_80059A74;
    case 0x80059A78u: goto label_80059A78;
    case 0x80059A7Cu: goto label_80059A7C;
    case 0x80059A80u: goto label_80059A80;
    case 0x80059A84u: goto label_80059A84;
    case 0x80059A88u: goto label_80059A88;
    case 0x80059A8Cu: goto label_80059A8C;
    case 0x80059A90u: goto label_80059A90;
    case 0x80059A94u: goto label_80059A94;
    case 0x80059A98u: goto label_80059A98;
    case 0x80059A9Cu: goto label_80059A9C;
    case 0x80059AA0u: goto label_80059AA0;
    case 0x80059AA4u: goto label_80059AA4;
    case 0x80059AA8u: goto label_80059AA8;
    case 0x80059AACu: goto label_80059AAC;
    case 0x80059AB0u: goto label_80059AB0;
    case 0x80059AB4u: goto label_80059AB4;
    case 0x80059AB8u: goto label_80059AB8;
    case 0x80059ABCu: goto label_80059ABC;
    case 0x80059AC0u: goto label_80059AC0;
    case 0x80059AC4u: goto label_80059AC4;
    case 0x80059AC8u: goto label_80059AC8;
    case 0x80059ACCu: goto label_80059ACC;
    case 0x80059AD0u: goto label_80059AD0;
    case 0x80059AD4u: goto label_80059AD4;
    case 0x80059AD8u: goto label_80059AD8;
    case 0x80059ADCu: goto label_80059ADC;
    case 0x80059AE0u: goto label_80059AE0;
    case 0x80059AE4u: goto label_80059AE4;
    case 0x80059AE8u: goto label_80059AE8;
    case 0x80059AECu: goto label_80059AEC;
    case 0x80059AF0u: goto label_80059AF0;
    case 0x80059AF4u: goto label_80059AF4;
    case 0x80059AF8u: goto label_80059AF8;
    case 0x80059AFCu: goto label_80059AFC;
    case 0x80059B00u: goto label_80059B00;
    case 0x80059B04u: goto label_80059B04;
    case 0x80059B08u: goto label_80059B08;
    case 0x80059B0Cu: goto label_80059B0C;
    case 0x80059B10u: goto label_80059B10;
    case 0x80059B14u: goto label_80059B14;
    case 0x80059B18u: goto label_80059B18;
    case 0x80059B1Cu: goto label_80059B1C;
    case 0x80059B20u: goto label_80059B20;
    case 0x80059B24u: goto label_80059B24;
    case 0x80059B28u: goto label_80059B28;
    case 0x80059B2Cu: goto label_80059B2C;
    case 0x80059B30u: goto label_80059B30;
    case 0x80059B34u: goto label_80059B34;
    case 0x80059B38u: goto label_80059B38;
    case 0x80059B3Cu: goto label_80059B3C;
    case 0x80059B40u: goto label_80059B40;
    case 0x80059B44u: goto label_80059B44;
    case 0x80059B48u: goto label_80059B48;
    case 0x80059B4Cu: goto label_80059B4C;
    case 0x80059B50u: goto label_80059B50;
    case 0x80059B54u: goto label_80059B54;
    case 0x80059B58u: goto label_80059B58;
    case 0x80059B5Cu: goto label_80059B5C;
    case 0x80059B60u: goto label_80059B60;
    case 0x80059B64u: goto label_80059B64;
    case 0x80059B68u: goto label_80059B68;
    case 0x80059B6Cu: goto label_80059B6C;
    case 0x80059B70u: goto label_80059B70;
    case 0x80059B74u: goto label_80059B74;
    case 0x80059B78u: goto label_80059B78;
    case 0x80059B7Cu: goto label_80059B7C;
    case 0x80059B80u: goto label_80059B80;
    case 0x80059B84u: goto label_80059B84;
    case 0x80059B88u: goto label_80059B88;
    case 0x80059B8Cu: goto label_80059B8C;
    case 0x80059B90u: goto label_80059B90;
    case 0x80059B94u: goto label_80059B94;
    case 0x80059B98u: goto label_80059B98;
    case 0x80059B9Cu: goto label_80059B9C;
    case 0x80059BA0u: goto label_80059BA0;
    case 0x80059BA4u: goto label_80059BA4;
    case 0x80059BA8u: goto label_80059BA8;
    case 0x80059BACu: goto label_80059BAC;
    case 0x80059BB0u: goto label_80059BB0;
    case 0x80059BB4u: goto label_80059BB4;
    case 0x80059BB8u: goto label_80059BB8;
    case 0x80059BBCu: goto label_80059BBC;
    case 0x80059BC0u: goto label_80059BC0;
    case 0x80059BC4u: goto label_80059BC4;
    case 0x80059BC8u: goto label_80059BC8;
    case 0x80059BCCu: goto label_80059BCC;
    case 0x80059BD0u: goto label_80059BD0;
    case 0x80059BD4u: goto label_80059BD4;
    case 0x80059BD8u: goto label_80059BD8;
    case 0x80059BDCu: goto label_80059BDC;
    case 0x80059BE0u: goto label_80059BE0;
    case 0x80059BE4u: goto label_80059BE4;
    case 0x80059BE8u: goto label_80059BE8;
    case 0x80059BECu: goto label_80059BEC;
    case 0x80059BF0u: goto label_80059BF0;
    case 0x80059BF4u: goto label_80059BF4;
    case 0x80059BF8u: goto label_80059BF8;
    case 0x80059BFCu: goto label_80059BFC;
    case 0x80059C00u: goto label_80059C00;
    case 0x80059C04u: goto label_80059C04;
    case 0x80059C08u: goto label_80059C08;
    case 0x80059C0Cu: goto label_80059C0C;
    case 0x80059C10u: goto label_80059C10;
    case 0x80059C14u: goto label_80059C14;
    case 0x80059C18u: goto label_80059C18;
    case 0x80059C1Cu: goto label_80059C1C;
    case 0x80059C20u: goto label_80059C20;
    case 0x80059C24u: goto label_80059C24;
    case 0x80059C28u: goto label_80059C28;
    case 0x80059C2Cu: goto label_80059C2C;
    case 0x80059C30u: goto label_80059C30;
    case 0x80059C34u: goto label_80059C34;
    case 0x80059C38u: goto label_80059C38;
    case 0x80059C3Cu: goto label_80059C3C;
    case 0x80059C40u: goto label_80059C40;
    case 0x80059C44u: goto label_80059C44;
    case 0x80059C48u: goto label_80059C48;
    case 0x80059C4Cu: goto label_80059C4C;
    case 0x80059C50u: goto label_80059C50;
    case 0x80059C54u: goto label_80059C54;
    case 0x80059C58u: goto label_80059C58;
    case 0x80059C5Cu: goto label_80059C5C;
    case 0x80059C60u: goto label_80059C60;
    case 0x80059C64u: goto label_80059C64;
    case 0x80059C68u: goto label_80059C68;
    case 0x80059C6Cu: goto label_80059C6C;
    case 0x80059C70u: goto label_80059C70;
    case 0x80059C74u: goto label_80059C74;
    case 0x80059C78u: goto label_80059C78;
    case 0x80059C7Cu: goto label_80059C7C;
    case 0x80059C80u: goto label_80059C80;
    case 0x80059C84u: goto label_80059C84;
    case 0x80059C88u: goto label_80059C88;
    case 0x80059C8Cu: goto label_80059C8C;
    case 0x80059C90u: goto label_80059C90;
    case 0x80059C94u: goto label_80059C94;
    case 0x80059C98u: goto label_80059C98;
    case 0x80059C9Cu: goto label_80059C9C;
    case 0x80059CA0u: goto label_80059CA0;
    case 0x80059CA4u: goto label_80059CA4;
    case 0x80059CA8u: goto label_80059CA8;
    case 0x80059CACu: goto label_80059CAC;
    case 0x80059CB0u: goto label_80059CB0;
    case 0x80059CB4u: goto label_80059CB4;
    case 0x80059CB8u: goto label_80059CB8;
    case 0x80059CBCu: goto label_80059CBC;
    case 0x80059CC0u: goto label_80059CC0;
    case 0x80059CC4u: goto label_80059CC4;
    case 0x80059CC8u: goto label_80059CC8;
    case 0x80059CCCu: goto label_80059CCC;
    case 0x80059CD0u: goto label_80059CD0;
    case 0x80059CD4u: goto label_80059CD4;
    case 0x80059CD8u: goto label_80059CD8;
    case 0x80059CDCu: goto label_80059CDC;
    case 0x80059CE0u: goto label_80059CE0;
    case 0x80059CE4u: goto label_80059CE4;
    case 0x80059CE8u: goto label_80059CE8;
    case 0x80059CECu: goto label_80059CEC;
    case 0x80059CF0u: goto label_80059CF0;
    case 0x80059CF4u: goto label_80059CF4;
    case 0x80059CF8u: goto label_80059CF8;
    case 0x80059CFCu: goto label_80059CFC;
    case 0x80059D00u: goto label_80059D00;
    case 0x80059D04u: goto label_80059D04;
    case 0x80059D08u: goto label_80059D08;
    case 0x80059D0Cu: goto label_80059D0C;
    case 0x80059D10u: goto label_80059D10;
    case 0x80059D14u: goto label_80059D14;
    case 0x80059D18u: goto label_80059D18;
    case 0x80059D1Cu: goto label_80059D1C;
    case 0x80059D20u: goto label_80059D20;
    case 0x80059D24u: goto label_80059D24;
    case 0x80059D28u: goto label_80059D28;
    case 0x80059D2Cu: goto label_80059D2C;
    case 0x80059D30u: goto label_80059D30;
    case 0x80059D34u: goto label_80059D34;
    case 0x80059D38u: goto label_80059D38;
    case 0x80059D3Cu: goto label_80059D3C;
    case 0x80059D40u: goto label_80059D40;
    case 0x80059D44u: goto label_80059D44;
    case 0x80059D48u: goto label_80059D48;
    case 0x80059D4Cu: goto label_80059D4C;
    case 0x80059D50u: goto label_80059D50;
    case 0x80059D54u: goto label_80059D54;
    case 0x80059D58u: goto label_80059D58;
    case 0x80059D5Cu: goto label_80059D5C;
    case 0x80059D60u: goto label_80059D60;
    case 0x80059D64u: goto label_80059D64;
    case 0x80059D68u: goto label_80059D68;
    case 0x80059D6Cu: goto label_80059D6C;
    case 0x80059D70u: goto label_80059D70;
    case 0x80059D74u: goto label_80059D74;
    case 0x80059D78u: goto label_80059D78;
    case 0x80059D7Cu: goto label_80059D7C;
    case 0x80059D80u: goto label_80059D80;
    case 0x80059D84u: goto label_80059D84;
    case 0x80059D88u: goto label_80059D88;
    case 0x80059D8Cu: goto label_80059D8C;
    case 0x80059D90u: goto label_80059D90;
    case 0x80059D94u: goto label_80059D94;
    case 0x80059D98u: goto label_80059D98;
    case 0x80059D9Cu: goto label_80059D9C;
    case 0x80059DA0u: goto label_80059DA0;
    case 0x80059DA4u: goto label_80059DA4;
    case 0x80059DA8u: goto label_80059DA8;
    case 0x80059DACu: goto label_80059DAC;
    case 0x80059DB0u: goto label_80059DB0;
    case 0x80059DB4u: goto label_80059DB4;
    case 0x80059DB8u: goto label_80059DB8;
    case 0x80059DBCu: goto label_80059DBC;
    case 0x80059DC0u: goto label_80059DC0;
    case 0x80059DC4u: goto label_80059DC4;
    case 0x80059DC8u: goto label_80059DC8;
    case 0x80059DCCu: goto label_80059DCC;
    case 0x80059DD0u: goto label_80059DD0;
    case 0x80059DD4u: goto label_80059DD4;
    case 0x80059DD8u: goto label_80059DD8;
    case 0x80059DDCu: goto label_80059DDC;
    case 0x80059DE0u: goto label_80059DE0;
    case 0x80059DE4u: goto label_80059DE4;
    case 0x80059DE8u: goto label_80059DE8;
    case 0x80059DECu: goto label_80059DEC;
    case 0x80059DF0u: goto label_80059DF0;
    case 0x80059DF4u: goto label_80059DF4;
    case 0x80059DF8u: goto label_80059DF8;
    case 0x80059DFCu: goto label_80059DFC;
    case 0x80059E00u: goto label_80059E00;
    case 0x80059E04u: goto label_80059E04;
    case 0x80059E08u: goto label_80059E08;
    case 0x80059E0Cu: goto label_80059E0C;
    case 0x80059E10u: goto label_80059E10;
    case 0x80059E14u: goto label_80059E14;
    case 0x80059E18u: goto label_80059E18;
    case 0x80059E1Cu: goto label_80059E1C;
    case 0x80059E20u: goto label_80059E20;
    case 0x80059E24u: goto label_80059E24;
    case 0x80059E28u: goto label_80059E28;
    case 0x80059E2Cu: goto label_80059E2C;
    case 0x80059E30u: goto label_80059E30;
    case 0x80059E34u: goto label_80059E34;
    case 0x80059E38u: goto label_80059E38;
    case 0x80059E3Cu: goto label_80059E3C;
    case 0x80059E40u: goto label_80059E40;
    case 0x80059E44u: goto label_80059E44;
    case 0x80059E48u: goto label_80059E48;
    case 0x80059E4Cu: goto label_80059E4C;
    case 0x80059E50u: goto label_80059E50;
    case 0x80059E54u: goto label_80059E54;
    case 0x80059E58u: goto label_80059E58;
    case 0x80059E5Cu: goto label_80059E5C;
    case 0x80059E60u: goto label_80059E60;
    case 0x80059E64u: goto label_80059E64;
    case 0x80059E68u: goto label_80059E68;
    case 0x80059E6Cu: goto label_80059E6C;
    case 0x80059E70u: goto label_80059E70;
    case 0x80059E74u: goto label_80059E74;
    case 0x80059E78u: goto label_80059E78;
    case 0x80059E7Cu: goto label_80059E7C;
    case 0x80059E80u: goto label_80059E80;
    case 0x80059E84u: goto label_80059E84;
    case 0x80059E88u: goto label_80059E88;
    case 0x80059E8Cu: goto label_80059E8C;
    case 0x80059E90u: goto label_80059E90;
    case 0x80059E94u: goto label_80059E94;
    case 0x80059E98u: goto label_80059E98;
    case 0x80059E9Cu: goto label_80059E9C;
    case 0x80059EA0u: goto label_80059EA0;
    case 0x80059EA4u: goto label_80059EA4;
    case 0x80059EA8u: goto label_80059EA8;
    case 0x80059EACu: goto label_80059EAC;
    case 0x80059EB0u: goto label_80059EB0;
    case 0x80059EB4u: goto label_80059EB4;
    case 0x80059EB8u: goto label_80059EB8;
    case 0x80059EBCu: goto label_80059EBC;
    case 0x80059EC0u: goto label_80059EC0;
    case 0x80059EC4u: goto label_80059EC4;
    case 0x80059EC8u: goto label_80059EC8;
    case 0x80059ECCu: goto label_80059ECC;
    case 0x80059ED0u: goto label_80059ED0;
    case 0x80059ED4u: goto label_80059ED4;
    case 0x80059ED8u: goto label_80059ED8;
    case 0x80059EDCu: goto label_80059EDC;
    case 0x80059EE0u: goto label_80059EE0;
    case 0x80059EE4u: goto label_80059EE4;
    case 0x80059EE8u: goto label_80059EE8;
    case 0x80059EECu: goto label_80059EEC;
    case 0x80059EF0u: goto label_80059EF0;
    case 0x80059EF4u: goto label_80059EF4;
    case 0x80059EF8u: goto label_80059EF8;
    case 0x80059EFCu: goto label_80059EFC;
    case 0x80059F00u: goto label_80059F00;
    case 0x80059F04u: goto label_80059F04;
    case 0x80059F08u: goto label_80059F08;
    case 0x80059F0Cu: goto label_80059F0C;
    case 0x80059F10u: goto label_80059F10;
    case 0x80059F14u: goto label_80059F14;
    case 0x80059F18u: goto label_80059F18;
    case 0x80059F1Cu: goto label_80059F1C;
    case 0x80059F20u: goto label_80059F20;
    case 0x80059F24u: goto label_80059F24;
    case 0x80059F28u: goto label_80059F28;
    case 0x80059F2Cu: goto label_80059F2C;
    case 0x80059F30u: goto label_80059F30;
    case 0x80059F34u: goto label_80059F34;
    case 0x80059F38u: goto label_80059F38;
    case 0x80059F3Cu: goto label_80059F3C;
    case 0x80059F40u: goto label_80059F40;
    case 0x80059F44u: goto label_80059F44;
    case 0x80059F48u: goto label_80059F48;
    case 0x80059F4Cu: goto label_80059F4C;
    case 0x80059F50u: goto label_80059F50;
    case 0x80059F54u: goto label_80059F54;
    case 0x80059F58u: goto label_80059F58;
    case 0x80059F5Cu: goto label_80059F5C;
    case 0x80059F60u: goto label_80059F60;
    case 0x80059F64u: goto label_80059F64;
    case 0x80059F68u: goto label_80059F68;
    case 0x80059F6Cu: goto label_80059F6C;
    case 0x80059F70u: goto label_80059F70;
    case 0x80059F74u: goto label_80059F74;
    case 0x80059F78u: goto label_80059F78;
    case 0x80059F7Cu: goto label_80059F7C;
    case 0x80059F80u: goto label_80059F80;
    case 0x80059F84u: goto label_80059F84;
    case 0x80059F88u: goto label_80059F88;
    case 0x80059F8Cu: goto label_80059F8C;
    case 0x80059F90u: goto label_80059F90;
    case 0x80059F94u: goto label_80059F94;
    case 0x80059F98u: goto label_80059F98;
    case 0x80059F9Cu: goto label_80059F9C;
    case 0x80059FA0u: goto label_80059FA0;
    case 0x80059FA4u: goto label_80059FA4;
    case 0x80059FA8u: goto label_80059FA8;
    case 0x80059FACu: goto label_80059FAC;
    case 0x80059FB0u: goto label_80059FB0;
    case 0x80059FB4u: goto label_80059FB4;
    case 0x80059FB8u: goto label_80059FB8;
    case 0x80059FBCu: goto label_80059FBC;
    case 0x80059FC0u: goto label_80059FC0;
    case 0x80059FC4u: goto label_80059FC4;
    case 0x80059FC8u: goto label_80059FC8;
    case 0x80059FCCu: goto label_80059FCC;
    case 0x80059FD0u: goto label_80059FD0;
    case 0x80059FD4u: goto label_80059FD4;
    case 0x80059FD8u: goto label_80059FD8;
    case 0x80059FDCu: goto label_80059FDC;
    case 0x80059FE0u: goto label_80059FE0;
    case 0x80059FE4u: goto label_80059FE4;
    case 0x80059FE8u: goto label_80059FE8;
    case 0x80059FECu: goto label_80059FEC;
    case 0x80059FF0u: goto label_80059FF0;
    case 0x80059FF4u: goto label_80059FF4;
    case 0x80059FF8u: goto label_80059FF8;
    case 0x80059FFCu: goto label_80059FFC;
    case 0x8005A000u: goto label_8005A000;
    case 0x8005A004u: goto label_8005A004;
    case 0x8005A008u: goto label_8005A008;
    case 0x8005A00Cu: goto label_8005A00C;
    case 0x8005A010u: goto label_8005A010;
    case 0x8005A014u: goto label_8005A014;
    case 0x8005A018u: goto label_8005A018;
    case 0x8005A01Cu: goto label_8005A01C;
    case 0x8005A020u: goto label_8005A020;
    case 0x8005A024u: goto label_8005A024;
    case 0x8005A028u: goto label_8005A028;
    case 0x8005A02Cu: goto label_8005A02C;
    case 0x8005A030u: goto label_8005A030;
    case 0x8005A034u: goto label_8005A034;
    case 0x8005A038u: goto label_8005A038;
    case 0x8005A03Cu: goto label_8005A03C;
    case 0x8005A040u: goto label_8005A040;
    case 0x8005A044u: goto label_8005A044;
    case 0x8005A048u: goto label_8005A048;
    case 0x8005A04Cu: goto label_8005A04C;
    case 0x8005A050u: goto label_8005A050;
    case 0x8005A054u: goto label_8005A054;
    case 0x8005A058u: goto label_8005A058;
    case 0x8005A05Cu: goto label_8005A05C;
    case 0x8005A060u: goto label_8005A060;
    case 0x8005A064u: goto label_8005A064;
    case 0x8005A068u: goto label_8005A068;
    case 0x8005A06Cu: goto label_8005A06C;
    case 0x8005A070u: goto label_8005A070;
    case 0x8005A074u: goto label_8005A074;
    case 0x8005A078u: goto label_8005A078;
    case 0x8005A07Cu: goto label_8005A07C;
    case 0x8005A080u: goto label_8005A080;
    case 0x8005A084u: goto label_8005A084;
    case 0x8005A088u: goto label_8005A088;
    case 0x8005A08Cu: goto label_8005A08C;
    case 0x8005A090u: goto label_8005A090;
    case 0x8005A094u: goto label_8005A094;
    case 0x8005A098u: goto label_8005A098;
    case 0x8005A09Cu: goto label_8005A09C;
    case 0x8005A0A0u: goto label_8005A0A0;
    case 0x8005A0A4u: goto label_8005A0A4;
    case 0x8005A0A8u: goto label_8005A0A8;
    case 0x8005A0ACu: goto label_8005A0AC;
    case 0x8005A0B0u: goto label_8005A0B0;
    case 0x8005A0B4u: goto label_8005A0B4;
    case 0x8005A0B8u: goto label_8005A0B8;
    case 0x8005A0BCu: goto label_8005A0BC;
    case 0x8005A0C0u: goto label_8005A0C0;
    case 0x8005A0C4u: goto label_8005A0C4;
    case 0x8005A0C8u: goto label_8005A0C8;
    case 0x8005A0CCu: goto label_8005A0CC;
    case 0x8005A0D0u: goto label_8005A0D0;
    case 0x8005A0D4u: goto label_8005A0D4;
    case 0x8005A0D8u: goto label_8005A0D8;
    case 0x8005A0DCu: goto label_8005A0DC;
    case 0x8005A0E0u: goto label_8005A0E0;
    case 0x8005A0E4u: goto label_8005A0E4;
    case 0x8005A0E8u: goto label_8005A0E8;
    case 0x8005A0ECu: goto label_8005A0EC;
    case 0x8005A0F0u: goto label_8005A0F0;
    case 0x8005A0F4u: goto label_8005A0F4;
    case 0x8005A0F8u: goto label_8005A0F8;
    case 0x8005A0FCu: goto label_8005A0FC;
    case 0x8005A100u: goto label_8005A100;
    case 0x8005A104u: goto label_8005A104;
    case 0x8005A108u: goto label_8005A108;
    case 0x8005A10Cu: goto label_8005A10C;
    case 0x8005A110u: goto label_8005A110;
    case 0x8005A114u: goto label_8005A114;
    case 0x8005A118u: goto label_8005A118;
    case 0x8005A11Cu: goto label_8005A11C;
    case 0x8005A120u: goto label_8005A120;
    case 0x8005A124u: goto label_8005A124;
    case 0x8005A128u: goto label_8005A128;
    case 0x8005A12Cu: goto label_8005A12C;
    case 0x8005A130u: goto label_8005A130;
    case 0x8005A134u: goto label_8005A134;
    case 0x8005A138u: goto label_8005A138;
    case 0x8005A13Cu: goto label_8005A13C;
    case 0x8005A140u: goto label_8005A140;
    case 0x8005A144u: goto label_8005A144;
    case 0x8005A148u: goto label_8005A148;
    case 0x8005A14Cu: goto label_8005A14C;
    case 0x8005A150u: goto label_8005A150;
    case 0x8005A154u: goto label_8005A154;
    case 0x8005A158u: goto label_8005A158;
    case 0x8005A15Cu: goto label_8005A15C;
    case 0x8005A160u: goto label_8005A160;
    case 0x8005A164u: goto label_8005A164;
    case 0x8005A168u: goto label_8005A168;
    case 0x8005A16Cu: goto label_8005A16C;
    case 0x8005A170u: goto label_8005A170;
    case 0x8005A174u: goto label_8005A174;
    case 0x8005A178u: goto label_8005A178;
    case 0x8005A17Cu: goto label_8005A17C;
    case 0x8005A180u: goto label_8005A180;
    case 0x8005A184u: goto label_8005A184;
    case 0x8005A188u: goto label_8005A188;
    case 0x8005A18Cu: goto label_8005A18C;
    case 0x8005A190u: goto label_8005A190;
    case 0x8005A194u: goto label_8005A194;
    case 0x8005A198u: goto label_8005A198;
    case 0x8005A19Cu: goto label_8005A19C;
    case 0x8005A1A0u: goto label_8005A1A0;
    case 0x8005A1A4u: goto label_8005A1A4;
    case 0x8005A1A8u: goto label_8005A1A8;
    case 0x8005A1ACu: goto label_8005A1AC;
    case 0x8005A1B0u: goto label_8005A1B0;
    case 0x8005A1B4u: goto label_8005A1B4;
    case 0x8005A1B8u: goto label_8005A1B8;
    case 0x8005A1BCu: goto label_8005A1BC;
    case 0x8005A1C0u: goto label_8005A1C0;
    case 0x8005A1C4u: goto label_8005A1C4;
    case 0x8005A1C8u: goto label_8005A1C8;
    case 0x8005A1CCu: goto label_8005A1CC;
    case 0x8005A1D0u: goto label_8005A1D0;
    case 0x8005A1D4u: goto label_8005A1D4;
    case 0x8005A1D8u: goto label_8005A1D8;
    case 0x8005A1DCu: goto label_8005A1DC;
    case 0x8005A1E0u: goto label_8005A1E0;
    case 0x8005A1E4u: goto label_8005A1E4;
    case 0x8005A1E8u: goto label_8005A1E8;
    case 0x8005A1ECu: goto label_8005A1EC;
    case 0x8005A1F0u: goto label_8005A1F0;
    case 0x8005A1F4u: goto label_8005A1F4;
    case 0x8005A1F8u: goto label_8005A1F8;
    case 0x8005A1FCu: goto label_8005A1FC;
    case 0x8005A200u: goto label_8005A200;
    case 0x8005A204u: goto label_8005A204;
    case 0x8005A208u: goto label_8005A208;
    case 0x8005A20Cu: goto label_8005A20C;
    case 0x8005A210u: goto label_8005A210;
    case 0x8005A214u: goto label_8005A214;
    case 0x8005A218u: goto label_8005A218;
    case 0x8005A21Cu: goto label_8005A21C;
    case 0x8005A220u: goto label_8005A220;
    case 0x8005A224u: goto label_8005A224;
    case 0x8005A228u: goto label_8005A228;
    case 0x8005A22Cu: goto label_8005A22C;
    case 0x8005A230u: goto label_8005A230;
    case 0x8005A234u: goto label_8005A234;
    case 0x8005A238u: goto label_8005A238;
    case 0x8005A23Cu: goto label_8005A23C;
    case 0x8005A240u: goto label_8005A240;
    case 0x8005A244u: goto label_8005A244;
    case 0x8005A248u: goto label_8005A248;
    case 0x8005A24Cu: goto label_8005A24C;
    case 0x8005A250u: goto label_8005A250;
    case 0x8005A254u: goto label_8005A254;
    case 0x8005A258u: goto label_8005A258;
    case 0x8005A25Cu: goto label_8005A25C;
    case 0x8005A260u: goto label_8005A260;
    case 0x8005A264u: goto label_8005A264;
    case 0x8005A268u: goto label_8005A268;
    case 0x8005A26Cu: goto label_8005A26C;
    case 0x8005A270u: goto label_8005A270;
    case 0x8005A274u: goto label_8005A274;
    case 0x8005A278u: goto label_8005A278;
    case 0x8005A27Cu: goto label_8005A27C;
    case 0x8005A280u: goto label_8005A280;
    case 0x8005A284u: goto label_8005A284;
    case 0x8005A288u: goto label_8005A288;
    case 0x8005A28Cu: goto label_8005A28C;
    case 0x8005A290u: goto label_8005A290;
    case 0x8005A294u: goto label_8005A294;
    case 0x8005A298u: goto label_8005A298;
    case 0x8005A29Cu: goto label_8005A29C;
    case 0x8005A2A0u: goto label_8005A2A0;
    case 0x8005A2A4u: goto label_8005A2A4;
    case 0x8005A2A8u: goto label_8005A2A8;
    case 0x8005A2ACu: goto label_8005A2AC;
    case 0x8005A2B0u: goto label_8005A2B0;
    case 0x8005A2B4u: goto label_8005A2B4;
    case 0x8005A2B8u: goto label_8005A2B8;
    case 0x8005A2BCu: goto label_8005A2BC;
    case 0x8005A2C0u: goto label_8005A2C0;
    case 0x8005A2C4u: goto label_8005A2C4;
    case 0x8005A2C8u: goto label_8005A2C8;
    case 0x8005A2CCu: goto label_8005A2CC;
    case 0x8005A2D0u: goto label_8005A2D0;
    case 0x8005A2D4u: goto label_8005A2D4;
    case 0x8005A2D8u: goto label_8005A2D8;
    case 0x8005A2DCu: goto label_8005A2DC;
    case 0x8005A2E0u: goto label_8005A2E0;
    case 0x8005A2E4u: goto label_8005A2E4;
    case 0x8005A2E8u: goto label_8005A2E8;
    case 0x8005A2ECu: goto label_8005A2EC;
    case 0x8005A2F0u: goto label_8005A2F0;
    case 0x8005A2F4u: goto label_8005A2F4;
    case 0x8005A2F8u: goto label_8005A2F8;
    case 0x8005A2FCu: goto label_8005A2FC;
    case 0x8005A300u: goto label_8005A300;
    case 0x8005A304u: goto label_8005A304;
    case 0x8005A308u: goto label_8005A308;
    case 0x8005A30Cu: goto label_8005A30C;
    case 0x8005A310u: goto label_8005A310;
    case 0x8005A314u: goto label_8005A314;
    case 0x8005A318u: goto label_8005A318;
    case 0x8005A31Cu: goto label_8005A31C;
    case 0x8005A320u: goto label_8005A320;
    case 0x8005A324u: goto label_8005A324;
    case 0x8005A328u: goto label_8005A328;
    case 0x8005A32Cu: goto label_8005A32C;
    case 0x8005A330u: goto label_8005A330;
    case 0x8005A334u: goto label_8005A334;
    case 0x8005A338u: goto label_8005A338;
    case 0x8005A33Cu: goto label_8005A33C;
    case 0x8005A340u: goto label_8005A340;
    case 0x8005A344u: goto label_8005A344;
    case 0x8005A348u: goto label_8005A348;
    case 0x8005A34Cu: goto label_8005A34C;
    case 0x8005A350u: goto label_8005A350;
    case 0x8005A354u: goto label_8005A354;
    case 0x8005A358u: goto label_8005A358;
    case 0x8005A35Cu: goto label_8005A35C;
    case 0x8005A360u: goto label_8005A360;
    case 0x8005A364u: goto label_8005A364;
    case 0x8005A368u: goto label_8005A368;
    case 0x8005A36Cu: goto label_8005A36C;
    case 0x8005A370u: goto label_8005A370;
    case 0x8005A374u: goto label_8005A374;
    case 0x8005A378u: goto label_8005A378;
    case 0x8005A37Cu: goto label_8005A37C;
    case 0x8005A380u: goto label_8005A380;
    case 0x8005A384u: goto label_8005A384;
    case 0x8005A388u: goto label_8005A388;
    case 0x8005A38Cu: goto label_8005A38C;
    case 0x8005A390u: goto label_8005A390;
    case 0x8005A394u: goto label_8005A394;
    case 0x8005A398u: goto label_8005A398;
    case 0x8005A39Cu: goto label_8005A39C;
    case 0x8005A3A0u: goto label_8005A3A0;
    case 0x8005A3A4u: goto label_8005A3A4;
    case 0x8005A3A8u: goto label_8005A3A8;
    case 0x8005A3ACu: goto label_8005A3AC;
    case 0x8005A3B0u: goto label_8005A3B0;
    case 0x8005A3B4u: goto label_8005A3B4;
    case 0x8005A3B8u: goto label_8005A3B8;
    case 0x8005A3BCu: goto label_8005A3BC;
    case 0x8005A3C0u: goto label_8005A3C0;
    case 0x8005A3C4u: goto label_8005A3C4;
    case 0x8005A3C8u: goto label_8005A3C8;
    case 0x8005A3CCu: goto label_8005A3CC;
    case 0x8005A3D0u: goto label_8005A3D0;
    case 0x8005A3D4u: goto label_8005A3D4;
    case 0x8005A3D8u: goto label_8005A3D8;
    case 0x8005A3DCu: goto label_8005A3DC;
    case 0x8005A3E0u: goto label_8005A3E0;
    case 0x8005A3E4u: goto label_8005A3E4;
    case 0x8005A3E8u: goto label_8005A3E8;
    case 0x8005A3ECu: goto label_8005A3EC;
    case 0x8005A3F0u: goto label_8005A3F0;
    case 0x8005A3F4u: goto label_8005A3F4;
    case 0x8005A3F8u: goto label_8005A3F8;
    case 0x8005A3FCu: goto label_8005A3FC;
    case 0x8005A400u: goto label_8005A400;
    case 0x8005A404u: goto label_8005A404;
    case 0x8005A408u: goto label_8005A408;
    case 0x8005A40Cu: goto label_8005A40C;
    case 0x8005A410u: goto label_8005A410;
    case 0x8005A414u: goto label_8005A414;
    case 0x8005A418u: goto label_8005A418;
    case 0x8005A41Cu: goto label_8005A41C;
    case 0x8005A420u: goto label_8005A420;
    case 0x8005A424u: goto label_8005A424;
    case 0x8005A428u: goto label_8005A428;
    case 0x8005A42Cu: goto label_8005A42C;
    case 0x8005A430u: goto label_8005A430;
    case 0x8005A434u: goto label_8005A434;
    case 0x8005A438u: goto label_8005A438;
    case 0x8005A43Cu: goto label_8005A43C;
    case 0x8005A440u: goto label_8005A440;
    case 0x8005A444u: goto label_8005A444;
    case 0x8005A448u: goto label_8005A448;
    case 0x8005A44Cu: goto label_8005A44C;
    case 0x8005A450u: goto label_8005A450;
    case 0x8005A454u: goto label_8005A454;
    case 0x8005A458u: goto label_8005A458;
    case 0x8005A45Cu: goto label_8005A45C;
    case 0x8005A460u: goto label_8005A460;
    case 0x8005A464u: goto label_8005A464;
    case 0x8005A468u: goto label_8005A468;
    case 0x8005A46Cu: goto label_8005A46C;
    case 0x8005A470u: goto label_8005A470;
    case 0x8005A474u: goto label_8005A474;
    case 0x8005A478u: goto label_8005A478;
    case 0x8005A47Cu: goto label_8005A47C;
    case 0x8005A480u: goto label_8005A480;
    case 0x8005A484u: goto label_8005A484;
    case 0x8005A488u: goto label_8005A488;
    case 0x8005A48Cu: goto label_8005A48C;
    case 0x8005A490u: goto label_8005A490;
    case 0x8005A494u: goto label_8005A494;
    case 0x8005A498u: goto label_8005A498;
    case 0x8005A49Cu: goto label_8005A49C;
    case 0x8005A4A0u: goto label_8005A4A0;
    case 0x8005A4A4u: goto label_8005A4A4;
    case 0x8005A4A8u: goto label_8005A4A8;
    case 0x8005A4ACu: goto label_8005A4AC;
    case 0x8005A4B0u: goto label_8005A4B0;
    case 0x8005A4B4u: goto label_8005A4B4;
    case 0x8005A4B8u: goto label_8005A4B8;
    case 0x8005A4BCu: goto label_8005A4BC;
    case 0x8005A4C0u: goto label_8005A4C0;
    case 0x8005A4C4u: goto label_8005A4C4;
    case 0x8005A4C8u: goto label_8005A4C8;
    case 0x8005A4CCu: goto label_8005A4CC;
    case 0x8005A4D0u: goto label_8005A4D0;
    case 0x8005A4D4u: goto label_8005A4D4;
    case 0x8005A4D8u: goto label_8005A4D8;
    case 0x8005A4DCu: goto label_8005A4DC;
    case 0x8005A4E0u: goto label_8005A4E0;
    case 0x8005A4E4u: goto label_8005A4E4;
    case 0x8005A4E8u: goto label_8005A4E8;
    case 0x8005A4ECu: goto label_8005A4EC;
    case 0x8005A4F0u: goto label_8005A4F0;
    case 0x8005A4F4u: goto label_8005A4F4;
    case 0x8005A4F8u: goto label_8005A4F8;
    case 0x8005A4FCu: goto label_8005A4FC;
    case 0x8005A500u: goto label_8005A500;
    case 0x8005A504u: goto label_8005A504;
    case 0x8005A508u: goto label_8005A508;
    case 0x8005A50Cu: goto label_8005A50C;
    case 0x8005A510u: goto label_8005A510;
    case 0x8005A514u: goto label_8005A514;
    case 0x8005A518u: goto label_8005A518;
    case 0x8005A51Cu: goto label_8005A51C;
    case 0x8005A520u: goto label_8005A520;
    case 0x8005A524u: goto label_8005A524;
    case 0x8005A528u: goto label_8005A528;
    case 0x8005A52Cu: goto label_8005A52C;
    case 0x8005A530u: goto label_8005A530;
    case 0x8005A534u: goto label_8005A534;
    case 0x8005A538u: goto label_8005A538;
    case 0x8005A53Cu: goto label_8005A53C;
    case 0x8005A540u: goto label_8005A540;
    case 0x8005A544u: goto label_8005A544;
    case 0x8005A548u: goto label_8005A548;
    case 0x8005A54Cu: goto label_8005A54C;
    case 0x8005A550u: goto label_8005A550;
    case 0x8005A554u: goto label_8005A554;
    case 0x8005A558u: goto label_8005A558;
    case 0x8005A55Cu: goto label_8005A55C;
    case 0x8005A560u: goto label_8005A560;
    case 0x8005A564u: goto label_8005A564;
    case 0x8005A568u: goto label_8005A568;
    case 0x8005A56Cu: goto label_8005A56C;
    case 0x8005A570u: goto label_8005A570;
    case 0x8005A574u: goto label_8005A574;
    case 0x8005A578u: goto label_8005A578;
    case 0x8005A57Cu: goto label_8005A57C;
    case 0x8005A580u: goto label_8005A580;
    case 0x8005A584u: goto label_8005A584;
    case 0x8005A588u: goto label_8005A588;
    case 0x8005A58Cu: goto label_8005A58C;
    case 0x8005A590u: goto label_8005A590;
    case 0x8005A594u: goto label_8005A594;
    case 0x8005A598u: goto label_8005A598;
    case 0x8005A59Cu: goto label_8005A59C;
    case 0x8005A5A0u: goto label_8005A5A0;
    case 0x8005A5A4u: goto label_8005A5A4;
    case 0x8005A5A8u: goto label_8005A5A8;
    case 0x8005A5ACu: goto label_8005A5AC;
    case 0x8005A5B0u: goto label_8005A5B0;
    case 0x8005A5B4u: goto label_8005A5B4;
    case 0x8005A5B8u: goto label_8005A5B8;
    case 0x8005A5BCu: goto label_8005A5BC;
    case 0x8005A5C0u: goto label_8005A5C0;
    case 0x8005A5C4u: goto label_8005A5C4;
    case 0x8005A5C8u: goto label_8005A5C8;
    case 0x8005A5CCu: goto label_8005A5CC;
    case 0x8005A5D0u: goto label_8005A5D0;
    case 0x8005A5D4u: goto label_8005A5D4;
    case 0x8005A5D8u: goto label_8005A5D8;
    case 0x8005A5DCu: goto label_8005A5DC;
    case 0x8005A5E0u: goto label_8005A5E0;
    case 0x8005A5E4u: goto label_8005A5E4;
    case 0x8005A5E8u: goto label_8005A5E8;
    case 0x8005A5ECu: goto label_8005A5EC;
    case 0x8005A5F0u: goto label_8005A5F0;
    case 0x8005A5F4u: goto label_8005A5F4;
    case 0x8005A5F8u: goto label_8005A5F8;
    case 0x8005A5FCu: goto label_8005A5FC;
    case 0x8005A600u: goto label_8005A600;
    case 0x8005A604u: goto label_8005A604;
    case 0x8005A608u: goto label_8005A608;
    case 0x8005A60Cu: goto label_8005A60C;
    case 0x8005A610u: goto label_8005A610;
    case 0x8005A614u: goto label_8005A614;
    case 0x8005A618u: goto label_8005A618;
    case 0x8005A61Cu: goto label_8005A61C;
    case 0x8005A620u: goto label_8005A620;
    case 0x8005A624u: goto label_8005A624;
    case 0x8005A628u: goto label_8005A628;
    case 0x8005A62Cu: goto label_8005A62C;
    case 0x8005A630u: goto label_8005A630;
    case 0x8005A634u: goto label_8005A634;
    case 0x8005A638u: goto label_8005A638;
    case 0x8005A63Cu: goto label_8005A63C;
    case 0x8005A640u: goto label_8005A640;
    case 0x8005A644u: goto label_8005A644;
    case 0x8005A648u: goto label_8005A648;
    case 0x8005A64Cu: goto label_8005A64C;
    case 0x8005A650u: goto label_8005A650;
    case 0x8005A654u: goto label_8005A654;
    case 0x8005A658u: goto label_8005A658;
    case 0x8005A65Cu: goto label_8005A65C;
    case 0x8005A660u: goto label_8005A660;
    case 0x8005A664u: goto label_8005A664;
    case 0x8005A668u: goto label_8005A668;
    case 0x8005A66Cu: goto label_8005A66C;
    case 0x8005A670u: goto label_8005A670;
    case 0x8005A674u: goto label_8005A674;
    case 0x8005A678u: goto label_8005A678;
    case 0x8005A67Cu: goto label_8005A67C;
    case 0x8005A680u: goto label_8005A680;
    case 0x8005A684u: goto label_8005A684;
    case 0x8005A688u: goto label_8005A688;
    case 0x8005A68Cu: goto label_8005A68C;
    case 0x8005A690u: goto label_8005A690;
    case 0x8005A694u: goto label_8005A694;
    case 0x8005A698u: goto label_8005A698;
    case 0x8005A69Cu: goto label_8005A69C;
    case 0x8005A6A0u: goto label_8005A6A0;
    case 0x8005A6A4u: goto label_8005A6A4;
    case 0x8005A6A8u: goto label_8005A6A8;
    case 0x8005A6ACu: goto label_8005A6AC;
    case 0x8005A6B0u: goto label_8005A6B0;
    case 0x8005A6B4u: goto label_8005A6B4;
    case 0x8005A6B8u: goto label_8005A6B8;
    case 0x8005A6BCu: goto label_8005A6BC;
    case 0x8005A6C0u: goto label_8005A6C0;
    case 0x8005A6C4u: goto label_8005A6C4;
    case 0x8005A6C8u: goto label_8005A6C8;
    case 0x8005A6CCu: goto label_8005A6CC;
    case 0x8005A6D0u: goto label_8005A6D0;
    case 0x8005A6D4u: goto label_8005A6D4;
    case 0x8005A6D8u: goto label_8005A6D8;
    case 0x8005A6DCu: goto label_8005A6DC;
    case 0x8005A6E0u: goto label_8005A6E0;
    case 0x8005A6E4u: goto label_8005A6E4;
    case 0x8005A6E8u: goto label_8005A6E8;
    case 0x8005A6ECu: goto label_8005A6EC;
    case 0x8005A6F0u: goto label_8005A6F0;
    case 0x8005A6F4u: goto label_8005A6F4;
    case 0x8005A6F8u: goto label_8005A6F8;
    case 0x8005A6FCu: goto label_8005A6FC;
    case 0x8005A700u: goto label_8005A700;
    case 0x8005A704u: goto label_8005A704;
    case 0x8005A708u: goto label_8005A708;
    case 0x8005A70Cu: goto label_8005A70C;
    case 0x8005A710u: goto label_8005A710;
    case 0x8005A714u: goto label_8005A714;
    case 0x8005A718u: goto label_8005A718;
    case 0x8005A71Cu: goto label_8005A71C;
    case 0x8005A720u: goto label_8005A720;
    case 0x8005A724u: goto label_8005A724;
    case 0x8005A728u: goto label_8005A728;
    case 0x8005A72Cu: goto label_8005A72C;
    case 0x8005A730u: goto label_8005A730;
    case 0x8005A734u: goto label_8005A734;
    case 0x8005A738u: goto label_8005A738;
    case 0x8005A73Cu: goto label_8005A73C;
    case 0x8005A740u: goto label_8005A740;
    case 0x8005A744u: goto label_8005A744;
    case 0x8005A748u: goto label_8005A748;
    case 0x8005A74Cu: goto label_8005A74C;
    case 0x8005A750u: goto label_8005A750;
    case 0x8005A754u: goto label_8005A754;
    case 0x8005A758u: goto label_8005A758;
    case 0x8005A75Cu: goto label_8005A75C;
    case 0x8005A760u: goto label_8005A760;
    case 0x8005A764u: goto label_8005A764;
    case 0x8005A768u: goto label_8005A768;
    case 0x8005A76Cu: goto label_8005A76C;
    case 0x8005A770u: goto label_8005A770;
    case 0x8005A774u: goto label_8005A774;
    case 0x8005A778u: goto label_8005A778;
    case 0x8005A77Cu: goto label_8005A77C;
    case 0x8005A780u: goto label_8005A780;
    case 0x8005A784u: goto label_8005A784;
    case 0x8005A788u: goto label_8005A788;
    case 0x8005A78Cu: goto label_8005A78C;
    case 0x8005A790u: goto label_8005A790;
    case 0x8005A794u: goto label_8005A794;
    case 0x8005A798u: goto label_8005A798;
    case 0x8005A79Cu: goto label_8005A79C;
    case 0x8005A7A0u: goto label_8005A7A0;
    case 0x8005A7A4u: goto label_8005A7A4;
    case 0x8005A7A8u: goto label_8005A7A8;
    case 0x8005A7ACu: goto label_8005A7AC;
    case 0x8005A7B0u: goto label_8005A7B0;
    case 0x8005A7B4u: goto label_8005A7B4;
    case 0x8005A7B8u: goto label_8005A7B8;
    case 0x8005A7BCu: goto label_8005A7BC;
    case 0x8005A7C0u: goto label_8005A7C0;
    case 0x8005A7C4u: goto label_8005A7C4;
    case 0x8005A7C8u: goto label_8005A7C8;
    case 0x8005A7CCu: goto label_8005A7CC;
    case 0x8005A7D0u: goto label_8005A7D0;
    case 0x8005A7D4u: goto label_8005A7D4;
    case 0x8005A7D8u: goto label_8005A7D8;
    case 0x8005A7DCu: goto label_8005A7DC;
    case 0x8005A7E0u: goto label_8005A7E0;
    case 0x8005A7E4u: goto label_8005A7E4;
    case 0x8005A7E8u: goto label_8005A7E8;
    case 0x8005A7ECu: goto label_8005A7EC;
    case 0x8005A7F0u: goto label_8005A7F0;
    case 0x8005A7F4u: goto label_8005A7F4;
    case 0x8005A7F8u: goto label_8005A7F8;
    case 0x8005A7FCu: goto label_8005A7FC;
    case 0x8005A800u: goto label_8005A800;
    case 0x8005A804u: goto label_8005A804;
    case 0x8005A808u: goto label_8005A808;
    case 0x8005A80Cu: goto label_8005A80C;
    case 0x8005A810u: goto label_8005A810;
    case 0x8005A814u: goto label_8005A814;
    case 0x8005A818u: goto label_8005A818;
    case 0x8005A81Cu: goto label_8005A81C;
    case 0x8005A820u: goto label_8005A820;
    case 0x8005A824u: goto label_8005A824;
    case 0x8005A828u: goto label_8005A828;
    case 0x8005A82Cu: goto label_8005A82C;
    case 0x8005A830u: goto label_8005A830;
    case 0x8005A834u: goto label_8005A834;
    case 0x8005A838u: goto label_8005A838;
    case 0x8005A83Cu: goto label_8005A83C;
    case 0x8005A840u: goto label_8005A840;
    case 0x8005A844u: goto label_8005A844;
    case 0x8005A848u: goto label_8005A848;
    case 0x8005A84Cu: goto label_8005A84C;
    case 0x8005A850u: goto label_8005A850;
    case 0x8005A854u: goto label_8005A854;
    case 0x8005A858u: goto label_8005A858;
    case 0x8005A85Cu: goto label_8005A85C;
    case 0x8005A860u: goto label_8005A860;
    case 0x8005A864u: goto label_8005A864;
    case 0x8005A868u: goto label_8005A868;
    case 0x8005A86Cu: goto label_8005A86C;
    case 0x8005A870u: goto label_8005A870;
    case 0x8005A874u: goto label_8005A874;
    case 0x8005A878u: goto label_8005A878;
    case 0x8005A87Cu: goto label_8005A87C;
    case 0x8005A880u: goto label_8005A880;
    case 0x8005A884u: goto label_8005A884;
    case 0x8005A888u: goto label_8005A888;
    case 0x8005A88Cu: goto label_8005A88C;
    case 0x8005A890u: goto label_8005A890;
    case 0x8005A894u: goto label_8005A894;
    case 0x8005A898u: goto label_8005A898;
    case 0x8005A89Cu: goto label_8005A89C;
    case 0x8005A8A0u: goto label_8005A8A0;
    case 0x8005A8A4u: goto label_8005A8A4;
    case 0x8005A8A8u: goto label_8005A8A8;
    case 0x8005A8ACu: goto label_8005A8AC;
    case 0x8005A8B0u: goto label_8005A8B0;
    case 0x8005A8B4u: goto label_8005A8B4;
    case 0x8005A8B8u: goto label_8005A8B8;
    case 0x8005A8BCu: goto label_8005A8BC;
    case 0x8005A8C0u: goto label_8005A8C0;
    case 0x8005A8C4u: goto label_8005A8C4;
    case 0x8005A8C8u: goto label_8005A8C8;
    case 0x8005A8CCu: goto label_8005A8CC;
    case 0x8005A8D0u: goto label_8005A8D0;
    case 0x8005A8D4u: goto label_8005A8D4;
    case 0x8005A8D8u: goto label_8005A8D8;
    case 0x8005A8DCu: goto label_8005A8DC;
    case 0x8005A8E0u: goto label_8005A8E0;
    case 0x8005A8E4u: goto label_8005A8E4;
    case 0x8005A8E8u: goto label_8005A8E8;
    case 0x8005A8ECu: goto label_8005A8EC;
    case 0x8005A8F0u: goto label_8005A8F0;
    case 0x8005A8F4u: goto label_8005A8F4;
    case 0x8005A8F8u: goto label_8005A8F8;
    case 0x8005A8FCu: goto label_8005A8FC;
    case 0x8005A900u: goto label_8005A900;
    case 0x8005A904u: goto label_8005A904;
    case 0x8005A908u: goto label_8005A908;
    case 0x8005A90Cu: goto label_8005A90C;
    case 0x8005A910u: goto label_8005A910;
    case 0x8005A914u: goto label_8005A914;
    case 0x8005A918u: goto label_8005A918;
    case 0x8005A91Cu: goto label_8005A91C;
    case 0x8005A920u: goto label_8005A920;
    case 0x8005A924u: goto label_8005A924;
    case 0x8005A928u: goto label_8005A928;
    case 0x8005A92Cu: goto label_8005A92C;
    case 0x8005A930u: goto label_8005A930;
    case 0x8005A934u: goto label_8005A934;
    case 0x8005A938u: goto label_8005A938;
    case 0x8005A93Cu: goto label_8005A93C;
    case 0x8005A940u: goto label_8005A940;
    case 0x8005A944u: goto label_8005A944;
    case 0x8005A948u: goto label_8005A948;
    case 0x8005A94Cu: goto label_8005A94C;
    case 0x8005A950u: goto label_8005A950;
    case 0x8005A954u: goto label_8005A954;
    case 0x8005A958u: goto label_8005A958;
    case 0x8005A95Cu: goto label_8005A95C;
    case 0x8005A960u: goto label_8005A960;
    case 0x8005A964u: goto label_8005A964;
    case 0x8005A968u: goto label_8005A968;
    case 0x8005A96Cu: goto label_8005A96C;
    case 0x8005A970u: goto label_8005A970;
    case 0x8005A974u: goto label_8005A974;
    case 0x8005A978u: goto label_8005A978;
    case 0x8005A97Cu: goto label_8005A97C;
    case 0x8005A980u: goto label_8005A980;
    case 0x8005A984u: goto label_8005A984;
    case 0x8005A988u: goto label_8005A988;
    case 0x8005A98Cu: goto label_8005A98C;
    case 0x8005A990u: goto label_8005A990;
    case 0x8005A994u: goto label_8005A994;
    case 0x8005A998u: goto label_8005A998;
    case 0x8005A99Cu: goto label_8005A99C;
    case 0x8005A9A0u: goto label_8005A9A0;
    case 0x8005A9A4u: goto label_8005A9A4;
    case 0x8005A9A8u: goto label_8005A9A8;
    case 0x8005A9ACu: goto label_8005A9AC;
    case 0x8005A9B0u: goto label_8005A9B0;
    case 0x8005A9B4u: goto label_8005A9B4;
    case 0x8005A9B8u: goto label_8005A9B8;
    case 0x8005A9BCu: goto label_8005A9BC;
    case 0x8005A9C0u: goto label_8005A9C0;
    case 0x8005A9C4u: goto label_8005A9C4;
    case 0x8005A9C8u: goto label_8005A9C8;
    case 0x8005A9CCu: goto label_8005A9CC;
    case 0x8005A9D0u: goto label_8005A9D0;
    case 0x8005A9D4u: goto label_8005A9D4;
    case 0x8005A9D8u: goto label_8005A9D8;
    case 0x8005A9DCu: goto label_8005A9DC;
    case 0x8005A9E0u: goto label_8005A9E0;
    case 0x8005A9E4u: goto label_8005A9E4;
    case 0x8005A9E8u: goto label_8005A9E8;
    case 0x8005A9ECu: goto label_8005A9EC;
    case 0x8005A9F0u: goto label_8005A9F0;
    case 0x8005A9F4u: goto label_8005A9F4;
    case 0x8005A9F8u: goto label_8005A9F8;
    case 0x8005A9FCu: goto label_8005A9FC;
    case 0x8005AA00u: goto label_8005AA00;
    case 0x8005AA04u: goto label_8005AA04;
    case 0x8005AA08u: goto label_8005AA08;
    case 0x8005AA0Cu: goto label_8005AA0C;
    case 0x8005AA10u: goto label_8005AA10;
    case 0x8005AA14u: goto label_8005AA14;
    case 0x8005AA18u: goto label_8005AA18;
    case 0x8005AA1Cu: goto label_8005AA1C;
    case 0x8005AA20u: goto label_8005AA20;
    case 0x8005AA24u: goto label_8005AA24;
    case 0x8005AA28u: goto label_8005AA28;
    case 0x8005AA2Cu: goto label_8005AA2C;
    case 0x8005AA30u: goto label_8005AA30;
    case 0x8005AA34u: goto label_8005AA34;
    case 0x8005AA38u: goto label_8005AA38;
    case 0x8005AA3Cu: goto label_8005AA3C;
    case 0x8005AA40u: goto label_8005AA40;
    case 0x8005AA44u: goto label_8005AA44;
    case 0x8005AA48u: goto label_8005AA48;
    case 0x8005AA4Cu: goto label_8005AA4C;
    case 0x8005AA50u: goto label_8005AA50;
    case 0x8005AA54u: goto label_8005AA54;
    case 0x8005AA58u: goto label_8005AA58;
    case 0x8005AA5Cu: goto label_8005AA5C;
    case 0x8005AA60u: goto label_8005AA60;
    case 0x8005AA64u: goto label_8005AA64;
    case 0x8005AA68u: goto label_8005AA68;
    case 0x8005AA6Cu: goto label_8005AA6C;
    case 0x8005AA70u: goto label_8005AA70;
    case 0x8005AA74u: goto label_8005AA74;
    case 0x8005AA78u: goto label_8005AA78;
    case 0x8005AA7Cu: goto label_8005AA7C;
    case 0x8005AA80u: goto label_8005AA80;
    case 0x8005AA84u: goto label_8005AA84;
    case 0x8005AA88u: goto label_8005AA88;
    case 0x8005AA8Cu: goto label_8005AA8C;
    case 0x8005AA90u: goto label_8005AA90;
    case 0x8005AA94u: goto label_8005AA94;
    case 0x8005AA98u: goto label_8005AA98;
    case 0x8005AA9Cu: goto label_8005AA9C;
    case 0x8005AAA0u: goto label_8005AAA0;
    case 0x8005AAA4u: goto label_8005AAA4;
    case 0x8005AAA8u: goto label_8005AAA8;
    case 0x8005AAACu: goto label_8005AAAC;
    case 0x8005AAB0u: goto label_8005AAB0;
    case 0x8005AAB4u: goto label_8005AAB4;
    case 0x8005AAB8u: goto label_8005AAB8;
    case 0x8005AABCu: goto label_8005AABC;
    case 0x8005AAC0u: goto label_8005AAC0;
    case 0x8005AAC4u: goto label_8005AAC4;
    case 0x8005AAC8u: goto label_8005AAC8;
    case 0x8005AACCu: goto label_8005AACC;
    case 0x8005AAD0u: goto label_8005AAD0;
    case 0x8005AAD4u: goto label_8005AAD4;
    case 0x8005AAD8u: goto label_8005AAD8;
    case 0x8005AADCu: goto label_8005AADC;
    case 0x8005AAE0u: goto label_8005AAE0;
    case 0x8005AAE4u: goto label_8005AAE4;
    case 0x8005AAE8u: goto label_8005AAE8;
    case 0x8005AAECu: goto label_8005AAEC;
    case 0x8005AAF0u: goto label_8005AAF0;
    case 0x8005AAF4u: goto label_8005AAF4;
    case 0x8005AAF8u: goto label_8005AAF8;
    case 0x8005AAFCu: goto label_8005AAFC;
    case 0x8005AB00u: goto label_8005AB00;
    case 0x8005AB04u: goto label_8005AB04;
    case 0x8005AB08u: goto label_8005AB08;
    case 0x8005AB0Cu: goto label_8005AB0C;
    case 0x8005AB10u: goto label_8005AB10;
    case 0x8005AB14u: goto label_8005AB14;
    case 0x8005AB18u: goto label_8005AB18;
    case 0x8005AB1Cu: goto label_8005AB1C;
    case 0x8005AB20u: goto label_8005AB20;
    case 0x8005AB24u: goto label_8005AB24;
    case 0x8005AB28u: goto label_8005AB28;
    case 0x8005AB2Cu: goto label_8005AB2C;
    case 0x8005AB30u: goto label_8005AB30;
    case 0x8005AB34u: goto label_8005AB34;
    case 0x8005AB38u: goto label_8005AB38;
    case 0x8005AB3Cu: goto label_8005AB3C;
    case 0x8005AB40u: goto label_8005AB40;
    case 0x8005AB44u: goto label_8005AB44;
    case 0x8005AB48u: goto label_8005AB48;
    case 0x8005AB4Cu: goto label_8005AB4C;
    case 0x8005AB50u: goto label_8005AB50;
    case 0x8005AB54u: goto label_8005AB54;
    case 0x8005AB58u: goto label_8005AB58;
    case 0x8005AB5Cu: goto label_8005AB5C;
    case 0x8005AB60u: goto label_8005AB60;
    case 0x8005AB64u: goto label_8005AB64;
    case 0x8005AB68u: goto label_8005AB68;
    case 0x8005AB6Cu: goto label_8005AB6C;
    case 0x8005AB70u: goto label_8005AB70;
    case 0x8005AB74u: goto label_8005AB74;
    case 0x8005AB78u: goto label_8005AB78;
    case 0x8005AB7Cu: goto label_8005AB7C;
    case 0x8005AB80u: goto label_8005AB80;
    case 0x8005AB84u: goto label_8005AB84;
    case 0x8005AB88u: goto label_8005AB88;
    case 0x8005AB8Cu: goto label_8005AB8C;
    case 0x8005AB90u: goto label_8005AB90;
    case 0x8005AB94u: goto label_8005AB94;
    case 0x8005AB98u: goto label_8005AB98;
    case 0x8005AB9Cu: goto label_8005AB9C;
    case 0x8005ABA0u: goto label_8005ABA0;
    case 0x8005ABA4u: goto label_8005ABA4;
    case 0x8005ABA8u: goto label_8005ABA8;
    case 0x8005ABACu: goto label_8005ABAC;
    case 0x8005ABB0u: goto label_8005ABB0;
    case 0x8005ABB4u: goto label_8005ABB4;
    case 0x8005ABB8u: goto label_8005ABB8;
    case 0x8005ABBCu: goto label_8005ABBC;
    case 0x8005ABC0u: goto label_8005ABC0;
    case 0x8005ABC4u: goto label_8005ABC4;
    case 0x8005ABC8u: goto label_8005ABC8;
    case 0x8005ABCCu: goto label_8005ABCC;
    case 0x8005ABD0u: goto label_8005ABD0;
    case 0x8005ABD4u: goto label_8005ABD4;
    case 0x8005ABD8u: goto label_8005ABD8;
    case 0x8005ABDCu: goto label_8005ABDC;
    case 0x8005ABE0u: goto label_8005ABE0;
    case 0x8005ABE4u: goto label_8005ABE4;
    case 0x8005ABE8u: goto label_8005ABE8;
    case 0x8005ABECu: goto label_8005ABEC;
    case 0x8005ABF0u: goto label_8005ABF0;
    case 0x8005ABF4u: goto label_8005ABF4;
    case 0x8005ABF8u: goto label_8005ABF8;
    case 0x8005ABFCu: goto label_8005ABFC;
    case 0x8005AC00u: goto label_8005AC00;
    case 0x8005AC04u: goto label_8005AC04;
    case 0x8005AC08u: goto label_8005AC08;
    case 0x8005AC0Cu: goto label_8005AC0C;
    case 0x8005AC10u: goto label_8005AC10;
    case 0x8005AC14u: goto label_8005AC14;
    case 0x8005AC18u: goto label_8005AC18;
    case 0x8005AC1Cu: goto label_8005AC1C;
    case 0x8005AC20u: goto label_8005AC20;
    case 0x8005AC24u: goto label_8005AC24;
    case 0x8005AC28u: goto label_8005AC28;
    case 0x8005AC2Cu: goto label_8005AC2C;
    case 0x8005AC30u: goto label_8005AC30;
    case 0x8005AC34u: goto label_8005AC34;
    case 0x8005AC38u: goto label_8005AC38;
    case 0x8005AC3Cu: goto label_8005AC3C;
    case 0x8005AC40u: goto label_8005AC40;
    case 0x8005AC44u: goto label_8005AC44;
    case 0x8005AC48u: goto label_8005AC48;
    case 0x8005AC4Cu: goto label_8005AC4C;
    case 0x8005AC50u: goto label_8005AC50;
    case 0x8005AC54u: goto label_8005AC54;
    case 0x8005AC58u: goto label_8005AC58;
    case 0x8005AC5Cu: goto label_8005AC5C;
    case 0x8005AC60u: goto label_8005AC60;
    case 0x8005AC64u: goto label_8005AC64;
    case 0x8005AC68u: goto label_8005AC68;
    case 0x8005AC6Cu: goto label_8005AC6C;
    case 0x8005AC70u: goto label_8005AC70;
    case 0x8005AC74u: goto label_8005AC74;
    case 0x8005AC78u: goto label_8005AC78;
    case 0x8005AC7Cu: goto label_8005AC7C;
    case 0x8005AC80u: goto label_8005AC80;
    case 0x8005AC84u: goto label_8005AC84;
    case 0x8005AC88u: goto label_8005AC88;
    case 0x8005AC8Cu: goto label_8005AC8C;
    case 0x8005AC90u: goto label_8005AC90;
    case 0x8005AC94u: goto label_8005AC94;
    case 0x8005AC98u: goto label_8005AC98;
    case 0x8005AC9Cu: goto label_8005AC9C;
    case 0x8005ACA0u: goto label_8005ACA0;
    case 0x8005ACA4u: goto label_8005ACA4;
    case 0x8005ACA8u: goto label_8005ACA8;
    case 0x8005ACACu: goto label_8005ACAC;
    case 0x8005ACB0u: goto label_8005ACB0;
    case 0x8005ACB4u: goto label_8005ACB4;
    case 0x8005ACB8u: goto label_8005ACB8;
    case 0x8005ACBCu: goto label_8005ACBC;
    case 0x8005ACC0u: goto label_8005ACC0;
    case 0x8005ACC4u: goto label_8005ACC4;
    case 0x8005ACC8u: goto label_8005ACC8;
    case 0x8005ACCCu: goto label_8005ACCC;
    case 0x8005ACD0u: goto label_8005ACD0;
    case 0x8005ACD4u: goto label_8005ACD4;
    case 0x8005ACD8u: goto label_8005ACD8;
    case 0x8005ACDCu: goto label_8005ACDC;
    case 0x8005ACE0u: goto label_8005ACE0;
    case 0x8005ACE4u: goto label_8005ACE4;
    case 0x8005ACE8u: goto label_8005ACE8;
    case 0x8005ACECu: goto label_8005ACEC;
    case 0x8005ACF0u: goto label_8005ACF0;
    case 0x8005ACF4u: goto label_8005ACF4;
    case 0x8005ACF8u: goto label_8005ACF8;
    case 0x8005ACFCu: goto label_8005ACFC;
    case 0x8005AD00u: goto label_8005AD00;
    case 0x8005AD04u: goto label_8005AD04;
    case 0x8005AD08u: goto label_8005AD08;
    case 0x8005AD0Cu: goto label_8005AD0C;
    case 0x8005AD10u: goto label_8005AD10;
    case 0x8005AD14u: goto label_8005AD14;
    case 0x8005AD18u: goto label_8005AD18;
    case 0x8005AD1Cu: goto label_8005AD1C;
    case 0x8005AD20u: goto label_8005AD20;
    case 0x8005AD24u: goto label_8005AD24;
    case 0x8005AD28u: goto label_8005AD28;
    case 0x8005AD2Cu: goto label_8005AD2C;
    case 0x8005AD30u: goto label_8005AD30;
    case 0x8005AD34u: goto label_8005AD34;
    case 0x8005AD38u: goto label_8005AD38;
    case 0x8005AD3Cu: goto label_8005AD3C;
    case 0x8005AD40u: goto label_8005AD40;
    case 0x8005AD44u: goto label_8005AD44;
    case 0x8005AD48u: goto label_8005AD48;
    case 0x8005AD4Cu: goto label_8005AD4C;
    case 0x8005AD50u: goto label_8005AD50;
    case 0x8005AD54u: goto label_8005AD54;
    case 0x8005AD58u: goto label_8005AD58;
    case 0x8005AD5Cu: goto label_8005AD5C;
    case 0x8005AD60u: goto label_8005AD60;
    case 0x8005AD64u: goto label_8005AD64;
    case 0x8005AD68u: goto label_8005AD68;
    case 0x8005AD6Cu: goto label_8005AD6C;
    case 0x8005AD70u: goto label_8005AD70;
    case 0x8005AD74u: goto label_8005AD74;
    case 0x8005AD78u: goto label_8005AD78;
    case 0x8005AD7Cu: goto label_8005AD7C;
    case 0x8005AD80u: goto label_8005AD80;
    case 0x8005AD84u: goto label_8005AD84;
    case 0x8005AD88u: goto label_8005AD88;
    case 0x8005AD8Cu: goto label_8005AD8C;
    case 0x8005AD90u: goto label_8005AD90;
    case 0x8005AD94u: goto label_8005AD94;
    case 0x8005AD98u: goto label_8005AD98;
    case 0x8005AD9Cu: goto label_8005AD9C;
    case 0x8005ADA0u: goto label_8005ADA0;
    case 0x8005ADA4u: goto label_8005ADA4;
    case 0x8005ADA8u: goto label_8005ADA8;
    case 0x8005ADACu: goto label_8005ADAC;
    case 0x8005ADB0u: goto label_8005ADB0;
    case 0x8005ADB4u: goto label_8005ADB4;
    case 0x8005ADB8u: goto label_8005ADB8;
    case 0x8005ADBCu: goto label_8005ADBC;
    case 0x8005ADC0u: goto label_8005ADC0;
    case 0x8005ADC4u: goto label_8005ADC4;
    case 0x8005ADC8u: goto label_8005ADC8;
    case 0x8005ADCCu: goto label_8005ADCC;
    case 0x8005ADD0u: goto label_8005ADD0;
    case 0x8005ADD4u: goto label_8005ADD4;
    case 0x8005ADD8u: goto label_8005ADD8;
    case 0x8005ADDCu: goto label_8005ADDC;
    case 0x8005ADE0u: goto label_8005ADE0;
    case 0x8005ADE4u: goto label_8005ADE4;
    case 0x8005ADE8u: goto label_8005ADE8;
    case 0x8005ADECu: goto label_8005ADEC;
    case 0x8005ADF0u: goto label_8005ADF0;
    case 0x8005ADF4u: goto label_8005ADF4;
    case 0x8005ADF8u: goto label_8005ADF8;
    case 0x8005ADFCu: goto label_8005ADFC;
    case 0x8005AE00u: goto label_8005AE00;
    case 0x8005AE04u: goto label_8005AE04;
    case 0x8005AE08u: goto label_8005AE08;
    case 0x8005AE0Cu: goto label_8005AE0C;
    case 0x8005AE10u: goto label_8005AE10;
    case 0x8005AE14u: goto label_8005AE14;
    case 0x8005AE18u: goto label_8005AE18;
    case 0x8005AE1Cu: goto label_8005AE1C;
    case 0x8005AE20u: goto label_8005AE20;
    case 0x8005AE24u: goto label_8005AE24;
    case 0x8005AE28u: goto label_8005AE28;
    case 0x8005AE2Cu: goto label_8005AE2C;
    case 0x8005AE30u: goto label_8005AE30;
    case 0x8005AE34u: goto label_8005AE34;
    case 0x8005AE38u: goto label_8005AE38;
    case 0x8005AE3Cu: goto label_8005AE3C;
    case 0x8005AE40u: goto label_8005AE40;
    case 0x8005AE44u: goto label_8005AE44;
    case 0x8005AE48u: goto label_8005AE48;
    case 0x8005AE4Cu: goto label_8005AE4C;
    case 0x8005AE50u: goto label_8005AE50;
    case 0x8005AE54u: goto label_8005AE54;
    case 0x8005AE58u: goto label_8005AE58;
    case 0x8005AE5Cu: goto label_8005AE5C;
    case 0x8005AE60u: goto label_8005AE60;
    case 0x8005AE64u: goto label_8005AE64;
    case 0x8005AE68u: goto label_8005AE68;
    case 0x8005AE6Cu: goto label_8005AE6C;
    case 0x8005AE70u: goto label_8005AE70;
    case 0x8005AE74u: goto label_8005AE74;
    case 0x8005AE78u: goto label_8005AE78;
    case 0x8005AE7Cu: goto label_8005AE7C;
    case 0x8005AE80u: goto label_8005AE80;
    case 0x8005AE84u: goto label_8005AE84;
    case 0x8005AE88u: goto label_8005AE88;
    case 0x8005AE8Cu: goto label_8005AE8C;
    case 0x8005AE90u: goto label_8005AE90;
    case 0x8005AE94u: goto label_8005AE94;
    case 0x8005AE98u: goto label_8005AE98;
    case 0x8005AE9Cu: goto label_8005AE9C;
    case 0x8005AEA0u: goto label_8005AEA0;
    case 0x8005AEA4u: goto label_8005AEA4;
    case 0x8005AEA8u: goto label_8005AEA8;
    case 0x8005AEACu: goto label_8005AEAC;
    case 0x8005AEB0u: goto label_8005AEB0;
    case 0x8005AEB4u: goto label_8005AEB4;
    case 0x8005AEB8u: goto label_8005AEB8;
    case 0x8005AEBCu: goto label_8005AEBC;
    case 0x8005AEC0u: goto label_8005AEC0;
    case 0x8005AEC4u: goto label_8005AEC4;
    case 0x8005AEC8u: goto label_8005AEC8;
    case 0x8005AECCu: goto label_8005AECC;
    case 0x8005AED0u: goto label_8005AED0;
    case 0x8005AED4u: goto label_8005AED4;
    case 0x8005AED8u: goto label_8005AED8;
    case 0x8005AEDCu: goto label_8005AEDC;
    case 0x8005AEE0u: goto label_8005AEE0;
    case 0x8005AEE4u: goto label_8005AEE4;
    case 0x8005AEE8u: goto label_8005AEE8;
    case 0x8005AEECu: goto label_8005AEEC;
    case 0x8005AEF0u: goto label_8005AEF0;
    case 0x8005AEF4u: goto label_8005AEF4;
    case 0x8005AEF8u: goto label_8005AEF8;
    case 0x8005AEFCu: goto label_8005AEFC;
    case 0x8005AF00u: goto label_8005AF00;
    case 0x8005AF04u: goto label_8005AF04;
    case 0x8005AF08u: goto label_8005AF08;
    case 0x8005AF0Cu: goto label_8005AF0C;
    case 0x8005AF10u: goto label_8005AF10;
    case 0x8005AF14u: goto label_8005AF14;
    case 0x8005AF18u: goto label_8005AF18;
    case 0x8005AF1Cu: goto label_8005AF1C;
    case 0x8005AF20u: goto label_8005AF20;
    case 0x8005AF24u: goto label_8005AF24;
    case 0x8005AF28u: goto label_8005AF28;
    case 0x8005AF2Cu: goto label_8005AF2C;
    case 0x8005AF30u: goto label_8005AF30;
    case 0x8005AF34u: goto label_8005AF34;
    case 0x8005AF38u: goto label_8005AF38;
    case 0x8005AF3Cu: goto label_8005AF3C;
    case 0x8005AF40u: goto label_8005AF40;
    case 0x8005AF44u: goto label_8005AF44;
    case 0x8005AF48u: goto label_8005AF48;
    case 0x8005AF4Cu: goto label_8005AF4C;
    case 0x8005AF50u: goto label_8005AF50;
    case 0x8005AF54u: goto label_8005AF54;
    case 0x8005AF58u: goto label_8005AF58;
    case 0x8005AF5Cu: goto label_8005AF5C;
    case 0x8005AF60u: goto label_8005AF60;
    case 0x8005AF64u: goto label_8005AF64;
    case 0x8005AF68u: goto label_8005AF68;
    case 0x8005AF6Cu: goto label_8005AF6C;
    case 0x8005AF70u: goto label_8005AF70;
    case 0x8005AF74u: goto label_8005AF74;
    case 0x8005AF78u: goto label_8005AF78;
    case 0x8005AF7Cu: goto label_8005AF7C;
    case 0x8005AF80u: goto label_8005AF80;
    case 0x8005AF84u: goto label_8005AF84;
    case 0x8005AF88u: goto label_8005AF88;
    case 0x8005AF8Cu: goto label_8005AF8C;
    case 0x8005AF90u: goto label_8005AF90;
    case 0x8005AF94u: goto label_8005AF94;
    case 0x8005AF98u: goto label_8005AF98;
    case 0x8005AF9Cu: goto label_8005AF9C;
    case 0x8005AFA0u: goto label_8005AFA0;
    case 0x8005AFA4u: goto label_8005AFA4;
    case 0x8005AFA8u: goto label_8005AFA8;
    case 0x8005AFACu: goto label_8005AFAC;
    case 0x8005AFB0u: goto label_8005AFB0;
    case 0x8005AFB4u: goto label_8005AFB4;
    case 0x8005AFB8u: goto label_8005AFB8;
    case 0x8005AFBCu: goto label_8005AFBC;
    case 0x8005AFC0u: goto label_8005AFC0;
    case 0x8005AFC4u: goto label_8005AFC4;
    case 0x8005AFC8u: goto label_8005AFC8;
    case 0x8005AFCCu: goto label_8005AFCC;
    case 0x8005AFD0u: goto label_8005AFD0;
    case 0x8005AFD4u: goto label_8005AFD4;
    case 0x8005AFD8u: goto label_8005AFD8;
    case 0x8005AFDCu: goto label_8005AFDC;
    case 0x8005AFE0u: goto label_8005AFE0;
    case 0x8005AFE4u: goto label_8005AFE4;
    case 0x8005AFE8u: goto label_8005AFE8;
    case 0x8005AFECu: goto label_8005AFEC;
    case 0x8005AFF0u: goto label_8005AFF0;
    case 0x8005AFF4u: goto label_8005AFF4;
    case 0x8005AFF8u: goto label_8005AFF8;
    case 0x8005AFFCu: goto label_8005AFFC;
    case 0x8005B000u: goto label_8005B000;
    case 0x8005B004u: goto label_8005B004;
    case 0x8005B008u: goto label_8005B008;
    case 0x8005B00Cu: goto label_8005B00C;
    case 0x8005B010u: goto label_8005B010;
    case 0x8005B014u: goto label_8005B014;
    case 0x8005B018u: goto label_8005B018;
    case 0x8005B01Cu: goto label_8005B01C;
    case 0x8005B020u: goto label_8005B020;
    case 0x8005B024u: goto label_8005B024;
    case 0x8005B028u: goto label_8005B028;
    case 0x8005B02Cu: goto label_8005B02C;
    case 0x8005B030u: goto label_8005B030;
    case 0x8005B034u: goto label_8005B034;
    case 0x8005B038u: goto label_8005B038;
    case 0x8005B03Cu: goto label_8005B03C;
    case 0x8005B040u: goto label_8005B040;
    case 0x8005B044u: goto label_8005B044;
    case 0x8005B048u: goto label_8005B048;
    case 0x8005B04Cu: goto label_8005B04C;
    case 0x8005B050u: goto label_8005B050;
    case 0x8005B054u: goto label_8005B054;
    case 0x8005B058u: goto label_8005B058;
    case 0x8005B05Cu: goto label_8005B05C;
    case 0x8005B060u: goto label_8005B060;
    case 0x8005B064u: goto label_8005B064;
    case 0x8005B068u: goto label_8005B068;
    case 0x8005B06Cu: goto label_8005B06C;
    case 0x8005B070u: goto label_8005B070;
    case 0x8005B074u: goto label_8005B074;
    case 0x8005B078u: goto label_8005B078;
    case 0x8005B07Cu: goto label_8005B07C;
    case 0x8005B080u: goto label_8005B080;
    case 0x8005B084u: goto label_8005B084;
    case 0x8005B088u: goto label_8005B088;
    case 0x8005B08Cu: goto label_8005B08C;
    case 0x8005B090u: goto label_8005B090;
    case 0x8005B094u: goto label_8005B094;
    case 0x8005B098u: goto label_8005B098;
    case 0x8005B09Cu: goto label_8005B09C;
    case 0x8005B0A0u: goto label_8005B0A0;
    case 0x8005B0A4u: goto label_8005B0A4;
    case 0x8005B0A8u: goto label_8005B0A8;
    case 0x8005B0ACu: goto label_8005B0AC;
    case 0x8005B0B0u: goto label_8005B0B0;
    case 0x8005B0B4u: goto label_8005B0B4;
    case 0x8005B0B8u: goto label_8005B0B8;
    case 0x8005B0BCu: goto label_8005B0BC;
    case 0x8005B0C0u: goto label_8005B0C0;
    case 0x8005B0C4u: goto label_8005B0C4;
    case 0x8005B0C8u: goto label_8005B0C8;
    case 0x8005B0CCu: goto label_8005B0CC;
    case 0x8005B0D0u: goto label_8005B0D0;
    case 0x8005B0D4u: goto label_8005B0D4;
    case 0x8005B0D8u: goto label_8005B0D8;
    case 0x8005B0DCu: goto label_8005B0DC;
    case 0x8005B0E0u: goto label_8005B0E0;
    case 0x8005B0E4u: goto label_8005B0E4;
    case 0x8005B0E8u: goto label_8005B0E8;
    case 0x8005B0ECu: goto label_8005B0EC;
    case 0x8005B0F0u: goto label_8005B0F0;
    case 0x8005B0F4u: goto label_8005B0F4;
    case 0x8005B0F8u: goto label_8005B0F8;
    case 0x8005B0FCu: goto label_8005B0FC;
    case 0x8005B100u: goto label_8005B100;
    case 0x8005B104u: goto label_8005B104;
    case 0x8005B108u: goto label_8005B108;
    case 0x8005B10Cu: goto label_8005B10C;
    case 0x8005B110u: goto label_8005B110;
    case 0x8005B114u: goto label_8005B114;
    case 0x8005B118u: goto label_8005B118;
    case 0x8005B11Cu: goto label_8005B11C;
    case 0x8005B120u: goto label_8005B120;
    case 0x8005B124u: goto label_8005B124;
    case 0x8005B128u: goto label_8005B128;
    case 0x8005B12Cu: goto label_8005B12C;
    case 0x8005B130u: goto label_8005B130;
    case 0x8005B134u: goto label_8005B134;
    case 0x8005B138u: goto label_8005B138;
    case 0x8005B13Cu: goto label_8005B13C;
    case 0x8005B140u: goto label_8005B140;
    case 0x8005B144u: goto label_8005B144;
    case 0x8005B148u: goto label_8005B148;
    case 0x8005B14Cu: goto label_8005B14C;
    case 0x8005B150u: goto label_8005B150;
    case 0x8005B154u: goto label_8005B154;
    case 0x8005B158u: goto label_8005B158;
    case 0x8005B15Cu: goto label_8005B15C;
    case 0x8005B160u: goto label_8005B160;
    case 0x8005B164u: goto label_8005B164;
    case 0x8005B168u: goto label_8005B168;
    case 0x8005B16Cu: goto label_8005B16C;
    case 0x8005B170u: goto label_8005B170;
    case 0x8005B174u: goto label_8005B174;
    case 0x8005B178u: goto label_8005B178;
    case 0x8005B17Cu: goto label_8005B17C;
    case 0x8005B180u: goto label_8005B180;
    case 0x8005B184u: goto label_8005B184;
    case 0x8005B188u: goto label_8005B188;
    case 0x8005B18Cu: goto label_8005B18C;
    case 0x8005B190u: goto label_8005B190;
    case 0x8005B194u: goto label_8005B194;
    case 0x8005B198u: goto label_8005B198;
    case 0x8005B19Cu: goto label_8005B19C;
    case 0x8005B1A0u: goto label_8005B1A0;
    case 0x8005B1A4u: goto label_8005B1A4;
    case 0x8005B1A8u: goto label_8005B1A8;
    case 0x8005B1ACu: goto label_8005B1AC;
    case 0x8005B1B0u: goto label_8005B1B0;
    case 0x8005B1B4u: goto label_8005B1B4;
    case 0x8005B1B8u: goto label_8005B1B8;
    case 0x8005B1BCu: goto label_8005B1BC;
    case 0x8005B1C0u: goto label_8005B1C0;
    case 0x8005B1C4u: goto label_8005B1C4;
    case 0x8005B1C8u: goto label_8005B1C8;
    case 0x8005B1CCu: goto label_8005B1CC;
    case 0x8005B1D0u: goto label_8005B1D0;
    case 0x8005B1D4u: goto label_8005B1D4;
    case 0x8005B1D8u: goto label_8005B1D8;
    case 0x8005B1DCu: goto label_8005B1DC;
    case 0x8005B1E0u: goto label_8005B1E0;
    case 0x8005B1E4u: goto label_8005B1E4;
    case 0x8005B1E8u: goto label_8005B1E8;
    case 0x8005B1ECu: goto label_8005B1EC;
    case 0x8005B1F0u: goto label_8005B1F0;
    case 0x8005B1F4u: goto label_8005B1F4;
    case 0x8005B1F8u: goto label_8005B1F8;
    case 0x8005B1FCu: goto label_8005B1FC;
    case 0x8005B200u: goto label_8005B200;
    case 0x8005B204u: goto label_8005B204;
    case 0x8005B208u: goto label_8005B208;
    case 0x8005B20Cu: goto label_8005B20C;
    case 0x8005B210u: goto label_8005B210;
    case 0x8005B214u: goto label_8005B214;
    case 0x8005B218u: goto label_8005B218;
    case 0x8005B21Cu: goto label_8005B21C;
    case 0x8005B220u: goto label_8005B220;
    case 0x8005B224u: goto label_8005B224;
    case 0x8005B228u: goto label_8005B228;
    case 0x8005B22Cu: goto label_8005B22C;
    case 0x8005B230u: goto label_8005B230;
    case 0x8005B234u: goto label_8005B234;
    case 0x8005B238u: goto label_8005B238;
    case 0x8005B23Cu: goto label_8005B23C;
    case 0x8005B240u: goto label_8005B240;
    case 0x8005B244u: goto label_8005B244;
    case 0x8005B248u: goto label_8005B248;
    case 0x8005B24Cu: goto label_8005B24C;
    case 0x8005B250u: goto label_8005B250;
    case 0x8005B254u: goto label_8005B254;
    case 0x8005B258u: goto label_8005B258;
    case 0x8005B25Cu: goto label_8005B25C;
    case 0x8005B260u: goto label_8005B260;
    case 0x8005B264u: goto label_8005B264;
    case 0x8005B268u: goto label_8005B268;
    case 0x8005B26Cu: goto label_8005B26C;
    case 0x8005B270u: goto label_8005B270;
    case 0x8005B274u: goto label_8005B274;
    case 0x8005B278u: goto label_8005B278;
    case 0x8005B27Cu: goto label_8005B27C;
    case 0x8005B280u: goto label_8005B280;
    case 0x8005B284u: goto label_8005B284;
    case 0x8005B288u: goto label_8005B288;
    case 0x8005B28Cu: goto label_8005B28C;
    case 0x8005B290u: goto label_8005B290;
    case 0x8005B294u: goto label_8005B294;
    case 0x8005B298u: goto label_8005B298;
    case 0x8005B29Cu: goto label_8005B29C;
    case 0x8005B2A0u: goto label_8005B2A0;
    case 0x8005B2A4u: goto label_8005B2A4;
    case 0x8005B2A8u: goto label_8005B2A8;
    case 0x8005B2ACu: goto label_8005B2AC;
    case 0x8005B2B0u: goto label_8005B2B0;
    case 0x8005B2B4u: goto label_8005B2B4;
    case 0x8005B2B8u: goto label_8005B2B8;
    case 0x8005B2BCu: goto label_8005B2BC;
    case 0x8005B2C0u: goto label_8005B2C0;
    case 0x8005B2C4u: goto label_8005B2C4;
    case 0x8005B2C8u: goto label_8005B2C8;
    case 0x8005B2CCu: goto label_8005B2CC;
    case 0x8005B2D0u: goto label_8005B2D0;
    case 0x8005B2D4u: goto label_8005B2D4;
    case 0x8005B2D8u: goto label_8005B2D8;
    case 0x8005B2DCu: goto label_8005B2DC;
    case 0x8005B2E0u: goto label_8005B2E0;
    case 0x8005B2E4u: goto label_8005B2E4;
    case 0x8005B2E8u: goto label_8005B2E8;
    case 0x8005B2ECu: goto label_8005B2EC;
    case 0x8005B2F0u: goto label_8005B2F0;
    case 0x8005B2F4u: goto label_8005B2F4;
    case 0x8005B2F8u: goto label_8005B2F8;
    case 0x8005B2FCu: goto label_8005B2FC;
    case 0x8005B300u: goto label_8005B300;
    case 0x8005B304u: goto label_8005B304;
    case 0x8005B308u: goto label_8005B308;
    case 0x8005B30Cu: goto label_8005B30C;
    case 0x8005B310u: goto label_8005B310;
    case 0x8005B314u: goto label_8005B314;
    case 0x8005B318u: goto label_8005B318;
    case 0x8005B31Cu: goto label_8005B31C;
    case 0x8005B320u: goto label_8005B320;
    case 0x8005B324u: goto label_8005B324;
    case 0x8005B328u: goto label_8005B328;
    case 0x8005B32Cu: goto label_8005B32C;
    case 0x8005B330u: goto label_8005B330;
    case 0x8005B334u: goto label_8005B334;
    case 0x8005B338u: goto label_8005B338;
    case 0x8005B33Cu: goto label_8005B33C;
    case 0x8005B340u: goto label_8005B340;
    case 0x8005B344u: goto label_8005B344;
    case 0x8005B348u: goto label_8005B348;
    case 0x8005B34Cu: goto label_8005B34C;
    case 0x8005B350u: goto label_8005B350;
    case 0x8005B354u: goto label_8005B354;
    case 0x8005B358u: goto label_8005B358;
    case 0x8005B35Cu: goto label_8005B35C;
    case 0x8005B360u: goto label_8005B360;
    case 0x8005B364u: goto label_8005B364;
    case 0x8005B368u: goto label_8005B368;
    case 0x8005B36Cu: goto label_8005B36C;
    case 0x8005B370u: goto label_8005B370;
    case 0x8005B374u: goto label_8005B374;
    case 0x8005B378u: goto label_8005B378;
    case 0x8005B37Cu: goto label_8005B37C;
    case 0x8005B380u: goto label_8005B380;
    case 0x8005B384u: goto label_8005B384;
    case 0x8005B388u: goto label_8005B388;
    case 0x8005B38Cu: goto label_8005B38C;
    case 0x8005B390u: goto label_8005B390;
    case 0x8005B394u: goto label_8005B394;
    case 0x8005B398u: goto label_8005B398;
    case 0x8005B39Cu: goto label_8005B39C;
    case 0x8005B3A0u: goto label_8005B3A0;
    case 0x8005B3A4u: goto label_8005B3A4;
    case 0x8005B3A8u: goto label_8005B3A8;
    case 0x8005B3ACu: goto label_8005B3AC;
    case 0x8005B3B0u: goto label_8005B3B0;
    case 0x8005B3B4u: goto label_8005B3B4;
    case 0x8005B3B8u: goto label_8005B3B8;
    case 0x8005B3BCu: goto label_8005B3BC;
    case 0x8005B3C0u: goto label_8005B3C0;
    case 0x8005B3C4u: goto label_8005B3C4;
    case 0x8005B3C8u: goto label_8005B3C8;
    case 0x8005B3CCu: goto label_8005B3CC;
    case 0x8005B3D0u: goto label_8005B3D0;
    case 0x8005B3D4u: goto label_8005B3D4;
    case 0x8005B3D8u: goto label_8005B3D8;
    case 0x8005B3DCu: goto label_8005B3DC;
    case 0x8005B3E0u: goto label_8005B3E0;
    case 0x8005B3E4u: goto label_8005B3E4;
    case 0x8005B3E8u: goto label_8005B3E8;
    case 0x8005B3ECu: goto label_8005B3EC;
    case 0x8005B3F0u: goto label_8005B3F0;
    case 0x8005B3F4u: goto label_8005B3F4;
    case 0x8005B3F8u: goto label_8005B3F8;
    case 0x8005B3FCu: goto label_8005B3FC;
    case 0x8005B400u: goto label_8005B400;
    case 0x8005B404u: goto label_8005B404;
    case 0x8005B408u: goto label_8005B408;
    case 0x8005B40Cu: goto label_8005B40C;
    case 0x8005B410u: goto label_8005B410;
    case 0x8005B414u: goto label_8005B414;
    case 0x8005B418u: goto label_8005B418;
    case 0x8005B41Cu: goto label_8005B41C;
    case 0x8005B420u: goto label_8005B420;
    case 0x8005B424u: goto label_8005B424;
    case 0x8005B428u: goto label_8005B428;
    case 0x8005B42Cu: goto label_8005B42C;
    case 0x8005B430u: goto label_8005B430;
    case 0x8005B434u: goto label_8005B434;
    case 0x8005B438u: goto label_8005B438;
    case 0x8005B43Cu: goto label_8005B43C;
    case 0x8005B440u: goto label_8005B440;
    case 0x8005B444u: goto label_8005B444;
    case 0x8005B448u: goto label_8005B448;
    case 0x8005B44Cu: goto label_8005B44C;
    case 0x8005B450u: goto label_8005B450;
    case 0x8005B454u: goto label_8005B454;
    case 0x8005B458u: goto label_8005B458;
    case 0x8005B45Cu: goto label_8005B45C;
    case 0x8005B460u: goto label_8005B460;
    case 0x8005B464u: goto label_8005B464;
    case 0x8005B468u: goto label_8005B468;
    case 0x8005B46Cu: goto label_8005B46C;
    case 0x8005B470u: goto label_8005B470;
    case 0x8005B474u: goto label_8005B474;
    case 0x8005B478u: goto label_8005B478;
    case 0x8005B47Cu: goto label_8005B47C;
    case 0x8005B480u: goto label_8005B480;
    case 0x8005B484u: goto label_8005B484;
    case 0x8005B488u: goto label_8005B488;
    case 0x8005B48Cu: goto label_8005B48C;
    case 0x8005B490u: goto label_8005B490;
    case 0x8005B494u: goto label_8005B494;
    case 0x8005B498u: goto label_8005B498;
    case 0x8005B49Cu: goto label_8005B49C;
    case 0x8005B4A0u: goto label_8005B4A0;
    case 0x8005B4A4u: goto label_8005B4A4;
    case 0x8005B4A8u: goto label_8005B4A8;
    case 0x8005B4ACu: goto label_8005B4AC;
    case 0x8005B4B0u: goto label_8005B4B0;
    case 0x8005B4B4u: goto label_8005B4B4;
    case 0x8005B4B8u: goto label_8005B4B8;
    case 0x8005B4BCu: goto label_8005B4BC;
    case 0x8005B4C0u: goto label_8005B4C0;
    case 0x8005B4C4u: goto label_8005B4C4;
    case 0x8005B4C8u: goto label_8005B4C8;
    case 0x8005B4CCu: goto label_8005B4CC;
    case 0x8005B4D0u: goto label_8005B4D0;
    case 0x8005B4D4u: goto label_8005B4D4;
    case 0x8005B4D8u: goto label_8005B4D8;
    case 0x8005B4DCu: goto label_8005B4DC;
    case 0x8005B4E0u: goto label_8005B4E0;
    case 0x8005B4E4u: goto label_8005B4E4;
    case 0x8005B4E8u: goto label_8005B4E8;
    case 0x8005B4ECu: goto label_8005B4EC;
    case 0x8005B4F0u: goto label_8005B4F0;
    case 0x8005B4F4u: goto label_8005B4F4;
    case 0x8005B4F8u: goto label_8005B4F8;
    case 0x8005B4FCu: goto label_8005B4FC;
    case 0x8005B500u: goto label_8005B500;
    case 0x8005B504u: goto label_8005B504;
    case 0x8005B508u: goto label_8005B508;
    case 0x8005B50Cu: goto label_8005B50C;
    case 0x8005B510u: goto label_8005B510;
    case 0x8005B514u: goto label_8005B514;
    case 0x8005B518u: goto label_8005B518;
    case 0x8005B51Cu: goto label_8005B51C;
    case 0x8005B520u: goto label_8005B520;
    case 0x8005B524u: goto label_8005B524;
    case 0x8005B528u: goto label_8005B528;
    case 0x8005B52Cu: goto label_8005B52C;
    case 0x8005B530u: goto label_8005B530;
    case 0x8005B534u: goto label_8005B534;
    case 0x8005B538u: goto label_8005B538;
    case 0x8005B53Cu: goto label_8005B53C;
    case 0x8005B540u: goto label_8005B540;
    case 0x8005B544u: goto label_8005B544;
    case 0x8005B548u: goto label_8005B548;
    case 0x8005B54Cu: goto label_8005B54C;
    case 0x8005B550u: goto label_8005B550;
    case 0x8005B554u: goto label_8005B554;
    case 0x8005B558u: goto label_8005B558;
    case 0x8005B55Cu: goto label_8005B55C;
    case 0x8005B560u: goto label_8005B560;
    case 0x8005B564u: goto label_8005B564;
    case 0x8005B568u: goto label_8005B568;
    case 0x8005B56Cu: goto label_8005B56C;
    case 0x8005B570u: goto label_8005B570;
    case 0x8005B574u: goto label_8005B574;
    case 0x8005B578u: goto label_8005B578;
    case 0x8005B57Cu: goto label_8005B57C;
    case 0x8005B580u: goto label_8005B580;
    case 0x8005B584u: goto label_8005B584;
    case 0x8005B588u: goto label_8005B588;
    case 0x8005B58Cu: goto label_8005B58C;
    case 0x8005B590u: goto label_8005B590;
    case 0x8005B594u: goto label_8005B594;
    case 0x8005B598u: goto label_8005B598;
    case 0x8005B59Cu: goto label_8005B59C;
    case 0x8005B5A0u: goto label_8005B5A0;
    case 0x8005B5A4u: goto label_8005B5A4;
    case 0x8005B5A8u: goto label_8005B5A8;
    case 0x8005B5ACu: goto label_8005B5AC;
    case 0x8005B5B0u: goto label_8005B5B0;
    case 0x8005B5B4u: goto label_8005B5B4;
    case 0x8005B5B8u: goto label_8005B5B8;
    case 0x8005B5BCu: goto label_8005B5BC;
    case 0x8005B5C0u: goto label_8005B5C0;
    case 0x8005B5C4u: goto label_8005B5C4;
    case 0x8005B5C8u: goto label_8005B5C8;
    case 0x8005B5CCu: goto label_8005B5CC;
    case 0x8005B5D0u: goto label_8005B5D0;
    case 0x8005B5D4u: goto label_8005B5D4;
    case 0x8005B5D8u: goto label_8005B5D8;
    case 0x8005B5DCu: goto label_8005B5DC;
    case 0x8005B5E0u: goto label_8005B5E0;
    case 0x8005B5E4u: goto label_8005B5E4;
    case 0x8005B5E8u: goto label_8005B5E8;
    case 0x8005B5ECu: goto label_8005B5EC;
    case 0x8005B5F0u: goto label_8005B5F0;
    case 0x8005B5F4u: goto label_8005B5F4;
    case 0x8005B5F8u: goto label_8005B5F8;
    case 0x8005B5FCu: goto label_8005B5FC;
    case 0x8005B600u: goto label_8005B600;
    case 0x8005B604u: goto label_8005B604;
    case 0x8005B608u: goto label_8005B608;
    case 0x8005B60Cu: goto label_8005B60C;
    case 0x8005B610u: goto label_8005B610;
    case 0x8005B614u: goto label_8005B614;
    case 0x8005B618u: goto label_8005B618;
    case 0x8005B61Cu: goto label_8005B61C;
    case 0x8005B620u: goto label_8005B620;
    case 0x8005B624u: goto label_8005B624;
    case 0x8005B628u: goto label_8005B628;
    case 0x8005B62Cu: goto label_8005B62C;
    case 0x8005B630u: goto label_8005B630;
    case 0x8005B634u: goto label_8005B634;
    case 0x8005B638u: goto label_8005B638;
    case 0x8005B63Cu: goto label_8005B63C;
    case 0x8005B640u: goto label_8005B640;
    case 0x8005B644u: goto label_8005B644;
    case 0x8005B648u: goto label_8005B648;
    case 0x8005B64Cu: goto label_8005B64C;
    case 0x8005B650u: goto label_8005B650;
    case 0x8005B654u: goto label_8005B654;
    case 0x8005B658u: goto label_8005B658;
    case 0x8005B65Cu: goto label_8005B65C;
    case 0x8005B660u: goto label_8005B660;
    case 0x8005B664u: goto label_8005B664;
    case 0x8005B668u: goto label_8005B668;
    case 0x8005B66Cu: goto label_8005B66C;
    case 0x8005B670u: goto label_8005B670;
    case 0x8005B674u: goto label_8005B674;
    case 0x8005B678u: goto label_8005B678;
    case 0x8005B67Cu: goto label_8005B67C;
    case 0x8005B680u: goto label_8005B680;
    case 0x8005B684u: goto label_8005B684;
    case 0x8005B688u: goto label_8005B688;
    case 0x8005B68Cu: goto label_8005B68C;
    case 0x8005B690u: goto label_8005B690;
    case 0x8005B694u: goto label_8005B694;
    case 0x8005B698u: goto label_8005B698;
    case 0x8005B69Cu: goto label_8005B69C;
    case 0x8005B6A0u: goto label_8005B6A0;
    case 0x8005B6A4u: goto label_8005B6A4;
    case 0x8005B6A8u: goto label_8005B6A8;
    case 0x8005B6ACu: goto label_8005B6AC;
    case 0x8005B6B0u: goto label_8005B6B0;
    case 0x8005B6B4u: goto label_8005B6B4;
    case 0x8005B6B8u: goto label_8005B6B8;
    case 0x8005B6BCu: goto label_8005B6BC;
    case 0x8005B6C0u: goto label_8005B6C0;
    case 0x8005B6C4u: goto label_8005B6C4;
    case 0x8005B6C8u: goto label_8005B6C8;
    case 0x8005B6CCu: goto label_8005B6CC;
    case 0x8005B6D0u: goto label_8005B6D0;
    case 0x8005B6D4u: goto label_8005B6D4;
    case 0x8005B6D8u: goto label_8005B6D8;
    case 0x8005B6DCu: goto label_8005B6DC;
    case 0x8005B6E0u: goto label_8005B6E0;
    case 0x8005B6E4u: goto label_8005B6E4;
    case 0x8005B6E8u: goto label_8005B6E8;
    case 0x8005B6ECu: goto label_8005B6EC;
    case 0x8005B6F0u: goto label_8005B6F0;
    case 0x8005B6F4u: goto label_8005B6F4;
    case 0x8005B6F8u: goto label_8005B6F8;
    case 0x8005B6FCu: goto label_8005B6FC;
    case 0x8005B700u: goto label_8005B700;
    case 0x8005B704u: goto label_8005B704;
    case 0x8005B708u: goto label_8005B708;
    case 0x8005B70Cu: goto label_8005B70C;
    case 0x8005B710u: goto label_8005B710;
    case 0x8005B714u: goto label_8005B714;
    case 0x8005B718u: goto label_8005B718;
    case 0x8005B71Cu: goto label_8005B71C;
    case 0x8005B720u: goto label_8005B720;
    case 0x8005B724u: goto label_8005B724;
    case 0x8005B728u: goto label_8005B728;
    case 0x8005B72Cu: goto label_8005B72C;
    case 0x8005B730u: goto label_8005B730;
    case 0x8005B734u: goto label_8005B734;
    case 0x8005B738u: goto label_8005B738;
    case 0x8005B73Cu: goto label_8005B73C;
    case 0x8005B740u: goto label_8005B740;
    case 0x8005B744u: goto label_8005B744;
    case 0x8005B748u: goto label_8005B748;
    case 0x8005B74Cu: goto label_8005B74C;
    case 0x8005B750u: goto label_8005B750;
    case 0x8005B754u: goto label_8005B754;
    case 0x8005B758u: goto label_8005B758;
    case 0x8005B75Cu: goto label_8005B75C;
    case 0x8005B760u: goto label_8005B760;
    case 0x8005B764u: goto label_8005B764;
    case 0x8005B768u: goto label_8005B768;
    case 0x8005B76Cu: goto label_8005B76C;
    case 0x8005B770u: goto label_8005B770;
    case 0x8005B774u: goto label_8005B774;
    case 0x8005B778u: goto label_8005B778;
    case 0x8005B77Cu: goto label_8005B77C;
    case 0x8005B780u: goto label_8005B780;
    case 0x8005B784u: goto label_8005B784;
    case 0x8005B788u: goto label_8005B788;
    case 0x8005B78Cu: goto label_8005B78C;
    case 0x8005B790u: goto label_8005B790;
    case 0x8005B794u: goto label_8005B794;
    case 0x8005B798u: goto label_8005B798;
    case 0x8005B79Cu: goto label_8005B79C;
    case 0x8005B7A0u: goto label_8005B7A0;
    case 0x8005B7A4u: goto label_8005B7A4;
    case 0x8005B7A8u: goto label_8005B7A8;
    case 0x8005B7ACu: goto label_8005B7AC;
    case 0x8005B7B0u: goto label_8005B7B0;
    case 0x8005B7B4u: goto label_8005B7B4;
    case 0x8005B7B8u: goto label_8005B7B8;
    case 0x8005B7BCu: goto label_8005B7BC;
    case 0x8005B7C0u: goto label_8005B7C0;
    case 0x8005B7C4u: goto label_8005B7C4;
    case 0x8005B7C8u: goto label_8005B7C8;
    case 0x8005B7CCu: goto label_8005B7CC;
    case 0x8005B7D0u: goto label_8005B7D0;
    case 0x8005B7D4u: goto label_8005B7D4;
    case 0x8005B7D8u: goto label_8005B7D8;
    case 0x8005B7DCu: goto label_8005B7DC;
    case 0x8005B7E0u: goto label_8005B7E0;
    case 0x8005B7E4u: goto label_8005B7E4;
    case 0x8005B7E8u: goto label_8005B7E8;
    case 0x8005B7ECu: goto label_8005B7EC;
    case 0x8005B7F0u: goto label_8005B7F0;
    case 0x8005B7F4u: goto label_8005B7F4;
    case 0x8005B7F8u: goto label_8005B7F8;
    case 0x8005B7FCu: goto label_8005B7FC;
    case 0x8005B800u: goto label_8005B800;
    case 0x8005B804u: goto label_8005B804;
    case 0x8005B808u: goto label_8005B808;
    case 0x8005B80Cu: goto label_8005B80C;
    case 0x8005B810u: goto label_8005B810;
    case 0x8005B814u: goto label_8005B814;
    case 0x8005B818u: goto label_8005B818;
    case 0x8005B81Cu: goto label_8005B81C;
    case 0x8005B820u: goto label_8005B820;
    case 0x8005B824u: goto label_8005B824;
    case 0x8005B828u: goto label_8005B828;
    case 0x8005B82Cu: goto label_8005B82C;
    case 0x8005B830u: goto label_8005B830;
    case 0x8005B834u: goto label_8005B834;
    case 0x8005B838u: goto label_8005B838;
    case 0x8005B83Cu: goto label_8005B83C;
    case 0x8005B840u: goto label_8005B840;
    case 0x8005B844u: goto label_8005B844;
    case 0x8005B848u: goto label_8005B848;
    case 0x8005B84Cu: goto label_8005B84C;
    case 0x8005B850u: goto label_8005B850;
    case 0x8005B854u: goto label_8005B854;
    case 0x8005B858u: goto label_8005B858;
    case 0x8005B85Cu: goto label_8005B85C;
    case 0x8005B860u: goto label_8005B860;
    case 0x8005B864u: goto label_8005B864;
    case 0x8005B868u: goto label_8005B868;
    case 0x8005B86Cu: goto label_8005B86C;
    case 0x8005B870u: goto label_8005B870;
    case 0x8005B874u: goto label_8005B874;
    case 0x8005B878u: goto label_8005B878;
    case 0x8005B87Cu: goto label_8005B87C;
    case 0x8005B880u: goto label_8005B880;
    case 0x8005B884u: goto label_8005B884;
    case 0x8005B888u: goto label_8005B888;
    case 0x8005B88Cu: goto label_8005B88C;
    case 0x8005B890u: goto label_8005B890;
    case 0x8005B894u: goto label_8005B894;
    case 0x8005B898u: goto label_8005B898;
    case 0x8005B89Cu: goto label_8005B89C;
    case 0x8005B8A0u: goto label_8005B8A0;
    case 0x8005B8A4u: goto label_8005B8A4;
    case 0x8005B8A8u: goto label_8005B8A8;
    case 0x8005B8ACu: goto label_8005B8AC;
    case 0x8005B8B0u: goto label_8005B8B0;
    case 0x8005B8B4u: goto label_8005B8B4;
    case 0x8005B8B8u: goto label_8005B8B8;
    case 0x8005B8BCu: goto label_8005B8BC;
    case 0x8005B8C0u: goto label_8005B8C0;
    case 0x8005B8C4u: goto label_8005B8C4;
    case 0x8005B8C8u: goto label_8005B8C8;
    case 0x8005B8CCu: goto label_8005B8CC;
    case 0x8005B8D0u: goto label_8005B8D0;
    case 0x8005B8D4u: goto label_8005B8D4;
    case 0x8005B8D8u: goto label_8005B8D8;
    case 0x8005B8DCu: goto label_8005B8DC;
    case 0x8005B8E0u: goto label_8005B8E0;
    case 0x8005B8E4u: goto label_8005B8E4;
    case 0x8005B8E8u: goto label_8005B8E8;
    case 0x8005B8ECu: goto label_8005B8EC;
    case 0x8005B8F0u: goto label_8005B8F0;
    case 0x8005B8F4u: goto label_8005B8F4;
    case 0x8005B8F8u: goto label_8005B8F8;
    case 0x8005B8FCu: goto label_8005B8FC;
    case 0x8005B900u: goto label_8005B900;
    case 0x8005B904u: goto label_8005B904;
    case 0x8005B908u: goto label_8005B908;
    case 0x8005B90Cu: goto label_8005B90C;
    case 0x8005B910u: goto label_8005B910;
    case 0x8005B914u: goto label_8005B914;
    case 0x8005B918u: goto label_8005B918;
    case 0x8005B91Cu: goto label_8005B91C;
    case 0x8005B920u: goto label_8005B920;
    case 0x8005B924u: goto label_8005B924;
    case 0x8005B928u: goto label_8005B928;
    case 0x8005B92Cu: goto label_8005B92C;
    case 0x8005B930u: goto label_8005B930;
    case 0x8005B934u: goto label_8005B934;
    case 0x8005B938u: goto label_8005B938;
    case 0x8005B93Cu: goto label_8005B93C;
    case 0x8005B940u: goto label_8005B940;
    case 0x8005B944u: goto label_8005B944;
    case 0x8005B948u: goto label_8005B948;
    case 0x8005B94Cu: goto label_8005B94C;
    case 0x8005B950u: goto label_8005B950;
    case 0x8005B954u: goto label_8005B954;
    case 0x8005B958u: goto label_8005B958;
    case 0x8005B95Cu: goto label_8005B95C;
    case 0x8005B960u: goto label_8005B960;
    case 0x8005B964u: goto label_8005B964;
    case 0x8005B968u: goto label_8005B968;
    case 0x8005B96Cu: goto label_8005B96C;
    case 0x8005B970u: goto label_8005B970;
    case 0x8005B974u: goto label_8005B974;
    case 0x8005B978u: goto label_8005B978;
    case 0x8005B97Cu: goto label_8005B97C;
    case 0x8005B980u: goto label_8005B980;
    case 0x8005B984u: goto label_8005B984;
    case 0x8005B988u: goto label_8005B988;
    case 0x8005B98Cu: goto label_8005B98C;
    case 0x8005B990u: goto label_8005B990;
    case 0x8005B994u: goto label_8005B994;
    case 0x8005B998u: goto label_8005B998;
    case 0x8005B99Cu: goto label_8005B99C;
    case 0x8005B9A0u: goto label_8005B9A0;
    case 0x8005B9A4u: goto label_8005B9A4;
    case 0x8005B9A8u: goto label_8005B9A8;
    case 0x8005B9ACu: goto label_8005B9AC;
    case 0x8005B9B0u: goto label_8005B9B0;
    case 0x8005B9B4u: goto label_8005B9B4;
    case 0x8005B9B8u: goto label_8005B9B8;
    case 0x8005B9BCu: goto label_8005B9BC;
    case 0x8005B9C0u: goto label_8005B9C0;
    case 0x8005B9C4u: goto label_8005B9C4;
    case 0x8005B9C8u: goto label_8005B9C8;
    case 0x8005B9CCu: goto label_8005B9CC;
    case 0x8005B9D0u: goto label_8005B9D0;
    case 0x8005B9D4u: goto label_8005B9D4;
    case 0x8005B9D8u: goto label_8005B9D8;
    case 0x8005B9DCu: goto label_8005B9DC;
    case 0x8005B9E0u: goto label_8005B9E0;
    case 0x8005B9E4u: goto label_8005B9E4;
    case 0x8005B9E8u: goto label_8005B9E8;
    case 0x8005B9ECu: goto label_8005B9EC;
    case 0x8005B9F0u: goto label_8005B9F0;
    case 0x8005B9F4u: goto label_8005B9F4;
    case 0x8005B9F8u: goto label_8005B9F8;
    case 0x8005B9FCu: goto label_8005B9FC;
    case 0x8005BA00u: goto label_8005BA00;
    case 0x8005BA04u: goto label_8005BA04;
    case 0x8005BA08u: goto label_8005BA08;
    case 0x8005BA0Cu: goto label_8005BA0C;
    case 0x8005BA10u: goto label_8005BA10;
    case 0x8005BA14u: goto label_8005BA14;
    case 0x8005BA18u: goto label_8005BA18;
    case 0x8005BA1Cu: goto label_8005BA1C;
    case 0x8005BA20u: goto label_8005BA20;
    case 0x8005BA24u: goto label_8005BA24;
    case 0x8005BA28u: goto label_8005BA28;
    case 0x8005BA2Cu: goto label_8005BA2C;
    case 0x8005BA30u: goto label_8005BA30;
    case 0x8005BA34u: goto label_8005BA34;
    case 0x8005BA38u: goto label_8005BA38;
    case 0x8005BA3Cu: goto label_8005BA3C;
    case 0x8005BA40u: goto label_8005BA40;
    case 0x8005BA44u: goto label_8005BA44;
    case 0x8005BA48u: goto label_8005BA48;
    case 0x8005BA4Cu: goto label_8005BA4C;
    case 0x8005BA50u: goto label_8005BA50;
    case 0x8005BA54u: goto label_8005BA54;
    case 0x8005BA58u: goto label_8005BA58;
    case 0x8005BA5Cu: goto label_8005BA5C;
    case 0x8005BA60u: goto label_8005BA60;
    case 0x8005BA64u: goto label_8005BA64;
    case 0x8005BA68u: goto label_8005BA68;
    case 0x8005BA6Cu: goto label_8005BA6C;
    case 0x8005BA70u: goto label_8005BA70;
    case 0x8005BA74u: goto label_8005BA74;
    case 0x8005BA78u: goto label_8005BA78;
    case 0x8005BA7Cu: goto label_8005BA7C;
    case 0x8005BA80u: goto label_8005BA80;
    case 0x8005BA84u: goto label_8005BA84;
    case 0x8005BA88u: goto label_8005BA88;
    case 0x8005BA8Cu: goto label_8005BA8C;
    case 0x8005BA90u: goto label_8005BA90;
    case 0x8005BA94u: goto label_8005BA94;
    case 0x8005BA98u: goto label_8005BA98;
    case 0x8005BA9Cu: goto label_8005BA9C;
    case 0x8005BAA0u: goto label_8005BAA0;
    case 0x8005BAA4u: goto label_8005BAA4;
    case 0x8005BAA8u: goto label_8005BAA8;
    case 0x8005BAACu: goto label_8005BAAC;
    case 0x8005BAB0u: goto label_8005BAB0;
    case 0x8005BAB4u: goto label_8005BAB4;
    case 0x8005BAB8u: goto label_8005BAB8;
    case 0x8005BABCu: goto label_8005BABC;
    case 0x8005BAC0u: goto label_8005BAC0;
    case 0x8005BAC4u: goto label_8005BAC4;
    case 0x8005BAC8u: goto label_8005BAC8;
    case 0x8005BACCu: goto label_8005BACC;
    case 0x8005BAD0u: goto label_8005BAD0;
    case 0x8005BAD4u: goto label_8005BAD4;
    case 0x8005BAD8u: goto label_8005BAD8;
    case 0x8005BADCu: goto label_8005BADC;
    case 0x8005BAE0u: goto label_8005BAE0;
    case 0x8005BAE4u: goto label_8005BAE4;
    case 0x8005BAE8u: goto label_8005BAE8;
    case 0x8005BAECu: goto label_8005BAEC;
    case 0x8005BAF0u: goto label_8005BAF0;
    case 0x8005BAF4u: goto label_8005BAF4;
    case 0x8005BAF8u: goto label_8005BAF8;
    case 0x8005BAFCu: goto label_8005BAFC;
    case 0x8005BB00u: goto label_8005BB00;
    case 0x8005BB04u: goto label_8005BB04;
    case 0x8005BB08u: goto label_8005BB08;
    case 0x8005BB0Cu: goto label_8005BB0C;
    case 0x8005BB10u: goto label_8005BB10;
    case 0x8005BB14u: goto label_8005BB14;
    case 0x8005BB18u: goto label_8005BB18;
    case 0x8005BB1Cu: goto label_8005BB1C;
    case 0x8005BB20u: goto label_8005BB20;
    case 0x8005BB24u: goto label_8005BB24;
    case 0x8005BB28u: goto label_8005BB28;
    case 0x8005BB2Cu: goto label_8005BB2C;
    case 0x8005BB30u: goto label_8005BB30;
    case 0x8005BB34u: goto label_8005BB34;
    case 0x8005BB38u: goto label_8005BB38;
    case 0x8005BB3Cu: goto label_8005BB3C;
    case 0x8005BB40u: goto label_8005BB40;
    case 0x8005BB44u: goto label_8005BB44;
    case 0x8005BB48u: goto label_8005BB48;
    case 0x8005BB4Cu: goto label_8005BB4C;
    case 0x8005BB50u: goto label_8005BB50;
    case 0x8005BB54u: goto label_8005BB54;
    case 0x8005BB58u: goto label_8005BB58;
    case 0x8005BB5Cu: goto label_8005BB5C;
    case 0x8005BB60u: goto label_8005BB60;
    case 0x8005BB64u: goto label_8005BB64;
    case 0x8005BB68u: goto label_8005BB68;
    case 0x8005BB6Cu: goto label_8005BB6C;
    case 0x8005BB70u: goto label_8005BB70;
    case 0x8005BB74u: goto label_8005BB74;
    case 0x8005BB78u: goto label_8005BB78;
    case 0x8005BB7Cu: goto label_8005BB7C;
    case 0x8005BB80u: goto label_8005BB80;
    case 0x8005BB84u: goto label_8005BB84;
    case 0x8005BB88u: goto label_8005BB88;
    case 0x8005BB8Cu: goto label_8005BB8C;
    case 0x8005BB90u: goto label_8005BB90;
    case 0x8005BB94u: goto label_8005BB94;
    case 0x8005BB98u: goto label_8005BB98;
    case 0x8005BB9Cu: goto label_8005BB9C;
    case 0x8005BBA0u: goto label_8005BBA0;
    case 0x8005BBA4u: goto label_8005BBA4;
    case 0x8005BBA8u: goto label_8005BBA8;
    case 0x8005BBACu: goto label_8005BBAC;
    case 0x8005BBB0u: goto label_8005BBB0;
    case 0x8005BBB4u: goto label_8005BBB4;
    case 0x8005BBB8u: goto label_8005BBB8;
    case 0x8005BBBCu: goto label_8005BBBC;
    case 0x8005BBC0u: goto label_8005BBC0;
    case 0x8005BBC4u: goto label_8005BBC4;
    case 0x8005BBC8u: goto label_8005BBC8;
    case 0x8005BBCCu: goto label_8005BBCC;
    case 0x8005BBD0u: goto label_8005BBD0;
    case 0x8005BBD4u: goto label_8005BBD4;
    case 0x8005BBD8u: goto label_8005BBD8;
    case 0x8005BBDCu: goto label_8005BBDC;
    case 0x8005BBE0u: goto label_8005BBE0;
    case 0x8005BBE4u: goto label_8005BBE4;
    case 0x8005BBE8u: goto label_8005BBE8;
    case 0x8005BBECu: goto label_8005BBEC;
    case 0x8005BBF0u: goto label_8005BBF0;
    case 0x8005BBF4u: goto label_8005BBF4;
    case 0x8005BBF8u: goto label_8005BBF8;
    case 0x8005BBFCu: goto label_8005BBFC;
    case 0x8005BC00u: goto label_8005BC00;
    case 0x8005BC04u: goto label_8005BC04;
    case 0x8005BC08u: goto label_8005BC08;
    case 0x8005BC0Cu: goto label_8005BC0C;
    case 0x8005BC10u: goto label_8005BC10;
    case 0x8005BC14u: goto label_8005BC14;
    case 0x8005BC18u: goto label_8005BC18;
    case 0x8005BC1Cu: goto label_8005BC1C;
    case 0x8005BC20u: goto label_8005BC20;
    case 0x8005BC24u: goto label_8005BC24;
    case 0x8005BC28u: goto label_8005BC28;
    case 0x8005BC2Cu: goto label_8005BC2C;
    case 0x8005BC30u: goto label_8005BC30;
    case 0x8005BC34u: goto label_8005BC34;
    case 0x8005BC38u: goto label_8005BC38;
    case 0x8005BC3Cu: goto label_8005BC3C;
    case 0x8005BC40u: goto label_8005BC40;
    case 0x8005BC44u: goto label_8005BC44;
    case 0x8005BC48u: goto label_8005BC48;
    case 0x8005BC4Cu: goto label_8005BC4C;
    case 0x8005BC50u: goto label_8005BC50;
    case 0x8005BC54u: goto label_8005BC54;
    case 0x8005BC58u: goto label_8005BC58;
    case 0x8005BC5Cu: goto label_8005BC5C;
    case 0x8005BC60u: goto label_8005BC60;
    case 0x8005BC64u: goto label_8005BC64;
    case 0x8005BC68u: goto label_8005BC68;
    case 0x8005BC6Cu: goto label_8005BC6C;
    case 0x8005BC70u: goto label_8005BC70;
    case 0x8005BC74u: goto label_8005BC74;
    case 0x8005BC78u: goto label_8005BC78;
    case 0x8005BC7Cu: goto label_8005BC7C;
    case 0x8005BC80u: goto label_8005BC80;
    case 0x8005BC84u: goto label_8005BC84;
    case 0x8005BC88u: goto label_8005BC88;
    case 0x8005BC8Cu: goto label_8005BC8C;
    case 0x8005BC90u: goto label_8005BC90;
    case 0x8005BC94u: goto label_8005BC94;
    case 0x8005BC98u: goto label_8005BC98;
    case 0x8005BC9Cu: goto label_8005BC9C;
    case 0x8005BCA0u: goto label_8005BCA0;
    case 0x8005BCA4u: goto label_8005BCA4;
    case 0x8005BCA8u: goto label_8005BCA8;
    case 0x8005BCACu: goto label_8005BCAC;
    case 0x8005BCB0u: goto label_8005BCB0;
    case 0x8005BCB4u: goto label_8005BCB4;
    case 0x8005BCB8u: goto label_8005BCB8;
    case 0x8005BCBCu: goto label_8005BCBC;
    case 0x8005BCC0u: goto label_8005BCC0;
    case 0x8005BCC4u: goto label_8005BCC4;
    case 0x8005BCC8u: goto label_8005BCC8;
    case 0x8005BCCCu: goto label_8005BCCC;
    case 0x8005BCD0u: goto label_8005BCD0;
    case 0x8005BCD4u: goto label_8005BCD4;
    case 0x8005BCD8u: goto label_8005BCD8;
    case 0x8005BCDCu: goto label_8005BCDC;
    case 0x8005BCE0u: goto label_8005BCE0;
    case 0x8005BCE4u: goto label_8005BCE4;
    case 0x8005BCE8u: goto label_8005BCE8;
    case 0x8005BCECu: goto label_8005BCEC;
    case 0x8005BCF0u: goto label_8005BCF0;
    case 0x8005BCF4u: goto label_8005BCF4;
    case 0x8005BCF8u: goto label_8005BCF8;
    case 0x8005BCFCu: goto label_8005BCFC;
    case 0x8005BD00u: goto label_8005BD00;
    case 0x8005BD04u: goto label_8005BD04;
    case 0x8005BD08u: goto label_8005BD08;
    case 0x8005BD0Cu: goto label_8005BD0C;
    case 0x8005BD10u: goto label_8005BD10;
    case 0x8005BD14u: goto label_8005BD14;
    case 0x8005BD18u: goto label_8005BD18;
    case 0x8005BD1Cu: goto label_8005BD1C;
    case 0x8005BD20u: goto label_8005BD20;
    case 0x8005BD24u: goto label_8005BD24;
    case 0x8005BD28u: goto label_8005BD28;
    case 0x8005BD2Cu: goto label_8005BD2C;
    case 0x8005BD30u: goto label_8005BD30;
    case 0x8005BD34u: goto label_8005BD34;
    case 0x8005BD38u: goto label_8005BD38;
    case 0x8005BD3Cu: goto label_8005BD3C;
    case 0x8005BD40u: goto label_8005BD40;
    case 0x8005BD44u: goto label_8005BD44;
    case 0x8005BD48u: goto label_8005BD48;
    case 0x8005BD4Cu: goto label_8005BD4C;
    case 0x8005BD50u: goto label_8005BD50;
    case 0x8005BD54u: goto label_8005BD54;
    case 0x8005BD58u: goto label_8005BD58;
    case 0x8005BD5Cu: goto label_8005BD5C;
    case 0x8005BD60u: goto label_8005BD60;
    case 0x8005BD64u: goto label_8005BD64;
    case 0x8005BD68u: goto label_8005BD68;
    case 0x8005BD6Cu: goto label_8005BD6C;
    case 0x8005BD70u: goto label_8005BD70;
    case 0x8005BD74u: goto label_8005BD74;
    case 0x8005BD78u: goto label_8005BD78;
    case 0x8005BD7Cu: goto label_8005BD7C;
    case 0x8005BD80u: goto label_8005BD80;
    case 0x8005BD84u: goto label_8005BD84;
    case 0x8005BD88u: goto label_8005BD88;
    case 0x8005BD8Cu: goto label_8005BD8C;
    case 0x8005BD90u: goto label_8005BD90;
    case 0x8005BD94u: goto label_8005BD94;
    case 0x8005BD98u: goto label_8005BD98;
    case 0x8005BD9Cu: goto label_8005BD9C;
    case 0x8005BDA0u: goto label_8005BDA0;
    case 0x8005BDA4u: goto label_8005BDA4;
    case 0x8005BDA8u: goto label_8005BDA8;
    case 0x8005BDACu: goto label_8005BDAC;
    case 0x8005BDB0u: goto label_8005BDB0;
    case 0x8005BDB4u: goto label_8005BDB4;
    case 0x8005BDB8u: goto label_8005BDB8;
    case 0x8005BDBCu: goto label_8005BDBC;
    case 0x8005BDC0u: goto label_8005BDC0;
    case 0x8005BDC4u: goto label_8005BDC4;
    case 0x8005BDC8u: goto label_8005BDC8;
    case 0x8005BDCCu: goto label_8005BDCC;
    case 0x8005BDD0u: goto label_8005BDD0;
    case 0x8005BDD4u: goto label_8005BDD4;
    case 0x8005BDD8u: goto label_8005BDD8;
    case 0x8005BDDCu: goto label_8005BDDC;
    case 0x8005BDE0u: goto label_8005BDE0;
    case 0x8005BDE4u: goto label_8005BDE4;
    case 0x8005BDE8u: goto label_8005BDE8;
    case 0x8005BDECu: goto label_8005BDEC;
    case 0x8005BDF0u: goto label_8005BDF0;
    case 0x8005BDF4u: goto label_8005BDF4;
    case 0x8005BDF8u: goto label_8005BDF8;
    case 0x8005BDFCu: goto label_8005BDFC;
    case 0x8005BE00u: goto label_8005BE00;
    case 0x8005BE04u: goto label_8005BE04;
    case 0x8005BE08u: goto label_8005BE08;
    case 0x8005BE0Cu: goto label_8005BE0C;
    case 0x8005BE10u: goto label_8005BE10;
    case 0x8005BE14u: goto label_8005BE14;
    case 0x8005BE18u: goto label_8005BE18;
    case 0x8005BE1Cu: goto label_8005BE1C;
    case 0x8005BE20u: goto label_8005BE20;
    case 0x8005BE24u: goto label_8005BE24;
    case 0x8005BE28u: goto label_8005BE28;
    case 0x8005BE2Cu: goto label_8005BE2C;
    case 0x8005BE30u: goto label_8005BE30;
    case 0x8005BE34u: goto label_8005BE34;
    case 0x8005BE38u: goto label_8005BE38;
    case 0x8005BE3Cu: goto label_8005BE3C;
    case 0x8005BE40u: goto label_8005BE40;
    case 0x8005BE44u: goto label_8005BE44;
    case 0x8005BE48u: goto label_8005BE48;
    case 0x8005BE4Cu: goto label_8005BE4C;
    case 0x8005BE50u: goto label_8005BE50;
    case 0x8005BE54u: goto label_8005BE54;
    case 0x8005BE58u: goto label_8005BE58;
    case 0x8005BE5Cu: goto label_8005BE5C;
    case 0x8005BE60u: goto label_8005BE60;
    case 0x8005BE64u: goto label_8005BE64;
    case 0x8005BE68u: goto label_8005BE68;
    case 0x8005BE6Cu: goto label_8005BE6C;
    case 0x8005BE70u: goto label_8005BE70;
    case 0x8005BE74u: goto label_8005BE74;
    case 0x8005BE78u: goto label_8005BE78;
    case 0x8005BE7Cu: goto label_8005BE7C;
    case 0x8005BE80u: goto label_8005BE80;
    case 0x8005BE84u: goto label_8005BE84;
    case 0x8005BE88u: goto label_8005BE88;
    case 0x8005BE8Cu: goto label_8005BE8C;
    case 0x8005BE90u: goto label_8005BE90;
    case 0x8005BE94u: goto label_8005BE94;
    case 0x8005BE98u: goto label_8005BE98;
    case 0x8005BE9Cu: goto label_8005BE9C;
    case 0x8005BEA0u: goto label_8005BEA0;
    case 0x8005BEA4u: goto label_8005BEA4;
    case 0x8005BEA8u: goto label_8005BEA8;
    case 0x8005BEACu: goto label_8005BEAC;
    case 0x8005BEB0u: goto label_8005BEB0;
    case 0x8005BEB4u: goto label_8005BEB4;
    case 0x8005BEB8u: goto label_8005BEB8;
    case 0x8005BEBCu: goto label_8005BEBC;
    case 0x8005BEC0u: goto label_8005BEC0;
    case 0x8005BEC4u: goto label_8005BEC4;
    case 0x8005BEC8u: goto label_8005BEC8;
    case 0x8005BECCu: goto label_8005BECC;
    case 0x8005BED0u: goto label_8005BED0;
    case 0x8005BED4u: goto label_8005BED4;
    case 0x8005BED8u: goto label_8005BED8;
    case 0x8005BEDCu: goto label_8005BEDC;
    case 0x8005BEE0u: goto label_8005BEE0;
    case 0x8005BEE4u: goto label_8005BEE4;
    case 0x8005BEE8u: goto label_8005BEE8;
    case 0x8005BEECu: goto label_8005BEEC;
    case 0x8005BEF0u: goto label_8005BEF0;
    case 0x8005BEF4u: goto label_8005BEF4;
    case 0x8005BEF8u: goto label_8005BEF8;
    case 0x8005BEFCu: goto label_8005BEFC;
    case 0x8005BF00u: goto label_8005BF00;
    case 0x8005BF04u: goto label_8005BF04;
    case 0x8005BF08u: goto label_8005BF08;
    case 0x8005BF0Cu: goto label_8005BF0C;
    case 0x8005BF10u: goto label_8005BF10;
    case 0x8005BF14u: goto label_8005BF14;
    case 0x8005BF18u: goto label_8005BF18;
    case 0x8005BF1Cu: goto label_8005BF1C;
    case 0x8005BF20u: goto label_8005BF20;
    case 0x8005BF24u: goto label_8005BF24;
    case 0x8005BF28u: goto label_8005BF28;
    case 0x8005BF2Cu: goto label_8005BF2C;
    case 0x8005BF30u: goto label_8005BF30;
    case 0x8005BF34u: goto label_8005BF34;
    case 0x8005BF38u: goto label_8005BF38;
    case 0x8005BF3Cu: goto label_8005BF3C;
    case 0x8005BF40u: goto label_8005BF40;
    case 0x8005BF44u: goto label_8005BF44;
    case 0x8005BF48u: goto label_8005BF48;
    case 0x8005BF4Cu: goto label_8005BF4C;
    case 0x8005BF50u: goto label_8005BF50;
    case 0x8005BF54u: goto label_8005BF54;
    case 0x8005BF58u: goto label_8005BF58;
    case 0x8005BF5Cu: goto label_8005BF5C;
    case 0x8005BF60u: goto label_8005BF60;
    case 0x8005BF64u: goto label_8005BF64;
    case 0x8005BF68u: goto label_8005BF68;
    case 0x8005BF6Cu: goto label_8005BF6C;
    case 0x8005BF70u: goto label_8005BF70;
    case 0x8005BF74u: goto label_8005BF74;
    case 0x8005BF78u: goto label_8005BF78;
    case 0x8005BF7Cu: goto label_8005BF7C;
    case 0x8005BF80u: goto label_8005BF80;
    case 0x8005BF84u: goto label_8005BF84;
    case 0x8005BF88u: goto label_8005BF88;
    case 0x8005BF8Cu: goto label_8005BF8C;
    case 0x8005BF90u: goto label_8005BF90;
    case 0x8005BF94u: goto label_8005BF94;
    case 0x8005BF98u: goto label_8005BF98;
    case 0x8005BF9Cu: goto label_8005BF9C;
    case 0x8005BFA0u: goto label_8005BFA0;
    case 0x8005BFA4u: goto label_8005BFA4;
    case 0x8005BFA8u: goto label_8005BFA8;
    case 0x8005BFACu: goto label_8005BFAC;
    case 0x8005BFB0u: goto label_8005BFB0;
    case 0x8005BFB4u: goto label_8005BFB4;
    case 0x8005BFB8u: goto label_8005BFB8;
    case 0x8005BFBCu: goto label_8005BFBC;
    case 0x8005BFC0u: goto label_8005BFC0;
    case 0x8005BFC4u: goto label_8005BFC4;
    case 0x8005BFC8u: goto label_8005BFC8;
    case 0x8005BFCCu: goto label_8005BFCC;
    case 0x8005BFD0u: goto label_8005BFD0;
    case 0x8005BFD4u: goto label_8005BFD4;
    case 0x8005BFD8u: goto label_8005BFD8;
    case 0x8005BFDCu: goto label_8005BFDC;
    case 0x8005BFE0u: goto label_8005BFE0;
    case 0x8005BFE4u: goto label_8005BFE4;
    case 0x8005BFE8u: goto label_8005BFE8;
    case 0x8005BFECu: goto label_8005BFEC;
    case 0x8005BFF0u: goto label_8005BFF0;
    case 0x8005BFF4u: goto label_8005BFF4;
    case 0x8005BFF8u: goto label_8005BFF8;
    case 0x8005BFFCu: goto label_8005BFFC;
    case 0x8005C000u: goto label_8005C000;
    case 0x8005C004u: goto label_8005C004;
    case 0x8005C008u: goto label_8005C008;
    case 0x8005C00Cu: goto label_8005C00C;
    case 0x8005C010u: goto label_8005C010;
    case 0x8005C014u: goto label_8005C014;
    case 0x8005C018u: goto label_8005C018;
    case 0x8005C01Cu: goto label_8005C01C;
    case 0x8005C020u: goto label_8005C020;
    case 0x8005C024u: goto label_8005C024;
    case 0x8005C028u: goto label_8005C028;
    case 0x8005C02Cu: goto label_8005C02C;
    case 0x8005C030u: goto label_8005C030;
    case 0x8005C034u: goto label_8005C034;
    case 0x8005C038u: goto label_8005C038;
    case 0x8005C03Cu: goto label_8005C03C;
    case 0x8005C040u: goto label_8005C040;
    case 0x8005C044u: goto label_8005C044;
    case 0x8005C048u: goto label_8005C048;
    case 0x8005C04Cu: goto label_8005C04C;
    case 0x8005C050u: goto label_8005C050;
    case 0x8005C054u: goto label_8005C054;
    case 0x8005C058u: goto label_8005C058;
    case 0x8005C05Cu: goto label_8005C05C;
    case 0x8005C060u: goto label_8005C060;
    case 0x8005C064u: goto label_8005C064;
    case 0x8005C068u: goto label_8005C068;
    case 0x8005C06Cu: goto label_8005C06C;
    case 0x8005C070u: goto label_8005C070;
    case 0x8005C074u: goto label_8005C074;
    case 0x8005C078u: goto label_8005C078;
    case 0x8005C07Cu: goto label_8005C07C;
    case 0x8005C080u: goto label_8005C080;
    case 0x8005C084u: goto label_8005C084;
    case 0x8005C088u: goto label_8005C088;
    case 0x8005C08Cu: goto label_8005C08C;
    case 0x8005C090u: goto label_8005C090;
    case 0x8005C094u: goto label_8005C094;
    case 0x8005C098u: goto label_8005C098;
    case 0x8005C09Cu: goto label_8005C09C;
    case 0x8005C0A0u: goto label_8005C0A0;
    case 0x8005C0A4u: goto label_8005C0A4;
    case 0x8005C0A8u: goto label_8005C0A8;
    case 0x8005C0ACu: goto label_8005C0AC;
    case 0x8005C0B0u: goto label_8005C0B0;
    case 0x8005C0B4u: goto label_8005C0B4;
    case 0x8005C0B8u: goto label_8005C0B8;
    case 0x8005C0BCu: goto label_8005C0BC;
    case 0x8005C0C0u: goto label_8005C0C0;
    case 0x8005C0C4u: goto label_8005C0C4;
    case 0x8005C0C8u: goto label_8005C0C8;
    case 0x8005C0CCu: goto label_8005C0CC;
    case 0x8005C0D0u: goto label_8005C0D0;
    case 0x8005C0D4u: goto label_8005C0D4;
    case 0x8005C0D8u: goto label_8005C0D8;
    case 0x8005C0DCu: goto label_8005C0DC;
    case 0x8005C0E0u: goto label_8005C0E0;
    case 0x8005C0E4u: goto label_8005C0E4;
    case 0x8005C0E8u: goto label_8005C0E8;
    case 0x8005C0ECu: goto label_8005C0EC;
    case 0x8005C0F0u: goto label_8005C0F0;
    case 0x8005C0F4u: goto label_8005C0F4;
    case 0x8005C0F8u: goto label_8005C0F8;
    case 0x8005C0FCu: goto label_8005C0FC;
    case 0x8005C100u: goto label_8005C100;
    case 0x8005C104u: goto label_8005C104;
    case 0x8005C108u: goto label_8005C108;
    case 0x8005C10Cu: goto label_8005C10C;
    case 0x8005C110u: goto label_8005C110;
    case 0x8005C114u: goto label_8005C114;
    case 0x8005C118u: goto label_8005C118;
    case 0x8005C11Cu: goto label_8005C11C;
    case 0x8005C120u: goto label_8005C120;
    case 0x8005C124u: goto label_8005C124;
    case 0x8005C128u: goto label_8005C128;
    case 0x8005C12Cu: goto label_8005C12C;
    case 0x8005C130u: goto label_8005C130;
    case 0x8005C134u: goto label_8005C134;
    case 0x8005C138u: goto label_8005C138;
    case 0x8005C13Cu: goto label_8005C13C;
    case 0x8005C140u: goto label_8005C140;
    case 0x8005C144u: goto label_8005C144;
    case 0x8005C148u: goto label_8005C148;
    case 0x8005C14Cu: goto label_8005C14C;
    case 0x8005C150u: goto label_8005C150;
    case 0x8005C154u: goto label_8005C154;
    case 0x8005C158u: goto label_8005C158;
    case 0x8005C15Cu: goto label_8005C15C;
    case 0x8005C160u: goto label_8005C160;
    case 0x8005C164u: goto label_8005C164;
    case 0x8005C168u: goto label_8005C168;
    case 0x8005C16Cu: goto label_8005C16C;
    case 0x8005C170u: goto label_8005C170;
    case 0x8005C174u: goto label_8005C174;
    case 0x8005C178u: goto label_8005C178;
    case 0x8005C17Cu: goto label_8005C17C;
    case 0x8005C180u: goto label_8005C180;
    case 0x8005C184u: goto label_8005C184;
    case 0x8005C188u: goto label_8005C188;
    case 0x8005C18Cu: goto label_8005C18C;
    case 0x8005C190u: goto label_8005C190;
    case 0x8005C194u: goto label_8005C194;
    case 0x8005C198u: goto label_8005C198;
    case 0x8005C19Cu: goto label_8005C19C;
    case 0x8005C1A0u: goto label_8005C1A0;
    case 0x8005C1A4u: goto label_8005C1A4;
    case 0x8005C1A8u: goto label_8005C1A8;
    case 0x8005C1ACu: goto label_8005C1AC;
    case 0x8005C1B0u: goto label_8005C1B0;
    case 0x8005C1B4u: goto label_8005C1B4;
    case 0x8005C1B8u: goto label_8005C1B8;
    case 0x8005C1BCu: goto label_8005C1BC;
    case 0x8005C1C0u: goto label_8005C1C0;
    case 0x8005C1C4u: goto label_8005C1C4;
    case 0x8005C1C8u: goto label_8005C1C8;
    case 0x8005C1CCu: goto label_8005C1CC;
    case 0x8005C1D0u: goto label_8005C1D0;
    case 0x8005C1D4u: goto label_8005C1D4;
    case 0x8005C1D8u: goto label_8005C1D8;
    case 0x8005C1DCu: goto label_8005C1DC;
    case 0x8005C1E0u: goto label_8005C1E0;
    case 0x8005C1E4u: goto label_8005C1E4;
    case 0x8005C1E8u: goto label_8005C1E8;
    case 0x8005C1ECu: goto label_8005C1EC;
    case 0x8005C1F0u: goto label_8005C1F0;
    case 0x8005C1F4u: goto label_8005C1F4;
    case 0x8005C1F8u: goto label_8005C1F8;
    case 0x8005C1FCu: goto label_8005C1FC;
    case 0x8005C200u: goto label_8005C200;
    case 0x8005C204u: goto label_8005C204;
    case 0x8005C208u: goto label_8005C208;
    case 0x8005C20Cu: goto label_8005C20C;
    case 0x8005C210u: goto label_8005C210;
    case 0x8005C214u: goto label_8005C214;
    case 0x8005C218u: goto label_8005C218;
    case 0x8005C21Cu: goto label_8005C21C;
    case 0x8005C220u: goto label_8005C220;
    case 0x8005C224u: goto label_8005C224;
    case 0x8005C228u: goto label_8005C228;
    case 0x8005C22Cu: goto label_8005C22C;
    case 0x8005C230u: goto label_8005C230;
    case 0x8005C234u: goto label_8005C234;
    case 0x8005C238u: goto label_8005C238;
    case 0x8005C23Cu: goto label_8005C23C;
    case 0x8005C240u: goto label_8005C240;
    case 0x8005C244u: goto label_8005C244;
    case 0x8005C248u: goto label_8005C248;
    case 0x8005C24Cu: goto label_8005C24C;
    case 0x8005C250u: goto label_8005C250;
    case 0x8005C254u: goto label_8005C254;
    case 0x8005C258u: goto label_8005C258;
    case 0x8005C25Cu: goto label_8005C25C;
    case 0x8005C260u: goto label_8005C260;
    case 0x8005C264u: goto label_8005C264;
    case 0x8005C268u: goto label_8005C268;
    case 0x8005C26Cu: goto label_8005C26C;
    case 0x8005C270u: goto label_8005C270;
    case 0x8005C274u: goto label_8005C274;
    case 0x8005C278u: goto label_8005C278;
    case 0x8005C27Cu: goto label_8005C27C;
    case 0x8005C280u: goto label_8005C280;
    case 0x8005C284u: goto label_8005C284;
    case 0x8005C288u: goto label_8005C288;
    case 0x8005C28Cu: goto label_8005C28C;
    case 0x8005C290u: goto label_8005C290;
    case 0x8005C294u: goto label_8005C294;
    case 0x8005C298u: goto label_8005C298;
    case 0x8005C29Cu: goto label_8005C29C;
    case 0x8005C2A0u: goto label_8005C2A0;
    case 0x8005C2A4u: goto label_8005C2A4;
    case 0x8005C2A8u: goto label_8005C2A8;
    case 0x8005C2ACu: goto label_8005C2AC;
    case 0x8005C2B0u: goto label_8005C2B0;
    case 0x8005C2B4u: goto label_8005C2B4;
    case 0x8005C2B8u: goto label_8005C2B8;
    case 0x8005C2BCu: goto label_8005C2BC;
    case 0x8005C2C0u: goto label_8005C2C0;
    case 0x8005C2C4u: goto label_8005C2C4;
    case 0x8005C2C8u: goto label_8005C2C8;
    case 0x8005C2CCu: goto label_8005C2CC;
    case 0x8005C2D0u: goto label_8005C2D0;
    case 0x8005C2D4u: goto label_8005C2D4;
    case 0x8005C2D8u: goto label_8005C2D8;
    case 0x8005C2DCu: goto label_8005C2DC;
    case 0x8005C2E0u: goto label_8005C2E0;
    case 0x8005C2E4u: goto label_8005C2E4;
    case 0x8005C2E8u: goto label_8005C2E8;
    case 0x8005C2ECu: goto label_8005C2EC;
    case 0x8005C2F0u: goto label_8005C2F0;
    case 0x8005C2F4u: goto label_8005C2F4;
    case 0x8005C2F8u: goto label_8005C2F8;
    case 0x8005C2FCu: goto label_8005C2FC;
    case 0x8005C300u: goto label_8005C300;
    case 0x8005C304u: goto label_8005C304;
    case 0x8005C308u: goto label_8005C308;
    case 0x8005C30Cu: goto label_8005C30C;
    case 0x8005C310u: goto label_8005C310;
    case 0x8005C314u: goto label_8005C314;
    case 0x8005C318u: goto label_8005C318;
    case 0x8005C31Cu: goto label_8005C31C;
    case 0x8005C320u: goto label_8005C320;
    case 0x8005C324u: goto label_8005C324;
    case 0x8005C328u: goto label_8005C328;
    case 0x8005C32Cu: goto label_8005C32C;
    case 0x8005C330u: goto label_8005C330;
    case 0x8005C334u: goto label_8005C334;
    case 0x8005C338u: goto label_8005C338;
    case 0x8005C33Cu: goto label_8005C33C;
    case 0x8005C340u: goto label_8005C340;
    case 0x8005C344u: goto label_8005C344;
    case 0x8005C348u: goto label_8005C348;
    case 0x8005C34Cu: goto label_8005C34C;
    case 0x8005C350u: goto label_8005C350;
    case 0x8005C354u: goto label_8005C354;
    case 0x8005C358u: goto label_8005C358;
    case 0x8005C35Cu: goto label_8005C35C;
    case 0x8005C360u: goto label_8005C360;
    case 0x8005C364u: goto label_8005C364;
    case 0x8005C368u: goto label_8005C368;
    case 0x8005C36Cu: goto label_8005C36C;
    case 0x8005C370u: goto label_8005C370;
    case 0x8005C374u: goto label_8005C374;
    case 0x8005C378u: goto label_8005C378;
    case 0x8005C37Cu: goto label_8005C37C;
    case 0x8005C380u: goto label_8005C380;
    case 0x8005C384u: goto label_8005C384;
    case 0x8005C388u: goto label_8005C388;
    case 0x8005C38Cu: goto label_8005C38C;
    case 0x8005C390u: goto label_8005C390;
    case 0x8005C394u: goto label_8005C394;
    case 0x8005C398u: goto label_8005C398;
    case 0x8005C39Cu: goto label_8005C39C;
    case 0x8005C3A0u: goto label_8005C3A0;
    case 0x8005C3A4u: goto label_8005C3A4;
    case 0x8005C3A8u: goto label_8005C3A8;
    case 0x8005C3ACu: goto label_8005C3AC;
    case 0x8005C3B0u: goto label_8005C3B0;
    case 0x8005C3B4u: goto label_8005C3B4;
    case 0x8005C3B8u: goto label_8005C3B8;
    case 0x8005C3BCu: goto label_8005C3BC;
    case 0x8005C3C0u: goto label_8005C3C0;
    case 0x8005C3C4u: goto label_8005C3C4;
    case 0x8005C3C8u: goto label_8005C3C8;
    case 0x8005C3CCu: goto label_8005C3CC;
    case 0x8005C3D0u: goto label_8005C3D0;
    case 0x8005C3D4u: goto label_8005C3D4;
    case 0x8005C3D8u: goto label_8005C3D8;
    case 0x8005C3DCu: goto label_8005C3DC;
    case 0x8005C3E0u: goto label_8005C3E0;
    case 0x8005C3E4u: goto label_8005C3E4;
    case 0x8005C3E8u: goto label_8005C3E8;
    case 0x8005C3ECu: goto label_8005C3EC;
    case 0x8005C3F0u: goto label_8005C3F0;
    case 0x8005C3F4u: goto label_8005C3F4;
    case 0x8005C3F8u: goto label_8005C3F8;
    case 0x8005C3FCu: goto label_8005C3FC;
    case 0x8005C400u: goto label_8005C400;
    case 0x8005C404u: goto label_8005C404;
    case 0x8005C408u: goto label_8005C408;
    case 0x8005C40Cu: goto label_8005C40C;
    case 0x8005C410u: goto label_8005C410;
    case 0x8005C414u: goto label_8005C414;
    case 0x8005C418u: goto label_8005C418;
    case 0x8005C41Cu: goto label_8005C41C;
    case 0x8005C420u: goto label_8005C420;
    case 0x8005C424u: goto label_8005C424;
    case 0x8005C428u: goto label_8005C428;
    case 0x8005C42Cu: goto label_8005C42C;
    case 0x8005C430u: goto label_8005C430;
    case 0x8005C434u: goto label_8005C434;
    case 0x8005C438u: goto label_8005C438;
    case 0x8005C43Cu: goto label_8005C43C;
    case 0x8005C440u: goto label_8005C440;
    case 0x8005C444u: goto label_8005C444;
    case 0x8005C448u: goto label_8005C448;
    case 0x8005C44Cu: goto label_8005C44C;
    case 0x8005C450u: goto label_8005C450;
    case 0x8005C454u: goto label_8005C454;
    case 0x8005C458u: goto label_8005C458;
    case 0x8005C45Cu: goto label_8005C45C;
    case 0x8005C460u: goto label_8005C460;
    case 0x8005C464u: goto label_8005C464;
    case 0x8005C468u: goto label_8005C468;
    case 0x8005C46Cu: goto label_8005C46C;
    case 0x8005C470u: goto label_8005C470;
    case 0x8005C474u: goto label_8005C474;
    case 0x8005C478u: goto label_8005C478;
    case 0x8005C47Cu: goto label_8005C47C;
    case 0x8005C480u: goto label_8005C480;
    case 0x8005C484u: goto label_8005C484;
    case 0x8005C488u: goto label_8005C488;
    case 0x8005C48Cu: goto label_8005C48C;
    case 0x8005C490u: goto label_8005C490;
    case 0x8005C494u: goto label_8005C494;
    case 0x8005C498u: goto label_8005C498;
    case 0x8005C49Cu: goto label_8005C49C;
    case 0x8005C4A0u: goto label_8005C4A0;
    case 0x8005C4A4u: goto label_8005C4A4;
    case 0x8005C4A8u: goto label_8005C4A8;
    case 0x8005C4ACu: goto label_8005C4AC;
    case 0x8005C4B0u: goto label_8005C4B0;
    case 0x8005C4B4u: goto label_8005C4B4;
    case 0x8005C4B8u: goto label_8005C4B8;
    case 0x8005C4BCu: goto label_8005C4BC;
    case 0x8005C4C0u: goto label_8005C4C0;
    case 0x8005C4C4u: goto label_8005C4C4;
    case 0x8005C4C8u: goto label_8005C4C8;
    case 0x8005C4CCu: goto label_8005C4CC;
    case 0x8005C4D0u: goto label_8005C4D0;
    case 0x8005C4D4u: goto label_8005C4D4;
    case 0x8005C4D8u: goto label_8005C4D8;
    case 0x8005C4DCu: goto label_8005C4DC;
    case 0x8005C4E0u: goto label_8005C4E0;
    case 0x8005C4E4u: goto label_8005C4E4;
    case 0x8005C4E8u: goto label_8005C4E8;
    case 0x8005C4ECu: goto label_8005C4EC;
    case 0x8005C4F0u: goto label_8005C4F0;
    case 0x8005C4F4u: goto label_8005C4F4;
    case 0x8005C4F8u: goto label_8005C4F8;
    case 0x8005C4FCu: goto label_8005C4FC;
    case 0x8005C500u: goto label_8005C500;
    case 0x8005C504u: goto label_8005C504;
    case 0x8005C508u: goto label_8005C508;
    case 0x8005C50Cu: goto label_8005C50C;
    case 0x8005C510u: goto label_8005C510;
    case 0x8005C514u: goto label_8005C514;
    case 0x8005C518u: goto label_8005C518;
    case 0x8005C51Cu: goto label_8005C51C;
    case 0x8005C520u: goto label_8005C520;
    case 0x8005C524u: goto label_8005C524;
    case 0x8005C528u: goto label_8005C528;
    case 0x8005C52Cu: goto label_8005C52C;
    case 0x8005C530u: goto label_8005C530;
    case 0x8005C534u: goto label_8005C534;
    case 0x8005C538u: goto label_8005C538;
    case 0x8005C53Cu: goto label_8005C53C;
    case 0x8005C540u: goto label_8005C540;
    case 0x8005C544u: goto label_8005C544;
    case 0x8005C548u: goto label_8005C548;
    case 0x8005C54Cu: goto label_8005C54C;
    case 0x8005C550u: goto label_8005C550;
    case 0x8005C554u: goto label_8005C554;
    case 0x8005C558u: goto label_8005C558;
    case 0x8005C55Cu: goto label_8005C55C;
    case 0x8005C560u: goto label_8005C560;
    case 0x8005C564u: goto label_8005C564;
    case 0x8005C568u: goto label_8005C568;
    case 0x8005C56Cu: goto label_8005C56C;
    case 0x8005C570u: goto label_8005C570;
    case 0x8005C574u: goto label_8005C574;
    case 0x8005C578u: goto label_8005C578;
    case 0x8005C57Cu: goto label_8005C57C;
    case 0x8005C580u: goto label_8005C580;
    case 0x8005C584u: goto label_8005C584;
    case 0x8005C588u: goto label_8005C588;
    case 0x8005C58Cu: goto label_8005C58C;
    case 0x8005C590u: goto label_8005C590;
    case 0x8005C594u: goto label_8005C594;
    case 0x8005C598u: goto label_8005C598;
    case 0x8005C59Cu: goto label_8005C59C;
    case 0x8005C5A0u: goto label_8005C5A0;
    case 0x8005C5A4u: goto label_8005C5A4;
    case 0x8005C5A8u: goto label_8005C5A8;
    case 0x8005C5ACu: goto label_8005C5AC;
    case 0x8005C5B0u: goto label_8005C5B0;
    case 0x8005C5B4u: goto label_8005C5B4;
    case 0x8005C5B8u: goto label_8005C5B8;
    case 0x8005C5BCu: goto label_8005C5BC;
    case 0x8005C5C0u: goto label_8005C5C0;
    case 0x8005C5C4u: goto label_8005C5C4;
    case 0x8005C5C8u: goto label_8005C5C8;
    case 0x8005C5CCu: goto label_8005C5CC;
    case 0x8005C5D0u: goto label_8005C5D0;
    case 0x8005C5D4u: goto label_8005C5D4;
    case 0x8005C5D8u: goto label_8005C5D8;
    case 0x8005C5DCu: goto label_8005C5DC;
    case 0x8005C5E0u: goto label_8005C5E0;
    case 0x8005C5E4u: goto label_8005C5E4;
    case 0x8005C5E8u: goto label_8005C5E8;
    case 0x8005C5ECu: goto label_8005C5EC;
    case 0x8005C5F0u: goto label_8005C5F0;
    case 0x8005C5F4u: goto label_8005C5F4;
    case 0x8005C5F8u: goto label_8005C5F8;
    case 0x8005C5FCu: goto label_8005C5FC;
    case 0x8005C600u: goto label_8005C600;
    case 0x8005C604u: goto label_8005C604;
    case 0x8005C608u: goto label_8005C608;
    case 0x8005C60Cu: goto label_8005C60C;
    case 0x8005C610u: goto label_8005C610;
    case 0x8005C614u: goto label_8005C614;
    case 0x8005C618u: goto label_8005C618;
    case 0x8005C61Cu: goto label_8005C61C;
    case 0x8005C620u: goto label_8005C620;
    case 0x8005C624u: goto label_8005C624;
    case 0x8005C628u: goto label_8005C628;
    case 0x8005C62Cu: goto label_8005C62C;
    case 0x8005C630u: goto label_8005C630;
    case 0x8005C634u: goto label_8005C634;
    case 0x8005C638u: goto label_8005C638;
    case 0x8005C63Cu: goto label_8005C63C;
    case 0x8005C640u: goto label_8005C640;
    case 0x8005C644u: goto label_8005C644;
    case 0x8005C648u: goto label_8005C648;
    case 0x8005C64Cu: goto label_8005C64C;
    case 0x8005C650u: goto label_8005C650;
    case 0x8005C654u: goto label_8005C654;
    case 0x8005C658u: goto label_8005C658;
    case 0x8005C65Cu: goto label_8005C65C;
    case 0x8005C660u: goto label_8005C660;
    case 0x8005C664u: goto label_8005C664;
    case 0x8005C668u: goto label_8005C668;
    case 0x8005C66Cu: goto label_8005C66C;
    case 0x8005C670u: goto label_8005C670;
    case 0x8005C674u: goto label_8005C674;
    case 0x8005C678u: goto label_8005C678;
    case 0x8005C67Cu: goto label_8005C67C;
    case 0x8005C680u: goto label_8005C680;
    case 0x8005C684u: goto label_8005C684;
    case 0x8005C688u: goto label_8005C688;
    case 0x8005C68Cu: goto label_8005C68C;
    case 0x8005C690u: goto label_8005C690;
    case 0x8005C694u: goto label_8005C694;
    case 0x8005C698u: goto label_8005C698;
    case 0x8005C69Cu: goto label_8005C69C;
    case 0x8005C6A0u: goto label_8005C6A0;
    case 0x8005C6A4u: goto label_8005C6A4;
    case 0x8005C6A8u: goto label_8005C6A8;
    case 0x8005C6ACu: goto label_8005C6AC;
    case 0x8005C6B0u: goto label_8005C6B0;
    case 0x8005C6B4u: goto label_8005C6B4;
    case 0x8005C6B8u: goto label_8005C6B8;
    case 0x8005C6BCu: goto label_8005C6BC;
    case 0x8005C6C0u: goto label_8005C6C0;
    case 0x8005C6C4u: goto label_8005C6C4;
    case 0x8005C6C8u: goto label_8005C6C8;
    case 0x8005C6CCu: goto label_8005C6CC;
    case 0x8005C6D0u: goto label_8005C6D0;
    case 0x8005C6D4u: goto label_8005C6D4;
    case 0x8005C6D8u: goto label_8005C6D8;
    case 0x8005C6DCu: goto label_8005C6DC;
    case 0x8005C6E0u: goto label_8005C6E0;
    case 0x8005C6E4u: goto label_8005C6E4;
    case 0x8005C6E8u: goto label_8005C6E8;
    case 0x8005C6ECu: goto label_8005C6EC;
    case 0x8005C6F0u: goto label_8005C6F0;
    case 0x8005C6F4u: goto label_8005C6F4;
    case 0x8005C6F8u: goto label_8005C6F8;
    case 0x8005C6FCu: goto label_8005C6FC;
    case 0x8005C700u: goto label_8005C700;
    case 0x8005C704u: goto label_8005C704;
    case 0x8005C708u: goto label_8005C708;
    case 0x8005C70Cu: goto label_8005C70C;
    case 0x8005C710u: goto label_8005C710;
    case 0x8005C714u: goto label_8005C714;
    case 0x8005C718u: goto label_8005C718;
    case 0x8005C71Cu: goto label_8005C71C;
    case 0x8005C720u: goto label_8005C720;
    case 0x8005C724u: goto label_8005C724;
    case 0x8005C728u: goto label_8005C728;
    case 0x8005C72Cu: goto label_8005C72C;
    case 0x8005C730u: goto label_8005C730;
    case 0x8005C734u: goto label_8005C734;
    case 0x8005C738u: goto label_8005C738;
    case 0x8005C73Cu: goto label_8005C73C;
    case 0x8005C740u: goto label_8005C740;
    case 0x8005C744u: goto label_8005C744;
    case 0x8005C748u: goto label_8005C748;
    case 0x8005C74Cu: goto label_8005C74C;
    case 0x8005C750u: goto label_8005C750;
    case 0x8005C754u: goto label_8005C754;
    case 0x8005C758u: goto label_8005C758;
    case 0x8005C75Cu: goto label_8005C75C;
    case 0x8005C760u: goto label_8005C760;
    case 0x8005C764u: goto label_8005C764;
    case 0x8005C768u: goto label_8005C768;
    case 0x8005C76Cu: goto label_8005C76C;
    case 0x8005C770u: goto label_8005C770;
    case 0x8005C774u: goto label_8005C774;
    case 0x8005C778u: goto label_8005C778;
    case 0x8005C77Cu: goto label_8005C77C;
    case 0x8005C780u: goto label_8005C780;
    case 0x8005C784u: goto label_8005C784;
    case 0x8005C788u: goto label_8005C788;
    case 0x8005C78Cu: goto label_8005C78C;
    case 0x8005C790u: goto label_8005C790;
    case 0x8005C794u: goto label_8005C794;
    case 0x8005C798u: goto label_8005C798;
    case 0x8005C79Cu: goto label_8005C79C;
    case 0x8005C7A0u: goto label_8005C7A0;
    case 0x8005C7A4u: goto label_8005C7A4;
    case 0x8005C7A8u: goto label_8005C7A8;
    case 0x8005C7ACu: goto label_8005C7AC;
    case 0x8005C7B0u: goto label_8005C7B0;
    case 0x8005C7B4u: goto label_8005C7B4;
    case 0x8005C7B8u: goto label_8005C7B8;
    case 0x8005C7BCu: goto label_8005C7BC;
    case 0x8005C7C0u: goto label_8005C7C0;
    case 0x8005C7C4u: goto label_8005C7C4;
    case 0x8005C7C8u: goto label_8005C7C8;
    case 0x8005C7CCu: goto label_8005C7CC;
    case 0x8005C7D0u: goto label_8005C7D0;
    case 0x8005C7D4u: goto label_8005C7D4;
    case 0x8005C7D8u: goto label_8005C7D8;
    case 0x8005C7DCu: goto label_8005C7DC;
    case 0x8005C7E0u: goto label_8005C7E0;
    case 0x8005C7E4u: goto label_8005C7E4;
    case 0x8005C7E8u: goto label_8005C7E8;
    case 0x8005C7ECu: goto label_8005C7EC;
    case 0x8005C7F0u: goto label_8005C7F0;
    case 0x8005C7F4u: goto label_8005C7F4;
    case 0x8005C7F8u: goto label_8005C7F8;
    case 0x8005C7FCu: goto label_8005C7FC;
    case 0x8005C800u: goto label_8005C800;
    case 0x8005C804u: goto label_8005C804;
    case 0x8005C808u: goto label_8005C808;
    case 0x8005C80Cu: goto label_8005C80C;
    case 0x8005C810u: goto label_8005C810;
    case 0x8005C814u: goto label_8005C814;
    case 0x8005C818u: goto label_8005C818;
    case 0x8005C81Cu: goto label_8005C81C;
    case 0x8005C820u: goto label_8005C820;
    case 0x8005C824u: goto label_8005C824;
    case 0x8005C828u: goto label_8005C828;
    case 0x8005C82Cu: goto label_8005C82C;
    case 0x8005C830u: goto label_8005C830;
    case 0x8005C834u: goto label_8005C834;
    case 0x8005C838u: goto label_8005C838;
    case 0x8005C83Cu: goto label_8005C83C;
    case 0x8005C840u: goto label_8005C840;
    case 0x8005C844u: goto label_8005C844;
    case 0x8005C848u: goto label_8005C848;
    case 0x8005C84Cu: goto label_8005C84C;
    case 0x8005C850u: goto label_8005C850;
    case 0x8005C854u: goto label_8005C854;
    case 0x8005C858u: goto label_8005C858;
    case 0x8005C85Cu: goto label_8005C85C;
    case 0x8005C860u: goto label_8005C860;
    case 0x8005C864u: goto label_8005C864;
    case 0x8005C868u: goto label_8005C868;
    case 0x8005C86Cu: goto label_8005C86C;
    case 0x8005C870u: goto label_8005C870;
    case 0x8005C874u: goto label_8005C874;
    case 0x8005C878u: goto label_8005C878;
    case 0x8005C87Cu: goto label_8005C87C;
    case 0x8005C880u: goto label_8005C880;
    case 0x8005C884u: goto label_8005C884;
    case 0x8005C888u: goto label_8005C888;
    case 0x8005C88Cu: goto label_8005C88C;
    case 0x8005C890u: goto label_8005C890;
    case 0x8005C894u: goto label_8005C894;
    case 0x8005C898u: goto label_8005C898;
    case 0x8005C89Cu: goto label_8005C89C;
    case 0x8005C8A0u: goto label_8005C8A0;
    case 0x8005C8A4u: goto label_8005C8A4;
    case 0x8005C8A8u: goto label_8005C8A8;
    case 0x8005C8ACu: goto label_8005C8AC;
    case 0x8005C8B0u: goto label_8005C8B0;
    case 0x8005C8B4u: goto label_8005C8B4;
    case 0x8005C8B8u: goto label_8005C8B8;
    case 0x8005C8BCu: goto label_8005C8BC;
    case 0x8005C8C0u: goto label_8005C8C0;
    case 0x8005C8C4u: goto label_8005C8C4;
    case 0x8005C8C8u: goto label_8005C8C8;
    case 0x8005C8CCu: goto label_8005C8CC;
    case 0x8005C8D0u: goto label_8005C8D0;
    case 0x8005C8D4u: goto label_8005C8D4;
    case 0x8005C8D8u: goto label_8005C8D8;
    case 0x8005C8DCu: goto label_8005C8DC;
    case 0x8005C8E0u: goto label_8005C8E0;
    case 0x8005C8E4u: goto label_8005C8E4;
    case 0x8005C8E8u: goto label_8005C8E8;
    case 0x8005C8ECu: goto label_8005C8EC;
    case 0x8005C8F0u: goto label_8005C8F0;
    case 0x8005C8F4u: goto label_8005C8F4;
    case 0x8005C8F8u: goto label_8005C8F8;
    case 0x8005C8FCu: goto label_8005C8FC;
    case 0x8005C900u: goto label_8005C900;
    case 0x8005C904u: goto label_8005C904;
    case 0x8005C908u: goto label_8005C908;
    case 0x8005C90Cu: goto label_8005C90C;
    case 0x8005C910u: goto label_8005C910;
    case 0x8005C914u: goto label_8005C914;
    case 0x8005C918u: goto label_8005C918;
    case 0x8005C91Cu: goto label_8005C91C;
    case 0x8005C920u: goto label_8005C920;
    case 0x8005C924u: goto label_8005C924;
    case 0x8005C928u: goto label_8005C928;
    case 0x8005C92Cu: goto label_8005C92C;
    case 0x8005C930u: goto label_8005C930;
    case 0x8005C934u: goto label_8005C934;
    case 0x8005C938u: goto label_8005C938;
    case 0x8005C93Cu: goto label_8005C93C;
    case 0x8005C940u: goto label_8005C940;
    case 0x8005C944u: goto label_8005C944;
    case 0x8005C948u: goto label_8005C948;
    case 0x8005C94Cu: goto label_8005C94C;
    case 0x8005C950u: goto label_8005C950;
    case 0x8005C954u: goto label_8005C954;
    case 0x8005C958u: goto label_8005C958;
    case 0x8005C95Cu: goto label_8005C95C;
    case 0x8005C960u: goto label_8005C960;
    case 0x8005C964u: goto label_8005C964;
    case 0x8005C968u: goto label_8005C968;
    case 0x8005C96Cu: goto label_8005C96C;
    case 0x8005C970u: goto label_8005C970;
    case 0x8005C974u: goto label_8005C974;
    case 0x8005C978u: goto label_8005C978;
    case 0x8005C97Cu: goto label_8005C97C;
    case 0x8005C980u: goto label_8005C980;
    case 0x8005C984u: goto label_8005C984;
    case 0x8005C988u: goto label_8005C988;
    case 0x8005C98Cu: goto label_8005C98C;
    case 0x8005C990u: goto label_8005C990;
    case 0x8005C994u: goto label_8005C994;
    case 0x8005C998u: goto label_8005C998;
    case 0x8005C99Cu: goto label_8005C99C;
    case 0x8005C9A0u: goto label_8005C9A0;
    case 0x8005C9A4u: goto label_8005C9A4;
    case 0x8005C9A8u: goto label_8005C9A8;
    case 0x8005C9ACu: goto label_8005C9AC;
    case 0x8005C9B0u: goto label_8005C9B0;
    case 0x8005C9B4u: goto label_8005C9B4;
    case 0x8005C9B8u: goto label_8005C9B8;
    case 0x8005C9BCu: goto label_8005C9BC;
    case 0x8005C9C0u: goto label_8005C9C0;
    case 0x8005C9C4u: goto label_8005C9C4;
    case 0x8005C9C8u: goto label_8005C9C8;
    case 0x8005C9CCu: goto label_8005C9CC;
    case 0x8005C9D0u: goto label_8005C9D0;
    case 0x8005C9D4u: goto label_8005C9D4;
    case 0x8005C9D8u: goto label_8005C9D8;
    case 0x8005C9DCu: goto label_8005C9DC;
    case 0x8005C9E0u: goto label_8005C9E0;
    case 0x8005C9E4u: goto label_8005C9E4;
    case 0x8005C9E8u: goto label_8005C9E8;
    case 0x8005C9ECu: goto label_8005C9EC;
    case 0x8005C9F0u: goto label_8005C9F0;
    case 0x8005C9F4u: goto label_8005C9F4;
    case 0x8005C9F8u: goto label_8005C9F8;
    case 0x8005C9FCu: goto label_8005C9FC;
    case 0x8005CA00u: goto label_8005CA00;
    case 0x8005CA04u: goto label_8005CA04;
    case 0x8005CA08u: goto label_8005CA08;
    case 0x8005CA0Cu: goto label_8005CA0C;
    case 0x8005CA10u: goto label_8005CA10;
    case 0x8005CA14u: goto label_8005CA14;
    case 0x8005CA18u: goto label_8005CA18;
    case 0x8005CA1Cu: goto label_8005CA1C;
    case 0x8005CA20u: goto label_8005CA20;
    case 0x8005CA24u: goto label_8005CA24;
    case 0x8005CA28u: goto label_8005CA28;
    case 0x8005CA2Cu: goto label_8005CA2C;
    case 0x8005CA30u: goto label_8005CA30;
    case 0x8005CA34u: goto label_8005CA34;
    case 0x8005CA38u: goto label_8005CA38;
    case 0x8005CA3Cu: goto label_8005CA3C;
    case 0x8005CA40u: goto label_8005CA40;
    case 0x8005CA44u: goto label_8005CA44;
    case 0x8005CA48u: goto label_8005CA48;
    case 0x8005CA4Cu: goto label_8005CA4C;
    case 0x8005CA50u: goto label_8005CA50;
    case 0x8005CA54u: goto label_8005CA54;
    case 0x8005CA58u: goto label_8005CA58;
    case 0x8005CA5Cu: goto label_8005CA5C;
    case 0x8005CA60u: goto label_8005CA60;
    case 0x8005CA64u: goto label_8005CA64;
    case 0x8005CA68u: goto label_8005CA68;
    case 0x8005CA6Cu: goto label_8005CA6C;
    case 0x8005CA70u: goto label_8005CA70;
    case 0x8005CA74u: goto label_8005CA74;
    case 0x8005CA78u: goto label_8005CA78;
    case 0x8005CA7Cu: goto label_8005CA7C;
    case 0x8005CA80u: goto label_8005CA80;
    case 0x8005CA84u: goto label_8005CA84;
    case 0x8005CA88u: goto label_8005CA88;
    case 0x8005CA8Cu: goto label_8005CA8C;
    case 0x8005CA90u: goto label_8005CA90;
    case 0x8005CA94u: goto label_8005CA94;
    case 0x8005CA98u: goto label_8005CA98;
    case 0x8005CA9Cu: goto label_8005CA9C;
    case 0x8005CAA0u: goto label_8005CAA0;
    case 0x8005CAA4u: goto label_8005CAA4;
    case 0x8005CAA8u: goto label_8005CAA8;
    case 0x8005CAACu: goto label_8005CAAC;
    case 0x8005CAB0u: goto label_8005CAB0;
    case 0x8005CAB4u: goto label_8005CAB4;
    case 0x8005CAB8u: goto label_8005CAB8;
    case 0x8005CABCu: goto label_8005CABC;
    case 0x8005CAC0u: goto label_8005CAC0;
    case 0x8005CAC4u: goto label_8005CAC4;
    case 0x8005CAC8u: goto label_8005CAC8;
    case 0x8005CACCu: goto label_8005CACC;
    case 0x8005CAD0u: goto label_8005CAD0;
    case 0x8005CAD4u: goto label_8005CAD4;
    case 0x8005CAD8u: goto label_8005CAD8;
    case 0x8005CADCu: goto label_8005CADC;
    case 0x8005CAE0u: goto label_8005CAE0;
    case 0x8005CAE4u: goto label_8005CAE4;
    case 0x8005CAE8u: goto label_8005CAE8;
    case 0x8005CAECu: goto label_8005CAEC;
    case 0x8005CAF0u: goto label_8005CAF0;
    case 0x8005CAF4u: goto label_8005CAF4;
    case 0x8005CAF8u: goto label_8005CAF8;
    case 0x8005CAFCu: goto label_8005CAFC;
    case 0x8005CB00u: goto label_8005CB00;
    case 0x8005CB04u: goto label_8005CB04;
    case 0x8005CB08u: goto label_8005CB08;
    case 0x8005CB0Cu: goto label_8005CB0C;
    case 0x8005CB10u: goto label_8005CB10;
    case 0x8005CB14u: goto label_8005CB14;
    case 0x8005CB18u: goto label_8005CB18;
    case 0x8005CB1Cu: goto label_8005CB1C;
    case 0x8005CB20u: goto label_8005CB20;
    case 0x8005CB24u: goto label_8005CB24;
    case 0x8005CB28u: goto label_8005CB28;
    case 0x8005CB2Cu: goto label_8005CB2C;
    case 0x8005CB30u: goto label_8005CB30;
    case 0x8005CB34u: goto label_8005CB34;
    case 0x8005CB38u: goto label_8005CB38;
    case 0x8005CB3Cu: goto label_8005CB3C;
    case 0x8005CB40u: goto label_8005CB40;
    case 0x8005CB44u: goto label_8005CB44;
    case 0x8005CB48u: goto label_8005CB48;
    case 0x8005CB4Cu: goto label_8005CB4C;
    case 0x8005CB50u: goto label_8005CB50;
    case 0x8005CB54u: goto label_8005CB54;
    case 0x8005CB58u: goto label_8005CB58;
    case 0x8005CB5Cu: goto label_8005CB5C;
    case 0x8005CB60u: goto label_8005CB60;
    case 0x8005CB64u: goto label_8005CB64;
    case 0x8005CB68u: goto label_8005CB68;
    case 0x8005CB6Cu: goto label_8005CB6C;
    case 0x8005CB70u: goto label_8005CB70;
    case 0x8005CB74u: goto label_8005CB74;
    case 0x8005CB78u: goto label_8005CB78;
    case 0x8005CB7Cu: goto label_8005CB7C;
    case 0x8005CB80u: goto label_8005CB80;
    case 0x8005CB84u: goto label_8005CB84;
    case 0x8005CB88u: goto label_8005CB88;
    case 0x8005CB8Cu: goto label_8005CB8C;
    case 0x8005CB90u: goto label_8005CB90;
    case 0x8005CB94u: goto label_8005CB94;
    case 0x8005CB98u: goto label_8005CB98;
    case 0x8005CB9Cu: goto label_8005CB9C;
    case 0x8005CBA0u: goto label_8005CBA0;
    case 0x8005CBA4u: goto label_8005CBA4;
    case 0x8005CBA8u: goto label_8005CBA8;
    case 0x8005CBACu: goto label_8005CBAC;
    case 0x8005CBB0u: goto label_8005CBB0;
    case 0x8005CBB4u: goto label_8005CBB4;
    case 0x8005CBB8u: goto label_8005CBB8;
    case 0x8005CBBCu: goto label_8005CBBC;
    case 0x8005CBC0u: goto label_8005CBC0;
    case 0x8005CBC4u: goto label_8005CBC4;
    case 0x8005CBC8u: goto label_8005CBC8;
    case 0x8005CBCCu: goto label_8005CBCC;
    case 0x8005CBD0u: goto label_8005CBD0;
    case 0x8005CBD4u: goto label_8005CBD4;
    case 0x8005CBD8u: goto label_8005CBD8;
    case 0x8005CBDCu: goto label_8005CBDC;
    case 0x8005CBE0u: goto label_8005CBE0;
    case 0x8005CBE4u: goto label_8005CBE4;
    case 0x8005CBE8u: goto label_8005CBE8;
    case 0x8005CBECu: goto label_8005CBEC;
    case 0x8005CBF0u: goto label_8005CBF0;
    case 0x8005CBF4u: goto label_8005CBF4;
    case 0x8005CBF8u: goto label_8005CBF8;
    case 0x8005CBFCu: goto label_8005CBFC;
    case 0x8005CC00u: goto label_8005CC00;
    case 0x8005CC04u: goto label_8005CC04;
    case 0x8005CC08u: goto label_8005CC08;
    case 0x8005CC0Cu: goto label_8005CC0C;
    case 0x8005CC10u: goto label_8005CC10;
    case 0x8005CC14u: goto label_8005CC14;
    case 0x8005CC18u: goto label_8005CC18;
    case 0x8005CC1Cu: goto label_8005CC1C;
    case 0x8005CC20u: goto label_8005CC20;
    case 0x8005CC24u: goto label_8005CC24;
    case 0x8005CC28u: goto label_8005CC28;
    case 0x8005CC2Cu: goto label_8005CC2C;
    case 0x8005CC30u: goto label_8005CC30;
    case 0x8005CC34u: goto label_8005CC34;
    case 0x8005CC38u: goto label_8005CC38;
    case 0x8005CC3Cu: goto label_8005CC3C;
    case 0x8005CC40u: goto label_8005CC40;
    case 0x8005CC44u: goto label_8005CC44;
    case 0x8005CC48u: goto label_8005CC48;
    case 0x8005CC4Cu: goto label_8005CC4C;
    case 0x8005CC50u: goto label_8005CC50;
    case 0x8005CC54u: goto label_8005CC54;
    case 0x8005CC58u: goto label_8005CC58;
    case 0x8005CC5Cu: goto label_8005CC5C;
    case 0x8005CC60u: goto label_8005CC60;
    case 0x8005CC64u: goto label_8005CC64;
    case 0x8005CC68u: goto label_8005CC68;
    case 0x8005CC6Cu: goto label_8005CC6C;
    case 0x8005CC70u: goto label_8005CC70;
    case 0x8005CC74u: goto label_8005CC74;
    case 0x8005CC78u: goto label_8005CC78;
    case 0x8005CC7Cu: goto label_8005CC7C;
    case 0x8005CC80u: goto label_8005CC80;
    case 0x8005CC84u: goto label_8005CC84;
    case 0x8005CC88u: goto label_8005CC88;
    case 0x8005CC8Cu: goto label_8005CC8C;
    case 0x8005CC90u: goto label_8005CC90;
    case 0x8005CC94u: goto label_8005CC94;
    case 0x8005CC98u: goto label_8005CC98;
    case 0x8005CC9Cu: goto label_8005CC9C;
    case 0x8005CCA0u: goto label_8005CCA0;
    case 0x8005CCA4u: goto label_8005CCA4;
    case 0x8005CCA8u: goto label_8005CCA8;
    case 0x8005CCACu: goto label_8005CCAC;
    case 0x8005CCB0u: goto label_8005CCB0;
    case 0x8005CCB4u: goto label_8005CCB4;
    case 0x8005CCB8u: goto label_8005CCB8;
    case 0x8005CCBCu: goto label_8005CCBC;
    case 0x8005CCC0u: goto label_8005CCC0;
    case 0x8005CCC4u: goto label_8005CCC4;
    case 0x8005CCC8u: goto label_8005CCC8;
    case 0x8005CCCCu: goto label_8005CCCC;
    case 0x8005CCD0u: goto label_8005CCD0;
    case 0x8005CCD4u: goto label_8005CCD4;
    case 0x8005CCD8u: goto label_8005CCD8;
    case 0x8005CCDCu: goto label_8005CCDC;
    case 0x8005CCE0u: goto label_8005CCE0;
    case 0x8005CCE4u: goto label_8005CCE4;
    case 0x8005CCE8u: goto label_8005CCE8;
    case 0x8005CCECu: goto label_8005CCEC;
    case 0x8005CCF0u: goto label_8005CCF0;
    case 0x8005CCF4u: goto label_8005CCF4;
    case 0x8005CCF8u: goto label_8005CCF8;
    case 0x8005CCFCu: goto label_8005CCFC;
    case 0x8005CD00u: goto label_8005CD00;
    case 0x8005CD04u: goto label_8005CD04;
    case 0x8005CD08u: goto label_8005CD08;
    case 0x8005CD0Cu: goto label_8005CD0C;
    case 0x8005CD10u: goto label_8005CD10;
    case 0x8005CD14u: goto label_8005CD14;
    case 0x8005CD18u: goto label_8005CD18;
    case 0x8005CD1Cu: goto label_8005CD1C;
    case 0x8005CD20u: goto label_8005CD20;
    case 0x8005CD24u: goto label_8005CD24;
    case 0x8005CD28u: goto label_8005CD28;
    case 0x8005CD2Cu: goto label_8005CD2C;
    case 0x8005CD30u: goto label_8005CD30;
    case 0x8005CD34u: goto label_8005CD34;
    case 0x8005CD38u: goto label_8005CD38;
    case 0x8005CD3Cu: goto label_8005CD3C;
    case 0x8005CD40u: goto label_8005CD40;
    case 0x8005CD44u: goto label_8005CD44;
    case 0x8005CD48u: goto label_8005CD48;
    case 0x8005CD4Cu: goto label_8005CD4C;
    case 0x8005CD50u: goto label_8005CD50;
    case 0x8005CD54u: goto label_8005CD54;
    case 0x8005CD58u: goto label_8005CD58;
    case 0x8005CD5Cu: goto label_8005CD5C;
    case 0x8005CD60u: goto label_8005CD60;
    case 0x8005CD64u: goto label_8005CD64;
    case 0x8005CD68u: goto label_8005CD68;
    case 0x8005CD6Cu: goto label_8005CD6C;
    case 0x8005CD70u: goto label_8005CD70;
    case 0x8005CD74u: goto label_8005CD74;
    case 0x8005CD78u: goto label_8005CD78;
    case 0x8005CD7Cu: goto label_8005CD7C;
    case 0x8005CD80u: goto label_8005CD80;
    case 0x8005CD84u: goto label_8005CD84;
    case 0x8005CD88u: goto label_8005CD88;
    case 0x8005CD8Cu: goto label_8005CD8C;
    case 0x8005CD90u: goto label_8005CD90;
    case 0x8005CD94u: goto label_8005CD94;
    case 0x8005CD98u: goto label_8005CD98;
    case 0x8005CD9Cu: goto label_8005CD9C;
    case 0x8005CDA0u: goto label_8005CDA0;
    case 0x8005CDA4u: goto label_8005CDA4;
    case 0x8005CDA8u: goto label_8005CDA8;
    case 0x8005CDACu: goto label_8005CDAC;
    case 0x8005CDB0u: goto label_8005CDB0;
    case 0x8005CDB4u: goto label_8005CDB4;
    case 0x8005CDB8u: goto label_8005CDB8;
    case 0x8005CDBCu: goto label_8005CDBC;
    case 0x8005CDC0u: goto label_8005CDC0;
    case 0x8005CDC4u: goto label_8005CDC4;
    case 0x8005CDC8u: goto label_8005CDC8;
    case 0x8005CDCCu: goto label_8005CDCC;
    case 0x8005CDD0u: goto label_8005CDD0;
    case 0x8005CDD4u: goto label_8005CDD4;
    case 0x8005CDD8u: goto label_8005CDD8;
    case 0x8005CDDCu: goto label_8005CDDC;
    case 0x8005CDE0u: goto label_8005CDE0;
    case 0x8005CDE4u: goto label_8005CDE4;
    case 0x8005CDE8u: goto label_8005CDE8;
    case 0x8005CDECu: goto label_8005CDEC;
    case 0x8005CDF0u: goto label_8005CDF0;
    case 0x8005CDF4u: goto label_8005CDF4;
    case 0x8005CDF8u: goto label_8005CDF8;
    case 0x8005CDFCu: goto label_8005CDFC;
    case 0x8005CE00u: goto label_8005CE00;
    case 0x8005CE04u: goto label_8005CE04;
    case 0x8005CE08u: goto label_8005CE08;
    case 0x8005CE0Cu: goto label_8005CE0C;
    case 0x8005CE10u: goto label_8005CE10;
    case 0x8005CE14u: goto label_8005CE14;
    case 0x8005CE18u: goto label_8005CE18;
    case 0x8005CE1Cu: goto label_8005CE1C;
    case 0x8005CE20u: goto label_8005CE20;
    case 0x8005CE24u: goto label_8005CE24;
    case 0x8005CE28u: goto label_8005CE28;
    case 0x8005CE2Cu: goto label_8005CE2C;
    case 0x8005CE30u: goto label_8005CE30;
    case 0x8005CE34u: goto label_8005CE34;
    case 0x8005CE38u: goto label_8005CE38;
    case 0x8005CE3Cu: goto label_8005CE3C;
    case 0x8005CE40u: goto label_8005CE40;
    case 0x8005CE44u: goto label_8005CE44;
    case 0x8005CE48u: goto label_8005CE48;
    case 0x8005CE4Cu: goto label_8005CE4C;
    case 0x8005CE50u: goto label_8005CE50;
    case 0x8005CE54u: goto label_8005CE54;
    case 0x8005CE58u: goto label_8005CE58;
    case 0x8005CE5Cu: goto label_8005CE5C;
    case 0x8005CE60u: goto label_8005CE60;
    case 0x8005CE64u: goto label_8005CE64;
    case 0x8005CE68u: goto label_8005CE68;
    case 0x8005CE6Cu: goto label_8005CE6C;
    case 0x8005CE70u: goto label_8005CE70;
    case 0x8005CE74u: goto label_8005CE74;
    case 0x8005CE78u: goto label_8005CE78;
    case 0x8005CE7Cu: goto label_8005CE7C;
    case 0x8005CE80u: goto label_8005CE80;
    case 0x8005CE84u: goto label_8005CE84;
    case 0x8005CE88u: goto label_8005CE88;
    case 0x8005CE8Cu: goto label_8005CE8C;
    case 0x8005CE90u: goto label_8005CE90;
    case 0x8005CE94u: goto label_8005CE94;
    case 0x8005CE98u: goto label_8005CE98;
    case 0x8005CE9Cu: goto label_8005CE9C;
    case 0x8005CEA0u: goto label_8005CEA0;
    case 0x8005CEA4u: goto label_8005CEA4;
    case 0x8005CEA8u: goto label_8005CEA8;
    case 0x8005CEACu: goto label_8005CEAC;
    case 0x8005CEB0u: goto label_8005CEB0;
    case 0x8005CEB4u: goto label_8005CEB4;
    case 0x8005CEB8u: goto label_8005CEB8;
    case 0x8005CEBCu: goto label_8005CEBC;
    case 0x8005CEC0u: goto label_8005CEC0;
    case 0x8005CEC4u: goto label_8005CEC4;
    case 0x8005CEC8u: goto label_8005CEC8;
    case 0x8005CECCu: goto label_8005CECC;
    case 0x8005CED0u: goto label_8005CED0;
    case 0x8005CED4u: goto label_8005CED4;
    case 0x8005CED8u: goto label_8005CED8;
    case 0x8005CEDCu: goto label_8005CEDC;
    case 0x8005CEE0u: goto label_8005CEE0;
    case 0x8005CEE4u: goto label_8005CEE4;
    case 0x8005CEE8u: goto label_8005CEE8;
    case 0x8005CEECu: goto label_8005CEEC;
    case 0x8005CEF0u: goto label_8005CEF0;
    case 0x8005CEF4u: goto label_8005CEF4;
    case 0x8005CEF8u: goto label_8005CEF8;
    case 0x8005CEFCu: goto label_8005CEFC;
    case 0x8005CF00u: goto label_8005CF00;
    case 0x8005CF04u: goto label_8005CF04;
    case 0x8005CF08u: goto label_8005CF08;
    case 0x8005CF0Cu: goto label_8005CF0C;
    case 0x8005CF10u: goto label_8005CF10;
    case 0x8005CF14u: goto label_8005CF14;
    case 0x8005CF18u: goto label_8005CF18;
    case 0x8005CF1Cu: goto label_8005CF1C;
    case 0x8005CF20u: goto label_8005CF20;
    case 0x8005CF24u: goto label_8005CF24;
    case 0x8005CF28u: goto label_8005CF28;
    case 0x8005CF2Cu: goto label_8005CF2C;
    case 0x8005CF30u: goto label_8005CF30;
    case 0x8005CF34u: goto label_8005CF34;
    case 0x8005CF38u: goto label_8005CF38;
    case 0x8005CF3Cu: goto label_8005CF3C;
    case 0x8005CF40u: goto label_8005CF40;
    case 0x8005CF44u: goto label_8005CF44;
    case 0x8005CF48u: goto label_8005CF48;
    case 0x8005CF4Cu: goto label_8005CF4C;
    case 0x8005CF50u: goto label_8005CF50;
    case 0x8005CF54u: goto label_8005CF54;
    case 0x8005CF58u: goto label_8005CF58;
    case 0x8005CF5Cu: goto label_8005CF5C;
    case 0x8005CF60u: goto label_8005CF60;
    case 0x8005CF64u: goto label_8005CF64;
    case 0x8005CF68u: goto label_8005CF68;
    case 0x8005CF6Cu: goto label_8005CF6C;
    case 0x8005CF70u: goto label_8005CF70;
    case 0x8005CF74u: goto label_8005CF74;
    case 0x8005CF78u: goto label_8005CF78;
    case 0x8005CF7Cu: goto label_8005CF7C;
    case 0x8005CF80u: goto label_8005CF80;
    case 0x8005CF84u: goto label_8005CF84;
    case 0x8005CF88u: goto label_8005CF88;
    case 0x8005CF8Cu: goto label_8005CF8C;
    case 0x8005CF90u: goto label_8005CF90;
    case 0x8005CF94u: goto label_8005CF94;
    case 0x8005CF98u: goto label_8005CF98;
    case 0x8005CF9Cu: goto label_8005CF9C;
    case 0x8005CFA0u: goto label_8005CFA0;
    case 0x8005CFA4u: goto label_8005CFA4;
    case 0x8005CFA8u: goto label_8005CFA8;
    case 0x8005CFACu: goto label_8005CFAC;
    case 0x8005CFB0u: goto label_8005CFB0;
    case 0x8005CFB4u: goto label_8005CFB4;
    case 0x8005CFB8u: goto label_8005CFB8;
    case 0x8005CFBCu: goto label_8005CFBC;
    case 0x8005CFC0u: goto label_8005CFC0;
    case 0x8005CFC4u: goto label_8005CFC4;
    case 0x8005CFC8u: goto label_8005CFC8;
    case 0x8005CFCCu: goto label_8005CFCC;
    case 0x8005CFD0u: goto label_8005CFD0;
    case 0x8005CFD4u: goto label_8005CFD4;
    case 0x8005CFD8u: goto label_8005CFD8;
    case 0x8005CFDCu: goto label_8005CFDC;
    case 0x8005CFE0u: goto label_8005CFE0;
    case 0x8005CFE4u: goto label_8005CFE4;
    case 0x8005CFE8u: goto label_8005CFE8;
    case 0x8005CFECu: goto label_8005CFEC;
    case 0x8005CFF0u: goto label_8005CFF0;
    case 0x8005CFF4u: goto label_8005CFF4;
    case 0x8005CFF8u: goto label_8005CFF8;
    case 0x8005CFFCu: goto label_8005CFFC;
    case 0x8005D000u: goto label_8005D000;
    case 0x8005D004u: goto label_8005D004;
    case 0x8005D008u: goto label_8005D008;
    case 0x8005D00Cu: goto label_8005D00C;
    case 0x8005D010u: goto label_8005D010;
    case 0x8005D014u: goto label_8005D014;
    case 0x8005D018u: goto label_8005D018;
    case 0x8005D01Cu: goto label_8005D01C;
    case 0x8005D020u: goto label_8005D020;
    case 0x8005D024u: goto label_8005D024;
    case 0x8005D028u: goto label_8005D028;
    case 0x8005D02Cu: goto label_8005D02C;
    case 0x8005D030u: goto label_8005D030;
    case 0x8005D034u: goto label_8005D034;
    case 0x8005D038u: goto label_8005D038;
    case 0x8005D03Cu: goto label_8005D03C;
    case 0x8005D040u: goto label_8005D040;
    case 0x8005D044u: goto label_8005D044;
    case 0x8005D048u: goto label_8005D048;
    case 0x8005D04Cu: goto label_8005D04C;
    case 0x8005D050u: goto label_8005D050;
    case 0x8005D054u: goto label_8005D054;
    case 0x8005D058u: goto label_8005D058;
    case 0x8005D05Cu: goto label_8005D05C;
    case 0x8005D060u: goto label_8005D060;
    case 0x8005D064u: goto label_8005D064;
    case 0x8005D068u: goto label_8005D068;
    case 0x8005D06Cu: goto label_8005D06C;
    case 0x8005D070u: goto label_8005D070;
    case 0x8005D074u: goto label_8005D074;
    case 0x8005D078u: goto label_8005D078;
    case 0x8005D07Cu: goto label_8005D07C;
    case 0x8005D080u: goto label_8005D080;
    case 0x8005D084u: goto label_8005D084;
    case 0x8005D088u: goto label_8005D088;
    case 0x8005D08Cu: goto label_8005D08C;
    case 0x8005D090u: goto label_8005D090;
    case 0x8005D094u: goto label_8005D094;
    case 0x8005D098u: goto label_8005D098;
    case 0x8005D09Cu: goto label_8005D09C;
    case 0x8005D0A0u: goto label_8005D0A0;
    case 0x8005D0A4u: goto label_8005D0A4;
    case 0x8005D0A8u: goto label_8005D0A8;
    case 0x8005D0ACu: goto label_8005D0AC;
    case 0x8005D0B0u: goto label_8005D0B0;
    case 0x8005D0B4u: goto label_8005D0B4;
    case 0x8005D0B8u: goto label_8005D0B8;
    case 0x8005D0BCu: goto label_8005D0BC;
    case 0x8005D0C0u: goto label_8005D0C0;
    case 0x8005D0C4u: goto label_8005D0C4;
    case 0x8005D0C8u: goto label_8005D0C8;
    case 0x8005D0CCu: goto label_8005D0CC;
    case 0x8005D0D0u: goto label_8005D0D0;
    case 0x8005D0D4u: goto label_8005D0D4;
    case 0x8005D0D8u: goto label_8005D0D8;
    case 0x8005D0DCu: goto label_8005D0DC;
    case 0x8005D0E0u: goto label_8005D0E0;
    case 0x8005D0E4u: goto label_8005D0E4;
    case 0x8005D0E8u: goto label_8005D0E8;
    case 0x8005D0ECu: goto label_8005D0EC;
    case 0x8005D0F0u: goto label_8005D0F0;
    case 0x8005D0F4u: goto label_8005D0F4;
    case 0x8005D0F8u: goto label_8005D0F8;
    case 0x8005D0FCu: goto label_8005D0FC;
    case 0x8005D100u: goto label_8005D100;
    case 0x8005D104u: goto label_8005D104;
    case 0x8005D108u: goto label_8005D108;
    case 0x8005D10Cu: goto label_8005D10C;
    case 0x8005D110u: goto label_8005D110;
    case 0x8005D114u: goto label_8005D114;
    case 0x8005D118u: goto label_8005D118;
    case 0x8005D11Cu: goto label_8005D11C;
    case 0x8005D120u: goto label_8005D120;
    case 0x8005D124u: goto label_8005D124;
    case 0x8005D128u: goto label_8005D128;
    case 0x8005D12Cu: goto label_8005D12C;
    case 0x8005D130u: goto label_8005D130;
    case 0x8005D134u: goto label_8005D134;
    case 0x8005D138u: goto label_8005D138;
    case 0x8005D13Cu: goto label_8005D13C;
    case 0x8005D140u: goto label_8005D140;
    case 0x8005D144u: goto label_8005D144;
    case 0x8005D148u: goto label_8005D148;
    case 0x8005D14Cu: goto label_8005D14C;
    case 0x8005D150u: goto label_8005D150;
    case 0x8005D154u: goto label_8005D154;
    case 0x8005D158u: goto label_8005D158;
    case 0x8005D15Cu: goto label_8005D15C;
    case 0x8005D160u: goto label_8005D160;
    case 0x8005D164u: goto label_8005D164;
    case 0x8005D168u: goto label_8005D168;
    case 0x8005D16Cu: goto label_8005D16C;
    case 0x8005D170u: goto label_8005D170;
    case 0x8005D174u: goto label_8005D174;
    case 0x8005D178u: goto label_8005D178;
    case 0x8005D17Cu: goto label_8005D17C;
    case 0x8005D180u: goto label_8005D180;
    case 0x8005D184u: goto label_8005D184;
    case 0x8005D188u: goto label_8005D188;
    case 0x8005D18Cu: goto label_8005D18C;
    case 0x8005D190u: goto label_8005D190;
    case 0x8005D194u: goto label_8005D194;
    case 0x8005D198u: goto label_8005D198;
    case 0x8005D19Cu: goto label_8005D19C;
    case 0x8005D1A0u: goto label_8005D1A0;
    case 0x8005D1A4u: goto label_8005D1A4;
    case 0x8005D1A8u: goto label_8005D1A8;
    case 0x8005D1ACu: goto label_8005D1AC;
    case 0x8005D1B0u: goto label_8005D1B0;
    case 0x8005D1B4u: goto label_8005D1B4;
    case 0x8005D1B8u: goto label_8005D1B8;
    case 0x8005D1BCu: goto label_8005D1BC;
    case 0x8005D1C0u: goto label_8005D1C0;
    case 0x8005D1C4u: goto label_8005D1C4;
    case 0x8005D1C8u: goto label_8005D1C8;
    case 0x8005D1CCu: goto label_8005D1CC;
    case 0x8005D1D0u: goto label_8005D1D0;
    case 0x8005D1D4u: goto label_8005D1D4;
    case 0x8005D1D8u: goto label_8005D1D8;
    case 0x8005D1DCu: goto label_8005D1DC;
    case 0x8005D1E0u: goto label_8005D1E0;
    case 0x8005D1E4u: goto label_8005D1E4;
    case 0x8005D1E8u: goto label_8005D1E8;
    case 0x8005D1ECu: goto label_8005D1EC;
    case 0x8005D1F0u: goto label_8005D1F0;
    case 0x8005D1F4u: goto label_8005D1F4;
    case 0x8005D1F8u: goto label_8005D1F8;
    case 0x8005D1FCu: goto label_8005D1FC;
    case 0x8005D200u: goto label_8005D200;
    case 0x8005D204u: goto label_8005D204;
    case 0x8005D208u: goto label_8005D208;
    case 0x8005D20Cu: goto label_8005D20C;
    case 0x8005D210u: goto label_8005D210;
    case 0x8005D214u: goto label_8005D214;
    case 0x8005D218u: goto label_8005D218;
    case 0x8005D21Cu: goto label_8005D21C;
    case 0x8005D220u: goto label_8005D220;
    case 0x8005D224u: goto label_8005D224;
    case 0x8005D228u: goto label_8005D228;
    case 0x8005D22Cu: goto label_8005D22C;
    case 0x8005D230u: goto label_8005D230;
    case 0x8005D234u: goto label_8005D234;
    case 0x8005D238u: goto label_8005D238;
    case 0x8005D23Cu: goto label_8005D23C;
    case 0x8005D240u: goto label_8005D240;
    case 0x8005D244u: goto label_8005D244;
    case 0x8005D248u: goto label_8005D248;
    case 0x8005D24Cu: goto label_8005D24C;
    case 0x8005D250u: goto label_8005D250;
    case 0x8005D254u: goto label_8005D254;
    case 0x8005D258u: goto label_8005D258;
    case 0x8005D25Cu: goto label_8005D25C;
    case 0x8005D260u: goto label_8005D260;
    case 0x8005D264u: goto label_8005D264;
    case 0x8005D268u: goto label_8005D268;
    case 0x8005D26Cu: goto label_8005D26C;
    case 0x8005D270u: goto label_8005D270;
    case 0x8005D274u: goto label_8005D274;
    case 0x8005D278u: goto label_8005D278;
    case 0x8005D27Cu: goto label_8005D27C;
    case 0x8005D280u: goto label_8005D280;
    case 0x8005D284u: goto label_8005D284;
    case 0x8005D288u: goto label_8005D288;
    case 0x8005D28Cu: goto label_8005D28C;
    case 0x8005D290u: goto label_8005D290;
    case 0x8005D294u: goto label_8005D294;
    case 0x8005D298u: goto label_8005D298;
    case 0x8005D29Cu: goto label_8005D29C;
    case 0x8005D2A0u: goto label_8005D2A0;
    case 0x8005D2A4u: goto label_8005D2A4;
    case 0x8005D2A8u: goto label_8005D2A8;
    case 0x8005D2ACu: goto label_8005D2AC;
    case 0x8005D2B0u: goto label_8005D2B0;
    case 0x8005D2B4u: goto label_8005D2B4;
    case 0x8005D2B8u: goto label_8005D2B8;
    case 0x8005D2BCu: goto label_8005D2BC;
    case 0x8005D2C0u: goto label_8005D2C0;
    case 0x8005D2C4u: goto label_8005D2C4;
    case 0x8005D2C8u: goto label_8005D2C8;
    case 0x8005D2CCu: goto label_8005D2CC;
    case 0x8005D2D0u: goto label_8005D2D0;
    case 0x8005D2D4u: goto label_8005D2D4;
    case 0x8005D2D8u: goto label_8005D2D8;
    case 0x8005D2DCu: goto label_8005D2DC;
    case 0x8005D2E0u: goto label_8005D2E0;
    case 0x8005D2E4u: goto label_8005D2E4;
    case 0x8005D2E8u: goto label_8005D2E8;
    case 0x8005D2ECu: goto label_8005D2EC;
    case 0x8005D2F0u: goto label_8005D2F0;
    case 0x8005D2F4u: goto label_8005D2F4;
    case 0x8005D2F8u: goto label_8005D2F8;
    case 0x8005D2FCu: goto label_8005D2FC;
    case 0x8005D300u: goto label_8005D300;
    case 0x8005D304u: goto label_8005D304;
    case 0x8005D308u: goto label_8005D308;
    case 0x8005D30Cu: goto label_8005D30C;
    case 0x8005D310u: goto label_8005D310;
    case 0x8005D314u: goto label_8005D314;
    case 0x8005D318u: goto label_8005D318;
    case 0x8005D31Cu: goto label_8005D31C;
    case 0x8005D320u: goto label_8005D320;
    case 0x8005D324u: goto label_8005D324;
    case 0x8005D328u: goto label_8005D328;
    case 0x8005D32Cu: goto label_8005D32C;
    case 0x8005D330u: goto label_8005D330;
    case 0x8005D334u: goto label_8005D334;
    case 0x8005D338u: goto label_8005D338;
    case 0x8005D33Cu: goto label_8005D33C;
    case 0x8005D340u: goto label_8005D340;
    case 0x8005D344u: goto label_8005D344;
    case 0x8005D348u: goto label_8005D348;
    case 0x8005D34Cu: goto label_8005D34C;
    case 0x8005D350u: goto label_8005D350;
    case 0x8005D354u: goto label_8005D354;
    case 0x8005D358u: goto label_8005D358;
    case 0x8005D35Cu: goto label_8005D35C;
    case 0x8005D360u: goto label_8005D360;
    case 0x8005D364u: goto label_8005D364;
    case 0x8005D368u: goto label_8005D368;
    case 0x8005D36Cu: goto label_8005D36C;
    case 0x8005D370u: goto label_8005D370;
    case 0x8005D374u: goto label_8005D374;
    case 0x8005D378u: goto label_8005D378;
    case 0x8005D37Cu: goto label_8005D37C;
    case 0x8005D380u: goto label_8005D380;
    case 0x8005D384u: goto label_8005D384;
    case 0x8005D388u: goto label_8005D388;
    case 0x8005D38Cu: goto label_8005D38C;
    case 0x8005D390u: goto label_8005D390;
    case 0x8005D394u: goto label_8005D394;
    case 0x8005D398u: goto label_8005D398;
    case 0x8005D39Cu: goto label_8005D39C;
    case 0x8005D3A0u: goto label_8005D3A0;
    case 0x8005D3A4u: goto label_8005D3A4;
    case 0x8005D3A8u: goto label_8005D3A8;
    case 0x8005D3ACu: goto label_8005D3AC;
    case 0x8005D3B0u: goto label_8005D3B0;
    case 0x8005D3B4u: goto label_8005D3B4;
    case 0x8005D3B8u: goto label_8005D3B8;
    case 0x8005D3BCu: goto label_8005D3BC;
    case 0x8005D3C0u: goto label_8005D3C0;
    case 0x8005D3C4u: goto label_8005D3C4;
    case 0x8005D3C8u: goto label_8005D3C8;
    case 0x8005D3CCu: goto label_8005D3CC;
    case 0x8005D3D0u: goto label_8005D3D0;
    case 0x8005D3D4u: goto label_8005D3D4;
    case 0x8005D3D8u: goto label_8005D3D8;
    case 0x8005D3DCu: goto label_8005D3DC;
    case 0x8005D3E0u: goto label_8005D3E0;
    case 0x8005D3E4u: goto label_8005D3E4;
    case 0x8005D3E8u: goto label_8005D3E8;
    case 0x8005D3ECu: goto label_8005D3EC;
    case 0x8005D3F0u: goto label_8005D3F0;
    case 0x8005D3F4u: goto label_8005D3F4;
    case 0x8005D3F8u: goto label_8005D3F8;
    case 0x8005D3FCu: goto label_8005D3FC;
    case 0x8005D400u: goto label_8005D400;
    case 0x8005D404u: goto label_8005D404;
    case 0x8005D408u: goto label_8005D408;
    case 0x8005D40Cu: goto label_8005D40C;
    case 0x8005D410u: goto label_8005D410;
    case 0x8005D414u: goto label_8005D414;
    case 0x8005D418u: goto label_8005D418;
    case 0x8005D41Cu: goto label_8005D41C;
    case 0x8005D420u: goto label_8005D420;
    case 0x8005D424u: goto label_8005D424;
    case 0x8005D428u: goto label_8005D428;
    case 0x8005D42Cu: goto label_8005D42C;
    case 0x8005D430u: goto label_8005D430;
    case 0x8005D434u: goto label_8005D434;
    case 0x8005D438u: goto label_8005D438;
    case 0x8005D43Cu: goto label_8005D43C;
    case 0x8005D440u: goto label_8005D440;
    case 0x8005D444u: goto label_8005D444;
    case 0x8005D448u: goto label_8005D448;
    case 0x8005D44Cu: goto label_8005D44C;
    case 0x8005D450u: goto label_8005D450;
    case 0x8005D454u: goto label_8005D454;
    case 0x8005D458u: goto label_8005D458;
    case 0x8005D45Cu: goto label_8005D45C;
    case 0x8005D460u: goto label_8005D460;
    case 0x8005D464u: goto label_8005D464;
    case 0x8005D468u: goto label_8005D468;
    case 0x8005D46Cu: goto label_8005D46C;
    case 0x8005D470u: goto label_8005D470;
    case 0x8005D474u: goto label_8005D474;
    case 0x8005D478u: goto label_8005D478;
    case 0x8005D47Cu: goto label_8005D47C;
    case 0x8005D480u: goto label_8005D480;
    case 0x8005D484u: goto label_8005D484;
    case 0x8005D488u: goto label_8005D488;
    case 0x8005D48Cu: goto label_8005D48C;
    case 0x8005D490u: goto label_8005D490;
    case 0x8005D494u: goto label_8005D494;
    case 0x8005D498u: goto label_8005D498;
    case 0x8005D49Cu: goto label_8005D49C;
    case 0x8005D4A0u: goto label_8005D4A0;
    case 0x8005D4A4u: goto label_8005D4A4;
    case 0x8005D4A8u: goto label_8005D4A8;
    case 0x8005D4ACu: goto label_8005D4AC;
    case 0x8005D4B0u: goto label_8005D4B0;
    case 0x8005D4B4u: goto label_8005D4B4;
    case 0x8005D4B8u: goto label_8005D4B8;
    case 0x8005D4BCu: goto label_8005D4BC;
    case 0x8005D4C0u: goto label_8005D4C0;
    case 0x8005D4C4u: goto label_8005D4C4;
    case 0x8005D4C8u: goto label_8005D4C8;
    case 0x8005D4CCu: goto label_8005D4CC;
    case 0x8005D4D0u: goto label_8005D4D0;
    case 0x8005D4D4u: goto label_8005D4D4;
    case 0x8005D4D8u: goto label_8005D4D8;
    case 0x8005D4DCu: goto label_8005D4DC;
    case 0x8005D4E0u: goto label_8005D4E0;
    case 0x8005D4E4u: goto label_8005D4E4;
    case 0x8005D4E8u: goto label_8005D4E8;
    case 0x8005D4ECu: goto label_8005D4EC;
    case 0x8005D4F0u: goto label_8005D4F0;
    case 0x8005D4F4u: goto label_8005D4F4;
    case 0x8005D4F8u: goto label_8005D4F8;
    case 0x8005D4FCu: goto label_8005D4FC;
    case 0x8005D500u: goto label_8005D500;
    case 0x8005D504u: goto label_8005D504;
    case 0x8005D508u: goto label_8005D508;
    case 0x8005D50Cu: goto label_8005D50C;
    case 0x8005D510u: goto label_8005D510;
    case 0x8005D514u: goto label_8005D514;
    case 0x8005D518u: goto label_8005D518;
    case 0x8005D51Cu: goto label_8005D51C;
    case 0x8005D520u: goto label_8005D520;
    case 0x8005D524u: goto label_8005D524;
    case 0x8005D528u: goto label_8005D528;
    case 0x8005D52Cu: goto label_8005D52C;
    case 0x8005D530u: goto label_8005D530;
    case 0x8005D534u: goto label_8005D534;
    case 0x8005D538u: goto label_8005D538;
    case 0x8005D53Cu: goto label_8005D53C;
    case 0x8005D540u: goto label_8005D540;
    case 0x8005D544u: goto label_8005D544;
    case 0x8005D548u: goto label_8005D548;
    case 0x8005D54Cu: goto label_8005D54C;
    case 0x8005D550u: goto label_8005D550;
    case 0x8005D554u: goto label_8005D554;
    case 0x8005D558u: goto label_8005D558;
    case 0x8005D55Cu: goto label_8005D55C;
    case 0x8005D560u: goto label_8005D560;
    case 0x8005D564u: goto label_8005D564;
    case 0x8005D568u: goto label_8005D568;
    case 0x8005D56Cu: goto label_8005D56C;
    case 0x8005D570u: goto label_8005D570;
    case 0x8005D574u: goto label_8005D574;
    case 0x8005D578u: goto label_8005D578;
    case 0x8005D57Cu: goto label_8005D57C;
    case 0x8005D580u: goto label_8005D580;
    case 0x8005D584u: goto label_8005D584;
    case 0x8005D588u: goto label_8005D588;
    case 0x8005D58Cu: goto label_8005D58C;
    case 0x8005D590u: goto label_8005D590;
    case 0x8005D594u: goto label_8005D594;
    case 0x8005D598u: goto label_8005D598;
    case 0x8005D59Cu: goto label_8005D59C;
    case 0x8005D5A0u: goto label_8005D5A0;
    case 0x8005D5A4u: goto label_8005D5A4;
    case 0x8005D5A8u: goto label_8005D5A8;
    case 0x8005D5ACu: goto label_8005D5AC;
    case 0x8005D5B0u: goto label_8005D5B0;
    case 0x8005D5B4u: goto label_8005D5B4;
    case 0x8005D5B8u: goto label_8005D5B8;
    case 0x8005D5BCu: goto label_8005D5BC;
    case 0x8005D5C0u: goto label_8005D5C0;
    case 0x8005D5C4u: goto label_8005D5C4;
    case 0x8005D5C8u: goto label_8005D5C8;
    case 0x8005D5CCu: goto label_8005D5CC;
    case 0x8005D5D0u: goto label_8005D5D0;
    case 0x8005D5D4u: goto label_8005D5D4;
    case 0x8005D5D8u: goto label_8005D5D8;
    case 0x8005D5DCu: goto label_8005D5DC;
    default: return;
    }
label_800595E0:
    ctx->pc = 0x800595E0u;
    ctx->downcount -= 1;
    // 800595E0: bl      0x80059D0C
    {
            ctx->lr = 0x800595E4u;
            goto label_80059D0C;
    }

label_800595E4:
    ctx->pc = 0x800595E4u;
    ctx->downcount -= 3;
    // 800595E4: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_800595E8:
    ctx->pc = 0x800595E8u;
    // 800595E8: cmplwi  r0, 0x0067
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0067u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800595EC:
    ctx->pc = 0x800595ECu;
    // 800595EC: bc    4, 2, 0x80059754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80059754;
        }
    }

label_800595F0:
    ctx->pc = 0x800595F0u;
    ctx->downcount -= 3;
    // 800595F0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800595F4:
    ctx->pc = 0x800595F4u;
    // 800595F4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_800595F8:
    ctx->pc = 0x800595F8u;
    // 800595F8: bl      0x80059D0C
    {
            ctx->lr = 0x800595FCu;
            goto label_80059D0C;
    }

label_800595FC:
    ctx->pc = 0x800595FCu;
    ctx->downcount -= 3;
    // 800595FC: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80059600:
    ctx->pc = 0x80059600u;
    // 80059600: cmplwi  r0, 0x0053
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0053u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80059604:
    ctx->pc = 0x80059604u;
    // 80059604: bc    4, 2, 0x80059754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80059754;
        }
    }

label_80059608:
    ctx->pc = 0x80059608u;
    ctx->downcount -= 3;
    // 80059608: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8005960C:
    ctx->pc = 0x8005960Cu;
    // 8005960C: li      r4, 26
    ctx->gpr[4] = (u32)(s32)(26);

label_80059610:
    ctx->pc = 0x80059610u;
    // 80059610: bl      0x80059D0C
    {
            ctx->lr = 0x80059614u;
            goto label_80059D0C;
    }

label_80059614:
    ctx->pc = 0x80059614u;
    ctx->downcount -= 6;
    // 80059614: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80059618:
    ctx->pc = 0x80059618u;
    // 80059618: addi    r0, r3, 27
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(27);

label_8005961C:
    ctx->pc = 0x8005961Cu;
    // 8005961C: stw     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059620:
    ctx->pc = 0x80059620u;
    // 80059620: lwz     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059624:
    ctx->pc = 0x80059624u;
    // 80059624: cmpw    r30, r0
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

label_80059628:
    ctx->pc = 0x80059628u;
    // 80059628: bc    12, 0, 0x800597FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800597FC;
        }
    }

label_8005962C:
    ctx->pc = 0x8005962Cu;
    ctx->downcount -= 3;
    // 8005962C: lwz     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059630:
    ctx->pc = 0x80059630u;
    // 80059630: cmpwi   r0, 0
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

label_80059634:
    ctx->pc = 0x80059634u;
    // 80059634: bc    4, 2, 0x80059670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80059670;
        }
    }

label_80059638:
    ctx->pc = 0x80059638u;
    ctx->downcount -= 2;
    // 80059638: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8005963C:
    ctx->pc = 0x8005963Cu;
    // 8005963C: b       0x80059660
    {
            goto label_80059660;
    }

label_80059640:
    ctx->downcount -= 3;
    // 80059640: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059644:
    // 80059644: addi    r4, r27, 27
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(27);

label_80059648:
    // 80059648: bl      0x80059D0C
    {
            ctx->lr = 0x8005964Cu;
            goto label_80059D0C;
    }

label_8005964C:
    ctx->pc = 0x8005964Cu;
    ctx->downcount -= 5;
    // 8005964C: lwz     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059650:
    // 80059650: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80059654:
    // 80059654: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_80059658:
    // 80059658: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005965C:
    ctx->pc = 0x8005965Cu;
    // 8005965C: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059660:
    ctx->pc = 0x80059660u;
    ctx->downcount -= 4;
    // 80059660: lwz     r3, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059664:
    // 80059664: addi    r0, r3, -27
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-27);

label_80059668:
    // 80059668: cmpw    r27, r0
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

label_8005966C:
    // 8005966C: bc    12, 0, 0x80059640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059640u;
                return;
            }
            goto label_80059640;
        }
    }

label_80059670:
    ctx->pc = 0x80059670u;
    ctx->downcount -= 5;
    // 80059670: lwz     r3, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059674:
    ctx->pc = 0x80059674u;
    // 80059674: lwz     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059678:
    ctx->pc = 0x80059678u;
    // 80059678: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005967C:
    ctx->pc = 0x8005967Cu;
    // 8005967C: cmpw    r0, r30
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80059680:
    ctx->pc = 0x80059680u;
    // 80059680: bc    12, 1, 0x800597FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800597FC;
        }
    }

label_80059684:
    ctx->pc = 0x80059684u;
    ctx->downcount -= 3;
    // 80059684: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059688:
    ctx->pc = 0x80059688u;
    // 80059688: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_8005968C:
    ctx->pc = 0x8005968Cu;
    // 8005968C: bl      0x80059C44
    {
            ctx->lr = 0x80059690u;
            goto label_80059C44;
    }

label_80059690:
    ctx->pc = 0x80059690u;
    ctx->downcount -= 6;
    // 80059690: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059694:
    ctx->pc = 0x80059694u;
    // 80059694: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059698:
    ctx->pc = 0x80059698u;
    // 80059698: or   r27, r0, r0
    {
        ctx->gpr[27] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8005969C:
    ctx->pc = 0x8005969Cu;
    // 8005969C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800596A0:
    ctx->pc = 0x800596A0u;
    // 800596A0: li      r5, 22
    ctx->gpr[5] = (u32)(s32)(22);

label_800596A4:
    ctx->pc = 0x800596A4u;
    // 800596A4: bl      0x80059D58
    {
            ctx->lr = 0x800596A8u;
            goto label_80059D58;
    }

label_800596A8:
    ctx->pc = 0x800596A8u;
    ctx->downcount -= 4;
    // 800596A8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800596AC:
    ctx->pc = 0x800596ACu;
    // 800596AC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_800596B0:
    ctx->pc = 0x800596B0u;
    // 800596B0: li      r5, 22
    ctx->gpr[5] = (u32)(s32)(22);

label_800596B4:
    ctx->pc = 0x800596B4u;
    // 800596B4: bl      0x80059D58
    {
            ctx->lr = 0x800596B8u;
            goto label_80059D58;
    }

label_800596B8:
    ctx->pc = 0x800596B8u;
    ctx->downcount -= 2;
    // 800596B8: cmplwi  r29, 0x0000
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

label_800596BC:
    ctx->pc = 0x800596BCu;
    // 800596BC: bc    12, 2, 0x800596FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800596FC;
        }
    }

label_800596C0:
    ctx->pc = 0x800596C0u;
    ctx->downcount -= 4;
    // 800596C0: lwz     r5, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800596C4:
    ctx->pc = 0x800596C4u;
    // 800596C4: addi    r3, r28, 8
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(8);

label_800596C8:
    ctx->pc = 0x800596C8u;
    // 800596C8: addi    r4, r28, 4
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(4);

label_800596CC:
    ctx->pc = 0x800596CCu;
    // 800596CC: bl      0x8005A084
    {
            ctx->lr = 0x800596D0u;
            goto label_8005A084;
    }

label_800596D0:
    ctx->pc = 0x800596D0u;
    ctx->downcount -= 7;
    // 800596D0: stw     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800596D4:
    ctx->pc = 0x800596D4u;
    // 800596D4: addi    r3, r28, 8
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(8);

label_800596D8:
    ctx->pc = 0x800596D8u;
    // 800596D8: addi    r4, r28, 4
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(4);

label_800596DC:
    ctx->pc = 0x800596DCu;
    // 800596DC: lwz     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800596E0:
    ctx->pc = 0x800596E0u;
    // 800596E0: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800596E4:
    ctx->pc = 0x800596E4u;
    // 800596E4: lwz     r5, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800596E8:
    ctx->pc = 0x800596E8u;
    // 800596E8: bl      0x8005A084
    {
            ctx->lr = 0x800596ECu;
            goto label_8005A084;
    }

label_800596EC:
    ctx->pc = 0x800596ECu;
    ctx->downcount -= 4;
    // 800596EC: stw     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800596F0:
    ctx->pc = 0x800596F0u;
    // 800596F0: lwz     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800596F4:
    ctx->pc = 0x800596F4u;
    // 800596F4: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800596F8:
    ctx->pc = 0x800596F8u;
    // 800596F8: b       0x80059728
    {
            goto label_80059728;
    }

label_800596FC:
    ctx->pc = 0x800596FCu;
    ctx->downcount -= 5;
    // 800596FC: lwz     r4, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059700:
    ctx->pc = 0x80059700u;
    // 80059700: lwz     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059704:
    ctx->pc = 0x80059704u;
    // 80059704: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059708:
    ctx->pc = 0x80059708u;
    // 80059708: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8005970C:
    ctx->pc = 0x8005970Cu;
    // 8005970C: bl      0x80059F64
    {
            ctx->lr = 0x80059710u;
            goto label_80059F64;
    }

label_80059710:
    ctx->pc = 0x80059710u;
    ctx->downcount -= 4;
    // 80059710: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80059714:
    ctx->pc = 0x80059714u;
    // 80059714: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059718:
    ctx->pc = 0x80059718u;
    // 80059718: cmplwi  r0, 0x0000
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

label_8005971C:
    ctx->pc = 0x8005971Cu;
    // 8005971C: bc    4, 2, 0x80059728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80059728;
        }
    }

label_80059720:
    ctx->pc = 0x80059720u;
    ctx->downcount -= 2;
    // 80059720: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80059724:
    ctx->pc = 0x80059724u;
    // 80059724: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059728:
    ctx->pc = 0x80059728u;
    ctx->downcount -= 11;
    // 80059728: lwz     r4, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005972C:
    ctx->pc = 0x8005972Cu;
    // 8005972C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80059730:
    ctx->pc = 0x80059730u;
    // 80059730: lwz     r3, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059734:
    ctx->pc = 0x80059734u;
    // 80059734: stw     r0, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059738:
    ctx->pc = 0x80059738u;
    // 80059738: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005973C:
    ctx->pc = 0x8005973Cu;
    // 8005973C: stw     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059740:
    ctx->pc = 0x80059740u;
    // 80059740: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059744:
    ctx->pc = 0x80059744u;
    // 80059744: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059748:
    ctx->pc = 0x80059748u;
    // 80059748: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005974C:
    ctx->pc = 0x8005974Cu;
    // 8005974C: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059750:
    ctx->pc = 0x80059750u;
    // 80059750: b       0x80059800
    {
            goto label_80059800;
    }

label_80059754:
    ctx->pc = 0x80059754u;
    ctx->downcount -= 6;
    // 80059754: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80059758:
    ctx->pc = 0x80059758u;
    // 80059758: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8005975C:
    ctx->pc = 0x8005975Cu;
    // 8005975C: stw     r0, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059760:
    ctx->pc = 0x80059760u;
    // 80059760: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059764:
    ctx->pc = 0x80059764u;
    // 80059764: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059768:
    ctx->pc = 0x80059768u;
    // 80059768: bl      0x80059F64
    {
            ctx->lr = 0x8005976Cu;
            goto label_80059F64;
    }

label_8005976C:
    ctx->pc = 0x8005976Cu;
    ctx->downcount -= 3;
    // 8005976C: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80059770:
    ctx->pc = 0x80059770u;
    // 80059770: li      r31, -1
    ctx->gpr[31] = (u32)(s32)(-1);

label_80059774:
    ctx->pc = 0x80059774u;
    // 80059774: b       0x800597D0
    {
            goto label_800597D0;
    }

label_80059778:
    ctx->pc = 0x80059778u;
    ctx->downcount -= 8;
    // 80059778: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005977C:
    // 8005977C: li      r4, 79
    ctx->gpr[4] = (u32)(s32)(79);

label_80059780:
    ctx->pc = 0x80059780u;
    // 80059780: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059784:
    ctx->pc = 0x80059784u;
    // 80059784: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059788:
    ctx->pc = 0x80059788u;
    // 80059788: lwz     r5, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005978C:
    // 8005978C: add   r27, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_80059790:
    // 80059790: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80059794:
    // 80059794: bl      0x800121B4
    {
            ctx->lr = 0x80059798u;
            ctx->pc = 0x800121B4u;
            return;
    }

label_80059798:
    ctx->downcount -= 2;
    // 80059798: cmplwi  r3, 0x0000
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

label_8005979C:
    // 8005979C: bc    12, 2, 0x800597BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800597BC;
        }
    }

label_800597A0:
    ctx->downcount -= 4;
    // 800597A0: subf   r27, r27, r3
    {
        u32 a = ~ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[27] = res;
    }

label_800597A4:
    ctx->pc = 0x800597A4u;
    // 800597A4: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800597A8:
    // 800597A8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_800597AC:
    // 800597AC: bl      0x80059F64
    {
            ctx->lr = 0x800597B0u;
            goto label_80059F64;
    }

label_800597B0:
    ctx->pc = 0x800597B0u;
    ctx->downcount -= 3;
    // 800597B0: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800597B4:
    // 800597B4: subf   r31, r27, r31
    {
        u32 a = ~ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[31] = res;
    }

label_800597B8:
    // 800597B8: b       0x800597DC
    {
            goto label_800597DC;
    }

label_800597BC:
    ctx->pc = 0x800597BCu;
    ctx->downcount -= 4;
    // 800597BC: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800597C0:
    ctx->pc = 0x800597C0u;
    // 800597C0: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800597C4:
    // 800597C4: subf   r31, r4, r31
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[31] = res;
    }

label_800597C8:
    // 800597C8: bl      0x80059F64
    {
            ctx->lr = 0x800597CCu;
            goto label_80059F64;
    }

label_800597CC:
    ctx->pc = 0x800597CCu;
    ctx->downcount -= 1;
    // 800597CC: stw     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800597D0:
    ctx->pc = 0x800597D0u;
    ctx->downcount -= 3;
    // 800597D0: lwz     r5, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800597D4:
    // 800597D4: cmplwi  r5, 0x0000
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

label_800597D8:
    // 800597D8: bc    4, 2, 0x80059778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059778u;
                return;
            }
            goto label_80059778;
        }
    }

label_800597DC:
    ctx->pc = 0x800597DCu;
    ctx->downcount -= 3;
    // 800597DC: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800597E0:
    ctx->pc = 0x800597E0u;
    // 800597E0: cmplwi  r0, 0x0000
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

label_800597E4:
    ctx->pc = 0x800597E4u;
    // 800597E4: bc    4, 2, 0x800597F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800597F0;
        }
    }

label_800597E8:
    ctx->pc = 0x800597E8u;
    ctx->downcount -= 2;
    // 800597E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800597EC:
    ctx->pc = 0x800597ECu;
    // 800597EC: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800597F0:
    ctx->pc = 0x800597F0u;
    ctx->downcount -= 3;
    // 800597F0: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800597F4:
    ctx->pc = 0x800597F4u;
    // 800597F4: add   r0, r0, r31
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800597F8:
    ctx->pc = 0x800597F8u;
    // 800597F8: stw     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800597FC:
    ctx->pc = 0x800597FCu;
    ctx->downcount -= 1;
    // 800597FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80059800:
    ctx->pc = 0x80059800u;
    ctx->downcount -= 16;
    // 80059800: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80059804:
    ctx->pc = 0x80059804u;
    // 80059804: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059808:
    ctx->pc = 0x80059808u;
    // 80059808: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005980C:
    ctx->pc = 0x8005980Cu;
    // 8005980C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80059810:
    ctx->pc = 0x80059810u;
    // 80059810: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059814:
    ctx->pc = 0x80059814u;
    ctx->downcount -= 3;
    // 80059814: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80059818:
    ctx->pc = 0x80059818u;
    // 80059818: cmplwi  r7, 0x0000
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

label_8005981C:
    ctx->pc = 0x8005981Cu;
    // 8005981C: bc    4, 2, 0x80059828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80059828;
        }
    }

label_80059820:
    ctx->pc = 0x80059820u;
    ctx->downcount -= 2;
    // 80059820: li      r3, -14
    ctx->gpr[3] = (u32)(s32)(-14);

label_80059824:
    ctx->pc = 0x80059824u;
    // 80059824: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059828:
    ctx->pc = 0x80059828u;
    ctx->downcount -= 8;
    // 80059828: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005982C:
    ctx->pc = 0x8005982Cu;
    // 8005982C: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80059830:
    ctx->pc = 0x80059830u;
    // 80059830: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059834:
    ctx->pc = 0x80059834u;
    // 80059834: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80059838:
    ctx->pc = 0x80059838u;
    // 80059838: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005983C:
    ctx->pc = 0x8005983Cu;
    // 8005983C: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80059840:
    ctx->pc = 0x80059840u;
    // 80059840: cmpw    r0, r4
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

label_80059844:
    ctx->pc = 0x80059844u;
    // 80059844: bc    4, 0, 0x80059850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80059850;
        }
    }

label_80059848:
    ctx->pc = 0x80059848u;
    ctx->downcount -= 2;
    // 80059848: li      r3, -14
    ctx->gpr[3] = (u32)(s32)(-14);

label_8005984C:
    ctx->pc = 0x8005984Cu;
    // 8005984C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059850:
    ctx->pc = 0x80059850u;
    ctx->downcount -= 7;
    // 80059850: add   r0, r6, r4
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80059854:
    ctx->pc = 0x80059854u;
    // 80059854: stw     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059858:
    ctx->pc = 0x80059858u;
    // 80059858: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005985C:
    ctx->pc = 0x8005985Cu;
    // 8005985C: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80059860:
    ctx->pc = 0x80059860u;
    // 80059860: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059864:
    ctx->pc = 0x80059864u;
    // 80059864: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80059868:
    ctx->pc = 0x80059868u;
    // 80059868: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005986C:
    ctx->pc = 0x8005986Cu;
    ctx->downcount -= 8;
    // 8005986C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059870:
    ctx->pc = 0x80059870u;
    // 80059870: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059874:
    ctx->pc = 0x80059874u;
    // 80059874: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059878:
    ctx->pc = 0x80059878u;
    // 80059878: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8005987C:
    ctx->pc = 0x8005987Cu;
    // 8005987C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059880:
    ctx->pc = 0x80059880u;
    // 80059880: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059884:
    ctx->pc = 0x80059884u;
    // 80059884: cmplwi  r3, 0x0000
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

label_80059888:
    ctx->pc = 0x80059888u;
    // 80059888: bc    4, 2, 0x800598AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800598AC;
        }
    }

label_8005988C:
    ctx->pc = 0x8005988Cu;
    ctx->downcount -= 2;
    // 8005988C: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059890:
    ctx->pc = 0x80059890u;
    // 80059890: bl      0x8005A3B8
    {
            ctx->lr = 0x80059894u;
            goto label_8005A3B8;
    }

label_80059894:
    ctx->pc = 0x80059894u;
    ctx->downcount -= 6;
    // 80059894: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80059898:
    ctx->pc = 0x80059898u;
    // 80059898: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005989C:
    ctx->pc = 0x8005989Cu;
    // 8005989C: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800598A0:
    ctx->pc = 0x800598A0u;
    // 800598A0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800598A4:
    ctx->pc = 0x800598A4u;
    // 800598A4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800598A8:
    ctx->pc = 0x800598A8u;
    // 800598A8: b       0x80059920
    {
            goto label_80059920;
    }

label_800598AC:
    ctx->pc = 0x800598ACu;
    ctx->downcount -= 8;
    // 800598AC: lwz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800598B0:
    ctx->pc = 0x800598B0u;
    // 800598B0: lwz     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800598B4:
    ctx->pc = 0x800598B4u;
    // 800598B4: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800598B8:
    ctx->pc = 0x800598B8u;
    // 800598B8: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800598BC:
    ctx->pc = 0x800598BCu;
    // 800598BC: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800598C0:
    ctx->pc = 0x800598C0u;
    // 800598C0: subf   r0, r7, r0
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_800598C4:
    ctx->pc = 0x800598C4u;
    // 800598C4: cmpw    r0, r4
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

label_800598C8:
    ctx->pc = 0x800598C8u;
    // 800598C8: bc    12, 0, 0x800598DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800598DC;
        }
    }

label_800598CC:
    ctx->pc = 0x800598CCu;
    ctx->downcount -= 4;
    // 800598CC: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800598D0:
    ctx->pc = 0x800598D0u;
    // 800598D0: add   r3, r5, r7
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800598D4:
    ctx->pc = 0x800598D4u;
    // 800598D4: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800598D8:
    ctx->pc = 0x800598D8u;
    // 800598D8: b       0x80059920
    {
            goto label_80059920;
    }

label_800598DC:
    ctx->pc = 0x800598DCu;
    ctx->downcount -= 2;
    // 800598DC: cmpwi   r5, 0
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

label_800598E0:
    ctx->pc = 0x800598E0u;
    // 800598E0: bc    4, 2, 0x80059900
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80059900;
        }
    }

label_800598E4:
    ctx->pc = 0x800598E4u;
    ctx->downcount -= 1;
    // 800598E4: bl      0x8005A360
    {
            ctx->lr = 0x800598E8u;
            goto label_8005A360;
    }

label_800598E8:
    ctx->pc = 0x800598E8u;
    ctx->downcount -= 6;
    // 800598E8: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800598EC:
    ctx->pc = 0x800598ECu;
    // 800598EC: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800598F0:
    ctx->pc = 0x800598F0u;
    // 800598F0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800598F4:
    ctx->pc = 0x800598F4u;
    // 800598F4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800598F8:
    ctx->pc = 0x800598F8u;
    // 800598F8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_800598FC:
    ctx->pc = 0x800598FCu;
    // 800598FC: b       0x80059920
    {
            goto label_80059920;
    }

label_80059900:
    ctx->pc = 0x80059900u;
    ctx->downcount -= 2;
    // 80059900: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059904:
    ctx->pc = 0x80059904u;
    // 80059904: bl      0x8005A3B8
    {
            ctx->lr = 0x80059908u;
            goto label_8005A3B8;
    }

label_80059908:
    ctx->pc = 0x80059908u;
    ctx->downcount -= 6;
    // 80059908: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005990C:
    ctx->pc = 0x8005990Cu;
    // 8005990C: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80059910:
    ctx->pc = 0x80059910u;
    // 80059910: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80059914:
    ctx->pc = 0x80059914u;
    // 80059914: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059918:
    ctx->pc = 0x80059918u;
    // 80059918: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005991C:
    ctx->pc = 0x8005991Cu;
    // 8005991C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059920:
    ctx->pc = 0x80059920u;
    ctx->downcount -= 6;
    // 80059920: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059924:
    ctx->pc = 0x80059924u;
    // 80059924: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80059928:
    ctx->pc = 0x80059928u;
    // 80059928: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005992C:
    ctx->pc = 0x8005992Cu;
    // 8005992C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80059930:
    ctx->pc = 0x80059930u;
    // 80059930: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059934:
    ctx->pc = 0x80059934u;
    ctx->downcount -= 6;
    // 80059934: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059938:
    ctx->pc = 0x80059938u;
    // 80059938: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005993C:
    ctx->pc = 0x8005993Cu;
    // 8005993C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059940:
    ctx->pc = 0x80059940u;
    // 80059940: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80059944:
    ctx->pc = 0x80059944u;
    // 80059944: or.   r31, r3, r3
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

label_80059948:
    ctx->pc = 0x80059948u;
    // 80059948: bc    12, 2, 0x8005997C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005997C;
        }
    }

label_8005994C:
    ctx->pc = 0x8005994Cu;
    ctx->downcount -= 1;
    // 8005994C: bl      0x80059510
    {
            ctx->lr = 0x80059950u;
            ctx->pc = 0x80059510u;
            return;
    }

label_80059950:
    ctx->pc = 0x80059950u;
    ctx->downcount -= 2;
    // 80059950: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059954:
    ctx->pc = 0x80059954u;
    // 80059954: bl      0x8005A538
    {
            ctx->lr = 0x80059958u;
            goto label_8005A538;
    }

label_80059958:
    ctx->pc = 0x80059958u;
    ctx->downcount -= 4;
    // 80059958: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005995C:
    ctx->pc = 0x8005995Cu;
    // 8005995C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80059960:
    ctx->pc = 0x80059960u;
    // 80059960: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_80059964:
    ctx->pc = 0x80059964u;
    // 80059964: bl      0x800050B4
    {
            ctx->lr = 0x80059968u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80059968:
    ctx->pc = 0x80059968u;
    ctx->downcount -= 5;
    // 80059968: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005996C:
    ctx->pc = 0x8005996Cu;
    // 8005996C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80059970:
    ctx->pc = 0x80059970u;
    // 80059970: addi    r4, r4, 15592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15592);

label_80059974:
    ctx->pc = 0x80059974u;
    // 80059974: li      r5, 610
    ctx->gpr[5] = (u32)(s32)(610);

label_80059978:
    ctx->pc = 0x80059978u;
    // 80059978: bl      0x80055E80
    {
            ctx->lr = 0x8005997Cu;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005997C:
    ctx->pc = 0x8005997Cu;
    ctx->downcount -= 7;
    // 8005997C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059980:
    ctx->pc = 0x80059980u;
    // 80059980: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80059984:
    ctx->pc = 0x80059984u;
    // 80059984: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80059988:
    ctx->pc = 0x80059988u;
    // 80059988: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005998C:
    ctx->pc = 0x8005998Cu;
    // 8005998C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80059990:
    ctx->pc = 0x80059990u;
    // 80059990: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059994:
    ctx->pc = 0x80059994u;
    ctx->downcount -= 11;
    // 80059994: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059998:
    ctx->pc = 0x80059998u;
    // 80059998: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005999C:
    ctx->pc = 0x8005999Cu;
    // 8005999C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_800599A0:
    ctx->pc = 0x800599A0u;
    // 800599A0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_800599A4:
    ctx->pc = 0x800599A4u;
    // 800599A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800599A8:
    ctx->pc = 0x800599A8u;
    // 800599A8: addi    r5, r4, 15592
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15592);

label_800599AC:
    ctx->pc = 0x800599ACu;
    // 800599AC: li      r4, 28
    ctx->gpr[4] = (u32)(s32)(28);

label_800599B0:
    ctx->pc = 0x800599B0u;
    // 800599B0: li      r6, 597
    ctx->gpr[6] = (u32)(s32)(597);

label_800599B4:
    ctx->pc = 0x800599B4u;
    // 800599B4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800599B8:
    ctx->pc = 0x800599B8u;
    // 800599B8: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_800599BC:
    ctx->pc = 0x800599BCu;
    // 800599BC: bl      0x80055D58
    {
            ctx->lr = 0x800599C0u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_800599C0:
    ctx->pc = 0x800599C0u;
    ctx->downcount -= 4;
    // 800599C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800599C4:
    ctx->pc = 0x800599C4u;
    // 800599C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800599C8:
    ctx->pc = 0x800599C8u;
    // 800599C8: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_800599CC:
    ctx->pc = 0x800599CCu;
    // 800599CC: bl      0x800050B4
    {
            ctx->lr = 0x800599D0u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_800599D0:
    ctx->pc = 0x800599D0u;
    ctx->downcount -= 1;
    // 800599D0: bl      0x8005A638
    {
            ctx->lr = 0x800599D4u;
            goto label_8005A638;
    }

label_800599D4:
    ctx->pc = 0x800599D4u;
    ctx->downcount -= 8;
    // 800599D4: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800599D8:
    ctx->pc = 0x800599D8u;
    // 800599D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800599DC:
    ctx->pc = 0x800599DCu;
    // 800599DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800599E0:
    ctx->pc = 0x800599E0u;
    // 800599E0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800599E4:
    ctx->pc = 0x800599E4u;
    // 800599E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800599E8:
    ctx->pc = 0x800599E8u;
    // 800599E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800599EC:
    ctx->pc = 0x800599ECu;
    // 800599EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_800599F0:
    ctx->pc = 0x800599F0u;
    ctx->downcount -= 7;
    // 800599F0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800599F4:
    ctx->pc = 0x800599F4u;
    // 800599F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800599F8:
    ctx->pc = 0x800599F8u;
    // 800599F8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800599FC:
    ctx->pc = 0x800599FCu;
    // 800599FC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059A00:
    ctx->pc = 0x80059A00u;
    // 80059A00: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059A04:
    ctx->pc = 0x80059A04u;
    // 80059A04: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059A08:
    ctx->pc = 0x80059A08u;
    // 80059A08: bl      0x80059DC4
    {
            ctx->lr = 0x80059A0Cu;
            goto label_80059DC4;
    }

label_80059A0C:
    ctx->pc = 0x80059A0Cu;
    ctx->downcount -= 3;
    // 80059A0C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059A10:
    ctx->pc = 0x80059A10u;
    // 80059A10: li      r4, 18
    ctx->gpr[4] = (u32)(s32)(18);

label_80059A14:
    ctx->pc = 0x80059A14u;
    // 80059A14: bl      0x80059C44
    {
            ctx->lr = 0x80059A18u;
            goto label_80059C44;
    }

label_80059A18:
    ctx->pc = 0x80059A18u;
    ctx->downcount -= 5;
    // 80059A18: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059A1C:
    ctx->pc = 0x80059A1Cu;
    // 80059A1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059A20:
    ctx->pc = 0x80059A20u;
    // 80059A20: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80059A24:
    ctx->pc = 0x80059A24u;
    // 80059A24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059A28:
    ctx->pc = 0x80059A28u;
    ctx->downcount -= 7;
    // 80059A28: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059A2C:
    ctx->pc = 0x80059A2Cu;
    // 80059A2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059A30:
    ctx->pc = 0x80059A30u;
    // 80059A30: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059A34:
    ctx->pc = 0x80059A34u;
    // 80059A34: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059A38:
    ctx->pc = 0x80059A38u;
    // 80059A38: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059A3C:
    ctx->pc = 0x80059A3Cu;
    // 80059A3C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059A40:
    ctx->pc = 0x80059A40u;
    // 80059A40: bl      0x80059DC4
    {
            ctx->lr = 0x80059A44u;
            goto label_80059DC4;
    }

label_80059A44:
    ctx->pc = 0x80059A44u;
    ctx->downcount -= 3;
    // 80059A44: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059A48:
    ctx->pc = 0x80059A48u;
    // 80059A48: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_80059A4C:
    ctx->pc = 0x80059A4Cu;
    // 80059A4C: bl      0x80059C44
    {
            ctx->lr = 0x80059A50u;
            goto label_80059C44;
    }

label_80059A50:
    ctx->pc = 0x80059A50u;
    ctx->downcount -= 5;
    // 80059A50: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059A54:
    ctx->pc = 0x80059A54u;
    // 80059A54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059A58:
    ctx->pc = 0x80059A58u;
    // 80059A58: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80059A5C:
    ctx->pc = 0x80059A5Cu;
    // 80059A5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059A60:
    ctx->pc = 0x80059A60u;
    ctx->downcount -= 7;
    // 80059A60: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059A64:
    ctx->pc = 0x80059A64u;
    // 80059A64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059A68:
    ctx->pc = 0x80059A68u;
    // 80059A68: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059A6C:
    ctx->pc = 0x80059A6Cu;
    // 80059A6C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059A70:
    ctx->pc = 0x80059A70u;
    // 80059A70: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059A74:
    ctx->pc = 0x80059A74u;
    // 80059A74: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059A78:
    ctx->pc = 0x80059A78u;
    // 80059A78: bl      0x80059DC4
    {
            ctx->lr = 0x80059A7Cu;
            goto label_80059DC4;
    }

label_80059A7C:
    ctx->pc = 0x80059A7Cu;
    ctx->downcount -= 3;
    // 80059A7C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059A80:
    ctx->pc = 0x80059A80u;
    // 80059A80: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80059A84:
    ctx->pc = 0x80059A84u;
    // 80059A84: bl      0x80059B88
    {
            ctx->lr = 0x80059A88u;
            goto label_80059B88;
    }

label_80059A88:
    ctx->pc = 0x80059A88u;
    ctx->downcount -= 5;
    // 80059A88: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059A8C:
    ctx->pc = 0x80059A8Cu;
    // 80059A8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059A90:
    ctx->pc = 0x80059A90u;
    // 80059A90: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80059A94:
    ctx->pc = 0x80059A94u;
    // 80059A94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059A98:
    ctx->pc = 0x80059A98u;
    ctx->downcount -= 7;
    // 80059A98: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059A9C:
    ctx->pc = 0x80059A9Cu;
    // 80059A9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059AA0:
    ctx->pc = 0x80059AA0u;
    // 80059AA0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059AA4:
    ctx->pc = 0x80059AA4u;
    // 80059AA4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059AA8:
    ctx->pc = 0x80059AA8u;
    // 80059AA8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059AAC:
    ctx->pc = 0x80059AACu;
    // 80059AAC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059AB0:
    ctx->pc = 0x80059AB0u;
    // 80059AB0: bl      0x80059DC4
    {
            ctx->lr = 0x80059AB4u;
            goto label_80059DC4;
    }

label_80059AB4:
    ctx->pc = 0x80059AB4u;
    ctx->downcount -= 3;
    // 80059AB4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059AB8:
    ctx->pc = 0x80059AB8u;
    // 80059AB8: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80059ABC:
    ctx->pc = 0x80059ABCu;
    // 80059ABC: bl      0x80059D0C
    {
            ctx->lr = 0x80059AC0u;
            goto label_80059D0C;
    }

label_80059AC0:
    ctx->pc = 0x80059AC0u;
    ctx->downcount -= 6;
    // 80059AC0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059AC4:
    ctx->pc = 0x80059AC4u;
    // 80059AC4: rlwinm r3, r3, 0, 29, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000004u;
    }

label_80059AC8:
    ctx->pc = 0x80059AC8u;
    // 80059AC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059ACC:
    ctx->pc = 0x80059ACCu;
    // 80059ACC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80059AD0:
    ctx->pc = 0x80059AD0u;
    // 80059AD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059AD4:
    ctx->pc = 0x80059AD4u;
    ctx->downcount -= 7;
    // 80059AD4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059AD8:
    ctx->pc = 0x80059AD8u;
    // 80059AD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059ADC:
    ctx->pc = 0x80059ADCu;
    // 80059ADC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059AE0:
    ctx->pc = 0x80059AE0u;
    // 80059AE0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059AE4:
    ctx->pc = 0x80059AE4u;
    // 80059AE4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059AE8:
    ctx->pc = 0x80059AE8u;
    // 80059AE8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059AEC:
    ctx->pc = 0x80059AECu;
    // 80059AEC: bl      0x80059DC4
    {
            ctx->lr = 0x80059AF0u;
            goto label_80059DC4;
    }

label_80059AF0:
    ctx->pc = 0x80059AF0u;
    ctx->downcount -= 3;
    // 80059AF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059AF4:
    ctx->pc = 0x80059AF4u;
    // 80059AF4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80059AF8:
    ctx->pc = 0x80059AF8u;
    // 80059AF8: bl      0x80059D0C
    {
            ctx->lr = 0x80059AFCu;
            goto label_80059D0C;
    }

label_80059AFC:
    ctx->pc = 0x80059AFCu;
    ctx->downcount -= 6;
    // 80059AFC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059B00:
    ctx->pc = 0x80059B00u;
    // 80059B00: rlwinm r3, r3, 0, 30, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000002u;
    }

label_80059B04:
    ctx->pc = 0x80059B04u;
    // 80059B04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059B08:
    ctx->pc = 0x80059B08u;
    // 80059B08: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80059B0C:
    ctx->pc = 0x80059B0Cu;
    // 80059B0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059B10:
    ctx->pc = 0x80059B10u;
    ctx->downcount -= 7;
    // 80059B10: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059B14:
    ctx->pc = 0x80059B14u;
    // 80059B14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059B18:
    ctx->pc = 0x80059B18u;
    // 80059B18: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059B1C:
    ctx->pc = 0x80059B1Cu;
    // 80059B1C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059B20:
    ctx->pc = 0x80059B20u;
    // 80059B20: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059B24:
    ctx->pc = 0x80059B24u;
    // 80059B24: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059B28:
    ctx->pc = 0x80059B28u;
    // 80059B28: bl      0x80059DC4
    {
            ctx->lr = 0x80059B2Cu;
            goto label_80059DC4;
    }

label_80059B2C:
    ctx->pc = 0x80059B2Cu;
    ctx->downcount -= 3;
    // 80059B2C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059B30:
    ctx->pc = 0x80059B30u;
    // 80059B30: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80059B34:
    ctx->pc = 0x80059B34u;
    // 80059B34: bl      0x80059D0C
    {
            ctx->lr = 0x80059B38u;
            goto label_80059D0C;
    }

label_80059B38:
    ctx->pc = 0x80059B38u;
    ctx->downcount -= 6;
    // 80059B38: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059B3C:
    ctx->pc = 0x80059B3Cu;
    // 80059B3C: rlwinm r3, r3, 0, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
    }

label_80059B40:
    ctx->pc = 0x80059B40u;
    // 80059B40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059B44:
    ctx->pc = 0x80059B44u;
    // 80059B44: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80059B48:
    ctx->pc = 0x80059B48u;
    // 80059B48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059B4C:
    ctx->pc = 0x80059B4Cu;
    ctx->downcount -= 7;
    // 80059B4C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059B50:
    ctx->pc = 0x80059B50u;
    // 80059B50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059B54:
    ctx->pc = 0x80059B54u;
    // 80059B54: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059B58:
    ctx->pc = 0x80059B58u;
    // 80059B58: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059B5C:
    ctx->pc = 0x80059B5Cu;
    // 80059B5C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059B60:
    ctx->pc = 0x80059B60u;
    // 80059B60: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059B64:
    ctx->pc = 0x80059B64u;
    // 80059B64: bl      0x80059DC4
    {
            ctx->lr = 0x80059B68u;
            goto label_80059DC4;
    }

label_80059B68:
    ctx->pc = 0x80059B68u;
    ctx->downcount -= 3;
    // 80059B68: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80059B6C:
    ctx->pc = 0x80059B6Cu;
    // 80059B6C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80059B70:
    ctx->pc = 0x80059B70u;
    // 80059B70: bl      0x80059D0C
    {
            ctx->lr = 0x80059B74u;
            goto label_80059D0C;
    }

label_80059B74:
    ctx->pc = 0x80059B74u;
    ctx->downcount -= 6;
    // 80059B74: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059B78:
    ctx->pc = 0x80059B78u;
    // 80059B78: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80059B7C:
    ctx->pc = 0x80059B7Cu;
    // 80059B7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059B80:
    ctx->pc = 0x80059B80u;
    // 80059B80: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80059B84:
    ctx->pc = 0x80059B84u;
    // 80059B84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059B88:
    ctx->pc = 0x80059B88u;
    ctx->downcount -= 17;
    // 80059B88: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059B8C:
    ctx->pc = 0x80059B8Cu;
    // 80059B8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059B90:
    ctx->pc = 0x80059B90u;
    // 80059B90: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059B94:
    ctx->pc = 0x80059B94u;
    // 80059B94: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80059B98:
    ctx->pc = 0x80059B98u;
    // 80059B98: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059B9C:
    ctx->pc = 0x80059B9Cu;
    // 80059B9C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80059BA0:
    ctx->pc = 0x80059BA0u;
    // 80059BA0: bl      0x80059EA4
    {
            ctx->lr = 0x80059BA4u;
            goto label_80059EA4;
    }

label_80059BA4:
    ctx->pc = 0x80059BA4u;
    ctx->downcount -= 2;
    // 80059BA4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80059BA8:
    ctx->pc = 0x80059BA8u;
    // 80059BA8: addi    r31, r1, 8
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(8);

label_80059BAC:
    ctx->downcount -= 3;
    // 80059BAC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80059BB0:
    // 80059BB0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80059BB4:
    // 80059BB4: bl      0x80059E44
    {
            ctx->lr = 0x80059BB8u;
            goto label_80059E44;
    }

label_80059BB8:
    ctx->pc = 0x80059BB8u;
    ctx->downcount -= 10;
    // 80059BB8: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059BBC:
    // 80059BBC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80059BC0:
    ctx->pc = 0x80059BC0u;
    // 80059BC0: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059BC4:
    // 80059BC4: cmpwi   r30, 7
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

label_80059BC8:
    // 80059BC8: subf   r0, r0, r29
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80059BCC:
    // 80059BCC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80059BD0:
    ctx->pc = 0x80059BD0u;
    // 80059BD0: lbzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80059BD4:
    ctx->pc = 0x80059BD4u;
    // 80059BD4: stb     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80059BD8:
    // 80059BD8: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80059BDC:
    // 80059BDC: bc    12, 0, 0x80059BAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059BACu;
                return;
            }
            goto label_80059BAC;
        }
    }

label_80059BE0:
    ctx->pc = 0x80059BE0u;
    ctx->downcount -= 3;
    // 80059BE0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80059BE4:
    ctx->pc = 0x80059BE4u;
    // 80059BE4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80059BE8:
    ctx->pc = 0x80059BE8u;
    // 80059BE8: bl      0x80059E44
    {
            ctx->lr = 0x80059BECu;
            goto label_80059E44;
    }

label_80059BEC:
    ctx->pc = 0x80059BECu;
    ctx->downcount -= 9;
    // 80059BEC: lwz     r3, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059BF0:
    ctx->pc = 0x80059BF0u;
    // 80059BF0: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_80059BF4:
    ctx->pc = 0x80059BF4u;
    // 80059BF4: lwz     r6, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80059BF8:
    ctx->pc = 0x80059BF8u;
    // 80059BF8: addi    r5, r1, 14
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(14);

label_80059BFC:
    ctx->pc = 0x80059BFCu;
    // 80059BFC: subf   r4, r3, r29
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_80059C00:
    ctx->pc = 0x80059C00u;
    // 80059C00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80059C04:
    ctx->pc = 0x80059C04u;
    // 80059C04: lbzx    r4, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80059C08:
    ctx->pc = 0x80059C08u;
    // 80059C08: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80059C0C:
    loop_80059C0C(ctx);
    if (ctx->pc == 0x80059C30u) goto label_80059C30;
    return;
label_80059C10:
    // 80059C10: rlwinm r3, r3, 8, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0xFFFFFF00u;
    }

label_80059C14:
    // 80059C14: rlwinm r7, r4, 8, 0, 23
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_80059C18:
    // 80059C18: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

label_80059C1C:
    // 80059C1C: rlwimi r3, r4, 8, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 8u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_80059C20:
    // 80059C20: srawi r0, r6, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[6];
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

label_80059C24:
    // 80059C24: or   r4, r7, r6
    {
        ctx->gpr[4] = ctx->gpr[7] | ctx->gpr[6];
    }

label_80059C28:
    // 80059C28: or   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80059C2C:
    // 80059C2C: bc    16, 0, 0x80059C0C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059C0Cu;
                return;
            }
            goto label_80059C0C;
        }
    }

label_80059C30:
    ctx->pc = 0x80059C30u;
    ctx->downcount -= 16;
    // 80059C30: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80059C34:
    ctx->pc = 0x80059C34u;
    // 80059C34: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059C38:
    ctx->pc = 0x80059C38u;
    // 80059C38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059C3C:
    ctx->pc = 0x80059C3Cu;
    // 80059C3C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80059C40:
    ctx->pc = 0x80059C40u;
    // 80059C40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059C44:
    ctx->pc = 0x80059C44u;
    ctx->downcount -= 17;
    // 80059C44: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059C48:
    ctx->pc = 0x80059C48u;
    // 80059C48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059C4C:
    ctx->pc = 0x80059C4Cu;
    // 80059C4C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059C50:
    ctx->pc = 0x80059C50u;
    // 80059C50: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80059C54:
    ctx->pc = 0x80059C54u;
    // 80059C54: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059C58:
    ctx->pc = 0x80059C58u;
    // 80059C58: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80059C5C:
    ctx->pc = 0x80059C5Cu;
    // 80059C5C: bl      0x80059EA4
    {
            ctx->lr = 0x80059C60u;
            goto label_80059EA4;
    }

label_80059C60:
    ctx->pc = 0x80059C60u;
    ctx->downcount -= 3;
    // 80059C60: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80059C64:
    ctx->pc = 0x80059C64u;
    // 80059C64: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80059C68:
    ctx->pc = 0x80059C68u;
    // 80059C68: bl      0x80059E44
    {
            ctx->lr = 0x80059C6Cu;
            goto label_80059E44;
    }

label_80059C6C:
    ctx->pc = 0x80059C6Cu;
    ctx->downcount -= 8;
    // 80059C6C: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059C70:
    ctx->pc = 0x80059C70u;
    // 80059C70: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80059C74:
    ctx->pc = 0x80059C74u;
    // 80059C74: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059C78:
    ctx->pc = 0x80059C78u;
    // 80059C78: subf   r0, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80059C7C:
    ctx->pc = 0x80059C7Cu;
    // 80059C7C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80059C80:
    ctx->pc = 0x80059C80u;
    // 80059C80: lbzx    r31, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[31] = mem_read8(ctx, ea);
    }

label_80059C84:
    ctx->pc = 0x80059C84u;
    // 80059C84: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80059C88:
    ctx->pc = 0x80059C88u;
    // 80059C88: bl      0x80059E44
    {
            ctx->lr = 0x80059C8Cu;
            goto label_80059E44;
    }

label_80059C8C:
    ctx->pc = 0x80059C8Cu;
    ctx->downcount -= 10;
    // 80059C8C: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059C90:
    ctx->pc = 0x80059C90u;
    // 80059C90: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80059C94:
    ctx->pc = 0x80059C94u;
    // 80059C94: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059C98:
    ctx->pc = 0x80059C98u;
    // 80059C98: subf   r0, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80059C9C:
    ctx->pc = 0x80059C9Cu;
    // 80059C9C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80059CA0:
    ctx->pc = 0x80059CA0u;
    // 80059CA0: lbzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80059CA4:
    ctx->pc = 0x80059CA4u;
    // 80059CA4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80059CA8:
    ctx->pc = 0x80059CA8u;
    // 80059CA8: rlwinm r0, r0, 8, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_80059CAC:
    ctx->pc = 0x80059CACu;
    // 80059CAC: or   r31, r31, r0
    {
        ctx->gpr[31] = ctx->gpr[31] | ctx->gpr[0];
    }

label_80059CB0:
    ctx->pc = 0x80059CB0u;
    // 80059CB0: bl      0x80059E44
    {
            ctx->lr = 0x80059CB4u;
            goto label_80059E44;
    }

label_80059CB4:
    ctx->pc = 0x80059CB4u;
    ctx->downcount -= 10;
    // 80059CB4: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059CB8:
    ctx->pc = 0x80059CB8u;
    // 80059CB8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80059CBC:
    ctx->pc = 0x80059CBCu;
    // 80059CBC: lwz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059CC0:
    ctx->pc = 0x80059CC0u;
    // 80059CC0: subf   r0, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80059CC4:
    ctx->pc = 0x80059CC4u;
    // 80059CC4: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80059CC8:
    ctx->pc = 0x80059CC8u;
    // 80059CC8: lbzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80059CCC:
    ctx->pc = 0x80059CCCu;
    // 80059CCC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80059CD0:
    ctx->pc = 0x80059CD0u;
    // 80059CD0: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_80059CD4:
    ctx->pc = 0x80059CD4u;
    // 80059CD4: or   r31, r31, r0
    {
        ctx->gpr[31] = ctx->gpr[31] | ctx->gpr[0];
    }

label_80059CD8:
    ctx->pc = 0x80059CD8u;
    // 80059CD8: bl      0x80059E44
    {
            ctx->lr = 0x80059CDCu;
            goto label_80059E44;
    }

label_80059CDC:
    ctx->pc = 0x80059CDCu;
    ctx->downcount -= 23;
    // 80059CDC: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059CE0:
    ctx->pc = 0x80059CE0u;
    // 80059CE0: lwz     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059CE4:
    ctx->pc = 0x80059CE4u;
    // 80059CE4: subf   r0, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80059CE8:
    ctx->pc = 0x80059CE8u;
    // 80059CE8: lbzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80059CEC:
    ctx->pc = 0x80059CECu;
    // 80059CEC: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_80059CF0:
    ctx->pc = 0x80059CF0u;
    // 80059CF0: or   r31, r31, r0
    {
        ctx->gpr[31] = ctx->gpr[31] | ctx->gpr[0];
    }

label_80059CF4:
    ctx->pc = 0x80059CF4u;
    // 80059CF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80059CF8:
    ctx->pc = 0x80059CF8u;
    // 80059CF8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80059CFC:
    ctx->pc = 0x80059CFCu;
    // 80059CFC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059D00:
    ctx->pc = 0x80059D00u;
    // 80059D00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059D04:
    ctx->pc = 0x80059D04u;
    // 80059D04: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80059D08:
    ctx->pc = 0x80059D08u;
    // 80059D08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059D0C:
    ctx->pc = 0x80059D0Cu;
    ctx->downcount -= 17;
    // 80059D0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059D10:
    ctx->pc = 0x80059D10u;
    // 80059D10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059D14:
    ctx->pc = 0x80059D14u;
    // 80059D14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059D18:
    ctx->pc = 0x80059D18u;
    // 80059D18: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80059D1C:
    ctx->pc = 0x80059D1Cu;
    // 80059D1C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059D20:
    ctx->pc = 0x80059D20u;
    // 80059D20: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80059D24:
    ctx->pc = 0x80059D24u;
    // 80059D24: bl      0x80059EA4
    {
            ctx->lr = 0x80059D28u;
            goto label_80059EA4;
    }

label_80059D28:
    ctx->pc = 0x80059D28u;
    ctx->downcount -= 3;
    // 80059D28: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80059D2C:
    ctx->pc = 0x80059D2Cu;
    // 80059D2C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80059D30:
    ctx->pc = 0x80059D30u;
    // 80059D30: bl      0x80059E44
    {
            ctx->lr = 0x80059D34u;
            goto label_80059E44;
    }

label_80059D34:
    ctx->pc = 0x80059D34u;
    ctx->downcount -= 20;
    // 80059D34: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059D38:
    ctx->pc = 0x80059D38u;
    // 80059D38: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059D3C:
    ctx->pc = 0x80059D3Cu;
    // 80059D3C: subf   r0, r0, r31
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80059D40:
    ctx->pc = 0x80059D40u;
    // 80059D40: lbzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80059D44:
    ctx->pc = 0x80059D44u;
    // 80059D44: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80059D48:
    ctx->pc = 0x80059D48u;
    // 80059D48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059D4C:
    ctx->pc = 0x80059D4Cu;
    // 80059D4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059D50:
    ctx->pc = 0x80059D50u;
    // 80059D50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80059D54:
    ctx->pc = 0x80059D54u;
    // 80059D54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059D58:
    ctx->pc = 0x80059D58u;
    ctx->downcount -= 19;
    // 80059D58: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059D5C:
    ctx->pc = 0x80059D5Cu;
    // 80059D5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059D60:
    ctx->pc = 0x80059D60u;
    // 80059D60: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059D64:
    ctx->pc = 0x80059D64u;
    // 80059D64: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80059D68:
    ctx->pc = 0x80059D68u;
    // 80059D68: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80059D6C:
    ctx->pc = 0x80059D6Cu;
    // 80059D6C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80059D70:
    ctx->pc = 0x80059D70u;
    // 80059D70: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059D74:
    ctx->pc = 0x80059D74u;
    // 80059D74: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80059D78:
    ctx->pc = 0x80059D78u;
    // 80059D78: bl      0x80059EA4
    {
            ctx->lr = 0x80059D7Cu;
            goto label_80059EA4;
    }

label_80059D7C:
    ctx->pc = 0x80059D7Cu;
    ctx->downcount -= 1;
    // 80059D7C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80059D80:
    ctx->downcount -= 3;
    // 80059D80: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80059D84:
    // 80059D84: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80059D88:
    // 80059D88: bl      0x80059E44
    {
            ctx->lr = 0x80059D8Cu;
            goto label_80059E44;
    }

label_80059D8C:
    ctx->pc = 0x80059D8Cu;
    ctx->downcount -= 9;
    // 80059D8C: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059D90:
    // 80059D90: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80059D94:
    ctx->pc = 0x80059D94u;
    // 80059D94: lwz     r3, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80059D98:
    // 80059D98: cmpwi   r31, 4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80059D9C:
    // 80059D9C: subf   r0, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80059DA0:
    // 80059DA0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80059DA4:
    ctx->pc = 0x80059DA4u;
    // 80059DA4: stbx    r29, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_80059DA8:
    // 80059DA8: rlwinm r29, r29, 24, 8, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[29], 24u) & 0x00FFFFFFu;
    }

label_80059DAC:
    // 80059DAC: bc    12, 0, 0x80059D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059D80u;
                return;
            }
            goto label_80059D80;
        }
    }

label_80059DB0:
    ctx->pc = 0x80059DB0u;
    ctx->downcount -= 16;
    // 80059DB0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80059DB4:
    ctx->pc = 0x80059DB4u;
    // 80059DB4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059DB8:
    ctx->pc = 0x80059DB8u;
    // 80059DB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059DBC:
    ctx->pc = 0x80059DBCu;
    // 80059DBC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80059DC0:
    ctx->pc = 0x80059DC0u;
    // 80059DC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059DC4:
    ctx->pc = 0x80059DC4u;
    ctx->downcount -= 19;
    // 80059DC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059DC8:
    ctx->pc = 0x80059DC8u;
    // 80059DC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059DCC:
    ctx->pc = 0x80059DCCu;
    // 80059DCC: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_80059DD0:
    ctx->pc = 0x80059DD0u;
    // 80059DD0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059DD4:
    ctx->pc = 0x80059DD4u;
    // 80059DD4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80059DD8:
    ctx->pc = 0x80059DD8u;
    // 80059DD8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80059DDC:
    ctx->pc = 0x80059DDCu;
    // 80059DDC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80059DE0:
    ctx->pc = 0x80059DE0u;
    // 80059DE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80059DE4:
    ctx->pc = 0x80059DE4u;
    // 80059DE4: bl      0x800050B4
    {
            ctx->lr = 0x80059DE8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80059DE8:
    ctx->pc = 0x80059DE8u;
    ctx->downcount -= 2;
    // 80059DE8: cmplwi  r31, 0x0000
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

label_80059DEC:
    ctx->pc = 0x80059DECu;
    // 80059DEC: bc    12, 2, 0x80059E2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80059E2C;
        }
    }

label_80059DF0:
    ctx->pc = 0x80059DF0u;
    ctx->downcount -= 15;
    // 80059DF0: stw     r31, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80059DF4:
    ctx->pc = 0x80059DF4u;
    // 80059DF4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80059DF8:
    ctx->pc = 0x80059DF8u;
    // 80059DF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80059DFC:
    ctx->pc = 0x80059DFCu;
    // 80059DFC: stw     r31, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80059E00:
    ctx->pc = 0x80059E00u;
    // 80059E00: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059E04:
    ctx->pc = 0x80059E04u;
    // 80059E04: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059E08:
    ctx->pc = 0x80059E08u;
    // 80059E08: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059E0C:
    ctx->pc = 0x80059E0Cu;
    // 80059E0C: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059E10:
    ctx->pc = 0x80059E10u;
    // 80059E10: lwz     r5, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80059E14:
    ctx->pc = 0x80059E14u;
    // 80059E14: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059E18:
    ctx->pc = 0x80059E18u;
    // 80059E18: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059E1C:
    ctx->pc = 0x80059E1Cu;
    // 80059E1C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059E20:
    ctx->pc = 0x80059E20u;
    // 80059E20: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80059E24:
    ctx->pc = 0x80059E24u;
    // 80059E24: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059E28:
    ctx->pc = 0x80059E28u;
    // 80059E28: b       0x80059E30
    {
            goto label_80059E30;
    }

label_80059E2C:
    ctx->pc = 0x80059E2Cu;
    ctx->downcount -= 1;
    // 80059E2C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80059E30:
    ctx->pc = 0x80059E30u;
    ctx->downcount -= 16;
    // 80059E30: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80059E34:
    ctx->pc = 0x80059E34u;
    // 80059E34: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059E38:
    ctx->pc = 0x80059E38u;
    // 80059E38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059E3C:
    ctx->pc = 0x80059E3Cu;
    // 80059E3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80059E40:
    ctx->pc = 0x80059E40u;
    // 80059E40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059E44:
    ctx->pc = 0x80059E44u;
    ctx->downcount -= 1;
    // 80059E44: b       0x80059E94
    {
            goto label_80059E94;
    }

label_80059E48:
    loop_80059E48(ctx);
    if (ctx->pc == 0x80059EA0u) goto label_80059EA0;
    return;
label_80059E4C:
    ctx->pc = 0x80059E4Cu;
    // 80059E4C: lwz     r6, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80059E50:
    ctx->pc = 0x80059E50u;
    // 80059E50: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059E54:
    // 80059E54: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80059E58:
    ctx->pc = 0x80059E58u;
    // 80059E58: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059E5C:
    ctx->pc = 0x80059E5Cu;
    // 80059E5C: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80059E60:
    ctx->pc = 0x80059E60u;
    // 80059E60: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059E64:
    ctx->pc = 0x80059E64u;
    // 80059E64: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059E68:
    ctx->pc = 0x80059E68u;
    // 80059E68: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80059E6C:
    ctx->pc = 0x80059E6Cu;
    // 80059E6C: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059E70:
    ctx->pc = 0x80059E70u;
    // 80059E70: lwz     r5, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80059E74:
    // 80059E74: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80059E78:
    ctx->pc = 0x80059E78u;
    // 80059E78: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059E7C:
    ctx->pc = 0x80059E7Cu;
    // 80059E7C: lwz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80059E80:
    ctx->pc = 0x80059E80u;
    // 80059E80: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80059E84:
    ctx->pc = 0x80059E84u;
    // 80059E84: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059E88:
    ctx->pc = 0x80059E88u;
    // 80059E88: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80059E8C:
    // 80059E8C: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80059E90:
    ctx->pc = 0x80059E90u;
    // 80059E90: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059E94:
    ctx->pc = 0x80059E94u;
    ctx->downcount -= 3;
    // 80059E94: lwz     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059E98:
    // 80059E98: cmpw    r4, r0
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

label_80059E9C:
    // 80059E9C: bc    4, 0, 0x80059E48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059E48u;
                return;
            }
            goto label_80059E48;
        }
    }

label_80059EA0:
    ctx->pc = 0x80059EA0u;
    ctx->downcount -= 1;
    // 80059EA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059EA4:
    ctx->pc = 0x80059EA4u;
    ctx->downcount -= 3;
    // 80059EA4: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059EA8:
    ctx->pc = 0x80059EA8u;
    // 80059EA8: cmpw    r4, r0
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

label_80059EAC:
    ctx->pc = 0x80059EACu;
    // 80059EAC: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059EB0:
    ctx->pc = 0x80059EB0u;
    ctx->downcount -= 16;
    // 80059EB0: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059EB4:
    ctx->pc = 0x80059EB4u;
    // 80059EB4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80059EB8:
    ctx->pc = 0x80059EB8u;
    // 80059EB8: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80059EBC:
    ctx->pc = 0x80059EBCu;
    // 80059EBC: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059EC0:
    ctx->pc = 0x80059EC0u;
    // 80059EC0: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059EC4:
    ctx->pc = 0x80059EC4u;
    // 80059EC4: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80059EC8:
    ctx->pc = 0x80059EC8u;
    // 80059EC8: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059ECC:
    ctx->pc = 0x80059ECCu;
    // 80059ECC: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80059ED0:
    ctx->pc = 0x80059ED0u;
    // 80059ED0: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059ED4:
    ctx->pc = 0x80059ED4u;
    // 80059ED4: lwz     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80059ED8:
    ctx->pc = 0x80059ED8u;
    // 80059ED8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059EDC:
    ctx->pc = 0x80059EDCu;
    // 80059EDC: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059EE0:
    ctx->pc = 0x80059EE0u;
    // 80059EE0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80059EE4:
    ctx->pc = 0x80059EE4u;
    // 80059EE4: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80059EE8:
    ctx->pc = 0x80059EE8u;
    // 80059EE8: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059EEC:
    ctx->pc = 0x80059EECu;
    // 80059EEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059EF0:
    ctx->pc = 0x80059EF0u;
    ctx->downcount -= 5;
    // 80059EF0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059EF4:
    ctx->pc = 0x80059EF4u;
    // 80059EF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059EF8:
    ctx->pc = 0x80059EF8u;
    // 80059EF8: cmplwi  r3, 0x0000
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

label_80059EFC:
    ctx->pc = 0x80059EFCu;
    // 80059EFC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059F00:
    ctx->pc = 0x80059F00u;
    // 80059F00: bc    4, 2, 0x80059F14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80059F14;
        }
    }

label_80059F04:
    ctx->pc = 0x80059F04u;
    ctx->downcount -= 2;
    // 80059F04: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80059F08:
    ctx->pc = 0x80059F08u;
    // 80059F08: b       0x80059F2C
    {
            goto label_80059F2C;
    }

label_80059F0C:
    ctx->pc = 0x80059F0Cu;
    ctx->downcount -= 1;
    // 80059F0C: b       0x80059F14
    {
            goto label_80059F14;
    }

label_80059F10:
    loop_80059F10(ctx);
    if (ctx->pc == 0x80059F20u) goto label_80059F20;
    return;
label_80059F14:
    ctx->pc = 0x80059F14u;
    ctx->downcount -= 3;
    // 80059F14: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059F18:
    // 80059F18: cmplwi  r0, 0x0000
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

label_80059F1C:
    // 80059F1C: bc    4, 2, 0x80059F10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059F10u;
                return;
            }
            goto label_80059F10;
        }
    }

label_80059F20:
    ctx->pc = 0x80059F20u;
    ctx->downcount -= 3;
    // 80059F20: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80059F24:
    ctx->pc = 0x80059F24u;
    // 80059F24: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80059F28:
    ctx->pc = 0x80059F28u;
    // 80059F28: bl      0x80059F3C
    {
            ctx->lr = 0x80059F2Cu;
            goto label_80059F3C;
    }

label_80059F2C:
    ctx->pc = 0x80059F2Cu;
    ctx->downcount -= 5;
    // 80059F2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059F30:
    ctx->pc = 0x80059F30u;
    // 80059F30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059F34:
    ctx->pc = 0x80059F34u;
    // 80059F34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80059F38:
    ctx->pc = 0x80059F38u;
    // 80059F38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059F3C:
    ctx->pc = 0x80059F3Cu;
    ctx->downcount -= 2;
    // 80059F3C: cmplwi  r3, 0x0000
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

label_80059F40:
    ctx->pc = 0x80059F40u;
    // 80059F40: bc    4, 2, 0x80059F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80059F54;
        }
    }

label_80059F44:
    ctx->pc = 0x80059F44u;
    ctx->downcount -= 2;
    // 80059F44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80059F48:
    ctx->pc = 0x80059F48u;
    // 80059F48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059F4C:
    ctx->pc = 0x80059F4Cu;
    ctx->downcount -= 1;
    // 80059F4C: b       0x80059F54
    {
            goto label_80059F54;
    }

label_80059F50:
    loop_80059F50(ctx);
    if (ctx->pc == 0x80059F60u) goto label_80059F60;
    return;
label_80059F54:
    ctx->pc = 0x80059F54u;
    ctx->downcount -= 3;
    // 80059F54: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059F58:
    // 80059F58: cmplwi  r0, 0x0000
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

label_80059F5C:
    // 80059F5C: bc    4, 2, 0x80059F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059F50u;
                return;
            }
            goto label_80059F50;
        }
    }

label_80059F60:
    ctx->pc = 0x80059F60u;
    ctx->downcount -= 1;
    // 80059F60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059F64:
    ctx->pc = 0x80059F64u;
    ctx->downcount -= 16;
    // 80059F64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059F68:
    ctx->pc = 0x80059F68u;
    // 80059F68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059F6C:
    ctx->pc = 0x80059F6Cu;
    // 80059F6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059F70:
    ctx->pc = 0x80059F70u;
    // 80059F70: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80059F74:
    ctx->pc = 0x80059F74u;
    // 80059F74: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80059F78:
    ctx->pc = 0x80059F78u;
    // 80059F78: b       0x80059F8C
    {
            goto label_80059F8C;
    }

label_80059F7C:
    ctx->pc = 0x80059F7Cu;
    ctx->downcount -= 3;
    // 80059F7C: lwz     r31, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80059F80:
    // 80059F80: subf   r30, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[30] = res;
    }

label_80059F84:
    // 80059F84: bl      0x8005A010
    {
            ctx->lr = 0x80059F88u;
            goto label_8005A010;
    }

label_80059F88:
    ctx->downcount -= 1;
    // 80059F88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80059F8C:
    ctx->downcount -= 2;
    // 80059F8C: cmplwi  r3, 0x0000
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

label_80059F90:
    // 80059F90: bc    12, 2, 0x80059FA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80059FA0;
        }
    }

label_80059F94:
    ctx->pc = 0x80059F94u;
    ctx->downcount -= 3;
    // 80059F94: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059F98:
    // 80059F98: cmpw    r30, r0
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

label_80059F9C:
    // 80059F9C: bc    4, 0, 0x80059F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059F7Cu;
                return;
            }
            goto label_80059F7C;
        }
    }

label_80059FA0:
    ctx->pc = 0x80059FA0u;
    ctx->downcount -= 2;
    // 80059FA0: cmplwi  r3, 0x0000
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

label_80059FA4:
    ctx->pc = 0x80059FA4u;
    // 80059FA4: bc    12, 2, 0x80059FC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80059FC0;
        }
    }

label_80059FA8:
    ctx->pc = 0x80059FA8u;
    ctx->downcount -= 6;
    // 80059FA8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059FAC:
    ctx->pc = 0x80059FACu;
    // 80059FAC: add   r0, r0, r30
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80059FB0:
    ctx->pc = 0x80059FB0u;
    // 80059FB0: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059FB4:
    ctx->pc = 0x80059FB4u;
    // 80059FB4: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059FB8:
    ctx->pc = 0x80059FB8u;
    // 80059FB8: subf   r0, r30, r0
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80059FBC:
    ctx->pc = 0x80059FBCu;
    // 80059FBC: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059FC0:
    ctx->pc = 0x80059FC0u;
    ctx->downcount -= 16;
    // 80059FC0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80059FC4:
    ctx->pc = 0x80059FC4u;
    // 80059FC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80059FC8:
    ctx->pc = 0x80059FC8u;
    // 80059FC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80059FCC:
    ctx->pc = 0x80059FCCu;
    // 80059FCC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80059FD0:
    ctx->pc = 0x80059FD0u;
    // 80059FD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_80059FD4:
    ctx->pc = 0x80059FD4u;
    ctx->downcount -= 5;
    // 80059FD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80059FD8:
    ctx->pc = 0x80059FD8u;
    // 80059FD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80059FDC:
    ctx->pc = 0x80059FDCu;
    // 80059FDC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80059FE0:
    ctx->pc = 0x80059FE0u;
    // 80059FE0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80059FE4:
    ctx->pc = 0x80059FE4u;
    // 80059FE4: b       0x80059FF4
    {
            goto label_80059FF4;
    }

label_80059FE8:
    ctx->pc = 0x80059FE8u;
    ctx->downcount -= 2;
    // 80059FE8: lwz     r31, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80059FEC:
    // 80059FEC: bl      0x8005A010
    {
            ctx->lr = 0x80059FF0u;
            goto label_8005A010;
    }

label_80059FF0:
    ctx->downcount -= 1;
    // 80059FF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80059FF4:
    ctx->downcount -= 2;
    // 80059FF4: cmplwi  r3, 0x0000
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

label_80059FF8:
    // 80059FF8: bc    4, 2, 0x80059FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80059FE8u;
                return;
            }
            goto label_80059FE8;
        }
    }

label_80059FFC:
    ctx->pc = 0x80059FFCu;
    ctx->downcount -= 6;
    // 80059FFC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A000:
    ctx->pc = 0x8005A000u;
    // 8005A000: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8005A004:
    ctx->pc = 0x8005A004u;
    // 8005A004: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A008:
    ctx->pc = 0x8005A008u;
    // 8005A008: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A00C:
    ctx->pc = 0x8005A00Cu;
    // 8005A00C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A010:
    ctx->pc = 0x8005A010u;
    ctx->downcount -= 11;
    // 8005A010: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A014:
    ctx->pc = 0x8005A014u;
    // 8005A014: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A018:
    ctx->pc = 0x8005A018u;
    // 8005A018: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A01C:
    ctx->pc = 0x8005A01Cu;
    // 8005A01C: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005A020:
    ctx->pc = 0x8005A020u;
    // 8005A020: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005A024:
    ctx->pc = 0x8005A024u;
    // 8005A024: lwz     r6, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005A028:
    ctx->pc = 0x8005A028u;
    // 8005A028: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_8005A02C:
    ctx->pc = 0x8005A02Cu;
    // 8005A02C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A030:
    ctx->pc = 0x8005A030u;
    // 8005A030: lwz     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A034:
    ctx->pc = 0x8005A034u;
    // 8005A034: cmpwi   r0, 0
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

label_8005A038:
    ctx->pc = 0x8005A038u;
    // 8005A038: bc    4, 2, 0x8005A054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A054;
        }
    }

label_8005A03C:
    ctx->pc = 0x8005A03Cu;
    ctx->downcount -= 6;
    // 8005A03C: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005A040:
    ctx->pc = 0x8005A040u;
    // 8005A040: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_8005A044:
    ctx->pc = 0x8005A044u;
    // 8005A044: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A048:
    ctx->pc = 0x8005A048u;
    // 8005A048: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A04C:
    ctx->pc = 0x8005A04Cu;
    // 8005A04C: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A050:
    ctx->pc = 0x8005A050u;
    // 8005A050: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8005A054:
    ctx->pc = 0x8005A054u;
    ctx->downcount -= 8;
    // 8005A054: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005A058:
    ctx->pc = 0x8005A058u;
    // 8005A058: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_8005A05C:
    ctx->pc = 0x8005A05Cu;
    // 8005A05C: stw     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A060:
    ctx->pc = 0x8005A060u;
    // 8005A060: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A064:
    ctx->pc = 0x8005A064u;
    // 8005A064: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A068:
    ctx->pc = 0x8005A068u;
    // 8005A068: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A06C:
    ctx->pc = 0x8005A06Cu;
    // 8005A06C: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8005A070:
    ctx->pc = 0x8005A070u;
    // 8005A070: bl      0x8005A560
    {
            ctx->lr = 0x8005A074u;
            goto label_8005A560;
    }

label_8005A074:
    ctx->pc = 0x8005A074u;
    ctx->downcount -= 5;
    // 8005A074: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A078:
    ctx->pc = 0x8005A078u;
    // 8005A078: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A07C:
    ctx->pc = 0x8005A07Cu;
    // 8005A07C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A080:
    ctx->pc = 0x8005A080u;
    // 8005A080: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A084:
    ctx->pc = 0x8005A084u;
    ctx->downcount -= 21;
    // 8005A084: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A088:
    ctx->pc = 0x8005A088u;
    // 8005A088: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A08C:
    ctx->pc = 0x8005A08Cu;
    // 8005A08C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A090:
    ctx->pc = 0x8005A090u;
    // 8005A090: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005A094:
    ctx->pc = 0x8005A094u;
    // 8005A094: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A098:
    ctx->pc = 0x8005A098u;
    // 8005A098: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005A09C:
    ctx->pc = 0x8005A09Cu;
    // 8005A09C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005A0A0:
    ctx->pc = 0x8005A0A0u;
    // 8005A0A0: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A0A4:
    ctx->pc = 0x8005A0A4u;
    // 8005A0A4: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8005A0A8:
    ctx->pc = 0x8005A0A8u;
    // 8005A0A8: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8005A0AC:
    ctx->pc = 0x8005A0ACu;
    // 8005A0AC: b       0x8005A0B8
    {
            goto label_8005A0B8;
    }

label_8005A0B0:
    ctx->downcount -= 2;
    // 8005A0B0: subf   r29, r0, r29
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005A0B4:
    ctx->pc = 0x8005A0B4u;
    // 8005A0B4: lwz     r30, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8005A0B8:
    ctx->downcount -= 2;
    // 8005A0B8: cmplwi  r30, 0x0000
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

label_8005A0BC:
    // 8005A0BC: bc    12, 2, 0x8005A0CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A0CC;
        }
    }

label_8005A0C0:
    ctx->pc = 0x8005A0C0u;
    ctx->downcount -= 3;
    // 8005A0C0: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A0C4:
    // 8005A0C4: cmpw    r29, r0
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

label_8005A0C8:
    // 8005A0C8: bc    12, 1, 0x8005A0B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005A0B0u;
                return;
            }
            goto label_8005A0B0;
        }
    }

label_8005A0CC:
    ctx->pc = 0x8005A0CCu;
    ctx->downcount -= 2;
    // 8005A0CC: cmplwi  r30, 0x0000
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

label_8005A0D0:
    ctx->pc = 0x8005A0D0u;
    // 8005A0D0: bc    12, 2, 0x8005A0DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A0DC;
        }
    }

label_8005A0D4:
    ctx->pc = 0x8005A0D4u;
    ctx->downcount -= 2;
    // 8005A0D4: cmpwi   r29, 0
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

label_8005A0D8:
    ctx->pc = 0x8005A0D8u;
    // 8005A0D8: bc    4, 2, 0x8005A0E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A0E4;
        }
    }

label_8005A0DC:
    ctx->pc = 0x8005A0DCu;
    ctx->downcount -= 2;
    // 8005A0DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005A0E0:
    ctx->pc = 0x8005A0E0u;
    // 8005A0E0: b       0x8005A194
    {
            goto label_8005A194;
    }

label_8005A0E4:
    ctx->pc = 0x8005A0E4u;
    ctx->downcount -= 3;
    // 8005A0E4: lwz     r26, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8005A0E8:
    ctx->pc = 0x8005A0E8u;
    // 8005A0E8: cmpw    r29, r26
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005A0EC:
    ctx->pc = 0x8005A0ECu;
    // 8005A0EC: bc    12, 0, 0x8005A11C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A11C;
        }
    }

label_8005A0F0:
    ctx->pc = 0x8005A0F0u;
    ctx->downcount -= 3;
    // 8005A0F0: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A0F4:
    ctx->pc = 0x8005A0F4u;
    // 8005A0F4: cmplwi  r0, 0x0000
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

label_8005A0F8:
    ctx->pc = 0x8005A0F8u;
    // 8005A0F8: bc    12, 2, 0x8005A10C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A10C;
        }
    }

label_8005A0FC:
    ctx->pc = 0x8005A0FCu;
    ctx->downcount -= 4;
    // 8005A0FC: stw     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A100:
    ctx->pc = 0x8005A100u;
    // 8005A100: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8005A104:
    ctx->pc = 0x8005A104u;
    // 8005A104: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A108:
    ctx->pc = 0x8005A108u;
    // 8005A108: b       0x8005A190
    {
            goto label_8005A190;
    }

label_8005A10C:
    ctx->pc = 0x8005A10Cu;
    ctx->downcount -= 4;
    // 8005A10C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8005A110:
    ctx->pc = 0x8005A110u;
    // 8005A110: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A114:
    ctx->pc = 0x8005A114u;
    // 8005A114: stw     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A118:
    ctx->pc = 0x8005A118u;
    // 8005A118: b       0x8005A190
    {
            goto label_8005A190;
    }

label_8005A11C:
    ctx->pc = 0x8005A11Cu;
    ctx->downcount -= 5;
    // 8005A11C: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A120:
    ctx->pc = 0x8005A120u;
    // 8005A120: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A124:
    ctx->pc = 0x8005A124u;
    // 8005A124: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A128:
    ctx->pc = 0x8005A128u;
    // 8005A128: add   r25, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_8005A12C:
    ctx->pc = 0x8005A12Cu;
    // 8005A12C: bl      0x8005A3F4
    {
            ctx->lr = 0x8005A130u;
            goto label_8005A3F4;
    }

label_8005A130:
    ctx->pc = 0x8005A130u;
    ctx->downcount -= 14;
    // 8005A130: stw     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A134:
    ctx->pc = 0x8005A134u;
    // 8005A134: subf   r0, r29, r26
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[26];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005A138:
    ctx->pc = 0x8005A138u;
    // 8005A138: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005A13C:
    ctx->pc = 0x8005A13Cu;
    // 8005A13C: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A140:
    ctx->pc = 0x8005A140u;
    // 8005A140: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8005A144:
    ctx->pc = 0x8005A144u;
    // 8005A144: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A148:
    ctx->pc = 0x8005A148u;
    // 8005A148: stw     r25, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_8005A14C:
    ctx->pc = 0x8005A14Cu;
    // 8005A14C: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A150:
    ctx->pc = 0x8005A150u;
    // 8005A150: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A154:
    ctx->pc = 0x8005A154u;
    // 8005A154: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A158:
    ctx->pc = 0x8005A158u;
    // 8005A158: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A15C:
    ctx->pc = 0x8005A15Cu;
    // 8005A15C: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A160:
    ctx->pc = 0x8005A160u;
    // 8005A160: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A164:
    ctx->pc = 0x8005A164u;
    // 8005A164: bl      0x8005A34C
    {
            ctx->lr = 0x8005A168u;
            goto label_8005A34C;
    }

label_8005A168:
    ctx->pc = 0x8005A168u;
    ctx->downcount -= 2;
    // 8005A168: cmplwi  r28, 0x0000
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

label_8005A16C:
    ctx->pc = 0x8005A16Cu;
    // 8005A16C: bc    12, 2, 0x8005A184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A184;
        }
    }

label_8005A170:
    ctx->pc = 0x8005A170u;
    ctx->downcount -= 3;
    // 8005A170: lwz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A174:
    ctx->pc = 0x8005A174u;
    // 8005A174: cmplw   r30, r0
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

label_8005A178:
    ctx->pc = 0x8005A178u;
    // 8005A178: bc    4, 2, 0x8005A184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A184;
        }
    }

label_8005A17C:
    ctx->pc = 0x8005A17Cu;
    ctx->downcount -= 2;
    // 8005A17C: lwz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A180:
    ctx->pc = 0x8005A180u;
    // 8005A180: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A184:
    ctx->pc = 0x8005A184u;
    ctx->downcount -= 3;
    // 8005A184: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8005A188:
    ctx->pc = 0x8005A188u;
    // 8005A188: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A18C:
    ctx->pc = 0x8005A18Cu;
    // 8005A18C: stw     r29, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8005A190:
    ctx->pc = 0x8005A190u;
    ctx->downcount -= 1;
    // 8005A190: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005A194:
    ctx->pc = 0x8005A194u;
    ctx->downcount -= 16;
    // 8005A194: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005A198:
    ctx->pc = 0x8005A198u;
    // 8005A198: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A19C:
    ctx->pc = 0x8005A19Cu;
    // 8005A19C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A1A0:
    ctx->pc = 0x8005A1A0u;
    // 8005A1A0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8005A1A4:
    ctx->pc = 0x8005A1A4u;
    // 8005A1A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A1A8:
    ctx->pc = 0x8005A1A8u;
    ctx->downcount -= 18;
    // 8005A1A8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A1AC:
    ctx->pc = 0x8005A1ACu;
    // 8005A1AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A1B0:
    ctx->pc = 0x8005A1B0u;
    // 8005A1B0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A1B4:
    ctx->pc = 0x8005A1B4u;
    // 8005A1B4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005A1B8:
    ctx->pc = 0x8005A1B8u;
    // 8005A1B8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A1BC:
    ctx->pc = 0x8005A1BCu;
    // 8005A1BC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8005A1C0:
    ctx->pc = 0x8005A1C0u;
    // 8005A1C0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8005A1C4:
    ctx->pc = 0x8005A1C4u;
    // 8005A1C4: b       0x8005A208
    {
            goto label_8005A208;
    }

label_8005A1C8:
    ctx->pc = 0x8005A1C8u;
    ctx->downcount -= 3;
    // 8005A1C8: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A1CC:
    ctx->pc = 0x8005A1CCu;
    // 8005A1CC: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A1D0:
    // 8005A1D0: bl      0x8005A3F4
    {
            ctx->lr = 0x8005A1D4u;
            goto label_8005A3F4;
    }

label_8005A1D4:
    ctx->downcount -= 2;
    // 8005A1D4: cmplwi  r30, 0x0000
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

label_8005A1D8:
    // 8005A1D8: bc    12, 2, 0x8005A1E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A1E4;
        }
    }

label_8005A1DC:
    ctx->pc = 0x8005A1DCu;
    ctx->downcount -= 2;
    // 8005A1DC: stw     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A1E0:
    // 8005A1E0: b       0x8005A1E8
    {
            goto label_8005A1E8;
    }

label_8005A1E4:
    ctx->downcount -= 1;
    // 8005A1E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A1E8:
    ctx->pc = 0x8005A1E8u;
    ctx->downcount -= 8;
    // 8005A1E8: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A1EC:
    // 8005A1EC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A1F0:
    ctx->pc = 0x8005A1F0u;
    // 8005A1F0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A1F4:
    ctx->pc = 0x8005A1F4u;
    // 8005A1F4: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A1F8:
    ctx->pc = 0x8005A1F8u;
    // 8005A1F8: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A1FC:
    ctx->pc = 0x8005A1FCu;
    // 8005A1FC: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A200:
    ctx->pc = 0x8005A200u;
    // 8005A200: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A204:
    ctx->pc = 0x8005A204u;
    // 8005A204: lwz     r29, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8005A208:
    ctx->downcount -= 2;
    // 8005A208: cmplwi  r29, 0x0000
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

label_8005A20C:
    // 8005A20C: bc    4, 2, 0x8005A1C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005A1C8u;
                return;
            }
            goto label_8005A1C8;
        }
    }

label_8005A210:
    ctx->pc = 0x8005A210u;
    ctx->downcount -= 2;
    // 8005A210: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005A214:
    ctx->pc = 0x8005A214u;
    // 8005A214: bl      0x8005A30C
    {
            ctx->lr = 0x8005A218u;
            goto label_8005A30C;
    }

label_8005A218:
    ctx->pc = 0x8005A218u;
    ctx->downcount -= 17;
    // 8005A218: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005A21C:
    ctx->pc = 0x8005A21Cu;
    // 8005A21C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005A220:
    ctx->pc = 0x8005A220u;
    // 8005A220: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A224:
    ctx->pc = 0x8005A224u;
    // 8005A224: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A228:
    ctx->pc = 0x8005A228u;
    // 8005A228: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005A22C:
    ctx->pc = 0x8005A22Cu;
    // 8005A22C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A230:
    ctx->pc = 0x8005A230u;
    ctx->downcount -= 20;
    // 8005A230: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A234:
    ctx->pc = 0x8005A234u;
    // 8005A234: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A238:
    ctx->pc = 0x8005A238u;
    // 8005A238: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A23C:
    ctx->pc = 0x8005A23Cu;
    // 8005A23C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005A240:
    ctx->pc = 0x8005A240u;
    // 8005A240: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A244:
    ctx->pc = 0x8005A244u;
    // 8005A244: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005A248:
    ctx->pc = 0x8005A248u;
    // 8005A248: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005A24C:
    ctx->pc = 0x8005A24Cu;
    // 8005A24C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8005A250:
    ctx->pc = 0x8005A250u;
    // 8005A250: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8005A254:
    ctx->pc = 0x8005A254u;
    // 8005A254: b       0x8005A260
    {
            goto label_8005A260;
    }

label_8005A258:
    ctx->downcount -= 2;
    // 8005A258: subf   r28, r0, r28
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[28];
        u32 res = a + b + 1u;
        ctx->gpr[28] = res;
    }

label_8005A25C:
    ctx->pc = 0x8005A25Cu;
    // 8005A25C: lwz     r27, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_8005A260:
    ctx->downcount -= 2;
    // 8005A260: cmplwi  r27, 0x0000
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

label_8005A264:
    // 8005A264: bc    12, 2, 0x8005A2DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A2DC;
        }
    }

label_8005A268:
    ctx->pc = 0x8005A268u;
    ctx->downcount -= 3;
    // 8005A268: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A26C:
    // 8005A26C: cmpw    r28, r0
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

label_8005A270:
    // 8005A270: bc    4, 0, 0x8005A258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005A258u;
                return;
            }
            goto label_8005A258;
        }
    }

label_8005A274:
    ctx->pc = 0x8005A274u;
    ctx->downcount -= 1;
    // 8005A274: b       0x8005A2DC
    {
            goto label_8005A2DC;
    }

label_8005A278:
    ctx->pc = 0x8005A278u;
    ctx->downcount -= 3;
    // 8005A278: lwz     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A27C:
    ctx->pc = 0x8005A27Cu;
    // 8005A27C: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A280:
    // 8005A280: bl      0x8005A3F4
    {
            ctx->lr = 0x8005A284u;
            goto label_8005A3F4;
    }

label_8005A284:
    ctx->downcount -= 2;
    // 8005A284: cmplwi  r30, 0x0000
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

label_8005A288:
    // 8005A288: bc    12, 2, 0x8005A294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A294;
        }
    }

label_8005A28C:
    ctx->pc = 0x8005A28Cu;
    ctx->downcount -= 2;
    // 8005A28C: stw     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A290:
    // 8005A290: b       0x8005A298
    {
            goto label_8005A298;
    }

label_8005A294:
    ctx->downcount -= 1;
    // 8005A294: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A298:
    ctx->pc = 0x8005A298u;
    ctx->downcount -= 12;
    // 8005A298: lwz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A29C:
    // 8005A29C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A2A0:
    ctx->pc = 0x8005A2A0u;
    // 8005A2A0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A2A4:
    ctx->pc = 0x8005A2A4u;
    // 8005A2A4: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A2A8:
    // 8005A2A8: add   r0, r0, r28
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005A2AC:
    ctx->pc = 0x8005A2ACu;
    // 8005A2AC: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A2B0:
    ctx->pc = 0x8005A2B0u;
    // 8005A2B0: stw     r29, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8005A2B4:
    ctx->pc = 0x8005A2B4u;
    // 8005A2B4: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A2B8:
    ctx->pc = 0x8005A2B8u;
    // 8005A2B8: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005A2BC:
    // 8005A2BC: subf   r0, r28, r0
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005A2C0:
    // 8005A2C0: cmpw    r4, r0
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

label_8005A2C4:
    // 8005A2C4: bc    4, 1, 0x8005A2CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A2CC;
        }
    }

label_8005A2C8:
    ctx->pc = 0x8005A2C8u;
    ctx->downcount -= 1;
    // 8005A2C8: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A2CC:
    ctx->pc = 0x8005A2CCu;
    ctx->downcount -= 4;
    // 8005A2CC: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A2D0:
    // 8005A2D0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005A2D4:
    ctx->pc = 0x8005A2D4u;
    // 8005A2D4: lwz     r27, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_8005A2D8:
    // 8005A2D8: subf   r29, r0, r29
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005A2DC:
    ctx->downcount -= 2;
    // 8005A2DC: cmplwi  r27, 0x0000
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

label_8005A2E0:
    // 8005A2E0: bc    12, 2, 0x8005A2EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A2EC;
        }
    }

label_8005A2E4:
    ctx->downcount -= 2;
    // 8005A2E4: cmpwi   r29, 0
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

label_8005A2E8:
    // 8005A2E8: bc    4, 2, 0x8005A278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005A278u;
                return;
            }
            goto label_8005A278;
        }
    }

label_8005A2EC:
    ctx->pc = 0x8005A2ECu;
    ctx->downcount -= 2;
    // 8005A2EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005A2F0:
    ctx->pc = 0x8005A2F0u;
    // 8005A2F0: bl      0x8005A30C
    {
            ctx->lr = 0x8005A2F4u;
            goto label_8005A30C;
    }

label_8005A2F4:
    ctx->pc = 0x8005A2F4u;
    ctx->downcount -= 17;
    // 8005A2F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005A2F8:
    ctx->pc = 0x8005A2F8u;
    // 8005A2F8: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005A2FC:
    ctx->pc = 0x8005A2FCu;
    // 8005A2FC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A300:
    ctx->pc = 0x8005A300u;
    // 8005A300: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A304:
    ctx->pc = 0x8005A304u;
    // 8005A304: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005A308:
    ctx->pc = 0x8005A308u;
    // 8005A308: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A30C:
    ctx->pc = 0x8005A30Cu;
    ctx->downcount -= 6;
    // 8005A30C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A310:
    ctx->pc = 0x8005A310u;
    // 8005A310: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A314:
    ctx->pc = 0x8005A314u;
    // 8005A314: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A318:
    ctx->pc = 0x8005A318u;
    // 8005A318: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8005A31C:
    ctx->pc = 0x8005A31Cu;
    // 8005A31C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A320:
    ctx->pc = 0x8005A320u;
    // 8005A320: b       0x8005A330
    {
            goto label_8005A330;
    }

label_8005A324:
    ctx->downcount -= 2;
    // 8005A324: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005A328:
    // 8005A328: bl      0x8005A34C
    {
            ctx->lr = 0x8005A32Cu;
            goto label_8005A34C;
    }

label_8005A32C:
    ctx->pc = 0x8005A32Cu;
    ctx->downcount -= 1;
    // 8005A32C: lwz     r31, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8005A330:
    ctx->downcount -= 2;
    // 8005A330: cmplwi  r31, 0x0000
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

label_8005A334:
    // 8005A334: bc    4, 2, 0x8005A324
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005A324u;
                return;
            }
            goto label_8005A324;
        }
    }

label_8005A338:
    ctx->pc = 0x8005A338u;
    ctx->downcount -= 6;
    // 8005A338: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A33C:
    ctx->pc = 0x8005A33Cu;
    // 8005A33C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8005A340:
    ctx->pc = 0x8005A340u;
    // 8005A340: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A344:
    ctx->pc = 0x8005A344u;
    // 8005A344: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A348:
    ctx->pc = 0x8005A348u;
    // 8005A348: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A34C:
    ctx->pc = 0x8005A34Cu;
    ctx->downcount -= 5;
    // 8005A34C: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005A350:
    ctx->pc = 0x8005A350u;
    // 8005A350: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A354:
    ctx->pc = 0x8005A354u;
    // 8005A354: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8005A358:
    ctx->pc = 0x8005A358u;
    // 8005A358: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A35C:
    ctx->pc = 0x8005A35Cu;
    // 8005A35C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A360:
    ctx->pc = 0x8005A360u;
    ctx->downcount -= 19;
    // 8005A360: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A364:
    ctx->pc = 0x8005A364u;
    // 8005A364: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A368:
    ctx->pc = 0x8005A368u;
    // 8005A368: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A36C:
    ctx->pc = 0x8005A36Cu;
    // 8005A36C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005A370:
    ctx->pc = 0x8005A370u;
    // 8005A370: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005A374:
    ctx->pc = 0x8005A374u;
    // 8005A374: lwz     r31, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8005A378:
    ctx->pc = 0x8005A378u;
    // 8005A378: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A37C:
    ctx->pc = 0x8005A37Cu;
    // 8005A37C: cmpw    r0, r30
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005A380:
    ctx->pc = 0x8005A380u;
    // 8005A380: bc    4, 0, 0x8005A3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A3A4;
        }
    }

label_8005A384:
    ctx->pc = 0x8005A384u;
    ctx->downcount -= 6;
    // 8005A384: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_8005A388:
    ctx->pc = 0x8005A388u;
    // 8005A388: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A38C:
    ctx->pc = 0x8005A38Cu;
    // 8005A38C: addi    r5, r5, 15592
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15592);

label_8005A390:
    ctx->pc = 0x8005A390u;
    // 8005A390: li      r6, 159
    ctx->gpr[6] = (u32)(s32)(159);

label_8005A394:
    ctx->pc = 0x8005A394u;
    // 8005A394: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005A398:
    ctx->pc = 0x8005A398u;
    // 8005A398: bl      0x80055DB0
    {
            ctx->lr = 0x8005A39Cu;
            ctx->pc = 0x80055DB0u;
            return;
    }

label_8005A39C:
    ctx->pc = 0x8005A39Cu;
    ctx->downcount -= 2;
    // 8005A39C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A3A0:
    ctx->pc = 0x8005A3A0u;
    // 8005A3A0: stw     r30, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8005A3A4:
    ctx->pc = 0x8005A3A4u;
    ctx->downcount -= 16;
    // 8005A3A4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005A3A8:
    ctx->pc = 0x8005A3A8u;
    // 8005A3A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A3AC:
    ctx->pc = 0x8005A3ACu;
    // 8005A3AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A3B0:
    ctx->pc = 0x8005A3B0u;
    // 8005A3B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A3B4:
    ctx->pc = 0x8005A3B4u;
    // 8005A3B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A3B8:
    ctx->pc = 0x8005A3B8u;
    ctx->downcount -= 16;
    // 8005A3B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A3BC:
    ctx->pc = 0x8005A3BCu;
    // 8005A3BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A3C0:
    ctx->pc = 0x8005A3C0u;
    // 8005A3C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A3C4:
    ctx->pc = 0x8005A3C4u;
    // 8005A3C4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005A3C8:
    ctx->pc = 0x8005A3C8u;
    // 8005A3C8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A3CC:
    ctx->pc = 0x8005A3CCu;
    // 8005A3CC: bl      0x8005A464
    {
            ctx->lr = 0x8005A3D0u;
            goto label_8005A464;
    }

label_8005A3D0:
    ctx->pc = 0x8005A3D0u;
    ctx->downcount -= 3;
    // 8005A3D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A3D4:
    ctx->pc = 0x8005A3D4u;
    // 8005A3D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A3D8:
    ctx->pc = 0x8005A3D8u;
    // 8005A3D8: bl      0x8005A3F4
    {
            ctx->lr = 0x8005A3DCu;
            goto label_8005A3F4;
    }

label_8005A3DC:
    ctx->pc = 0x8005A3DCu;
    ctx->downcount -= 17;
    // 8005A3DC: stw     r31, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8005A3E0:
    ctx->pc = 0x8005A3E0u;
    // 8005A3E0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005A3E4:
    ctx->pc = 0x8005A3E4u;
    // 8005A3E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A3E8:
    ctx->pc = 0x8005A3E8u;
    // 8005A3E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A3EC:
    ctx->pc = 0x8005A3ECu;
    // 8005A3EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A3F0:
    ctx->pc = 0x8005A3F0u;
    // 8005A3F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A3F4:
    ctx->pc = 0x8005A3F4u;
    ctx->downcount -= 9;
    // 8005A3F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A3F8:
    ctx->pc = 0x8005A3F8u;
    // 8005A3F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A3FC:
    ctx->pc = 0x8005A3FCu;
    // 8005A3FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A400:
    ctx->pc = 0x8005A400u;
    // 8005A400: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005A404:
    ctx->pc = 0x8005A404u;
    // 8005A404: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_8005A408:
    ctx->pc = 0x8005A408u;
    // 8005A408: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A40C:
    ctx->pc = 0x8005A40Cu;
    // 8005A40C: lwz     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005A410:
    ctx->pc = 0x8005A410u;
    // 8005A410: cmplwi  r4, 0x0000
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

label_8005A414:
    ctx->pc = 0x8005A414u;
    // 8005A414: bc    12, 2, 0x8005A424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A424;
        }
    }

label_8005A418:
    ctx->pc = 0x8005A418u;
    ctx->downcount -= 3;
    // 8005A418: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A41C:
    ctx->pc = 0x8005A41Cu;
    // 8005A41C: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A420:
    ctx->pc = 0x8005A420u;
    // 8005A420: b       0x8005A440
    {
            goto label_8005A440;
    }

label_8005A424:
    ctx->pc = 0x8005A424u;
    ctx->downcount -= 6;
    // 8005A424: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005A428:
    ctx->pc = 0x8005A428u;
    // 8005A428: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_8005A42C:
    ctx->pc = 0x8005A42Cu;
    // 8005A42C: addi    r4, r4, 15592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15592);

label_8005A430:
    ctx->pc = 0x8005A430u;
    // 8005A430: li      r5, 132
    ctx->gpr[5] = (u32)(s32)(132);

label_8005A434:
    ctx->pc = 0x8005A434u;
    // 8005A434: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_8005A438:
    ctx->pc = 0x8005A438u;
    // 8005A438: bl      0x80055CEC
    {
            ctx->lr = 0x8005A43Cu;
            ctx->pc = 0x80055CECu;
            return;
    }

label_8005A43C:
    ctx->pc = 0x8005A43Cu;
    ctx->downcount -= 1;
    // 8005A43C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A440:
    ctx->pc = 0x8005A440u;
    ctx->downcount -= 10;
    // 8005A440: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8005A444:
    ctx->pc = 0x8005A444u;
    // 8005A444: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005A448:
    ctx->pc = 0x8005A448u;
    // 8005A448: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A44C:
    ctx->pc = 0x8005A44Cu;
    // 8005A44C: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A450:
    ctx->pc = 0x8005A450u;
    // 8005A450: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A454:
    ctx->pc = 0x8005A454u;
    // 8005A454: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A458:
    ctx->pc = 0x8005A458u;
    // 8005A458: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A45C:
    ctx->pc = 0x8005A45Cu;
    // 8005A45C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A460:
    ctx->pc = 0x8005A460u;
    // 8005A460: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A464:
    ctx->pc = 0x8005A464u;
    ctx->downcount -= 22;
    // 8005A464: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A468:
    ctx->pc = 0x8005A468u;
    // 8005A468: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A46C:
    ctx->pc = 0x8005A46Cu;
    // 8005A46C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A470:
    ctx->pc = 0x8005A470u;
    // 8005A470: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005A474:
    ctx->pc = 0x8005A474u;
    // 8005A474: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A478:
    ctx->pc = 0x8005A478u;
    // 8005A478: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005A47C:
    ctx->pc = 0x8005A47Cu;
    // 8005A47C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A480:
    ctx->pc = 0x8005A480u;
    // 8005A480: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8005A484:
    ctx->pc = 0x8005A484u;
    // 8005A484: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A488:
    ctx->pc = 0x8005A488u;
    // 8005A488: lwz     r31, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8005A48C:
    ctx->pc = 0x8005A48Cu;
    // 8005A48C: cmplwi  r31, 0x0000
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

label_8005A490:
    ctx->pc = 0x8005A490u;
    // 8005A490: bc    12, 2, 0x8005A4CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A4CC;
        }
    }

label_8005A494:
    ctx->pc = 0x8005A494u;
    ctx->downcount -= 5;
    // 8005A494: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A498:
    ctx->pc = 0x8005A498u;
    // 8005A498: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A49C:
    ctx->pc = 0x8005A49Cu;
    // 8005A49C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A4A0:
    ctx->pc = 0x8005A4A0u;
    // 8005A4A0: cmpw    r0, r30
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005A4A4:
    ctx->pc = 0x8005A4A4u;
    // 8005A4A4: bc    4, 0, 0x8005A514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A514;
        }
    }

label_8005A4A8:
    ctx->pc = 0x8005A4A8u;
    ctx->downcount -= 6;
    // 8005A4A8: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_8005A4AC:
    ctx->pc = 0x8005A4ACu;
    // 8005A4AC: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A4B0:
    ctx->pc = 0x8005A4B0u;
    // 8005A4B0: addi    r5, r5, 15592
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15592);

label_8005A4B4:
    ctx->pc = 0x8005A4B4u;
    // 8005A4B4: li      r6, 105
    ctx->gpr[6] = (u32)(s32)(105);

label_8005A4B8:
    ctx->pc = 0x8005A4B8u;
    // 8005A4B8: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005A4BC:
    ctx->pc = 0x8005A4BCu;
    // 8005A4BC: bl      0x80055DB0
    {
            ctx->lr = 0x8005A4C0u;
            ctx->pc = 0x80055DB0u;
            return;
    }

label_8005A4C0:
    ctx->pc = 0x8005A4C0u;
    ctx->downcount -= 3;
    // 8005A4C0: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A4C4:
    ctx->pc = 0x8005A4C4u;
    // 8005A4C4: stw     r30, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8005A4C8:
    ctx->pc = 0x8005A4C8u;
    // 8005A4C8: b       0x8005A514
    {
            goto label_8005A514;
    }

label_8005A4CC:
    ctx->pc = 0x8005A4CCu;
    ctx->downcount -= 6;
    // 8005A4CC: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005A4D0:
    ctx->pc = 0x8005A4D0u;
    // 8005A4D0: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_8005A4D4:
    ctx->pc = 0x8005A4D4u;
    // 8005A4D4: addi    r4, r4, 15592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15592);

label_8005A4D8:
    ctx->pc = 0x8005A4D8u;
    // 8005A4D8: li      r5, 112
    ctx->gpr[5] = (u32)(s32)(112);

label_8005A4DC:
    ctx->pc = 0x8005A4DCu;
    // 8005A4DC: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_8005A4E0:
    ctx->pc = 0x8005A4E0u;
    // 8005A4E0: bl      0x80055CEC
    {
            ctx->lr = 0x8005A4E4u;
            ctx->pc = 0x80055CECu;
            return;
    }

label_8005A4E4:
    ctx->pc = 0x8005A4E4u;
    ctx->downcount -= 4;
    // 8005A4E4: cmpwi   r30, 16
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

label_8005A4E8:
    ctx->pc = 0x8005A4E8u;
    // 8005A4E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A4EC:
    ctx->pc = 0x8005A4ECu;
    // 8005A4EC: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_8005A4F0:
    ctx->pc = 0x8005A4F0u;
    // 8005A4F0: bc    12, 0, 0x8005A4F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A4F8;
        }
    }

label_8005A4F4:
    ctx->pc = 0x8005A4F4u;
    ctx->downcount -= 1;
    // 8005A4F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A4F8:
    ctx->pc = 0x8005A4F8u;
    ctx->downcount -= 5;
    // 8005A4F8: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005A4FC:
    ctx->pc = 0x8005A4FCu;
    // 8005A4FC: li      r5, 113
    ctx->gpr[5] = (u32)(s32)(113);

label_8005A500:
    ctx->pc = 0x8005A500u;
    // 8005A500: addi    r4, r4, 15592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15592);

label_8005A504:
    ctx->pc = 0x8005A504u;
    // 8005A504: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_8005A508:
    ctx->pc = 0x8005A508u;
    // 8005A508: bl      0x80055CEC
    {
            ctx->lr = 0x8005A50Cu;
            ctx->pc = 0x80055CECu;
            return;
    }

label_8005A50C:
    ctx->pc = 0x8005A50Cu;
    ctx->downcount -= 2;
    // 8005A50C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A510:
    ctx->pc = 0x8005A510u;
    // 8005A510: stw     r30, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8005A514:
    ctx->pc = 0x8005A514u;
    ctx->downcount -= 20;
    // 8005A514: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8005A518:
    ctx->pc = 0x8005A518u;
    // 8005A518: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005A51C:
    ctx->pc = 0x8005A51Cu;
    // 8005A51C: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A520:
    ctx->pc = 0x8005A520u;
    // 8005A520: stw     r29, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8005A524:
    ctx->pc = 0x8005A524u;
    // 8005A524: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005A528:
    ctx->pc = 0x8005A528u;
    // 8005A528: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A52C:
    ctx->pc = 0x8005A52Cu;
    // 8005A52C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A530:
    ctx->pc = 0x8005A530u;
    // 8005A530: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005A534:
    ctx->pc = 0x8005A534u;
    // 8005A534: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A538:
    ctx->pc = 0x8005A538u;
    ctx->downcount -= 6;
    // 8005A538: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A53C:
    ctx->pc = 0x8005A53Cu;
    // 8005A53C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A540:
    ctx->pc = 0x8005A540u;
    // 8005A540: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A544:
    ctx->pc = 0x8005A544u;
    // 8005A544: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8005A548:
    ctx->pc = 0x8005A548u;
    // 8005A548: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A54C:
    ctx->pc = 0x8005A54Cu;
    // 8005A54C: bl      0x8005A560
    {
            ctx->lr = 0x8005A550u;
            goto label_8005A560;
    }

label_8005A550:
    ctx->pc = 0x8005A550u;
    ctx->downcount -= 5;
    // 8005A550: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A554:
    ctx->pc = 0x8005A554u;
    // 8005A554: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A558:
    ctx->pc = 0x8005A558u;
    // 8005A558: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A55C:
    ctx->pc = 0x8005A55Cu;
    // 8005A55C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A560:
    ctx->pc = 0x8005A560u;
    ctx->downcount -= 18;
    // 8005A560: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A564:
    ctx->pc = 0x8005A564u;
    // 8005A564: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A568:
    ctx->pc = 0x8005A568u;
    // 8005A568: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A56C:
    ctx->pc = 0x8005A56Cu;
    // 8005A56C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005A570:
    ctx->pc = 0x8005A570u;
    // 8005A570: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A574:
    ctx->pc = 0x8005A574u;
    // 8005A574: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A578:
    ctx->pc = 0x8005A578u;
    // 8005A578: cmpwi   r0, 0
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

label_8005A57C:
    ctx->pc = 0x8005A57Cu;
    // 8005A57C: bc    12, 2, 0x8005A624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A624;
        }
    }

label_8005A580:
    ctx->pc = 0x8005A580u;
    ctx->downcount -= 5;
    // 8005A580: lwz     r0, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A584:
    ctx->pc = 0x8005A584u;
    // 8005A584: lwz     r30, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8005A588:
    ctx->pc = 0x8005A588u;
    // 8005A588: cmpwi   r0, 0
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

label_8005A58C:
    ctx->pc = 0x8005A58Cu;
    // 8005A58C: lwz     r29, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8005A590:
    ctx->pc = 0x8005A590u;
    // 8005A590: bc    4, 2, 0x8005A5A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A5A8;
        }
    }

label_8005A594:
    ctx->pc = 0x8005A594u;
    ctx->downcount -= 4;
    // 8005A594: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005A598:
    ctx->pc = 0x8005A598u;
    // 8005A598: li      r5, 62
    ctx->gpr[5] = (u32)(s32)(62);

label_8005A59C:
    ctx->pc = 0x8005A59Cu;
    // 8005A59C: addi    r4, r4, 15592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15592);

label_8005A5A0:
    ctx->pc = 0x8005A5A0u;
    // 8005A5A0: bl      0x80055E80
    {
            ctx->lr = 0x8005A5A4u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005A5A4:
    ctx->pc = 0x8005A5A4u;
    ctx->downcount -= 1;
    // 8005A5A4: b       0x8005A624
    {
            goto label_8005A624;
    }

label_8005A5A8:
    ctx->pc = 0x8005A5A8u;
    ctx->downcount -= 3;
    // 8005A5A8: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005A5AC:
    ctx->pc = 0x8005A5ACu;
    // 8005A5AC: addi    r31, r3, 15592
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(15592);

label_8005A5B0:
    ctx->pc = 0x8005A5B0u;
    // 8005A5B0: b       0x8005A5E4
    {
            goto label_8005A5E4;
    }

label_8005A5B4:
    ctx->downcount -= 5;
    // 8005A5B4: or   r28, r30, r30
    {
        ctx->gpr[28] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A5B8:
    ctx->pc = 0x8005A5B8u;
    // 8005A5B8: lwz     r30, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8005A5BC:
    ctx->pc = 0x8005A5BCu;
    // 8005A5BC: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005A5C0:
    // 8005A5C0: cmplwi  r3, 0x0000
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

label_8005A5C4:
    // 8005A5C4: bc    12, 2, 0x8005A5D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A5D4;
        }
    }

label_8005A5C8:
    ctx->downcount -= 3;
    // 8005A5C8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005A5CC:
    // 8005A5CC: li      r5, 71
    ctx->gpr[5] = (u32)(s32)(71);

label_8005A5D0:
    // 8005A5D0: bl      0x80055E80
    {
            ctx->lr = 0x8005A5D4u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005A5D4:
    ctx->downcount -= 4;
    // 8005A5D4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005A5D8:
    // 8005A5D8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005A5DC:
    // 8005A5DC: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_8005A5E0:
    // 8005A5E0: bl      0x80055E80
    {
            ctx->lr = 0x8005A5E4u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005A5E4:
    ctx->downcount -= 2;
    // 8005A5E4: cmplwi  r30, 0x0000
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

label_8005A5E8:
    // 8005A5E8: bc    4, 2, 0x8005A5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005A5B4u;
                return;
            }
            goto label_8005A5B4;
        }
    }

label_8005A5EC:
    ctx->pc = 0x8005A5ECu;
    ctx->downcount -= 5;
    // 8005A5EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8005A5F0:
    ctx->pc = 0x8005A5F0u;
    // 8005A5F0: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005A5F4:
    ctx->pc = 0x8005A5F4u;
    // 8005A5F4: stw     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A5F8:
    ctx->pc = 0x8005A5F8u;
    // 8005A5F8: addi    r31, r3, 15592
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(15592);

label_8005A5FC:
    ctx->pc = 0x8005A5FCu;
    // 8005A5FC: b       0x8005A614
    {
            goto label_8005A614;
    }

label_8005A600:
    ctx->downcount -= 5;
    // 8005A600: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005A604:
    ctx->pc = 0x8005A604u;
    // 8005A604: lwz     r29, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8005A608:
    // 8005A608: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005A60C:
    // 8005A60C: li      r5, 79
    ctx->gpr[5] = (u32)(s32)(79);

label_8005A610:
    // 8005A610: bl      0x80055E80
    {
            ctx->lr = 0x8005A614u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005A614:
    ctx->downcount -= 2;
    // 8005A614: cmplwi  r29, 0x0000
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

label_8005A618:
    // 8005A618: bc    4, 2, 0x8005A600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005A600u;
                return;
            }
            goto label_8005A600;
        }
    }

label_8005A61C:
    ctx->pc = 0x8005A61Cu;
    ctx->downcount -= 2;
    // 8005A61C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8005A620:
    ctx->pc = 0x8005A620u;
    // 8005A620: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A624:
    ctx->pc = 0x8005A624u;
    ctx->downcount -= 16;
    // 8005A624: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005A628:
    ctx->pc = 0x8005A628u;
    // 8005A628: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A62C:
    ctx->pc = 0x8005A62Cu;
    // 8005A62C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A630:
    ctx->pc = 0x8005A630u;
    // 8005A630: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005A634:
    ctx->pc = 0x8005A634u;
    // 8005A634: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A638:
    ctx->pc = 0x8005A638u;
    ctx->downcount -= 10;
    // 8005A638: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A63C:
    ctx->pc = 0x8005A63Cu;
    // 8005A63C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A640:
    ctx->pc = 0x8005A640u;
    // 8005A640: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005A644:
    ctx->pc = 0x8005A644u;
    // 8005A644: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8005A648:
    ctx->pc = 0x8005A648u;
    // 8005A648: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A64C:
    ctx->pc = 0x8005A64Cu;
    // 8005A64C: addi    r5, r4, 15592
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15592);

label_8005A650:
    ctx->pc = 0x8005A650u;
    // 8005A650: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8005A654:
    ctx->pc = 0x8005A654u;
    // 8005A654: li      r6, 39
    ctx->gpr[6] = (u32)(s32)(39);

label_8005A658:
    ctx->pc = 0x8005A658u;
    // 8005A658: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005A65C:
    ctx->pc = 0x8005A65Cu;
    // 8005A65C: bl      0x80055D58
    {
            ctx->lr = 0x8005A660u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005A660:
    ctx->pc = 0x8005A660u;
    ctx->downcount -= 5;
    // 8005A660: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A664:
    ctx->pc = 0x8005A664u;
    // 8005A664: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A668:
    ctx->pc = 0x8005A668u;
    // 8005A668: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A66C:
    ctx->pc = 0x8005A66Cu;
    // 8005A66C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A670:
    ctx->pc = 0x8005A670u;
    ctx->downcount -= 18;
    // 8005A670: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A674:
    ctx->pc = 0x8005A674u;
    // 8005A674: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A678:
    ctx->pc = 0x8005A678u;
    // 8005A678: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A67C:
    ctx->pc = 0x8005A67Cu;
    // 8005A67C: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005A680:
    ctx->pc = 0x8005A680u;
    // 8005A680: or.   r30, r5, r5
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

label_8005A684:
    ctx->pc = 0x8005A684u;
    // 8005A684: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A688:
    ctx->pc = 0x8005A688u;
    // 8005A688: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005A68C:
    ctx->pc = 0x8005A68Cu;
    // 8005A68C: bc    12, 2, 0x8005A7A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A7A8;
        }
    }

label_8005A690:
    ctx->pc = 0x8005A690u;
    ctx->downcount -= 3;
    // 8005A690: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005A694:
    ctx->pc = 0x8005A694u;
    // 8005A694: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A698:
    ctx->pc = 0x8005A698u;
    // 8005A698: bl      0x800613E4
    {
            ctx->lr = 0x8005A69Cu;
            ctx->pc = 0x800613E4u;
            return;
    }

label_8005A69C:
    ctx->pc = 0x8005A69Cu;
    ctx->downcount -= 3;
    // 8005A69C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A6A0:
    ctx->pc = 0x8005A6A0u;
    // 8005A6A0: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_8005A6A4:
    ctx->pc = 0x8005A6A4u;
    // 8005A6A4: bl      0x80060DE4
    {
            ctx->lr = 0x8005A6A8u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005A6A8:
    ctx->pc = 0x8005A6A8u;
    ctx->downcount -= 5;
    // 8005A6A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A6AC:
    ctx->pc = 0x8005A6ACu;
    // 8005A6AC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8005A6B0:
    ctx->pc = 0x8005A6B0u;
    // 8005A6B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005A6B4:
    ctx->pc = 0x8005A6B4u;
    // 8005A6B4: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_8005A6B8:
    ctx->pc = 0x8005A6B8u;
    // 8005A6B8: bl      0x800050B4
    {
            ctx->lr = 0x8005A6BCu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8005A6BC:
    ctx->pc = 0x8005A6BCu;
    ctx->downcount -= 4;
    // 8005A6BC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A6C0:
    ctx->pc = 0x8005A6C0u;
    // 8005A6C0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8005A6C4:
    ctx->pc = 0x8005A6C4u;
    // 8005A6C4: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_8005A6C8:
    ctx->pc = 0x8005A6C8u;
    // 8005A6C8: bl      0x8005B160
    {
            ctx->lr = 0x8005A6CCu;
            goto label_8005B160;
    }

label_8005A6CC:
    ctx->pc = 0x8005A6CCu;
    ctx->downcount -= 5;
    // 8005A6CC: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005A6D0:
    ctx->pc = 0x8005A6D0u;
    // 8005A6D0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8005A6D4:
    ctx->pc = 0x8005A6D4u;
    // 8005A6D4: addi    r4, r4, 15608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15608);

label_8005A6D8:
    ctx->pc = 0x8005A6D8u;
    // 8005A6D8: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_8005A6DC:
    ctx->pc = 0x8005A6DCu;
    // 8005A6DC: bl      0x8001213C
    {
            ctx->lr = 0x8005A6E0u;
            ctx->pc = 0x8001213Cu;
            return;
    }

label_8005A6E0:
    ctx->pc = 0x8005A6E0u;
    ctx->downcount -= 2;
    // 8005A6E0: cmpwi   r3, 0
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

label_8005A6E4:
    ctx->pc = 0x8005A6E4u;
    // 8005A6E4: bc    12, 2, 0x8005A6F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A6F0;
        }
    }

label_8005A6E8:
    ctx->pc = 0x8005A6E8u;
    ctx->downcount -= 2;
    // 8005A6E8: li      r3, -132
    ctx->gpr[3] = (u32)(s32)(-132);

label_8005A6EC:
    ctx->pc = 0x8005A6ECu;
    // 8005A6EC: b       0x8005A7AC
    {
            goto label_8005A7AC;
    }

label_8005A6F0:
    ctx->pc = 0x8005A6F0u;
    ctx->downcount -= 2;
    // 8005A6F0: cmpwi   r31, 3
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

label_8005A6F4:
    ctx->pc = 0x8005A6F4u;
    // 8005A6F4: bc    12, 2, 0x8005A74C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A74C;
        }
    }

label_8005A6F8:
    ctx->pc = 0x8005A6F8u;
    ctx->downcount -= 1;
    // 8005A6F8: bc    4, 0, 0x8005A708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A708;
        }
    }

label_8005A6FC:
    ctx->pc = 0x8005A6FCu;
    ctx->downcount -= 2;
    // 8005A6FC: cmpwi   r31, 1
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005A700:
    ctx->pc = 0x8005A700u;
    // 8005A700: bc    12, 2, 0x8005A714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A714;
        }
    }

label_8005A704:
    ctx->pc = 0x8005A704u;
    ctx->downcount -= 1;
    // 8005A704: b       0x8005A7A0
    {
            goto label_8005A7A0;
    }

label_8005A708:
    ctx->pc = 0x8005A708u;
    ctx->downcount -= 2;
    // 8005A708: cmpwi   r31, 5
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

label_8005A70C:
    ctx->pc = 0x8005A70Cu;
    // 8005A70C: bc    12, 2, 0x8005A770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A770;
        }
    }

label_8005A710:
    ctx->pc = 0x8005A710u;
    ctx->downcount -= 1;
    // 8005A710: b       0x8005A7A0
    {
            goto label_8005A7A0;
    }

label_8005A714:
    ctx->pc = 0x8005A714u;
    ctx->downcount -= 3;
    // 8005A714: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A718:
    ctx->pc = 0x8005A718u;
    // 8005A718: cmpwi   r0, 0
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

label_8005A71C:
    ctx->pc = 0x8005A71Cu;
    // 8005A71C: bc    4, 2, 0x8005A728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A728;
        }
    }

label_8005A720:
    ctx->pc = 0x8005A720u;
    ctx->downcount -= 2;
    // 8005A720: li      r3, -133
    ctx->gpr[3] = (u32)(s32)(-133);

label_8005A724:
    ctx->pc = 0x8005A724u;
    // 8005A724: b       0x8005A7AC
    {
            goto label_8005A7AC;
    }

label_8005A728:
    ctx->pc = 0x8005A728u;
    ctx->downcount -= 3;
    // 8005A728: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A72C:
    ctx->pc = 0x8005A72Cu;
    // 8005A72C: cmpwi   r0, 0
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

label_8005A730:
    ctx->pc = 0x8005A730u;
    // 8005A730: bc    12, 2, 0x8005A73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A73C;
        }
    }

label_8005A734:
    ctx->pc = 0x8005A734u;
    ctx->downcount -= 2;
    // 8005A734: li      r3, -133
    ctx->gpr[3] = (u32)(s32)(-133);

label_8005A738:
    ctx->pc = 0x8005A738u;
    // 8005A738: b       0x8005A7AC
    {
            goto label_8005A7AC;
    }

label_8005A73C:
    ctx->pc = 0x8005A73Cu;
    ctx->downcount -= 3;
    // 8005A73C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005A740:
    ctx->pc = 0x8005A740u;
    // 8005A740: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A744:
    ctx->pc = 0x8005A744u;
    // 8005A744: bl      0x8005ACEC
    {
            ctx->lr = 0x8005A748u;
            goto label_8005ACEC;
    }

label_8005A748:
    ctx->pc = 0x8005A748u;
    ctx->downcount -= 1;
    // 8005A748: b       0x8005A7AC
    {
            goto label_8005A7AC;
    }

label_8005A74C:
    ctx->pc = 0x8005A74Cu;
    ctx->downcount -= 3;
    // 8005A74C: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A750:
    ctx->pc = 0x8005A750u;
    // 8005A750: cmpwi   r0, 0
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

label_8005A754:
    ctx->pc = 0x8005A754u;
    // 8005A754: bc    4, 2, 0x8005A760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A760;
        }
    }

label_8005A758:
    ctx->pc = 0x8005A758u;
    ctx->downcount -= 2;
    // 8005A758: li      r3, -133
    ctx->gpr[3] = (u32)(s32)(-133);

label_8005A75C:
    ctx->pc = 0x8005A75Cu;
    // 8005A75C: b       0x8005A7AC
    {
            goto label_8005A7AC;
    }

label_8005A760:
    ctx->pc = 0x8005A760u;
    ctx->downcount -= 3;
    // 8005A760: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005A764:
    ctx->pc = 0x8005A764u;
    // 8005A764: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A768:
    ctx->pc = 0x8005A768u;
    // 8005A768: bl      0x8005AB7C
    {
            ctx->lr = 0x8005A76Cu;
            goto label_8005AB7C;
    }

label_8005A76C:
    ctx->pc = 0x8005A76Cu;
    ctx->downcount -= 1;
    // 8005A76C: b       0x8005A7AC
    {
            goto label_8005A7AC;
    }

label_8005A770:
    ctx->pc = 0x8005A770u;
    ctx->downcount -= 3;
    // 8005A770: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A774:
    ctx->pc = 0x8005A774u;
    // 8005A774: cmpwi   r0, 0
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

label_8005A778:
    ctx->pc = 0x8005A778u;
    // 8005A778: bc    12, 2, 0x8005A788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005A788;
        }
    }

label_8005A77C:
    ctx->pc = 0x8005A77Cu;
    ctx->downcount -= 3;
    // 8005A77C: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A780:
    ctx->pc = 0x8005A780u;
    // 8005A780: cmplwi  r0, 0x0000
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

label_8005A784:
    ctx->pc = 0x8005A784u;
    // 8005A784: bc    4, 2, 0x8005A790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A790;
        }
    }

label_8005A788:
    ctx->pc = 0x8005A788u;
    ctx->downcount -= 2;
    // 8005A788: li      r3, -133
    ctx->gpr[3] = (u32)(s32)(-133);

label_8005A78C:
    ctx->pc = 0x8005A78Cu;
    // 8005A78C: b       0x8005A7AC
    {
            goto label_8005A7AC;
    }

label_8005A790:
    ctx->pc = 0x8005A790u;
    ctx->downcount -= 3;
    // 8005A790: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005A794:
    ctx->pc = 0x8005A794u;
    // 8005A794: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_8005A798:
    ctx->pc = 0x8005A798u;
    // 8005A798: bl      0x8005A7C0
    {
            ctx->lr = 0x8005A79Cu;
            goto label_8005A7C0;
    }

label_8005A79C:
    ctx->pc = 0x8005A79Cu;
    ctx->downcount -= 1;
    // 8005A79C: b       0x8005A7AC
    {
            goto label_8005A7AC;
    }

label_8005A7A0:
    ctx->pc = 0x8005A7A0u;
    ctx->downcount -= 2;
    // 8005A7A0: li      r3, -133
    ctx->gpr[3] = (u32)(s32)(-133);

label_8005A7A4:
    ctx->pc = 0x8005A7A4u;
    // 8005A7A4: b       0x8005A7AC
    {
            goto label_8005A7AC;
    }

label_8005A7A8:
    ctx->pc = 0x8005A7A8u;
    ctx->downcount -= 1;
    // 8005A7A8: li      r3, -133
    ctx->gpr[3] = (u32)(s32)(-133);

label_8005A7AC:
    ctx->pc = 0x8005A7ACu;
    ctx->downcount -= 16;
    // 8005A7AC: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005A7B0:
    ctx->pc = 0x8005A7B0u;
    // 8005A7B0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A7B4:
    ctx->pc = 0x8005A7B4u;
    // 8005A7B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005A7B8:
    ctx->pc = 0x8005A7B8u;
    // 8005A7B8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8005A7BC:
    ctx->pc = 0x8005A7BCu;
    // 8005A7BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005A7C0:
    ctx->pc = 0x8005A7C0u;
    ctx->downcount -= 19;
    // 8005A7C0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005A7C4:
    ctx->pc = 0x8005A7C4u;
    // 8005A7C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005A7C8:
    ctx->pc = 0x8005A7C8u;
    // 8005A7C8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A7CC:
    ctx->pc = 0x8005A7CCu;
    // 8005A7CC: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005A7D0:
    ctx->pc = 0x8005A7D0u;
    // 8005A7D0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005A7D4:
    ctx->pc = 0x8005A7D4u;
    // 8005A7D4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005A7D8:
    ctx->pc = 0x8005A7D8u;
    // 8005A7D8: lwz     r31, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8005A7DC:
    ctx->pc = 0x8005A7DCu;
    // 8005A7DC: cmplwi  r31, 0x0000
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

label_8005A7E0:
    ctx->pc = 0x8005A7E0u;
    // 8005A7E0: bc    4, 2, 0x8005A7EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005A7EC;
        }
    }

label_8005A7E4:
    ctx->pc = 0x8005A7E4u;
    ctx->downcount -= 2;
    // 8005A7E4: li      r3, -129
    ctx->gpr[3] = (u32)(s32)(-129);

label_8005A7E8:
    ctx->pc = 0x8005A7E8u;
    // 8005A7E8: b       0x8005AB68
    {
            goto label_8005AB68;
    }

label_8005A7EC:
    ctx->pc = 0x8005A7ECu;
    ctx->downcount -= 3;
    // 8005A7EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A7F0:
    ctx->pc = 0x8005A7F0u;
    // 8005A7F0: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_8005A7F4:
    ctx->pc = 0x8005A7F4u;
    // 8005A7F4: bl      0x80060DE4
    {
            ctx->lr = 0x8005A7F8u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005A7F8:
    ctx->pc = 0x8005A7F8u;
    ctx->downcount -= 7;
    // 8005A7F8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8005A7FC:
    ctx->pc = 0x8005A7FCu;
    // 8005A7FC: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005A800:
    ctx->pc = 0x8005A800u;
    // 8005A800: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A804:
    ctx->pc = 0x8005A804u;
    // 8005A804: addi    r27, r3, 15616
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(15616);

label_8005A808:
    ctx->pc = 0x8005A808u;
    // 8005A808: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8005A80C:
    ctx->pc = 0x8005A80Cu;
    // 8005A80C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005A810:
    ctx->pc = 0x8005A810u;
    // 8005A810: b       0x8005A850
    {
            goto label_8005A850;
    }

label_8005A814:
    ctx->downcount -= 6;
    // 8005A814: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005A818:
    // 8005A818: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8005A81C:
    // 8005A81C: li      r4, 36
    ctx->gpr[4] = (u32)(s32)(36);

label_8005A820:
    // 8005A820: li      r6, 235
    ctx->gpr[6] = (u32)(s32)(235);

label_8005A824:
    // 8005A824: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005A828:
    // 8005A828: bl      0x80055D58
    {
            ctx->lr = 0x8005A82Cu;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005A82C:
    ctx->downcount -= 5;
    // 8005A82C: addi    r0, r28, 2080
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(2080);

label_8005A830:
    ctx->pc = 0x8005A830u;
    // 8005A830: stwx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A834:
    // 8005A834: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A838:
    ctx->pc = 0x8005A838u;
    // 8005A838: lwzx    r4, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005A83C:
    // 8005A83C: bl      0x80057448
    {
            ctx->lr = 0x8005A840u;
            ctx->pc = 0x80057448u;
            return;
    }

label_8005A840:
    ctx->downcount -= 2;
    // 8005A840: cmpwi   r3, 0
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

label_8005A844:
    // 8005A844: bc    4, 2, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005A848:
    ctx->downcount -= 2;
    // 8005A848: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8005A84C:
    // 8005A84C: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005A850:
    ctx->pc = 0x8005A850u;
    ctx->downcount -= 3;
    // 8005A850: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A854:
    // 8005A854: cmpw    r25, r0
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

label_8005A858:
    // 8005A858: bc    12, 0, 0x8005A814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005A814u;
                return;
            }
            goto label_8005A814;
        }
    }

label_8005A85C:
    ctx->pc = 0x8005A85Cu;
    ctx->downcount -= 3;
    // 8005A85C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A860:
    ctx->pc = 0x8005A860u;
    // 8005A860: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_8005A864:
    ctx->pc = 0x8005A864u;
    // 8005A864: bl      0x80060DE4
    {
            ctx->lr = 0x8005A868u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005A868:
    ctx->pc = 0x8005A868u;
    ctx->downcount -= 5;
    // 8005A868: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8005A86C:
    ctx->pc = 0x8005A86Cu;
    // 8005A86C: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8005A870:
    ctx->pc = 0x8005A870u;
    // 8005A870: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A874:
    ctx->pc = 0x8005A874u;
    // 8005A874: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005A878:
    ctx->pc = 0x8005A878u;
    // 8005A878: b       0x8005A8AC
    {
            goto label_8005A8AC;
    }

label_8005A87C:
    ctx->downcount -= 3;
    // 8005A87C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A880:
    // 8005A880: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8005A884:
    // 8005A884: bl      0x80060DE4
    {
            ctx->lr = 0x8005A888u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005A888:
    ctx->downcount -= 5;
    // 8005A888: addi    r0, r28, 800
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(800);

label_8005A88C:
    ctx->pc = 0x8005A88Cu;
    // 8005A88C: stwx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A890:
    ctx->pc = 0x8005A890u;
    // 8005A890: lwzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A894:
    // 8005A894: cmpwi   r0, 0
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

label_8005A898:
    // 8005A898: bc    12, 0, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005A89C:
    ctx->downcount -= 2;
    // 8005A89C: cmpwi   r0, 1
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

label_8005A8A0:
    // 8005A8A0: bc    4, 0, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005A8A4:
    ctx->downcount -= 2;
    // 8005A8A4: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8005A8A8:
    // 8005A8A8: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005A8AC:
    ctx->pc = 0x8005A8ACu;
    ctx->downcount -= 3;
    // 8005A8AC: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A8B0:
    // 8005A8B0: cmpw    r25, r0
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

label_8005A8B4:
    // 8005A8B4: bc    12, 0, 0x8005A87C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005A87Cu;
                return;
            }
            goto label_8005A87C;
        }
    }

label_8005A8B8:
    ctx->pc = 0x8005A8B8u;
    ctx->downcount -= 3;
    // 8005A8B8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A8BC:
    ctx->pc = 0x8005A8BCu;
    // 8005A8BC: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_8005A8C0:
    ctx->pc = 0x8005A8C0u;
    // 8005A8C0: bl      0x80060DE4
    {
            ctx->lr = 0x8005A8C4u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005A8C4:
    ctx->pc = 0x8005A8C4u;
    ctx->downcount -= 7;
    // 8005A8C4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8005A8C8:
    ctx->pc = 0x8005A8C8u;
    // 8005A8C8: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8005A8CC:
    ctx->pc = 0x8005A8CCu;
    // 8005A8CC: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A8D0:
    ctx->pc = 0x8005A8D0u;
    // 8005A8D0: addi    r27, r3, 32536
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(32536);

label_8005A8D4:
    ctx->pc = 0x8005A8D4u;
    // 8005A8D4: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8005A8D8:
    ctx->pc = 0x8005A8D8u;
    // 8005A8D8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005A8DC:
    ctx->pc = 0x8005A8DCu;
    // 8005A8DC: b       0x8005A93C
    {
            goto label_8005A93C;
    }

label_8005A8E0:
    ctx->downcount -= 3;
    // 8005A8E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A8E4:
    // 8005A8E4: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8005A8E8:
    // 8005A8E8: bl      0x80060DE4
    {
            ctx->lr = 0x8005A8ECu;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005A8EC:
    ctx->downcount -= 5;
    // 8005A8EC: add   r26, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_8005A8F0:
    ctx->pc = 0x8005A8F0u;
    // 8005A8F0: stw     r3, 1056(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1056);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A8F4:
    ctx->pc = 0x8005A8F4u;
    // 8005A8F4: lwz     r0, 1056(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A8F8:
    // 8005A8F8: cmpwi   r0, 0
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

label_8005A8FC:
    // 8005A8FC: bc    12, 0, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005A900:
    ctx->downcount -= 2;
    // 8005A900: cmpwi   r0, 2
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

label_8005A904:
    // 8005A904: bc    4, 0, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005A908:
    ctx->downcount -= 8;
    // 8005A908: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005A90C:
    // 8005A90C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005A910:
    ctx->pc = 0x8005A910u;
    // 8005A910: lwzx    r5, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005A914:
    // 8005A914: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A918:
    ctx->pc = 0x8005A918u;
    // 8005A918: lwz     r12, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005A91C:
    ctx->pc = 0x8005A91Cu;
    // 8005A91C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005A920:
    ctx->pc = 0x8005A920u;
    // 8005A920: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005A924u;
            ctx->pc = target;
            return;
        }
    }

label_8005A924:
    ctx->pc = 0x8005A924u;
    ctx->downcount -= 4;
    // 8005A924: stw     r3, 1312(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A928:
    ctx->pc = 0x8005A928u;
    // 8005A928: lwz     r0, 1312(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1312);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A92C:
    // 8005A92C: cmplwi  r0, 0x0000
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

label_8005A930:
    // 8005A930: bc    12, 2, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005A934:
    ctx->downcount -= 2;
    // 8005A934: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8005A938:
    // 8005A938: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005A93C:
    ctx->pc = 0x8005A93Cu;
    ctx->downcount -= 3;
    // 8005A93C: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A940:
    // 8005A940: cmpw    r25, r0
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

label_8005A944:
    // 8005A944: bc    12, 0, 0x8005A8E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005A8E0u;
                return;
            }
            goto label_8005A8E0;
        }
    }

label_8005A948:
    ctx->pc = 0x8005A948u;
    ctx->downcount -= 3;
    // 8005A948: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A94C:
    ctx->pc = 0x8005A94Cu;
    // 8005A94C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_8005A950:
    ctx->pc = 0x8005A950u;
    // 8005A950: bl      0x80060DE4
    {
            ctx->lr = 0x8005A954u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005A954:
    ctx->pc = 0x8005A954u;
    ctx->downcount -= 7;
    // 8005A954: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8005A958:
    ctx->pc = 0x8005A958u;
    // 8005A958: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8005A95C:
    ctx->pc = 0x8005A95Cu;
    // 8005A95C: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A960:
    ctx->pc = 0x8005A960u;
    // 8005A960: addi    r27, r3, 32544
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(32544);

label_8005A964:
    ctx->pc = 0x8005A964u;
    // 8005A964: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8005A968:
    ctx->pc = 0x8005A968u;
    // 8005A968: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005A96C:
    ctx->pc = 0x8005A96Cu;
    // 8005A96C: b       0x8005A9CC
    {
            goto label_8005A9CC;
    }

label_8005A970:
    ctx->downcount -= 3;
    // 8005A970: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A974:
    // 8005A974: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8005A978:
    // 8005A978: bl      0x80060DE4
    {
            ctx->lr = 0x8005A97Cu;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005A97C:
    ctx->downcount -= 5;
    // 8005A97C: add   r26, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_8005A980:
    ctx->pc = 0x8005A980u;
    // 8005A980: stw     r3, 1568(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1568);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A984:
    ctx->pc = 0x8005A984u;
    // 8005A984: lwz     r0, 1568(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A988:
    // 8005A988: cmpwi   r0, 0
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

label_8005A98C:
    // 8005A98C: bc    12, 0, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005A990:
    ctx->downcount -= 2;
    // 8005A990: cmpwi   r0, 3
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

label_8005A994:
    // 8005A994: bc    4, 0, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005A998:
    ctx->downcount -= 8;
    // 8005A998: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005A99C:
    // 8005A99C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005A9A0:
    ctx->pc = 0x8005A9A0u;
    // 8005A9A0: lwzx    r5, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005A9A4:
    // 8005A9A4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A9A8:
    ctx->pc = 0x8005A9A8u;
    // 8005A9A8: lwz     r12, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005A9AC:
    ctx->pc = 0x8005A9ACu;
    // 8005A9AC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005A9B0:
    ctx->pc = 0x8005A9B0u;
    // 8005A9B0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005A9B4u;
            ctx->pc = target;
            return;
        }
    }

label_8005A9B4:
    ctx->pc = 0x8005A9B4u;
    ctx->downcount -= 4;
    // 8005A9B4: stw     r3, 1824(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1824);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005A9B8:
    ctx->pc = 0x8005A9B8u;
    // 8005A9B8: lwz     r0, 1824(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A9BC:
    // 8005A9BC: cmplwi  r0, 0x0000
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

label_8005A9C0:
    // 8005A9C0: bc    12, 2, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005A9C4:
    ctx->downcount -= 2;
    // 8005A9C4: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8005A9C8:
    // 8005A9C8: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005A9CC:
    ctx->pc = 0x8005A9CCu;
    ctx->downcount -= 3;
    // 8005A9CC: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005A9D0:
    // 8005A9D0: cmpw    r25, r0
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

label_8005A9D4:
    // 8005A9D4: bc    12, 0, 0x8005A970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005A970u;
                return;
            }
            goto label_8005A970;
        }
    }

label_8005A9D8:
    ctx->pc = 0x8005A9D8u;
    ctx->downcount -= 3;
    // 8005A9D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005A9DC:
    ctx->pc = 0x8005A9DCu;
    // 8005A9DC: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_8005A9E0:
    ctx->pc = 0x8005A9E0u;
    // 8005A9E0: bl      0x80060DE4
    {
            ctx->lr = 0x8005A9E4u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005A9E4:
    ctx->pc = 0x8005A9E4u;
    ctx->downcount -= 7;
    // 8005A9E4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8005A9E8:
    ctx->pc = 0x8005A9E8u;
    // 8005A9E8: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8005A9EC:
    ctx->pc = 0x8005A9ECu;
    // 8005A9EC: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005A9F0:
    ctx->pc = 0x8005A9F0u;
    // 8005A9F0: addi    r27, r3, 32556
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(32556);

label_8005A9F4:
    ctx->pc = 0x8005A9F4u;
    // 8005A9F4: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8005A9F8:
    ctx->pc = 0x8005A9F8u;
    // 8005A9F8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005A9FC:
    ctx->pc = 0x8005A9FCu;
    // 8005A9FC: b       0x8005AA5C
    {
            goto label_8005AA5C;
    }

label_8005AA00:
    ctx->downcount -= 3;
    // 8005AA00: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AA04:
    // 8005AA04: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8005AA08:
    // 8005AA08: bl      0x80060DE4
    {
            ctx->lr = 0x8005AA0Cu;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AA0C:
    ctx->downcount -= 5;
    // 8005AA0C: add   r26, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_8005AA10:
    ctx->pc = 0x8005AA10u;
    // 8005AA10: stw     r3, 288(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AA14:
    ctx->pc = 0x8005AA14u;
    // 8005AA14: lwz     r0, 288(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AA18:
    // 8005AA18: cmpwi   r0, 0
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

label_8005AA1C:
    // 8005AA1C: bc    12, 0, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005AA20:
    ctx->downcount -= 2;
    // 8005AA20: cmpwi   r0, 1
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

label_8005AA24:
    // 8005AA24: bc    4, 0, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005AA28:
    ctx->downcount -= 8;
    // 8005AA28: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005AA2C:
    // 8005AA2C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005AA30:
    ctx->pc = 0x8005AA30u;
    // 8005AA30: lwzx    r5, r27, r0
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005AA34:
    // 8005AA34: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AA38:
    ctx->pc = 0x8005AA38u;
    // 8005AA38: lwz     r12, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005AA3C:
    ctx->pc = 0x8005AA3Cu;
    // 8005AA3C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005AA40:
    ctx->pc = 0x8005AA40u;
    // 8005AA40: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005AA44u;
            ctx->pc = target;
            return;
        }
    }

label_8005AA44:
    ctx->pc = 0x8005AA44u;
    ctx->downcount -= 4;
    // 8005AA44: stw     r3, 544(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(544);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AA48:
    ctx->pc = 0x8005AA48u;
    // 8005AA48: lwz     r0, 544(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(544);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AA4C:
    // 8005AA4C: cmplwi  r0, 0x0000
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

label_8005AA50:
    // 8005AA50: bc    12, 2, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005AA54:
    ctx->downcount -= 2;
    // 8005AA54: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8005AA58:
    // 8005AA58: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005AA5C:
    ctx->pc = 0x8005AA5Cu;
    ctx->downcount -= 3;
    // 8005AA5C: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AA60:
    // 8005AA60: cmpw    r25, r0
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

label_8005AA64:
    // 8005AA64: bc    12, 0, 0x8005AA00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005AA00u;
                return;
            }
            goto label_8005AA00;
        }
    }

label_8005AA68:
    ctx->pc = 0x8005AA68u;
    ctx->downcount -= 3;
    // 8005AA68: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AA6C:
    ctx->pc = 0x8005AA6Cu;
    // 8005AA6C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_8005AA70:
    ctx->pc = 0x8005AA70u;
    // 8005AA70: bl      0x80060DE4
    {
            ctx->lr = 0x8005AA74u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AA74:
    ctx->pc = 0x8005AA74u;
    ctx->downcount -= 7;
    // 8005AA74: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8005AA78:
    ctx->pc = 0x8005AA78u;
    // 8005AA78: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005AA7C:
    ctx->pc = 0x8005AA7Cu;
    // 8005AA7C: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005AA80:
    ctx->pc = 0x8005AA80u;
    // 8005AA80: addi    r27, r3, 15616
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(15616);

label_8005AA84:
    ctx->pc = 0x8005AA84u;
    // 8005AA84: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8005AA88:
    ctx->pc = 0x8005AA88u;
    // 8005AA88: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005AA8C:
    ctx->pc = 0x8005AA8Cu;
    // 8005AA8C: b       0x8005AB34
    {
            goto label_8005AB34;
    }

label_8005AA90:
    ctx->downcount -= 6;
    // 8005AA90: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005AA94:
    // 8005AA94: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8005AA98:
    // 8005AA98: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8005AA9C:
    // 8005AA9C: li      r6, 288
    ctx->gpr[6] = (u32)(s32)(288);

label_8005AAA0:
    // 8005AAA0: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005AAA4:
    // 8005AAA4: bl      0x80055D58
    {
            ctx->lr = 0x8005AAA8u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005AAA8:
    ctx->downcount -= 5;
    // 8005AAA8: addi    r26, r28, 32
    ctx->gpr[26] = ctx->gpr[28] + (u32)(s32)(32);

label_8005AAAC:
    // 8005AAAC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8005AAB0:
    ctx->pc = 0x8005AAB0u;
    // 8005AAB0: stwx    r3, r31, r26
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[26];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AAB4:
    // 8005AAB4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AAB8:
    // 8005AAB8: bl      0x80060DE4
    {
            ctx->lr = 0x8005AABCu;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AABC:
    ctx->pc = 0x8005AABCu;
    ctx->downcount -= 5;
    // 8005AABC: lwzx    r5, r31, r26
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[26];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005AAC0:
    // 8005AAC0: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8005AAC4:
    ctx->pc = 0x8005AAC4u;
    // 8005AAC4: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AAC8:
    // 8005AAC8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AACC:
    // 8005AACC: bl      0x80060DE4
    {
            ctx->lr = 0x8005AAD0u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AAD0:
    ctx->pc = 0x8005AAD0u;
    ctx->downcount -= 5;
    // 8005AAD0: lwzx    r5, r31, r26
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[26];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005AAD4:
    // 8005AAD4: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8005AAD8:
    ctx->pc = 0x8005AAD8u;
    // 8005AAD8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AADC:
    // 8005AADC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AAE0:
    // 8005AAE0: bl      0x80060DE4
    {
            ctx->lr = 0x8005AAE4u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AAE4:
    ctx->pc = 0x8005AAE4u;
    ctx->downcount -= 5;
    // 8005AAE4: lwzx    r5, r31, r26
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[26];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005AAE8:
    // 8005AAE8: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_8005AAEC:
    ctx->pc = 0x8005AAECu;
    // 8005AAEC: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AAF0:
    // 8005AAF0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AAF4:
    // 8005AAF4: bl      0x80060DE4
    {
            ctx->lr = 0x8005AAF8u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AAF8:
    ctx->pc = 0x8005AAF8u;
    ctx->downcount -= 6;
    // 8005AAF8: lwzx    r4, r31, r26
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[26];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005AAFC:
    ctx->pc = 0x8005AAFCu;
    // 8005AAFC: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AB00:
    ctx->pc = 0x8005AB00u;
    // 8005AB00: lwzx    r3, r31, r26
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[26];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005AB04:
    ctx->pc = 0x8005AB04u;
    // 8005AB04: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AB08:
    // 8005AB08: cmpwi   r0, 1
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

label_8005AB0C:
    // 8005AB0C: bc    4, 0, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005AB10:
    ctx->pc = 0x8005AB10u;
    ctx->downcount -= 3;
    // 8005AB10: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AB14:
    // 8005AB14: cmpwi   r0, 1
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

label_8005AB18:
    // 8005AB18: bc    4, 0, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005AB1C:
    ctx->pc = 0x8005AB1Cu;
    ctx->downcount -= 4;
    // 8005AB1C: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005AB20:
    ctx->pc = 0x8005AB20u;
    // 8005AB20: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AB24:
    // 8005AB24: cmpw    r3, r0
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

label_8005AB28:
    // 8005AB28: bc    4, 0, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005AB2C:
    ctx->downcount -= 2;
    // 8005AB2C: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8005AB30:
    // 8005AB30: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005AB34:
    ctx->pc = 0x8005AB34u;
    ctx->downcount -= 3;
    // 8005AB34: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AB38:
    // 8005AB38: cmpw    r25, r0
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

label_8005AB3C:
    // 8005AB3C: bc    12, 0, 0x8005AA90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005AA90u;
                return;
            }
            goto label_8005AA90;
        }
    }

label_8005AB40:
    ctx->pc = 0x8005AB40u;
    ctx->downcount -= 3;
    // 8005AB40: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AB44:
    ctx->pc = 0x8005AB44u;
    // 8005AB44: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8005AB48:
    ctx->pc = 0x8005AB48u;
    // 8005AB48: bl      0x80060DE4
    {
            ctx->lr = 0x8005AB4Cu;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AB4C:
    ctx->pc = 0x8005AB4Cu;
    ctx->downcount -= 2;
    // 8005AB4C: cmpwi   r3, 1
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

label_8005AB50:
    ctx->pc = 0x8005AB50u;
    // 8005AB50: bc    4, 2, 0x8005AB5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005AB5C;
        }
    }

label_8005AB54:
    ctx->pc = 0x8005AB54u;
    ctx->downcount -= 2;
    // 8005AB54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005AB58:
    ctx->pc = 0x8005AB58u;
    // 8005AB58: b       0x8005AB68
    {
            goto label_8005AB68;
    }

label_8005AB5C:
    ctx->pc = 0x8005AB5Cu;
    ctx->downcount -= 2;
    // 8005AB5C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005AB60:
    ctx->pc = 0x8005AB60u;
    // 8005AB60: bl      0x8005AE30
    {
            ctx->lr = 0x8005AB64u;
            goto label_8005AE30;
    }

label_8005AB64:
    ctx->pc = 0x8005AB64u;
    ctx->downcount -= 1;
    // 8005AB64: li      r3, -133
    ctx->gpr[3] = (u32)(s32)(-133);

label_8005AB68:
    ctx->pc = 0x8005AB68u;
    ctx->downcount -= 16;
    // 8005AB68: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005AB6C:
    ctx->pc = 0x8005AB6Cu;
    // 8005AB6C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AB70:
    ctx->pc = 0x8005AB70u;
    // 8005AB70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005AB74:
    ctx->pc = 0x8005AB74u;
    // 8005AB74: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8005AB78:
    ctx->pc = 0x8005AB78u;
    // 8005AB78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005AB7C:
    ctx->pc = 0x8005AB7Cu;
    ctx->downcount -= 19;
    // 8005AB7C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005AB80:
    ctx->pc = 0x8005AB80u;
    // 8005AB80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005AB84:
    ctx->pc = 0x8005AB84u;
    // 8005AB84: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005AB88:
    ctx->pc = 0x8005AB88u;
    // 8005AB88: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005AB8C:
    ctx->pc = 0x8005AB8Cu;
    // 8005AB8C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005AB90:
    ctx->pc = 0x8005AB90u;
    // 8005AB90: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005AB94:
    ctx->pc = 0x8005AB94u;
    // 8005AB94: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8005AB98:
    ctx->pc = 0x8005AB98u;
    // 8005AB98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005AB9C:
    ctx->pc = 0x8005AB9Cu;
    // 8005AB9C: bl      0x80060DE4
    {
            ctx->lr = 0x8005ABA0u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005ABA0:
    ctx->pc = 0x8005ABA0u;
    ctx->downcount -= 2;
    // 8005ABA0: or.   r27, r3, r3
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

label_8005ABA4:
    ctx->pc = 0x8005ABA4u;
    // 8005ABA4: bc    12, 0, 0x8005ACCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005ACCC;
        }
    }

label_8005ABA8:
    ctx->pc = 0x8005ABA8u;
    ctx->downcount -= 7;
    // 8005ABA8: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005ABAC:
    ctx->pc = 0x8005ABACu;
    // 8005ABAC: addi    r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(1);

label_8005ABB0:
    ctx->pc = 0x8005ABB0u;
    // 8005ABB0: addi    r5, r4, 15616
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15616);

label_8005ABB4:
    ctx->pc = 0x8005ABB4u;
    // 8005ABB4: li      r6, 202
    ctx->gpr[6] = (u32)(s32)(202);

label_8005ABB8:
    ctx->pc = 0x8005ABB8u;
    // 8005ABB8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8005ABBC:
    ctx->pc = 0x8005ABBCu;
    // 8005ABBC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005ABC0:
    ctx->pc = 0x8005ABC0u;
    // 8005ABC0: bl      0x80055D58
    {
            ctx->lr = 0x8005ABC4u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005ABC4:
    ctx->pc = 0x8005ABC4u;
    ctx->downcount -= 5;
    // 8005ABC4: stw     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005ABC8:
    ctx->pc = 0x8005ABC8u;
    // 8005ABC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005ABCC:
    ctx->pc = 0x8005ABCCu;
    // 8005ABCC: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005ABD0:
    ctx->pc = 0x8005ABD0u;
    // 8005ABD0: lwz     r4, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005ABD4:
    ctx->pc = 0x8005ABD4u;
    // 8005ABD4: bl      0x8005B160
    {
            ctx->lr = 0x8005ABD8u;
            goto label_8005B160;
    }

label_8005ABD8:
    ctx->pc = 0x8005ABD8u;
    ctx->downcount -= 3;
    // 8005ABD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005ABDC:
    ctx->pc = 0x8005ABDCu;
    // 8005ABDC: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8005ABE0:
    ctx->pc = 0x8005ABE0u;
    // 8005ABE0: bl      0x80060DE4
    {
            ctx->lr = 0x8005ABE4u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005ABE4:
    ctx->pc = 0x8005ABE4u;
    ctx->downcount -= 4;
    // 8005ABE4: stw     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005ABE8:
    ctx->pc = 0x8005ABE8u;
    // 8005ABE8: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005ABEC:
    ctx->pc = 0x8005ABECu;
    // 8005ABEC: cmpwi   r3, 0
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

label_8005ABF0:
    ctx->pc = 0x8005ABF0u;
    // 8005ABF0: bc    12, 0, 0x8005ACCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005ACCC;
        }
    }

label_8005ABF4:
    ctx->pc = 0x8005ABF4u;
    ctx->downcount -= 7;
    // 8005ABF4: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005ABF8:
    ctx->pc = 0x8005ABF8u;
    // 8005ABF8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8005ABFC:
    ctx->pc = 0x8005ABFCu;
    // 8005ABFC: addi    r5, r4, 15616
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15616);

label_8005AC00:
    ctx->pc = 0x8005AC00u;
    // 8005AC00: li      r6, 206
    ctx->gpr[6] = (u32)(s32)(206);

label_8005AC04:
    ctx->pc = 0x8005AC04u;
    // 8005AC04: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005AC08:
    ctx->pc = 0x8005AC08u;
    // 8005AC08: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005AC0C:
    ctx->pc = 0x8005AC0Cu;
    // 8005AC0C: bl      0x80055D58
    {
            ctx->lr = 0x8005AC10u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005AC10:
    ctx->pc = 0x8005AC10u;
    ctx->downcount -= 9;
    // 8005AC10: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AC14:
    ctx->pc = 0x8005AC14u;
    // 8005AC14: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005AC18:
    ctx->pc = 0x8005AC18u;
    // 8005AC18: addi    r5, r3, 15616
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(15616);

label_8005AC1C:
    ctx->pc = 0x8005AC1Cu;
    // 8005AC1C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005AC20:
    ctx->pc = 0x8005AC20u;
    // 8005AC20: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005AC24:
    ctx->pc = 0x8005AC24u;
    // 8005AC24: li      r6, 207
    ctx->gpr[6] = (u32)(s32)(207);

label_8005AC28:
    ctx->pc = 0x8005AC28u;
    // 8005AC28: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005AC2C:
    ctx->pc = 0x8005AC2Cu;
    // 8005AC2C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_8005AC30:
    ctx->pc = 0x8005AC30u;
    // 8005AC30: bl      0x80055D58
    {
            ctx->lr = 0x8005AC34u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005AC34:
    ctx->pc = 0x8005AC34u;
    ctx->downcount -= 6;
    // 8005AC34: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005AC38:
    ctx->pc = 0x8005AC38u;
    // 8005AC38: stw     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AC3C:
    ctx->pc = 0x8005AC3Cu;
    // 8005AC3C: addi    r28, r4, 15616
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(15616);

label_8005AC40:
    ctx->pc = 0x8005AC40u;
    // 8005AC40: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8005AC44:
    ctx->pc = 0x8005AC44u;
    // 8005AC44: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8005AC48:
    ctx->pc = 0x8005AC48u;
    // 8005AC48: b       0x8005ACA4
    {
            goto label_8005ACA4;
    }

label_8005AC4C:
    ctx->downcount -= 3;
    // 8005AC4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005AC50:
    // 8005AC50: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8005AC54:
    // 8005AC54: bl      0x80060DE4
    {
            ctx->lr = 0x8005AC58u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AC58:
    ctx->downcount -= 2;
    // 8005AC58: or.   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8005AC5C:
    // 8005AC5C: bc    12, 0, 0x8005ACCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005ACCC;
        }
    }

label_8005AC60:
    ctx->pc = 0x8005AC60u;
    ctx->downcount -= 8;
    // 8005AC60: lwz     r6, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005AC64:
    // 8005AC64: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005AC68:
    // 8005AC68: addi    r3, r26, 1
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(1);

label_8005AC6C:
    // 8005AC6C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8005AC70:
    ctx->pc = 0x8005AC70u;
    // 8005AC70: stwx    r26, r6, r29
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[29];
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_8005AC74:
    // 8005AC74: li      r6, 213
    ctx->gpr[6] = (u32)(s32)(213);

label_8005AC78:
    // 8005AC78: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005AC7C:
    // 8005AC7C: bl      0x80055D58
    {
            ctx->lr = 0x8005AC80u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005AC80:
    ctx->pc = 0x8005AC80u;
    ctx->downcount -= 7;
    // 8005AC80: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005AC84:
    // 8005AC84: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8005AC88:
    ctx->pc = 0x8005AC88u;
    // 8005AC88: stwx    r3, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AC8C:
    // 8005AC8C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005AC90:
    ctx->pc = 0x8005AC90u;
    // 8005AC90: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005AC94:
    ctx->pc = 0x8005AC94u;
    // 8005AC94: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005AC98:
    // 8005AC98: bl      0x8005B160
    {
            ctx->lr = 0x8005AC9Cu;
            goto label_8005B160;
    }

label_8005AC9C:
    ctx->downcount -= 2;
    // 8005AC9C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_8005ACA0:
    // 8005ACA0: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_8005ACA4:
    ctx->pc = 0x8005ACA4u;
    ctx->downcount -= 3;
    // 8005ACA4: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005ACA8:
    // 8005ACA8: cmpw    r27, r0
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

label_8005ACAC:
    // 8005ACAC: bc    12, 0, 0x8005AC4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005AC4Cu;
                return;
            }
            goto label_8005AC4C;
        }
    }

label_8005ACB0:
    ctx->pc = 0x8005ACB0u;
    ctx->downcount -= 3;
    // 8005ACB0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005ACB4:
    ctx->pc = 0x8005ACB4u;
    // 8005ACB4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8005ACB8:
    ctx->pc = 0x8005ACB8u;
    // 8005ACB8: bl      0x80060DE4
    {
            ctx->lr = 0x8005ACBCu;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005ACBC:
    ctx->pc = 0x8005ACBCu;
    ctx->downcount -= 2;
    // 8005ACBC: cmpwi   r3, 1
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

label_8005ACC0:
    ctx->pc = 0x8005ACC0u;
    // 8005ACC0: bc    4, 2, 0x8005ACCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005ACCC;
        }
    }

label_8005ACC4:
    ctx->pc = 0x8005ACC4u;
    ctx->downcount -= 2;
    // 8005ACC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005ACC8:
    ctx->pc = 0x8005ACC8u;
    // 8005ACC8: b       0x8005ACD8
    {
            goto label_8005ACD8;
    }

label_8005ACCC:
    ctx->pc = 0x8005ACCCu;
    ctx->downcount -= 2;
    // 8005ACCC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005ACD0:
    ctx->pc = 0x8005ACD0u;
    // 8005ACD0: bl      0x8005B064
    {
            ctx->lr = 0x8005ACD4u;
            goto label_8005B064;
    }

label_8005ACD4:
    ctx->pc = 0x8005ACD4u;
    ctx->downcount -= 1;
    // 8005ACD4: li      r3, -133
    ctx->gpr[3] = (u32)(s32)(-133);

label_8005ACD8:
    ctx->pc = 0x8005ACD8u;
    ctx->downcount -= 16;
    // 8005ACD8: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005ACDC:
    ctx->pc = 0x8005ACDCu;
    // 8005ACDC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005ACE0:
    ctx->pc = 0x8005ACE0u;
    // 8005ACE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005ACE4:
    ctx->pc = 0x8005ACE4u;
    // 8005ACE4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005ACE8:
    ctx->pc = 0x8005ACE8u;
    // 8005ACE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005ACEC:
    ctx->pc = 0x8005ACECu;
    ctx->downcount -= 19;
    // 8005ACEC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005ACF0:
    ctx->pc = 0x8005ACF0u;
    // 8005ACF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005ACF4:
    ctx->pc = 0x8005ACF4u;
    // 8005ACF4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005ACF8:
    ctx->pc = 0x8005ACF8u;
    // 8005ACF8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005ACFC:
    ctx->pc = 0x8005ACFCu;
    // 8005ACFC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005AD00:
    ctx->pc = 0x8005AD00u;
    // 8005AD00: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005AD04:
    ctx->pc = 0x8005AD04u;
    // 8005AD04: lwz     r31, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8005AD08:
    ctx->pc = 0x8005AD08u;
    // 8005AD08: cmplwi  r31, 0x0000
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

label_8005AD0C:
    ctx->pc = 0x8005AD0Cu;
    // 8005AD0C: bc    4, 2, 0x8005AD18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005AD18;
        }
    }

label_8005AD10:
    ctx->pc = 0x8005AD10u;
    ctx->downcount -= 2;
    // 8005AD10: li      r3, -129
    ctx->gpr[3] = (u32)(s32)(-129);

label_8005AD14:
    ctx->pc = 0x8005AD14u;
    // 8005AD14: b       0x8005AE1C
    {
            goto label_8005AE1C;
    }

label_8005AD18:
    ctx->pc = 0x8005AD18u;
    ctx->downcount -= 3;
    // 8005AD18: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AD1C:
    ctx->pc = 0x8005AD1Cu;
    // 8005AD1C: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8005AD20:
    ctx->pc = 0x8005AD20u;
    // 8005AD20: bl      0x80060DE4
    {
            ctx->lr = 0x8005AD24u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AD24:
    ctx->pc = 0x8005AD24u;
    ctx->downcount -= 4;
    // 8005AD24: stw     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AD28:
    ctx->pc = 0x8005AD28u;
    // 8005AD28: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AD2C:
    ctx->pc = 0x8005AD2Cu;
    // 8005AD2C: cmpwi   r0, 0
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

label_8005AD30:
    ctx->pc = 0x8005AD30u;
    // 8005AD30: bc    12, 2, 0x8005AD3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AD3C;
        }
    }

label_8005AD34:
    ctx->pc = 0x8005AD34u;
    ctx->downcount -= 2;
    // 8005AD34: li      r3, -134
    ctx->gpr[3] = (u32)(s32)(-134);

label_8005AD38:
    ctx->pc = 0x8005AD38u;
    // 8005AD38: b       0x8005AE1C
    {
            goto label_8005AE1C;
    }

label_8005AD3C:
    ctx->pc = 0x8005AD3Cu;
    ctx->downcount -= 3;
    // 8005AD3C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AD40:
    ctx->pc = 0x8005AD40u;
    // 8005AD40: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_8005AD44:
    ctx->pc = 0x8005AD44u;
    // 8005AD44: bl      0x80060DE4
    {
            ctx->lr = 0x8005AD48u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AD48:
    ctx->pc = 0x8005AD48u;
    ctx->downcount -= 4;
    // 8005AD48: stw     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AD4C:
    ctx->pc = 0x8005AD4Cu;
    // 8005AD4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AD50:
    ctx->pc = 0x8005AD50u;
    // 8005AD50: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8005AD54:
    ctx->pc = 0x8005AD54u;
    // 8005AD54: bl      0x80060DE4
    {
            ctx->lr = 0x8005AD58u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AD58:
    ctx->pc = 0x8005AD58u;
    ctx->downcount -= 4;
    // 8005AD58: stw     r3, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AD5C:
    ctx->pc = 0x8005AD5Cu;
    // 8005AD5C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AD60:
    ctx->pc = 0x8005AD60u;
    // 8005AD60: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8005AD64:
    ctx->pc = 0x8005AD64u;
    // 8005AD64: bl      0x80060DE4
    {
            ctx->lr = 0x8005AD68u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AD68:
    ctx->pc = 0x8005AD68u;
    ctx->downcount -= 4;
    // 8005AD68: stw     r3, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AD6C:
    ctx->pc = 0x8005AD6Cu;
    // 8005AD6C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AD70:
    ctx->pc = 0x8005AD70u;
    // 8005AD70: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8005AD74:
    ctx->pc = 0x8005AD74u;
    // 8005AD74: bl      0x80060DE4
    {
            ctx->lr = 0x8005AD78u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AD78:
    ctx->pc = 0x8005AD78u;
    ctx->downcount -= 4;
    // 8005AD78: stw     r3, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AD7C:
    ctx->pc = 0x8005AD7Cu;
    // 8005AD7C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AD80:
    ctx->pc = 0x8005AD80u;
    // 8005AD80: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8005AD84:
    ctx->pc = 0x8005AD84u;
    // 8005AD84: bl      0x80060DE4
    {
            ctx->lr = 0x8005AD88u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AD88:
    ctx->pc = 0x8005AD88u;
    ctx->downcount -= 4;
    // 8005AD88: stw     r3, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005AD8C:
    ctx->pc = 0x8005AD8Cu;
    // 8005AD8C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AD90:
    ctx->pc = 0x8005AD90u;
    // 8005AD90: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005AD94:
    ctx->pc = 0x8005AD94u;
    // 8005AD94: bl      0x80060DE4
    {
            ctx->lr = 0x8005AD98u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AD98:
    ctx->pc = 0x8005AD98u;
    ctx->downcount -= 6;
    // 8005AD98: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8005AD9C:
    ctx->pc = 0x8005AD9Cu;
    // 8005AD9C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005ADA0:
    ctx->pc = 0x8005ADA0u;
    // 8005ADA0: slw   r0, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8005ADA4:
    ctx->pc = 0x8005ADA4u;
    // 8005ADA4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005ADA8:
    ctx->pc = 0x8005ADA8u;
    // 8005ADA8: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005ADAC:
    ctx->pc = 0x8005ADACu;
    // 8005ADAC: bl      0x80060DE4
    {
            ctx->lr = 0x8005ADB0u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005ADB0:
    ctx->pc = 0x8005ADB0u;
    ctx->downcount -= 6;
    // 8005ADB0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8005ADB4:
    ctx->pc = 0x8005ADB4u;
    // 8005ADB4: slw   r0, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8005ADB8:
    ctx->pc = 0x8005ADB8u;
    // 8005ADB8: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005ADBC:
    ctx->pc = 0x8005ADBCu;
    // 8005ADBC: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005ADC0:
    ctx->pc = 0x8005ADC0u;
    // 8005ADC0: cmpwi   r0, 1
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

label_8005ADC4:
    ctx->pc = 0x8005ADC4u;
    // 8005ADC4: bc    12, 0, 0x8005AE10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AE10;
        }
    }

label_8005ADC8:
    ctx->pc = 0x8005ADC8u;
    ctx->downcount -= 3;
    // 8005ADC8: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005ADCC:
    ctx->pc = 0x8005ADCCu;
    // 8005ADCC: cmpwi   r0, 1
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

label_8005ADD0:
    ctx->pc = 0x8005ADD0u;
    // 8005ADD0: bc    12, 0, 0x8005AE10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AE10;
        }
    }

label_8005ADD4:
    ctx->pc = 0x8005ADD4u;
    ctx->downcount -= 3;
    // 8005ADD4: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005ADD8:
    ctx->pc = 0x8005ADD8u;
    // 8005ADD8: cmpwi   r3, 64
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(64);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005ADDC:
    ctx->pc = 0x8005ADDCu;
    // 8005ADDC: bc    12, 0, 0x8005AE10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AE10;
        }
    }

label_8005ADE0:
    ctx->pc = 0x8005ADE0u;
    ctx->downcount -= 3;
    // 8005ADE0: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005ADE4:
    ctx->pc = 0x8005ADE4u;
    // 8005ADE4: cmpw    r0, r3
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

label_8005ADE8:
    ctx->pc = 0x8005ADE8u;
    // 8005ADE8: bc    12, 0, 0x8005AE10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AE10;
        }
    }

label_8005ADEC:
    ctx->pc = 0x8005ADECu;
    ctx->downcount -= 2;
    // 8005ADEC: cmpwi   r0, 8192
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005ADF0:
    ctx->pc = 0x8005ADF0u;
    // 8005ADF0: bc    12, 1, 0x8005AE10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AE10;
        }
    }

label_8005ADF4:
    ctx->pc = 0x8005ADF4u;
    ctx->downcount -= 3;
    // 8005ADF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005ADF8:
    ctx->pc = 0x8005ADF8u;
    // 8005ADF8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8005ADFC:
    ctx->pc = 0x8005ADFCu;
    // 8005ADFC: bl      0x80060DE4
    {
            ctx->lr = 0x8005AE00u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005AE00:
    ctx->pc = 0x8005AE00u;
    ctx->downcount -= 2;
    // 8005AE00: cmpwi   r3, 1
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

label_8005AE04:
    ctx->pc = 0x8005AE04u;
    // 8005AE04: bc    4, 2, 0x8005AE10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005AE10;
        }
    }

label_8005AE08:
    ctx->pc = 0x8005AE08u;
    ctx->downcount -= 2;
    // 8005AE08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005AE0C:
    ctx->pc = 0x8005AE0Cu;
    // 8005AE0C: b       0x8005AE1C
    {
            goto label_8005AE1C;
    }

label_8005AE10:
    ctx->pc = 0x8005AE10u;
    ctx->downcount -= 2;
    // 8005AE10: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005AE14:
    ctx->pc = 0x8005AE14u;
    // 8005AE14: bl      0x8005AE30
    {
            ctx->lr = 0x8005AE18u;
            goto label_8005AE30;
    }

label_8005AE18:
    ctx->pc = 0x8005AE18u;
    ctx->downcount -= 1;
    // 8005AE18: li      r3, -133
    ctx->gpr[3] = (u32)(s32)(-133);

label_8005AE1C:
    ctx->pc = 0x8005AE1Cu;
    ctx->downcount -= 16;
    // 8005AE1C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005AE20:
    ctx->pc = 0x8005AE20u;
    // 8005AE20: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AE24:
    ctx->pc = 0x8005AE24u;
    // 8005AE24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005AE28:
    ctx->pc = 0x8005AE28u;
    // 8005AE28: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005AE2C:
    ctx->pc = 0x8005AE2Cu;
    // 8005AE2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005AE30:
    ctx->pc = 0x8005AE30u;
    ctx->downcount -= 18;
    // 8005AE30: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005AE34:
    ctx->pc = 0x8005AE34u;
    // 8005AE34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005AE38:
    ctx->pc = 0x8005AE38u;
    // 8005AE38: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005AE3C:
    ctx->pc = 0x8005AE3Cu;
    // 8005AE3C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005AE40:
    ctx->pc = 0x8005AE40u;
    // 8005AE40: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005AE44:
    ctx->pc = 0x8005AE44u;
    // 8005AE44: lwz     r31, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8005AE48:
    ctx->pc = 0x8005AE48u;
    // 8005AE48: cmplwi  r31, 0x0000
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

label_8005AE4C:
    ctx->pc = 0x8005AE4Cu;
    // 8005AE4C: bc    12, 2, 0x8005AFEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AFEC;
        }
    }

label_8005AE50:
    ctx->pc = 0x8005AE50u;
    ctx->downcount -= 5;
    // 8005AE50: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005AE54:
    ctx->pc = 0x8005AE54u;
    // 8005AE54: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8005AE58:
    ctx->pc = 0x8005AE58u;
    // 8005AE58: addi    r29, r3, 15616
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(15616);

label_8005AE5C:
    ctx->pc = 0x8005AE5Cu;
    // 8005AE5C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005AE60:
    ctx->pc = 0x8005AE60u;
    // 8005AE60: b       0x8005AE88
    {
            goto label_8005AE88;
    }

label_8005AE64:
    ctx->downcount -= 4;
    // 8005AE64: addi    r0, r28, 32
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(32);

label_8005AE68:
    ctx->pc = 0x8005AE68u;
    // 8005AE68: lwzx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005AE6C:
    // 8005AE6C: cmplwi  r3, 0x0000
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

label_8005AE70:
    // 8005AE70: bc    12, 2, 0x8005AE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AE80;
        }
    }

label_8005AE74:
    ctx->downcount -= 3;
    // 8005AE74: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005AE78:
    // 8005AE78: li      r5, 137
    ctx->gpr[5] = (u32)(s32)(137);

label_8005AE7C:
    // 8005AE7C: bl      0x80055E80
    {
            ctx->lr = 0x8005AE80u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005AE80:
    ctx->downcount -= 2;
    // 8005AE80: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_8005AE84:
    // 8005AE84: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005AE88:
    ctx->pc = 0x8005AE88u;
    ctx->downcount -= 3;
    // 8005AE88: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AE8C:
    // 8005AE8C: cmpw    r27, r0
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

label_8005AE90:
    // 8005AE90: bc    12, 0, 0x8005AE64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005AE64u;
                return;
            }
            goto label_8005AE64;
        }
    }

label_8005AE94:
    ctx->pc = 0x8005AE94u;
    ctx->downcount -= 5;
    // 8005AE94: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8005AE98:
    ctx->pc = 0x8005AE98u;
    // 8005AE98: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8005AE9C:
    ctx->pc = 0x8005AE9Cu;
    // 8005AE9C: addi    r29, r3, 32556
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(32556);

label_8005AEA0:
    ctx->pc = 0x8005AEA0u;
    // 8005AEA0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005AEA4:
    ctx->pc = 0x8005AEA4u;
    // 8005AEA4: b       0x8005AED0
    {
            goto label_8005AED0;
    }

label_8005AEA8:
    ctx->downcount -= 9;
    // 8005AEA8: add   r3, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005AEAC:
    ctx->pc = 0x8005AEACu;
    // 8005AEAC: lwz     r0, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AEB0:
    ctx->pc = 0x8005AEB0u;
    // 8005AEB0: lwz     r3, 544(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(544);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005AEB4:
    // 8005AEB4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005AEB8:
    ctx->pc = 0x8005AEB8u;
    // 8005AEB8: lwzx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005AEBC:
    ctx->pc = 0x8005AEBCu;
    // 8005AEBC: lwz     r12, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005AEC0:
    ctx->pc = 0x8005AEC0u;
    // 8005AEC0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005AEC4:
    ctx->pc = 0x8005AEC4u;
    // 8005AEC4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005AEC8u;
            ctx->pc = target;
            return;
        }
    }

label_8005AEC8:
    ctx->downcount -= 2;
    // 8005AEC8: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_8005AECC:
    // 8005AECC: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005AED0:
    ctx->pc = 0x8005AED0u;
    ctx->downcount -= 3;
    // 8005AED0: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AED4:
    // 8005AED4: cmpw    r27, r0
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

label_8005AED8:
    // 8005AED8: bc    12, 0, 0x8005AEA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005AEA8u;
                return;
            }
            goto label_8005AEA8;
        }
    }

label_8005AEDC:
    ctx->pc = 0x8005AEDCu;
    ctx->downcount -= 5;
    // 8005AEDC: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8005AEE0:
    ctx->pc = 0x8005AEE0u;
    // 8005AEE0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8005AEE4:
    ctx->pc = 0x8005AEE4u;
    // 8005AEE4: addi    r29, r3, 32536
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(32536);

label_8005AEE8:
    ctx->pc = 0x8005AEE8u;
    // 8005AEE8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005AEEC:
    ctx->pc = 0x8005AEECu;
    // 8005AEEC: b       0x8005AF18
    {
            goto label_8005AF18;
    }

label_8005AEF0:
    ctx->downcount -= 9;
    // 8005AEF0: add   r3, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005AEF4:
    ctx->pc = 0x8005AEF4u;
    // 8005AEF4: lwz     r0, 1056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AEF8:
    ctx->pc = 0x8005AEF8u;
    // 8005AEF8: lwz     r3, 1312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005AEFC:
    // 8005AEFC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005AF00:
    ctx->pc = 0x8005AF00u;
    // 8005AF00: lwzx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005AF04:
    ctx->pc = 0x8005AF04u;
    // 8005AF04: lwz     r12, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005AF08:
    ctx->pc = 0x8005AF08u;
    // 8005AF08: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005AF0C:
    ctx->pc = 0x8005AF0Cu;
    // 8005AF0C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005AF10u;
            ctx->pc = target;
            return;
        }
    }

label_8005AF10:
    ctx->downcount -= 2;
    // 8005AF10: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_8005AF14:
    // 8005AF14: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005AF18:
    ctx->pc = 0x8005AF18u;
    ctx->downcount -= 3;
    // 8005AF18: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AF1C:
    // 8005AF1C: cmpw    r27, r0
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

label_8005AF20:
    // 8005AF20: bc    12, 0, 0x8005AEF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005AEF0u;
                return;
            }
            goto label_8005AEF0;
        }
    }

label_8005AF24:
    ctx->pc = 0x8005AF24u;
    ctx->downcount -= 5;
    // 8005AF24: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8005AF28:
    ctx->pc = 0x8005AF28u;
    // 8005AF28: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8005AF2C:
    ctx->pc = 0x8005AF2Cu;
    // 8005AF2C: addi    r29, r3, 32544
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(32544);

label_8005AF30:
    ctx->pc = 0x8005AF30u;
    // 8005AF30: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005AF34:
    ctx->pc = 0x8005AF34u;
    // 8005AF34: b       0x8005AF60
    {
            goto label_8005AF60;
    }

label_8005AF38:
    ctx->downcount -= 9;
    // 8005AF38: add   r3, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005AF3C:
    ctx->pc = 0x8005AF3Cu;
    // 8005AF3C: lwz     r0, 1568(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AF40:
    ctx->pc = 0x8005AF40u;
    // 8005AF40: lwz     r3, 1824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1824);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005AF44:
    // 8005AF44: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005AF48:
    ctx->pc = 0x8005AF48u;
    // 8005AF48: lwzx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005AF4C:
    ctx->pc = 0x8005AF4Cu;
    // 8005AF4C: lwz     r12, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005AF50:
    ctx->pc = 0x8005AF50u;
    // 8005AF50: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005AF54:
    ctx->pc = 0x8005AF54u;
    // 8005AF54: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005AF58u;
            ctx->pc = target;
            return;
        }
    }

label_8005AF58:
    ctx->downcount -= 2;
    // 8005AF58: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_8005AF5C:
    // 8005AF5C: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005AF60:
    ctx->pc = 0x8005AF60u;
    ctx->downcount -= 3;
    // 8005AF60: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AF64:
    // 8005AF64: cmpw    r27, r0
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

label_8005AF68:
    // 8005AF68: bc    12, 0, 0x8005AF38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005AF38u;
                return;
            }
            goto label_8005AF38;
        }
    }

label_8005AF6C:
    ctx->pc = 0x8005AF6Cu;
    ctx->downcount -= 4;
    // 8005AF6C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8005AF70:
    ctx->pc = 0x8005AF70u;
    // 8005AF70: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8005AF74:
    ctx->pc = 0x8005AF74u;
    // 8005AF74: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005AF78:
    ctx->pc = 0x8005AF78u;
    // 8005AF78: b       0x8005AFB0
    {
            goto label_8005AFB0;
    }

label_8005AF7C:
    ctx->downcount -= 4;
    // 8005AF7C: addi    r0, r28, 2080
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(2080);

label_8005AF80:
    ctx->pc = 0x8005AF80u;
    // 8005AF80: lwzx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005AF84:
    // 8005AF84: cmplwi  r3, 0x0000
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

label_8005AF88:
    // 8005AF88: bc    12, 2, 0x8005AF90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AF90;
        }
    }

label_8005AF8C:
    ctx->downcount -= 1;
    // 8005AF8C: bl      0x8005DF54
    {
            ctx->lr = 0x8005AF90u;
            ctx->pc = 0x8005DF54u;
            return;
    }

label_8005AF90:
    ctx->pc = 0x8005AF90u;
    ctx->downcount -= 3;
    // 8005AF90: lwz     r0, 3104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AF94:
    // 8005AF94: cmplwi  r0, 0x0000
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

label_8005AF98:
    // 8005AF98: bc    12, 2, 0x8005AFA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AFA4;
        }
    }

label_8005AF9C:
    ctx->downcount -= 2;
    // 8005AF9C: add   r3, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005AFA0:
    // 8005AFA0: bl      0x8005DE90
    {
            ctx->lr = 0x8005AFA4u;
            ctx->pc = 0x8005DE90u;
            return;
    }

label_8005AFA4:
    ctx->downcount -= 3;
    // 8005AFA4: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_8005AFA8:
    // 8005AFA8: addi    r29, r29, 52
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(52);

label_8005AFAC:
    // 8005AFAC: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005AFB0:
    ctx->pc = 0x8005AFB0u;
    ctx->downcount -= 3;
    // 8005AFB0: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005AFB4:
    // 8005AFB4: cmpw    r27, r0
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

label_8005AFB8:
    // 8005AFB8: bc    12, 0, 0x8005AF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005AF7Cu;
                return;
            }
            goto label_8005AF7C;
        }
    }

label_8005AFBC:
    ctx->pc = 0x8005AFBCu;
    ctx->downcount -= 3;
    // 8005AFBC: lwz     r3, 3104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005AFC0:
    ctx->pc = 0x8005AFC0u;
    // 8005AFC0: cmplwi  r3, 0x0000
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

label_8005AFC4:
    ctx->pc = 0x8005AFC4u;
    // 8005AFC4: bc    12, 2, 0x8005AFD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005AFD8;
        }
    }

label_8005AFC8:
    ctx->pc = 0x8005AFC8u;
    ctx->downcount -= 4;
    // 8005AFC8: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005AFCC:
    ctx->pc = 0x8005AFCCu;
    // 8005AFCC: li      r5, 157
    ctx->gpr[5] = (u32)(s32)(157);

label_8005AFD0:
    ctx->pc = 0x8005AFD0u;
    // 8005AFD0: addi    r4, r4, 15616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15616);

label_8005AFD4:
    ctx->pc = 0x8005AFD4u;
    // 8005AFD4: bl      0x80055E80
    {
            ctx->lr = 0x8005AFD8u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005AFD8:
    ctx->pc = 0x8005AFD8u;
    ctx->downcount -= 5;
    // 8005AFD8: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005AFDC:
    ctx->pc = 0x8005AFDCu;
    // 8005AFDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005AFE0:
    ctx->pc = 0x8005AFE0u;
    // 8005AFE0: addi    r4, r4, 15616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15616);

label_8005AFE4:
    ctx->pc = 0x8005AFE4u;
    // 8005AFE4: li      r5, 159
    ctx->gpr[5] = (u32)(s32)(159);

label_8005AFE8:
    ctx->pc = 0x8005AFE8u;
    // 8005AFE8: bl      0x80055E80
    {
            ctx->lr = 0x8005AFECu;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005AFEC:
    ctx->pc = 0x8005AFECu;
    ctx->downcount -= 4;
    // 8005AFEC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005AFF0:
    ctx->pc = 0x8005AFF0u;
    // 8005AFF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005AFF4:
    ctx->pc = 0x8005AFF4u;
    // 8005AFF4: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8005AFF8:
    ctx->pc = 0x8005AFF8u;
    // 8005AFF8: bl      0x800050B4
    {
            ctx->lr = 0x8005AFFCu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8005AFFC:
    ctx->pc = 0x8005AFFCu;
    ctx->downcount -= 16;
    // 8005AFFC: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005B000:
    ctx->pc = 0x8005B000u;
    // 8005B000: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B004:
    ctx->pc = 0x8005B004u;
    // 8005B004: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005B008:
    ctx->pc = 0x8005B008u;
    // 8005B008: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005B00C:
    ctx->pc = 0x8005B00Cu;
    // 8005B00C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005B010:
    ctx->pc = 0x8005B010u;
    ctx->downcount -= 8;
    // 8005B010: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005B014:
    ctx->pc = 0x8005B014u;
    // 8005B014: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005B018:
    ctx->pc = 0x8005B018u;
    // 8005B018: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005B01C:
    ctx->pc = 0x8005B01Cu;
    // 8005B01C: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8005B020:
    ctx->pc = 0x8005B020u;
    // 8005B020: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B024:
    ctx->pc = 0x8005B024u;
    // 8005B024: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8005B028:
    ctx->pc = 0x8005B028u;
    // 8005B028: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B02C:
    ctx->pc = 0x8005B02Cu;
    // 8005B02C: bl      0x800050B4
    {
            ctx->lr = 0x8005B030u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8005B030:
    ctx->pc = 0x8005B030u;
    ctx->downcount -= 7;
    // 8005B030: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005B034:
    ctx->pc = 0x8005B034u;
    // 8005B034: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8005B038:
    ctx->pc = 0x8005B038u;
    // 8005B038: addi    r5, r4, 15616
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15616);

label_8005B03C:
    ctx->pc = 0x8005B03Cu;
    // 8005B03C: li      r6, 127
    ctx->gpr[6] = (u32)(s32)(127);

label_8005B040:
    ctx->pc = 0x8005B040u;
    // 8005B040: li      r4, 3240
    ctx->gpr[4] = (u32)(s32)(3240);

label_8005B044:
    ctx->pc = 0x8005B044u;
    // 8005B044: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005B048:
    ctx->pc = 0x8005B048u;
    // 8005B048: bl      0x80055D58
    {
            ctx->lr = 0x8005B04Cu;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005B04C:
    ctx->pc = 0x8005B04Cu;
    ctx->downcount -= 7;
    // 8005B04C: stw     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B050:
    ctx->pc = 0x8005B050u;
    // 8005B050: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B054:
    ctx->pc = 0x8005B054u;
    // 8005B054: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8005B058:
    ctx->pc = 0x8005B058u;
    // 8005B058: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005B05C:
    ctx->pc = 0x8005B05Cu;
    // 8005B05C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005B060:
    ctx->pc = 0x8005B060u;
    // 8005B060: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005B064:
    ctx->pc = 0x8005B064u;
    ctx->downcount -= 16;
    // 8005B064: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005B068:
    ctx->pc = 0x8005B068u;
    // 8005B068: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005B06C:
    ctx->pc = 0x8005B06Cu;
    // 8005B06C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B070:
    ctx->pc = 0x8005B070u;
    // 8005B070: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005B074:
    ctx->pc = 0x8005B074u;
    // 8005B074: or.   r28, r3, r3
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

label_8005B078:
    ctx->pc = 0x8005B078u;
    // 8005B078: bc    12, 2, 0x8005B114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B114;
        }
    }

label_8005B07C:
    ctx->pc = 0x8005B07Cu;
    ctx->downcount -= 5;
    // 8005B07C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005B080:
    ctx->pc = 0x8005B080u;
    // 8005B080: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8005B084:
    ctx->pc = 0x8005B084u;
    // 8005B084: addi    r30, r3, 15616
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(15616);

label_8005B088:
    ctx->pc = 0x8005B088u;
    // 8005B088: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8005B08C:
    ctx->pc = 0x8005B08Cu;
    // 8005B08C: b       0x8005B0B4
    {
            goto label_8005B0B4;
    }

label_8005B090:
    ctx->pc = 0x8005B090u;
    ctx->downcount -= 4;
    // 8005B090: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B094:
    ctx->pc = 0x8005B094u;
    // 8005B094: lwzx    r3, r3, r31
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B098:
    // 8005B098: cmplwi  r3, 0x0000
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

label_8005B09C:
    // 8005B09C: bc    12, 2, 0x8005B0AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B0AC;
        }
    }

label_8005B0A0:
    ctx->downcount -= 3;
    // 8005B0A0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005B0A4:
    // 8005B0A4: li      r5, 109
    ctx->gpr[5] = (u32)(s32)(109);

label_8005B0A8:
    // 8005B0A8: bl      0x80055E80
    {
            ctx->lr = 0x8005B0ACu;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005B0AC:
    ctx->downcount -= 2;
    // 8005B0AC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8005B0B0:
    // 8005B0B0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8005B0B4:
    ctx->pc = 0x8005B0B4u;
    ctx->downcount -= 3;
    // 8005B0B4: lwz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B0B8:
    // 8005B0B8: cmpw    r29, r0
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

label_8005B0BC:
    // 8005B0BC: bc    12, 0, 0x8005B090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B090u;
                return;
            }
            goto label_8005B090;
        }
    }

label_8005B0C0:
    ctx->pc = 0x8005B0C0u;
    ctx->downcount -= 3;
    // 8005B0C0: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B0C4:
    ctx->pc = 0x8005B0C4u;
    // 8005B0C4: cmplwi  r3, 0x0000
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

label_8005B0C8:
    ctx->pc = 0x8005B0C8u;
    // 8005B0C8: bc    12, 2, 0x8005B0DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B0DC;
        }
    }

label_8005B0CC:
    ctx->pc = 0x8005B0CCu;
    ctx->downcount -= 4;
    // 8005B0CC: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005B0D0:
    ctx->pc = 0x8005B0D0u;
    // 8005B0D0: li      r5, 110
    ctx->gpr[5] = (u32)(s32)(110);

label_8005B0D4:
    ctx->pc = 0x8005B0D4u;
    // 8005B0D4: addi    r4, r4, 15616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15616);

label_8005B0D8:
    ctx->pc = 0x8005B0D8u;
    // 8005B0D8: bl      0x80055E80
    {
            ctx->lr = 0x8005B0DCu;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005B0DC:
    ctx->pc = 0x8005B0DCu;
    ctx->downcount -= 3;
    // 8005B0DC: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B0E0:
    ctx->pc = 0x8005B0E0u;
    // 8005B0E0: cmplwi  r3, 0x0000
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

label_8005B0E4:
    ctx->pc = 0x8005B0E4u;
    // 8005B0E4: bc    12, 2, 0x8005B0F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B0F8;
        }
    }

label_8005B0E8:
    ctx->pc = 0x8005B0E8u;
    ctx->downcount -= 4;
    // 8005B0E8: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005B0EC:
    ctx->pc = 0x8005B0ECu;
    // 8005B0EC: li      r5, 111
    ctx->gpr[5] = (u32)(s32)(111);

label_8005B0F0:
    ctx->pc = 0x8005B0F0u;
    // 8005B0F0: addi    r4, r4, 15616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15616);

label_8005B0F4:
    ctx->pc = 0x8005B0F4u;
    // 8005B0F4: bl      0x80055E80
    {
            ctx->lr = 0x8005B0F8u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005B0F8:
    ctx->pc = 0x8005B0F8u;
    ctx->downcount -= 3;
    // 8005B0F8: lwz     r3, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B0FC:
    ctx->pc = 0x8005B0FCu;
    // 8005B0FC: cmplwi  r3, 0x0000
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

label_8005B100:
    ctx->pc = 0x8005B100u;
    // 8005B100: bc    12, 2, 0x8005B114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B114;
        }
    }

label_8005B104:
    ctx->pc = 0x8005B104u;
    ctx->downcount -= 4;
    // 8005B104: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005B108:
    ctx->pc = 0x8005B108u;
    // 8005B108: li      r5, 112
    ctx->gpr[5] = (u32)(s32)(112);

label_8005B10C:
    ctx->pc = 0x8005B10Cu;
    // 8005B10C: addi    r4, r4, 15616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15616);

label_8005B110:
    ctx->pc = 0x8005B110u;
    // 8005B110: bl      0x80055E80
    {
            ctx->lr = 0x8005B114u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005B114:
    ctx->pc = 0x8005B114u;
    ctx->downcount -= 4;
    // 8005B114: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005B118:
    ctx->pc = 0x8005B118u;
    // 8005B118: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005B11C:
    ctx->pc = 0x8005B11Cu;
    // 8005B11C: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8005B120:
    ctx->pc = 0x8005B120u;
    // 8005B120: bl      0x800050B4
    {
            ctx->lr = 0x8005B124u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8005B124:
    ctx->pc = 0x8005B124u;
    ctx->downcount -= 16;
    // 8005B124: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005B128:
    ctx->pc = 0x8005B128u;
    // 8005B128: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B12C:
    ctx->pc = 0x8005B12Cu;
    // 8005B12C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005B130:
    ctx->pc = 0x8005B130u;
    // 8005B130: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005B134:
    ctx->pc = 0x8005B134u;
    // 8005B134: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005B138:
    ctx->pc = 0x8005B138u;
    ctx->downcount -= 6;
    // 8005B138: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005B13C:
    ctx->pc = 0x8005B13Cu;
    // 8005B13C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005B140:
    ctx->pc = 0x8005B140u;
    // 8005B140: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005B144:
    ctx->pc = 0x8005B144u;
    // 8005B144: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8005B148:
    ctx->pc = 0x8005B148u;
    // 8005B148: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B14C:
    ctx->pc = 0x8005B14Cu;
    // 8005B14C: bl      0x800050B4
    {
            ctx->lr = 0x8005B150u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8005B150:
    ctx->pc = 0x8005B150u;
    ctx->downcount -= 5;
    // 8005B150: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B154:
    ctx->pc = 0x8005B154u;
    // 8005B154: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005B158:
    ctx->pc = 0x8005B158u;
    // 8005B158: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005B15C:
    ctx->pc = 0x8005B15Cu;
    // 8005B15C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005B160:
    ctx->pc = 0x8005B160u;
    ctx->downcount -= 18;
    // 8005B160: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005B164:
    ctx->pc = 0x8005B164u;
    // 8005B164: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005B168:
    ctx->pc = 0x8005B168u;
    // 8005B168: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B16C:
    ctx->pc = 0x8005B16Cu;
    // 8005B16C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005B170:
    ctx->pc = 0x8005B170u;
    // 8005B170: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B174:
    ctx->pc = 0x8005B174u;
    // 8005B174: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005B178:
    ctx->pc = 0x8005B178u;
    // 8005B178: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005B17C:
    ctx->pc = 0x8005B17Cu;
    // 8005B17C: b       0x8005B194
    {
            goto label_8005B194;
    }

label_8005B180:
    ctx->downcount -= 3;
    // 8005B180: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B184:
    // 8005B184: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_8005B188:
    // 8005B188: bl      0x80060DE4
    {
            ctx->lr = 0x8005B18Cu;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B18C:
    ctx->pc = 0x8005B18Cu;
    ctx->downcount -= 2;
    // 8005B18C: stb     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8005B190:
    // 8005B190: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8005B194:
    ctx->downcount -= 3;
    // 8005B194: cmpwi   r31, 0
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

label_8005B198:
    // 8005B198: addi    r31, r31, -1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-1);

label_8005B19C:
    // 8005B19C: bc    4, 2, 0x8005B180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B180u;
                return;
            }
            goto label_8005B180;
        }
    }

label_8005B1A0:
    ctx->pc = 0x8005B1A0u;
    ctx->downcount -= 16;
    // 8005B1A0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005B1A4:
    ctx->pc = 0x8005B1A4u;
    // 8005B1A4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B1A8:
    ctx->pc = 0x8005B1A8u;
    // 8005B1A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005B1AC:
    ctx->pc = 0x8005B1ACu;
    // 8005B1AC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005B1B0:
    ctx->pc = 0x8005B1B0u;
    // 8005B1B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005B1B4:
    ctx->pc = 0x8005B1B4u;
    ctx->downcount -= 29;
    // 8005B1B4: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005B1B8:
    ctx->pc = 0x8005B1B8u;
    // 8005B1B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005B1BC:
    ctx->pc = 0x8005B1BCu;
    // 8005B1BC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B1C0:
    ctx->pc = 0x8005B1C0u;
    // 8005B1C0: stmw     r18, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 18; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005B1C4:
    ctx->pc = 0x8005B1C4u;
    // 8005B1C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B1C8:
    ctx->pc = 0x8005B1C8u;
    // 8005B1C8: or   r19, r4, r4
    {
        ctx->gpr[19] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005B1CC:
    ctx->pc = 0x8005B1CCu;
    // 8005B1CC: lwz     r3, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B1D0:
    ctx->pc = 0x8005B1D0u;
    // 8005B1D0: lwz     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B1D4:
    ctx->pc = 0x8005B1D4u;
    // 8005B1D4: lwz     r27, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_8005B1D8:
    ctx->pc = 0x8005B1D8u;
    // 8005B1D8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B1DC:
    ctx->pc = 0x8005B1DCu;
    // 8005B1DC: lwz     r25, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_8005B1E0:
    ctx->pc = 0x8005B1E0u;
    // 8005B1E0: lwz     r26, 28(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(28);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8005B1E4:
    ctx->pc = 0x8005B1E4u;
    // 8005B1E4: lwz     r24, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_8005B1E8:
    ctx->pc = 0x8005B1E8u;
    // 8005B1E8: lwzx    r0, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B1EC:
    ctx->pc = 0x8005B1ECu;
    // 8005B1EC: stw     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B1F0:
    ctx->pc = 0x8005B1F0u;
    // 8005B1F0: or   r22, r0, r0
    {
        ctx->gpr[22] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8005B1F4:
    ctx->pc = 0x8005B1F4u;
    // 8005B1F4: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B1F8:
    ctx->pc = 0x8005B1F8u;
    // 8005B1F8: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B1FC:
    ctx->pc = 0x8005B1FCu;
    // 8005B1FC: bl      0x80055FF0
    {
            ctx->lr = 0x8005B200u;
            ctx->pc = 0x80055FF0u;
            return;
    }

label_8005B200:
    ctx->pc = 0x8005B200u;
    ctx->downcount -= 4;
    // 8005B200: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B204:
    ctx->pc = 0x8005B204u;
    // 8005B204: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B208:
    ctx->pc = 0x8005B208u;
    // 8005B208: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B20C:
    ctx->pc = 0x8005B20Cu;
    // 8005B20C: bl      0x80055FF0
    {
            ctx->lr = 0x8005B210u;
            ctx->pc = 0x80055FF0u;
            return;
    }

label_8005B210:
    ctx->pc = 0x8005B210u;
    ctx->downcount -= 4;
    // 8005B210: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B214:
    ctx->pc = 0x8005B214u;
    // 8005B214: or   r20, r3, r3
    {
        ctx->gpr[20] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B218:
    ctx->pc = 0x8005B218u;
    // 8005B218: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B21C:
    ctx->pc = 0x8005B21Cu;
    // 8005B21C: bl      0x80055FF0
    {
            ctx->lr = 0x8005B220u;
            ctx->pc = 0x80055FF0u;
            return;
    }

label_8005B220:
    ctx->pc = 0x8005B220u;
    ctx->downcount -= 4;
    // 8005B220: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B224:
    ctx->pc = 0x8005B224u;
    // 8005B224: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B228:
    ctx->pc = 0x8005B228u;
    // 8005B228: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B22C:
    ctx->pc = 0x8005B22Cu;
    // 8005B22C: bl      0x80055FF0
    {
            ctx->lr = 0x8005B230u;
            ctx->pc = 0x80055FF0u;
            return;
    }

label_8005B230:
    ctx->pc = 0x8005B230u;
    ctx->downcount -= 5;
    // 8005B230: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B234:
    ctx->pc = 0x8005B234u;
    // 8005B234: rlwinm r28, r22, 1, 1, 30
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[22], 1u) & 0x7FFFFFFEu;
    }

label_8005B238:
    ctx->pc = 0x8005B238u;
    // 8005B238: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_8005B23C:
    ctx->pc = 0x8005B23Cu;
    // 8005B23C: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_8005B240:
    ctx->pc = 0x8005B240u;
    // 8005B240: b       0x8005B2B0
    {
            goto label_8005B2B0;
    }

label_8005B244:
    ctx->downcount -= 12;
    // 8005B244: addi    r0, r18, 4
    ctx->gpr[0] = ctx->gpr[18] + (u32)(s32)(4);

label_8005B248:
    ctx->pc = 0x8005B248u;
    // 8005B248: lwz     r4, 16(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005B24C:
    ctx->pc = 0x8005B24Cu;
    // 8005B24C: lwzx    r0, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B250:
    // 8005B250: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005B254:
    ctx->pc = 0x8005B254u;
    // 8005B254: lwz     r6, 8(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005B258:
    // 8005B258: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B25C:
    ctx->pc = 0x8005B25Cu;
    // 8005B25C: lwzx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B260:
    ctx->pc = 0x8005B260u;
    // 8005B260: lwzx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005B264:
    ctx->pc = 0x8005B264u;
    // 8005B264: lwz     r12, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005B268:
    ctx->pc = 0x8005B268u;
    // 8005B268: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005B26C:
    ctx->pc = 0x8005B26Cu;
    // 8005B26C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005B270u;
            ctx->pc = target;
            return;
        }
    }

label_8005B270:
    ctx->pc = 0x8005B270u;
    ctx->downcount -= 4;
    // 8005B270: stwx    r3, r30, r18
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[18];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B274:
    ctx->pc = 0x8005B274u;
    // 8005B274: lwzx    r0, r30, r18
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[18];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B278:
    // 8005B278: cmplwi  r0, 0x0000
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

label_8005B27C:
    // 8005B27C: bc    12, 2, 0x8005B28C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B28C;
        }
    }

label_8005B280:
    ctx->downcount -= 3;
    // 8005B280: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8005B284:
    ctx->pc = 0x8005B284u;
    // 8005B284: stwx    r0, r29, r18
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[18];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B288:
    // 8005B288: b       0x8005B294
    {
            goto label_8005B294;
    }

label_8005B28C:
    ctx->downcount -= 2;
    // 8005B28C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8005B290:
    ctx->pc = 0x8005B290u;
    // 8005B290: stwx    r0, r29, r18
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[18];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B294:
    ctx->pc = 0x8005B294u;
    ctx->downcount -= 5;
    // 8005B294: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B298:
    // 8005B298: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005B29C:
    // 8005B29C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005B2A0:
    ctx->pc = 0x8005B2A0u;
    // 8005B2A0: lwzx    r3, r3, r18
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[18];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B2A4:
    // 8005B2A4: bl      0x800050B4
    {
            ctx->lr = 0x8005B2A8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8005B2A8:
    ctx->downcount -= 2;
    // 8005B2A8: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_8005B2AC:
    // 8005B2AC: addi    r18, r18, 4
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(4);

label_8005B2B0:
    ctx->pc = 0x8005B2B0u;
    ctx->downcount -= 3;
    // 8005B2B0: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B2B4:
    // 8005B2B4: cmpw    r23, r0
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

label_8005B2B8:
    // 8005B2B8: bc    12, 0, 0x8005B244
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B244u;
                return;
            }
            goto label_8005B244;
        }
    }

label_8005B2BC:
    ctx->pc = 0x8005B2BCu;
    ctx->downcount -= 4;
    // 8005B2BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8005B2C0:
    ctx->pc = 0x8005B2C0u;
    // 8005B2C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005B2C4:
    ctx->pc = 0x8005B2C4u;
    // 8005B2C4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8005B2C8:
    ctx->pc = 0x8005B2C8u;
    // 8005B2C8: b       0x8005B310
    {
            goto label_8005B310;
    }

label_8005B2CC:
    ctx->downcount -= 6;
    // 8005B2CC: add   r6, r24, r3
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8005B2D0:
    ctx->pc = 0x8005B2D0u;
    // 8005B2D0: lwz     r0, 1168(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1168);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B2D4:
    // 8005B2D4: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B2D8:
    ctx->pc = 0x8005B2D8u;
    // 8005B2D8: lwzx    r0, r29, r5
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[5];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B2DC:
    // 8005B2DC: cmpwi   r0, 0
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

label_8005B2E0:
    // 8005B2E0: bc    4, 2, 0x8005B2F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B2F8;
        }
    }

label_8005B2E4:
    ctx->pc = 0x8005B2E4u;
    ctx->downcount -= 5;
    // 8005B2E4: lwz     r0, 2192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B2E8:
    // 8005B2E8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B2EC:
    ctx->pc = 0x8005B2ECu;
    // 8005B2EC: lwzx    r0, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B2F0:
    // 8005B2F0: cmpwi   r0, 0
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

label_8005B2F4:
    // 8005B2F4: bc    12, 2, 0x8005B308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B308;
        }
    }

label_8005B2F8:
    ctx->pc = 0x8005B2F8u;
    ctx->downcount -= 4;
    // 8005B2F8: stwx    r4, r29, r5
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[5];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8005B2FC:
    ctx->pc = 0x8005B2FCu;
    // 8005B2FC: lwz     r0, 2192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B300:
    // 8005B300: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B304:
    ctx->pc = 0x8005B304u;
    // 8005B304: stwx    r4, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8005B308:
    ctx->downcount -= 2;
    // 8005B308: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_8005B30C:
    // 8005B30C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_8005B310:
    ctx->pc = 0x8005B310u;
    ctx->downcount -= 3;
    // 8005B310: lwz     r0, 1164(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B314:
    // 8005B314: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005B318:
    // 8005B318: bc    12, 0, 0x8005B2CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B2CCu;
                return;
            }
            goto label_8005B2CC;
        }
    }

label_8005B31C:
    ctx->pc = 0x8005B31Cu;
    ctx->downcount -= 3;
    // 8005B31C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005B320:
    ctx->pc = 0x8005B320u;
    // 8005B320: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_8005B324:
    ctx->pc = 0x8005B324u;
    // 8005B324: b       0x8005B3C4
    {
            goto label_8005B3C4;
    }

label_8005B328:
    ctx->downcount -= 7;
    // 8005B328: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8005B32C:
    // 8005B32C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005B330:
    // 8005B330: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8005B334:
    // 8005B334: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005B338:
    // 8005B338: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_8005B33C:
    // 8005B33C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8005B340:
    // 8005B340: b       0x8005B388
    {
            goto label_8005B388;
    }

label_8005B344:
    ctx->downcount -= 4;
    // 8005B344: addi    r0, r4, 4
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4);

label_8005B348:
    ctx->pc = 0x8005B348u;
    // 8005B348: lwzx    r0, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B34C:
    // 8005B34C: cmpw    r0, r28
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005B350:
    // 8005B350: bc    4, 2, 0x8005B380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B380;
        }
    }

label_8005B354:
    ctx->pc = 0x8005B354u;
    ctx->downcount -= 3;
    // 8005B354: lwzx    r0, r29, r4
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B358:
    // 8005B358: cmpwi   r0, 0
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

label_8005B35C:
    // 8005B35C: bc    12, 2, 0x8005B368
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B368;
        }
    }

label_8005B360:
    ctx->pc = 0x8005B360u;
    ctx->downcount -= 2;
    // 8005B360: stwx    r8, r20, r3
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8005B364:
    // 8005B364: b       0x8005B36C
    {
            goto label_8005B36C;
    }

label_8005B368:
    ctx->pc = 0x8005B368u;
    ctx->downcount -= 1;
    // 8005B368: stwx    r6, r20, r3
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8005B36C:
    ctx->pc = 0x8005B36Cu;
    ctx->downcount -= 5;
    // 8005B36C: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B370:
    // 8005B370: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_8005B374:
    ctx->pc = 0x8005B374u;
    // 8005B374: lwzx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B378:
    ctx->pc = 0x8005B378u;
    // 8005B378: stwx    r0, r21, r3
    {
        u32 ea = ctx->gpr[21] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B37C:
    // 8005B37C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_8005B380:
    ctx->downcount -= 2;
    // 8005B380: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_8005B384:
    // 8005B384: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8005B388:
    ctx->pc = 0x8005B388u;
    ctx->downcount -= 3;
    // 8005B388: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B38C:
    // 8005B38C: cmpw    r9, r0
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

label_8005B390:
    // 8005B390: bc    12, 0, 0x8005B344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B344u;
                return;
            }
            goto label_8005B344;
        }
    }

label_8005B394:
    ctx->pc = 0x8005B394u;
    ctx->downcount -= 11;
    // 8005B394: lwz     r4, 20(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005B398:
    // 8005B398: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005B39C:
    ctx->pc = 0x8005B39Cu;
    // 8005B39C: lwz     r9, 12(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8005B3A0:
    // 8005B3A0: or   r5, r21, r21
    {
        ctx->gpr[5] = ctx->gpr[21] | ctx->gpr[21];
    }

label_8005B3A4:
    ctx->pc = 0x8005B3A4u;
    // 8005B3A4: lwzx    r8, r4, r23
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[23];
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8005B3A8:
    // 8005B3A8: or   r6, r20, r20
    {
        ctx->gpr[6] = ctx->gpr[20] | ctx->gpr[20];
    }

label_8005B3AC:
    ctx->pc = 0x8005B3ACu;
    // 8005B3AC: lwzx    r4, r9, r23
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[23];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005B3B0:
    ctx->pc = 0x8005B3B0u;
    // 8005B3B0: lwz     r12, 16(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005B3B4:
    ctx->pc = 0x8005B3B4u;
    // 8005B3B4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005B3B8:
    ctx->pc = 0x8005B3B8u;
    // 8005B3B8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005B3BCu;
            ctx->pc = target;
            return;
        }
    }

label_8005B3BC:
    ctx->downcount -= 2;
    // 8005B3BC: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8005B3C0:
    // 8005B3C0: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_8005B3C4:
    ctx->pc = 0x8005B3C4u;
    ctx->downcount -= 3;
    // 8005B3C4: lwz     r0, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B3C8:
    // 8005B3C8: cmpw    r28, r0
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

label_8005B3CC:
    // 8005B3CC: bc    12, 0, 0x8005B328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B328u;
                return;
            }
            goto label_8005B328;
        }
    }

label_8005B3D0:
    ctx->pc = 0x8005B3D0u;
    ctx->downcount -= 6;
    // 8005B3D0: lwz     r3, 1164(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B3D4:
    ctx->pc = 0x8005B3D4u;
    // 8005B3D4: srawi r0, r22, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[22];
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

label_8005B3D8:
    ctx->pc = 0x8005B3D8u;
    // 8005B3D8: addze  r6, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[6] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8005B3DC:
    ctx->pc = 0x8005B3DCu;
    // 8005B3DC: addi    r8, r3, -1
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-1);

label_8005B3E0:
    ctx->pc = 0x8005B3E0u;
    // 8005B3E0: rlwinm r3, r8, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[8], 2u) & 0xFFFFFFFCu;
    }

label_8005B3E4:
    ctx->pc = 0x8005B3E4u;
    // 8005B3E4: b       0x8005B484
    {
            goto label_8005B484;
    }

label_8005B3E8:
    ctx->downcount -= 13;
    // 8005B3E8: add   r4, r24, r3
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8005B3EC:
    ctx->pc = 0x8005B3ECu;
    // 8005B3EC: lwz     r7, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8005B3F0:
    ctx->pc = 0x8005B3F0u;
    // 8005B3F0: lwz     r5, 1168(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B3F4:
    ctx->pc = 0x8005B3F4u;
    // 8005B3F4: lwz     r0, 2192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B3F8:
    // 8005B3F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005B3FC:
    // 8005B3FC: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_8005B400:
    // 8005B400: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B404:
    ctx->pc = 0x8005B404u;
    // 8005B404: lwzx    r5, r7, r5
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[5];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B408:
    ctx->pc = 0x8005B408u;
    // 8005B408: lwzx    r7, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8005B40C:
    ctx->pc = 0x8005B40Cu;
    // 8005B40C: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_8005B410:
    // 8005B410: cmpwi   r6, 0
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

label_8005B414:
    // 8005B414: bc    4, 1, 0x8005B47C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B47C;
        }
    }

label_8005B418:
    ctx->pc = 0x8005B418u;
    ctx->downcount -= 4;
    // 8005B418: lwzx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B41C:
    ctx->pc = 0x8005B41Cu;
    // 8005B41C: lwzx    r9, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8005B420:
    // 8005B420: cmpwi   r0, 0
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

label_8005B424:
    // 8005B424: bc    4, 1, 0x8005B450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B450;
        }
    }

label_8005B428:
    ctx->downcount -= 2;
    // 8005B428: cmpwi   r9, 0
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

label_8005B42C:
    // 8005B42C: bc    4, 1, 0x8005B440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B440;
        }
    }

label_8005B430:
    ctx->pc = 0x8005B430u;
    ctx->downcount -= 4;
    // 8005B430: stwx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B434:
    // 8005B434: subf   r0, r9, r0
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005B438:
    ctx->pc = 0x8005B438u;
    // 8005B438: stwx    r0, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B43C:
    // 8005B43C: b       0x8005B474
    {
            goto label_8005B474;
    }

label_8005B440:
    ctx->pc = 0x8005B440u;
    ctx->downcount -= 4;
    // 8005B440: stwx    r0, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B444:
    // 8005B444: add   r0, r0, r9
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005B448:
    ctx->pc = 0x8005B448u;
    // 8005B448: stwx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B44C:
    // 8005B44C: b       0x8005B474
    {
            goto label_8005B474;
    }

label_8005B450:
    ctx->downcount -= 2;
    // 8005B450: cmpwi   r9, 0
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

label_8005B454:
    // 8005B454: bc    4, 1, 0x8005B468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B468;
        }
    }

label_8005B458:
    ctx->pc = 0x8005B458u;
    ctx->downcount -= 4;
    // 8005B458: stwx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B45C:
    // 8005B45C: add   r0, r0, r9
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005B460:
    ctx->pc = 0x8005B460u;
    // 8005B460: stwx    r0, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B464:
    // 8005B464: b       0x8005B474
    {
            goto label_8005B474;
    }

label_8005B468:
    ctx->pc = 0x8005B468u;
    ctx->downcount -= 3;
    // 8005B468: stwx    r0, r7, r4
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B46C:
    // 8005B46C: subf   r0, r9, r0
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005B470:
    ctx->pc = 0x8005B470u;
    // 8005B470: stwx    r0, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B474:
    ctx->downcount -= 2;
    // 8005B474: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8005B478:
    // 8005B478: bc    16, 0, 0x8005B418
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B418u;
                return;
            }
            goto label_8005B418;
        }
    }

label_8005B47C:
    ctx->downcount -= 2;
    // 8005B47C: addi    r8, r8, -1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-1);

label_8005B480:
    // 8005B480: addi    r3, r3, -4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4);

label_8005B484:
    ctx->downcount -= 2;
    // 8005B484: cmpwi   r8, 0
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

label_8005B488:
    // 8005B488: bc    4, 0, 0x8005B3E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B3E8u;
                return;
            }
            goto label_8005B3E8;
        }
    }

label_8005B48C:
    ctx->pc = 0x8005B48Cu;
    ctx->downcount -= 3;
    // 8005B48C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005B490:
    ctx->pc = 0x8005B490u;
    // 8005B490: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_8005B494:
    ctx->pc = 0x8005B494u;
    // 8005B494: b       0x8005B4D8
    {
            goto label_8005B4D8;
    }

label_8005B498:
    ctx->downcount -= 15;
    // 8005B498: addi    r0, r20, 4
    ctx->gpr[0] = ctx->gpr[20] + (u32)(s32)(4);

label_8005B49C:
    ctx->pc = 0x8005B49Cu;
    // 8005B49C: lwz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005B4A0:
    ctx->pc = 0x8005B4A0u;
    // 8005B4A0: lwzx    r0, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B4A4:
    // 8005B4A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005B4A8:
    ctx->pc = 0x8005B4A8u;
    // 8005B4A8: lwz     r4, 16(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005B4AC:
    // 8005B4AC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B4B0:
    ctx->pc = 0x8005B4B0u;
    // 8005B4B0: lwz     r7, 8(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8005B4B4:
    ctx->pc = 0x8005B4B4u;
    // 8005B4B4: lwzx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B4B8:
    ctx->pc = 0x8005B4B8u;
    // 8005B4B8: lwzx    r4, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005B4BC:
    ctx->pc = 0x8005B4BCu;
    // 8005B4BC: lwz     r12, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005B4C0:
    ctx->pc = 0x8005B4C0u;
    // 8005B4C0: lwzx    r5, r30, r20
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[20];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B4C4:
    ctx->pc = 0x8005B4C4u;
    // 8005B4C4: lwzx    r6, r6, r20
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[20];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005B4C8:
    ctx->pc = 0x8005B4C8u;
    // 8005B4C8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005B4CC:
    ctx->pc = 0x8005B4CCu;
    // 8005B4CC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005B4D0u;
            ctx->pc = target;
            return;
        }
    }

label_8005B4D0:
    ctx->downcount -= 2;
    // 8005B4D0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8005B4D4:
    // 8005B4D4: addi    r20, r20, 4
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(4);

label_8005B4D8:
    ctx->pc = 0x8005B4D8u;
    ctx->downcount -= 3;
    // 8005B4D8: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B4DC:
    // 8005B4DC: cmpw    r28, r0
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

label_8005B4E0:
    // 8005B4E0: bc    12, 0, 0x8005B498
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B498u;
                return;
            }
            goto label_8005B498;
        }
    }

label_8005B4E4:
    ctx->pc = 0x8005B4E4u;
    ctx->downcount -= 4;
    // 8005B4E4: or   r18, r22, r22
    {
        ctx->gpr[18] = ctx->gpr[22] | ctx->gpr[22];
    }

label_8005B4E8:
    ctx->pc = 0x8005B4E8u;
    // 8005B4E8: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_8005B4EC:
    ctx->pc = 0x8005B4ECu;
    // 8005B4EC: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_8005B4F0:
    ctx->pc = 0x8005B4F0u;
    // 8005B4F0: b       0x8005B510
    {
            goto label_8005B510;
    }

label_8005B4F4:
    ctx->pc = 0x8005B4F4u;
    ctx->downcount -= 5;
    // 8005B4F4: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005B4F8:
    // 8005B4F8: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_8005B4FC:
    ctx->pc = 0x8005B4FCu;
    // 8005B4FC: lwzx    r4, r4, r19
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[19];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005B500:
    // 8005B500: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005B504:
    // 8005B504: bl      0x8005BB14
    {
            ctx->lr = 0x8005B508u;
            goto label_8005BB14;
    }

label_8005B508:
    ctx->downcount -= 2;
    // 8005B508: addi    r20, r20, 1
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(1);

label_8005B50C:
    // 8005B50C: addi    r19, r19, 4
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(4);

label_8005B510:
    ctx->pc = 0x8005B510u;
    ctx->downcount -= 3;
    // 8005B510: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B514:
    // 8005B514: cmpw    r20, r0
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

label_8005B518:
    // 8005B518: bc    12, 0, 0x8005B4F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B4F4u;
                return;
            }
            goto label_8005B4F4;
        }
    }

label_8005B51C:
    ctx->pc = 0x8005B51Cu;
    ctx->downcount -= 3;
    // 8005B51C: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_8005B520:
    ctx->pc = 0x8005B520u;
    // 8005B520: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_8005B524:
    ctx->pc = 0x8005B524u;
    // 8005B524: b       0x8005B580
    {
            goto label_8005B580;
    }

label_8005B528:
    ctx->pc = 0x8005B528u;
    ctx->downcount -= 5;
    // 8005B528: lwzx    r0, r29, r19
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[19];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B52C:
    ctx->pc = 0x8005B52Cu;
    // 8005B52C: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B530:
    // 8005B530: cmpwi   r0, 0
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

label_8005B534:
    ctx->pc = 0x8005B534u;
    // 8005B534: lwzx    r3, r3, r19
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[19];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B538:
    // 8005B538: bc    12, 2, 0x8005B558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B558;
        }
    }

label_8005B53C:
    ctx->pc = 0x8005B53Cu;
    ctx->downcount -= 6;
    // 8005B53C: lwz     r6, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005B540:
    // 8005B540: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8005B544:
    ctx->pc = 0x8005B544u;
    // 8005B544: lwz     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8005B548:
    // 8005B548: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8005B54C:
    ctx->pc = 0x8005B54Cu;
    // 8005B54C: lwz     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8005B550:
    // 8005B550: bl      0x80060BAC
    {
            ctx->lr = 0x8005B554u;
            ctx->pc = 0x80060BACu;
            return;
    }

label_8005B554:
    ctx->downcount -= 1;
    // 8005B554: b       0x8005B578
    {
            goto label_8005B578;
    }

label_8005B558:
    ctx->downcount -= 6;
    // 8005B558: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8005B55C:
    // 8005B55C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005B560:
    ctx->pc = 0x8005B560u;
    // 8005B560: mtctr    r22
    ctx->ctr = ctx->gpr[22];

label_8005B564:
    // 8005B564: cmpwi   r22, 0
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

label_8005B568:
    // 8005B568: bc    4, 1, 0x8005B578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B578;
        }
    }

label_8005B56C:
    loop_8005B56C(ctx);
    if (ctx->pc == 0x8005B578u) goto label_8005B578;
    return;
label_8005B570:
    // 8005B570: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8005B574:
    // 8005B574: bc    16, 0, 0x8005B56C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B56Cu;
                return;
            }
            goto label_8005B56C;
        }
    }

label_8005B578:
    ctx->downcount -= 2;
    // 8005B578: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_8005B57C:
    // 8005B57C: addi    r19, r19, 4
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(4);

label_8005B580:
    ctx->pc = 0x8005B580u;
    ctx->downcount -= 3;
    // 8005B580: lwz     r5, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B584:
    // 8005B584: cmpw    r18, r5
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005B588:
    // 8005B588: bc    12, 0, 0x8005B528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B528u;
                return;
            }
            goto label_8005B528;
        }
    }

label_8005B58C:
    ctx->pc = 0x8005B58Cu;
    ctx->downcount -= 6;
    // 8005B58C: lis     r4, -32728
    ctx->gpr[4] = ((u32)(s32)(-32728) << 16);

label_8005B590:
    ctx->pc = 0x8005B590u;
    // 8005B590: lwzu     r0, -8800(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8800);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_8005B594:
    ctx->pc = 0x8005B594u;
    // 8005B594: or   r3, r21, r21
    {
        ctx->gpr[3] = ctx->gpr[21] | ctx->gpr[21];
    }

label_8005B598:
    ctx->pc = 0x8005B598u;
    // 8005B598: add   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005B59C:
    ctx->pc = 0x8005B59Cu;
    // 8005B59C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B5A0:
    ctx->pc = 0x8005B5A0u;
    // 8005B5A0: bl      0x8005604C
    {
            ctx->lr = 0x8005B5A4u;
            ctx->pc = 0x8005604Cu;
            return;
    }

label_8005B5A4:
    ctx->pc = 0x8005B5A4u;
    ctx->downcount -= 17;
    // 8005B5A4: lmw     r18, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 18; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005B5A8:
    ctx->pc = 0x8005B5A8u;
    // 8005B5A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005B5AC:
    ctx->pc = 0x8005B5ACu;
    // 8005B5AC: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B5B0:
    ctx->pc = 0x8005B5B0u;
    // 8005B5B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005B5B4:
    ctx->pc = 0x8005B5B4u;
    // 8005B5B4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8005B5B8:
    ctx->pc = 0x8005B5B8u;
    // 8005B5B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005B5BC:
    ctx->pc = 0x8005B5BCu;
    ctx->downcount -= 23;
    // 8005B5BC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005B5C0:
    ctx->pc = 0x8005B5C0u;
    // 8005B5C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005B5C4:
    ctx->pc = 0x8005B5C4u;
    // 8005B5C4: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_8005B5C8:
    ctx->pc = 0x8005B5C8u;
    // 8005B5C8: li      r6, 133
    ctx->gpr[6] = (u32)(s32)(133);

label_8005B5CC:
    ctx->pc = 0x8005B5CCu;
    // 8005B5CC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B5D0:
    ctx->pc = 0x8005B5D0u;
    // 8005B5D0: addi    r5, r5, 15624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15624);

label_8005B5D4:
    ctx->pc = 0x8005B5D4u;
    // 8005B5D4: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005B5D8:
    ctx->pc = 0x8005B5D8u;
    // 8005B5D8: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005B5DC:
    ctx->pc = 0x8005B5DCu;
    // 8005B5DC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B5E0:
    ctx->pc = 0x8005B5E0u;
    // 8005B5E0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005B5E4:
    ctx->pc = 0x8005B5E4u;
    // 8005B5E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8005B5E8:
    ctx->pc = 0x8005B5E8u;
    // 8005B5E8: li      r4, 3216
    ctx->gpr[4] = (u32)(s32)(3216);

label_8005B5EC:
    ctx->pc = 0x8005B5ECu;
    // 8005B5EC: bl      0x80055D58
    {
            ctx->lr = 0x8005B5F0u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005B5F0:
    ctx->pc = 0x8005B5F0u;
    ctx->downcount -= 5;
    // 8005B5F0: lwz     r30, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8005B5F4:
    ctx->pc = 0x8005B5F4u;
    // 8005B5F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B5F8:
    ctx->pc = 0x8005B5F8u;
    // 8005B5F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005B5FC:
    ctx->pc = 0x8005B5FCu;
    // 8005B5FC: li      r5, 3216
    ctx->gpr[5] = (u32)(s32)(3216);

label_8005B600:
    ctx->pc = 0x8005B600u;
    // 8005B600: bl      0x800050B4
    {
            ctx->lr = 0x8005B604u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8005B604:
    ctx->pc = 0x8005B604u;
    ctx->downcount -= 3;
    // 8005B604: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B608:
    ctx->pc = 0x8005B608u;
    // 8005B608: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8005B60C:
    ctx->pc = 0x8005B60Cu;
    // 8005B60C: bl      0x80060DE4
    {
            ctx->lr = 0x8005B610u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B610:
    ctx->pc = 0x8005B610u;
    ctx->downcount -= 2;
    // 8005B610: cmpwi   r3, 0
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

label_8005B614:
    ctx->pc = 0x8005B614u;
    // 8005B614: bc    12, 2, 0x8005B630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B630;
        }
    }

label_8005B618:
    ctx->pc = 0x8005B618u;
    ctx->downcount -= 3;
    // 8005B618: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B61C:
    ctx->pc = 0x8005B61Cu;
    // 8005B61C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005B620:
    ctx->pc = 0x8005B620u;
    // 8005B620: bl      0x80060DE4
    {
            ctx->lr = 0x8005B624u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B624:
    ctx->pc = 0x8005B624u;
    ctx->downcount -= 3;
    // 8005B624: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8005B628:
    ctx->pc = 0x8005B628u;
    // 8005B628: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B62C:
    ctx->pc = 0x8005B62Cu;
    // 8005B62C: b       0x8005B638
    {
            goto label_8005B638;
    }

label_8005B630:
    ctx->pc = 0x8005B630u;
    ctx->downcount -= 2;
    // 8005B630: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8005B634:
    ctx->pc = 0x8005B634u;
    // 8005B634: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B638:
    ctx->pc = 0x8005B638u;
    ctx->downcount -= 3;
    // 8005B638: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B63C:
    ctx->pc = 0x8005B63Cu;
    // 8005B63C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8005B640:
    ctx->pc = 0x8005B640u;
    // 8005B640: bl      0x80060DE4
    {
            ctx->lr = 0x8005B644u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B644:
    ctx->pc = 0x8005B644u;
    ctx->downcount -= 2;
    // 8005B644: cmpwi   r3, 0
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

label_8005B648:
    ctx->pc = 0x8005B648u;
    // 8005B648: bc    12, 2, 0x8005B6E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B6E4;
        }
    }

label_8005B64C:
    ctx->pc = 0x8005B64Cu;
    ctx->downcount -= 3;
    // 8005B64C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B650:
    ctx->pc = 0x8005B650u;
    // 8005B650: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_8005B654:
    ctx->pc = 0x8005B654u;
    // 8005B654: bl      0x80060DE4
    {
            ctx->lr = 0x8005B658u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B658:
    ctx->pc = 0x8005B658u;
    ctx->downcount -= 5;
    // 8005B658: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_8005B65C:
    ctx->pc = 0x8005B65Cu;
    // 8005B65C: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8005B660:
    ctx->pc = 0x8005B660u;
    // 8005B660: stw     r0, 1164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B664:
    ctx->pc = 0x8005B664u;
    // 8005B664: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8005B668:
    ctx->pc = 0x8005B668u;
    // 8005B668: b       0x8005B6D8
    {
            goto label_8005B6D8;
    }

label_8005B66C:
    ctx->pc = 0x8005B66Cu;
    ctx->downcount -= 2;
    // 8005B66C: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B670:
    // 8005B670: bl      0x8005B7EC
    {
            ctx->lr = 0x8005B674u;
            goto label_8005B7EC;
    }

label_8005B674:
    ctx->downcount -= 3;
    // 8005B674: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B678:
    // 8005B678: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B67C:
    // 8005B67C: bl      0x80060DE4
    {
            ctx->lr = 0x8005B680u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B680:
    ctx->downcount -= 5;
    // 8005B680: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B684:
    // 8005B684: add   r25, r31, r27
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_8005B688:
    ctx->pc = 0x8005B688u;
    // 8005B688: stw     r26, 1168(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1168);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_8005B68C:
    ctx->pc = 0x8005B68Cu;
    // 8005B68C: lwz     r3, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B690:
    // 8005B690: bl      0x8005B7EC
    {
            ctx->lr = 0x8005B694u;
            goto label_8005B7EC;
    }

label_8005B694:
    ctx->downcount -= 3;
    // 8005B694: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B698:
    // 8005B698: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B69C:
    // 8005B69C: bl      0x80060DE4
    {
            ctx->lr = 0x8005B6A0u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B6A0:
    ctx->downcount -= 3;
    // 8005B6A0: cmpwi   r26, 0
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

label_8005B6A4:
    ctx->pc = 0x8005B6A4u;
    // 8005B6A4: stw     r3, 2192(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(2192);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B6A8:
    // 8005B6A8: bc    12, 0, 0x8005B7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B7CC;
        }
    }

label_8005B6AC:
    ctx->downcount -= 2;
    // 8005B6AC: cmpwi   r3, 0
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

label_8005B6B0:
    // 8005B6B0: bc    12, 0, 0x8005B7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B7CC;
        }
    }

label_8005B6B4:
    ctx->downcount -= 2;
    // 8005B6B4: cmpw    r26, r3
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005B6B8:
    // 8005B6B8: bc    12, 2, 0x8005B7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B7CC;
        }
    }

label_8005B6BC:
    ctx->pc = 0x8005B6BCu;
    ctx->downcount -= 3;
    // 8005B6BC: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B6C0:
    // 8005B6C0: cmpw    r26, r0
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

label_8005B6C4:
    // 8005B6C4: bc    4, 0, 0x8005B7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B7CC;
        }
    }

label_8005B6C8:
    ctx->downcount -= 2;
    // 8005B6C8: cmpw    r3, r0
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

label_8005B6CC:
    // 8005B6CC: bc    4, 0, 0x8005B7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B7CC;
        }
    }

label_8005B6D0:
    ctx->downcount -= 2;
    // 8005B6D0: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_8005B6D4:
    // 8005B6D4: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_8005B6D8:
    ctx->pc = 0x8005B6D8u;
    ctx->downcount -= 3;
    // 8005B6D8: lwz     r0, 1164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B6DC:
    // 8005B6DC: cmpw    r24, r0
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005B6E0:
    // 8005B6E0: bc    12, 0, 0x8005B66C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B66Cu;
                return;
            }
            goto label_8005B66C;
        }
    }

label_8005B6E4:
    ctx->pc = 0x8005B6E4u;
    ctx->downcount -= 3;
    // 8005B6E4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B6E8:
    ctx->pc = 0x8005B6E8u;
    // 8005B6E8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8005B6EC:
    ctx->pc = 0x8005B6ECu;
    // 8005B6EC: bl      0x80060DE4
    {
            ctx->lr = 0x8005B6F0u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B6F0:
    ctx->pc = 0x8005B6F0u;
    ctx->downcount -= 2;
    // 8005B6F0: cmpwi   r3, 0
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

label_8005B6F4:
    ctx->pc = 0x8005B6F4u;
    // 8005B6F4: bc    12, 1, 0x8005B7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B7CC;
        }
    }

label_8005B6F8:
    ctx->pc = 0x8005B6F8u;
    ctx->downcount -= 3;
    // 8005B6F8: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B6FC:
    ctx->pc = 0x8005B6FCu;
    // 8005B6FC: cmpwi   r0, 1
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

label_8005B700:
    ctx->pc = 0x8005B700u;
    // 8005B700: bc    4, 1, 0x8005B748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B748;
        }
    }

label_8005B704:
    ctx->pc = 0x8005B704u;
    ctx->downcount -= 3;
    // 8005B704: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8005B708:
    ctx->pc = 0x8005B708u;
    // 8005B708: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8005B70C:
    ctx->pc = 0x8005B70Cu;
    // 8005B70C: b       0x8005B73C
    {
            goto label_8005B73C;
    }

label_8005B710:
    ctx->downcount -= 3;
    // 8005B710: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B714:
    // 8005B714: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005B718:
    // 8005B718: bl      0x80060DE4
    {
            ctx->lr = 0x8005B71Cu;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B71C:
    ctx->downcount -= 6;
    // 8005B71C: addi    r0, r27, 4
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(4);

label_8005B720:
    ctx->pc = 0x8005B720u;
    // 8005B720: stwx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B724:
    ctx->pc = 0x8005B724u;
    // 8005B724: lwzx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B728:
    ctx->pc = 0x8005B728u;
    // 8005B728: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B72C:
    // 8005B72C: cmpw    r3, r0
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

label_8005B730:
    // 8005B730: bc    4, 0, 0x8005B7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B7CC;
        }
    }

label_8005B734:
    ctx->downcount -= 2;
    // 8005B734: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8005B738:
    // 8005B738: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_8005B73C:
    ctx->pc = 0x8005B73Cu;
    ctx->downcount -= 3;
    // 8005B73C: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B740:
    // 8005B740: cmpw    r25, r0
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

label_8005B744:
    // 8005B744: bc    12, 0, 0x8005B710
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B710u;
                return;
            }
            goto label_8005B710;
        }
    }

label_8005B748:
    ctx->pc = 0x8005B748u;
    ctx->downcount -= 3;
    // 8005B748: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_8005B74C:
    ctx->pc = 0x8005B74Cu;
    // 8005B74C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005B750:
    ctx->pc = 0x8005B750u;
    // 8005B750: b       0x8005B7B8
    {
            goto label_8005B7B8;
    }

label_8005B754:
    ctx->downcount -= 3;
    // 8005B754: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B758:
    // 8005B758: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_8005B75C:
    // 8005B75C: bl      0x80060DE4
    {
            ctx->lr = 0x8005B760u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B760:
    ctx->pc = 0x8005B760u;
    ctx->downcount -= 3;
    // 8005B760: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B764:
    // 8005B764: cmpw    r3, r0
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

label_8005B768:
    // 8005B768: bc    4, 0, 0x8005B7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B7CC;
        }
    }

label_8005B76C:
    ctx->downcount -= 3;
    // 8005B76C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B770:
    // 8005B770: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_8005B774:
    // 8005B774: bl      0x80060DE4
    {
            ctx->lr = 0x8005B778u;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B778:
    ctx->downcount -= 6;
    // 8005B778: add   r25, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_8005B77C:
    ctx->pc = 0x8005B77Cu;
    // 8005B77C: stw     r3, 1028(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1028);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B780:
    ctx->pc = 0x8005B780u;
    // 8005B780: lwz     r3, 1028(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1028);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B784:
    ctx->pc = 0x8005B784u;
    // 8005B784: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B788:
    // 8005B788: cmpw    r3, r0
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

label_8005B78C:
    // 8005B78C: bc    4, 0, 0x8005B7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B7CC;
        }
    }

label_8005B790:
    ctx->downcount -= 3;
    // 8005B790: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005B794:
    // 8005B794: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_8005B798:
    // 8005B798: bl      0x80060DE4
    {
            ctx->lr = 0x8005B79Cu;
            ctx->pc = 0x80060DE4u;
            return;
    }

label_8005B79C:
    ctx->pc = 0x8005B79Cu;
    ctx->downcount -= 5;
    // 8005B79C: stw     r3, 1092(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1092);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B7A0:
    ctx->pc = 0x8005B7A0u;
    // 8005B7A0: lwz     r3, 1092(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(1092);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B7A4:
    ctx->pc = 0x8005B7A4u;
    // 8005B7A4: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B7A8:
    // 8005B7A8: cmpw    r3, r0
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

label_8005B7AC:
    // 8005B7AC: bc    4, 0, 0x8005B7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005B7CC;
        }
    }

label_8005B7B0:
    ctx->downcount -= 2;
    // 8005B7B0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_8005B7B4:
    // 8005B7B4: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005B7B8:
    ctx->pc = 0x8005B7B8u;
    ctx->downcount -= 3;
    // 8005B7B8: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B7BC:
    // 8005B7BC: cmpw    r26, r0
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

label_8005B7C0:
    // 8005B7C0: bc    12, 0, 0x8005B754
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B754u;
                return;
            }
            goto label_8005B754;
        }
    }

label_8005B7C4:
    ctx->pc = 0x8005B7C4u;
    ctx->downcount -= 2;
    // 8005B7C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005B7C8:
    ctx->pc = 0x8005B7C8u;
    // 8005B7C8: b       0x8005B7D8
    {
            goto label_8005B7D8;
    }

label_8005B7CC:
    ctx->pc = 0x8005B7CCu;
    ctx->downcount -= 2;
    // 8005B7CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005B7D0:
    ctx->pc = 0x8005B7D0u;
    // 8005B7D0: bl      0x8005BAC8
    {
            ctx->lr = 0x8005B7D4u;
            goto label_8005BAC8;
    }

label_8005B7D4:
    ctx->pc = 0x8005B7D4u;
    ctx->downcount -= 1;
    // 8005B7D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005B7D8:
    ctx->pc = 0x8005B7D8u;
    ctx->downcount -= 16;
    // 8005B7D8: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005B7DC:
    ctx->pc = 0x8005B7DCu;
    // 8005B7DC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B7E0:
    ctx->pc = 0x8005B7E0u;
    // 8005B7E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005B7E4:
    ctx->pc = 0x8005B7E4u;
    // 8005B7E4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8005B7E8:
    ctx->pc = 0x8005B7E8u;
    // 8005B7E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005B7EC:
    ctx->pc = 0x8005B7ECu;
    ctx->downcount -= 3;
    // 8005B7EC: cmplwi  r3, 0x0000
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

label_8005B7F0:
    ctx->pc = 0x8005B7F0u;
    // 8005B7F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005B7F4:
    ctx->pc = 0x8005B7F4u;
    // 8005B7F4: bc    12, 2, 0x8005B808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005B808;
        }
    }

label_8005B7F8:
    ctx->pc = 0x8005B7F8u;
    ctx->downcount -= 2;
    // 8005B7F8: addi    r3, r3, -1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1);

label_8005B7FC:
    ctx->pc = 0x8005B7FCu;
    // 8005B7FC: b       0x8005B808
    {
            goto label_8005B808;
    }

label_8005B800:
    loop_8005B800(ctx);
    if (ctx->pc == 0x8005B810u) goto label_8005B810;
    return;
label_8005B804:
    // 8005B804: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_8005B808:
    ctx->downcount -= 2;
    // 8005B808: cmplwi  r3, 0x0000
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

label_8005B80C:
    // 8005B80C: bc    4, 2, 0x8005B800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B800u;
                return;
            }
            goto label_8005B800;
        }
    }

label_8005B810:
    ctx->pc = 0x8005B810u;
    ctx->downcount -= 2;
    // 8005B810: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005B814:
    ctx->pc = 0x8005B814u;
    // 8005B814: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005B818:
    ctx->pc = 0x8005B818u;
    ctx->downcount -= 27;
    // 8005B818: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005B81C:
    ctx->pc = 0x8005B81Cu;
    // 8005B81C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005B820:
    ctx->pc = 0x8005B820u;
    // 8005B820: li      r6, 91
    ctx->gpr[6] = (u32)(s32)(91);

label_8005B824:
    ctx->pc = 0x8005B824u;
    // 8005B824: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005B828:
    ctx->pc = 0x8005B828u;
    // 8005B828: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B82C:
    ctx->pc = 0x8005B82Cu;
    // 8005B82C: stmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005B830:
    ctx->pc = 0x8005B830u;
    // 8005B830: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B834:
    ctx->pc = 0x8005B834u;
    // 8005B834: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005B838:
    ctx->pc = 0x8005B838u;
    // 8005B838: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005B83C:
    ctx->pc = 0x8005B83Cu;
    // 8005B83C: addi    r0, r3, 15624
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(15624);

label_8005B840:
    ctx->pc = 0x8005B840u;
    // 8005B840: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005B844:
    ctx->pc = 0x8005B844u;
    // 8005B844: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8005B848:
    ctx->pc = 0x8005B848u;
    // 8005B848: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8005B84C:
    ctx->pc = 0x8005B84Cu;
    // 8005B84C: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8005B850:
    ctx->pc = 0x8005B850u;
    // 8005B850: lwz     r29, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8005B854:
    ctx->pc = 0x8005B854u;
    // 8005B854: lwz     r28, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8005B858:
    ctx->pc = 0x8005B858u;
    // 8005B858: bl      0x80055D58
    {
            ctx->lr = 0x8005B85Cu;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005B85C:
    ctx->pc = 0x8005B85Cu;
    ctx->downcount -= 10;
    // 8005B85C: stw     r25, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_8005B860:
    ctx->pc = 0x8005B860u;
    // 8005B860: lis     r5, -32762
    ctx->gpr[5] = ((u32)(s32)(-32762) << 16);

label_8005B864:
    ctx->pc = 0x8005B864u;
    // 8005B864: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005B868:
    ctx->pc = 0x8005B868u;
    // 8005B868: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005B86C:
    ctx->pc = 0x8005B86Cu;
    // 8005B86C: stw     r24, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_8005B870:
    ctx->pc = 0x8005B870u;
    // 8005B870: addi    r5, r5, 15624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15624);

label_8005B874:
    ctx->pc = 0x8005B874u;
    // 8005B874: li      r6, 95
    ctx->gpr[6] = (u32)(s32)(95);

label_8005B878:
    ctx->pc = 0x8005B878u;
    // 8005B878: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005B87C:
    ctx->pc = 0x8005B87Cu;
    // 8005B87C: lwz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B880:
    ctx->pc = 0x8005B880u;
    // 8005B880: bl      0x80055D58
    {
            ctx->lr = 0x8005B884u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005B884:
    ctx->pc = 0x8005B884u;
    ctx->downcount -= 8;
    // 8005B884: stw     r3, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B888:
    ctx->pc = 0x8005B888u;
    // 8005B888: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005B88C:
    ctx->pc = 0x8005B88Cu;
    // 8005B88C: addi    r5, r3, 15624
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(15624);

label_8005B890:
    ctx->pc = 0x8005B890u;
    // 8005B890: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005B894:
    ctx->pc = 0x8005B894u;
    // 8005B894: lwz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B898:
    ctx->pc = 0x8005B898u;
    // 8005B898: li      r6, 97
    ctx->gpr[6] = (u32)(s32)(97);

label_8005B89C:
    ctx->pc = 0x8005B89Cu;
    // 8005B89C: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005B8A0:
    ctx->pc = 0x8005B8A0u;
    // 8005B8A0: bl      0x80055D58
    {
            ctx->lr = 0x8005B8A4u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005B8A4:
    ctx->pc = 0x8005B8A4u;
    ctx->downcount -= 8;
    // 8005B8A4: stw     r3, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B8A8:
    ctx->pc = 0x8005B8A8u;
    // 8005B8A8: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005B8AC:
    ctx->pc = 0x8005B8ACu;
    // 8005B8AC: addi    r5, r3, 15624
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(15624);

label_8005B8B0:
    ctx->pc = 0x8005B8B0u;
    // 8005B8B0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005B8B4:
    ctx->pc = 0x8005B8B4u;
    // 8005B8B4: lwz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B8B8:
    ctx->pc = 0x8005B8B8u;
    // 8005B8B8: li      r6, 99
    ctx->gpr[6] = (u32)(s32)(99);

label_8005B8BC:
    ctx->pc = 0x8005B8BCu;
    // 8005B8BC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005B8C0:
    ctx->pc = 0x8005B8C0u;
    // 8005B8C0: bl      0x80055D58
    {
            ctx->lr = 0x8005B8C4u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005B8C4:
    ctx->pc = 0x8005B8C4u;
    ctx->downcount -= 8;
    // 8005B8C4: stw     r3, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B8C8:
    ctx->pc = 0x8005B8C8u;
    // 8005B8C8: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005B8CC:
    ctx->pc = 0x8005B8CCu;
    // 8005B8CC: addi    r5, r3, 15624
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(15624);

label_8005B8D0:
    ctx->pc = 0x8005B8D0u;
    // 8005B8D0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005B8D4:
    ctx->pc = 0x8005B8D4u;
    // 8005B8D4: lwz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B8D8:
    ctx->pc = 0x8005B8D8u;
    // 8005B8D8: li      r6, 100
    ctx->gpr[6] = (u32)(s32)(100);

label_8005B8DC:
    ctx->pc = 0x8005B8DCu;
    // 8005B8DC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005B8E0:
    ctx->pc = 0x8005B8E0u;
    // 8005B8E0: bl      0x80055D58
    {
            ctx->lr = 0x8005B8E4u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005B8E4:
    ctx->pc = 0x8005B8E4u;
    ctx->downcount -= 8;
    // 8005B8E4: lis     r5, -32738
    ctx->gpr[5] = ((u32)(s32)(-32738) << 16);

label_8005B8E8:
    ctx->pc = 0x8005B8E8u;
    // 8005B8E8: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8005B8EC:
    ctx->pc = 0x8005B8ECu;
    // 8005B8EC: stw     r3, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B8F0:
    ctx->pc = 0x8005B8F0u;
    // 8005B8F0: addi    r31, r5, 32536
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(32536);

label_8005B8F4:
    ctx->pc = 0x8005B8F4u;
    // 8005B8F4: addi    r21, r4, 32544
    ctx->gpr[21] = ctx->gpr[4] + (u32)(s32)(32544);

label_8005B8F8:
    ctx->pc = 0x8005B8F8u;
    // 8005B8F8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8005B8FC:
    ctx->pc = 0x8005B8FCu;
    // 8005B8FC: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_8005B900:
    ctx->pc = 0x8005B900u;
    // 8005B900: b       0x8005B9A0
    {
            goto label_8005B9A0;
    }

label_8005B904:
    ctx->downcount -= 19;
    // 8005B904: add   r4, r25, r22
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8005B908:
    ctx->pc = 0x8005B908u;
    // 8005B908: lwz     r5, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B90C:
    ctx->pc = 0x8005B90Cu;
    // 8005B90C: lwz     r0, 1028(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B910:
    // 8005B910: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8005B914:
    ctx->pc = 0x8005B914u;
    // 8005B914: lwz     r26, 1092(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1092);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8005B918:
    // 8005B918: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8005B91C:
    // 8005B91C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B920:
    // 8005B920: add   r7, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8005B924:
    ctx->pc = 0x8005B924u;
    // 8005B924: lwz     r0, 1056(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B928:
    // 8005B928: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B92C:
    ctx->pc = 0x8005B92Cu;
    // 8005B92C: lwzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B930:
    ctx->pc = 0x8005B930u;
    // 8005B930: stwx    r0, r5, r22
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[22];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B934:
    ctx->pc = 0x8005B934u;
    // 8005B934: lwz     r6, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005B938:
    ctx->pc = 0x8005B938u;
    // 8005B938: lwz     r5, 1312(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B93C:
    ctx->pc = 0x8005B93Cu;
    // 8005B93C: lwzx    r6, r6, r22
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[22];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005B940:
    ctx->pc = 0x8005B940u;
    // 8005B940: lwz     r12, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005B944:
    ctx->pc = 0x8005B944u;
    // 8005B944: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005B948:
    ctx->pc = 0x8005B948u;
    // 8005B948: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005B94Cu;
            ctx->pc = target;
            return;
        }
    }

label_8005B94C:
    ctx->pc = 0x8005B94Cu;
    ctx->downcount -= 18;
    // 8005B94C: lwz     r5, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B950:
    // 8005B950: rlwinm r0, r26, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 2u) & 0xFFFFFFFCu;
    }

label_8005B954:
    // 8005B954: add   r7, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8005B958:
    // 8005B958: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8005B95C:
    ctx->pc = 0x8005B95Cu;
    // 8005B95C: stwx    r3, r5, r22
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[22];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B960:
    // 8005B960: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8005B964:
    ctx->pc = 0x8005B964u;
    // 8005B964: lwz     r0, 1568(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B968:
    ctx->pc = 0x8005B968u;
    // 8005B968: lwz     r5, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B96C:
    // 8005B96C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005B970:
    ctx->pc = 0x8005B970u;
    // 8005B970: lwzx    r0, r21, r0
    {
        u32 ea = ctx->gpr[21] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B974:
    ctx->pc = 0x8005B974u;
    // 8005B974: stwx    r0, r5, r22
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[22];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B978:
    ctx->pc = 0x8005B978u;
    // 8005B978: lwz     r6, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005B97C:
    ctx->pc = 0x8005B97Cu;
    // 8005B97C: lwz     r5, 1824(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1824);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B980:
    ctx->pc = 0x8005B980u;
    // 8005B980: lwzx    r6, r6, r22
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[22];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005B984:
    ctx->pc = 0x8005B984u;
    // 8005B984: lwz     r12, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005B988:
    ctx->pc = 0x8005B988u;
    // 8005B988: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005B98C:
    ctx->pc = 0x8005B98Cu;
    // 8005B98C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005B990u;
            ctx->pc = target;
            return;
        }
    }

label_8005B990:
    ctx->pc = 0x8005B990u;
    ctx->downcount -= 4;
    // 8005B990: lwz     r4, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005B994:
    // 8005B994: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8005B998:
    ctx->pc = 0x8005B998u;
    // 8005B998: stwx    r3, r4, r22
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[22];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005B99C:
    // 8005B99C: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_8005B9A0:
    ctx->pc = 0x8005B9A0u;
    ctx->downcount -= 3;
    // 8005B9A0: lwz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B9A4:
    // 8005B9A4: cmpw    r30, r0
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

label_8005B9A8:
    // 8005B9A8: bc    12, 0, 0x8005B904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B904u;
                return;
            }
            goto label_8005B904;
        }
    }

label_8005B9AC:
    ctx->pc = 0x8005B9ACu;
    ctx->downcount -= 19;
    // 8005B9AC: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B9B0:
    ctx->pc = 0x8005B9B0u;
    // 8005B9B0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005B9B4:
    ctx->pc = 0x8005B9B4u;
    // 8005B9B4: stw     r0, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B9B8:
    ctx->pc = 0x8005B9B8u;
    // 8005B9B8: lmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005B9BC:
    ctx->pc = 0x8005B9BCu;
    // 8005B9BC: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005B9C0:
    ctx->pc = 0x8005B9C0u;
    // 8005B9C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005B9C4:
    ctx->pc = 0x8005B9C4u;
    // 8005B9C4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8005B9C8:
    ctx->pc = 0x8005B9C8u;
    // 8005B9C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005B9CC:
    ctx->pc = 0x8005B9CCu;
    ctx->downcount -= 16;
    // 8005B9CC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005B9D0:
    ctx->pc = 0x8005B9D0u;
    // 8005B9D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005B9D4:
    ctx->pc = 0x8005B9D4u;
    // 8005B9D4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005B9D8:
    ctx->pc = 0x8005B9D8u;
    // 8005B9D8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005B9DC:
    ctx->pc = 0x8005B9DCu;
    // 8005B9DC: or.   r31, r3, r3
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

label_8005B9E0:
    ctx->pc = 0x8005B9E0u;
    // 8005B9E0: bc    12, 2, 0x8005BAB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005BAB4;
        }
    }

label_8005B9E4:
    ctx->pc = 0x8005B9E4u;
    ctx->downcount -= 3;
    // 8005B9E4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8005B9E8:
    ctx->pc = 0x8005B9E8u;
    // 8005B9E8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8005B9EC:
    ctx->pc = 0x8005B9ECu;
    // 8005B9EC: b       0x8005BA30
    {
            goto label_8005BA30;
    }

label_8005B9F0:
    ctx->pc = 0x8005B9F0u;
    ctx->downcount -= 8;
    // 8005B9F0: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005B9F4:
    ctx->pc = 0x8005B9F4u;
    // 8005B9F4: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005B9F8:
    ctx->pc = 0x8005B9F8u;
    // 8005B9F8: lwzx    r4, r3, r30
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005B9FC:
    ctx->pc = 0x8005B9FCu;
    // 8005B9FC: lwzx    r3, r5, r30
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BA00:
    ctx->pc = 0x8005BA00u;
    // 8005BA00: lwz     r12, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005BA04:
    ctx->pc = 0x8005BA04u;
    // 8005BA04: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005BA08:
    ctx->pc = 0x8005BA08u;
    // 8005BA08: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005BA0Cu;
            ctx->pc = target;
            return;
        }
    }

label_8005BA0C:
    ctx->pc = 0x8005BA0Cu;
    ctx->downcount -= 8;
    // 8005BA0C: lwz     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BA10:
    ctx->pc = 0x8005BA10u;
    // 8005BA10: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005BA14:
    ctx->pc = 0x8005BA14u;
    // 8005BA14: lwzx    r4, r3, r30
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005BA18:
    ctx->pc = 0x8005BA18u;
    // 8005BA18: lwzx    r3, r5, r30
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[30];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BA1C:
    ctx->pc = 0x8005BA1Cu;
    // 8005BA1C: lwz     r12, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005BA20:
    ctx->pc = 0x8005BA20u;
    // 8005BA20: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005BA24:
    ctx->pc = 0x8005BA24u;
    // 8005BA24: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005BA28u;
            ctx->pc = target;
            return;
        }
    }

label_8005BA28:
    ctx->downcount -= 2;
    // 8005BA28: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8005BA2C:
    // 8005BA2C: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_8005BA30:
    ctx->pc = 0x8005BA30u;
    ctx->downcount -= 4;
    // 8005BA30: lwz     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BA34:
    ctx->pc = 0x8005BA34u;
    // 8005BA34: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BA38:
    // 8005BA38: cmpw    r29, r0
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

label_8005BA3C:
    // 8005BA3C: bc    12, 0, 0x8005B9F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005B9F0u;
                return;
            }
            goto label_8005B9F0;
        }
    }

label_8005BA40:
    ctx->pc = 0x8005BA40u;
    ctx->downcount -= 5;
    // 8005BA40: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005BA44:
    ctx->pc = 0x8005BA44u;
    // 8005BA44: lwz     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BA48:
    ctx->pc = 0x8005BA48u;
    // 8005BA48: addi    r4, r4, 15624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15624);

label_8005BA4C:
    ctx->pc = 0x8005BA4Cu;
    // 8005BA4C: li      r5, 77
    ctx->gpr[5] = (u32)(s32)(77);

label_8005BA50:
    ctx->pc = 0x8005BA50u;
    // 8005BA50: bl      0x80055E80
    {
            ctx->lr = 0x8005BA54u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005BA54:
    ctx->pc = 0x8005BA54u;
    ctx->downcount -= 5;
    // 8005BA54: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005BA58:
    ctx->pc = 0x8005BA58u;
    // 8005BA58: lwz     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BA5C:
    ctx->pc = 0x8005BA5Cu;
    // 8005BA5C: addi    r4, r4, 15624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15624);

label_8005BA60:
    ctx->pc = 0x8005BA60u;
    // 8005BA60: li      r5, 78
    ctx->gpr[5] = (u32)(s32)(78);

label_8005BA64:
    ctx->pc = 0x8005BA64u;
    // 8005BA64: bl      0x80055E80
    {
            ctx->lr = 0x8005BA68u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005BA68:
    ctx->pc = 0x8005BA68u;
    ctx->downcount -= 5;
    // 8005BA68: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005BA6C:
    ctx->pc = 0x8005BA6Cu;
    // 8005BA6C: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BA70:
    ctx->pc = 0x8005BA70u;
    // 8005BA70: addi    r4, r4, 15624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15624);

label_8005BA74:
    ctx->pc = 0x8005BA74u;
    // 8005BA74: li      r5, 79
    ctx->gpr[5] = (u32)(s32)(79);

label_8005BA78:
    ctx->pc = 0x8005BA78u;
    // 8005BA78: bl      0x80055E80
    {
            ctx->lr = 0x8005BA7Cu;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005BA7C:
    ctx->pc = 0x8005BA7Cu;
    ctx->downcount -= 5;
    // 8005BA7C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005BA80:
    ctx->pc = 0x8005BA80u;
    // 8005BA80: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BA84:
    ctx->pc = 0x8005BA84u;
    // 8005BA84: addi    r4, r4, 15624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15624);

label_8005BA88:
    ctx->pc = 0x8005BA88u;
    // 8005BA88: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_8005BA8C:
    ctx->pc = 0x8005BA8Cu;
    // 8005BA8C: bl      0x80055E80
    {
            ctx->lr = 0x8005BA90u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005BA90:
    ctx->pc = 0x8005BA90u;
    ctx->downcount -= 4;
    // 8005BA90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005BA94:
    ctx->pc = 0x8005BA94u;
    // 8005BA94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005BA98:
    ctx->pc = 0x8005BA98u;
    // 8005BA98: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8005BA9C:
    ctx->pc = 0x8005BA9Cu;
    // 8005BA9C: bl      0x800050B4
    {
            ctx->lr = 0x8005BAA0u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8005BAA0:
    ctx->pc = 0x8005BAA0u;
    ctx->downcount -= 5;
    // 8005BAA0: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005BAA4:
    ctx->pc = 0x8005BAA4u;
    // 8005BAA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005BAA8:
    ctx->pc = 0x8005BAA8u;
    // 8005BAA8: addi    r4, r4, 15624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15624);

label_8005BAAC:
    ctx->pc = 0x8005BAACu;
    // 8005BAAC: li      r5, 82
    ctx->gpr[5] = (u32)(s32)(82);

label_8005BAB0:
    ctx->pc = 0x8005BAB0u;
    // 8005BAB0: bl      0x80055E80
    {
            ctx->lr = 0x8005BAB4u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005BAB4:
    ctx->pc = 0x8005BAB4u;
    ctx->downcount -= 16;
    // 8005BAB4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005BAB8:
    ctx->pc = 0x8005BAB8u;
    // 8005BAB8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BABC:
    ctx->pc = 0x8005BABCu;
    // 8005BABC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005BAC0:
    ctx->pc = 0x8005BAC0u;
    // 8005BAC0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005BAC4:
    ctx->pc = 0x8005BAC4u;
    // 8005BAC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005BAC8:
    ctx->pc = 0x8005BAC8u;
    ctx->downcount -= 6;
    // 8005BAC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005BACC:
    ctx->pc = 0x8005BACCu;
    // 8005BACC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005BAD0:
    ctx->pc = 0x8005BAD0u;
    // 8005BAD0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005BAD4:
    ctx->pc = 0x8005BAD4u;
    // 8005BAD4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8005BAD8:
    ctx->pc = 0x8005BAD8u;
    // 8005BAD8: or.   r31, r3, r3
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

label_8005BADC:
    ctx->pc = 0x8005BADCu;
    // 8005BADC: bc    12, 2, 0x8005BB00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005BB00;
        }
    }

label_8005BAE0:
    ctx->pc = 0x8005BAE0u;
    ctx->downcount -= 3;
    // 8005BAE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005BAE4:
    ctx->pc = 0x8005BAE4u;
    // 8005BAE4: li      r5, 3216
    ctx->gpr[5] = (u32)(s32)(3216);

label_8005BAE8:
    ctx->pc = 0x8005BAE8u;
    // 8005BAE8: bl      0x800050B4
    {
            ctx->lr = 0x8005BAECu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8005BAEC:
    ctx->pc = 0x8005BAECu;
    ctx->downcount -= 5;
    // 8005BAEC: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005BAF0:
    ctx->pc = 0x8005BAF0u;
    // 8005BAF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005BAF4:
    ctx->pc = 0x8005BAF4u;
    // 8005BAF4: addi    r4, r4, 15624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15624);

label_8005BAF8:
    ctx->pc = 0x8005BAF8u;
    // 8005BAF8: li      r5, 63
    ctx->gpr[5] = (u32)(s32)(63);

label_8005BAFC:
    ctx->pc = 0x8005BAFCu;
    // 8005BAFC: bl      0x80055E80
    {
            ctx->lr = 0x8005BB00u;
            ctx->pc = 0x80055E80u;
            return;
    }

label_8005BB00:
    ctx->pc = 0x8005BB00u;
    ctx->downcount -= 6;
    // 8005BB00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BB04:
    ctx->pc = 0x8005BB04u;
    // 8005BB04: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8005BB08:
    ctx->pc = 0x8005BB08u;
    // 8005BB08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005BB0C:
    ctx->pc = 0x8005BB0Cu;
    // 8005BB0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005BB10:
    ctx->pc = 0x8005BB10u;
    // 8005BB10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005BB14:
    ctx->pc = 0x8005BB14u;
    ctx->downcount -= 22;
    // 8005BB14: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005BB18:
    ctx->pc = 0x8005BB18u;
    // 8005BB18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005BB1C:
    ctx->pc = 0x8005BB1Cu;
    // 8005BB1C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005BB20:
    ctx->pc = 0x8005BB20u;
    // 8005BB20: stmw     r17, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 17; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005BB24:
    ctx->pc = 0x8005BB24u;
    // 8005BB24: or   r20, r3, r3
    {
        ctx->gpr[20] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005BB28:
    ctx->pc = 0x8005BB28u;
    // 8005BB28: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005BB2C:
    ctx->pc = 0x8005BB2Cu;
    // 8005BB2C: or   r19, r4, r4
    {
        ctx->gpr[19] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005BB30:
    ctx->pc = 0x8005BB30u;
    // 8005BB30: srawi r17, r20, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[20];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[17] = value;
        } else if (sh > 31) {
            ctx->gpr[17] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[17] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005BB34:
    ctx->pc = 0x8005BB34u;
    // 8005BB34: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_8005BB38:
    ctx->pc = 0x8005BB38u;
    // 8005BB38: srawi r4, r20, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[20];
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

label_8005BB3C:
    ctx->pc = 0x8005BB3Cu;
    // 8005BB3C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8005BB40:
    ctx->pc = 0x8005BB40u;
    // 8005BB40: b       0x8005BB48
    {
            goto label_8005BB48;
    }

label_8005BB44:
    loop_8005BB44(ctx);
    if (ctx->pc == 0x8005BB54u) goto label_8005BB54;
    return;
label_8005BB48:
    ctx->downcount -= 3;
    // 8005BB48: slw   r0, r3, r5
    {
        u32 sh = ctx->gpr[5] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

label_8005BB4C:
    // 8005BB4C: and.   r0, r20, r0
    {
        ctx->gpr[0] = ctx->gpr[20] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8005BB50:
    // 8005BB50: bc    12, 2, 0x8005BB44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005BB44u;
                return;
            }
            goto label_8005BB44;
        }
    }

label_8005BB54:
    ctx->pc = 0x8005BB54u;
    ctx->downcount -= 14;
    // 8005BB54: rlwinm r0, r17, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[17], 2u) & 0xFFFFFFFCu;
    }

label_8005BB58:
    ctx->pc = 0x8005BB58u;
    // 8005BB58: rlwinm r30, r4, 2, 0, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_8005BB5C:
    ctx->pc = 0x8005BB5Cu;
    // 8005BB5C: add   r25, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_8005BB60:
    ctx->pc = 0x8005BB60u;
    // 8005BB60: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005BB64:
    ctx->pc = 0x8005BB64u;
    // 8005BB64: add   r21, r19, r0
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_8005BB68:
    ctx->pc = 0x8005BB68u;
    // 8005BB68: subfic  r23, r5, 13
    {
        u64 res = (u64)(u32)(s32)(13) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[23] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8005BB6C:
    ctx->pc = 0x8005BB6Cu;
    // 8005BB6C: add   r29, r25, r30
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8005BB70:
    ctx->pc = 0x8005BB70u;
    // 8005BB70: addi    r0, r3, 15640
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(15640);

label_8005BB74:
    ctx->pc = 0x8005BB74u;
    // 8005BB74: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8005BB78:
    ctx->pc = 0x8005BB78u;
    // 8005BB78: addi    r24, r21, -28
    ctx->gpr[24] = ctx->gpr[21] + (u32)(s32)(-28);

label_8005BB7C:
    ctx->pc = 0x8005BB7Cu;
    // 8005BB7C: or   r26, r29, r29
    {
        ctx->gpr[26] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005BB80:
    ctx->pc = 0x8005BB80u;
    // 8005BB80: or   r27, r0, r0
    {
        ctx->gpr[27] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8005BB84:
    ctx->pc = 0x8005BB84u;
    // 8005BB84: slw   r18, r3, r23
    {
        u32 sh = ctx->gpr[23] & 0x3Fu;
        ctx->gpr[18] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

label_8005BB88:
    ctx->pc = 0x8005BB88u;
    // 8005BB88: add   r22, r19, r30
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_8005BB8C:
    ctx->pc = 0x8005BB8Cu;
    ctx->downcount -= 8;
    // 8005BB8C: lwz     r3, 16(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BB90:
    // 8005BB90: addi    r7, r26, -8
    ctx->gpr[7] = ctx->gpr[26] + (u32)(s32)(-8);

label_8005BB94:
    // 8005BB94: addi    r8, r26, -4
    ctx->gpr[8] = ctx->gpr[26] + (u32)(s32)(-4);

label_8005BB98:
    ctx->pc = 0x8005BB98u;
    // 8005BB98: lwz     r4, 24(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005BB9C:
    ctx->pc = 0x8005BB9Cu;
    // 8005BB9C: lbz     r5, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BBA0:
    // 8005BBA0: addi    r26, r26, -16
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(-16);

label_8005BBA4:
    ctx->pc = 0x8005BBA4u;
    // 8005BBA4: lbz     r6, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BBA8:
    // 8005BBA8: bl      0x8005C134
    {
            ctx->lr = 0x8005BBACu;
            goto label_8005C134;
    }

label_8005BBAC:
    ctx->downcount -= 8;
    // 8005BBAC: add   r27, r27, r18
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_8005BBB0:
    ctx->pc = 0x8005BBB0u;
    // 8005BBB0: lwz     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BBB4:
    ctx->pc = 0x8005BBB4u;
    // 8005BBB4: lwz     r4, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005BBB8:
    // 8005BBB8: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8005BBBC:
    ctx->pc = 0x8005BBBCu;
    // 8005BBBC: lbz     r5, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BBC0:
    // 8005BBC0: addi    r8, r26, 4
    ctx->gpr[8] = ctx->gpr[26] + (u32)(s32)(4);

label_8005BBC4:
    ctx->pc = 0x8005BBC4u;
    // 8005BBC4: lbz     r6, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BBC8:
    // 8005BBC8: bl      0x8005C134
    {
            ctx->lr = 0x8005BBCCu;
            goto label_8005C134;
    }

label_8005BBCC:
    ctx->downcount -= 4;
    // 8005BBCC: addi    r24, r24, -32
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(-32);

label_8005BBD0:
    // 8005BBD0: add   r27, r27, r18
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_8005BBD4:
    // 8005BBD4: cmplw   r24, r22
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(ctx->gpr[22]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005BBD8:
    // 8005BBD8: bc    4, 0, 0x8005BB8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005BB8Cu;
                return;
            }
            goto label_8005BB8C;
        }
    }

label_8005BBDC:
    ctx->pc = 0x8005BBDCu;
    ctx->downcount -= 8;
    // 8005BBDC: lwz     r3, 16(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BBE0:
    // 8005BBE0: addi    r7, r26, -8
    ctx->gpr[7] = ctx->gpr[26] + (u32)(s32)(-8);

label_8005BBE4:
    // 8005BBE4: addi    r8, r26, -4
    ctx->gpr[8] = ctx->gpr[26] + (u32)(s32)(-4);

label_8005BBE8:
    ctx->pc = 0x8005BBE8u;
    // 8005BBE8: lwz     r4, 24(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005BBEC:
    ctx->pc = 0x8005BBECu;
    // 8005BBEC: lbz     r5, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BBF0:
    // 8005BBF0: addi    r26, r26, -16
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(-16);

label_8005BBF4:
    ctx->pc = 0x8005BBF4u;
    // 8005BBF4: lbz     r6, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BBF8:
    // 8005BBF8: bl      0x8005C134
    {
            ctx->lr = 0x8005BBFCu;
            goto label_8005C134;
    }

label_8005BBFC:
    ctx->downcount -= 8;
    // 8005BBFC: subf   r27, r18, r27
    {
        u32 a = ~ctx->gpr[18];
        u32 b = ctx->gpr[27];
        u32 res = a + b + 1u;
        ctx->gpr[27] = res;
    }

label_8005BC00:
    ctx->pc = 0x8005BC00u;
    // 8005BC00: lwz     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BC04:
    ctx->pc = 0x8005BC04u;
    // 8005BC04: lwz     r4, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005BC08:
    // 8005BC08: or   r7, r26, r26
    {
        ctx->gpr[7] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8005BC0C:
    ctx->pc = 0x8005BC0Cu;
    // 8005BC0C: lbz     r5, 1(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BC10:
    // 8005BC10: addi    r8, r26, 4
    ctx->gpr[8] = ctx->gpr[26] + (u32)(s32)(4);

label_8005BC14:
    ctx->pc = 0x8005BC14u;
    // 8005BC14: lbz     r6, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BC18:
    // 8005BC18: bl      0x8005C134
    {
            ctx->lr = 0x8005BC1Cu;
            goto label_8005C134;
    }

label_8005BC1C:
    ctx->downcount -= 4;
    // 8005BC1C: addi    r24, r24, -32
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(-32);

label_8005BC20:
    // 8005BC20: subf   r27, r18, r27
    {
        u32 a = ~ctx->gpr[18];
        u32 b = ctx->gpr[27];
        u32 res = a + b + 1u;
        ctx->gpr[27] = res;
    }

label_8005BC24:
    // 8005BC24: cmplw   r24, r19
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(ctx->gpr[19]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005BC28:
    // 8005BC28: bc    4, 0, 0x8005BBDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005BBDCu;
                return;
            }
            goto label_8005BBDC;
        }
    }

label_8005BC2C:
    ctx->pc = 0x8005BC2Cu;
    ctx->downcount -= 4;
    // 8005BC2C: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005BC30:
    ctx->pc = 0x8005BC30u;
    // 8005BC30: or   r24, r29, r29
    {
        ctx->gpr[24] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005BC34:
    ctx->pc = 0x8005BC34u;
    // 8005BC34: addi    r26, r3, 15640
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(15640);

label_8005BC38:
    ctx->pc = 0x8005BC38u;
    // 8005BC38: addi    r21, r21, -32
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(-32);

label_8005BC3C:
    ctx->downcount -= 8;
    // 8005BC3C: add   r26, r26, r18
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_8005BC40:
    ctx->pc = 0x8005BC40u;
    // 8005BC40: lwz     r3, 24(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BC44:
    ctx->pc = 0x8005BC44u;
    // 8005BC44: lwz     r4, 16(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005BC48:
    // 8005BC48: or   r7, r24, r24
    {
        ctx->gpr[7] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8005BC4C:
    ctx->pc = 0x8005BC4Cu;
    // 8005BC4C: lbz     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BC50:
    // 8005BC50: addi    r8, r24, 4
    ctx->gpr[8] = ctx->gpr[24] + (u32)(s32)(4);

label_8005BC54:
    ctx->pc = 0x8005BC54u;
    // 8005BC54: lbz     r6, 1(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BC58:
    // 8005BC58: bl      0x8005C0A8
    {
            ctx->lr = 0x8005BC5Cu;
            goto label_8005C0A8;
    }

label_8005BC5C:
    ctx->downcount -= 8;
    // 8005BC5C: add   r26, r26, r18
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_8005BC60:
    ctx->pc = 0x8005BC60u;
    // 8005BC60: lwz     r3, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BC64:
    ctx->pc = 0x8005BC64u;
    // 8005BC64: lwz     r4, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005BC68:
    // 8005BC68: addi    r7, r24, 8
    ctx->gpr[7] = ctx->gpr[24] + (u32)(s32)(8);

label_8005BC6C:
    ctx->pc = 0x8005BC6Cu;
    // 8005BC6C: lbz     r5, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BC70:
    // 8005BC70: addi    r8, r24, 12
    ctx->gpr[8] = ctx->gpr[24] + (u32)(s32)(12);

label_8005BC74:
    ctx->pc = 0x8005BC74u;
    // 8005BC74: lbz     r6, 1(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BC78:
    // 8005BC78: bl      0x8005C0A8
    {
            ctx->lr = 0x8005BC7Cu;
            goto label_8005C0A8;
    }

label_8005BC7C:
    ctx->downcount -= 4;
    // 8005BC7C: addi    r21, r21, -32
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(-32);

label_8005BC80:
    // 8005BC80: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

label_8005BC84:
    // 8005BC84: cmplw   r21, r22
    {
        u32 val_a = (u32)(ctx->gpr[21]);
        u32 val_b = (u32)(ctx->gpr[22]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005BC88:
    // 8005BC88: bc    4, 0, 0x8005BC3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005BC3Cu;
                return;
            }
            goto label_8005BC3C;
        }
    }

label_8005BC8C:
    ctx->downcount -= 8;
    // 8005BC8C: subf   r26, r18, r26
    {
        u32 a = ~ctx->gpr[18];
        u32 b = ctx->gpr[26];
        u32 res = a + b + 1u;
        ctx->gpr[26] = res;
    }

label_8005BC90:
    ctx->pc = 0x8005BC90u;
    // 8005BC90: lwz     r3, 24(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BC94:
    ctx->pc = 0x8005BC94u;
    // 8005BC94: lwz     r4, 16(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005BC98:
    // 8005BC98: or   r7, r24, r24
    {
        ctx->gpr[7] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8005BC9C:
    ctx->pc = 0x8005BC9Cu;
    // 8005BC9C: lbz     r5, 1(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BCA0:
    // 8005BCA0: addi    r8, r24, 4
    ctx->gpr[8] = ctx->gpr[24] + (u32)(s32)(4);

label_8005BCA4:
    ctx->pc = 0x8005BCA4u;
    // 8005BCA4: lbz     r6, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BCA8:
    // 8005BCA8: bl      0x8005C0A8
    {
            ctx->lr = 0x8005BCACu;
            goto label_8005C0A8;
    }

label_8005BCAC:
    ctx->downcount -= 8;
    // 8005BCAC: subf   r26, r18, r26
    {
        u32 a = ~ctx->gpr[18];
        u32 b = ctx->gpr[26];
        u32 res = a + b + 1u;
        ctx->gpr[26] = res;
    }

label_8005BCB0:
    ctx->pc = 0x8005BCB0u;
    // 8005BCB0: lwz     r3, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BCB4:
    ctx->pc = 0x8005BCB4u;
    // 8005BCB4: lwz     r4, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005BCB8:
    // 8005BCB8: addi    r7, r24, 8
    ctx->gpr[7] = ctx->gpr[24] + (u32)(s32)(8);

label_8005BCBC:
    ctx->pc = 0x8005BCBCu;
    // 8005BCBC: lbz     r5, 1(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(1);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BCC0:
    // 8005BCC0: addi    r8, r24, 12
    ctx->gpr[8] = ctx->gpr[24] + (u32)(s32)(12);

label_8005BCC4:
    ctx->pc = 0x8005BCC4u;
    // 8005BCC4: lbz     r6, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BCC8:
    // 8005BCC8: bl      0x8005C0A8
    {
            ctx->lr = 0x8005BCCCu;
            goto label_8005C0A8;
    }

label_8005BCCC:
    ctx->downcount -= 4;
    // 8005BCCC: addi    r21, r21, -32
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(-32);

label_8005BCD0:
    // 8005BCD0: addi    r24, r24, 16
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(16);

label_8005BCD4:
    // 8005BCD4: cmplw   r21, r19
    {
        u32 val_a = (u32)(ctx->gpr[21]);
        u32 val_b = (u32)(ctx->gpr[19]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005BCD8:
    // 8005BCD8: bc    4, 0, 0x8005BC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005BC8Cu;
                return;
            }
            goto label_8005BC8C;
        }
    }

label_8005BCDC:
    ctx->pc = 0x8005BCDCu;
    ctx->downcount -= 4;
    // 8005BCDC: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8005BCE0:
    ctx->pc = 0x8005BCE0u;
    // 8005BCE0: or   r4, r17, r17
    {
        ctx->gpr[4] = ctx->gpr[17] | ctx->gpr[17];
    }

label_8005BCE4:
    ctx->pc = 0x8005BCE4u;
    // 8005BCE4: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8005BCE8:
    ctx->pc = 0x8005BCE8u;
    // 8005BCE8: bl      0x8005C5CC
    {
            ctx->lr = 0x8005BCECu;
            goto label_8005C5CC;
    }

label_8005BCEC:
    ctx->pc = 0x8005BCECu;
    ctx->downcount -= 5;
    // 8005BCEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005BCF0:
    ctx->pc = 0x8005BCF0u;
    // 8005BCF0: or   r4, r20, r20
    {
        ctx->gpr[4] = ctx->gpr[20] | ctx->gpr[20];
    }

label_8005BCF4:
    ctx->pc = 0x8005BCF4u;
    // 8005BCF4: or   r5, r18, r18
    {
        ctx->gpr[5] = ctx->gpr[18] | ctx->gpr[18];
    }

label_8005BCF8:
    ctx->pc = 0x8005BCF8u;
    // 8005BCF8: or   r6, r23, r23
    {
        ctx->gpr[6] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8005BCFC:
    ctx->pc = 0x8005BCFCu;
    // 8005BCFC: bl      0x8005C1B8
    {
            ctx->lr = 0x8005BD00u;
            goto label_8005C1B8;
    }

label_8005BD00:
    ctx->pc = 0x8005BD00u;
    ctx->downcount -= 6;
    // 8005BD00: srawi r17, r18, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[18];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[17] = value;
        } else if (sh > 31) {
            ctx->gpr[17] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[17] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005BD04:
    ctx->pc = 0x8005BD04u;
    // 8005BD04: or   r28, r29, r29
    {
        ctx->gpr[28] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005BD08:
    ctx->pc = 0x8005BD08u;
    // 8005BD08: cmpwi   r17, 1
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005BD0C:
    ctx->pc = 0x8005BD0Cu;
    // 8005BD0C: or   r27, r29, r29
    {
        ctx->gpr[27] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005BD10:
    ctx->pc = 0x8005BD10u;
    // 8005BD10: or   r26, r31, r31
    {
        ctx->gpr[26] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005BD14:
    ctx->pc = 0x8005BD14u;
    // 8005BD14: bc    12, 2, 0x8005BDEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005BDEC;
        }
    }

label_8005BD18:
    ctx->pc = 0x8005BD18u;
    ctx->downcount -= 1;
    // 8005BD18: bc    4, 0, 0x8005BD24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005BD24;
        }
    }

label_8005BD1C:
    ctx->pc = 0x8005BD1Cu;
    ctx->downcount -= 2;
    // 8005BD1C: cmpwi   r17, 0
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

label_8005BD20:
    ctx->pc = 0x8005BD20u;
    // 8005BD20: bc    4, 0, 0x8005BF1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005BF1C;
        }
    }

label_8005BD24:
    ctx->pc = 0x8005BD24u;
    ctx->downcount -= 4;
    // 8005BD24: cmpwi   r17, 4
    {
        s32 val_a = (s32)(ctx->gpr[17]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005BD28:
    ctx->pc = 0x8005BD28u;
    // 8005BD28: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005BD2C:
    ctx->pc = 0x8005BD2Cu;
    // 8005BD2C: addi    r19, r3, 16668
    ctx->gpr[19] = ctx->gpr[3] + (u32)(s32)(16668);

label_8005BD30:
    ctx->pc = 0x8005BD30u;
    // 8005BD30: bc    12, 0, 0x8005BD44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005BD44;
        }
    }

label_8005BD34:
    ctx->pc = 0x8005BD34u;
    ctx->downcount -= 4;
    // 8005BD34: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005BD38:
    ctx->pc = 0x8005BD38u;
    // 8005BD38: srawi r4, r18, 3
    {
        u32 sh = 3u;
        u32 value = ctx->gpr[18];
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

label_8005BD3C:
    ctx->pc = 0x8005BD3Cu;
    // 8005BD3C: addi    r0, r3, 15640
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(15640);

label_8005BD40:
    ctx->pc = 0x8005BD40u;
    // 8005BD40: add   r19, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_8005BD44:
    ctx->pc = 0x8005BD44u;
    ctx->downcount -= 9;
    // 8005BD44: lwz     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BD48:
    // 8005BD48: addi    r7, r28, -4
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(-4);

label_8005BD4C:
    ctx->pc = 0x8005BD4Cu;
    // 8005BD4C: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BD50:
    // 8005BD50: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005BD54:
    ctx->pc = 0x8005BD54u;
    // 8005BD54: lbz     r5, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BD58:
    // 8005BD58: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BD5C:
    ctx->pc = 0x8005BD5Cu;
    // 8005BD5C: lbz     r6, 1(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BD60:
    // 8005BD60: addi    r28, r28, -16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-16);

label_8005BD64:
    // 8005BD64: bl      0x8005C134
    {
            ctx->lr = 0x8005BD68u;
            goto label_8005C134;
    }

label_8005BD68:
    ctx->downcount -= 9;
    // 8005BD68: add   r19, r19, r17
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_8005BD6C:
    ctx->pc = 0x8005BD6Cu;
    // 8005BD6C: lwz     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BD70:
    ctx->pc = 0x8005BD70u;
    // 8005BD70: lwz     r3, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BD74:
    // 8005BD74: addi    r7, r28, 8
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(8);

label_8005BD78:
    ctx->pc = 0x8005BD78u;
    // 8005BD78: lbz     r5, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BD7C:
    // 8005BD7C: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BD80:
    ctx->pc = 0x8005BD80u;
    // 8005BD80: lbz     r6, 1(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BD84:
    // 8005BD84: addi    r8, r27, 4
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(4);

label_8005BD88:
    // 8005BD88: bl      0x8005C134
    {
            ctx->lr = 0x8005BD8Cu;
            goto label_8005C134;
    }

label_8005BD8C:
    ctx->downcount -= 9;
    // 8005BD8C: add   r19, r19, r17
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_8005BD90:
    ctx->pc = 0x8005BD90u;
    // 8005BD90: lwz     r0, 20(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BD94:
    ctx->pc = 0x8005BD94u;
    // 8005BD94: lwz     r3, 16(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BD98:
    // 8005BD98: addi    r7, r28, 4
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(4);

label_8005BD9C:
    ctx->pc = 0x8005BD9Cu;
    // 8005BD9C: lbz     r5, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BDA0:
    // 8005BDA0: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BDA4:
    ctx->pc = 0x8005BDA4u;
    // 8005BDA4: lbz     r6, 1(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BDA8:
    // 8005BDA8: addi    r8, r27, 8
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(8);

label_8005BDAC:
    // 8005BDAC: bl      0x8005C134
    {
            ctx->lr = 0x8005BDB0u;
            goto label_8005C134;
    }

label_8005BDB0:
    ctx->downcount -= 9;
    // 8005BDB0: add   r19, r19, r17
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_8005BDB4:
    ctx->pc = 0x8005BDB4u;
    // 8005BDB4: lwz     r0, 28(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BDB8:
    ctx->pc = 0x8005BDB8u;
    // 8005BDB8: lwz     r3, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BDBC:
    // 8005BDBC: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005BDC0:
    ctx->pc = 0x8005BDC0u;
    // 8005BDC0: lbz     r5, 0(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005BDC4:
    // 8005BDC4: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BDC8:
    ctx->pc = 0x8005BDC8u;
    // 8005BDC8: lbz     r6, 1(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005BDCC:
    // 8005BDCC: addi    r8, r27, 12
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(12);

label_8005BDD0:
    // 8005BDD0: bl      0x8005C134
    {
            ctx->lr = 0x8005BDD4u;
            goto label_8005C134;
    }

label_8005BDD4:
    ctx->downcount -= 5;
    // 8005BDD4: addi    r26, r26, 32
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(32);

label_8005BDD8:
    // 8005BDD8: add   r19, r19, r17
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_8005BDDC:
    // 8005BDDC: cmplw   r26, r28
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005BDE0:
    // 8005BDE0: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_8005BDE4:
    // 8005BDE4: bc    12, 0, 0x8005BD44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005BD44u;
                return;
            }
            goto label_8005BD44;
        }
    }

label_8005BDE8:
    ctx->pc = 0x8005BDE8u;
    ctx->downcount -= 1;
    // 8005BDE8: b       0x8005C008
    {
            goto label_8005C008;
    }

label_8005BDEC:
    ctx->pc = 0x8005BDECu;
    ctx->downcount -= 10;
    // 8005BDEC: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005BDF0:
    ctx->pc = 0x8005BDF0u;
    // 8005BDF0: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005BDF4:
    ctx->pc = 0x8005BDF4u;
    // 8005BDF4: addi    r5, r3, 15640
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(15640);

label_8005BDF8:
    ctx->pc = 0x8005BDF8u;
    // 8005BDF8: lbz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8005BDFC:
    ctx->pc = 0x8005BDFCu;
    // 8005BDFC: addi    r4, r4, 16668
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16668);

label_8005BE00:
    ctx->pc = 0x8005BE00u;
    // 8005BE00: lbz     r0, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8005BE04:
    ctx->pc = 0x8005BE04u;
    // 8005BE04: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005BE08:
    ctx->pc = 0x8005BE08u;
    // 8005BE08: srawi r18, r3, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[3];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[18] = value;
        } else if (sh > 31) {
            ctx->gpr[18] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[18] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005BE0C:
    ctx->pc = 0x8005BE0Cu;
    // 8005BE0C: addi    r17, r5, 2
    ctx->gpr[17] = ctx->gpr[5] + (u32)(s32)(2);

label_8005BE10:
    ctx->pc = 0x8005BE10u;
    // 8005BE10: rlwinm r19, r0, 31, 25, 31
    {
        ctx->gpr[19] = dolrecomp_rotl32(ctx->gpr[0], 31u) & 0x0000007Fu;
    }

label_8005BE14:
    ctx->pc = 0x8005BE14u;
    ctx->downcount -= 16;
    // 8005BE14: lbz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8005BE18:
    // 8005BE18: addi    r7, r28, -4
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(-4);

label_8005BE1C:
    ctx->pc = 0x8005BE1Cu;
    // 8005BE1C: lbz     r3, 1(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8005BE20:
    // 8005BE20: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005BE24:
    // 8005BE24: srawi r20, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[20] = value;
        } else if (sh > 31) {
            ctx->gpr[20] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[20] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005BE28:
    ctx->pc = 0x8005BE28u;
    // 8005BE28: lwz     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BE2C:
    // 8005BE2C: rlwinm r21, r3, 31, 25, 31
    {
        ctx->gpr[21] = dolrecomp_rotl32(ctx->gpr[3], 31u) & 0x0000007Fu;
    }

label_8005BE30:
    ctx->pc = 0x8005BE30u;
    // 8005BE30: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BE34:
    // 8005BE34: add   r18, r18, r20
    {
        u32 a = ctx->gpr[18];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[18] = res;
    }

label_8005BE38:
    // 8005BE38: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BE3C:
    // 8005BE3C: add   r19, r19, r21
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_8005BE40:
    // 8005BE40: addi    r22, r22, 2
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(2);

label_8005BE44:
    // 8005BE44: or   r5, r18, r18
    {
        ctx->gpr[5] = ctx->gpr[18] | ctx->gpr[18];
    }

label_8005BE48:
    // 8005BE48: addi    r28, r28, -16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-16);

label_8005BE4C:
    // 8005BE4C: or   r6, r19, r19
    {
        ctx->gpr[6] = ctx->gpr[19] | ctx->gpr[19];
    }

label_8005BE50:
    // 8005BE50: bl      0x8005C134
    {
            ctx->lr = 0x8005BE54u;
            goto label_8005C134;
    }

label_8005BE54:
    ctx->pc = 0x8005BE54u;
    ctx->downcount -= 15;
    // 8005BE54: lbz     r0, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8005BE58:
    // 8005BE58: addi    r7, r28, 8
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(8);

label_8005BE5C:
    ctx->pc = 0x8005BE5Cu;
    // 8005BE5C: lbz     r3, 1(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8005BE60:
    // 8005BE60: addi    r8, r27, 4
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(4);

label_8005BE64:
    // 8005BE64: srawi r18, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[18] = value;
        } else if (sh > 31) {
            ctx->gpr[18] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[18] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005BE68:
    ctx->pc = 0x8005BE68u;
    // 8005BE68: lwz     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BE6C:
    // 8005BE6C: rlwinm r19, r3, 31, 25, 31
    {
        ctx->gpr[19] = dolrecomp_rotl32(ctx->gpr[3], 31u) & 0x0000007Fu;
    }

label_8005BE70:
    ctx->pc = 0x8005BE70u;
    // 8005BE70: lwz     r3, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BE74:
    // 8005BE74: add   r20, r20, r18
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_8005BE78:
    // 8005BE78: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BE7C:
    // 8005BE7C: add   r21, r21, r19
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_8005BE80:
    // 8005BE80: addi    r17, r17, 2
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(2);

label_8005BE84:
    // 8005BE84: or   r5, r20, r20
    {
        ctx->gpr[5] = ctx->gpr[20] | ctx->gpr[20];
    }

label_8005BE88:
    // 8005BE88: or   r6, r21, r21
    {
        ctx->gpr[6] = ctx->gpr[21] | ctx->gpr[21];
    }

label_8005BE8C:
    // 8005BE8C: bl      0x8005C134
    {
            ctx->lr = 0x8005BE90u;
            goto label_8005C134;
    }

label_8005BE90:
    ctx->pc = 0x8005BE90u;
    ctx->downcount -= 15;
    // 8005BE90: lbz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8005BE94:
    // 8005BE94: addi    r7, r28, 4
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(4);

label_8005BE98:
    ctx->pc = 0x8005BE98u;
    // 8005BE98: lbz     r3, 1(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8005BE9C:
    // 8005BE9C: addi    r8, r27, 8
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(8);

label_8005BEA0:
    // 8005BEA0: srawi r20, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[20] = value;
        } else if (sh > 31) {
            ctx->gpr[20] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[20] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005BEA4:
    ctx->pc = 0x8005BEA4u;
    // 8005BEA4: lwz     r0, 20(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BEA8:
    // 8005BEA8: rlwinm r21, r3, 31, 25, 31
    {
        ctx->gpr[21] = dolrecomp_rotl32(ctx->gpr[3], 31u) & 0x0000007Fu;
    }

label_8005BEAC:
    ctx->pc = 0x8005BEACu;
    // 8005BEAC: lwz     r3, 16(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BEB0:
    // 8005BEB0: add   r18, r18, r20
    {
        u32 a = ctx->gpr[18];
        u32 b = ctx->gpr[20];
        u32 res = a + b;
        ctx->gpr[18] = res;
    }

label_8005BEB4:
    // 8005BEB4: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BEB8:
    // 8005BEB8: add   r19, r19, r21
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[21];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_8005BEBC:
    // 8005BEBC: addi    r22, r22, 2
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(2);

label_8005BEC0:
    // 8005BEC0: or   r5, r18, r18
    {
        ctx->gpr[5] = ctx->gpr[18] | ctx->gpr[18];
    }

label_8005BEC4:
    // 8005BEC4: or   r6, r19, r19
    {
        ctx->gpr[6] = ctx->gpr[19] | ctx->gpr[19];
    }

label_8005BEC8:
    // 8005BEC8: bl      0x8005C134
    {
            ctx->lr = 0x8005BECCu;
            goto label_8005C134;
    }

label_8005BECC:
    ctx->pc = 0x8005BECCu;
    ctx->downcount -= 15;
    // 8005BECC: lbz     r0, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8005BED0:
    // 8005BED0: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005BED4:
    ctx->pc = 0x8005BED4u;
    // 8005BED4: lbz     r3, 1(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8005BED8:
    // 8005BED8: addi    r8, r27, 12
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(12);

label_8005BEDC:
    // 8005BEDC: srawi r18, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[18] = value;
        } else if (sh > 31) {
            ctx->gpr[18] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[18] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005BEE0:
    ctx->pc = 0x8005BEE0u;
    // 8005BEE0: lwz     r0, 28(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BEE4:
    // 8005BEE4: rlwinm r19, r3, 31, 25, 31
    {
        ctx->gpr[19] = dolrecomp_rotl32(ctx->gpr[3], 31u) & 0x0000007Fu;
    }

label_8005BEE8:
    ctx->pc = 0x8005BEE8u;
    // 8005BEE8: lwz     r3, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BEEC:
    // 8005BEEC: add   r20, r20, r18
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_8005BEF0:
    // 8005BEF0: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BEF4:
    // 8005BEF4: add   r21, r21, r19
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_8005BEF8:
    // 8005BEF8: addi    r17, r17, 2
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(2);

label_8005BEFC:
    // 8005BEFC: or   r5, r20, r20
    {
        ctx->gpr[5] = ctx->gpr[20] | ctx->gpr[20];
    }

label_8005BF00:
    // 8005BF00: or   r6, r21, r21
    {
        ctx->gpr[6] = ctx->gpr[21] | ctx->gpr[21];
    }

label_8005BF04:
    // 8005BF04: bl      0x8005C134
    {
            ctx->lr = 0x8005BF08u;
            goto label_8005C134;
    }

label_8005BF08:
    ctx->downcount -= 4;
    // 8005BF08: addi    r26, r26, 32
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(32);

label_8005BF0C:
    // 8005BF0C: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_8005BF10:
    // 8005BF10: cmplw   r26, r28
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005BF14:
    // 8005BF14: bc    12, 0, 0x8005BE14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005BE14u;
                return;
            }
            goto label_8005BE14;
        }
    }

label_8005BF18:
    ctx->pc = 0x8005BF18u;
    ctx->downcount -= 1;
    // 8005BF18: b       0x8005C008
    {
            goto label_8005C008;
    }

label_8005BF1C:
    ctx->pc = 0x8005BF1Cu;
    ctx->downcount -= 6;
    // 8005BF1C: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005BF20:
    ctx->pc = 0x8005BF20u;
    // 8005BF20: lbzu     r22, 15640(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15640);
        ctx->gpr[22] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_8005BF24:
    ctx->pc = 0x8005BF24u;
    // 8005BF24: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005BF28:
    ctx->pc = 0x8005BF28u;
    // 8005BF28: lbz     r21, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        ctx->gpr[21] = mem_read8(ctx, ea);
    }

label_8005BF2C:
    ctx->pc = 0x8005BF2Cu;
    // 8005BF2C: addi    r23, r3, 16668
    ctx->gpr[23] = ctx->gpr[3] + (u32)(s32)(16668);

label_8005BF30:
    ctx->pc = 0x8005BF30u;
    // 8005BF30: addi    r24, r4, 2
    ctx->gpr[24] = ctx->gpr[4] + (u32)(s32)(2);

label_8005BF34:
    ctx->pc = 0x8005BF34u;
    ctx->downcount -= 18;
    // 8005BF34: lbz     r19, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[19] = mem_read8(ctx, ea);
    }

label_8005BF38:
    // 8005BF38: addi    r7, r28, -4
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(-4);

label_8005BF3C:
    ctx->pc = 0x8005BF3Cu;
    // 8005BF3C: lbz     r20, 1(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(1);
        ctx->gpr[20] = mem_read8(ctx, ea);
    }

label_8005BF40:
    // 8005BF40: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005BF44:
    // 8005BF44: subf   r3, r22, r19
    {
        u32 a = ~ctx->gpr[22];
        u32 b = ctx->gpr[19];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005BF48:
    ctx->pc = 0x8005BF48u;
    // 8005BF48: lwz     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BF4C:
    // 8005BF4C: srawi r17, r3, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[3];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[17] = value;
        } else if (sh > 31) {
            ctx->gpr[17] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[17] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005BF50:
    // 8005BF50: addi    r23, r23, 2
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(2);

label_8005BF54:
    // 8005BF54: subf   r3, r21, r20
    {
        u32 a = ~ctx->gpr[21];
        u32 b = ctx->gpr[20];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005BF58:
    // 8005BF58: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BF5C:
    // 8005BF5C: srawi r18, r3, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[3];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[18] = value;
        } else if (sh > 31) {
            ctx->gpr[18] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[18] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005BF60:
    // 8005BF60: add   r22, r22, r17
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_8005BF64:
    // 8005BF64: add   r21, r21, r18
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_8005BF68:
    ctx->pc = 0x8005BF68u;
    // 8005BF68: lwz     r3, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BF6C:
    // 8005BF6C: or   r5, r22, r22
    {
        ctx->gpr[5] = ctx->gpr[22] | ctx->gpr[22];
    }

label_8005BF70:
    // 8005BF70: addi    r28, r28, -16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-16);

label_8005BF74:
    // 8005BF74: or   r6, r21, r21
    {
        ctx->gpr[6] = ctx->gpr[21] | ctx->gpr[21];
    }

label_8005BF78:
    // 8005BF78: bl      0x8005C134
    {
            ctx->lr = 0x8005BF7Cu;
            goto label_8005C134;
    }

label_8005BF7C:
    ctx->pc = 0x8005BF7Cu;
    ctx->downcount -= 8;
    // 8005BF7C: lwz     r0, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BF80:
    // 8005BF80: subf   r5, r17, r19
    {
        u32 a = ~ctx->gpr[17];
        u32 b = ctx->gpr[19];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8005BF84:
    ctx->pc = 0x8005BF84u;
    // 8005BF84: lwz     r3, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BF88:
    // 8005BF88: subf   r6, r18, r20
    {
        u32 a = ~ctx->gpr[18];
        u32 b = ctx->gpr[20];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_8005BF8C:
    // 8005BF8C: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BF90:
    // 8005BF90: addi    r7, r28, 8
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(8);

label_8005BF94:
    // 8005BF94: addi    r8, r27, 4
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(4);

label_8005BF98:
    // 8005BF98: bl      0x8005C134
    {
            ctx->lr = 0x8005BF9Cu;
            goto label_8005C134;
    }

label_8005BF9C:
    ctx->pc = 0x8005BF9Cu;
    ctx->downcount -= 15;
    // 8005BF9C: lbz     r22, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[22] = mem_read8(ctx, ea);
    }

label_8005BFA0:
    // 8005BFA0: addi    r7, r28, 4
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(4);

label_8005BFA4:
    ctx->pc = 0x8005BFA4u;
    // 8005BFA4: lbz     r21, 1(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(1);
        ctx->gpr[21] = mem_read8(ctx, ea);
    }

label_8005BFA8:
    // 8005BFA8: addi    r8, r27, 8
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(8);

label_8005BFAC:
    // 8005BFAC: subf   r3, r19, r22
    {
        u32 a = ~ctx->gpr[19];
        u32 b = ctx->gpr[22];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005BFB0:
    ctx->pc = 0x8005BFB0u;
    // 8005BFB0: lwz     r0, 20(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BFB4:
    // 8005BFB4: srawi r17, r3, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[3];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[17] = value;
        } else if (sh > 31) {
            ctx->gpr[17] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[17] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005BFB8:
    // 8005BFB8: addi    r24, r24, 2
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(2);

label_8005BFBC:
    // 8005BFBC: subf   r3, r20, r21
    {
        u32 a = ~ctx->gpr[20];
        u32 b = ctx->gpr[21];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005BFC0:
    // 8005BFC0: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BFC4:
    // 8005BFC4: srawi r18, r3, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[3];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[18] = value;
        } else if (sh > 31) {
            ctx->gpr[18] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[18] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005BFC8:
    ctx->pc = 0x8005BFC8u;
    // 8005BFC8: lwz     r3, 16(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BFCC:
    // 8005BFCC: add   r5, r19, r17
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[17];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8005BFD0:
    // 8005BFD0: add   r6, r20, r18
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8005BFD4:
    // 8005BFD4: bl      0x8005C134
    {
            ctx->lr = 0x8005BFD8u;
            goto label_8005C134;
    }

label_8005BFD8:
    ctx->pc = 0x8005BFD8u;
    ctx->downcount -= 8;
    // 8005BFD8: lwz     r0, 28(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005BFDC:
    // 8005BFDC: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005BFE0:
    ctx->pc = 0x8005BFE0u;
    // 8005BFE0: lwz     r3, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005BFE4:
    // 8005BFE4: subf   r5, r17, r22
    {
        u32 a = ~ctx->gpr[17];
        u32 b = ctx->gpr[22];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8005BFE8:
    // 8005BFE8: neg  r4, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[4] = (~a) + 1u;
    }

label_8005BFEC:
    // 8005BFEC: subf   r6, r18, r21
    {
        u32 a = ~ctx->gpr[18];
        u32 b = ctx->gpr[21];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_8005BFF0:
    // 8005BFF0: addi    r8, r27, 12
    ctx->gpr[8] = ctx->gpr[27] + (u32)(s32)(12);

label_8005BFF4:
    // 8005BFF4: bl      0x8005C134
    {
            ctx->lr = 0x8005BFF8u;
            goto label_8005C134;
    }

label_8005BFF8:
    ctx->downcount -= 4;
    // 8005BFF8: addi    r26, r26, 32
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(32);

label_8005BFFC:
    // 8005BFFC: addi    r27, r27, 16
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(16);

label_8005C000:
    // 8005C000: cmplw   r26, r28
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005C004:
    // 8005C004: bc    12, 0, 0x8005BF34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005BF34u;
                return;
            }
            goto label_8005BF34;
        }
    }

label_8005C008:
    ctx->pc = 0x8005C008u;
    ctx->downcount -= 3;
    // 8005C008: add   r3, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005C00C:
    ctx->pc = 0x8005C00Cu;
    // 8005C00C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005C010:
    ctx->pc = 0x8005C010u;
    // 8005C010: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C014:
    loop_8005C014(ctx);
    if (ctx->pc == 0x8005C060u) goto label_8005C060;
    return;
label_8005C018:
    ctx->pc = 0x8005C018u;
    // 8005C018: stw     r0, -4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C01C:
    // 8005C01C: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_8005C020:
    ctx->pc = 0x8005C020u;
    // 8005C020: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C024:
    ctx->pc = 0x8005C024u;
    // 8005C024: lwz     r0, -8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C028:
    ctx->pc = 0x8005C028u;
    // 8005C028: stw     r0, -8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C02C:
    // 8005C02C: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_8005C030:
    ctx->pc = 0x8005C030u;
    // 8005C030: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C034:
    ctx->pc = 0x8005C034u;
    // 8005C034: lwz     r0, -12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C038:
    ctx->pc = 0x8005C038u;
    // 8005C038: stw     r0, -12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C03C:
    // 8005C03C: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_8005C040:
    ctx->pc = 0x8005C040u;
    // 8005C040: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C044:
    ctx->pc = 0x8005C044u;
    // 8005C044: lwzu     r0, -16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-16);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_8005C048:
    ctx->pc = 0x8005C048u;
    // 8005C048: stwu     r0, -16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[3] = ea;
    }

label_8005C04C:
    // 8005C04C: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_8005C050:
    ctx->pc = 0x8005C050u;
    // 8005C050: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C054:
    // 8005C054: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_8005C058:
    // 8005C058: cmplw   r4, r5
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005C05C:
    // 8005C05C: bc    12, 0, 0x8005C014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C014u;
                return;
            }
            goto label_8005C014;
        }
    }

label_8005C060:
    ctx->pc = 0x8005C060u;
    ctx->downcount -= 1;
    // 8005C060: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005C064:
    loop_8005C064(ctx);
    if (ctx->pc == 0x8005C094u) goto label_8005C094;
    return;
label_8005C068:
    ctx->pc = 0x8005C068u;
    // 8005C068: stw     r0, -16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C06C:
    ctx->pc = 0x8005C06Cu;
    // 8005C06C: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C070:
    ctx->pc = 0x8005C070u;
    // 8005C070: stw     r0, -12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C074:
    ctx->pc = 0x8005C074u;
    // 8005C074: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C078:
    ctx->pc = 0x8005C078u;
    // 8005C078: stw     r0, -8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C07C:
    ctx->pc = 0x8005C07Cu;
    // 8005C07C: lwz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C080:
    // 8005C080: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_8005C084:
    ctx->pc = 0x8005C084u;
    // 8005C084: stw     r0, -4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C088:
    // 8005C088: addi    r3, r3, -16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16);

label_8005C08C:
    // 8005C08C: cmplw   r3, r25
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005C090:
    // 8005C090: bc    12, 1, 0x8005C064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C064u;
                return;
            }
            goto label_8005C064;
        }
    }

label_8005C094:
    ctx->pc = 0x8005C094u;
    ctx->downcount -= 16;
    // 8005C094: lmw     r17, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 17; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005C098:
    ctx->pc = 0x8005C098u;
    // 8005C098: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C09C:
    ctx->pc = 0x8005C09Cu;
    // 8005C09C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005C0A0:
    ctx->pc = 0x8005C0A0u;
    // 8005C0A0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_8005C0A4:
    ctx->pc = 0x8005C0A4u;
    // 8005C0A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005C0A8:
    ctx->pc = 0x8005C0A8u;
    ctx->downcount -= 22;
    // 8005C0A8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005C0AC:
    ctx->pc = 0x8005C0ACu;
    // 8005C0AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005C0B0:
    ctx->pc = 0x8005C0B0u;
    // 8005C0B0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C0B4:
    ctx->pc = 0x8005C0B4u;
    // 8005C0B4: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005C0B8:
    ctx->pc = 0x8005C0B8u;
    // 8005C0B8: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005C0BC:
    ctx->pc = 0x8005C0BCu;
    // 8005C0BC: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005C0C0:
    ctx->pc = 0x8005C0C0u;
    // 8005C0C0: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C0C4:
    ctx->pc = 0x8005C0C4u;
    // 8005C0C4: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8005C0C8:
    ctx->pc = 0x8005C0C8u;
    // 8005C0C8: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8005C0CC:
    ctx->pc = 0x8005C0CCu;
    // 8005C0CC: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_8005C0D0:
    ctx->pc = 0x8005C0D0u;
    // 8005C0D0: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005C0D4:
    ctx->pc = 0x8005C0D4u;
    // 8005C0D4: bl      0x8005C128
    {
            ctx->lr = 0x8005C0D8u;
            goto label_8005C128;
    }

label_8005C0D8:
    ctx->pc = 0x8005C0D8u;
    ctx->downcount -= 4;
    // 8005C0D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C0DC:
    ctx->pc = 0x8005C0DCu;
    // 8005C0DC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8005C0E0:
    ctx->pc = 0x8005C0E0u;
    // 8005C0E0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005C0E4:
    ctx->pc = 0x8005C0E4u;
    // 8005C0E4: bl      0x8005C128
    {
            ctx->lr = 0x8005C0E8u;
            goto label_8005C128;
    }

label_8005C0E8:
    ctx->pc = 0x8005C0E8u;
    ctx->downcount -= 5;
    // 8005C0E8: subf   r0, r3, r31
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C0EC:
    ctx->pc = 0x8005C0ECu;
    // 8005C0EC: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8005C0F0:
    ctx->pc = 0x8005C0F0u;
    // 8005C0F0: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C0F4:
    ctx->pc = 0x8005C0F4u;
    // 8005C0F4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005C0F8:
    ctx->pc = 0x8005C0F8u;
    // 8005C0F8: bl      0x8005C128
    {
            ctx->lr = 0x8005C0FCu;
            goto label_8005C128;
    }

label_8005C0FC:
    ctx->pc = 0x8005C0FCu;
    ctx->downcount -= 4;
    // 8005C0FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C100:
    ctx->pc = 0x8005C100u;
    // 8005C100: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8005C104:
    ctx->pc = 0x8005C104u;
    // 8005C104: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005C108:
    ctx->pc = 0x8005C108u;
    // 8005C108: bl      0x8005C128
    {
            ctx->lr = 0x8005C10Cu;
            goto label_8005C128;
    }

label_8005C10C:
    ctx->pc = 0x8005C10Cu;
    ctx->downcount -= 18;
    // 8005C10C: add   r0, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C110:
    ctx->pc = 0x8005C110u;
    // 8005C110: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C114:
    ctx->pc = 0x8005C114u;
    // 8005C114: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005C118:
    ctx->pc = 0x8005C118u;
    // 8005C118: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C11C:
    ctx->pc = 0x8005C11Cu;
    // 8005C11C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005C120:
    ctx->pc = 0x8005C120u;
    // 8005C120: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8005C124:
    ctx->pc = 0x8005C124u;
    // 8005C124: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005C128:
    ctx->pc = 0x8005C128u;
    ctx->downcount -= 7;
    // 8005C128: srawi r0, r3, 8
    {
        u32 sh = 8u;
        u32 value = ctx->gpr[3];
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

label_8005C12C:
    ctx->pc = 0x8005C12Cu;
    // 8005C12C: mullw   r3, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[3] = (u32)product;
    }

label_8005C130:
    ctx->pc = 0x8005C130u;
    // 8005C130: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005C134:
    ctx->pc = 0x8005C134u;
    ctx->downcount -= 23;
    // 8005C134: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005C138:
    ctx->pc = 0x8005C138u;
    // 8005C138: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005C13C:
    ctx->pc = 0x8005C13Cu;
    // 8005C13C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C140:
    ctx->pc = 0x8005C140u;
    // 8005C140: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005C144:
    ctx->pc = 0x8005C144u;
    // 8005C144: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005C148:
    ctx->pc = 0x8005C148u;
    // 8005C148: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8005C14C:
    ctx->pc = 0x8005C14Cu;
    // 8005C14C: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C150:
    ctx->pc = 0x8005C150u;
    // 8005C150: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005C154:
    ctx->pc = 0x8005C154u;
    // 8005C154: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8005C158:
    ctx->pc = 0x8005C158u;
    // 8005C158: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_8005C15C:
    ctx->pc = 0x8005C15Cu;
    // 8005C15C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8005C160:
    ctx->pc = 0x8005C160u;
    // 8005C160: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005C164:
    ctx->pc = 0x8005C164u;
    // 8005C164: bl      0x8005C128
    {
            ctx->lr = 0x8005C168u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005C168:
    ctx->pc = 0x8005C168u;
    ctx->downcount -= 4;
    // 8005C168: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C16C:
    ctx->pc = 0x8005C16Cu;
    // 8005C16C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8005C170:
    ctx->pc = 0x8005C170u;
    // 8005C170: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005C174:
    ctx->pc = 0x8005C174u;
    // 8005C174: bl      0x8005C128
    {
            ctx->lr = 0x8005C178u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005C178:
    ctx->pc = 0x8005C178u;
    ctx->downcount -= 5;
    // 8005C178: add   r0, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C17C:
    ctx->pc = 0x8005C17Cu;
    // 8005C17C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8005C180:
    ctx->pc = 0x8005C180u;
    // 8005C180: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C184:
    ctx->pc = 0x8005C184u;
    // 8005C184: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005C188:
    ctx->pc = 0x8005C188u;
    // 8005C188: bl      0x8005C128
    {
            ctx->lr = 0x8005C18Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005C18C:
    ctx->pc = 0x8005C18Cu;
    ctx->downcount -= 4;
    // 8005C18C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C190:
    ctx->pc = 0x8005C190u;
    // 8005C190: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8005C194:
    ctx->pc = 0x8005C194u;
    // 8005C194: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005C198:
    ctx->pc = 0x8005C198u;
    // 8005C198: bl      0x8005C128
    {
            ctx->lr = 0x8005C19Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005C19C:
    ctx->pc = 0x8005C19Cu;
    ctx->downcount -= 18;
    // 8005C19C: subf   r0, r3, r31
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C1A0:
    ctx->pc = 0x8005C1A0u;
    // 8005C1A0: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C1A4:
    ctx->pc = 0x8005C1A4u;
    // 8005C1A4: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005C1A8:
    ctx->pc = 0x8005C1A8u;
    // 8005C1A8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C1AC:
    ctx->pc = 0x8005C1ACu;
    // 8005C1AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005C1B0:
    ctx->pc = 0x8005C1B0u;
    // 8005C1B0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8005C1B4:
    ctx->pc = 0x8005C1B4u;
    // 8005C1B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005C1B8:
    ctx->pc = 0x8005C1B8u;
    ctx->downcount -= 27;
    // 8005C1B8: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005C1BC:
    ctx->pc = 0x8005C1BCu;
    // 8005C1BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005C1C0:
    ctx->pc = 0x8005C1C0u;
    // 8005C1C0: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C1C4:
    ctx->pc = 0x8005C1C4u;
    // 8005C1C4: srawi r0, r4, 1
    {
        u32 sh = 1u;
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

label_8005C1C8:
    ctx->pc = 0x8005C1C8u;
    // 8005C1C8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005C1CC:
    ctx->pc = 0x8005C1CCu;
    // 8005C1CC: stmw     r22, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005C1D0:
    ctx->pc = 0x8005C1D0u;
    // 8005C1D0: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C1D4:
    ctx->pc = 0x8005C1D4u;
    // 8005C1D4: or   r26, r5, r5
    {
        ctx->gpr[26] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005C1D8:
    ctx->pc = 0x8005C1D8u;
    // 8005C1D8: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005C1DC:
    ctx->pc = 0x8005C1DCu;
    // 8005C1DC: or   r30, r25, r25
    {
        ctx->gpr[30] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8005C1E0:
    ctx->pc = 0x8005C1E0u;
    // 8005C1E0: add   r25, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_8005C1E4:
    ctx->pc = 0x8005C1E4u;
    // 8005C1E4: cmpwi   r26, 4
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005C1E8:
    ctx->pc = 0x8005C1E8u;
    // 8005C1E8: addi    r3, r3, 16668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16668);

label_8005C1EC:
    ctx->pc = 0x8005C1ECu;
    // 8005C1EC: or   r27, r6, r6
    {
        ctx->gpr[27] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8005C1F0:
    ctx->pc = 0x8005C1F0u;
    // 8005C1F0: or   r29, r25, r25
    {
        ctx->gpr[29] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8005C1F4:
    ctx->pc = 0x8005C1F4u;
    // 8005C1F4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8005C1F8:
    ctx->pc = 0x8005C1F8u;
    // 8005C1F8: bc    12, 0, 0x8005C20C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005C20C;
        }
    }

label_8005C1FC:
    ctx->pc = 0x8005C1FCu;
    ctx->downcount -= 4;
    // 8005C1FC: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005C200:
    ctx->pc = 0x8005C200u;
    // 8005C200: srawi r4, r26, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[26];
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

label_8005C204:
    ctx->pc = 0x8005C204u;
    // 8005C204: addi    r0, r3, 15640
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(15640);

label_8005C208:
    ctx->pc = 0x8005C208u;
    // 8005C208: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005C20C:
    ctx->pc = 0x8005C20Cu;
    ctx->downcount -= 2;
    // 8005C20C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C210:
    ctx->pc = 0x8005C210u;
    // 8005C210: addi    r22, r3, 1024
    ctx->gpr[22] = ctx->gpr[3] + (u32)(s32)(1024);

label_8005C214:
    ctx->downcount -= 3;
    // 8005C214: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005C218:
    // 8005C218: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_8005C21C:
    // 8005C21C: bl      0x8005C598
    {
            ctx->lr = 0x8005C220u;
            goto label_8005C598;
    }

label_8005C220:
    ctx->downcount -= 20;
    // 8005C220: xori    r0, r3, 0x0FFF
    ctx->gpr[0] = ctx->gpr[3] ^ 0x0FFFu;

label_8005C224:
    ctx->pc = 0x8005C224u;
    // 8005C224: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005C228:
    // 8005C228: sraw   r0, r0, r27
    {
        u32 sh = ctx->gpr[27] & 0x3Fu;
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

label_8005C22C:
    // 8005C22C: addi    r7, r1, 16
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(16);

label_8005C230:
    // 8005C230: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005C234:
    ctx->pc = 0x8005C234u;
    // 8005C234: lbz     r5, 1(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C238:
    // 8005C238: sraw   r0, r3, r27
    {
        u32 sh = ctx->gpr[27] & 0x3Fu;
        u32 value = ctx->gpr[3];
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

label_8005C23C:
    // 8005C23C: addi    r8, r1, 12
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(12);

label_8005C240:
    // 8005C240: addi    r23, r4, -4
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-4);

label_8005C244:
    // 8005C244: add   r23, r25, r23
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8005C248:
    // 8005C248: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005C24C:
    // 8005C24C: add   r24, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_8005C250:
    ctx->pc = 0x8005C250u;
    // 8005C250: lwz     r6, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005C254:
    ctx->pc = 0x8005C254u;
    // 8005C254: lwz     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C258:
    ctx->pc = 0x8005C258u;
    // 8005C258: lwz     r4, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C25C:
    ctx->pc = 0x8005C25Cu;
    // 8005C25C: lwz     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C260:
    // 8005C260: add   r3, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005C264:
    ctx->pc = 0x8005C264u;
    // 8005C264: lbz     r6, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C268:
    // 8005C268: subf   r4, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C26C:
    // 8005C26C: bl      0x8005C508
    {
            ctx->lr = 0x8005C270u;
            goto label_8005C508;
    }

label_8005C270:
    ctx->pc = 0x8005C270u;
    ctx->downcount -= 25;
    // 8005C270: lwz     r5, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C274:
    // 8005C274: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005C278:
    ctx->pc = 0x8005C278u;
    // 8005C278: lwz     r4, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C27C:
    // 8005C27C: add   r28, r28, r26
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_8005C280:
    ctx->pc = 0x8005C280u;
    // 8005C280: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C284:
    // 8005C284: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_8005C288:
    // 8005C288: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8005C28C:
    ctx->pc = 0x8005C28Cu;
    // 8005C28C: lwz     r5, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C290:
    // 8005C290: srawi r6, r4, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[4];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005C294:
    ctx->pc = 0x8005C294u;
    // 8005C294: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C298:
    // 8005C298: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C29C:
    ctx->pc = 0x8005C29Cu;
    // 8005C29C: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C2A0:
    // 8005C2A0: subf   r0, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C2A4:
    // 8005C2A4: srawi r4, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
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

label_8005C2A8:
    ctx->pc = 0x8005C2A8u;
    // 8005C2A8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C2AC:
    // 8005C2AC: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C2B0:
    ctx->pc = 0x8005C2B0u;
    // 8005C2B0: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C2B4:
    ctx->pc = 0x8005C2B4u;
    // 8005C2B4: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C2B8:
    // 8005C2B8: subf   r0, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C2BC:
    ctx->pc = 0x8005C2BCu;
    // 8005C2BC: stw     r0, -8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C2C0:
    ctx->pc = 0x8005C2C0u;
    // 8005C2C0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C2C4:
    // 8005C2C4: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C2C8:
    ctx->pc = 0x8005C2C8u;
    // 8005C2C8: stw     r0, -4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(-4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C2CC:
    // 8005C2CC: addi    r29, r29, -16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-16);

label_8005C2D0:
    // 8005C2D0: bl      0x8005C598
    {
            ctx->lr = 0x8005C2D4u;
            goto label_8005C598;
    }

label_8005C2D4:
    ctx->downcount -= 20;
    // 8005C2D4: xori    r0, r3, 0x0FFF
    ctx->gpr[0] = ctx->gpr[3] ^ 0x0FFFu;

label_8005C2D8:
    ctx->pc = 0x8005C2D8u;
    // 8005C2D8: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005C2DC:
    // 8005C2DC: sraw   r0, r0, r27
    {
        u32 sh = ctx->gpr[27] & 0x3Fu;
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

label_8005C2E0:
    // 8005C2E0: addi    r7, r1, 16
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(16);

label_8005C2E4:
    // 8005C2E4: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005C2E8:
    ctx->pc = 0x8005C2E8u;
    // 8005C2E8: lbz     r5, 1(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C2EC:
    // 8005C2EC: sraw   r0, r3, r27
    {
        u32 sh = ctx->gpr[27] & 0x3Fu;
        u32 value = ctx->gpr[3];
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

label_8005C2F0:
    // 8005C2F0: addi    r8, r1, 12
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(12);

label_8005C2F4:
    // 8005C2F4: addi    r24, r4, -4
    ctx->gpr[24] = ctx->gpr[4] + (u32)(s32)(-4);

label_8005C2F8:
    // 8005C2F8: add   r24, r25, r24
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_8005C2FC:
    // 8005C2FC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005C300:
    // 8005C300: add   r23, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8005C304:
    ctx->pc = 0x8005C304u;
    // 8005C304: lwz     r6, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005C308:
    ctx->pc = 0x8005C308u;
    // 8005C308: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C30C:
    ctx->pc = 0x8005C30Cu;
    // 8005C30C: lwz     r4, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C310:
    ctx->pc = 0x8005C310u;
    // 8005C310: lwz     r0, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C314:
    // 8005C314: add   r3, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005C318:
    ctx->pc = 0x8005C318u;
    // 8005C318: lbz     r6, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C31C:
    // 8005C31C: subf   r4, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C320:
    // 8005C320: bl      0x8005C508
    {
            ctx->lr = 0x8005C324u;
            goto label_8005C508;
    }

label_8005C324:
    ctx->pc = 0x8005C324u;
    ctx->downcount -= 24;
    // 8005C324: lwz     r4, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C328:
    // 8005C328: add   r28, r28, r26
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_8005C32C:
    ctx->pc = 0x8005C32Cu;
    // 8005C32C: lwz     r3, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C330:
    // 8005C330: cmplw   r28, r22
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(ctx->gpr[22]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005C334:
    ctx->pc = 0x8005C334u;
    // 8005C334: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C338:
    // 8005C338: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005C33C:
    ctx->pc = 0x8005C33Cu;
    // 8005C33C: lwz     r4, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C340:
    // 8005C340: srawi r5, r3, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[3];
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

label_8005C344:
    ctx->pc = 0x8005C344u;
    // 8005C344: lwz     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C348:
    // 8005C348: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C34C:
    ctx->pc = 0x8005C34Cu;
    // 8005C34C: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C350:
    // 8005C350: subf   r0, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C354:
    // 8005C354: srawi r3, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
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

label_8005C358:
    ctx->pc = 0x8005C358u;
    // 8005C358: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C35C:
    // 8005C35C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C360:
    ctx->pc = 0x8005C360u;
    // 8005C360: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C364:
    // 8005C364: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_8005C368:
    ctx->pc = 0x8005C368u;
    // 8005C368: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C36C:
    // 8005C36C: subf   r0, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C370:
    ctx->pc = 0x8005C370u;
    // 8005C370: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C374:
    ctx->pc = 0x8005C374u;
    // 8005C374: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C378:
    // 8005C378: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C37C:
    ctx->pc = 0x8005C37Cu;
    // 8005C37C: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C380:
    // 8005C380: bc    12, 0, 0x8005C214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C214u;
                return;
            }
            goto label_8005C214;
        }
    }

label_8005C384:
    ctx->downcount -= 3;
    // 8005C384: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005C388:
    // 8005C388: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_8005C38C:
    // 8005C38C: bl      0x8005C598
    {
            ctx->lr = 0x8005C390u;
            goto label_8005C598;
    }

label_8005C390:
    ctx->downcount -= 21;
    // 8005C390: xori    r0, r3, 0x0FFF
    ctx->gpr[0] = ctx->gpr[3] ^ 0x0FFFu;

label_8005C394:
    ctx->pc = 0x8005C394u;
    // 8005C394: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005C398:
    // 8005C398: sraw   r0, r0, r27
    {
        u32 sh = ctx->gpr[27] & 0x3Fu;
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

label_8005C39C:
    // 8005C39C: subf   r28, r26, r28
    {
        u32 a = ~ctx->gpr[26];
        u32 b = ctx->gpr[28];
        u32 res = a + b + 1u;
        ctx->gpr[28] = res;
    }

label_8005C3A0:
    // 8005C3A0: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005C3A4:
    ctx->pc = 0x8005C3A4u;
    // 8005C3A4: lbz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C3A8:
    // 8005C3A8: sraw   r0, r3, r27
    {
        u32 sh = ctx->gpr[27] & 0x3Fu;
        u32 value = ctx->gpr[3];
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

label_8005C3AC:
    // 8005C3AC: addi    r7, r1, 16
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(16);

label_8005C3B0:
    // 8005C3B0: addi    r22, r4, -4
    ctx->gpr[22] = ctx->gpr[4] + (u32)(s32)(-4);

label_8005C3B4:
    // 8005C3B4: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_8005C3B8:
    // 8005C3B8: add   r22, r25, r22
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_8005C3BC:
    // 8005C3BC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005C3C0:
    // 8005C3C0: add   r23, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8005C3C4:
    ctx->pc = 0x8005C3C4u;
    // 8005C3C4: lwz     r6, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005C3C8:
    ctx->pc = 0x8005C3C8u;
    // 8005C3C8: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C3CC:
    ctx->pc = 0x8005C3CCu;
    // 8005C3CC: lwz     r4, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C3D0:
    ctx->pc = 0x8005C3D0u;
    // 8005C3D0: lwz     r0, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C3D4:
    // 8005C3D4: add   r3, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005C3D8:
    ctx->pc = 0x8005C3D8u;
    // 8005C3D8: lbz     r6, 1(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C3DC:
    // 8005C3DC: subf   r4, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C3E0:
    // 8005C3E0: bl      0x8005C508
    {
            ctx->lr = 0x8005C3E4u;
            goto label_8005C508;
    }

label_8005C3E4:
    ctx->pc = 0x8005C3E4u;
    ctx->downcount -= 24;
    // 8005C3E4: lwz     r5, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C3E8:
    // 8005C3E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005C3EC:
    ctx->pc = 0x8005C3ECu;
    // 8005C3EC: lwz     r4, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C3F0:
    // 8005C3F0: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_8005C3F4:
    ctx->pc = 0x8005C3F4u;
    // 8005C3F4: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C3F8:
    // 8005C3F8: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8005C3FC:
    ctx->pc = 0x8005C3FCu;
    // 8005C3FC: lwz     r5, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C400:
    // 8005C400: srawi r6, r4, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[4];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005C404:
    ctx->pc = 0x8005C404u;
    // 8005C404: lwz     r4, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C408:
    // 8005C408: add   r0, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C40C:
    ctx->pc = 0x8005C40Cu;
    // 8005C40C: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C410:
    // 8005C410: subf   r0, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C414:
    // 8005C414: srawi r4, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
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

label_8005C418:
    ctx->pc = 0x8005C418u;
    // 8005C418: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C41C:
    // 8005C41C: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C420:
    ctx->pc = 0x8005C420u;
    // 8005C420: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C424:
    ctx->pc = 0x8005C424u;
    // 8005C424: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C428:
    // 8005C428: subf   r0, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C42C:
    ctx->pc = 0x8005C42Cu;
    // 8005C42C: stw     r0, -8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C430:
    ctx->pc = 0x8005C430u;
    // 8005C430: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C434:
    // 8005C434: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C438:
    ctx->pc = 0x8005C438u;
    // 8005C438: stw     r0, -4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(-4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C43C:
    // 8005C43C: addi    r29, r29, -16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-16);

label_8005C440:
    // 8005C440: bl      0x8005C598
    {
            ctx->lr = 0x8005C444u;
            goto label_8005C598;
    }

label_8005C444:
    ctx->downcount -= 21;
    // 8005C444: xori    r0, r3, 0x0FFF
    ctx->gpr[0] = ctx->gpr[3] ^ 0x0FFFu;

label_8005C448:
    ctx->pc = 0x8005C448u;
    // 8005C448: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005C44C:
    // 8005C44C: sraw   r0, r0, r27
    {
        u32 sh = ctx->gpr[27] & 0x3Fu;
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

label_8005C450:
    // 8005C450: subf   r28, r26, r28
    {
        u32 a = ~ctx->gpr[26];
        u32 b = ctx->gpr[28];
        u32 res = a + b + 1u;
        ctx->gpr[28] = res;
    }

label_8005C454:
    // 8005C454: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005C458:
    ctx->pc = 0x8005C458u;
    // 8005C458: lbz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C45C:
    // 8005C45C: sraw   r0, r3, r27
    {
        u32 sh = ctx->gpr[27] & 0x3Fu;
        u32 value = ctx->gpr[3];
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

label_8005C460:
    // 8005C460: addi    r7, r1, 16
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(16);

label_8005C464:
    // 8005C464: addi    r23, r4, -4
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-4);

label_8005C468:
    // 8005C468: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_8005C46C:
    // 8005C46C: add   r23, r25, r23
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_8005C470:
    // 8005C470: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005C474:
    // 8005C474: add   r24, r25, r0
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_8005C478:
    ctx->pc = 0x8005C478u;
    // 8005C478: lwz     r6, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005C47C:
    ctx->pc = 0x8005C47Cu;
    // 8005C47C: lwz     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C480:
    ctx->pc = 0x8005C480u;
    // 8005C480: lwz     r4, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C484:
    ctx->pc = 0x8005C484u;
    // 8005C484: lwz     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C488:
    // 8005C488: add   r3, r6, r3
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005C48C:
    ctx->pc = 0x8005C48Cu;
    // 8005C48C: lbz     r6, 1(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C490:
    // 8005C490: subf   r4, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C494:
    // 8005C494: bl      0x8005C508
    {
            ctx->lr = 0x8005C498u;
            goto label_8005C508;
    }

label_8005C498:
    ctx->pc = 0x8005C498u;
    ctx->downcount -= 23;
    // 8005C498: lwz     r4, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C49C:
    ctx->pc = 0x8005C49Cu;
    // 8005C49C: lwz     r3, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C4A0:
    ctx->pc = 0x8005C4A0u;
    // 8005C4A0: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C4A4:
    // 8005C4A4: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005C4A8:
    ctx->pc = 0x8005C4A8u;
    // 8005C4A8: lwz     r4, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C4AC:
    // 8005C4AC: srawi r5, r3, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[3];
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

label_8005C4B0:
    ctx->pc = 0x8005C4B0u;
    // 8005C4B0: lwz     r3, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C4B4:
    // 8005C4B4: add   r0, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C4B8:
    ctx->pc = 0x8005C4B8u;
    // 8005C4B8: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C4BC:
    // 8005C4BC: subf   r0, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C4C0:
    // 8005C4C0: srawi r3, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
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

label_8005C4C4:
    ctx->pc = 0x8005C4C4u;
    // 8005C4C4: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C4C8:
    // 8005C4C8: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C4CC:
    ctx->pc = 0x8005C4CCu;
    // 8005C4CC: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C4D0:
    // 8005C4D0: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_8005C4D4:
    // 8005C4D4: cmplw   r30, r29
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005C4D8:
    ctx->pc = 0x8005C4D8u;
    // 8005C4D8: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C4DC:
    // 8005C4DC: subf   r0, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C4E0:
    ctx->pc = 0x8005C4E0u;
    // 8005C4E0: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C4E4:
    ctx->pc = 0x8005C4E4u;
    // 8005C4E4: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C4E8:
    // 8005C4E8: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C4EC:
    ctx->pc = 0x8005C4ECu;
    // 8005C4EC: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C4F0:
    // 8005C4F0: bc    12, 0, 0x8005C384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C384u;
                return;
            }
            goto label_8005C384;
        }
    }

label_8005C4F4:
    ctx->pc = 0x8005C4F4u;
    ctx->downcount -= 16;
    // 8005C4F4: lmw     r22, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005C4F8:
    ctx->pc = 0x8005C4F8u;
    // 8005C4F8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C4FC:
    ctx->pc = 0x8005C4FCu;
    // 8005C4FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005C500:
    ctx->pc = 0x8005C500u;
    // 8005C500: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8005C504:
    ctx->pc = 0x8005C504u;
    // 8005C504: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005C508:
    ctx->pc = 0x8005C508u;
    ctx->downcount -= 23;
    // 8005C508: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005C50C:
    ctx->pc = 0x8005C50Cu;
    // 8005C50C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005C510:
    ctx->pc = 0x8005C510u;
    // 8005C510: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C514:
    ctx->pc = 0x8005C514u;
    // 8005C514: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005C518:
    ctx->pc = 0x8005C518u;
    // 8005C518: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005C51C:
    ctx->pc = 0x8005C51Cu;
    // 8005C51C: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8005C520:
    ctx->pc = 0x8005C520u;
    // 8005C520: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C524:
    ctx->pc = 0x8005C524u;
    // 8005C524: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005C528:
    ctx->pc = 0x8005C528u;
    // 8005C528: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8005C52C:
    ctx->pc = 0x8005C52Cu;
    // 8005C52C: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_8005C530:
    ctx->pc = 0x8005C530u;
    // 8005C530: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8005C534:
    ctx->pc = 0x8005C534u;
    // 8005C534: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005C538:
    ctx->pc = 0x8005C538u;
    // 8005C538: bl      0x8005C58C
    {
            ctx->lr = 0x8005C53Cu;
            goto label_8005C58C;
    }

label_8005C53C:
    ctx->pc = 0x8005C53Cu;
    ctx->downcount -= 4;
    // 8005C53C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C540:
    ctx->pc = 0x8005C540u;
    // 8005C540: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8005C544:
    ctx->pc = 0x8005C544u;
    // 8005C544: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005C548:
    ctx->pc = 0x8005C548u;
    // 8005C548: bl      0x8005C58C
    {
            ctx->lr = 0x8005C54Cu;
            goto label_8005C58C;
    }

label_8005C54C:
    ctx->pc = 0x8005C54Cu;
    ctx->downcount -= 5;
    // 8005C54C: add   r0, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C550:
    ctx->pc = 0x8005C550u;
    // 8005C550: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8005C554:
    ctx->pc = 0x8005C554u;
    // 8005C554: stw     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C558:
    ctx->pc = 0x8005C558u;
    // 8005C558: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005C55C:
    ctx->pc = 0x8005C55Cu;
    // 8005C55C: bl      0x8005C58C
    {
            ctx->lr = 0x8005C560u;
            goto label_8005C58C;
    }

label_8005C560:
    ctx->pc = 0x8005C560u;
    ctx->downcount -= 4;
    // 8005C560: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C564:
    ctx->pc = 0x8005C564u;
    // 8005C564: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8005C568:
    ctx->pc = 0x8005C568u;
    // 8005C568: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005C56C:
    ctx->pc = 0x8005C56Cu;
    // 8005C56C: bl      0x8005C58C
    {
            ctx->lr = 0x8005C570u;
            goto label_8005C58C;
    }

label_8005C570:
    ctx->pc = 0x8005C570u;
    ctx->downcount -= 18;
    // 8005C570: subf   r0, r3, r31
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005C574:
    ctx->pc = 0x8005C574u;
    // 8005C574: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C578:
    ctx->pc = 0x8005C578u;
    // 8005C578: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005C57C:
    ctx->pc = 0x8005C57Cu;
    // 8005C57C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C580:
    ctx->pc = 0x8005C580u;
    // 8005C580: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005C584:
    ctx->pc = 0x8005C584u;
    // 8005C584: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8005C588:
    ctx->pc = 0x8005C588u;
    // 8005C588: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005C58C:
    ctx->pc = 0x8005C58Cu;
    ctx->downcount -= 7;
    // 8005C58C: srawi r0, r3, 9
    {
        u32 sh = 9u;
        u32 value = ctx->gpr[3];
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

label_8005C590:
    ctx->pc = 0x8005C590u;
    // 8005C590: mullw   r3, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[3] = (u32)product;
    }

label_8005C594:
    ctx->pc = 0x8005C594u;
    // 8005C594: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005C598:
    ctx->pc = 0x8005C598u;
    ctx->downcount -= 13;
    // 8005C598: lis     r4, -32738
    ctx->gpr[4] = ((u32)(s32)(-32738) << 16);

label_8005C59C:
    ctx->pc = 0x8005C59Cu;
    // 8005C59C: rlwinm r0, r3, 28, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 28u) & 0x0000000Fu;
    }

label_8005C5A0:
    ctx->pc = 0x8005C5A0u;
    // 8005C5A0: addi    r5, r4, 32520
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(32520);

label_8005C5A4:
    ctx->pc = 0x8005C5A4u;
    // 8005C5A4: rlwinm r4, r3, 0, 28, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000000Fu;
    }

label_8005C5A8:
    ctx->pc = 0x8005C5A8u;
    // 8005C5A8: srawi r3, r3, 8
    {
        u32 sh = 8u;
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

label_8005C5AC:
    ctx->pc = 0x8005C5ACu;
    // 8005C5AC: lbzx    r0, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8005C5B0:
    ctx->pc = 0x8005C5B0u;
    // 8005C5B0: lbzx    r4, r5, r4
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[4];
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8005C5B4:
    ctx->pc = 0x8005C5B4u;
    // 8005C5B4: lbzx    r3, r5, r3
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8005C5B8:
    ctx->pc = 0x8005C5B8u;
    // 8005C5B8: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_8005C5BC:
    ctx->pc = 0x8005C5BCu;
    // 8005C5BC: rlwinm r4, r4, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_8005C5C0:
    ctx->pc = 0x8005C5C0u;
    // 8005C5C0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8005C5C4:
    ctx->pc = 0x8005C5C4u;
    // 8005C5C4: or   r3, r4, r0
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8005C5C8:
    ctx->pc = 0x8005C5C8u;
    // 8005C5C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005C5CC:
    ctx->pc = 0x8005C5CCu;
    ctx->downcount -= 22;
    // 8005C5CC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005C5D0:
    ctx->pc = 0x8005C5D0u;
    // 8005C5D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005C5D4:
    ctx->pc = 0x8005C5D4u;
    // 8005C5D4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C5D8:
    ctx->pc = 0x8005C5D8u;
    // 8005C5D8: stmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005C5DC:
    ctx->pc = 0x8005C5DCu;
    // 8005C5DC: or   r23, r5, r5
    {
        ctx->gpr[23] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005C5E0:
    ctx->pc = 0x8005C5E0u;
    // 8005C5E0: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005C5E4:
    ctx->pc = 0x8005C5E4u;
    // 8005C5E4: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005C5E8:
    ctx->pc = 0x8005C5E8u;
    // 8005C5E8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8005C5EC:
    ctx->pc = 0x8005C5ECu;
    // 8005C5EC: subfic  r26, r23, 8
    {
        u64 res = (u64)(u32)(s32)(8) + (u64)(~ctx->gpr[23]) + 1u;
        ctx->gpr[26] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8005C5F0:
    ctx->pc = 0x8005C5F0u;
    // 8005C5F0: li      r30, 4
    ctx->gpr[30] = (u32)(s32)(4);

label_8005C5F4:
    ctx->pc = 0x8005C5F4u;
    // 8005C5F4: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_8005C5F8:
    ctx->pc = 0x8005C5F8u;
    // 8005C5F8: b       0x8005C63C
    {
            goto label_8005C63C;
    }

label_8005C5FC:
    ctx->downcount -= 6;
    // 8005C5FC: add   r0, r25, r23
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C600:
    // 8005C600: sraw   r28, r22, r25
    {
        u32 sh = ctx->gpr[25] & 0x3Fu;
        u32 value = ctx->gpr[22];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[28] = value;
        } else if (sh > 31) {
            ctx->gpr[28] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[28] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_8005C604:
    // 8005C604: slw   r29, r30, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[29] = sh > 31 ? 0u : (ctx->gpr[30] << sh);
    }

label_8005C608:
    // 8005C608: slw   r27, r31, r25
    {
        u32 sh = ctx->gpr[25] & 0x3Fu;
        ctx->gpr[27] = sh > 31 ? 0u : (ctx->gpr[31] << sh);
    }

label_8005C60C:
    // 8005C60C: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8005C610:
    // 8005C610: b       0x8005C630
    {
            goto label_8005C630;
    }

label_8005C614:
    ctx->downcount -= 10;
    // 8005C614: mullw   r0, r24, r28
    {
        s64 product = (s64)(s32)ctx->gpr[24] * (s64)(s32)ctx->gpr[28];
        ctx->gpr[0] = (u32)product;
    }

label_8005C618:
    // 8005C618: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8005C61C:
    // 8005C61C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8005C620:
    // 8005C620: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005C624:
    // 8005C624: add   r3, r21, r0
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005C628:
    // 8005C628: bl      0x8005C67C
    {
            ctx->lr = 0x8005C62Cu;
            goto label_8005C67C;
    }

label_8005C62C:
    ctx->downcount -= 1;
    // 8005C62C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_8005C630:
    ctx->downcount -= 2;
    // 8005C630: cmpw    r24, r27
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005C634:
    // 8005C634: bc    12, 0, 0x8005C614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C614u;
                return;
            }
            goto label_8005C614;
        }
    }

label_8005C638:
    ctx->downcount -= 1;
    // 8005C638: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8005C63C:
    ctx->downcount -= 2;
    // 8005C63C: addic.  r26, r26, -1
    {
        u64 a = ctx->gpr[26];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[26] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8005C640:
    // 8005C640: bc    12, 1, 0x8005C5FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C5FCu;
                return;
            }
            goto label_8005C5FC;
        }
    }

label_8005C644:
    ctx->pc = 0x8005C644u;
    ctx->downcount -= 3;
    // 8005C644: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8005C648:
    ctx->pc = 0x8005C648u;
    // 8005C648: or   r31, r27, r27
    {
        ctx->gpr[31] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8005C64C:
    ctx->pc = 0x8005C64Cu;
    // 8005C64C: b       0x8005C660
    {
            goto label_8005C660;
    }

label_8005C650:
    ctx->downcount -= 2;
    // 8005C650: add   r3, r21, r31
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005C654:
    // 8005C654: bl      0x8005CB20
    {
            ctx->lr = 0x8005C658u;
            goto label_8005CB20;
    }

label_8005C658:
    ctx->downcount -= 2;
    // 8005C658: addi    r27, r27, 32
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(32);

label_8005C65C:
    // 8005C65C: addi    r31, r31, 128
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(128);

label_8005C660:
    ctx->downcount -= 2;
    // 8005C660: cmpw    r27, r22
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[22]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005C664:
    // 8005C664: bc    12, 0, 0x8005C650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C650u;
                return;
            }
            goto label_8005C650;
        }
    }

label_8005C668:
    ctx->pc = 0x8005C668u;
    ctx->downcount -= 16;
    // 8005C668: lmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005C66C:
    ctx->pc = 0x8005C66Cu;
    // 8005C66C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005C670:
    ctx->pc = 0x8005C670u;
    // 8005C670: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005C674:
    ctx->pc = 0x8005C674u;
    // 8005C674: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8005C678:
    ctx->pc = 0x8005C678u;
    // 8005C678: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005C67C:
    ctx->pc = 0x8005C67Cu;
    ctx->downcount -= 26;
    // 8005C67C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005C680:
    ctx->pc = 0x8005C680u;
    // 8005C680: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005C684:
    ctx->pc = 0x8005C684u;
    // 8005C684: lis     r7, -32762
    ctx->gpr[7] = ((u32)(s32)(-32762) << 16);

label_8005C688:
    ctx->pc = 0x8005C688u;
    // 8005C688: rlwinm r6, r4, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_8005C68C:
    ctx->pc = 0x8005C68Cu;
    // 8005C68C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C690:
    ctx->pc = 0x8005C690u;
    // 8005C690: srawi r0, r4, 1
    {
        u32 sh = 1u;
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

label_8005C694:
    ctx->pc = 0x8005C694u;
    // 8005C694: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005C698:
    ctx->pc = 0x8005C698u;
    // 8005C698: addi    r7, r7, 15640
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(15640);

label_8005C69C:
    ctx->pc = 0x8005C69Cu;
    // 8005C69C: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005C6A0:
    ctx->pc = 0x8005C6A0u;
    // 8005C6A0: addi    r30, r6, -32
    ctx->gpr[30] = ctx->gpr[6] + (u32)(s32)(-32);

label_8005C6A4:
    ctx->pc = 0x8005C6A4u;
    // 8005C6A4: addi    r31, r4, -32
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-32);

label_8005C6A8:
    ctx->pc = 0x8005C6A8u;
    // 8005C6A8: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005C6AC:
    ctx->pc = 0x8005C6ACu;
    // 8005C6AC: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8005C6B0:
    ctx->pc = 0x8005C6B0u;
    // 8005C6B0: add   r30, r3, r30
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_8005C6B4:
    ctx->pc = 0x8005C6B4u;
    // 8005C6B4: add   r31, r3, r31
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_8005C6B8:
    ctx->pc = 0x8005C6B8u;
    // 8005C6B8: addi    r27, r7, 1024
    ctx->gpr[27] = ctx->gpr[7] + (u32)(s32)(1024);

label_8005C6BC:
    ctx->pc = 0x8005C6BCu;
    ctx->downcount -= 15;
    // 8005C6BC: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C6C0:
    // 8005C6C0: addi    r7, r31, 24
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(24);

label_8005C6C4:
    ctx->pc = 0x8005C6C4u;
    // 8005C6C4: lwz     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C6C8:
    // 8005C6C8: addi    r8, r31, 28
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(28);

label_8005C6CC:
    // 8005C6CC: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C6D0:
    // 8005C6D0: subf   r4, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C6D4:
    ctx->pc = 0x8005C6D4u;
    // 8005C6D4: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C6D8:
    ctx->pc = 0x8005C6D8u;
    // 8005C6D8: lwz     r3, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C6DC:
    ctx->pc = 0x8005C6DCu;
    // 8005C6DC: lwz     r5, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C6E0:
    // 8005C6E0: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C6E4:
    // 8005C6E4: subf   r3, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C6E8:
    ctx->pc = 0x8005C6E8u;
    // 8005C6E8: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C6EC:
    ctx->pc = 0x8005C6ECu;
    // 8005C6EC: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C6F0:
    ctx->pc = 0x8005C6F0u;
    // 8005C6F0: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C6F4:
    // 8005C6F4: bl      0x8005C134
    {
            ctx->lr = 0x8005C6F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C134u;
                return;
            }
            goto label_8005C134;
    }

label_8005C6F8:
    ctx->pc = 0x8005C6F8u;
    ctx->downcount -= 16;
    // 8005C6F8: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C6FC:
    // 8005C6FC: add   r29, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8005C700:
    ctx->pc = 0x8005C700u;
    // 8005C700: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C704:
    // 8005C704: addi    r7, r31, 16
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(16);

label_8005C708:
    // 8005C708: addi    r8, r31, 20
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(20);

label_8005C70C:
    // 8005C70C: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C710:
    // 8005C710: subf   r4, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C714:
    ctx->pc = 0x8005C714u;
    // 8005C714: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C718:
    ctx->pc = 0x8005C718u;
    // 8005C718: lwz     r3, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C71C:
    ctx->pc = 0x8005C71Cu;
    // 8005C71C: lwz     r5, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C720:
    // 8005C720: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C724:
    // 8005C724: subf   r3, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C728:
    ctx->pc = 0x8005C728u;
    // 8005C728: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C72C:
    ctx->pc = 0x8005C72Cu;
    // 8005C72C: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C730:
    ctx->pc = 0x8005C730u;
    // 8005C730: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C734:
    // 8005C734: bl      0x8005C134
    {
            ctx->lr = 0x8005C738u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C134u;
                return;
            }
            goto label_8005C134;
    }

label_8005C738:
    ctx->pc = 0x8005C738u;
    ctx->downcount -= 16;
    // 8005C738: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C73C:
    // 8005C73C: add   r29, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8005C740:
    ctx->pc = 0x8005C740u;
    // 8005C740: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C744:
    // 8005C744: addi    r7, r31, 8
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(8);

label_8005C748:
    // 8005C748: addi    r8, r31, 12
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(12);

label_8005C74C:
    // 8005C74C: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C750:
    // 8005C750: subf   r4, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C754:
    ctx->pc = 0x8005C754u;
    // 8005C754: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C758:
    ctx->pc = 0x8005C758u;
    // 8005C758: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C75C:
    ctx->pc = 0x8005C75Cu;
    // 8005C75C: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C760:
    // 8005C760: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C764:
    // 8005C764: subf   r3, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C768:
    ctx->pc = 0x8005C768u;
    // 8005C768: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C76C:
    ctx->pc = 0x8005C76Cu;
    // 8005C76C: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C770:
    ctx->pc = 0x8005C770u;
    // 8005C770: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C774:
    // 8005C774: bl      0x8005C134
    {
            ctx->lr = 0x8005C778u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C134u;
                return;
            }
            goto label_8005C134;
    }

label_8005C778:
    ctx->pc = 0x8005C778u;
    ctx->downcount -= 16;
    // 8005C778: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C77C:
    // 8005C77C: add   r29, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8005C780:
    ctx->pc = 0x8005C780u;
    // 8005C780: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C784:
    // 8005C784: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005C788:
    // 8005C788: addi    r8, r31, 4
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(4);

label_8005C78C:
    // 8005C78C: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C790:
    // 8005C790: subf   r4, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C794:
    ctx->pc = 0x8005C794u;
    // 8005C794: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C798:
    ctx->pc = 0x8005C798u;
    // 8005C798: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C79C:
    ctx->pc = 0x8005C79Cu;
    // 8005C79C: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C7A0:
    // 8005C7A0: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C7A4:
    // 8005C7A4: subf   r3, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C7A8:
    ctx->pc = 0x8005C7A8u;
    // 8005C7A8: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C7AC:
    ctx->pc = 0x8005C7ACu;
    // 8005C7AC: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C7B0:
    ctx->pc = 0x8005C7B0u;
    // 8005C7B0: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C7B4:
    // 8005C7B4: bl      0x8005C134
    {
            ctx->lr = 0x8005C7B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C134u;
                return;
            }
            goto label_8005C134;
    }

label_8005C7B8:
    ctx->downcount -= 5;
    // 8005C7B8: add   r29, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8005C7BC:
    // 8005C7BC: addi    r31, r31, -32
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-32);

label_8005C7C0:
    // 8005C7C0: cmplw   r29, r27
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005C7C4:
    // 8005C7C4: addi    r30, r30, -32
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-32);

label_8005C7C8:
    // 8005C7C8: bc    12, 0, 0x8005C6BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C6BCu;
                return;
            }
            goto label_8005C6BC;
        }
    }

label_8005C7CC:
    ctx->pc = 0x8005C7CCu;
    ctx->downcount -= 2;
    // 8005C7CC: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005C7D0:
    ctx->pc = 0x8005C7D0u;
    // 8005C7D0: addi    r26, r3, 15640
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(15640);

label_8005C7D4:
    ctx->pc = 0x8005C7D4u;
    ctx->downcount -= 15;
    // 8005C7D4: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C7D8:
    // 8005C7D8: addi    r7, r31, 24
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(24);

label_8005C7DC:
    ctx->pc = 0x8005C7DCu;
    // 8005C7DC: lwz     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C7E0:
    // 8005C7E0: addi    r8, r31, 28
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(28);

label_8005C7E4:
    // 8005C7E4: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C7E8:
    // 8005C7E8: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C7EC:
    ctx->pc = 0x8005C7ECu;
    // 8005C7EC: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C7F0:
    ctx->pc = 0x8005C7F0u;
    // 8005C7F0: lwz     r5, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C7F4:
    ctx->pc = 0x8005C7F4u;
    // 8005C7F4: lwz     r4, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C7F8:
    // 8005C7F8: add   r0, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C7FC:
    // 8005C7FC: subf   r4, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C800:
    ctx->pc = 0x8005C800u;
    // 8005C800: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C804:
    ctx->pc = 0x8005C804u;
    // 8005C804: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C808:
    ctx->pc = 0x8005C808u;
    // 8005C808: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C80C:
    // 8005C80C: bl      0x8005C0A8
    {
            ctx->lr = 0x8005C810u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C0A8u;
                return;
            }
            goto label_8005C0A8;
    }

label_8005C810:
    ctx->pc = 0x8005C810u;
    ctx->downcount -= 16;
    // 8005C810: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C814:
    // 8005C814: subf   r29, r28, r29
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005C818:
    ctx->pc = 0x8005C818u;
    // 8005C818: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C81C:
    // 8005C81C: addi    r7, r31, 16
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(16);

label_8005C820:
    // 8005C820: addi    r8, r31, 20
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(20);

label_8005C824:
    // 8005C824: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C828:
    // 8005C828: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C82C:
    ctx->pc = 0x8005C82Cu;
    // 8005C82C: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C830:
    ctx->pc = 0x8005C830u;
    // 8005C830: lwz     r5, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C834:
    ctx->pc = 0x8005C834u;
    // 8005C834: lwz     r4, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C838:
    // 8005C838: add   r0, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C83C:
    // 8005C83C: subf   r4, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C840:
    ctx->pc = 0x8005C840u;
    // 8005C840: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C844:
    ctx->pc = 0x8005C844u;
    // 8005C844: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C848:
    ctx->pc = 0x8005C848u;
    // 8005C848: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C84C:
    // 8005C84C: bl      0x8005C0A8
    {
            ctx->lr = 0x8005C850u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C0A8u;
                return;
            }
            goto label_8005C0A8;
    }

label_8005C850:
    ctx->pc = 0x8005C850u;
    ctx->downcount -= 16;
    // 8005C850: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C854:
    // 8005C854: subf   r29, r28, r29
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005C858:
    ctx->pc = 0x8005C858u;
    // 8005C858: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C85C:
    // 8005C85C: addi    r7, r31, 8
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(8);

label_8005C860:
    // 8005C860: addi    r8, r31, 12
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(12);

label_8005C864:
    // 8005C864: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C868:
    // 8005C868: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C86C:
    ctx->pc = 0x8005C86Cu;
    // 8005C86C: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C870:
    ctx->pc = 0x8005C870u;
    // 8005C870: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C874:
    ctx->pc = 0x8005C874u;
    // 8005C874: lwz     r4, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C878:
    // 8005C878: add   r0, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C87C:
    // 8005C87C: subf   r4, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C880:
    ctx->pc = 0x8005C880u;
    // 8005C880: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C884:
    ctx->pc = 0x8005C884u;
    // 8005C884: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C888:
    ctx->pc = 0x8005C888u;
    // 8005C888: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C88C:
    // 8005C88C: bl      0x8005C0A8
    {
            ctx->lr = 0x8005C890u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C0A8u;
                return;
            }
            goto label_8005C0A8;
    }

label_8005C890:
    ctx->pc = 0x8005C890u;
    ctx->downcount -= 16;
    // 8005C890: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C894:
    // 8005C894: subf   r29, r28, r29
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005C898:
    ctx->pc = 0x8005C898u;
    // 8005C898: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C89C:
    // 8005C89C: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005C8A0:
    // 8005C8A0: addi    r8, r31, 4
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(4);

label_8005C8A4:
    // 8005C8A4: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C8A8:
    // 8005C8A8: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C8AC:
    ctx->pc = 0x8005C8ACu;
    // 8005C8AC: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C8B0:
    ctx->pc = 0x8005C8B0u;
    // 8005C8B0: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C8B4:
    ctx->pc = 0x8005C8B4u;
    // 8005C8B4: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C8B8:
    // 8005C8B8: add   r0, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C8BC:
    // 8005C8BC: subf   r4, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C8C0:
    ctx->pc = 0x8005C8C0u;
    // 8005C8C0: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C8C4:
    ctx->pc = 0x8005C8C4u;
    // 8005C8C4: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C8C8:
    ctx->pc = 0x8005C8C8u;
    // 8005C8C8: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C8CC:
    // 8005C8CC: bl      0x8005C0A8
    {
            ctx->lr = 0x8005C8D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C0A8u;
                return;
            }
            goto label_8005C0A8;
    }

label_8005C8D0:
    ctx->downcount -= 5;
    // 8005C8D0: subf   r29, r28, r29
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005C8D4:
    // 8005C8D4: addi    r31, r31, -32
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-32);

label_8005C8D8:
    // 8005C8D8: cmplw   r29, r26
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005C8DC:
    // 8005C8DC: addi    r30, r30, -32
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-32);

label_8005C8E0:
    // 8005C8E0: bc    12, 1, 0x8005C7D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C7D4u;
                return;
            }
            goto label_8005C7D4;
        }
    }

label_8005C8E4:
    ctx->pc = 0x8005C8E4u;
    ctx->downcount -= 15;
    // 8005C8E4: lwz     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C8E8:
    // 8005C8E8: addi    r7, r31, 24
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(24);

label_8005C8EC:
    ctx->pc = 0x8005C8ECu;
    // 8005C8EC: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C8F0:
    // 8005C8F0: addi    r8, r31, 28
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(28);

label_8005C8F4:
    // 8005C8F4: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C8F8:
    // 8005C8F8: subf   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C8FC:
    ctx->pc = 0x8005C8FCu;
    // 8005C8FC: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C900:
    ctx->pc = 0x8005C900u;
    // 8005C900: lwz     r4, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C904:
    ctx->pc = 0x8005C904u;
    // 8005C904: lwz     r5, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C908:
    // 8005C908: add   r0, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C90C:
    // 8005C90C: subf   r4, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C910:
    ctx->pc = 0x8005C910u;
    // 8005C910: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C914:
    ctx->pc = 0x8005C914u;
    // 8005C914: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C918:
    ctx->pc = 0x8005C918u;
    // 8005C918: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C91C:
    // 8005C91C: bl      0x8005C134
    {
            ctx->lr = 0x8005C920u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C134u;
                return;
            }
            goto label_8005C134;
    }

label_8005C920:
    ctx->pc = 0x8005C920u;
    ctx->downcount -= 16;
    // 8005C920: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C924:
    // 8005C924: add   r29, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8005C928:
    ctx->pc = 0x8005C928u;
    // 8005C928: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C92C:
    // 8005C92C: addi    r7, r31, 16
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(16);

label_8005C930:
    // 8005C930: addi    r8, r31, 20
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(20);

label_8005C934:
    // 8005C934: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C938:
    // 8005C938: subf   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C93C:
    ctx->pc = 0x8005C93Cu;
    // 8005C93C: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C940:
    ctx->pc = 0x8005C940u;
    // 8005C940: lwz     r4, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C944:
    ctx->pc = 0x8005C944u;
    // 8005C944: lwz     r5, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C948:
    // 8005C948: add   r0, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C94C:
    // 8005C94C: subf   r4, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C950:
    ctx->pc = 0x8005C950u;
    // 8005C950: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C954:
    ctx->pc = 0x8005C954u;
    // 8005C954: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C958:
    ctx->pc = 0x8005C958u;
    // 8005C958: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C95C:
    // 8005C95C: bl      0x8005C134
    {
            ctx->lr = 0x8005C960u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C134u;
                return;
            }
            goto label_8005C134;
    }

label_8005C960:
    ctx->pc = 0x8005C960u;
    ctx->downcount -= 16;
    // 8005C960: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C964:
    // 8005C964: add   r29, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8005C968:
    ctx->pc = 0x8005C968u;
    // 8005C968: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C96C:
    // 8005C96C: addi    r7, r31, 8
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(8);

label_8005C970:
    // 8005C970: addi    r8, r31, 12
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(12);

label_8005C974:
    // 8005C974: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C978:
    // 8005C978: subf   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C97C:
    ctx->pc = 0x8005C97Cu;
    // 8005C97C: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C980:
    ctx->pc = 0x8005C980u;
    // 8005C980: lwz     r4, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C984:
    ctx->pc = 0x8005C984u;
    // 8005C984: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C988:
    // 8005C988: add   r0, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C98C:
    // 8005C98C: subf   r4, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C990:
    ctx->pc = 0x8005C990u;
    // 8005C990: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C994:
    ctx->pc = 0x8005C994u;
    // 8005C994: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C998:
    ctx->pc = 0x8005C998u;
    // 8005C998: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C99C:
    // 8005C99C: bl      0x8005C134
    {
            ctx->lr = 0x8005C9A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C134u;
                return;
            }
            goto label_8005C134;
    }

label_8005C9A0:
    ctx->pc = 0x8005C9A0u;
    ctx->downcount -= 16;
    // 8005C9A0: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005C9A4:
    // 8005C9A4: add   r29, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8005C9A8:
    ctx->pc = 0x8005C9A8u;
    // 8005C9A8: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C9AC:
    // 8005C9AC: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005C9B0:
    // 8005C9B0: addi    r8, r31, 4
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(4);

label_8005C9B4:
    // 8005C9B4: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C9B8:
    // 8005C9B8: subf   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005C9BC:
    ctx->pc = 0x8005C9BCu;
    // 8005C9BC: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C9C0:
    ctx->pc = 0x8005C9C0u;
    // 8005C9C0: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005C9C4:
    ctx->pc = 0x8005C9C4u;
    // 8005C9C4: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005C9C8:
    // 8005C9C8: add   r0, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005C9CC:
    // 8005C9CC: subf   r4, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005C9D0:
    ctx->pc = 0x8005C9D0u;
    // 8005C9D0: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005C9D4:
    ctx->pc = 0x8005C9D4u;
    // 8005C9D4: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005C9D8:
    ctx->pc = 0x8005C9D8u;
    // 8005C9D8: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005C9DC:
    // 8005C9DC: bl      0x8005C134
    {
            ctx->lr = 0x8005C9E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C134u;
                return;
            }
            goto label_8005C134;
    }

label_8005C9E0:
    ctx->downcount -= 5;
    // 8005C9E0: add   r29, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8005C9E4:
    // 8005C9E4: addi    r31, r31, -32
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-32);

label_8005C9E8:
    // 8005C9E8: cmplw   r29, r27
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005C9EC:
    // 8005C9EC: addi    r30, r30, -32
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-32);

label_8005C9F0:
    // 8005C9F0: bc    12, 0, 0x8005C8E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C8E4u;
                return;
            }
            goto label_8005C8E4;
        }
    }

label_8005C9F4:
    ctx->pc = 0x8005C9F4u;
    ctx->downcount -= 2;
    // 8005C9F4: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005C9F8:
    ctx->pc = 0x8005C9F8u;
    // 8005C9F8: addi    r27, r3, 15640
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(15640);

label_8005C9FC:
    ctx->pc = 0x8005C9FCu;
    ctx->downcount -= 15;
    // 8005C9FC: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CA00:
    // 8005CA00: addi    r7, r31, 24
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(24);

label_8005CA04:
    ctx->pc = 0x8005CA04u;
    // 8005CA04: lwz     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CA08:
    // 8005CA08: addi    r8, r31, 28
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(28);

label_8005CA0C:
    // 8005CA0C: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CA10:
    // 8005CA10: subf   r4, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005CA14:
    ctx->pc = 0x8005CA14u;
    // 8005CA14: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CA18:
    ctx->pc = 0x8005CA18u;
    // 8005CA18: lwz     r3, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CA1C:
    ctx->pc = 0x8005CA1Cu;
    // 8005CA1C: lwz     r5, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CA20:
    // 8005CA20: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CA24:
    // 8005CA24: subf   r3, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CA28:
    ctx->pc = 0x8005CA28u;
    // 8005CA28: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CA2C:
    ctx->pc = 0x8005CA2Cu;
    // 8005CA2C: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005CA30:
    ctx->pc = 0x8005CA30u;
    // 8005CA30: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005CA34:
    // 8005CA34: bl      0x8005C0A8
    {
            ctx->lr = 0x8005CA38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C0A8u;
                return;
            }
            goto label_8005C0A8;
    }

label_8005CA38:
    ctx->pc = 0x8005CA38u;
    ctx->downcount -= 16;
    // 8005CA38: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CA3C:
    // 8005CA3C: subf   r29, r28, r29
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005CA40:
    ctx->pc = 0x8005CA40u;
    // 8005CA40: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CA44:
    // 8005CA44: addi    r7, r31, 16
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(16);

label_8005CA48:
    // 8005CA48: addi    r8, r31, 20
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(20);

label_8005CA4C:
    // 8005CA4C: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CA50:
    // 8005CA50: subf   r4, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005CA54:
    ctx->pc = 0x8005CA54u;
    // 8005CA54: stw     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CA58:
    ctx->pc = 0x8005CA58u;
    // 8005CA58: lwz     r3, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CA5C:
    ctx->pc = 0x8005CA5Cu;
    // 8005CA5C: lwz     r5, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CA60:
    // 8005CA60: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CA64:
    // 8005CA64: subf   r3, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CA68:
    ctx->pc = 0x8005CA68u;
    // 8005CA68: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CA6C:
    ctx->pc = 0x8005CA6Cu;
    // 8005CA6C: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005CA70:
    ctx->pc = 0x8005CA70u;
    // 8005CA70: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005CA74:
    // 8005CA74: bl      0x8005C0A8
    {
            ctx->lr = 0x8005CA78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C0A8u;
                return;
            }
            goto label_8005C0A8;
    }

label_8005CA78:
    ctx->pc = 0x8005CA78u;
    ctx->downcount -= 16;
    // 8005CA78: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CA7C:
    // 8005CA7C: subf   r29, r28, r29
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005CA80:
    ctx->pc = 0x8005CA80u;
    // 8005CA80: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CA84:
    // 8005CA84: addi    r7, r31, 8
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(8);

label_8005CA88:
    // 8005CA88: addi    r8, r31, 12
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(12);

label_8005CA8C:
    // 8005CA8C: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CA90:
    // 8005CA90: subf   r4, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005CA94:
    ctx->pc = 0x8005CA94u;
    // 8005CA94: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CA98:
    ctx->pc = 0x8005CA98u;
    // 8005CA98: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CA9C:
    ctx->pc = 0x8005CA9Cu;
    // 8005CA9C: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CAA0:
    // 8005CAA0: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CAA4:
    // 8005CAA4: subf   r3, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CAA8:
    ctx->pc = 0x8005CAA8u;
    // 8005CAA8: stw     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CAAC:
    ctx->pc = 0x8005CAACu;
    // 8005CAAC: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005CAB0:
    ctx->pc = 0x8005CAB0u;
    // 8005CAB0: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005CAB4:
    // 8005CAB4: bl      0x8005C0A8
    {
            ctx->lr = 0x8005CAB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C0A8u;
                return;
            }
            goto label_8005C0A8;
    }

label_8005CAB8:
    ctx->pc = 0x8005CAB8u;
    ctx->downcount -= 16;
    // 8005CAB8: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CABC:
    // 8005CABC: subf   r29, r28, r29
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005CAC0:
    ctx->pc = 0x8005CAC0u;
    // 8005CAC0: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CAC4:
    // 8005CAC4: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005CAC8:
    // 8005CAC8: addi    r8, r31, 4
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(4);

label_8005CACC:
    // 8005CACC: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CAD0:
    // 8005CAD0: subf   r4, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005CAD4:
    ctx->pc = 0x8005CAD4u;
    // 8005CAD4: stw     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CAD8:
    ctx->pc = 0x8005CAD8u;
    // 8005CAD8: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CADC:
    ctx->pc = 0x8005CADCu;
    // 8005CADC: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CAE0:
    // 8005CAE0: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CAE4:
    // 8005CAE4: subf   r3, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CAE8:
    ctx->pc = 0x8005CAE8u;
    // 8005CAE8: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CAEC:
    ctx->pc = 0x8005CAECu;
    // 8005CAEC: lbz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8005CAF0:
    ctx->pc = 0x8005CAF0u;
    // 8005CAF0: lbz     r6, 1(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8005CAF4:
    // 8005CAF4: bl      0x8005C0A8
    {
            ctx->lr = 0x8005CAF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C0A8u;
                return;
            }
            goto label_8005C0A8;
    }

label_8005CAF8:
    ctx->downcount -= 5;
    // 8005CAF8: subf   r29, r28, r29
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005CAFC:
    // 8005CAFC: addi    r31, r31, -32
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-32);

label_8005CB00:
    // 8005CB00: cmplw   r29, r27
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005CB04:
    // 8005CB04: addi    r30, r30, -32
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-32);

label_8005CB08:
    // 8005CB08: bc    12, 1, 0x8005C9FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C9FCu;
                return;
            }
            goto label_8005C9FC;
        }
    }

label_8005CB0C:
    ctx->pc = 0x8005CB0Cu;
    ctx->downcount -= 16;
    // 8005CB0C: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005CB10:
    ctx->pc = 0x8005CB10u;
    // 8005CB10: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005CB14:
    ctx->pc = 0x8005CB14u;
    // 8005CB14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005CB18:
    ctx->pc = 0x8005CB18u;
    // 8005CB18: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005CB1C:
    ctx->pc = 0x8005CB1Cu;
    // 8005CB1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005CB20:
    ctx->pc = 0x8005CB20u;
    ctx->downcount -= 42;
    // 8005CB20: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005CB24:
    ctx->pc = 0x8005CB24u;
    // 8005CB24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005CB28:
    ctx->pc = 0x8005CB28u;
    // 8005CB28: li      r5, 237
    ctx->gpr[5] = (u32)(s32)(237);

label_8005CB2C:
    ctx->pc = 0x8005CB2Cu;
    // 8005CB2C: li      r6, 98
    ctx->gpr[6] = (u32)(s32)(98);

label_8005CB30:
    ctx->pc = 0x8005CB30u;
    // 8005CB30: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CB34:
    ctx->pc = 0x8005CB34u;
    // 8005CB34: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005CB38:
    ctx->pc = 0x8005CB38u;
    // 8005CB38: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005CB3C:
    ctx->pc = 0x8005CB3Cu;
    // 8005CB3C: addi    r7, r31, 48
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(48);

label_8005CB40:
    ctx->pc = 0x8005CB40u;
    // 8005CB40: addi    r8, r31, 52
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(52);

label_8005CB44:
    ctx->pc = 0x8005CB44u;
    // 8005CB44: lwz     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CB48:
    ctx->pc = 0x8005CB48u;
    // 8005CB48: lwz     r3, 120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CB4C:
    ctx->pc = 0x8005CB4Cu;
    // 8005CB4C: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CB50:
    ctx->pc = 0x8005CB50u;
    // 8005CB50: subf   r9, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[9] = res;
    }

label_8005CB54:
    ctx->pc = 0x8005CB54u;
    // 8005CB54: stw     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CB58:
    ctx->pc = 0x8005CB58u;
    // 8005CB58: lwz     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CB5C:
    ctx->pc = 0x8005CB5Cu;
    // 8005CB5C: lwz     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CB60:
    ctx->pc = 0x8005CB60u;
    // 8005CB60: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CB64:
    ctx->pc = 0x8005CB64u;
    // 8005CB64: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CB68:
    ctx->pc = 0x8005CB68u;
    // 8005CB68: stw     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CB6C:
    ctx->pc = 0x8005CB6Cu;
    // 8005CB6C: stw     r9, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8005CB70:
    ctx->pc = 0x8005CB70u;
    // 8005CB70: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005CB74:
    ctx->pc = 0x8005CB74u;
    // 8005CB74: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CB78:
    ctx->pc = 0x8005CB78u;
    // 8005CB78: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CB7C:
    ctx->pc = 0x8005CB7Cu;
    // 8005CB7C: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CB80:
    ctx->pc = 0x8005CB80u;
    // 8005CB80: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CB84:
    ctx->pc = 0x8005CB84u;
    // 8005CB84: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CB88:
    ctx->pc = 0x8005CB88u;
    // 8005CB88: lwz     r9, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8005CB8C:
    ctx->pc = 0x8005CB8Cu;
    // 8005CB8C: lwz     r4, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CB90:
    ctx->pc = 0x8005CB90u;
    // 8005CB90: add   r0, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CB94:
    ctx->pc = 0x8005CB94u;
    // 8005CB94: subf   r4, r9, r4
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005CB98:
    ctx->pc = 0x8005CB98u;
    // 8005CB98: stw     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CB9C:
    ctx->pc = 0x8005CB9Cu;
    // 8005CB9C: bl      0x8005C0A8
    {
            ctx->lr = 0x8005CBA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C0A8u;
                return;
            }
            goto label_8005C0A8;
    }

label_8005CBA0:
    ctx->pc = 0x8005CBA0u;
    ctx->downcount -= 13;
    // 8005CBA0: lwz     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CBA4:
    ctx->pc = 0x8005CBA4u;
    // 8005CBA4: li      r4, 181
    ctx->gpr[4] = (u32)(s32)(181);

label_8005CBA8:
    ctx->pc = 0x8005CBA8u;
    // 8005CBA8: lwz     r3, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CBAC:
    ctx->pc = 0x8005CBACu;
    // 8005CBAC: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CBB0:
    ctx->pc = 0x8005CBB0u;
    // 8005CBB0: subf   r30, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[30] = res;
    }

label_8005CBB4:
    ctx->pc = 0x8005CBB4u;
    // 8005CBB4: stw     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CBB8:
    ctx->pc = 0x8005CBB8u;
    // 8005CBB8: lwz     r5, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CBBC:
    ctx->pc = 0x8005CBBCu;
    // 8005CBBC: lwz     r3, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CBC0:
    ctx->pc = 0x8005CBC0u;
    // 8005CBC0: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CBC4:
    ctx->pc = 0x8005CBC4u;
    // 8005CBC4: subf   r29, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005CBC8:
    ctx->pc = 0x8005CBC8u;
    // 8005CBC8: stw     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CBCC:
    ctx->pc = 0x8005CBCCu;
    // 8005CBCC: subf   r3, r29, r30
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CBD0:
    ctx->pc = 0x8005CBD0u;
    // 8005CBD0: bl      0x8005C128
    {
            ctx->lr = 0x8005CBD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005CBD4:
    ctx->pc = 0x8005CBD4u;
    ctx->downcount -= 4;
    // 8005CBD4: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005CBD8:
    ctx->pc = 0x8005CBD8u;
    // 8005CBD8: add   r3, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005CBDC:
    ctx->pc = 0x8005CBDCu;
    // 8005CBDC: li      r4, 181
    ctx->gpr[4] = (u32)(s32)(181);

label_8005CBE0:
    ctx->pc = 0x8005CBE0u;
    // 8005CBE0: bl      0x8005C128
    {
            ctx->lr = 0x8005CBE4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005CBE4:
    ctx->pc = 0x8005CBE4u;
    ctx->downcount -= 16;
    // 8005CBE4: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005CBE8:
    ctx->pc = 0x8005CBE8u;
    // 8005CBE8: addi    r7, r31, 32
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(32);

label_8005CBEC:
    ctx->pc = 0x8005CBECu;
    // 8005CBEC: addi    r8, r31, 36
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(36);

label_8005CBF0:
    ctx->pc = 0x8005CBF0u;
    // 8005CBF0: li      r5, 98
    ctx->gpr[5] = (u32)(s32)(98);

label_8005CBF4:
    ctx->pc = 0x8005CBF4u;
    // 8005CBF4: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CBF8:
    ctx->pc = 0x8005CBF8u;
    // 8005CBF8: li      r6, 237
    ctx->gpr[6] = (u32)(s32)(237);

label_8005CBFC:
    ctx->pc = 0x8005CBFCu;
    // 8005CBFC: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CC00:
    ctx->pc = 0x8005CC00u;
    // 8005CC00: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CC04:
    ctx->pc = 0x8005CC04u;
    // 8005CC04: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CC08:
    ctx->pc = 0x8005CC08u;
    // 8005CC08: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CC0C:
    ctx->pc = 0x8005CC0Cu;
    // 8005CC0C: lwz     r9, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8005CC10:
    ctx->pc = 0x8005CC10u;
    // 8005CC10: lwz     r4, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CC14:
    ctx->pc = 0x8005CC14u;
    // 8005CC14: add   r0, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CC18:
    ctx->pc = 0x8005CC18u;
    // 8005CC18: subf   r4, r9, r4
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005CC1C:
    ctx->pc = 0x8005CC1Cu;
    // 8005CC1C: stw     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CC20:
    ctx->pc = 0x8005CC20u;
    // 8005CC20: bl      0x8005C0A8
    {
            ctx->lr = 0x8005CC24u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C0A8u;
                return;
            }
            goto label_8005C0A8;
    }

label_8005CC24:
    ctx->pc = 0x8005CC24u;
    ctx->downcount -= 27;
    // 8005CC24: lwz     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CC28:
    ctx->pc = 0x8005CC28u;
    // 8005CC28: addi    r7, r31, 16
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(16);

label_8005CC2C:
    ctx->pc = 0x8005CC2Cu;
    // 8005CC2C: lwz     r3, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CC30:
    ctx->pc = 0x8005CC30u;
    // 8005CC30: addi    r8, r31, 20
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(20);

label_8005CC34:
    ctx->pc = 0x8005CC34u;
    // 8005CC34: li      r5, 98
    ctx->gpr[5] = (u32)(s32)(98);

label_8005CC38:
    ctx->pc = 0x8005CC38u;
    // 8005CC38: li      r6, 237
    ctx->gpr[6] = (u32)(s32)(237);

label_8005CC3C:
    ctx->pc = 0x8005CC3Cu;
    // 8005CC3C: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CC40:
    ctx->pc = 0x8005CC40u;
    // 8005CC40: subf   r9, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[9] = res;
    }

label_8005CC44:
    ctx->pc = 0x8005CC44u;
    // 8005CC44: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CC48:
    ctx->pc = 0x8005CC48u;
    // 8005CC48: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CC4C:
    ctx->pc = 0x8005CC4Cu;
    // 8005CC4C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CC50:
    ctx->pc = 0x8005CC50u;
    // 8005CC50: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CC54:
    ctx->pc = 0x8005CC54u;
    // 8005CC54: subf   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CC58:
    ctx->pc = 0x8005CC58u;
    // 8005CC58: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CC5C:
    ctx->pc = 0x8005CC5Cu;
    // 8005CC5C: stw     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005CC60:
    ctx->pc = 0x8005CC60u;
    // 8005CC60: stw     r9, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8005CC64:
    ctx->pc = 0x8005CC64u;
    // 8005CC64: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CC68:
    ctx->pc = 0x8005CC68u;
    // 8005CC68: lwz     r4, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CC6C:
    ctx->pc = 0x8005CC6Cu;
    // 8005CC6C: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CC70:
    ctx->pc = 0x8005CC70u;
    // 8005CC70: subf   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CC74:
    ctx->pc = 0x8005CC74u;
    // 8005CC74: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CC78:
    ctx->pc = 0x8005CC78u;
    // 8005CC78: lwz     r4, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CC7C:
    ctx->pc = 0x8005CC7Cu;
    // 8005CC7C: lwz     r9, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8005CC80:
    ctx->pc = 0x8005CC80u;
    // 8005CC80: add   r0, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CC84:
    ctx->pc = 0x8005CC84u;
    // 8005CC84: subf   r4, r4, r9
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005CC88:
    ctx->pc = 0x8005CC88u;
    // 8005CC88: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CC8C:
    ctx->pc = 0x8005CC8Cu;
    // 8005CC8C: bl      0x8005C134
    {
            ctx->lr = 0x8005CC90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C134u;
                return;
            }
            goto label_8005C134;
    }

label_8005CC90:
    ctx->pc = 0x8005CC90u;
    ctx->downcount -= 13;
    // 8005CC90: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CC94:
    ctx->pc = 0x8005CC94u;
    // 8005CC94: li      r4, 181
    ctx->gpr[4] = (u32)(s32)(181);

label_8005CC98:
    ctx->pc = 0x8005CC98u;
    // 8005CC98: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CC9C:
    ctx->pc = 0x8005CC9Cu;
    // 8005CC9C: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CCA0:
    ctx->pc = 0x8005CCA0u;
    // 8005CCA0: subf   r30, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[30] = res;
    }

label_8005CCA4:
    ctx->pc = 0x8005CCA4u;
    // 8005CCA4: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CCA8:
    ctx->pc = 0x8005CCA8u;
    // 8005CCA8: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CCAC:
    ctx->pc = 0x8005CCACu;
    // 8005CCAC: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CCB0:
    ctx->pc = 0x8005CCB0u;
    // 8005CCB0: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CCB4:
    ctx->pc = 0x8005CCB4u;
    // 8005CCB4: subf   r29, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005CCB8:
    ctx->pc = 0x8005CCB8u;
    // 8005CCB8: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CCBC:
    ctx->pc = 0x8005CCBCu;
    // 8005CCBC: add   r3, r29, r30
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005CCC0:
    ctx->pc = 0x8005CCC0u;
    // 8005CCC0: bl      0x8005C128
    {
            ctx->lr = 0x8005CCC4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005CCC4:
    ctx->pc = 0x8005CCC4u;
    ctx->downcount -= 4;
    // 8005CCC4: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005CCC8:
    ctx->pc = 0x8005CCC8u;
    // 8005CCC8: subf   r3, r30, r29
    {
        u32 a = ~ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CCCC:
    ctx->pc = 0x8005CCCCu;
    // 8005CCCC: li      r4, 181
    ctx->gpr[4] = (u32)(s32)(181);

label_8005CCD0:
    ctx->pc = 0x8005CCD0u;
    // 8005CCD0: bl      0x8005C128
    {
            ctx->lr = 0x8005CCD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005CCD4:
    ctx->pc = 0x8005CCD4u;
    ctx->downcount -= 16;
    // 8005CCD4: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005CCD8:
    ctx->pc = 0x8005CCD8u;
    // 8005CCD8: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005CCDC:
    ctx->pc = 0x8005CCDCu;
    // 8005CCDC: addi    r8, r31, 4
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(4);

label_8005CCE0:
    ctx->pc = 0x8005CCE0u;
    // 8005CCE0: li      r5, 237
    ctx->gpr[5] = (u32)(s32)(237);

label_8005CCE4:
    ctx->pc = 0x8005CCE4u;
    // 8005CCE4: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CCE8:
    ctx->pc = 0x8005CCE8u;
    // 8005CCE8: li      r6, 98
    ctx->gpr[6] = (u32)(s32)(98);

label_8005CCEC:
    ctx->pc = 0x8005CCECu;
    // 8005CCEC: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CCF0:
    ctx->pc = 0x8005CCF0u;
    // 8005CCF0: add   r0, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CCF4:
    ctx->pc = 0x8005CCF4u;
    // 8005CCF4: subf   r3, r3, r4
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CCF8:
    ctx->pc = 0x8005CCF8u;
    // 8005CCF8: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CCFC:
    ctx->pc = 0x8005CCFCu;
    // 8005CCFC: lwz     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CD00:
    ctx->pc = 0x8005CD00u;
    // 8005CD00: lwz     r9, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8005CD04:
    ctx->pc = 0x8005CD04u;
    // 8005CD04: add   r0, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CD08:
    ctx->pc = 0x8005CD08u;
    // 8005CD08: subf   r4, r4, r9
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005CD0C:
    ctx->pc = 0x8005CD0Cu;
    // 8005CD0C: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CD10:
    ctx->pc = 0x8005CD10u;
    // 8005CD10: bl      0x8005C134
    {
            ctx->lr = 0x8005CD14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C134u;
                return;
            }
            goto label_8005C134;
    }

label_8005CD14:
    ctx->pc = 0x8005CD14u;
    ctx->downcount -= 2;
    // 8005CD14: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005CD18:
    ctx->pc = 0x8005CD18u;
    // 8005CD18: bl      0x8005CD38
    {
            ctx->lr = 0x8005CD1Cu;
            goto label_8005CD38;
    }

label_8005CD1C:
    ctx->pc = 0x8005CD1Cu;
    ctx->downcount -= 2;
    // 8005CD1C: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_8005CD20:
    ctx->pc = 0x8005CD20u;
    // 8005CD20: bl      0x8005CD38
    {
            ctx->lr = 0x8005CD24u;
            goto label_8005CD38;
    }

label_8005CD24:
    ctx->pc = 0x8005CD24u;
    ctx->downcount -= 16;
    // 8005CD24: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005CD28:
    ctx->pc = 0x8005CD28u;
    // 8005CD28: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005CD2C:
    ctx->pc = 0x8005CD2Cu;
    // 8005CD2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005CD30:
    ctx->pc = 0x8005CD30u;
    // 8005CD30: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005CD34:
    ctx->pc = 0x8005CD34u;
    // 8005CD34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005CD38:
    ctx->pc = 0x8005CD38u;
    ctx->downcount -= 28;
    // 8005CD38: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005CD3C:
    ctx->pc = 0x8005CD3Cu;
    // 8005CD3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005CD40:
    ctx->pc = 0x8005CD40u;
    // 8005CD40: li      r4, 181
    ctx->gpr[4] = (u32)(s32)(181);

label_8005CD44:
    ctx->pc = 0x8005CD44u;
    // 8005CD44: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CD48:
    ctx->pc = 0x8005CD48u;
    // 8005CD48: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005CD4C:
    ctx->pc = 0x8005CD4Cu;
    // 8005CD4C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005CD50:
    ctx->pc = 0x8005CD50u;
    // 8005CD50: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CD54:
    ctx->pc = 0x8005CD54u;
    // 8005CD54: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CD58:
    ctx->pc = 0x8005CD58u;
    // 8005CD58: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CD5C:
    ctx->pc = 0x8005CD5Cu;
    // 8005CD5C: subf   r29, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005CD60:
    ctx->pc = 0x8005CD60u;
    // 8005CD60: stw     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CD64:
    ctx->pc = 0x8005CD64u;
    // 8005CD64: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CD68:
    ctx->pc = 0x8005CD68u;
    // 8005CD68: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CD6C:
    ctx->pc = 0x8005CD6Cu;
    // 8005CD6C: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CD70:
    ctx->pc = 0x8005CD70u;
    // 8005CD70: subf   r30, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[30] = res;
    }

label_8005CD74:
    ctx->pc = 0x8005CD74u;
    // 8005CD74: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CD78:
    ctx->pc = 0x8005CD78u;
    // 8005CD78: add   r3, r29, r30
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005CD7C:
    ctx->pc = 0x8005CD7Cu;
    // 8005CD7C: bl      0x8005C128
    {
            ctx->lr = 0x8005CD80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005CD80:
    ctx->pc = 0x8005CD80u;
    ctx->downcount -= 4;
    // 8005CD80: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005CD84:
    ctx->pc = 0x8005CD84u;
    // 8005CD84: subf   r3, r29, r30
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CD88:
    ctx->pc = 0x8005CD88u;
    // 8005CD88: li      r4, 181
    ctx->gpr[4] = (u32)(s32)(181);

label_8005CD8C:
    ctx->pc = 0x8005CD8Cu;
    // 8005CD8C: bl      0x8005C128
    {
            ctx->lr = 0x8005CD90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005CD90:
    ctx->pc = 0x8005CD90u;
    ctx->downcount -= 26;
    // 8005CD90: stw     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005CD94:
    ctx->pc = 0x8005CD94u;
    // 8005CD94: li      r4, 181
    ctx->gpr[4] = (u32)(s32)(181);

label_8005CD98:
    ctx->pc = 0x8005CD98u;
    // 8005CD98: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CD9C:
    ctx->pc = 0x8005CD9Cu;
    // 8005CD9C: lwz     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CDA0:
    ctx->pc = 0x8005CDA0u;
    // 8005CDA0: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CDA4:
    ctx->pc = 0x8005CDA4u;
    // 8005CDA4: subf   r6, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_8005CDA8:
    ctx->pc = 0x8005CDA8u;
    // 8005CDA8: stw     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CDAC:
    ctx->pc = 0x8005CDACu;
    // 8005CDAC: lwz     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CDB0:
    ctx->pc = 0x8005CDB0u;
    // 8005CDB0: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CDB4:
    ctx->pc = 0x8005CDB4u;
    // 8005CDB4: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CDB8:
    ctx->pc = 0x8005CDB8u;
    // 8005CDB8: subf   r3, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CDBC:
    ctx->pc = 0x8005CDBCu;
    // 8005CDBC: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CDC0:
    ctx->pc = 0x8005CDC0u;
    // 8005CDC0: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005CDC4:
    ctx->pc = 0x8005CDC4u;
    // 8005CDC4: stw     r6, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8005CDC8:
    ctx->pc = 0x8005CDC8u;
    // 8005CDC8: lwz     r5, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CDCC:
    ctx->pc = 0x8005CDCCu;
    // 8005CDCC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CDD0:
    ctx->pc = 0x8005CDD0u;
    // 8005CDD0: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CDD4:
    ctx->pc = 0x8005CDD4u;
    // 8005CDD4: subf   r30, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[30] = res;
    }

label_8005CDD8:
    ctx->pc = 0x8005CDD8u;
    // 8005CDD8: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CDDC:
    ctx->pc = 0x8005CDDCu;
    // 8005CDDC: lwz     r5, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CDE0:
    ctx->pc = 0x8005CDE0u;
    // 8005CDE0: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CDE4:
    ctx->pc = 0x8005CDE4u;
    // 8005CDE4: add   r0, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CDE8:
    ctx->pc = 0x8005CDE8u;
    // 8005CDE8: subf   r29, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[29] = res;
    }

label_8005CDEC:
    ctx->pc = 0x8005CDECu;
    // 8005CDEC: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CDF0:
    ctx->pc = 0x8005CDF0u;
    // 8005CDF0: subf   r3, r29, r30
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8005CDF4:
    ctx->pc = 0x8005CDF4u;
    // 8005CDF4: bl      0x8005C128
    {
            ctx->lr = 0x8005CDF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005CDF8:
    ctx->pc = 0x8005CDF8u;
    ctx->downcount -= 4;
    // 8005CDF8: stw     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005CDFC:
    ctx->pc = 0x8005CDFCu;
    // 8005CDFC: add   r3, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8005CE00:
    ctx->pc = 0x8005CE00u;
    // 8005CE00: li      r4, 181
    ctx->gpr[4] = (u32)(s32)(181);

label_8005CE04:
    ctx->pc = 0x8005CE04u;
    // 8005CE04: bl      0x8005C128
    {
            ctx->lr = 0x8005CE08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005C128u;
                return;
            }
            goto label_8005C128;
    }

label_8005CE08:
    ctx->pc = 0x8005CE08u;
    ctx->downcount -= 15;
    // 8005CE08: stw     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005CE0C:
    ctx->pc = 0x8005CE0Cu;
    // 8005CE0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8005CE10:
    ctx->pc = 0x8005CE10u;
    // 8005CE10: lwz     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CE14:
    ctx->pc = 0x8005CE14u;
    // 8005CE14: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CE18:
    ctx->pc = 0x8005CE18u;
    // 8005CE18: add   r0, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CE1C:
    ctx->pc = 0x8005CE1Cu;
    // 8005CE1C: subf   r6, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_8005CE20:
    ctx->pc = 0x8005CE20u;
    // 8005CE20: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CE24:
    ctx->pc = 0x8005CE24u;
    // 8005CE24: lwz     r5, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CE28:
    ctx->pc = 0x8005CE28u;
    // 8005CE28: lwz     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CE2C:
    ctx->pc = 0x8005CE2Cu;
    // 8005CE2C: add   r0, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CE30:
    ctx->pc = 0x8005CE30u;
    // 8005CE30: subf   r4, r5, r4
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005CE34:
    ctx->pc = 0x8005CE34u;
    // 8005CE34: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CE38:
    ctx->pc = 0x8005CE38u;
    // 8005CE38: stw     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8005CE3C:
    ctx->pc = 0x8005CE3Cu;
    // 8005CE3C: stw     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8005CE40:
    ctx->pc = 0x8005CE40u;
    // 8005CE40: bl      0x8005CE60
    {
            ctx->lr = 0x8005CE44u;
            goto label_8005CE60;
    }

label_8005CE44:
    ctx->pc = 0x8005CE44u;
    ctx->downcount -= 2;
    // 8005CE44: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_8005CE48:
    ctx->pc = 0x8005CE48u;
    // 8005CE48: bl      0x8005CE60
    {
            ctx->lr = 0x8005CE4Cu;
            goto label_8005CE60;
    }

label_8005CE4C:
    ctx->pc = 0x8005CE4Cu;
    ctx->downcount -= 16;
    // 8005CE4C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005CE50:
    ctx->pc = 0x8005CE50u;
    // 8005CE50: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005CE54:
    ctx->pc = 0x8005CE54u;
    // 8005CE54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005CE58:
    ctx->pc = 0x8005CE58u;
    // 8005CE58: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8005CE5C:
    ctx->pc = 0x8005CE5Cu;
    // 8005CE5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005CE60:
    ctx->pc = 0x8005CE60u;
    ctx->downcount -= 37;
    // 8005CE60: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005CE64:
    ctx->pc = 0x8005CE64u;
    // 8005CE64: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8005CE68:
    ctx->pc = 0x8005CE68u;
    // 8005CE68: lwz     r4, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CE6C:
    ctx->pc = 0x8005CE6Cu;
    // 8005CE6C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005CE70:
    ctx->pc = 0x8005CE70u;
    // 8005CE70: lwz     r8, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8005CE74:
    ctx->pc = 0x8005CE74u;
    // 8005CE74: lwz     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8005CE78:
    ctx->pc = 0x8005CE78u;
    // 8005CE78: subf   r11, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[11] = res;
    }

label_8005CE7C:
    ctx->pc = 0x8005CE7Cu;
    // 8005CE7C: add   r31, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_8005CE80:
    ctx->pc = 0x8005CE80u;
    // 8005CE80: lwz     r6, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005CE84:
    ctx->pc = 0x8005CE84u;
    // 8005CE84: subf   r0, r7, r8
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005CE88:
    ctx->pc = 0x8005CE88u;
    // 8005CE88: lwz     r5, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CE8C:
    ctx->pc = 0x8005CE8Cu;
    // 8005CE8C: add   r4, r0, r11
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8005CE90:
    ctx->pc = 0x8005CE90u;
    // 8005CE90: lwz     r10, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8005CE94:
    ctx->pc = 0x8005CE94u;
    // 8005CE94: lwz     r9, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_8005CE98:
    ctx->pc = 0x8005CE98u;
    // 8005CE98: subf   r0, r11, r0
    {
        u32 a = ~ctx->gpr[11];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005CE9C:
    ctx->pc = 0x8005CE9Cu;
    // 8005CE9C: subf   r12, r5, r6
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[12] = res;
    }

label_8005CEA0:
    ctx->pc = 0x8005CEA0u;
    // 8005CEA0: add   r11, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_8005CEA4:
    ctx->pc = 0x8005CEA4u;
    // 8005CEA4: subf   r5, r9, r10
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[10];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8005CEA8:
    ctx->pc = 0x8005CEA8u;
    // 8005CEA8: add   r8, r8, r7
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_8005CEAC:
    ctx->pc = 0x8005CEACu;
    // 8005CEAC: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8005CEB0:
    ctx->pc = 0x8005CEB0u;
    // 8005CEB0: subf   r4, r12, r5
    {
        u32 a = ~ctx->gpr[12];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_8005CEB4:
    ctx->pc = 0x8005CEB4u;
    // 8005CEB4: add   r7, r5, r12
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[12];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8005CEB8:
    ctx->pc = 0x8005CEB8u;
    // 8005CEB8: subf   r6, r11, r8
    {
        u32 a = ~ctx->gpr[11];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_8005CEBC:
    ctx->pc = 0x8005CEBCu;
    // 8005CEBC: stw     r4, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8005CEC0:
    ctx->pc = 0x8005CEC0u;
    // 8005CEC0: add   r9, r10, r9
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_8005CEC4:
    ctx->pc = 0x8005CEC4u;
    // 8005CEC4: subf   r5, r31, r9
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[9];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8005CEC8:
    ctx->pc = 0x8005CEC8u;
    // 8005CEC8: add   r4, r8, r11
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8005CECC:
    ctx->pc = 0x8005CECCu;
    // 8005CECC: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CED0:
    ctx->pc = 0x8005CED0u;
    // 8005CED0: add   r0, r9, r31
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CED4:
    ctx->pc = 0x8005CED4u;
    // 8005CED4: stw     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8005CED8:
    ctx->pc = 0x8005CED8u;
    // 8005CED8: stw     r6, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8005CEDC:
    ctx->pc = 0x8005CEDCu;
    // 8005CEDC: stw     r5, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8005CEE0:
    ctx->pc = 0x8005CEE0u;
    // 8005CEE0: stw     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8005CEE4:
    ctx->pc = 0x8005CEE4u;
    // 8005CEE4: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CEE8:
    ctx->pc = 0x8005CEE8u;
    // 8005CEE8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8005CEEC:
    ctx->pc = 0x8005CEECu;
    // 8005CEEC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005CEF0:
    ctx->pc = 0x8005CEF0u;
    // 8005CEF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005CEF4:
    ctx->pc = 0x8005CEF4u;
    ctx->downcount -= 110;
    // 8005CEF4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005CEF8:
    ctx->pc = 0x8005CEF8u;
    // 8005CEF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005CEFC:
    ctx->pc = 0x8005CEFCu;
    // 8005CEFC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CF00:
    ctx->pc = 0x8005CF00u;
    // 8005CF00: stmw     r15, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 15; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005CF04:
    ctx->pc = 0x8005CF04u;
    // 8005CF04: or   r20, r5, r5
    {
        ctx->gpr[20] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005CF08:
    ctx->pc = 0x8005CF08u;
    // 8005CF08: or   r19, r4, r4
    {
        ctx->gpr[19] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005CF0C:
    ctx->pc = 0x8005CF0Cu;
    // 8005CF0C: or   r18, r3, r3
    {
        ctx->gpr[18] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005CF10:
    ctx->pc = 0x8005CF10u;
    // 8005CF10: or   r25, r6, r6
    {
        ctx->gpr[25] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8005CF14:
    ctx->pc = 0x8005CF14u;
    // 8005CF14: or   r21, r7, r7
    {
        ctx->gpr[21] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8005CF18:
    ctx->pc = 0x8005CF18u;
    // 8005CF18: lwz     r26, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8005CF1C:
    ctx->pc = 0x8005CF1Cu;
    // 8005CF1C: lwz     r5, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005CF20:
    ctx->pc = 0x8005CF20u;
    // 8005CF20: lwz     r4, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CF24:
    ctx->pc = 0x8005CF24u;
    // 8005CF24: lwz     r0, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005CF28:
    ctx->pc = 0x8005CF28u;
    // 8005CF28: lwz     r30, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8005CF2C:
    ctx->pc = 0x8005CF2Cu;
    // 8005CF2C: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005CF30:
    ctx->pc = 0x8005CF30u;
    // 8005CF30: lwz     r24, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_8005CF34:
    ctx->pc = 0x8005CF34u;
    // 8005CF34: divw   r23, r0, r30
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[30];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[23] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8005CF38:
    ctx->pc = 0x8005CF38u;
    // 8005CF38: addi    r0, r24, -1
    ctx->gpr[0] = ctx->gpr[24] + (u32)(s32)(-1);

label_8005CF3C:
    ctx->pc = 0x8005CF3Cu;
    // 8005CF3C: add   r0, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005CF40:
    ctx->pc = 0x8005CF40u;
    // 8005CF40: divw   r0, r0, r24
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[24];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8005CF44:
    ctx->pc = 0x8005CF44u;
    // 8005CF44: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005CF48:
    ctx->pc = 0x8005CF48u;
    // 8005CF48: bl      0x800620F0
    {
            ctx->lr = 0x8005CF4Cu;
            ctx->pc = 0x800620F0u;
            return;
    }

label_8005CF4C:
    ctx->pc = 0x8005CF4Cu;
    ctx->downcount -= 48;
    // 8005CF4C: lwz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005CF50:
    ctx->pc = 0x8005CF50u;
    // 8005CF50: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005CF54:
    ctx->pc = 0x8005CF54u;
    // 8005CF54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005CF58:
    ctx->pc = 0x8005CF58u;
    // 8005CF58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005CF5C:
    ctx->pc = 0x8005CF5Cu;
    // 8005CF5C: divw   r22, r0, r21
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[21];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[22] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8005CF60:
    ctx->pc = 0x8005CF60u;
    // 8005CF60: mtctr    r21
    ctx->ctr = ctx->gpr[21];

label_8005CF64:
    ctx->pc = 0x8005CF64u;
    // 8005CF64: cmpwi   r21, 0
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

label_8005CF68:
    ctx->pc = 0x8005CF68u;
    // 8005CF68: bc    4, 1, 0x8005CF84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005CF84;
        }
    }

label_8005CF6C:
    ctx->pc = 0x8005CF6Cu;
    ctx->downcount -= 3;
    // 8005CF6C: lwzx    r0, r25, r3
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005CF70:
    // 8005CF70: cmpwi   r0, 0
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

label_8005CF74:
    // 8005CF74: bc    4, 2, 0x8005CF84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005CF84;
        }
    }

label_8005CF78:
    ctx->downcount -= 3;
    // 8005CF78: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_8005CF7C:
    // 8005CF7C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_8005CF80:
    // 8005CF80: bc    16, 0, 0x8005CF6C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005CF6Cu;
                return;
            }
            goto label_8005CF6C;
        }
    }

label_8005CF84:
    ctx->pc = 0x8005CF84u;
    ctx->downcount -= 2;
    // 8005CF84: cmpw    r4, r21
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[21]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005CF88:
    ctx->pc = 0x8005CF88u;
    // 8005CF88: bc    4, 2, 0x8005CF94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005CF94;
        }
    }

label_8005CF8C:
    ctx->pc = 0x8005CF8Cu;
    ctx->downcount -= 2;
    // 8005CF8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005CF90:
    ctx->pc = 0x8005CF90u;
    // 8005CF90: b       0x8005D094
    {
            goto label_8005D094;
    }

label_8005CF94:
    ctx->pc = 0x8005CF94u;
    ctx->downcount -= 43;
    // 8005CF94: divw   r25, r30, r21
    {
        s32 dividend = (s32)ctx->gpr[30];
        s32 divisor = (s32)ctx->gpr[21];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[25] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8005CF98:
    ctx->pc = 0x8005CF98u;
    // 8005CF98: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8005CF9C:
    ctx->pc = 0x8005CF9Cu;
    // 8005CF9C: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_8005CFA0:
    ctx->pc = 0x8005CFA0u;
    // 8005CFA0: b       0x8005D084
    {
            goto label_8005D084;
    }

label_8005CFA4:
    ctx->downcount -= 5;
    // 8005CFA4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8005CFA8:
    // 8005CFA8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8005CFAC:
    // 8005CFAC: slw   r30, r0, r27
    {
        u32 sh = ctx->gpr[27] & 0x3Fu;
        ctx->gpr[30] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8005CFB0:
    // 8005CFB0: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_8005CFB4:
    // 8005CFB4: b       0x8005D074
    {
            goto label_8005D074;
    }

label_8005CFB8:
    ctx->downcount -= 2;
    // 8005CFB8: cmpwi   r27, 0
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

label_8005CFBC:
    // 8005CFBC: bc    4, 2, 0x8005CFF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005CFF0;
        }
    }

label_8005CFC0:
    ctx->pc = 0x8005CFC0u;
    ctx->downcount -= 3;
    // 8005CFC0: lwz     r3, 20(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005CFC4:
    // 8005CFC4: addi    r4, r18, 4
    ctx->gpr[4] = ctx->gpr[18] + (u32)(s32)(4);

label_8005CFC8:
    // 8005CFC8: bl      0x80057368
    {
            ctx->lr = 0x8005CFCCu;
            ctx->pc = 0x80057368u;
            return;
    }

label_8005CFCC:
    ctx->downcount -= 2;
    // 8005CFCC: cmpwi   r3, -1
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

label_8005CFD0:
    // 8005CFD0: bc    12, 2, 0x8005D090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D090;
        }
    }

label_8005CFD4:
    ctx->pc = 0x8005CFD4u;
    ctx->downcount -= 7;
    // 8005CFD4: lwz     r4, 32(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005CFD8:
    // 8005CFD8: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8005CFDC:
    ctx->pc = 0x8005CFDCu;
    // 8005CFDC: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005CFE0:
    ctx->pc = 0x8005CFE0u;
    // 8005CFE0: stwx    r0, r31, r16
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[16];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005CFE4:
    ctx->pc = 0x8005CFE4u;
    // 8005CFE4: lwzx    r0, r31, r16
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[16];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005CFE8:
    // 8005CFE8: cmplwi  r0, 0x0000
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

label_8005CFEC:
    // 8005CFEC: bc    12, 2, 0x8005D090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D090;
        }
    }

label_8005CFF0:
    ctx->downcount -= 3;
    // 8005CFF0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005CFF4:
    // 8005CFF4: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_8005CFF8:
    // 8005CFF8: b       0x8005D060
    {
            goto label_8005D060;
    }

label_8005CFFC:
    ctx->pc = 0x8005CFFCu;
    ctx->downcount -= 7;
    // 8005CFFC: lwzx    r3, r31, r16
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[16];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D000:
    ctx->pc = 0x8005D000u;
    // 8005D000: lwzx    r0, r3, r15
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[15];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D004:
    // 8005D004: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005D008:
    // 8005D008: addi    r0, r4, 20
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(20);

label_8005D00C:
    ctx->pc = 0x8005D00Cu;
    // 8005D00C: lwzx    r0, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D010:
    // 8005D010: and.   r0, r0, r30
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

label_8005D014:
    // 8005D014: bc    12, 2, 0x8005D054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D054;
        }
    }

label_8005D018:
    ctx->pc = 0x8005D018u;
    ctx->downcount -= 5;
    // 8005D018: lwz     r3, 24(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D01C:
    ctx->pc = 0x8005D01Cu;
    // 8005D01C: lwzx    r0, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D020:
    ctx->pc = 0x8005D020u;
    // 8005D020: lwzx    r3, r17, r0
    {
        u32 ea = ctx->gpr[17] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D024:
    // 8005D024: cmplwi  r3, 0x0000
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

label_8005D028:
    // 8005D028: bc    12, 2, 0x8005D054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D054;
        }
    }

label_8005D02C:
    ctx->downcount -= 12;
    // 8005D02C: mullw   r0, r29, r25
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[25];
        ctx->gpr[0] = (u32)product;
    }

label_8005D030:
    // 8005D030: or   r4, r20, r20
    {
        ctx->gpr[4] = ctx->gpr[20] | ctx->gpr[20];
    }

label_8005D034:
    // 8005D034: or   r6, r21, r21
    {
        ctx->gpr[6] = ctx->gpr[21] | ctx->gpr[21];
    }

label_8005D038:
    // 8005D038: or   r8, r25, r25
    {
        ctx->gpr[8] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8005D03C:
    // 8005D03C: addi    r7, r18, 4
    ctx->gpr[7] = ctx->gpr[18] + (u32)(s32)(4);

label_8005D040:
    // 8005D040: li      r9, -8
    ctx->gpr[9] = (u32)(s32)(-8);

label_8005D044:
    // 8005D044: add   r5, r22, r0
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8005D048:
    // 8005D048: bl      0x80056BF4
    {
            ctx->lr = 0x8005D04Cu;
            ctx->pc = 0x80056BF4u;
            return;
    }

label_8005D04C:
    ctx->downcount -= 2;
    // 8005D04C: cmpwi   r3, -1
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

label_8005D050:
    // 8005D050: bc    12, 2, 0x8005D090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D090;
        }
    }

label_8005D054:
    ctx->downcount -= 3;
    // 8005D054: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8005D058:
    // 8005D058: addi    r15, r15, 4
    ctx->gpr[15] = ctx->gpr[15] + (u32)(s32)(4);

label_8005D05C:
    // 8005D05C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8005D060:
    ctx->downcount -= 2;
    // 8005D060: cmpw    r28, r24
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[24]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D064:
    // 8005D064: bc    4, 0, 0x8005D070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005D070;
        }
    }

label_8005D068:
    ctx->downcount -= 2;
    // 8005D068: cmpw    r29, r23
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D06C:
    // 8005D06C: bc    12, 0, 0x8005CFFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005CFFCu;
                return;
            }
            goto label_8005CFFC;
        }
    }

label_8005D070:
    ctx->downcount -= 1;
    // 8005D070: addi    r16, r16, 4
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(4);

label_8005D074:
    ctx->downcount -= 2;
    // 8005D074: cmpw    r29, r23
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D078:
    // 8005D078: bc    12, 0, 0x8005CFB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005CFB8u;
                return;
            }
            goto label_8005CFB8;
        }
    }

label_8005D07C:
    ctx->downcount -= 2;
    // 8005D07C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_8005D080:
    // 8005D080: addi    r17, r17, 4
    ctx->gpr[17] = ctx->gpr[17] + (u32)(s32)(4);

label_8005D084:
    ctx->pc = 0x8005D084u;
    ctx->downcount -= 3;
    // 8005D084: lwz     r0, 12(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D088:
    // 8005D088: cmpw    r27, r0
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

label_8005D08C:
    // 8005D08C: bc    12, 0, 0x8005CFA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005CFA4u;
                return;
            }
            goto label_8005CFA4;
        }
    }

label_8005D090:
    ctx->pc = 0x8005D090u;
    ctx->downcount -= 1;
    // 8005D090: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005D094:
    ctx->pc = 0x8005D094u;
    ctx->downcount -= 16;
    // 8005D094: lmw     r15, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 15; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005D098:
    ctx->pc = 0x8005D098u;
    // 8005D098: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D09C:
    ctx->pc = 0x8005D09Cu;
    // 8005D09C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005D0A0:
    ctx->pc = 0x8005D0A0u;
    // 8005D0A0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_8005D0A4:
    ctx->pc = 0x8005D0A4u;
    // 8005D0A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005D0A8:
    ctx->pc = 0x8005D0A8u;
    ctx->downcount -= 10;
    // 8005D0A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005D0AC:
    ctx->pc = 0x8005D0ACu;
    // 8005D0AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005D0B0:
    ctx->pc = 0x8005D0B0u;
    // 8005D0B0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8005D0B4:
    ctx->pc = 0x8005D0B4u;
    // 8005D0B4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8005D0B8:
    ctx->pc = 0x8005D0B8u;
    // 8005D0B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D0BC:
    ctx->pc = 0x8005D0BCu;
    // 8005D0BC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8005D0C0:
    ctx->pc = 0x8005D0C0u;
    // 8005D0C0: mtctr    r7
    ctx->ctr = ctx->gpr[7];

label_8005D0C4:
    ctx->pc = 0x8005D0C4u;
    // 8005D0C4: cmpwi   r7, 0
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

label_8005D0C8:
    ctx->pc = 0x8005D0C8u;
    // 8005D0C8: bc    4, 1, 0x8005D0F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005D0F0;
        }
    }

label_8005D0CC:
    ctx->pc = 0x8005D0CCu;
    ctx->downcount -= 3;
    // 8005D0CC: lwzx    r0, r6, r9
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[9];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D0D0:
    // 8005D0D0: cmpwi   r0, 0
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

label_8005D0D4:
    // 8005D0D4: bc    12, 2, 0x8005D0E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D0E8;
        }
    }

label_8005D0D8:
    ctx->pc = 0x8005D0D8u;
    ctx->downcount -= 4;
    // 8005D0D8: lwzx    r0, r5, r9
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[9];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D0DC:
    // 8005D0DC: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_8005D0E0:
    ctx->pc = 0x8005D0E0u;
    // 8005D0E0: stwx    r0, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D0E4:
    // 8005D0E4: addi    r8, r8, 4
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(4);

label_8005D0E8:
    ctx->downcount -= 2;
    // 8005D0E8: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

label_8005D0EC:
    // 8005D0EC: bc    16, 0, 0x8005D0CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D0CCu;
                return;
            }
            goto label_8005D0CC;
        }
    }

label_8005D0F0:
    ctx->pc = 0x8005D0F0u;
    ctx->downcount -= 2;
    // 8005D0F0: cmpwi   r10, 0
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D0F4:
    ctx->pc = 0x8005D0F4u;
    // 8005D0F4: bc    12, 2, 0x8005D10C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D10C;
        }
    }

label_8005D0F8:
    ctx->pc = 0x8005D0F8u;
    ctx->downcount -= 4;
    // 8005D0F8: lis     r6, -32763
    ctx->gpr[6] = ((u32)(s32)(-32763) << 16);

label_8005D0FC:
    ctx->pc = 0x8005D0FCu;
    // 8005D0FC: addi    r7, r6, 28688
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(28688);

label_8005D100:
    ctx->pc = 0x8005D100u;
    // 8005D100: or   r6, r10, r10
    {
        ctx->gpr[6] = ctx->gpr[10] | ctx->gpr[10];
    }

label_8005D104:
    ctx->pc = 0x8005D104u;
    // 8005D104: bl      0x8005D198
    {
            ctx->lr = 0x8005D108u;
            goto label_8005D198;
    }

label_8005D108:
    ctx->pc = 0x8005D108u;
    ctx->downcount -= 1;
    // 8005D108: b       0x8005D110
    {
            goto label_8005D110;
    }

label_8005D10C:
    ctx->pc = 0x8005D10Cu;
    ctx->downcount -= 1;
    // 8005D10C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005D110:
    ctx->pc = 0x8005D110u;
    ctx->downcount -= 5;
    // 8005D110: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D114:
    ctx->pc = 0x8005D114u;
    // 8005D114: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005D118:
    ctx->pc = 0x8005D118u;
    // 8005D118: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005D11C:
    ctx->pc = 0x8005D11Cu;
    // 8005D11C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005D120:
    ctx->pc = 0x8005D120u;
    ctx->downcount -= 10;
    // 8005D120: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005D124:
    ctx->pc = 0x8005D124u;
    // 8005D124: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005D128:
    ctx->pc = 0x8005D128u;
    // 8005D128: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8005D12C:
    ctx->pc = 0x8005D12Cu;
    // 8005D12C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8005D130:
    ctx->pc = 0x8005D130u;
    // 8005D130: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D134:
    ctx->pc = 0x8005D134u;
    // 8005D134: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8005D138:
    ctx->pc = 0x8005D138u;
    // 8005D138: mtctr    r7
    ctx->ctr = ctx->gpr[7];

label_8005D13C:
    ctx->pc = 0x8005D13Cu;
    // 8005D13C: cmpwi   r7, 0
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

label_8005D140:
    ctx->pc = 0x8005D140u;
    // 8005D140: bc    4, 1, 0x8005D168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005D168;
        }
    }

label_8005D144:
    ctx->pc = 0x8005D144u;
    ctx->downcount -= 3;
    // 8005D144: lwzx    r0, r6, r9
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[9];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D148:
    // 8005D148: cmpwi   r0, 0
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

label_8005D14C:
    // 8005D14C: bc    12, 2, 0x8005D160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D160;
        }
    }

label_8005D150:
    ctx->pc = 0x8005D150u;
    ctx->downcount -= 4;
    // 8005D150: lwzx    r0, r5, r9
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[9];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D154:
    // 8005D154: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_8005D158:
    ctx->pc = 0x8005D158u;
    // 8005D158: stwx    r0, r5, r8
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[8];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D15C:
    // 8005D15C: addi    r8, r8, 4
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(4);

label_8005D160:
    ctx->downcount -= 2;
    // 8005D160: addi    r9, r9, 4
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(4);

label_8005D164:
    // 8005D164: bc    16, 0, 0x8005D144
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D144u;
                return;
            }
            goto label_8005D144;
        }
    }

label_8005D168:
    ctx->pc = 0x8005D168u;
    ctx->downcount -= 2;
    // 8005D168: cmpwi   r10, 0
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D16C:
    ctx->pc = 0x8005D16Cu;
    // 8005D16C: bc    12, 2, 0x8005D184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D184;
        }
    }

label_8005D170:
    ctx->pc = 0x8005D170u;
    ctx->downcount -= 4;
    // 8005D170: lis     r6, -32763
    ctx->gpr[6] = ((u32)(s32)(-32763) << 16);

label_8005D174:
    ctx->pc = 0x8005D174u;
    // 8005D174: addi    r7, r6, 29020
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(29020);

label_8005D178:
    ctx->pc = 0x8005D178u;
    // 8005D178: or   r6, r10, r10
    {
        ctx->gpr[6] = ctx->gpr[10] | ctx->gpr[10];
    }

label_8005D17C:
    ctx->pc = 0x8005D17Cu;
    // 8005D17C: bl      0x8005D198
    {
            ctx->lr = 0x8005D180u;
            goto label_8005D198;
    }

label_8005D180:
    ctx->pc = 0x8005D180u;
    ctx->downcount -= 1;
    // 8005D180: b       0x8005D188
    {
            goto label_8005D188;
    }

label_8005D184:
    ctx->pc = 0x8005D184u;
    ctx->downcount -= 1;
    // 8005D184: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005D188:
    ctx->pc = 0x8005D188u;
    ctx->downcount -= 5;
    // 8005D188: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D18C:
    ctx->pc = 0x8005D18Cu;
    // 8005D18C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005D190:
    ctx->pc = 0x8005D190u;
    // 8005D190: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8005D194:
    ctx->pc = 0x8005D194u;
    // 8005D194: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005D198:
    ctx->pc = 0x8005D198u;
    ctx->downcount -= 68;
    // 8005D198: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005D19C:
    ctx->pc = 0x8005D19Cu;
    // 8005D19C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005D1A0:
    ctx->pc = 0x8005D1A0u;
    // 8005D1A0: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D1A4:
    ctx->pc = 0x8005D1A4u;
    // 8005D1A4: stmw     r14, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005D1A8:
    ctx->pc = 0x8005D1A8u;
    // 8005D1A8: or   r17, r6, r6
    {
        ctx->gpr[17] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8005D1AC:
    ctx->pc = 0x8005D1ACu;
    // 8005D1AC: or   r15, r3, r3
    {
        ctx->gpr[15] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005D1B0:
    ctx->pc = 0x8005D1B0u;
    // 8005D1B0: or   r16, r4, r4
    {
        ctx->gpr[16] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005D1B4:
    ctx->pc = 0x8005D1B4u;
    // 8005D1B4: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8005D1B8:
    ctx->pc = 0x8005D1B8u;
    // 8005D1B8: rlwinm r3, r17, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[17], 2u) & 0xFFFFFFFCu;
    }

label_8005D1BC:
    ctx->pc = 0x8005D1BCu;
    // 8005D1BC: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8005D1C0:
    ctx->pc = 0x8005D1C0u;
    // 8005D1C0: lwz     r22, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_8005D1C4:
    ctx->pc = 0x8005D1C4u;
    // 8005D1C4: lwz     r6, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005D1C8:
    ctx->pc = 0x8005D1C8u;
    // 8005D1C8: lwz     r4, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005D1CC:
    ctx->pc = 0x8005D1CCu;
    // 8005D1CC: lwz     r0, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D1D0:
    ctx->pc = 0x8005D1D0u;
    // 8005D1D0: lwz     r21, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_8005D1D4:
    ctx->pc = 0x8005D1D4u;
    // 8005D1D4: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8005D1D8:
    ctx->pc = 0x8005D1D8u;
    // 8005D1D8: lwz     r20, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_8005D1DC:
    ctx->pc = 0x8005D1DCu;
    // 8005D1DC: divw   r19, r0, r21
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[21];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[19] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8005D1E0:
    ctx->pc = 0x8005D1E0u;
    // 8005D1E0: bl      0x80055FF0
    {
            ctx->lr = 0x8005D1E4u;
            ctx->pc = 0x80055FF0u;
            return;
    }

label_8005D1E4:
    ctx->pc = 0x8005D1E4u;
    ctx->downcount -= 47;
    // 8005D1E4: addi    r0, r20, -1
    ctx->gpr[0] = ctx->gpr[20] + (u32)(s32)(-1);

label_8005D1E8:
    ctx->pc = 0x8005D1E8u;
    // 8005D1E8: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8005D1EC:
    ctx->pc = 0x8005D1ECu;
    // 8005D1EC: add   r0, r19, r0
    {
        u32 a = ctx->gpr[19];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005D1F0:
    ctx->pc = 0x8005D1F0u;
    // 8005D1F0: or   r18, r3, r3
    {
        ctx->gpr[18] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005D1F4:
    ctx->pc = 0x8005D1F4u;
    // 8005D1F4: divw   r0, r0, r20
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[20];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8005D1F8:
    ctx->pc = 0x8005D1F8u;
    // 8005D1F8: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_8005D1FC:
    ctx->pc = 0x8005D1FCu;
    // 8005D1FC: rlwinm r23, r0, 2, 0, 29
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005D200:
    ctx->pc = 0x8005D200u;
    // 8005D200: b       0x8005D21C
    {
            goto label_8005D21C;
    }

label_8005D204:
    ctx->downcount -= 3;
    // 8005D204: or   r3, r15, r15
    {
        ctx->gpr[3] = ctx->gpr[15] | ctx->gpr[15];
    }

label_8005D208:
    // 8005D208: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8005D20C:
    // 8005D20C: bl      0x800620F0
    {
            ctx->lr = 0x8005D210u;
            ctx->pc = 0x800620F0u;
            return;
    }

label_8005D210:
    ctx->pc = 0x8005D210u;
    ctx->downcount -= 3;
    // 8005D210: stwx    r3, r18, r14
    {
        u32 ea = ctx->gpr[18] + ctx->gpr[14];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005D214:
    // 8005D214: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_8005D218:
    // 8005D218: addi    r14, r14, 4
    ctx->gpr[14] = ctx->gpr[14] + (u32)(s32)(4);

label_8005D21C:
    ctx->downcount -= 2;
    // 8005D21C: cmpw    r24, r17
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[17]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D220:
    // 8005D220: bc    12, 0, 0x8005D204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D204u;
                return;
            }
            goto label_8005D204;
        }
    }

label_8005D224:
    ctx->pc = 0x8005D224u;
    ctx->downcount -= 3;
    // 8005D224: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_8005D228:
    ctx->pc = 0x8005D228u;
    // 8005D228: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8005D22C:
    ctx->pc = 0x8005D22Cu;
    // 8005D22C: b       0x8005D368
    {
            goto label_8005D368;
    }

label_8005D230:
    ctx->downcount -= 5;
    // 8005D230: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8005D234:
    // 8005D234: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8005D238:
    // 8005D238: slw   r27, r0, r23
    {
        u32 sh = ctx->gpr[23] & 0x3Fu;
        ctx->gpr[27] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8005D23C:
    // 8005D23C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8005D240:
    // 8005D240: b       0x8005D358
    {
            goto label_8005D358;
    }

label_8005D244:
    ctx->downcount -= 2;
    // 8005D244: cmpwi   r23, 0
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

label_8005D248:
    // 8005D248: bc    4, 2, 0x8005D2A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005D2A0;
        }
    }

label_8005D24C:
    ctx->downcount -= 3;
    // 8005D24C: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_8005D250:
    // 8005D250: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8005D254:
    // 8005D254: b       0x8005D298
    {
            goto label_8005D298;
    }

label_8005D258:
    ctx->pc = 0x8005D258u;
    ctx->downcount -= 3;
    // 8005D258: lwz     r3, 20(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D25C:
    // 8005D25C: addi    r4, r15, 4
    ctx->gpr[4] = ctx->gpr[15] + (u32)(s32)(4);

label_8005D260:
    // 8005D260: bl      0x80057368
    {
            ctx->lr = 0x8005D264u;
            ctx->pc = 0x80057368u;
            return;
    }

label_8005D264:
    ctx->downcount -= 2;
    // 8005D264: cmpwi   r3, -1
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

label_8005D268:
    // 8005D268: bc    12, 2, 0x8005D374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D374;
        }
    }

label_8005D26C:
    ctx->pc = 0x8005D26Cu;
    ctx->downcount -= 9;
    // 8005D26C: lwz     r4, 32(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005D270:
    // 8005D270: rlwinm r3, r3, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8005D274:
    ctx->pc = 0x8005D274u;
    // 8005D274: lwzx    r0, r18, r24
    {
        u32 ea = ctx->gpr[18] + ctx->gpr[24];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D278:
    ctx->pc = 0x8005D278u;
    // 8005D278: lwzx    r3, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D27C:
    ctx->pc = 0x8005D27Cu;
    // 8005D27C: stwx    r3, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005D280:
    ctx->pc = 0x8005D280u;
    // 8005D280: lwzx    r0, r18, r24
    {
        u32 ea = ctx->gpr[18] + ctx->gpr[24];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D284:
    ctx->pc = 0x8005D284u;
    // 8005D284: lwzx    r0, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D288:
    // 8005D288: cmplwi  r0, 0x0000
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

label_8005D28C:
    // 8005D28C: bc    12, 2, 0x8005D374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D374;
        }
    }

label_8005D290:
    ctx->downcount -= 2;
    // 8005D290: addi    r14, r14, 1
    ctx->gpr[14] = ctx->gpr[14] + (u32)(s32)(1);

label_8005D294:
    // 8005D294: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_8005D298:
    ctx->downcount -= 2;
    // 8005D298: cmpw    r14, r17
    {
        s32 val_a = (s32)(ctx->gpr[14]);
        s32 val_b = (s32)(ctx->gpr[17]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D29C:
    // 8005D29C: bc    12, 0, 0x8005D258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D258u;
                return;
            }
            goto label_8005D258;
        }
    }

label_8005D2A0:
    ctx->downcount -= 3;
    // 8005D2A0: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8005D2A4:
    // 8005D2A4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8005D2A8:
    // 8005D2A8: b       0x8005D344
    {
            goto label_8005D344;
    }

label_8005D2AC:
    ctx->downcount -= 8;
    // 8005D2AC: mullw   r14, r25, r21
    {
        s64 product = (s64)(s32)ctx->gpr[25] * (s64)(s32)ctx->gpr[21];
        ctx->gpr[14] = (u32)product;
    }

label_8005D2B0:
    // 8005D2B0: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_8005D2B4:
    // 8005D2B4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005D2B8:
    // 8005D2B8: b       0x8005D330
    {
            goto label_8005D330;
    }

label_8005D2BC:
    ctx->pc = 0x8005D2BCu;
    ctx->downcount -= 10;
    // 8005D2BC: lwzx    r0, r18, r28
    {
        u32 ea = ctx->gpr[18] + ctx->gpr[28];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D2C0:
    ctx->pc = 0x8005D2C0u;
    // 8005D2C0: lwz     r4, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005D2C4:
    ctx->pc = 0x8005D2C4u;
    // 8005D2C4: lwzx    r3, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D2C8:
    // 8005D2C8: add   r0, r4, r14
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[14];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005D2CC:
    ctx->pc = 0x8005D2CCu;
    // 8005D2CC: lwzx    r3, r29, r3
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D2D0:
    // 8005D2D0: rlwinm r4, r3, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8005D2D4:
    // 8005D2D4: addi    r3, r4, 20
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(20);

label_8005D2D8:
    ctx->pc = 0x8005D2D8u;
    // 8005D2D8: lwzx    r3, r22, r3
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D2DC:
    // 8005D2DC: and.   r3, r3, r27
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[27];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8005D2E0:
    // 8005D2E0: bc    12, 2, 0x8005D328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D328;
        }
    }

label_8005D2E4:
    ctx->pc = 0x8005D2E4u;
    ctx->downcount -= 5;
    // 8005D2E4: lwz     r3, 24(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D2E8:
    ctx->pc = 0x8005D2E8u;
    // 8005D2E8: lwzx    r3, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D2EC:
    ctx->pc = 0x8005D2ECu;
    // 8005D2EC: lwzx    r3, r31, r3
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D2F0:
    // 8005D2F0: cmplwi  r3, 0x0000
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

label_8005D2F4:
    // 8005D2F4: bc    12, 2, 0x8005D328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D328;
        }
    }

label_8005D2F8:
    ctx->pc = 0x8005D2F8u;
    ctx->downcount -= 11;
    // 8005D2F8: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005D2FC:
    // 8005D2FC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005D300:
    ctx->pc = 0x8005D300u;
    // 8005D300: lwz     r12, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8005D304:
    // 8005D304: or   r6, r21, r21
    {
        ctx->gpr[6] = ctx->gpr[21] | ctx->gpr[21];
    }

label_8005D308:
    ctx->pc = 0x8005D308u;
    // 8005D308: lwzx    r4, r4, r28
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[28];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8005D30C:
    // 8005D30C: addi    r5, r15, 4
    ctx->gpr[5] = ctx->gpr[15] + (u32)(s32)(4);

label_8005D310:
    // 8005D310: li      r7, -8
    ctx->gpr[7] = (u32)(s32)(-8);

label_8005D314:
    // 8005D314: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8005D318:
    ctx->pc = 0x8005D318u;
    // 8005D318: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8005D31C:
    ctx->pc = 0x8005D31Cu;
    // 8005D31C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8005D320u;
            ctx->pc = target;
            return;
        }
    }

label_8005D320:
    ctx->downcount -= 2;
    // 8005D320: cmpwi   r3, -1
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

label_8005D324:
    // 8005D324: bc    12, 2, 0x8005D374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D374;
        }
    }

label_8005D328:
    ctx->downcount -= 2;
    // 8005D328: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_8005D32C:
    // 8005D32C: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_8005D330:
    ctx->downcount -= 2;
    // 8005D330: cmpw    r26, r17
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[17]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D334:
    // 8005D334: bc    12, 0, 0x8005D2BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D2BCu;
                return;
            }
            goto label_8005D2BC;
        }
    }

label_8005D338:
    ctx->downcount -= 3;
    // 8005D338: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_8005D33C:
    // 8005D33C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_8005D340:
    // 8005D340: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8005D344:
    ctx->downcount -= 2;
    // 8005D344: cmpw    r24, r20
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[20]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D348:
    // 8005D348: bc    4, 0, 0x8005D354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005D354;
        }
    }

label_8005D34C:
    ctx->downcount -= 2;
    // 8005D34C: cmpw    r25, r19
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[19]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D350:
    // 8005D350: bc    12, 0, 0x8005D2AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D2ACu;
                return;
            }
            goto label_8005D2AC;
        }
    }

label_8005D354:
    ctx->downcount -= 1;
    // 8005D354: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_8005D358:
    ctx->downcount -= 2;
    // 8005D358: cmpw    r25, r19
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[19]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D35C:
    // 8005D35C: bc    12, 0, 0x8005D244
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D244u;
                return;
            }
            goto label_8005D244;
        }
    }

label_8005D360:
    ctx->downcount -= 2;
    // 8005D360: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_8005D364:
    // 8005D364: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8005D368:
    ctx->pc = 0x8005D368u;
    ctx->downcount -= 3;
    // 8005D368: lwz     r0, 12(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D36C:
    // 8005D36C: cmpw    r23, r0
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

label_8005D370:
    // 8005D370: bc    12, 0, 0x8005D230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D230u;
                return;
            }
            goto label_8005D230;
        }
    }

label_8005D374:
    ctx->pc = 0x8005D374u;
    ctx->downcount -= 2;
    // 8005D374: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_8005D378:
    ctx->pc = 0x8005D378u;
    // 8005D378: bl      0x8005604C
    {
            ctx->lr = 0x8005D37Cu;
            ctx->pc = 0x8005604Cu;
            return;
    }

label_8005D37C:
    ctx->pc = 0x8005D37Cu;
    ctx->downcount -= 17;
    // 8005D37C: lmw     r14, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005D380:
    ctx->pc = 0x8005D380u;
    // 8005D380: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8005D384:
    ctx->pc = 0x8005D384u;
    // 8005D384: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D388:
    ctx->pc = 0x8005D388u;
    // 8005D388: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8005D38C:
    ctx->pc = 0x8005D38Cu;
    // 8005D38C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_8005D390:
    ctx->pc = 0x8005D390u;
    // 8005D390: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_800595E0;
        }
    }

label_8005D394:
    ctx->pc = 0x8005D394u;
    ctx->downcount -= 25;
    // 8005D394: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8005D398:
    ctx->pc = 0x8005D398u;
    // 8005D398: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8005D39C:
    ctx->pc = 0x8005D39Cu;
    // 8005D39C: lis     r6, -32762
    ctx->gpr[6] = ((u32)(s32)(-32762) << 16);

label_8005D3A0:
    ctx->pc = 0x8005D3A0u;
    // 8005D3A0: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005D3A4:
    ctx->pc = 0x8005D3A4u;
    // 8005D3A4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D3A8:
    ctx->pc = 0x8005D3A8u;
    // 8005D3A8: addi    r0, r6, 17696
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(17696);

label_8005D3AC:
    ctx->pc = 0x8005D3ACu;
    // 8005D3AC: li      r6, 126
    ctx->gpr[6] = (u32)(s32)(126);

label_8005D3B0:
    ctx->pc = 0x8005D3B0u;
    // 8005D3B0: stmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8005D3B4:
    ctx->pc = 0x8005D3B4u;
    // 8005D3B4: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005D3B8:
    ctx->pc = 0x8005D3B8u;
    // 8005D3B8: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8005D3BC:
    ctx->pc = 0x8005D3BCu;
    // 8005D3BC: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8005D3C0:
    ctx->pc = 0x8005D3C0u;
    // 8005D3C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8005D3C4:
    ctx->pc = 0x8005D3C4u;
    // 8005D3C4: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8005D3C8:
    ctx->pc = 0x8005D3C8u;
    // 8005D3C8: li      r4, 36
    ctx->gpr[4] = (u32)(s32)(36);

label_8005D3CC:
    ctx->pc = 0x8005D3CCu;
    // 8005D3CC: bl      0x80055D58
    {
            ctx->lr = 0x8005D3D0u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005D3D0:
    ctx->pc = 0x8005D3D0u;
    ctx->downcount -= 28;
    // 8005D3D0: lwz     r5, 4(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005D3D4:
    ctx->pc = 0x8005D3D4u;
    // 8005D3D4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8005D3D8:
    ctx->pc = 0x8005D3D8u;
    // 8005D3D8: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005D3DC:
    ctx->pc = 0x8005D3DCu;
    // 8005D3DC: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_8005D3E0:
    ctx->pc = 0x8005D3E0u;
    // 8005D3E0: lwz     r29, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8005D3E4:
    ctx->pc = 0x8005D3E4u;
    // 8005D3E4: addi    r5, r4, 17696
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(17696);

label_8005D3E8:
    ctx->pc = 0x8005D3E8u;
    // 8005D3E8: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_8005D3EC:
    ctx->pc = 0x8005D3ECu;
    // 8005D3EC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005D3F0:
    ctx->pc = 0x8005D3F0u;
    // 8005D3F0: stw     r25, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_8005D3F4:
    ctx->pc = 0x8005D3F4u;
    // 8005D3F4: li      r6, 140
    ctx->gpr[6] = (u32)(s32)(140);

label_8005D3F8:
    ctx->pc = 0x8005D3F8u;
    // 8005D3F8: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005D3FC:
    ctx->pc = 0x8005D3FCu;
    // 8005D3FC: lwz     r0, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D400:
    ctx->pc = 0x8005D400u;
    // 8005D400: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D404:
    ctx->pc = 0x8005D404u;
    // 8005D404: lwz     r0, 12(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D408:
    ctx->pc = 0x8005D408u;
    // 8005D408: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D40C:
    ctx->pc = 0x8005D40Cu;
    // 8005D40C: lwz     r0, 3104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D410:
    ctx->pc = 0x8005D410u;
    // 8005D410: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D414:
    ctx->pc = 0x8005D414u;
    // 8005D414: lwz     r0, 16(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D418:
    ctx->pc = 0x8005D418u;
    // 8005D418: lwz     r3, 3104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D41C:
    ctx->pc = 0x8005D41Cu;
    // 8005D41C: mulli   r0, r0, 52
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)52);

label_8005D420:
    ctx->pc = 0x8005D420u;
    // 8005D420: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005D424:
    ctx->pc = 0x8005D424u;
    // 8005D424: stw     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D428:
    ctx->pc = 0x8005D428u;
    // 8005D428: lwz     r8, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_8005D42C:
    ctx->pc = 0x8005D42Cu;
    // 8005D42C: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D430:
    ctx->pc = 0x8005D430u;
    // 8005D430: lwz     r27, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_8005D434:
    ctx->pc = 0x8005D434u;
    // 8005D434: bl      0x80055D58
    {
            ctx->lr = 0x8005D438u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005D438:
    ctx->pc = 0x8005D438u;
    ctx->downcount -= 4;
    // 8005D438: stw     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005D43C:
    ctx->pc = 0x8005D43Cu;
    // 8005D43C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8005D440:
    ctx->pc = 0x8005D440u;
    // 8005D440: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8005D444:
    ctx->pc = 0x8005D444u;
    // 8005D444: b       0x8005D4EC
    {
            goto label_8005D4EC;
    }

label_8005D448:
    ctx->downcount -= 3;
    // 8005D448: addi    r31, r24, 20
    ctx->gpr[31] = ctx->gpr[24] + (u32)(s32)(20);

label_8005D44C:
    ctx->pc = 0x8005D44Cu;
    // 8005D44C: lwzx    r3, r25, r31
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D450:
    // 8005D450: bl      0x8005D7A4
    {
            ctx->lr = 0x8005D454u;
            ctx->pc = 0x8005D7A4u;
            return;
    }

label_8005D454:
    ctx->downcount -= 2;
    // 8005D454: or.   r22, r3, r3
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

label_8005D458:
    // 8005D458: bc    12, 2, 0x8005D4E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D4E4;
        }
    }

label_8005D45C:
    ctx->downcount -= 2;
    // 8005D45C: cmpw    r22, r26
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D460:
    // 8005D460: bc    4, 1, 0x8005D468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005D468;
        }
    }

label_8005D464:
    ctx->downcount -= 1;
    // 8005D464: or   r26, r22, r22
    {
        ctx->gpr[26] = ctx->gpr[22] | ctx->gpr[22];
    }

label_8005D468:
    ctx->downcount -= 7;
    // 8005D468: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005D46C:
    // 8005D46C: or   r3, r22, r22
    {
        ctx->gpr[3] = ctx->gpr[22] | ctx->gpr[22];
    }

label_8005D470:
    // 8005D470: addi    r5, r4, 17696
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(17696);

label_8005D474:
    // 8005D474: li      r6, 146
    ctx->gpr[6] = (u32)(s32)(146);

label_8005D478:
    // 8005D478: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8005D47C:
    // 8005D47C: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_8005D480:
    // 8005D480: bl      0x80055D58
    {
            ctx->lr = 0x8005D484u;
            ctx->pc = 0x80055D58u;
            return;
    }

label_8005D484:
    ctx->pc = 0x8005D484u;
    ctx->downcount -= 9;
    // 8005D484: lwz     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005D488:
    // 8005D488: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8005D48C:
    // 8005D48C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005D490:
    // 8005D490: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8005D494:
    ctx->pc = 0x8005D494u;
    // 8005D494: stwx    r3, r5, r24
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[24];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005D498:
    ctx->pc = 0x8005D498u;
    // 8005D498: mtctr    r22
    ctx->ctr = ctx->gpr[22];

label_8005D49C:
    // 8005D49C: cmpwi   r22, 0
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

label_8005D4A0:
    // 8005D4A0: bc    4, 1, 0x8005D4E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005D4E4;
        }
    }

label_8005D4A4:
    ctx->pc = 0x8005D4A4u;
    ctx->downcount -= 4;
    // 8005D4A4: lwzx    r3, r25, r31
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[31];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D4A8:
    // 8005D4A8: slw   r0, r7, r8
    {
        u32 sh = ctx->gpr[8] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[7] << sh);
    }

label_8005D4AC:
    // 8005D4AC: and.   r0, r3, r0
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

label_8005D4B0:
    // 8005D4B0: bc    12, 2, 0x8005D4D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8005D4D8;
        }
    }

label_8005D4B4:
    ctx->downcount -= 11;
    // 8005D4B4: addi    r3, r23, 276
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(276);

label_8005D4B8:
    ctx->pc = 0x8005D4B8u;
    // 8005D4B8: lwz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D4BC:
    ctx->pc = 0x8005D4BCu;
    // 8005D4BC: lwzx    r3, r25, r3
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D4C0:
    // 8005D4C0: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_8005D4C4:
    ctx->pc = 0x8005D4C4u;
    // 8005D4C4: lwz     r6, 3104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3104);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8005D4C8:
    // 8005D4C8: mulli   r5, r3, 52
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)52);

label_8005D4CC:
    ctx->pc = 0x8005D4CCu;
    // 8005D4CC: lwzx    r3, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D4D0:
    // 8005D4D0: add   r0, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8005D4D4:
    ctx->pc = 0x8005D4D4u;
    // 8005D4D4: stwx    r0, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D4D8:
    ctx->downcount -= 3;
    // 8005D4D8: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_8005D4DC:
    // 8005D4DC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8005D4E0:
    // 8005D4E0: bc    16, 0, 0x8005D4A4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D4A4u;
                return;
            }
            goto label_8005D4A4;
        }
    }

label_8005D4E4:
    ctx->downcount -= 2;
    // 8005D4E4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8005D4E8:
    // 8005D4E8: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_8005D4EC:
    ctx->pc = 0x8005D4ECu;
    ctx->downcount -= 3;
    // 8005D4EC: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D4F0:
    // 8005D4F0: cmpw    r28, r3
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D4F4:
    // 8005D4F4: bc    12, 0, 0x8005D448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D448u;
                return;
            }
            goto label_8005D448;
        }
    }

label_8005D4F8:
    ctx->pc = 0x8005D4F8u;
    ctx->downcount -= 6;
    // 8005D4F8: addi    r0, r27, -1
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(-1);

label_8005D4FC:
    ctx->pc = 0x8005D4FCu;
    // 8005D4FC: stw     r3, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005D500:
    ctx->pc = 0x8005D500u;
    // 8005D500: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8005D504:
    ctx->pc = 0x8005D504u;
    // 8005D504: cmpwi   r27, 1
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D508:
    ctx->pc = 0x8005D508u;
    // 8005D508: bc    4, 1, 0x8005D520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005D520;
        }
    }

label_8005D50C:
    loop_8005D50C(ctx);
    if (ctx->pc == 0x8005D520u) goto label_8005D520;
    return;
label_8005D510:
    ctx->pc = 0x8005D510u;
    // 8005D510: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D514:
    // 8005D514: mullw   r0, r3, r0
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_8005D518:
    ctx->pc = 0x8005D518u;
    // 8005D518: stw     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8005D51C:
    // 8005D51C: bc    16, 0, 0x8005D50C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D50Cu;
                return;
            }
            goto label_8005D50C;
        }
    }

label_8005D520:
    ctx->pc = 0x8005D520u;
    ctx->downcount -= 8;
    // 8005D520: stw     r26, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_8005D524:
    ctx->pc = 0x8005D524u;
    // 8005D524: lis     r3, -32762
    ctx->gpr[3] = ((u32)(s32)(-32762) << 16);

label_8005D528:
    ctx->pc = 0x8005D528u;
    // 8005D528: addi    r4, r3, 17696
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(17696);

label_8005D52C:
    ctx->pc = 0x8005D52Cu;
    // 8005D52C: li      r5, 161
    ctx->gpr[5] = (u32)(s32)(161);

label_8005D530:
    ctx->pc = 0x8005D530u;
    // 8005D530: lwz     r0, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D534:
    ctx->pc = 0x8005D534u;
    // 8005D534: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_8005D538:
    ctx->pc = 0x8005D538u;
    // 8005D538: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8005D53C:
    ctx->pc = 0x8005D53Cu;
    // 8005D53C: bl      0x80055CEC
    {
            ctx->lr = 0x8005D540u;
            ctx->pc = 0x80055CECu;
            return;
    }

label_8005D540:
    ctx->pc = 0x8005D540u;
    ctx->downcount -= 7;
    // 8005D540: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8005D544:
    ctx->pc = 0x8005D544u;
    // 8005D544: stw     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005D548:
    ctx->pc = 0x8005D548u;
    // 8005D548: rlwinm r24, r27, 2, 0, 29
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[27], 2u) & 0xFFFFFFFCu;
    }

label_8005D54C:
    ctx->pc = 0x8005D54Cu;
    // 8005D54C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_8005D550:
    ctx->pc = 0x8005D550u;
    // 8005D550: addi    r23, r4, 17696
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(17696);

label_8005D554:
    ctx->pc = 0x8005D554u;
    // 8005D554: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8005D558:
    ctx->pc = 0x8005D558u;
    // 8005D558: b       0x8005D5C4
    {
            goto label_8005D5C4;
    }

label_8005D55C:
    ctx->pc = 0x8005D55Cu;
    ctx->downcount -= 47;
    // 8005D55C: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D560:
    // 8005D560: or   r22, r26, r26
    {
        ctx->gpr[22] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8005D564:
    // 8005D564: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8005D568:
    // 8005D568: or   r4, r23, r23
    {
        ctx->gpr[4] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8005D56C:
    // 8005D56C: divw   r28, r5, r0
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[28] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8005D570:
    // 8005D570: li      r5, 165
    ctx->gpr[5] = (u32)(s32)(165);

label_8005D574:
    // 8005D574: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_8005D578:
    // 8005D578: bl      0x80055CEC
    {
            ctx->lr = 0x8005D57Cu;
            ctx->pc = 0x80055CECu;
            return;
    }

label_8005D57C:
    ctx->pc = 0x8005D57Cu;
    ctx->downcount -= 7;
    // 8005D57C: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005D580:
    // 8005D580: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8005D584:
    ctx->pc = 0x8005D584u;
    // 8005D584: stwx    r3, r5, r25
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[25];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8005D588:
    ctx->pc = 0x8005D588u;
    // 8005D588: mtctr    r27
    ctx->ctr = ctx->gpr[27];

label_8005D58C:
    // 8005D58C: cmpwi   r27, 0
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

label_8005D590:
    // 8005D590: bc    4, 1, 0x8005D5BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8005D5BC;
        }
    }

label_8005D594:
    loop_8005D594(ctx);
    if (ctx->pc == 0x8005D5BCu) goto label_8005D5BC;
    return;
label_8005D598:
    ctx->pc = 0x8005D598u;
    // 8005D598: lwz     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D59C:
    ctx->pc = 0x8005D59Cu;
    // 8005D59C: lwz     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005D5A0:
    ctx->pc = 0x8005D5A0u;
    // 8005D5A0: lwzx    r3, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8005D5A4:
    // 8005D5A4: mullw   r0, r6, r28
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[28];
        ctx->gpr[0] = (u32)product;
    }

label_8005D5A8:
    ctx->pc = 0x8005D5A8u;
    // 8005D5A8: stwx    r6, r3, r4
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8005D5AC:
    // 8005D5AC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8005D5B0:
    // 8005D5B0: divw   r28, r28, r5
    {
        s32 dividend = (s32)ctx->gpr[28];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[28] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8005D5B4:
    // 8005D5B4: subf   r22, r0, r22
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[22];
        u32 res = a + b + 1u;
        ctx->gpr[22] = res;
    }

label_8005D5B8:
    // 8005D5B8: bc    16, 0, 0x8005D594
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D594u;
                return;
            }
            goto label_8005D594;
        }
    }

label_8005D5BC:
    ctx->downcount -= 2;
    // 8005D5BC: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_8005D5C0:
    // 8005D5C0: addi    r25, r25, 4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(4);

label_8005D5C4:
    ctx->pc = 0x8005D5C4u;
    ctx->downcount -= 3;
    // 8005D5C4: lwz     r5, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8005D5C8:
    // 8005D5C8: cmpw    r26, r5
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8005D5CC:
    // 8005D5CC: bc    12, 0, 0x8005D55C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8005D55Cu;
                return;
            }
            goto label_8005D55C;
        }
    }

label_8005D5D0:
    ctx->pc = 0x8005D5D0u;
    ctx->downcount -= 15;
    // 8005D5D0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8005D5D4:
    ctx->pc = 0x8005D5D4u;
    // 8005D5D4: lmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8005D5D8:
    ctx->pc = 0x8005D5D8u;
    // 8005D5D8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8005D5DC:
    ctx->pc = 0x8005D5DCu;
    // 8005D5DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

    ctx->pc = 0x8005D5E0u;
    return;
return_dispatch_800595E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x800595E4u: goto label_800595E4;
    case 0x800595FCu: goto label_800595FC;
    case 0x80059614u: goto label_80059614;
    case 0x8005964Cu: goto label_8005964C;
    case 0x80059690u: goto label_80059690;
    case 0x800596A8u: goto label_800596A8;
    case 0x800596B8u: goto label_800596B8;
    case 0x800596D0u: goto label_800596D0;
    case 0x800596ECu: goto label_800596EC;
    case 0x80059710u: goto label_80059710;
    case 0x8005976Cu: goto label_8005976C;
    case 0x80059798u: goto label_80059798;
    case 0x800597B0u: goto label_800597B0;
    case 0x800597CCu: goto label_800597CC;
    case 0x80059894u: goto label_80059894;
    case 0x800598E8u: goto label_800598E8;
    case 0x80059908u: goto label_80059908;
    case 0x80059950u: goto label_80059950;
    case 0x80059958u: goto label_80059958;
    case 0x80059968u: goto label_80059968;
    case 0x8005997Cu: goto label_8005997C;
    case 0x800599C0u: goto label_800599C0;
    case 0x800599D0u: goto label_800599D0;
    case 0x800599D4u: goto label_800599D4;
    case 0x80059A0Cu: goto label_80059A0C;
    case 0x80059A18u: goto label_80059A18;
    case 0x80059A44u: goto label_80059A44;
    case 0x80059A50u: goto label_80059A50;
    case 0x80059A7Cu: goto label_80059A7C;
    case 0x80059A88u: goto label_80059A88;
    case 0x80059AB4u: goto label_80059AB4;
    case 0x80059AC0u: goto label_80059AC0;
    case 0x80059AF0u: goto label_80059AF0;
    case 0x80059AFCu: goto label_80059AFC;
    case 0x80059B2Cu: goto label_80059B2C;
    case 0x80059B38u: goto label_80059B38;
    case 0x80059B68u: goto label_80059B68;
    case 0x80059B74u: goto label_80059B74;
    case 0x80059BA4u: goto label_80059BA4;
    case 0x80059BB8u: goto label_80059BB8;
    case 0x80059BECu: goto label_80059BEC;
    case 0x80059C60u: goto label_80059C60;
    case 0x80059C6Cu: goto label_80059C6C;
    case 0x80059C8Cu: goto label_80059C8C;
    case 0x80059CB4u: goto label_80059CB4;
    case 0x80059CDCu: goto label_80059CDC;
    case 0x80059D28u: goto label_80059D28;
    case 0x80059D34u: goto label_80059D34;
    case 0x80059D7Cu: goto label_80059D7C;
    case 0x80059D8Cu: goto label_80059D8C;
    case 0x80059DE8u: goto label_80059DE8;
    case 0x80059F2Cu: goto label_80059F2C;
    case 0x80059F88u: goto label_80059F88;
    case 0x80059FF0u: goto label_80059FF0;
    case 0x8005A074u: goto label_8005A074;
    case 0x8005A130u: goto label_8005A130;
    case 0x8005A168u: goto label_8005A168;
    case 0x8005A1D4u: goto label_8005A1D4;
    case 0x8005A218u: goto label_8005A218;
    case 0x8005A284u: goto label_8005A284;
    case 0x8005A2F4u: goto label_8005A2F4;
    case 0x8005A32Cu: goto label_8005A32C;
    case 0x8005A39Cu: goto label_8005A39C;
    case 0x8005A3D0u: goto label_8005A3D0;
    case 0x8005A3DCu: goto label_8005A3DC;
    case 0x8005A43Cu: goto label_8005A43C;
    case 0x8005A4C0u: goto label_8005A4C0;
    case 0x8005A4E4u: goto label_8005A4E4;
    case 0x8005A50Cu: goto label_8005A50C;
    case 0x8005A550u: goto label_8005A550;
    case 0x8005A5A4u: goto label_8005A5A4;
    case 0x8005A5D4u: goto label_8005A5D4;
    case 0x8005A5E4u: goto label_8005A5E4;
    case 0x8005A614u: goto label_8005A614;
    case 0x8005A660u: goto label_8005A660;
    case 0x8005A69Cu: goto label_8005A69C;
    case 0x8005A6A8u: goto label_8005A6A8;
    case 0x8005A6BCu: goto label_8005A6BC;
    case 0x8005A6CCu: goto label_8005A6CC;
    case 0x8005A6E0u: goto label_8005A6E0;
    case 0x8005A748u: goto label_8005A748;
    case 0x8005A76Cu: goto label_8005A76C;
    case 0x8005A79Cu: goto label_8005A79C;
    case 0x8005A7F8u: goto label_8005A7F8;
    case 0x8005A82Cu: goto label_8005A82C;
    case 0x8005A840u: goto label_8005A840;
    case 0x8005A868u: goto label_8005A868;
    case 0x8005A888u: goto label_8005A888;
    case 0x8005A8C4u: goto label_8005A8C4;
    case 0x8005A8ECu: goto label_8005A8EC;
    case 0x8005A924u: goto label_8005A924;
    case 0x8005A954u: goto label_8005A954;
    case 0x8005A97Cu: goto label_8005A97C;
    case 0x8005A9B4u: goto label_8005A9B4;
    case 0x8005A9E4u: goto label_8005A9E4;
    case 0x8005AA0Cu: goto label_8005AA0C;
    case 0x8005AA44u: goto label_8005AA44;
    case 0x8005AA74u: goto label_8005AA74;
    case 0x8005AAA8u: goto label_8005AAA8;
    case 0x8005AABCu: goto label_8005AABC;
    case 0x8005AAD0u: goto label_8005AAD0;
    case 0x8005AAE4u: goto label_8005AAE4;
    case 0x8005AAF8u: goto label_8005AAF8;
    case 0x8005AB4Cu: goto label_8005AB4C;
    case 0x8005AB64u: goto label_8005AB64;
    case 0x8005ABA0u: goto label_8005ABA0;
    case 0x8005ABC4u: goto label_8005ABC4;
    case 0x8005ABD8u: goto label_8005ABD8;
    case 0x8005ABE4u: goto label_8005ABE4;
    case 0x8005AC10u: goto label_8005AC10;
    case 0x8005AC34u: goto label_8005AC34;
    case 0x8005AC58u: goto label_8005AC58;
    case 0x8005AC80u: goto label_8005AC80;
    case 0x8005AC9Cu: goto label_8005AC9C;
    case 0x8005ACBCu: goto label_8005ACBC;
    case 0x8005ACD4u: goto label_8005ACD4;
    case 0x8005AD24u: goto label_8005AD24;
    case 0x8005AD48u: goto label_8005AD48;
    case 0x8005AD58u: goto label_8005AD58;
    case 0x8005AD68u: goto label_8005AD68;
    case 0x8005AD78u: goto label_8005AD78;
    case 0x8005AD88u: goto label_8005AD88;
    case 0x8005AD98u: goto label_8005AD98;
    case 0x8005ADB0u: goto label_8005ADB0;
    case 0x8005AE00u: goto label_8005AE00;
    case 0x8005AE18u: goto label_8005AE18;
    case 0x8005AE80u: goto label_8005AE80;
    case 0x8005AEC8u: goto label_8005AEC8;
    case 0x8005AF10u: goto label_8005AF10;
    case 0x8005AF58u: goto label_8005AF58;
    case 0x8005AF90u: goto label_8005AF90;
    case 0x8005AFA4u: goto label_8005AFA4;
    case 0x8005AFD8u: goto label_8005AFD8;
    case 0x8005AFECu: goto label_8005AFEC;
    case 0x8005AFFCu: goto label_8005AFFC;
    case 0x8005B030u: goto label_8005B030;
    case 0x8005B04Cu: goto label_8005B04C;
    case 0x8005B0ACu: goto label_8005B0AC;
    case 0x8005B0DCu: goto label_8005B0DC;
    case 0x8005B0F8u: goto label_8005B0F8;
    case 0x8005B114u: goto label_8005B114;
    case 0x8005B124u: goto label_8005B124;
    case 0x8005B150u: goto label_8005B150;
    case 0x8005B18Cu: goto label_8005B18C;
    case 0x8005B200u: goto label_8005B200;
    case 0x8005B210u: goto label_8005B210;
    case 0x8005B220u: goto label_8005B220;
    case 0x8005B230u: goto label_8005B230;
    case 0x8005B270u: goto label_8005B270;
    case 0x8005B2A8u: goto label_8005B2A8;
    case 0x8005B3BCu: goto label_8005B3BC;
    case 0x8005B4D0u: goto label_8005B4D0;
    case 0x8005B508u: goto label_8005B508;
    case 0x8005B554u: goto label_8005B554;
    case 0x8005B5A4u: goto label_8005B5A4;
    case 0x8005B5F0u: goto label_8005B5F0;
    case 0x8005B604u: goto label_8005B604;
    case 0x8005B610u: goto label_8005B610;
    case 0x8005B624u: goto label_8005B624;
    case 0x8005B644u: goto label_8005B644;
    case 0x8005B658u: goto label_8005B658;
    case 0x8005B674u: goto label_8005B674;
    case 0x8005B680u: goto label_8005B680;
    case 0x8005B694u: goto label_8005B694;
    case 0x8005B6A0u: goto label_8005B6A0;
    case 0x8005B6F0u: goto label_8005B6F0;
    case 0x8005B71Cu: goto label_8005B71C;
    case 0x8005B760u: goto label_8005B760;
    case 0x8005B778u: goto label_8005B778;
    case 0x8005B79Cu: goto label_8005B79C;
    case 0x8005B7D4u: goto label_8005B7D4;
    case 0x8005B85Cu: goto label_8005B85C;
    case 0x8005B884u: goto label_8005B884;
    case 0x8005B8A4u: goto label_8005B8A4;
    case 0x8005B8C4u: goto label_8005B8C4;
    case 0x8005B8E4u: goto label_8005B8E4;
    case 0x8005B94Cu: goto label_8005B94C;
    case 0x8005B990u: goto label_8005B990;
    case 0x8005BA0Cu: goto label_8005BA0C;
    case 0x8005BA28u: goto label_8005BA28;
    case 0x8005BA54u: goto label_8005BA54;
    case 0x8005BA68u: goto label_8005BA68;
    case 0x8005BA7Cu: goto label_8005BA7C;
    case 0x8005BA90u: goto label_8005BA90;
    case 0x8005BAA0u: goto label_8005BAA0;
    case 0x8005BAB4u: goto label_8005BAB4;
    case 0x8005BAECu: goto label_8005BAEC;
    case 0x8005BB00u: goto label_8005BB00;
    case 0x8005BBACu: goto label_8005BBAC;
    case 0x8005BBCCu: goto label_8005BBCC;
    case 0x8005BBFCu: goto label_8005BBFC;
    case 0x8005BC1Cu: goto label_8005BC1C;
    case 0x8005BC5Cu: goto label_8005BC5C;
    case 0x8005BC7Cu: goto label_8005BC7C;
    case 0x8005BCACu: goto label_8005BCAC;
    case 0x8005BCCCu: goto label_8005BCCC;
    case 0x8005BCECu: goto label_8005BCEC;
    case 0x8005BD00u: goto label_8005BD00;
    case 0x8005BD68u: goto label_8005BD68;
    case 0x8005BD8Cu: goto label_8005BD8C;
    case 0x8005BDB0u: goto label_8005BDB0;
    case 0x8005BDD4u: goto label_8005BDD4;
    case 0x8005BE54u: goto label_8005BE54;
    case 0x8005BE90u: goto label_8005BE90;
    case 0x8005BECCu: goto label_8005BECC;
    case 0x8005BF08u: goto label_8005BF08;
    case 0x8005BF7Cu: goto label_8005BF7C;
    case 0x8005BF9Cu: goto label_8005BF9C;
    case 0x8005BFD8u: goto label_8005BFD8;
    case 0x8005BFF8u: goto label_8005BFF8;
    case 0x8005C0D8u: goto label_8005C0D8;
    case 0x8005C0E8u: goto label_8005C0E8;
    case 0x8005C0FCu: goto label_8005C0FC;
    case 0x8005C10Cu: goto label_8005C10C;
    case 0x8005C168u: goto label_8005C168;
    case 0x8005C178u: goto label_8005C178;
    case 0x8005C18Cu: goto label_8005C18C;
    case 0x8005C19Cu: goto label_8005C19C;
    case 0x8005C220u: goto label_8005C220;
    case 0x8005C270u: goto label_8005C270;
    case 0x8005C2D4u: goto label_8005C2D4;
    case 0x8005C324u: goto label_8005C324;
    case 0x8005C390u: goto label_8005C390;
    case 0x8005C3E4u: goto label_8005C3E4;
    case 0x8005C444u: goto label_8005C444;
    case 0x8005C498u: goto label_8005C498;
    case 0x8005C53Cu: goto label_8005C53C;
    case 0x8005C54Cu: goto label_8005C54C;
    case 0x8005C560u: goto label_8005C560;
    case 0x8005C570u: goto label_8005C570;
    case 0x8005C62Cu: goto label_8005C62C;
    case 0x8005C658u: goto label_8005C658;
    case 0x8005C6F8u: goto label_8005C6F8;
    case 0x8005C738u: goto label_8005C738;
    case 0x8005C778u: goto label_8005C778;
    case 0x8005C7B8u: goto label_8005C7B8;
    case 0x8005C810u: goto label_8005C810;
    case 0x8005C850u: goto label_8005C850;
    case 0x8005C890u: goto label_8005C890;
    case 0x8005C8D0u: goto label_8005C8D0;
    case 0x8005C920u: goto label_8005C920;
    case 0x8005C960u: goto label_8005C960;
    case 0x8005C9A0u: goto label_8005C9A0;
    case 0x8005C9E0u: goto label_8005C9E0;
    case 0x8005CA38u: goto label_8005CA38;
    case 0x8005CA78u: goto label_8005CA78;
    case 0x8005CAB8u: goto label_8005CAB8;
    case 0x8005CAF8u: goto label_8005CAF8;
    case 0x8005CBA0u: goto label_8005CBA0;
    case 0x8005CBD4u: goto label_8005CBD4;
    case 0x8005CBE4u: goto label_8005CBE4;
    case 0x8005CC24u: goto label_8005CC24;
    case 0x8005CC90u: goto label_8005CC90;
    case 0x8005CCC4u: goto label_8005CCC4;
    case 0x8005CCD4u: goto label_8005CCD4;
    case 0x8005CD14u: goto label_8005CD14;
    case 0x8005CD1Cu: goto label_8005CD1C;
    case 0x8005CD24u: goto label_8005CD24;
    case 0x8005CD80u: goto label_8005CD80;
    case 0x8005CD90u: goto label_8005CD90;
    case 0x8005CDF8u: goto label_8005CDF8;
    case 0x8005CE08u: goto label_8005CE08;
    case 0x8005CE44u: goto label_8005CE44;
    case 0x8005CE4Cu: goto label_8005CE4C;
    case 0x8005CF4Cu: goto label_8005CF4C;
    case 0x8005CFCCu: goto label_8005CFCC;
    case 0x8005D04Cu: goto label_8005D04C;
    case 0x8005D108u: goto label_8005D108;
    case 0x8005D180u: goto label_8005D180;
    case 0x8005D1E4u: goto label_8005D1E4;
    case 0x8005D210u: goto label_8005D210;
    case 0x8005D264u: goto label_8005D264;
    case 0x8005D320u: goto label_8005D320;
    case 0x8005D37Cu: goto label_8005D37C;
    case 0x8005D3D0u: goto label_8005D3D0;
    case 0x8005D438u: goto label_8005D438;
    case 0x8005D454u: goto label_8005D454;
    case 0x8005D484u: goto label_8005D484;
    case 0x8005D540u: goto label_8005D540;
    case 0x8005D57Cu: goto label_8005D57C;
    default: return;
    }
}

