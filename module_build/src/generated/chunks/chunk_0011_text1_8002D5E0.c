// DolRecomp output
#include "../generated.h"

static void loop_8002FFE4(CPUState* ctx) {
label_8002FFE4:
    ctx->downcount -= 3;
    ctx->pc = 0x8002FFE4u;
    // 8002FFE4: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8002FFE8: cmplw   r3, r0
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

    // 8002FFEC: bc    12, 2, 0x8002FFE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002FFE4u;
                return;
            }
            goto label_8002FFE4;
        }
    }

    ctx->pc = 0x8002FFF0u;
}

static void loop_80030028(CPUState* ctx) {
label_80030028:
    ctx->downcount -= 3;
    ctx->pc = 0x80030028u;
    // 80030028: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8003002C: cmplw   r3, r0
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

    // 80030030: bc    12, 2, 0x80030028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030028u;
                return;
            }
            goto label_80030028;
        }
    }

    ctx->pc = 0x80030034u;
}

static void loop_800304B8(CPUState* ctx) {
label_800304B8:
    ctx->downcount -= 3;
    ctx->pc = 0x800304B8u;
    // 800304B8: lhz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 800304BC: rlwinm. r0, r0, 0, 31, 31
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

    // 800304C0: bc    12, 2, 0x800304B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800304B8u;
                return;
            }
            goto label_800304B8;
        }
    }

    ctx->pc = 0x800304C4u;
}

static void loop_80030674(CPUState* ctx) {
label_80030674:
    ctx->downcount -= 4;
    // 80030674: addi    r31, r23, 20480
    ctx->gpr[31] = ctx->gpr[23] + (u32)(s32)(20480);

    ctx->pc = 0x80030678u;
    // 80030678: lhzu     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read16(ctx, ea);
        ctx->gpr[31] = ea;
    }

    // 8003067C: rlwinm. r0, r0, 0, 22, 22
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

    // 80030680: bc    4, 2, 0x80030674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030674u;
                return;
            }
            goto label_80030674;
        }
    }

    ctx->pc = 0x80030684u;
}

static void loop_80030720(CPUState* ctx) {
label_80030720:
    ctx->downcount -= 3;
    ctx->pc = 0x80030720u;
    // 80030720: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80030724: rlwinm. r0, r0, 0, 22, 22
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

    // 80030728: bc    4, 2, 0x80030720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030720u;
                return;
            }
            goto label_80030720;
        }
    }

    ctx->pc = 0x8003072Cu;
}

static void loop_800307E0(CPUState* ctx) {
label_800307E0:
    ctx->downcount -= 3;
    ctx->pc = 0x800307E0u;
    // 800307E0: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 800307E4: rlwinm. r0, r0, 0, 22, 22
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

    // 800307E8: bc    4, 2, 0x800307E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800307E0u;
                return;
            }
            goto label_800307E0;
        }
    }

    ctx->pc = 0x800307ECu;
}

static void loop_800308B0(CPUState* ctx) {
label_800308B0:
    ctx->downcount -= 3;
    ctx->pc = 0x800308B0u;
    // 800308B0: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 800308B4: rlwinm. r0, r0, 0, 22, 22
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

    // 800308B8: bc    4, 2, 0x800308B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800308B0u;
                return;
            }
            goto label_800308B0;
        }
    }

    ctx->pc = 0x800308BCu;
}

static void loop_80030978(CPUState* ctx) {
label_80030978:
    ctx->downcount -= 3;
    ctx->pc = 0x80030978u;
    // 80030978: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 8003097C: rlwinm. r0, r0, 0, 22, 22
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

    // 80030980: bc    4, 2, 0x80030978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030978u;
                return;
            }
            goto label_80030978;
        }
    }

    ctx->pc = 0x80030984u;
}

static void loop_80030A50(CPUState* ctx) {
label_80030A50:
    ctx->downcount -= 3;
    ctx->pc = 0x80030A50u;
    // 80030A50: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80030A54: rlwinm. r0, r0, 0, 22, 22
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

    // 80030A58: bc    4, 2, 0x80030A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030A50u;
                return;
            }
            goto label_80030A50;
        }
    }

    ctx->pc = 0x80030A5Cu;
}

static void loop_80030B28(CPUState* ctx) {
label_80030B28:
    ctx->downcount -= 3;
    ctx->pc = 0x80030B28u;
    // 80030B28: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80030B2C: rlwinm. r0, r0, 0, 22, 22
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

    // 80030B30: bc    4, 2, 0x80030B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030B28u;
                return;
            }
            goto label_80030B28;
        }
    }

    ctx->pc = 0x80030B34u;
}

static void loop_80030BC8(CPUState* ctx) {
label_80030BC8:
    ctx->downcount -= 3;
    ctx->pc = 0x80030BC8u;
    // 80030BC8: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80030BCC: rlwinm. r0, r0, 0, 22, 22
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

    // 80030BD0: bc    4, 2, 0x80030BC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030BC8u;
                return;
            }
            goto label_80030BC8;
        }
    }

    ctx->pc = 0x80030BD4u;
}

static void loop_80030C5C(CPUState* ctx) {
label_80030C5C:
    ctx->downcount -= 3;
    ctx->pc = 0x80030C5Cu;
    // 80030C5C: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80030C60: rlwinm. r0, r0, 0, 22, 22
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

    // 80030C64: bc    4, 2, 0x80030C5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030C5Cu;
                return;
            }
            goto label_80030C5C;
        }
    }

    ctx->pc = 0x80030C68u;
}

static void loop_80030D0C(CPUState* ctx) {
label_80030D0C:
    ctx->downcount -= 3;
    ctx->pc = 0x80030D0Cu;
    // 80030D0C: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80030D10: rlwinm. r0, r0, 0, 22, 22
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

    // 80030D14: bc    4, 2, 0x80030D0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030D0Cu;
                return;
            }
            goto label_80030D0C;
        }
    }

    ctx->pc = 0x80030D18u;
}

static void loop_80030DB4(CPUState* ctx) {
label_80030DB4:
    ctx->downcount -= 3;
    ctx->pc = 0x80030DB4u;
    // 80030DB4: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80030DB8: rlwinm. r0, r0, 0, 22, 22
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

    // 80030DBC: bc    4, 2, 0x80030DB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030DB4u;
                return;
            }
            goto label_80030DB4;
        }
    }

    ctx->pc = 0x80030DC0u;
}

static void loop_80030E54(CPUState* ctx) {
label_80030E54:
    ctx->downcount -= 3;
    ctx->pc = 0x80030E54u;
    // 80030E54: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80030E58: rlwinm. r0, r0, 0, 22, 22
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

    // 80030E5C: bc    4, 2, 0x80030E54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030E54u;
                return;
            }
            goto label_80030E54;
        }
    }

    ctx->pc = 0x80030E60u;
}

static void loop_80030EE8(CPUState* ctx) {
label_80030EE8:
    ctx->downcount -= 3;
    ctx->pc = 0x80030EE8u;
    // 80030EE8: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80030EEC: rlwinm. r0, r0, 0, 22, 22
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

    // 80030EF0: bc    4, 2, 0x80030EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030EE8u;
                return;
            }
            goto label_80030EE8;
        }
    }

    ctx->pc = 0x80030EF4u;
}

static void loop_80030F98(CPUState* ctx) {
label_80030F98:
    ctx->downcount -= 3;
    ctx->pc = 0x80030F98u;
    // 80030F98: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80030F9C: rlwinm. r0, r0, 0, 22, 22
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

    // 80030FA0: bc    4, 2, 0x80030F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030F98u;
                return;
            }
            goto label_80030F98;
        }
    }

    ctx->pc = 0x80030FA4u;
}

static void loop_80031040(CPUState* ctx) {
label_80031040:
    ctx->downcount -= 3;
    ctx->pc = 0x80031040u;
    // 80031040: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80031044: rlwinm. r0, r0, 0, 22, 22
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

    // 80031048: bc    4, 2, 0x80031040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80031040u;
                return;
            }
            goto label_80031040;
        }
    }

    ctx->pc = 0x8003104Cu;
}

static void loop_800310D4(CPUState* ctx) {
label_800310D4:
    ctx->downcount -= 3;
    ctx->pc = 0x800310D4u;
    // 800310D4: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 800310D8: rlwinm. r0, r0, 0, 22, 22
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

    // 800310DC: bc    4, 2, 0x800310D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800310D4u;
                return;
            }
            goto label_800310D4;
        }
    }

    ctx->pc = 0x800310E0u;
}

static void loop_80031188(CPUState* ctx) {
label_80031188:
    ctx->downcount -= 3;
    ctx->pc = 0x80031188u;
    // 80031188: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 8003118C: rlwinm. r0, r0, 0, 22, 22
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

    // 80031190: bc    4, 2, 0x80031188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80031188u;
                return;
            }
            goto label_80031188;
        }
    }

    ctx->pc = 0x80031194u;
}

static void loop_8003121C(CPUState* ctx) {
label_8003121C:
    ctx->downcount -= 3;
    ctx->pc = 0x8003121Cu;
    // 8003121C: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80031220: rlwinm. r0, r0, 0, 22, 22
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

    // 80031224: bc    4, 2, 0x8003121C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003121Cu;
                return;
            }
            goto label_8003121C;
        }
    }

    ctx->pc = 0x80031228u;
}

static void loop_800312D4(CPUState* ctx) {
label_800312D4:
    ctx->downcount -= 3;
    ctx->pc = 0x800312D4u;
    // 800312D4: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 800312D8: rlwinm. r0, r0, 0, 22, 22
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

    // 800312DC: bc    4, 2, 0x800312D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800312D4u;
                return;
            }
            goto label_800312D4;
        }
    }

    ctx->pc = 0x800312E0u;
}

static void loop_8003137C(CPUState* ctx) {
label_8003137C:
    ctx->downcount -= 3;
    ctx->pc = 0x8003137Cu;
    // 8003137C: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80031380: rlwinm. r0, r0, 0, 22, 22
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

    // 80031384: bc    4, 2, 0x8003137C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003137Cu;
                return;
            }
            goto label_8003137C;
        }
    }

    ctx->pc = 0x80031388u;
}

static void loop_80031410(CPUState* ctx) {
label_80031410:
    ctx->downcount -= 3;
    ctx->pc = 0x80031410u;
    // 80031410: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 80031414: rlwinm. r0, r0, 0, 22, 22
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

    // 80031418: bc    4, 2, 0x80031410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80031410u;
                return;
            }
            goto label_80031410;
        }
    }

    ctx->pc = 0x8003141Cu;
}

static void loop_800314A4(CPUState* ctx) {
label_800314A4:
    ctx->downcount -= 3;
    ctx->pc = 0x800314A4u;
    // 800314A4: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 800314A8: rlwinm. r0, r0, 0, 22, 22
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

    // 800314AC: bc    4, 2, 0x800314A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800314A4u;
                return;
            }
            goto label_800314A4;
        }
    }

    ctx->pc = 0x800314B0u;
}

static void loop_80031558(CPUState* ctx) {
label_80031558:
    ctx->downcount -= 3;
    ctx->pc = 0x80031558u;
    // 80031558: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    // 8003155C: rlwinm. r0, r0, 0, 22, 22
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

    // 80031560: bc    4, 2, 0x80031558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80031558u;
                return;
            }
            goto label_80031558;
        }
    }

    ctx->pc = 0x80031564u;
}

void func_8002D5E0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x8002D5E0u: goto label_8002D5E0;
    case 0x8002D5E4u: goto label_8002D5E4;
    case 0x8002D5E8u: goto label_8002D5E8;
    case 0x8002D5ECu: goto label_8002D5EC;
    case 0x8002D5F0u: goto label_8002D5F0;
    case 0x8002D5F4u: goto label_8002D5F4;
    case 0x8002D5F8u: goto label_8002D5F8;
    case 0x8002D5FCu: goto label_8002D5FC;
    case 0x8002D600u: goto label_8002D600;
    case 0x8002D604u: goto label_8002D604;
    case 0x8002D608u: goto label_8002D608;
    case 0x8002D60Cu: goto label_8002D60C;
    case 0x8002D610u: goto label_8002D610;
    case 0x8002D614u: goto label_8002D614;
    case 0x8002D618u: goto label_8002D618;
    case 0x8002D61Cu: goto label_8002D61C;
    case 0x8002D620u: goto label_8002D620;
    case 0x8002D624u: goto label_8002D624;
    case 0x8002D628u: goto label_8002D628;
    case 0x8002D62Cu: goto label_8002D62C;
    case 0x8002D630u: goto label_8002D630;
    case 0x8002D634u: goto label_8002D634;
    case 0x8002D638u: goto label_8002D638;
    case 0x8002D63Cu: goto label_8002D63C;
    case 0x8002D640u: goto label_8002D640;
    case 0x8002D644u: goto label_8002D644;
    case 0x8002D648u: goto label_8002D648;
    case 0x8002D64Cu: goto label_8002D64C;
    case 0x8002D650u: goto label_8002D650;
    case 0x8002D654u: goto label_8002D654;
    case 0x8002D658u: goto label_8002D658;
    case 0x8002D65Cu: goto label_8002D65C;
    case 0x8002D660u: goto label_8002D660;
    case 0x8002D664u: goto label_8002D664;
    case 0x8002D668u: goto label_8002D668;
    case 0x8002D66Cu: goto label_8002D66C;
    case 0x8002D670u: goto label_8002D670;
    case 0x8002D674u: goto label_8002D674;
    case 0x8002D678u: goto label_8002D678;
    case 0x8002D67Cu: goto label_8002D67C;
    case 0x8002D680u: goto label_8002D680;
    case 0x8002D684u: goto label_8002D684;
    case 0x8002D688u: goto label_8002D688;
    case 0x8002D68Cu: goto label_8002D68C;
    case 0x8002D690u: goto label_8002D690;
    case 0x8002D694u: goto label_8002D694;
    case 0x8002D698u: goto label_8002D698;
    case 0x8002D69Cu: goto label_8002D69C;
    case 0x8002D6A0u: goto label_8002D6A0;
    case 0x8002D6A4u: goto label_8002D6A4;
    case 0x8002D6A8u: goto label_8002D6A8;
    case 0x8002D6ACu: goto label_8002D6AC;
    case 0x8002D6B0u: goto label_8002D6B0;
    case 0x8002D6B4u: goto label_8002D6B4;
    case 0x8002D6B8u: goto label_8002D6B8;
    case 0x8002D6BCu: goto label_8002D6BC;
    case 0x8002D6C0u: goto label_8002D6C0;
    case 0x8002D6C4u: goto label_8002D6C4;
    case 0x8002D6C8u: goto label_8002D6C8;
    case 0x8002D6CCu: goto label_8002D6CC;
    case 0x8002D6D0u: goto label_8002D6D0;
    case 0x8002D6D4u: goto label_8002D6D4;
    case 0x8002D6D8u: goto label_8002D6D8;
    case 0x8002D6DCu: goto label_8002D6DC;
    case 0x8002D6E0u: goto label_8002D6E0;
    case 0x8002D6E4u: goto label_8002D6E4;
    case 0x8002D6E8u: goto label_8002D6E8;
    case 0x8002D6ECu: goto label_8002D6EC;
    case 0x8002D6F0u: goto label_8002D6F0;
    case 0x8002D6F4u: goto label_8002D6F4;
    case 0x8002D6F8u: goto label_8002D6F8;
    case 0x8002D6FCu: goto label_8002D6FC;
    case 0x8002D700u: goto label_8002D700;
    case 0x8002D704u: goto label_8002D704;
    case 0x8002D708u: goto label_8002D708;
    case 0x8002D70Cu: goto label_8002D70C;
    case 0x8002D710u: goto label_8002D710;
    case 0x8002D714u: goto label_8002D714;
    case 0x8002D718u: goto label_8002D718;
    case 0x8002D71Cu: goto label_8002D71C;
    case 0x8002D720u: goto label_8002D720;
    case 0x8002D724u: goto label_8002D724;
    case 0x8002D728u: goto label_8002D728;
    case 0x8002D72Cu: goto label_8002D72C;
    case 0x8002D730u: goto label_8002D730;
    case 0x8002D734u: goto label_8002D734;
    case 0x8002D738u: goto label_8002D738;
    case 0x8002D73Cu: goto label_8002D73C;
    case 0x8002D740u: goto label_8002D740;
    case 0x8002D744u: goto label_8002D744;
    case 0x8002D748u: goto label_8002D748;
    case 0x8002D74Cu: goto label_8002D74C;
    case 0x8002D750u: goto label_8002D750;
    case 0x8002D754u: goto label_8002D754;
    case 0x8002D758u: goto label_8002D758;
    case 0x8002D75Cu: goto label_8002D75C;
    case 0x8002D760u: goto label_8002D760;
    case 0x8002D764u: goto label_8002D764;
    case 0x8002D768u: goto label_8002D768;
    case 0x8002D76Cu: goto label_8002D76C;
    case 0x8002D770u: goto label_8002D770;
    case 0x8002D774u: goto label_8002D774;
    case 0x8002D778u: goto label_8002D778;
    case 0x8002D77Cu: goto label_8002D77C;
    case 0x8002D780u: goto label_8002D780;
    case 0x8002D784u: goto label_8002D784;
    case 0x8002D788u: goto label_8002D788;
    case 0x8002D78Cu: goto label_8002D78C;
    case 0x8002D790u: goto label_8002D790;
    case 0x8002D794u: goto label_8002D794;
    case 0x8002D798u: goto label_8002D798;
    case 0x8002D79Cu: goto label_8002D79C;
    case 0x8002D7A0u: goto label_8002D7A0;
    case 0x8002D7A4u: goto label_8002D7A4;
    case 0x8002D7A8u: goto label_8002D7A8;
    case 0x8002D7ACu: goto label_8002D7AC;
    case 0x8002D7B0u: goto label_8002D7B0;
    case 0x8002D7B4u: goto label_8002D7B4;
    case 0x8002D7B8u: goto label_8002D7B8;
    case 0x8002D7BCu: goto label_8002D7BC;
    case 0x8002D7C0u: goto label_8002D7C0;
    case 0x8002D7C4u: goto label_8002D7C4;
    case 0x8002D7C8u: goto label_8002D7C8;
    case 0x8002D7CCu: goto label_8002D7CC;
    case 0x8002D7D0u: goto label_8002D7D0;
    case 0x8002D7D4u: goto label_8002D7D4;
    case 0x8002D7D8u: goto label_8002D7D8;
    case 0x8002D7DCu: goto label_8002D7DC;
    case 0x8002D7E0u: goto label_8002D7E0;
    case 0x8002D7E4u: goto label_8002D7E4;
    case 0x8002D7E8u: goto label_8002D7E8;
    case 0x8002D7ECu: goto label_8002D7EC;
    case 0x8002D7F0u: goto label_8002D7F0;
    case 0x8002D7F4u: goto label_8002D7F4;
    case 0x8002D7F8u: goto label_8002D7F8;
    case 0x8002D7FCu: goto label_8002D7FC;
    case 0x8002D800u: goto label_8002D800;
    case 0x8002D804u: goto label_8002D804;
    case 0x8002D808u: goto label_8002D808;
    case 0x8002D80Cu: goto label_8002D80C;
    case 0x8002D810u: goto label_8002D810;
    case 0x8002D814u: goto label_8002D814;
    case 0x8002D818u: goto label_8002D818;
    case 0x8002D81Cu: goto label_8002D81C;
    case 0x8002D820u: goto label_8002D820;
    case 0x8002D824u: goto label_8002D824;
    case 0x8002D828u: goto label_8002D828;
    case 0x8002D82Cu: goto label_8002D82C;
    case 0x8002D830u: goto label_8002D830;
    case 0x8002D834u: goto label_8002D834;
    case 0x8002D838u: goto label_8002D838;
    case 0x8002D83Cu: goto label_8002D83C;
    case 0x8002D840u: goto label_8002D840;
    case 0x8002D844u: goto label_8002D844;
    case 0x8002D848u: goto label_8002D848;
    case 0x8002D84Cu: goto label_8002D84C;
    case 0x8002D850u: goto label_8002D850;
    case 0x8002D854u: goto label_8002D854;
    case 0x8002D858u: goto label_8002D858;
    case 0x8002D85Cu: goto label_8002D85C;
    case 0x8002D860u: goto label_8002D860;
    case 0x8002D864u: goto label_8002D864;
    case 0x8002D868u: goto label_8002D868;
    case 0x8002D86Cu: goto label_8002D86C;
    case 0x8002D870u: goto label_8002D870;
    case 0x8002D874u: goto label_8002D874;
    case 0x8002D878u: goto label_8002D878;
    case 0x8002D87Cu: goto label_8002D87C;
    case 0x8002D880u: goto label_8002D880;
    case 0x8002D884u: goto label_8002D884;
    case 0x8002D888u: goto label_8002D888;
    case 0x8002D88Cu: goto label_8002D88C;
    case 0x8002D890u: goto label_8002D890;
    case 0x8002D894u: goto label_8002D894;
    case 0x8002D898u: goto label_8002D898;
    case 0x8002D89Cu: goto label_8002D89C;
    case 0x8002D8A0u: goto label_8002D8A0;
    case 0x8002D8A4u: goto label_8002D8A4;
    case 0x8002D8A8u: goto label_8002D8A8;
    case 0x8002D8ACu: goto label_8002D8AC;
    case 0x8002D8B0u: goto label_8002D8B0;
    case 0x8002D8B4u: goto label_8002D8B4;
    case 0x8002D8B8u: goto label_8002D8B8;
    case 0x8002D8BCu: goto label_8002D8BC;
    case 0x8002D8C0u: goto label_8002D8C0;
    case 0x8002D8C4u: goto label_8002D8C4;
    case 0x8002D8C8u: goto label_8002D8C8;
    case 0x8002D8CCu: goto label_8002D8CC;
    case 0x8002D8D0u: goto label_8002D8D0;
    case 0x8002D8D4u: goto label_8002D8D4;
    case 0x8002D8D8u: goto label_8002D8D8;
    case 0x8002D8DCu: goto label_8002D8DC;
    case 0x8002D8E0u: goto label_8002D8E0;
    case 0x8002D8E4u: goto label_8002D8E4;
    case 0x8002D8E8u: goto label_8002D8E8;
    case 0x8002D8ECu: goto label_8002D8EC;
    case 0x8002D8F0u: goto label_8002D8F0;
    case 0x8002D8F4u: goto label_8002D8F4;
    case 0x8002D8F8u: goto label_8002D8F8;
    case 0x8002D8FCu: goto label_8002D8FC;
    case 0x8002D900u: goto label_8002D900;
    case 0x8002D904u: goto label_8002D904;
    case 0x8002D908u: goto label_8002D908;
    case 0x8002D90Cu: goto label_8002D90C;
    case 0x8002D910u: goto label_8002D910;
    case 0x8002D914u: goto label_8002D914;
    case 0x8002D918u: goto label_8002D918;
    case 0x8002D91Cu: goto label_8002D91C;
    case 0x8002D920u: goto label_8002D920;
    case 0x8002D924u: goto label_8002D924;
    case 0x8002D928u: goto label_8002D928;
    case 0x8002D92Cu: goto label_8002D92C;
    case 0x8002D930u: goto label_8002D930;
    case 0x8002D934u: goto label_8002D934;
    case 0x8002D938u: goto label_8002D938;
    case 0x8002D93Cu: goto label_8002D93C;
    case 0x8002D940u: goto label_8002D940;
    case 0x8002D944u: goto label_8002D944;
    case 0x8002D948u: goto label_8002D948;
    case 0x8002D94Cu: goto label_8002D94C;
    case 0x8002D950u: goto label_8002D950;
    case 0x8002D954u: goto label_8002D954;
    case 0x8002D958u: goto label_8002D958;
    case 0x8002D95Cu: goto label_8002D95C;
    case 0x8002D960u: goto label_8002D960;
    case 0x8002D964u: goto label_8002D964;
    case 0x8002D968u: goto label_8002D968;
    case 0x8002D96Cu: goto label_8002D96C;
    case 0x8002D970u: goto label_8002D970;
    case 0x8002D974u: goto label_8002D974;
    case 0x8002D978u: goto label_8002D978;
    case 0x8002D97Cu: goto label_8002D97C;
    case 0x8002D980u: goto label_8002D980;
    case 0x8002D984u: goto label_8002D984;
    case 0x8002D988u: goto label_8002D988;
    case 0x8002D98Cu: goto label_8002D98C;
    case 0x8002D990u: goto label_8002D990;
    case 0x8002D994u: goto label_8002D994;
    case 0x8002D998u: goto label_8002D998;
    case 0x8002D99Cu: goto label_8002D99C;
    case 0x8002D9A0u: goto label_8002D9A0;
    case 0x8002D9A4u: goto label_8002D9A4;
    case 0x8002D9A8u: goto label_8002D9A8;
    case 0x8002D9ACu: goto label_8002D9AC;
    case 0x8002D9B0u: goto label_8002D9B0;
    case 0x8002D9B4u: goto label_8002D9B4;
    case 0x8002D9B8u: goto label_8002D9B8;
    case 0x8002D9BCu: goto label_8002D9BC;
    case 0x8002D9C0u: goto label_8002D9C0;
    case 0x8002D9C4u: goto label_8002D9C4;
    case 0x8002D9C8u: goto label_8002D9C8;
    case 0x8002D9CCu: goto label_8002D9CC;
    case 0x8002D9D0u: goto label_8002D9D0;
    case 0x8002D9D4u: goto label_8002D9D4;
    case 0x8002D9D8u: goto label_8002D9D8;
    case 0x8002D9DCu: goto label_8002D9DC;
    case 0x8002D9E0u: goto label_8002D9E0;
    case 0x8002D9E4u: goto label_8002D9E4;
    case 0x8002D9E8u: goto label_8002D9E8;
    case 0x8002D9ECu: goto label_8002D9EC;
    case 0x8002D9F0u: goto label_8002D9F0;
    case 0x8002D9F4u: goto label_8002D9F4;
    case 0x8002D9F8u: goto label_8002D9F8;
    case 0x8002D9FCu: goto label_8002D9FC;
    case 0x8002DA00u: goto label_8002DA00;
    case 0x8002DA04u: goto label_8002DA04;
    case 0x8002DA08u: goto label_8002DA08;
    case 0x8002DA0Cu: goto label_8002DA0C;
    case 0x8002DA10u: goto label_8002DA10;
    case 0x8002DA14u: goto label_8002DA14;
    case 0x8002DA18u: goto label_8002DA18;
    case 0x8002DA1Cu: goto label_8002DA1C;
    case 0x8002DA20u: goto label_8002DA20;
    case 0x8002DA24u: goto label_8002DA24;
    case 0x8002DA28u: goto label_8002DA28;
    case 0x8002DA2Cu: goto label_8002DA2C;
    case 0x8002DA30u: goto label_8002DA30;
    case 0x8002DA34u: goto label_8002DA34;
    case 0x8002DA38u: goto label_8002DA38;
    case 0x8002DA3Cu: goto label_8002DA3C;
    case 0x8002DA40u: goto label_8002DA40;
    case 0x8002DA44u: goto label_8002DA44;
    case 0x8002DA48u: goto label_8002DA48;
    case 0x8002DA4Cu: goto label_8002DA4C;
    case 0x8002DA50u: goto label_8002DA50;
    case 0x8002DA54u: goto label_8002DA54;
    case 0x8002DA58u: goto label_8002DA58;
    case 0x8002DA5Cu: goto label_8002DA5C;
    case 0x8002DA60u: goto label_8002DA60;
    case 0x8002DA64u: goto label_8002DA64;
    case 0x8002DA68u: goto label_8002DA68;
    case 0x8002DA6Cu: goto label_8002DA6C;
    case 0x8002DA70u: goto label_8002DA70;
    case 0x8002DA74u: goto label_8002DA74;
    case 0x8002DA78u: goto label_8002DA78;
    case 0x8002DA7Cu: goto label_8002DA7C;
    case 0x8002DA80u: goto label_8002DA80;
    case 0x8002DA84u: goto label_8002DA84;
    case 0x8002DA88u: goto label_8002DA88;
    case 0x8002DA8Cu: goto label_8002DA8C;
    case 0x8002DA90u: goto label_8002DA90;
    case 0x8002DA94u: goto label_8002DA94;
    case 0x8002DA98u: goto label_8002DA98;
    case 0x8002DA9Cu: goto label_8002DA9C;
    case 0x8002DAA0u: goto label_8002DAA0;
    case 0x8002DAA4u: goto label_8002DAA4;
    case 0x8002DAA8u: goto label_8002DAA8;
    case 0x8002DAACu: goto label_8002DAAC;
    case 0x8002DAB0u: goto label_8002DAB0;
    case 0x8002DAB4u: goto label_8002DAB4;
    case 0x8002DAB8u: goto label_8002DAB8;
    case 0x8002DABCu: goto label_8002DABC;
    case 0x8002DAC0u: goto label_8002DAC0;
    case 0x8002DAC4u: goto label_8002DAC4;
    case 0x8002DAC8u: goto label_8002DAC8;
    case 0x8002DACCu: goto label_8002DACC;
    case 0x8002DAD0u: goto label_8002DAD0;
    case 0x8002DAD4u: goto label_8002DAD4;
    case 0x8002DAD8u: goto label_8002DAD8;
    case 0x8002DADCu: goto label_8002DADC;
    case 0x8002DAE0u: goto label_8002DAE0;
    case 0x8002DAE4u: goto label_8002DAE4;
    case 0x8002DAE8u: goto label_8002DAE8;
    case 0x8002DAECu: goto label_8002DAEC;
    case 0x8002DAF0u: goto label_8002DAF0;
    case 0x8002DAF4u: goto label_8002DAF4;
    case 0x8002DAF8u: goto label_8002DAF8;
    case 0x8002DAFCu: goto label_8002DAFC;
    case 0x8002DB00u: goto label_8002DB00;
    case 0x8002DB04u: goto label_8002DB04;
    case 0x8002DB08u: goto label_8002DB08;
    case 0x8002DB0Cu: goto label_8002DB0C;
    case 0x8002DB10u: goto label_8002DB10;
    case 0x8002DB14u: goto label_8002DB14;
    case 0x8002DB18u: goto label_8002DB18;
    case 0x8002DB1Cu: goto label_8002DB1C;
    case 0x8002DB20u: goto label_8002DB20;
    case 0x8002DB24u: goto label_8002DB24;
    case 0x8002DB28u: goto label_8002DB28;
    case 0x8002DB2Cu: goto label_8002DB2C;
    case 0x8002DB30u: goto label_8002DB30;
    case 0x8002DB34u: goto label_8002DB34;
    case 0x8002DB38u: goto label_8002DB38;
    case 0x8002DB3Cu: goto label_8002DB3C;
    case 0x8002DB40u: goto label_8002DB40;
    case 0x8002DB44u: goto label_8002DB44;
    case 0x8002DB48u: goto label_8002DB48;
    case 0x8002DB4Cu: goto label_8002DB4C;
    case 0x8002DB50u: goto label_8002DB50;
    case 0x8002DB54u: goto label_8002DB54;
    case 0x8002DB58u: goto label_8002DB58;
    case 0x8002DB5Cu: goto label_8002DB5C;
    case 0x8002DB60u: goto label_8002DB60;
    case 0x8002DB64u: goto label_8002DB64;
    case 0x8002DB68u: goto label_8002DB68;
    case 0x8002DB6Cu: goto label_8002DB6C;
    case 0x8002DB70u: goto label_8002DB70;
    case 0x8002DB74u: goto label_8002DB74;
    case 0x8002DB78u: goto label_8002DB78;
    case 0x8002DB7Cu: goto label_8002DB7C;
    case 0x8002DB80u: goto label_8002DB80;
    case 0x8002DB84u: goto label_8002DB84;
    case 0x8002DB88u: goto label_8002DB88;
    case 0x8002DB8Cu: goto label_8002DB8C;
    case 0x8002DB90u: goto label_8002DB90;
    case 0x8002DB94u: goto label_8002DB94;
    case 0x8002DB98u: goto label_8002DB98;
    case 0x8002DB9Cu: goto label_8002DB9C;
    case 0x8002DBA0u: goto label_8002DBA0;
    case 0x8002DBA4u: goto label_8002DBA4;
    case 0x8002DBA8u: goto label_8002DBA8;
    case 0x8002DBACu: goto label_8002DBAC;
    case 0x8002DBB0u: goto label_8002DBB0;
    case 0x8002DBB4u: goto label_8002DBB4;
    case 0x8002DBB8u: goto label_8002DBB8;
    case 0x8002DBBCu: goto label_8002DBBC;
    case 0x8002DBC0u: goto label_8002DBC0;
    case 0x8002DBC4u: goto label_8002DBC4;
    case 0x8002DBC8u: goto label_8002DBC8;
    case 0x8002DBCCu: goto label_8002DBCC;
    case 0x8002DBD0u: goto label_8002DBD0;
    case 0x8002DBD4u: goto label_8002DBD4;
    case 0x8002DBD8u: goto label_8002DBD8;
    case 0x8002DBDCu: goto label_8002DBDC;
    case 0x8002DBE0u: goto label_8002DBE0;
    case 0x8002DBE4u: goto label_8002DBE4;
    case 0x8002DBE8u: goto label_8002DBE8;
    case 0x8002DBECu: goto label_8002DBEC;
    case 0x8002DBF0u: goto label_8002DBF0;
    case 0x8002DBF4u: goto label_8002DBF4;
    case 0x8002DBF8u: goto label_8002DBF8;
    case 0x8002DBFCu: goto label_8002DBFC;
    case 0x8002DC00u: goto label_8002DC00;
    case 0x8002DC04u: goto label_8002DC04;
    case 0x8002DC08u: goto label_8002DC08;
    case 0x8002DC0Cu: goto label_8002DC0C;
    case 0x8002DC10u: goto label_8002DC10;
    case 0x8002DC14u: goto label_8002DC14;
    case 0x8002DC18u: goto label_8002DC18;
    case 0x8002DC1Cu: goto label_8002DC1C;
    case 0x8002DC20u: goto label_8002DC20;
    case 0x8002DC24u: goto label_8002DC24;
    case 0x8002DC28u: goto label_8002DC28;
    case 0x8002DC2Cu: goto label_8002DC2C;
    case 0x8002DC30u: goto label_8002DC30;
    case 0x8002DC34u: goto label_8002DC34;
    case 0x8002DC38u: goto label_8002DC38;
    case 0x8002DC3Cu: goto label_8002DC3C;
    case 0x8002DC40u: goto label_8002DC40;
    case 0x8002DC44u: goto label_8002DC44;
    case 0x8002DC48u: goto label_8002DC48;
    case 0x8002DC4Cu: goto label_8002DC4C;
    case 0x8002DC50u: goto label_8002DC50;
    case 0x8002DC54u: goto label_8002DC54;
    case 0x8002DC58u: goto label_8002DC58;
    case 0x8002DC5Cu: goto label_8002DC5C;
    case 0x8002DC60u: goto label_8002DC60;
    case 0x8002DC64u: goto label_8002DC64;
    case 0x8002DC68u: goto label_8002DC68;
    case 0x8002DC6Cu: goto label_8002DC6C;
    case 0x8002DC70u: goto label_8002DC70;
    case 0x8002DC74u: goto label_8002DC74;
    case 0x8002DC78u: goto label_8002DC78;
    case 0x8002DC7Cu: goto label_8002DC7C;
    case 0x8002DC80u: goto label_8002DC80;
    case 0x8002DC84u: goto label_8002DC84;
    case 0x8002DC88u: goto label_8002DC88;
    case 0x8002DC8Cu: goto label_8002DC8C;
    case 0x8002DC90u: goto label_8002DC90;
    case 0x8002DC94u: goto label_8002DC94;
    case 0x8002DC98u: goto label_8002DC98;
    case 0x8002DC9Cu: goto label_8002DC9C;
    case 0x8002DCA0u: goto label_8002DCA0;
    case 0x8002DCA4u: goto label_8002DCA4;
    case 0x8002DCA8u: goto label_8002DCA8;
    case 0x8002DCACu: goto label_8002DCAC;
    case 0x8002DCB0u: goto label_8002DCB0;
    case 0x8002DCB4u: goto label_8002DCB4;
    case 0x8002DCB8u: goto label_8002DCB8;
    case 0x8002DCBCu: goto label_8002DCBC;
    case 0x8002DCC0u: goto label_8002DCC0;
    case 0x8002DCC4u: goto label_8002DCC4;
    case 0x8002DCC8u: goto label_8002DCC8;
    case 0x8002DCCCu: goto label_8002DCCC;
    case 0x8002DCD0u: goto label_8002DCD0;
    case 0x8002DCD4u: goto label_8002DCD4;
    case 0x8002DCD8u: goto label_8002DCD8;
    case 0x8002DCDCu: goto label_8002DCDC;
    case 0x8002DCE0u: goto label_8002DCE0;
    case 0x8002DCE4u: goto label_8002DCE4;
    case 0x8002DCE8u: goto label_8002DCE8;
    case 0x8002DCECu: goto label_8002DCEC;
    case 0x8002DCF0u: goto label_8002DCF0;
    case 0x8002DCF4u: goto label_8002DCF4;
    case 0x8002DCF8u: goto label_8002DCF8;
    case 0x8002DCFCu: goto label_8002DCFC;
    case 0x8002DD00u: goto label_8002DD00;
    case 0x8002DD04u: goto label_8002DD04;
    case 0x8002DD08u: goto label_8002DD08;
    case 0x8002DD0Cu: goto label_8002DD0C;
    case 0x8002DD10u: goto label_8002DD10;
    case 0x8002DD14u: goto label_8002DD14;
    case 0x8002DD18u: goto label_8002DD18;
    case 0x8002DD1Cu: goto label_8002DD1C;
    case 0x8002DD20u: goto label_8002DD20;
    case 0x8002DD24u: goto label_8002DD24;
    case 0x8002DD28u: goto label_8002DD28;
    case 0x8002DD2Cu: goto label_8002DD2C;
    case 0x8002DD30u: goto label_8002DD30;
    case 0x8002DD34u: goto label_8002DD34;
    case 0x8002DD38u: goto label_8002DD38;
    case 0x8002DD3Cu: goto label_8002DD3C;
    case 0x8002DD40u: goto label_8002DD40;
    case 0x8002DD44u: goto label_8002DD44;
    case 0x8002DD48u: goto label_8002DD48;
    case 0x8002DD4Cu: goto label_8002DD4C;
    case 0x8002DD50u: goto label_8002DD50;
    case 0x8002DD54u: goto label_8002DD54;
    case 0x8002DD58u: goto label_8002DD58;
    case 0x8002DD5Cu: goto label_8002DD5C;
    case 0x8002DD60u: goto label_8002DD60;
    case 0x8002DD64u: goto label_8002DD64;
    case 0x8002DD68u: goto label_8002DD68;
    case 0x8002DD6Cu: goto label_8002DD6C;
    case 0x8002DD70u: goto label_8002DD70;
    case 0x8002DD74u: goto label_8002DD74;
    case 0x8002DD78u: goto label_8002DD78;
    case 0x8002DD7Cu: goto label_8002DD7C;
    case 0x8002DD80u: goto label_8002DD80;
    case 0x8002DD84u: goto label_8002DD84;
    case 0x8002DD88u: goto label_8002DD88;
    case 0x8002DD8Cu: goto label_8002DD8C;
    case 0x8002DD90u: goto label_8002DD90;
    case 0x8002DD94u: goto label_8002DD94;
    case 0x8002DD98u: goto label_8002DD98;
    case 0x8002DD9Cu: goto label_8002DD9C;
    case 0x8002DDA0u: goto label_8002DDA0;
    case 0x8002DDA4u: goto label_8002DDA4;
    case 0x8002DDA8u: goto label_8002DDA8;
    case 0x8002DDACu: goto label_8002DDAC;
    case 0x8002DDB0u: goto label_8002DDB0;
    case 0x8002DDB4u: goto label_8002DDB4;
    case 0x8002DDB8u: goto label_8002DDB8;
    case 0x8002DDBCu: goto label_8002DDBC;
    case 0x8002DDC0u: goto label_8002DDC0;
    case 0x8002DDC4u: goto label_8002DDC4;
    case 0x8002DDC8u: goto label_8002DDC8;
    case 0x8002DDCCu: goto label_8002DDCC;
    case 0x8002DDD0u: goto label_8002DDD0;
    case 0x8002DDD4u: goto label_8002DDD4;
    case 0x8002DDD8u: goto label_8002DDD8;
    case 0x8002DDDCu: goto label_8002DDDC;
    case 0x8002DDE0u: goto label_8002DDE0;
    case 0x8002DDE4u: goto label_8002DDE4;
    case 0x8002DDE8u: goto label_8002DDE8;
    case 0x8002DDECu: goto label_8002DDEC;
    case 0x8002DDF0u: goto label_8002DDF0;
    case 0x8002DDF4u: goto label_8002DDF4;
    case 0x8002DDF8u: goto label_8002DDF8;
    case 0x8002DDFCu: goto label_8002DDFC;
    case 0x8002DE00u: goto label_8002DE00;
    case 0x8002DE04u: goto label_8002DE04;
    case 0x8002DE08u: goto label_8002DE08;
    case 0x8002DE0Cu: goto label_8002DE0C;
    case 0x8002DE10u: goto label_8002DE10;
    case 0x8002DE14u: goto label_8002DE14;
    case 0x8002DE18u: goto label_8002DE18;
    case 0x8002DE1Cu: goto label_8002DE1C;
    case 0x8002DE20u: goto label_8002DE20;
    case 0x8002DE24u: goto label_8002DE24;
    case 0x8002DE28u: goto label_8002DE28;
    case 0x8002DE2Cu: goto label_8002DE2C;
    case 0x8002DE30u: goto label_8002DE30;
    case 0x8002DE34u: goto label_8002DE34;
    case 0x8002DE38u: goto label_8002DE38;
    case 0x8002DE3Cu: goto label_8002DE3C;
    case 0x8002DE40u: goto label_8002DE40;
    case 0x8002DE44u: goto label_8002DE44;
    case 0x8002DE48u: goto label_8002DE48;
    case 0x8002DE4Cu: goto label_8002DE4C;
    case 0x8002DE50u: goto label_8002DE50;
    case 0x8002DE54u: goto label_8002DE54;
    case 0x8002DE58u: goto label_8002DE58;
    case 0x8002DE5Cu: goto label_8002DE5C;
    case 0x8002DE60u: goto label_8002DE60;
    case 0x8002DE64u: goto label_8002DE64;
    case 0x8002DE68u: goto label_8002DE68;
    case 0x8002DE6Cu: goto label_8002DE6C;
    case 0x8002DE70u: goto label_8002DE70;
    case 0x8002DE74u: goto label_8002DE74;
    case 0x8002DE78u: goto label_8002DE78;
    case 0x8002DE7Cu: goto label_8002DE7C;
    case 0x8002DE80u: goto label_8002DE80;
    case 0x8002DE84u: goto label_8002DE84;
    case 0x8002DE88u: goto label_8002DE88;
    case 0x8002DE8Cu: goto label_8002DE8C;
    case 0x8002DE90u: goto label_8002DE90;
    case 0x8002DE94u: goto label_8002DE94;
    case 0x8002DE98u: goto label_8002DE98;
    case 0x8002DE9Cu: goto label_8002DE9C;
    case 0x8002DEA0u: goto label_8002DEA0;
    case 0x8002DEA4u: goto label_8002DEA4;
    case 0x8002DEA8u: goto label_8002DEA8;
    case 0x8002DEACu: goto label_8002DEAC;
    case 0x8002DEB0u: goto label_8002DEB0;
    case 0x8002DEB4u: goto label_8002DEB4;
    case 0x8002DEB8u: goto label_8002DEB8;
    case 0x8002DEBCu: goto label_8002DEBC;
    case 0x8002DEC0u: goto label_8002DEC0;
    case 0x8002DEC4u: goto label_8002DEC4;
    case 0x8002DEC8u: goto label_8002DEC8;
    case 0x8002DECCu: goto label_8002DECC;
    case 0x8002DED0u: goto label_8002DED0;
    case 0x8002DED4u: goto label_8002DED4;
    case 0x8002DED8u: goto label_8002DED8;
    case 0x8002DEDCu: goto label_8002DEDC;
    case 0x8002DEE0u: goto label_8002DEE0;
    case 0x8002DEE4u: goto label_8002DEE4;
    case 0x8002DEE8u: goto label_8002DEE8;
    case 0x8002DEECu: goto label_8002DEEC;
    case 0x8002DEF0u: goto label_8002DEF0;
    case 0x8002DEF4u: goto label_8002DEF4;
    case 0x8002DEF8u: goto label_8002DEF8;
    case 0x8002DEFCu: goto label_8002DEFC;
    case 0x8002DF00u: goto label_8002DF00;
    case 0x8002DF04u: goto label_8002DF04;
    case 0x8002DF08u: goto label_8002DF08;
    case 0x8002DF0Cu: goto label_8002DF0C;
    case 0x8002DF10u: goto label_8002DF10;
    case 0x8002DF14u: goto label_8002DF14;
    case 0x8002DF18u: goto label_8002DF18;
    case 0x8002DF1Cu: goto label_8002DF1C;
    case 0x8002DF20u: goto label_8002DF20;
    case 0x8002DF24u: goto label_8002DF24;
    case 0x8002DF28u: goto label_8002DF28;
    case 0x8002DF2Cu: goto label_8002DF2C;
    case 0x8002DF30u: goto label_8002DF30;
    case 0x8002DF34u: goto label_8002DF34;
    case 0x8002DF38u: goto label_8002DF38;
    case 0x8002DF3Cu: goto label_8002DF3C;
    case 0x8002DF40u: goto label_8002DF40;
    case 0x8002DF44u: goto label_8002DF44;
    case 0x8002DF48u: goto label_8002DF48;
    case 0x8002DF4Cu: goto label_8002DF4C;
    case 0x8002DF50u: goto label_8002DF50;
    case 0x8002DF54u: goto label_8002DF54;
    case 0x8002DF58u: goto label_8002DF58;
    case 0x8002DF5Cu: goto label_8002DF5C;
    case 0x8002DF60u: goto label_8002DF60;
    case 0x8002DF64u: goto label_8002DF64;
    case 0x8002DF68u: goto label_8002DF68;
    case 0x8002DF6Cu: goto label_8002DF6C;
    case 0x8002DF70u: goto label_8002DF70;
    case 0x8002DF74u: goto label_8002DF74;
    case 0x8002DF78u: goto label_8002DF78;
    case 0x8002DF7Cu: goto label_8002DF7C;
    case 0x8002DF80u: goto label_8002DF80;
    case 0x8002DF84u: goto label_8002DF84;
    case 0x8002DF88u: goto label_8002DF88;
    case 0x8002DF8Cu: goto label_8002DF8C;
    case 0x8002DF90u: goto label_8002DF90;
    case 0x8002DF94u: goto label_8002DF94;
    case 0x8002DF98u: goto label_8002DF98;
    case 0x8002DF9Cu: goto label_8002DF9C;
    case 0x8002DFA0u: goto label_8002DFA0;
    case 0x8002DFA4u: goto label_8002DFA4;
    case 0x8002DFA8u: goto label_8002DFA8;
    case 0x8002DFACu: goto label_8002DFAC;
    case 0x8002DFB0u: goto label_8002DFB0;
    case 0x8002DFB4u: goto label_8002DFB4;
    case 0x8002DFB8u: goto label_8002DFB8;
    case 0x8002DFBCu: goto label_8002DFBC;
    case 0x8002DFC0u: goto label_8002DFC0;
    case 0x8002DFC4u: goto label_8002DFC4;
    case 0x8002DFC8u: goto label_8002DFC8;
    case 0x8002DFCCu: goto label_8002DFCC;
    case 0x8002DFD0u: goto label_8002DFD0;
    case 0x8002DFD4u: goto label_8002DFD4;
    case 0x8002DFD8u: goto label_8002DFD8;
    case 0x8002DFDCu: goto label_8002DFDC;
    case 0x8002DFE0u: goto label_8002DFE0;
    case 0x8002DFE4u: goto label_8002DFE4;
    case 0x8002DFE8u: goto label_8002DFE8;
    case 0x8002DFECu: goto label_8002DFEC;
    case 0x8002DFF0u: goto label_8002DFF0;
    case 0x8002DFF4u: goto label_8002DFF4;
    case 0x8002DFF8u: goto label_8002DFF8;
    case 0x8002DFFCu: goto label_8002DFFC;
    case 0x8002E000u: goto label_8002E000;
    case 0x8002E004u: goto label_8002E004;
    case 0x8002E008u: goto label_8002E008;
    case 0x8002E00Cu: goto label_8002E00C;
    case 0x8002E010u: goto label_8002E010;
    case 0x8002E014u: goto label_8002E014;
    case 0x8002E018u: goto label_8002E018;
    case 0x8002E01Cu: goto label_8002E01C;
    case 0x8002E020u: goto label_8002E020;
    case 0x8002E024u: goto label_8002E024;
    case 0x8002E028u: goto label_8002E028;
    case 0x8002E02Cu: goto label_8002E02C;
    case 0x8002E030u: goto label_8002E030;
    case 0x8002E034u: goto label_8002E034;
    case 0x8002E038u: goto label_8002E038;
    case 0x8002E03Cu: goto label_8002E03C;
    case 0x8002E040u: goto label_8002E040;
    case 0x8002E044u: goto label_8002E044;
    case 0x8002E048u: goto label_8002E048;
    case 0x8002E04Cu: goto label_8002E04C;
    case 0x8002E050u: goto label_8002E050;
    case 0x8002E054u: goto label_8002E054;
    case 0x8002E058u: goto label_8002E058;
    case 0x8002E05Cu: goto label_8002E05C;
    case 0x8002E060u: goto label_8002E060;
    case 0x8002E064u: goto label_8002E064;
    case 0x8002E068u: goto label_8002E068;
    case 0x8002E06Cu: goto label_8002E06C;
    case 0x8002E070u: goto label_8002E070;
    case 0x8002E074u: goto label_8002E074;
    case 0x8002E078u: goto label_8002E078;
    case 0x8002E07Cu: goto label_8002E07C;
    case 0x8002E080u: goto label_8002E080;
    case 0x8002E084u: goto label_8002E084;
    case 0x8002E088u: goto label_8002E088;
    case 0x8002E08Cu: goto label_8002E08C;
    case 0x8002E090u: goto label_8002E090;
    case 0x8002E094u: goto label_8002E094;
    case 0x8002E098u: goto label_8002E098;
    case 0x8002E09Cu: goto label_8002E09C;
    case 0x8002E0A0u: goto label_8002E0A0;
    case 0x8002E0A4u: goto label_8002E0A4;
    case 0x8002E0A8u: goto label_8002E0A8;
    case 0x8002E0ACu: goto label_8002E0AC;
    case 0x8002E0B0u: goto label_8002E0B0;
    case 0x8002E0B4u: goto label_8002E0B4;
    case 0x8002E0B8u: goto label_8002E0B8;
    case 0x8002E0BCu: goto label_8002E0BC;
    case 0x8002E0C0u: goto label_8002E0C0;
    case 0x8002E0C4u: goto label_8002E0C4;
    case 0x8002E0C8u: goto label_8002E0C8;
    case 0x8002E0CCu: goto label_8002E0CC;
    case 0x8002E0D0u: goto label_8002E0D0;
    case 0x8002E0D4u: goto label_8002E0D4;
    case 0x8002E0D8u: goto label_8002E0D8;
    case 0x8002E0DCu: goto label_8002E0DC;
    case 0x8002E0E0u: goto label_8002E0E0;
    case 0x8002E0E4u: goto label_8002E0E4;
    case 0x8002E0E8u: goto label_8002E0E8;
    case 0x8002E0ECu: goto label_8002E0EC;
    case 0x8002E0F0u: goto label_8002E0F0;
    case 0x8002E0F4u: goto label_8002E0F4;
    case 0x8002E0F8u: goto label_8002E0F8;
    case 0x8002E0FCu: goto label_8002E0FC;
    case 0x8002E100u: goto label_8002E100;
    case 0x8002E104u: goto label_8002E104;
    case 0x8002E108u: goto label_8002E108;
    case 0x8002E10Cu: goto label_8002E10C;
    case 0x8002E110u: goto label_8002E110;
    case 0x8002E114u: goto label_8002E114;
    case 0x8002E118u: goto label_8002E118;
    case 0x8002E11Cu: goto label_8002E11C;
    case 0x8002E120u: goto label_8002E120;
    case 0x8002E124u: goto label_8002E124;
    case 0x8002E128u: goto label_8002E128;
    case 0x8002E12Cu: goto label_8002E12C;
    case 0x8002E130u: goto label_8002E130;
    case 0x8002E134u: goto label_8002E134;
    case 0x8002E138u: goto label_8002E138;
    case 0x8002E13Cu: goto label_8002E13C;
    case 0x8002E140u: goto label_8002E140;
    case 0x8002E144u: goto label_8002E144;
    case 0x8002E148u: goto label_8002E148;
    case 0x8002E14Cu: goto label_8002E14C;
    case 0x8002E150u: goto label_8002E150;
    case 0x8002E154u: goto label_8002E154;
    case 0x8002E158u: goto label_8002E158;
    case 0x8002E15Cu: goto label_8002E15C;
    case 0x8002E160u: goto label_8002E160;
    case 0x8002E164u: goto label_8002E164;
    case 0x8002E168u: goto label_8002E168;
    case 0x8002E16Cu: goto label_8002E16C;
    case 0x8002E170u: goto label_8002E170;
    case 0x8002E174u: goto label_8002E174;
    case 0x8002E178u: goto label_8002E178;
    case 0x8002E17Cu: goto label_8002E17C;
    case 0x8002E180u: goto label_8002E180;
    case 0x8002E184u: goto label_8002E184;
    case 0x8002E188u: goto label_8002E188;
    case 0x8002E18Cu: goto label_8002E18C;
    case 0x8002E190u: goto label_8002E190;
    case 0x8002E194u: goto label_8002E194;
    case 0x8002E198u: goto label_8002E198;
    case 0x8002E19Cu: goto label_8002E19C;
    case 0x8002E1A0u: goto label_8002E1A0;
    case 0x8002E1A4u: goto label_8002E1A4;
    case 0x8002E1A8u: goto label_8002E1A8;
    case 0x8002E1ACu: goto label_8002E1AC;
    case 0x8002E1B0u: goto label_8002E1B0;
    case 0x8002E1B4u: goto label_8002E1B4;
    case 0x8002E1B8u: goto label_8002E1B8;
    case 0x8002E1BCu: goto label_8002E1BC;
    case 0x8002E1C0u: goto label_8002E1C0;
    case 0x8002E1C4u: goto label_8002E1C4;
    case 0x8002E1C8u: goto label_8002E1C8;
    case 0x8002E1CCu: goto label_8002E1CC;
    case 0x8002E1D0u: goto label_8002E1D0;
    case 0x8002E1D4u: goto label_8002E1D4;
    case 0x8002E1D8u: goto label_8002E1D8;
    case 0x8002E1DCu: goto label_8002E1DC;
    case 0x8002E1E0u: goto label_8002E1E0;
    case 0x8002E1E4u: goto label_8002E1E4;
    case 0x8002E1E8u: goto label_8002E1E8;
    case 0x8002E1ECu: goto label_8002E1EC;
    case 0x8002E1F0u: goto label_8002E1F0;
    case 0x8002E1F4u: goto label_8002E1F4;
    case 0x8002E1F8u: goto label_8002E1F8;
    case 0x8002E1FCu: goto label_8002E1FC;
    case 0x8002E200u: goto label_8002E200;
    case 0x8002E204u: goto label_8002E204;
    case 0x8002E208u: goto label_8002E208;
    case 0x8002E20Cu: goto label_8002E20C;
    case 0x8002E210u: goto label_8002E210;
    case 0x8002E214u: goto label_8002E214;
    case 0x8002E218u: goto label_8002E218;
    case 0x8002E21Cu: goto label_8002E21C;
    case 0x8002E220u: goto label_8002E220;
    case 0x8002E224u: goto label_8002E224;
    case 0x8002E228u: goto label_8002E228;
    case 0x8002E22Cu: goto label_8002E22C;
    case 0x8002E230u: goto label_8002E230;
    case 0x8002E234u: goto label_8002E234;
    case 0x8002E238u: goto label_8002E238;
    case 0x8002E23Cu: goto label_8002E23C;
    case 0x8002E240u: goto label_8002E240;
    case 0x8002E244u: goto label_8002E244;
    case 0x8002E248u: goto label_8002E248;
    case 0x8002E24Cu: goto label_8002E24C;
    case 0x8002E250u: goto label_8002E250;
    case 0x8002E254u: goto label_8002E254;
    case 0x8002E258u: goto label_8002E258;
    case 0x8002E25Cu: goto label_8002E25C;
    case 0x8002E260u: goto label_8002E260;
    case 0x8002E264u: goto label_8002E264;
    case 0x8002E268u: goto label_8002E268;
    case 0x8002E26Cu: goto label_8002E26C;
    case 0x8002E270u: goto label_8002E270;
    case 0x8002E274u: goto label_8002E274;
    case 0x8002E278u: goto label_8002E278;
    case 0x8002E27Cu: goto label_8002E27C;
    case 0x8002E280u: goto label_8002E280;
    case 0x8002E284u: goto label_8002E284;
    case 0x8002E288u: goto label_8002E288;
    case 0x8002E28Cu: goto label_8002E28C;
    case 0x8002E290u: goto label_8002E290;
    case 0x8002E294u: goto label_8002E294;
    case 0x8002E298u: goto label_8002E298;
    case 0x8002E29Cu: goto label_8002E29C;
    case 0x8002E2A0u: goto label_8002E2A0;
    case 0x8002E2A4u: goto label_8002E2A4;
    case 0x8002E2A8u: goto label_8002E2A8;
    case 0x8002E2ACu: goto label_8002E2AC;
    case 0x8002E2B0u: goto label_8002E2B0;
    case 0x8002E2B4u: goto label_8002E2B4;
    case 0x8002E2B8u: goto label_8002E2B8;
    case 0x8002E2BCu: goto label_8002E2BC;
    case 0x8002E2C0u: goto label_8002E2C0;
    case 0x8002E2C4u: goto label_8002E2C4;
    case 0x8002E2C8u: goto label_8002E2C8;
    case 0x8002E2CCu: goto label_8002E2CC;
    case 0x8002E2D0u: goto label_8002E2D0;
    case 0x8002E2D4u: goto label_8002E2D4;
    case 0x8002E2D8u: goto label_8002E2D8;
    case 0x8002E2DCu: goto label_8002E2DC;
    case 0x8002E2E0u: goto label_8002E2E0;
    case 0x8002E2E4u: goto label_8002E2E4;
    case 0x8002E2E8u: goto label_8002E2E8;
    case 0x8002E2ECu: goto label_8002E2EC;
    case 0x8002E2F0u: goto label_8002E2F0;
    case 0x8002E2F4u: goto label_8002E2F4;
    case 0x8002E2F8u: goto label_8002E2F8;
    case 0x8002E2FCu: goto label_8002E2FC;
    case 0x8002E300u: goto label_8002E300;
    case 0x8002E304u: goto label_8002E304;
    case 0x8002E308u: goto label_8002E308;
    case 0x8002E30Cu: goto label_8002E30C;
    case 0x8002E310u: goto label_8002E310;
    case 0x8002E314u: goto label_8002E314;
    case 0x8002E318u: goto label_8002E318;
    case 0x8002E31Cu: goto label_8002E31C;
    case 0x8002E320u: goto label_8002E320;
    case 0x8002E324u: goto label_8002E324;
    case 0x8002E328u: goto label_8002E328;
    case 0x8002E32Cu: goto label_8002E32C;
    case 0x8002E330u: goto label_8002E330;
    case 0x8002E334u: goto label_8002E334;
    case 0x8002E338u: goto label_8002E338;
    case 0x8002E33Cu: goto label_8002E33C;
    case 0x8002E340u: goto label_8002E340;
    case 0x8002E344u: goto label_8002E344;
    case 0x8002E348u: goto label_8002E348;
    case 0x8002E34Cu: goto label_8002E34C;
    case 0x8002E350u: goto label_8002E350;
    case 0x8002E354u: goto label_8002E354;
    case 0x8002E358u: goto label_8002E358;
    case 0x8002E35Cu: goto label_8002E35C;
    case 0x8002E360u: goto label_8002E360;
    case 0x8002E364u: goto label_8002E364;
    case 0x8002E368u: goto label_8002E368;
    case 0x8002E36Cu: goto label_8002E36C;
    case 0x8002E370u: goto label_8002E370;
    case 0x8002E374u: goto label_8002E374;
    case 0x8002E378u: goto label_8002E378;
    case 0x8002E37Cu: goto label_8002E37C;
    case 0x8002E380u: goto label_8002E380;
    case 0x8002E384u: goto label_8002E384;
    case 0x8002E388u: goto label_8002E388;
    case 0x8002E38Cu: goto label_8002E38C;
    case 0x8002E390u: goto label_8002E390;
    case 0x8002E394u: goto label_8002E394;
    case 0x8002E398u: goto label_8002E398;
    case 0x8002E39Cu: goto label_8002E39C;
    case 0x8002E3A0u: goto label_8002E3A0;
    case 0x8002E3A4u: goto label_8002E3A4;
    case 0x8002E3A8u: goto label_8002E3A8;
    case 0x8002E3ACu: goto label_8002E3AC;
    case 0x8002E3B0u: goto label_8002E3B0;
    case 0x8002E3B4u: goto label_8002E3B4;
    case 0x8002E3B8u: goto label_8002E3B8;
    case 0x8002E3BCu: goto label_8002E3BC;
    case 0x8002E3C0u: goto label_8002E3C0;
    case 0x8002E3C4u: goto label_8002E3C4;
    case 0x8002E3C8u: goto label_8002E3C8;
    case 0x8002E3CCu: goto label_8002E3CC;
    case 0x8002E3D0u: goto label_8002E3D0;
    case 0x8002E3D4u: goto label_8002E3D4;
    case 0x8002E3D8u: goto label_8002E3D8;
    case 0x8002E3DCu: goto label_8002E3DC;
    case 0x8002E3E0u: goto label_8002E3E0;
    case 0x8002E3E4u: goto label_8002E3E4;
    case 0x8002E3E8u: goto label_8002E3E8;
    case 0x8002E3ECu: goto label_8002E3EC;
    case 0x8002E3F0u: goto label_8002E3F0;
    case 0x8002E3F4u: goto label_8002E3F4;
    case 0x8002E3F8u: goto label_8002E3F8;
    case 0x8002E3FCu: goto label_8002E3FC;
    case 0x8002E400u: goto label_8002E400;
    case 0x8002E404u: goto label_8002E404;
    case 0x8002E408u: goto label_8002E408;
    case 0x8002E40Cu: goto label_8002E40C;
    case 0x8002E410u: goto label_8002E410;
    case 0x8002E414u: goto label_8002E414;
    case 0x8002E418u: goto label_8002E418;
    case 0x8002E41Cu: goto label_8002E41C;
    case 0x8002E420u: goto label_8002E420;
    case 0x8002E424u: goto label_8002E424;
    case 0x8002E428u: goto label_8002E428;
    case 0x8002E42Cu: goto label_8002E42C;
    case 0x8002E430u: goto label_8002E430;
    case 0x8002E434u: goto label_8002E434;
    case 0x8002E438u: goto label_8002E438;
    case 0x8002E43Cu: goto label_8002E43C;
    case 0x8002E440u: goto label_8002E440;
    case 0x8002E444u: goto label_8002E444;
    case 0x8002E448u: goto label_8002E448;
    case 0x8002E44Cu: goto label_8002E44C;
    case 0x8002E450u: goto label_8002E450;
    case 0x8002E454u: goto label_8002E454;
    case 0x8002E458u: goto label_8002E458;
    case 0x8002E45Cu: goto label_8002E45C;
    case 0x8002E460u: goto label_8002E460;
    case 0x8002E464u: goto label_8002E464;
    case 0x8002E468u: goto label_8002E468;
    case 0x8002E46Cu: goto label_8002E46C;
    case 0x8002E470u: goto label_8002E470;
    case 0x8002E474u: goto label_8002E474;
    case 0x8002E478u: goto label_8002E478;
    case 0x8002E47Cu: goto label_8002E47C;
    case 0x8002E480u: goto label_8002E480;
    case 0x8002E484u: goto label_8002E484;
    case 0x8002E488u: goto label_8002E488;
    case 0x8002E48Cu: goto label_8002E48C;
    case 0x8002E490u: goto label_8002E490;
    case 0x8002E494u: goto label_8002E494;
    case 0x8002E498u: goto label_8002E498;
    case 0x8002E49Cu: goto label_8002E49C;
    case 0x8002E4A0u: goto label_8002E4A0;
    case 0x8002E4A4u: goto label_8002E4A4;
    case 0x8002E4A8u: goto label_8002E4A8;
    case 0x8002E4ACu: goto label_8002E4AC;
    case 0x8002E4B0u: goto label_8002E4B0;
    case 0x8002E4B4u: goto label_8002E4B4;
    case 0x8002E4B8u: goto label_8002E4B8;
    case 0x8002E4BCu: goto label_8002E4BC;
    case 0x8002E4C0u: goto label_8002E4C0;
    case 0x8002E4C4u: goto label_8002E4C4;
    case 0x8002E4C8u: goto label_8002E4C8;
    case 0x8002E4CCu: goto label_8002E4CC;
    case 0x8002E4D0u: goto label_8002E4D0;
    case 0x8002E4D4u: goto label_8002E4D4;
    case 0x8002E4D8u: goto label_8002E4D8;
    case 0x8002E4DCu: goto label_8002E4DC;
    case 0x8002E4E0u: goto label_8002E4E0;
    case 0x8002E4E4u: goto label_8002E4E4;
    case 0x8002E4E8u: goto label_8002E4E8;
    case 0x8002E4ECu: goto label_8002E4EC;
    case 0x8002E4F0u: goto label_8002E4F0;
    case 0x8002E4F4u: goto label_8002E4F4;
    case 0x8002E4F8u: goto label_8002E4F8;
    case 0x8002E4FCu: goto label_8002E4FC;
    case 0x8002E500u: goto label_8002E500;
    case 0x8002E504u: goto label_8002E504;
    case 0x8002E508u: goto label_8002E508;
    case 0x8002E50Cu: goto label_8002E50C;
    case 0x8002E510u: goto label_8002E510;
    case 0x8002E514u: goto label_8002E514;
    case 0x8002E518u: goto label_8002E518;
    case 0x8002E51Cu: goto label_8002E51C;
    case 0x8002E520u: goto label_8002E520;
    case 0x8002E524u: goto label_8002E524;
    case 0x8002E528u: goto label_8002E528;
    case 0x8002E52Cu: goto label_8002E52C;
    case 0x8002E530u: goto label_8002E530;
    case 0x8002E534u: goto label_8002E534;
    case 0x8002E538u: goto label_8002E538;
    case 0x8002E53Cu: goto label_8002E53C;
    case 0x8002E540u: goto label_8002E540;
    case 0x8002E544u: goto label_8002E544;
    case 0x8002E548u: goto label_8002E548;
    case 0x8002E54Cu: goto label_8002E54C;
    case 0x8002E550u: goto label_8002E550;
    case 0x8002E554u: goto label_8002E554;
    case 0x8002E558u: goto label_8002E558;
    case 0x8002E55Cu: goto label_8002E55C;
    case 0x8002E560u: goto label_8002E560;
    case 0x8002E564u: goto label_8002E564;
    case 0x8002E568u: goto label_8002E568;
    case 0x8002E56Cu: goto label_8002E56C;
    case 0x8002E570u: goto label_8002E570;
    case 0x8002E574u: goto label_8002E574;
    case 0x8002E578u: goto label_8002E578;
    case 0x8002E57Cu: goto label_8002E57C;
    case 0x8002E580u: goto label_8002E580;
    case 0x8002E584u: goto label_8002E584;
    case 0x8002E588u: goto label_8002E588;
    case 0x8002E58Cu: goto label_8002E58C;
    case 0x8002E590u: goto label_8002E590;
    case 0x8002E594u: goto label_8002E594;
    case 0x8002E598u: goto label_8002E598;
    case 0x8002E59Cu: goto label_8002E59C;
    case 0x8002E5A0u: goto label_8002E5A0;
    case 0x8002E5A4u: goto label_8002E5A4;
    case 0x8002E5A8u: goto label_8002E5A8;
    case 0x8002E5ACu: goto label_8002E5AC;
    case 0x8002E5B0u: goto label_8002E5B0;
    case 0x8002E5B4u: goto label_8002E5B4;
    case 0x8002E5B8u: goto label_8002E5B8;
    case 0x8002E5BCu: goto label_8002E5BC;
    case 0x8002E5C0u: goto label_8002E5C0;
    case 0x8002E5C4u: goto label_8002E5C4;
    case 0x8002E5C8u: goto label_8002E5C8;
    case 0x8002E5CCu: goto label_8002E5CC;
    case 0x8002E5D0u: goto label_8002E5D0;
    case 0x8002E5D4u: goto label_8002E5D4;
    case 0x8002E5D8u: goto label_8002E5D8;
    case 0x8002E5DCu: goto label_8002E5DC;
    case 0x8002E5E0u: goto label_8002E5E0;
    case 0x8002E5E4u: goto label_8002E5E4;
    case 0x8002E5E8u: goto label_8002E5E8;
    case 0x8002E5ECu: goto label_8002E5EC;
    case 0x8002E5F0u: goto label_8002E5F0;
    case 0x8002E5F4u: goto label_8002E5F4;
    case 0x8002E5F8u: goto label_8002E5F8;
    case 0x8002E5FCu: goto label_8002E5FC;
    case 0x8002E600u: goto label_8002E600;
    case 0x8002E604u: goto label_8002E604;
    case 0x8002E608u: goto label_8002E608;
    case 0x8002E60Cu: goto label_8002E60C;
    case 0x8002E610u: goto label_8002E610;
    case 0x8002E614u: goto label_8002E614;
    case 0x8002E618u: goto label_8002E618;
    case 0x8002E61Cu: goto label_8002E61C;
    case 0x8002E620u: goto label_8002E620;
    case 0x8002E624u: goto label_8002E624;
    case 0x8002E628u: goto label_8002E628;
    case 0x8002E62Cu: goto label_8002E62C;
    case 0x8002E630u: goto label_8002E630;
    case 0x8002E634u: goto label_8002E634;
    case 0x8002E638u: goto label_8002E638;
    case 0x8002E63Cu: goto label_8002E63C;
    case 0x8002E640u: goto label_8002E640;
    case 0x8002E644u: goto label_8002E644;
    case 0x8002E648u: goto label_8002E648;
    case 0x8002E64Cu: goto label_8002E64C;
    case 0x8002E650u: goto label_8002E650;
    case 0x8002E654u: goto label_8002E654;
    case 0x8002E658u: goto label_8002E658;
    case 0x8002E65Cu: goto label_8002E65C;
    case 0x8002E660u: goto label_8002E660;
    case 0x8002E664u: goto label_8002E664;
    case 0x8002E668u: goto label_8002E668;
    case 0x8002E66Cu: goto label_8002E66C;
    case 0x8002E670u: goto label_8002E670;
    case 0x8002E674u: goto label_8002E674;
    case 0x8002E678u: goto label_8002E678;
    case 0x8002E67Cu: goto label_8002E67C;
    case 0x8002E680u: goto label_8002E680;
    case 0x8002E684u: goto label_8002E684;
    case 0x8002E688u: goto label_8002E688;
    case 0x8002E68Cu: goto label_8002E68C;
    case 0x8002E690u: goto label_8002E690;
    case 0x8002E694u: goto label_8002E694;
    case 0x8002E698u: goto label_8002E698;
    case 0x8002E69Cu: goto label_8002E69C;
    case 0x8002E6A0u: goto label_8002E6A0;
    case 0x8002E6A4u: goto label_8002E6A4;
    case 0x8002E6A8u: goto label_8002E6A8;
    case 0x8002E6ACu: goto label_8002E6AC;
    case 0x8002E6B0u: goto label_8002E6B0;
    case 0x8002E6B4u: goto label_8002E6B4;
    case 0x8002E6B8u: goto label_8002E6B8;
    case 0x8002E6BCu: goto label_8002E6BC;
    case 0x8002E6C0u: goto label_8002E6C0;
    case 0x8002E6C4u: goto label_8002E6C4;
    case 0x8002E6C8u: goto label_8002E6C8;
    case 0x8002E6CCu: goto label_8002E6CC;
    case 0x8002E6D0u: goto label_8002E6D0;
    case 0x8002E6D4u: goto label_8002E6D4;
    case 0x8002E6D8u: goto label_8002E6D8;
    case 0x8002E6DCu: goto label_8002E6DC;
    case 0x8002E6E0u: goto label_8002E6E0;
    case 0x8002E6E4u: goto label_8002E6E4;
    case 0x8002E6E8u: goto label_8002E6E8;
    case 0x8002E6ECu: goto label_8002E6EC;
    case 0x8002E6F0u: goto label_8002E6F0;
    case 0x8002E6F4u: goto label_8002E6F4;
    case 0x8002E6F8u: goto label_8002E6F8;
    case 0x8002E6FCu: goto label_8002E6FC;
    case 0x8002E700u: goto label_8002E700;
    case 0x8002E704u: goto label_8002E704;
    case 0x8002E708u: goto label_8002E708;
    case 0x8002E70Cu: goto label_8002E70C;
    case 0x8002E710u: goto label_8002E710;
    case 0x8002E714u: goto label_8002E714;
    case 0x8002E718u: goto label_8002E718;
    case 0x8002E71Cu: goto label_8002E71C;
    case 0x8002E720u: goto label_8002E720;
    case 0x8002E724u: goto label_8002E724;
    case 0x8002E728u: goto label_8002E728;
    case 0x8002E72Cu: goto label_8002E72C;
    case 0x8002E730u: goto label_8002E730;
    case 0x8002E734u: goto label_8002E734;
    case 0x8002E738u: goto label_8002E738;
    case 0x8002E73Cu: goto label_8002E73C;
    case 0x8002E740u: goto label_8002E740;
    case 0x8002E744u: goto label_8002E744;
    case 0x8002E748u: goto label_8002E748;
    case 0x8002E74Cu: goto label_8002E74C;
    case 0x8002E750u: goto label_8002E750;
    case 0x8002E754u: goto label_8002E754;
    case 0x8002E758u: goto label_8002E758;
    case 0x8002E75Cu: goto label_8002E75C;
    case 0x8002E760u: goto label_8002E760;
    case 0x8002E764u: goto label_8002E764;
    case 0x8002E768u: goto label_8002E768;
    case 0x8002E76Cu: goto label_8002E76C;
    case 0x8002E770u: goto label_8002E770;
    case 0x8002E774u: goto label_8002E774;
    case 0x8002E778u: goto label_8002E778;
    case 0x8002E77Cu: goto label_8002E77C;
    case 0x8002E780u: goto label_8002E780;
    case 0x8002E784u: goto label_8002E784;
    case 0x8002E788u: goto label_8002E788;
    case 0x8002E78Cu: goto label_8002E78C;
    case 0x8002E790u: goto label_8002E790;
    case 0x8002E794u: goto label_8002E794;
    case 0x8002E798u: goto label_8002E798;
    case 0x8002E79Cu: goto label_8002E79C;
    case 0x8002E7A0u: goto label_8002E7A0;
    case 0x8002E7A4u: goto label_8002E7A4;
    case 0x8002E7A8u: goto label_8002E7A8;
    case 0x8002E7ACu: goto label_8002E7AC;
    case 0x8002E7B0u: goto label_8002E7B0;
    case 0x8002E7B4u: goto label_8002E7B4;
    case 0x8002E7B8u: goto label_8002E7B8;
    case 0x8002E7BCu: goto label_8002E7BC;
    case 0x8002E7C0u: goto label_8002E7C0;
    case 0x8002E7C4u: goto label_8002E7C4;
    case 0x8002E7C8u: goto label_8002E7C8;
    case 0x8002E7CCu: goto label_8002E7CC;
    case 0x8002E7D0u: goto label_8002E7D0;
    case 0x8002E7D4u: goto label_8002E7D4;
    case 0x8002E7D8u: goto label_8002E7D8;
    case 0x8002E7DCu: goto label_8002E7DC;
    case 0x8002E7E0u: goto label_8002E7E0;
    case 0x8002E7E4u: goto label_8002E7E4;
    case 0x8002E7E8u: goto label_8002E7E8;
    case 0x8002E7ECu: goto label_8002E7EC;
    case 0x8002E7F0u: goto label_8002E7F0;
    case 0x8002E7F4u: goto label_8002E7F4;
    case 0x8002E7F8u: goto label_8002E7F8;
    case 0x8002E7FCu: goto label_8002E7FC;
    case 0x8002E800u: goto label_8002E800;
    case 0x8002E804u: goto label_8002E804;
    case 0x8002E808u: goto label_8002E808;
    case 0x8002E80Cu: goto label_8002E80C;
    case 0x8002E810u: goto label_8002E810;
    case 0x8002E814u: goto label_8002E814;
    case 0x8002E818u: goto label_8002E818;
    case 0x8002E81Cu: goto label_8002E81C;
    case 0x8002E820u: goto label_8002E820;
    case 0x8002E824u: goto label_8002E824;
    case 0x8002E828u: goto label_8002E828;
    case 0x8002E82Cu: goto label_8002E82C;
    case 0x8002E830u: goto label_8002E830;
    case 0x8002E834u: goto label_8002E834;
    case 0x8002E838u: goto label_8002E838;
    case 0x8002E83Cu: goto label_8002E83C;
    case 0x8002E840u: goto label_8002E840;
    case 0x8002E844u: goto label_8002E844;
    case 0x8002E848u: goto label_8002E848;
    case 0x8002E84Cu: goto label_8002E84C;
    case 0x8002E850u: goto label_8002E850;
    case 0x8002E854u: goto label_8002E854;
    case 0x8002E858u: goto label_8002E858;
    case 0x8002E85Cu: goto label_8002E85C;
    case 0x8002E860u: goto label_8002E860;
    case 0x8002E864u: goto label_8002E864;
    case 0x8002E868u: goto label_8002E868;
    case 0x8002E86Cu: goto label_8002E86C;
    case 0x8002E870u: goto label_8002E870;
    case 0x8002E874u: goto label_8002E874;
    case 0x8002E878u: goto label_8002E878;
    case 0x8002E87Cu: goto label_8002E87C;
    case 0x8002E880u: goto label_8002E880;
    case 0x8002E884u: goto label_8002E884;
    case 0x8002E888u: goto label_8002E888;
    case 0x8002E88Cu: goto label_8002E88C;
    case 0x8002E890u: goto label_8002E890;
    case 0x8002E894u: goto label_8002E894;
    case 0x8002E898u: goto label_8002E898;
    case 0x8002E89Cu: goto label_8002E89C;
    case 0x8002E8A0u: goto label_8002E8A0;
    case 0x8002E8A4u: goto label_8002E8A4;
    case 0x8002E8A8u: goto label_8002E8A8;
    case 0x8002E8ACu: goto label_8002E8AC;
    case 0x8002E8B0u: goto label_8002E8B0;
    case 0x8002E8B4u: goto label_8002E8B4;
    case 0x8002E8B8u: goto label_8002E8B8;
    case 0x8002E8BCu: goto label_8002E8BC;
    case 0x8002E8C0u: goto label_8002E8C0;
    case 0x8002E8C4u: goto label_8002E8C4;
    case 0x8002E8C8u: goto label_8002E8C8;
    case 0x8002E8CCu: goto label_8002E8CC;
    case 0x8002E8D0u: goto label_8002E8D0;
    case 0x8002E8D4u: goto label_8002E8D4;
    case 0x8002E8D8u: goto label_8002E8D8;
    case 0x8002E8DCu: goto label_8002E8DC;
    case 0x8002E8E0u: goto label_8002E8E0;
    case 0x8002E8E4u: goto label_8002E8E4;
    case 0x8002E8E8u: goto label_8002E8E8;
    case 0x8002E8ECu: goto label_8002E8EC;
    case 0x8002E8F0u: goto label_8002E8F0;
    case 0x8002E8F4u: goto label_8002E8F4;
    case 0x8002E8F8u: goto label_8002E8F8;
    case 0x8002E8FCu: goto label_8002E8FC;
    case 0x8002E900u: goto label_8002E900;
    case 0x8002E904u: goto label_8002E904;
    case 0x8002E908u: goto label_8002E908;
    case 0x8002E90Cu: goto label_8002E90C;
    case 0x8002E910u: goto label_8002E910;
    case 0x8002E914u: goto label_8002E914;
    case 0x8002E918u: goto label_8002E918;
    case 0x8002E91Cu: goto label_8002E91C;
    case 0x8002E920u: goto label_8002E920;
    case 0x8002E924u: goto label_8002E924;
    case 0x8002E928u: goto label_8002E928;
    case 0x8002E92Cu: goto label_8002E92C;
    case 0x8002E930u: goto label_8002E930;
    case 0x8002E934u: goto label_8002E934;
    case 0x8002E938u: goto label_8002E938;
    case 0x8002E93Cu: goto label_8002E93C;
    case 0x8002E940u: goto label_8002E940;
    case 0x8002E944u: goto label_8002E944;
    case 0x8002E948u: goto label_8002E948;
    case 0x8002E94Cu: goto label_8002E94C;
    case 0x8002E950u: goto label_8002E950;
    case 0x8002E954u: goto label_8002E954;
    case 0x8002E958u: goto label_8002E958;
    case 0x8002E95Cu: goto label_8002E95C;
    case 0x8002E960u: goto label_8002E960;
    case 0x8002E964u: goto label_8002E964;
    case 0x8002E968u: goto label_8002E968;
    case 0x8002E96Cu: goto label_8002E96C;
    case 0x8002E970u: goto label_8002E970;
    case 0x8002E974u: goto label_8002E974;
    case 0x8002E978u: goto label_8002E978;
    case 0x8002E97Cu: goto label_8002E97C;
    case 0x8002E980u: goto label_8002E980;
    case 0x8002E984u: goto label_8002E984;
    case 0x8002E988u: goto label_8002E988;
    case 0x8002E98Cu: goto label_8002E98C;
    case 0x8002E990u: goto label_8002E990;
    case 0x8002E994u: goto label_8002E994;
    case 0x8002E998u: goto label_8002E998;
    case 0x8002E99Cu: goto label_8002E99C;
    case 0x8002E9A0u: goto label_8002E9A0;
    case 0x8002E9A4u: goto label_8002E9A4;
    case 0x8002E9A8u: goto label_8002E9A8;
    case 0x8002E9ACu: goto label_8002E9AC;
    case 0x8002E9B0u: goto label_8002E9B0;
    case 0x8002E9B4u: goto label_8002E9B4;
    case 0x8002E9B8u: goto label_8002E9B8;
    case 0x8002E9BCu: goto label_8002E9BC;
    case 0x8002E9C0u: goto label_8002E9C0;
    case 0x8002E9C4u: goto label_8002E9C4;
    case 0x8002E9C8u: goto label_8002E9C8;
    case 0x8002E9CCu: goto label_8002E9CC;
    case 0x8002E9D0u: goto label_8002E9D0;
    case 0x8002E9D4u: goto label_8002E9D4;
    case 0x8002E9D8u: goto label_8002E9D8;
    case 0x8002E9DCu: goto label_8002E9DC;
    case 0x8002E9E0u: goto label_8002E9E0;
    case 0x8002E9E4u: goto label_8002E9E4;
    case 0x8002E9E8u: goto label_8002E9E8;
    case 0x8002E9ECu: goto label_8002E9EC;
    case 0x8002E9F0u: goto label_8002E9F0;
    case 0x8002E9F4u: goto label_8002E9F4;
    case 0x8002E9F8u: goto label_8002E9F8;
    case 0x8002E9FCu: goto label_8002E9FC;
    case 0x8002EA00u: goto label_8002EA00;
    case 0x8002EA04u: goto label_8002EA04;
    case 0x8002EA08u: goto label_8002EA08;
    case 0x8002EA0Cu: goto label_8002EA0C;
    case 0x8002EA10u: goto label_8002EA10;
    case 0x8002EA14u: goto label_8002EA14;
    case 0x8002EA18u: goto label_8002EA18;
    case 0x8002EA1Cu: goto label_8002EA1C;
    case 0x8002EA20u: goto label_8002EA20;
    case 0x8002EA24u: goto label_8002EA24;
    case 0x8002EA28u: goto label_8002EA28;
    case 0x8002EA2Cu: goto label_8002EA2C;
    case 0x8002EA30u: goto label_8002EA30;
    case 0x8002EA34u: goto label_8002EA34;
    case 0x8002EA38u: goto label_8002EA38;
    case 0x8002EA3Cu: goto label_8002EA3C;
    case 0x8002EA40u: goto label_8002EA40;
    case 0x8002EA44u: goto label_8002EA44;
    case 0x8002EA48u: goto label_8002EA48;
    case 0x8002EA4Cu: goto label_8002EA4C;
    case 0x8002EA50u: goto label_8002EA50;
    case 0x8002EA54u: goto label_8002EA54;
    case 0x8002EA58u: goto label_8002EA58;
    case 0x8002EA5Cu: goto label_8002EA5C;
    case 0x8002EA60u: goto label_8002EA60;
    case 0x8002EA64u: goto label_8002EA64;
    case 0x8002EA68u: goto label_8002EA68;
    case 0x8002EA6Cu: goto label_8002EA6C;
    case 0x8002EA70u: goto label_8002EA70;
    case 0x8002EA74u: goto label_8002EA74;
    case 0x8002EA78u: goto label_8002EA78;
    case 0x8002EA7Cu: goto label_8002EA7C;
    case 0x8002EA80u: goto label_8002EA80;
    case 0x8002EA84u: goto label_8002EA84;
    case 0x8002EA88u: goto label_8002EA88;
    case 0x8002EA8Cu: goto label_8002EA8C;
    case 0x8002EA90u: goto label_8002EA90;
    case 0x8002EA94u: goto label_8002EA94;
    case 0x8002EA98u: goto label_8002EA98;
    case 0x8002EA9Cu: goto label_8002EA9C;
    case 0x8002EAA0u: goto label_8002EAA0;
    case 0x8002EAA4u: goto label_8002EAA4;
    case 0x8002EAA8u: goto label_8002EAA8;
    case 0x8002EAACu: goto label_8002EAAC;
    case 0x8002EAB0u: goto label_8002EAB0;
    case 0x8002EAB4u: goto label_8002EAB4;
    case 0x8002EAB8u: goto label_8002EAB8;
    case 0x8002EABCu: goto label_8002EABC;
    case 0x8002EAC0u: goto label_8002EAC0;
    case 0x8002EAC4u: goto label_8002EAC4;
    case 0x8002EAC8u: goto label_8002EAC8;
    case 0x8002EACCu: goto label_8002EACC;
    case 0x8002EAD0u: goto label_8002EAD0;
    case 0x8002EAD4u: goto label_8002EAD4;
    case 0x8002EAD8u: goto label_8002EAD8;
    case 0x8002EADCu: goto label_8002EADC;
    case 0x8002EAE0u: goto label_8002EAE0;
    case 0x8002EAE4u: goto label_8002EAE4;
    case 0x8002EAE8u: goto label_8002EAE8;
    case 0x8002EAECu: goto label_8002EAEC;
    case 0x8002EAF0u: goto label_8002EAF0;
    case 0x8002EAF4u: goto label_8002EAF4;
    case 0x8002EAF8u: goto label_8002EAF8;
    case 0x8002EAFCu: goto label_8002EAFC;
    case 0x8002EB00u: goto label_8002EB00;
    case 0x8002EB04u: goto label_8002EB04;
    case 0x8002EB08u: goto label_8002EB08;
    case 0x8002EB0Cu: goto label_8002EB0C;
    case 0x8002EB10u: goto label_8002EB10;
    case 0x8002EB14u: goto label_8002EB14;
    case 0x8002EB18u: goto label_8002EB18;
    case 0x8002EB1Cu: goto label_8002EB1C;
    case 0x8002EB20u: goto label_8002EB20;
    case 0x8002EB24u: goto label_8002EB24;
    case 0x8002EB28u: goto label_8002EB28;
    case 0x8002EB2Cu: goto label_8002EB2C;
    case 0x8002EB30u: goto label_8002EB30;
    case 0x8002EB34u: goto label_8002EB34;
    case 0x8002EB38u: goto label_8002EB38;
    case 0x8002EB3Cu: goto label_8002EB3C;
    case 0x8002EB40u: goto label_8002EB40;
    case 0x8002EB44u: goto label_8002EB44;
    case 0x8002EB48u: goto label_8002EB48;
    case 0x8002EB4Cu: goto label_8002EB4C;
    case 0x8002EB50u: goto label_8002EB50;
    case 0x8002EB54u: goto label_8002EB54;
    case 0x8002EB58u: goto label_8002EB58;
    case 0x8002EB5Cu: goto label_8002EB5C;
    case 0x8002EB60u: goto label_8002EB60;
    case 0x8002EB64u: goto label_8002EB64;
    case 0x8002EB68u: goto label_8002EB68;
    case 0x8002EB6Cu: goto label_8002EB6C;
    case 0x8002EB70u: goto label_8002EB70;
    case 0x8002EB74u: goto label_8002EB74;
    case 0x8002EB78u: goto label_8002EB78;
    case 0x8002EB7Cu: goto label_8002EB7C;
    case 0x8002EB80u: goto label_8002EB80;
    case 0x8002EB84u: goto label_8002EB84;
    case 0x8002EB88u: goto label_8002EB88;
    case 0x8002EB8Cu: goto label_8002EB8C;
    case 0x8002EB90u: goto label_8002EB90;
    case 0x8002EB94u: goto label_8002EB94;
    case 0x8002EB98u: goto label_8002EB98;
    case 0x8002EB9Cu: goto label_8002EB9C;
    case 0x8002EBA0u: goto label_8002EBA0;
    case 0x8002EBA4u: goto label_8002EBA4;
    case 0x8002EBA8u: goto label_8002EBA8;
    case 0x8002EBACu: goto label_8002EBAC;
    case 0x8002EBB0u: goto label_8002EBB0;
    case 0x8002EBB4u: goto label_8002EBB4;
    case 0x8002EBB8u: goto label_8002EBB8;
    case 0x8002EBBCu: goto label_8002EBBC;
    case 0x8002EBC0u: goto label_8002EBC0;
    case 0x8002EBC4u: goto label_8002EBC4;
    case 0x8002EBC8u: goto label_8002EBC8;
    case 0x8002EBCCu: goto label_8002EBCC;
    case 0x8002EBD0u: goto label_8002EBD0;
    case 0x8002EBD4u: goto label_8002EBD4;
    case 0x8002EBD8u: goto label_8002EBD8;
    case 0x8002EBDCu: goto label_8002EBDC;
    case 0x8002EBE0u: goto label_8002EBE0;
    case 0x8002EBE4u: goto label_8002EBE4;
    case 0x8002EBE8u: goto label_8002EBE8;
    case 0x8002EBECu: goto label_8002EBEC;
    case 0x8002EBF0u: goto label_8002EBF0;
    case 0x8002EBF4u: goto label_8002EBF4;
    case 0x8002EBF8u: goto label_8002EBF8;
    case 0x8002EBFCu: goto label_8002EBFC;
    case 0x8002EC00u: goto label_8002EC00;
    case 0x8002EC04u: goto label_8002EC04;
    case 0x8002EC08u: goto label_8002EC08;
    case 0x8002EC0Cu: goto label_8002EC0C;
    case 0x8002EC10u: goto label_8002EC10;
    case 0x8002EC14u: goto label_8002EC14;
    case 0x8002EC18u: goto label_8002EC18;
    case 0x8002EC1Cu: goto label_8002EC1C;
    case 0x8002EC20u: goto label_8002EC20;
    case 0x8002EC24u: goto label_8002EC24;
    case 0x8002EC28u: goto label_8002EC28;
    case 0x8002EC2Cu: goto label_8002EC2C;
    case 0x8002EC30u: goto label_8002EC30;
    case 0x8002EC34u: goto label_8002EC34;
    case 0x8002EC38u: goto label_8002EC38;
    case 0x8002EC3Cu: goto label_8002EC3C;
    case 0x8002EC40u: goto label_8002EC40;
    case 0x8002EC44u: goto label_8002EC44;
    case 0x8002EC48u: goto label_8002EC48;
    case 0x8002EC4Cu: goto label_8002EC4C;
    case 0x8002EC50u: goto label_8002EC50;
    case 0x8002EC54u: goto label_8002EC54;
    case 0x8002EC58u: goto label_8002EC58;
    case 0x8002EC5Cu: goto label_8002EC5C;
    case 0x8002EC60u: goto label_8002EC60;
    case 0x8002EC64u: goto label_8002EC64;
    case 0x8002EC68u: goto label_8002EC68;
    case 0x8002EC6Cu: goto label_8002EC6C;
    case 0x8002EC70u: goto label_8002EC70;
    case 0x8002EC74u: goto label_8002EC74;
    case 0x8002EC78u: goto label_8002EC78;
    case 0x8002EC7Cu: goto label_8002EC7C;
    case 0x8002EC80u: goto label_8002EC80;
    case 0x8002EC84u: goto label_8002EC84;
    case 0x8002EC88u: goto label_8002EC88;
    case 0x8002EC8Cu: goto label_8002EC8C;
    case 0x8002EC90u: goto label_8002EC90;
    case 0x8002EC94u: goto label_8002EC94;
    case 0x8002EC98u: goto label_8002EC98;
    case 0x8002EC9Cu: goto label_8002EC9C;
    case 0x8002ECA0u: goto label_8002ECA0;
    case 0x8002ECA4u: goto label_8002ECA4;
    case 0x8002ECA8u: goto label_8002ECA8;
    case 0x8002ECACu: goto label_8002ECAC;
    case 0x8002ECB0u: goto label_8002ECB0;
    case 0x8002ECB4u: goto label_8002ECB4;
    case 0x8002ECB8u: goto label_8002ECB8;
    case 0x8002ECBCu: goto label_8002ECBC;
    case 0x8002ECC0u: goto label_8002ECC0;
    case 0x8002ECC4u: goto label_8002ECC4;
    case 0x8002ECC8u: goto label_8002ECC8;
    case 0x8002ECCCu: goto label_8002ECCC;
    case 0x8002ECD0u: goto label_8002ECD0;
    case 0x8002ECD4u: goto label_8002ECD4;
    case 0x8002ECD8u: goto label_8002ECD8;
    case 0x8002ECDCu: goto label_8002ECDC;
    case 0x8002ECE0u: goto label_8002ECE0;
    case 0x8002ECE4u: goto label_8002ECE4;
    case 0x8002ECE8u: goto label_8002ECE8;
    case 0x8002ECECu: goto label_8002ECEC;
    case 0x8002ECF0u: goto label_8002ECF0;
    case 0x8002ECF4u: goto label_8002ECF4;
    case 0x8002ECF8u: goto label_8002ECF8;
    case 0x8002ECFCu: goto label_8002ECFC;
    case 0x8002ED00u: goto label_8002ED00;
    case 0x8002ED04u: goto label_8002ED04;
    case 0x8002ED08u: goto label_8002ED08;
    case 0x8002ED0Cu: goto label_8002ED0C;
    case 0x8002ED10u: goto label_8002ED10;
    case 0x8002ED14u: goto label_8002ED14;
    case 0x8002ED18u: goto label_8002ED18;
    case 0x8002ED1Cu: goto label_8002ED1C;
    case 0x8002ED20u: goto label_8002ED20;
    case 0x8002ED24u: goto label_8002ED24;
    case 0x8002ED28u: goto label_8002ED28;
    case 0x8002ED2Cu: goto label_8002ED2C;
    case 0x8002ED30u: goto label_8002ED30;
    case 0x8002ED34u: goto label_8002ED34;
    case 0x8002ED38u: goto label_8002ED38;
    case 0x8002ED3Cu: goto label_8002ED3C;
    case 0x8002ED40u: goto label_8002ED40;
    case 0x8002ED44u: goto label_8002ED44;
    case 0x8002ED48u: goto label_8002ED48;
    case 0x8002ED4Cu: goto label_8002ED4C;
    case 0x8002ED50u: goto label_8002ED50;
    case 0x8002ED54u: goto label_8002ED54;
    case 0x8002ED58u: goto label_8002ED58;
    case 0x8002ED5Cu: goto label_8002ED5C;
    case 0x8002ED60u: goto label_8002ED60;
    case 0x8002ED64u: goto label_8002ED64;
    case 0x8002ED68u: goto label_8002ED68;
    case 0x8002ED6Cu: goto label_8002ED6C;
    case 0x8002ED70u: goto label_8002ED70;
    case 0x8002ED74u: goto label_8002ED74;
    case 0x8002ED78u: goto label_8002ED78;
    case 0x8002ED7Cu: goto label_8002ED7C;
    case 0x8002ED80u: goto label_8002ED80;
    case 0x8002ED84u: goto label_8002ED84;
    case 0x8002ED88u: goto label_8002ED88;
    case 0x8002ED8Cu: goto label_8002ED8C;
    case 0x8002ED90u: goto label_8002ED90;
    case 0x8002ED94u: goto label_8002ED94;
    case 0x8002ED98u: goto label_8002ED98;
    case 0x8002ED9Cu: goto label_8002ED9C;
    case 0x8002EDA0u: goto label_8002EDA0;
    case 0x8002EDA4u: goto label_8002EDA4;
    case 0x8002EDA8u: goto label_8002EDA8;
    case 0x8002EDACu: goto label_8002EDAC;
    case 0x8002EDB0u: goto label_8002EDB0;
    case 0x8002EDB4u: goto label_8002EDB4;
    case 0x8002EDB8u: goto label_8002EDB8;
    case 0x8002EDBCu: goto label_8002EDBC;
    case 0x8002EDC0u: goto label_8002EDC0;
    case 0x8002EDC4u: goto label_8002EDC4;
    case 0x8002EDC8u: goto label_8002EDC8;
    case 0x8002EDCCu: goto label_8002EDCC;
    case 0x8002EDD0u: goto label_8002EDD0;
    case 0x8002EDD4u: goto label_8002EDD4;
    case 0x8002EDD8u: goto label_8002EDD8;
    case 0x8002EDDCu: goto label_8002EDDC;
    case 0x8002EDE0u: goto label_8002EDE0;
    case 0x8002EDE4u: goto label_8002EDE4;
    case 0x8002EDE8u: goto label_8002EDE8;
    case 0x8002EDECu: goto label_8002EDEC;
    case 0x8002EDF0u: goto label_8002EDF0;
    case 0x8002EDF4u: goto label_8002EDF4;
    case 0x8002EDF8u: goto label_8002EDF8;
    case 0x8002EDFCu: goto label_8002EDFC;
    case 0x8002EE00u: goto label_8002EE00;
    case 0x8002EE04u: goto label_8002EE04;
    case 0x8002EE08u: goto label_8002EE08;
    case 0x8002EE0Cu: goto label_8002EE0C;
    case 0x8002EE10u: goto label_8002EE10;
    case 0x8002EE14u: goto label_8002EE14;
    case 0x8002EE18u: goto label_8002EE18;
    case 0x8002EE1Cu: goto label_8002EE1C;
    case 0x8002EE20u: goto label_8002EE20;
    case 0x8002EE24u: goto label_8002EE24;
    case 0x8002EE28u: goto label_8002EE28;
    case 0x8002EE2Cu: goto label_8002EE2C;
    case 0x8002EE30u: goto label_8002EE30;
    case 0x8002EE34u: goto label_8002EE34;
    case 0x8002EE38u: goto label_8002EE38;
    case 0x8002EE3Cu: goto label_8002EE3C;
    case 0x8002EE40u: goto label_8002EE40;
    case 0x8002EE44u: goto label_8002EE44;
    case 0x8002EE48u: goto label_8002EE48;
    case 0x8002EE4Cu: goto label_8002EE4C;
    case 0x8002EE50u: goto label_8002EE50;
    case 0x8002EE54u: goto label_8002EE54;
    case 0x8002EE58u: goto label_8002EE58;
    case 0x8002EE5Cu: goto label_8002EE5C;
    case 0x8002EE60u: goto label_8002EE60;
    case 0x8002EE64u: goto label_8002EE64;
    case 0x8002EE68u: goto label_8002EE68;
    case 0x8002EE6Cu: goto label_8002EE6C;
    case 0x8002EE70u: goto label_8002EE70;
    case 0x8002EE74u: goto label_8002EE74;
    case 0x8002EE78u: goto label_8002EE78;
    case 0x8002EE7Cu: goto label_8002EE7C;
    case 0x8002EE80u: goto label_8002EE80;
    case 0x8002EE84u: goto label_8002EE84;
    case 0x8002EE88u: goto label_8002EE88;
    case 0x8002EE8Cu: goto label_8002EE8C;
    case 0x8002EE90u: goto label_8002EE90;
    case 0x8002EE94u: goto label_8002EE94;
    case 0x8002EE98u: goto label_8002EE98;
    case 0x8002EE9Cu: goto label_8002EE9C;
    case 0x8002EEA0u: goto label_8002EEA0;
    case 0x8002EEA4u: goto label_8002EEA4;
    case 0x8002EEA8u: goto label_8002EEA8;
    case 0x8002EEACu: goto label_8002EEAC;
    case 0x8002EEB0u: goto label_8002EEB0;
    case 0x8002EEB4u: goto label_8002EEB4;
    case 0x8002EEB8u: goto label_8002EEB8;
    case 0x8002EEBCu: goto label_8002EEBC;
    case 0x8002EEC0u: goto label_8002EEC0;
    case 0x8002EEC4u: goto label_8002EEC4;
    case 0x8002EEC8u: goto label_8002EEC8;
    case 0x8002EECCu: goto label_8002EECC;
    case 0x8002EED0u: goto label_8002EED0;
    case 0x8002EED4u: goto label_8002EED4;
    case 0x8002EED8u: goto label_8002EED8;
    case 0x8002EEDCu: goto label_8002EEDC;
    case 0x8002EEE0u: goto label_8002EEE0;
    case 0x8002EEE4u: goto label_8002EEE4;
    case 0x8002EEE8u: goto label_8002EEE8;
    case 0x8002EEECu: goto label_8002EEEC;
    case 0x8002EEF0u: goto label_8002EEF0;
    case 0x8002EEF4u: goto label_8002EEF4;
    case 0x8002EEF8u: goto label_8002EEF8;
    case 0x8002EEFCu: goto label_8002EEFC;
    case 0x8002EF00u: goto label_8002EF00;
    case 0x8002EF04u: goto label_8002EF04;
    case 0x8002EF08u: goto label_8002EF08;
    case 0x8002EF0Cu: goto label_8002EF0C;
    case 0x8002EF10u: goto label_8002EF10;
    case 0x8002EF14u: goto label_8002EF14;
    case 0x8002EF18u: goto label_8002EF18;
    case 0x8002EF1Cu: goto label_8002EF1C;
    case 0x8002EF20u: goto label_8002EF20;
    case 0x8002EF24u: goto label_8002EF24;
    case 0x8002EF28u: goto label_8002EF28;
    case 0x8002EF2Cu: goto label_8002EF2C;
    case 0x8002EF30u: goto label_8002EF30;
    case 0x8002EF34u: goto label_8002EF34;
    case 0x8002EF38u: goto label_8002EF38;
    case 0x8002EF3Cu: goto label_8002EF3C;
    case 0x8002EF40u: goto label_8002EF40;
    case 0x8002EF44u: goto label_8002EF44;
    case 0x8002EF48u: goto label_8002EF48;
    case 0x8002EF4Cu: goto label_8002EF4C;
    case 0x8002EF50u: goto label_8002EF50;
    case 0x8002EF54u: goto label_8002EF54;
    case 0x8002EF58u: goto label_8002EF58;
    case 0x8002EF5Cu: goto label_8002EF5C;
    case 0x8002EF60u: goto label_8002EF60;
    case 0x8002EF64u: goto label_8002EF64;
    case 0x8002EF68u: goto label_8002EF68;
    case 0x8002EF6Cu: goto label_8002EF6C;
    case 0x8002EF70u: goto label_8002EF70;
    case 0x8002EF74u: goto label_8002EF74;
    case 0x8002EF78u: goto label_8002EF78;
    case 0x8002EF7Cu: goto label_8002EF7C;
    case 0x8002EF80u: goto label_8002EF80;
    case 0x8002EF84u: goto label_8002EF84;
    case 0x8002EF88u: goto label_8002EF88;
    case 0x8002EF8Cu: goto label_8002EF8C;
    case 0x8002EF90u: goto label_8002EF90;
    case 0x8002EF94u: goto label_8002EF94;
    case 0x8002EF98u: goto label_8002EF98;
    case 0x8002EF9Cu: goto label_8002EF9C;
    case 0x8002EFA0u: goto label_8002EFA0;
    case 0x8002EFA4u: goto label_8002EFA4;
    case 0x8002EFA8u: goto label_8002EFA8;
    case 0x8002EFACu: goto label_8002EFAC;
    case 0x8002EFB0u: goto label_8002EFB0;
    case 0x8002EFB4u: goto label_8002EFB4;
    case 0x8002EFB8u: goto label_8002EFB8;
    case 0x8002EFBCu: goto label_8002EFBC;
    case 0x8002EFC0u: goto label_8002EFC0;
    case 0x8002EFC4u: goto label_8002EFC4;
    case 0x8002EFC8u: goto label_8002EFC8;
    case 0x8002EFCCu: goto label_8002EFCC;
    case 0x8002EFD0u: goto label_8002EFD0;
    case 0x8002EFD4u: goto label_8002EFD4;
    case 0x8002EFD8u: goto label_8002EFD8;
    case 0x8002EFDCu: goto label_8002EFDC;
    case 0x8002EFE0u: goto label_8002EFE0;
    case 0x8002EFE4u: goto label_8002EFE4;
    case 0x8002EFE8u: goto label_8002EFE8;
    case 0x8002EFECu: goto label_8002EFEC;
    case 0x8002EFF0u: goto label_8002EFF0;
    case 0x8002EFF4u: goto label_8002EFF4;
    case 0x8002EFF8u: goto label_8002EFF8;
    case 0x8002EFFCu: goto label_8002EFFC;
    case 0x8002F000u: goto label_8002F000;
    case 0x8002F004u: goto label_8002F004;
    case 0x8002F008u: goto label_8002F008;
    case 0x8002F00Cu: goto label_8002F00C;
    case 0x8002F010u: goto label_8002F010;
    case 0x8002F014u: goto label_8002F014;
    case 0x8002F018u: goto label_8002F018;
    case 0x8002F01Cu: goto label_8002F01C;
    case 0x8002F020u: goto label_8002F020;
    case 0x8002F024u: goto label_8002F024;
    case 0x8002F028u: goto label_8002F028;
    case 0x8002F02Cu: goto label_8002F02C;
    case 0x8002F030u: goto label_8002F030;
    case 0x8002F034u: goto label_8002F034;
    case 0x8002F038u: goto label_8002F038;
    case 0x8002F03Cu: goto label_8002F03C;
    case 0x8002F040u: goto label_8002F040;
    case 0x8002F044u: goto label_8002F044;
    case 0x8002F048u: goto label_8002F048;
    case 0x8002F04Cu: goto label_8002F04C;
    case 0x8002F050u: goto label_8002F050;
    case 0x8002F054u: goto label_8002F054;
    case 0x8002F058u: goto label_8002F058;
    case 0x8002F05Cu: goto label_8002F05C;
    case 0x8002F060u: goto label_8002F060;
    case 0x8002F064u: goto label_8002F064;
    case 0x8002F068u: goto label_8002F068;
    case 0x8002F06Cu: goto label_8002F06C;
    case 0x8002F070u: goto label_8002F070;
    case 0x8002F074u: goto label_8002F074;
    case 0x8002F078u: goto label_8002F078;
    case 0x8002F07Cu: goto label_8002F07C;
    case 0x8002F080u: goto label_8002F080;
    case 0x8002F084u: goto label_8002F084;
    case 0x8002F088u: goto label_8002F088;
    case 0x8002F08Cu: goto label_8002F08C;
    case 0x8002F090u: goto label_8002F090;
    case 0x8002F094u: goto label_8002F094;
    case 0x8002F098u: goto label_8002F098;
    case 0x8002F09Cu: goto label_8002F09C;
    case 0x8002F0A0u: goto label_8002F0A0;
    case 0x8002F0A4u: goto label_8002F0A4;
    case 0x8002F0A8u: goto label_8002F0A8;
    case 0x8002F0ACu: goto label_8002F0AC;
    case 0x8002F0B0u: goto label_8002F0B0;
    case 0x8002F0B4u: goto label_8002F0B4;
    case 0x8002F0B8u: goto label_8002F0B8;
    case 0x8002F0BCu: goto label_8002F0BC;
    case 0x8002F0C0u: goto label_8002F0C0;
    case 0x8002F0C4u: goto label_8002F0C4;
    case 0x8002F0C8u: goto label_8002F0C8;
    case 0x8002F0CCu: goto label_8002F0CC;
    case 0x8002F0D0u: goto label_8002F0D0;
    case 0x8002F0D4u: goto label_8002F0D4;
    case 0x8002F0D8u: goto label_8002F0D8;
    case 0x8002F0DCu: goto label_8002F0DC;
    case 0x8002F0E0u: goto label_8002F0E0;
    case 0x8002F0E4u: goto label_8002F0E4;
    case 0x8002F0E8u: goto label_8002F0E8;
    case 0x8002F0ECu: goto label_8002F0EC;
    case 0x8002F0F0u: goto label_8002F0F0;
    case 0x8002F0F4u: goto label_8002F0F4;
    case 0x8002F0F8u: goto label_8002F0F8;
    case 0x8002F0FCu: goto label_8002F0FC;
    case 0x8002F100u: goto label_8002F100;
    case 0x8002F104u: goto label_8002F104;
    case 0x8002F108u: goto label_8002F108;
    case 0x8002F10Cu: goto label_8002F10C;
    case 0x8002F110u: goto label_8002F110;
    case 0x8002F114u: goto label_8002F114;
    case 0x8002F118u: goto label_8002F118;
    case 0x8002F11Cu: goto label_8002F11C;
    case 0x8002F120u: goto label_8002F120;
    case 0x8002F124u: goto label_8002F124;
    case 0x8002F128u: goto label_8002F128;
    case 0x8002F12Cu: goto label_8002F12C;
    case 0x8002F130u: goto label_8002F130;
    case 0x8002F134u: goto label_8002F134;
    case 0x8002F138u: goto label_8002F138;
    case 0x8002F13Cu: goto label_8002F13C;
    case 0x8002F140u: goto label_8002F140;
    case 0x8002F144u: goto label_8002F144;
    case 0x8002F148u: goto label_8002F148;
    case 0x8002F14Cu: goto label_8002F14C;
    case 0x8002F150u: goto label_8002F150;
    case 0x8002F154u: goto label_8002F154;
    case 0x8002F158u: goto label_8002F158;
    case 0x8002F15Cu: goto label_8002F15C;
    case 0x8002F160u: goto label_8002F160;
    case 0x8002F164u: goto label_8002F164;
    case 0x8002F168u: goto label_8002F168;
    case 0x8002F16Cu: goto label_8002F16C;
    case 0x8002F170u: goto label_8002F170;
    case 0x8002F174u: goto label_8002F174;
    case 0x8002F178u: goto label_8002F178;
    case 0x8002F17Cu: goto label_8002F17C;
    case 0x8002F180u: goto label_8002F180;
    case 0x8002F184u: goto label_8002F184;
    case 0x8002F188u: goto label_8002F188;
    case 0x8002F18Cu: goto label_8002F18C;
    case 0x8002F190u: goto label_8002F190;
    case 0x8002F194u: goto label_8002F194;
    case 0x8002F198u: goto label_8002F198;
    case 0x8002F19Cu: goto label_8002F19C;
    case 0x8002F1A0u: goto label_8002F1A0;
    case 0x8002F1A4u: goto label_8002F1A4;
    case 0x8002F1A8u: goto label_8002F1A8;
    case 0x8002F1ACu: goto label_8002F1AC;
    case 0x8002F1B0u: goto label_8002F1B0;
    case 0x8002F1B4u: goto label_8002F1B4;
    case 0x8002F1B8u: goto label_8002F1B8;
    case 0x8002F1BCu: goto label_8002F1BC;
    case 0x8002F1C0u: goto label_8002F1C0;
    case 0x8002F1C4u: goto label_8002F1C4;
    case 0x8002F1C8u: goto label_8002F1C8;
    case 0x8002F1CCu: goto label_8002F1CC;
    case 0x8002F1D0u: goto label_8002F1D0;
    case 0x8002F1D4u: goto label_8002F1D4;
    case 0x8002F1D8u: goto label_8002F1D8;
    case 0x8002F1DCu: goto label_8002F1DC;
    case 0x8002F1E0u: goto label_8002F1E0;
    case 0x8002F1E4u: goto label_8002F1E4;
    case 0x8002F1E8u: goto label_8002F1E8;
    case 0x8002F1ECu: goto label_8002F1EC;
    case 0x8002F1F0u: goto label_8002F1F0;
    case 0x8002F1F4u: goto label_8002F1F4;
    case 0x8002F1F8u: goto label_8002F1F8;
    case 0x8002F1FCu: goto label_8002F1FC;
    case 0x8002F200u: goto label_8002F200;
    case 0x8002F204u: goto label_8002F204;
    case 0x8002F208u: goto label_8002F208;
    case 0x8002F20Cu: goto label_8002F20C;
    case 0x8002F210u: goto label_8002F210;
    case 0x8002F214u: goto label_8002F214;
    case 0x8002F218u: goto label_8002F218;
    case 0x8002F21Cu: goto label_8002F21C;
    case 0x8002F220u: goto label_8002F220;
    case 0x8002F224u: goto label_8002F224;
    case 0x8002F228u: goto label_8002F228;
    case 0x8002F22Cu: goto label_8002F22C;
    case 0x8002F230u: goto label_8002F230;
    case 0x8002F234u: goto label_8002F234;
    case 0x8002F238u: goto label_8002F238;
    case 0x8002F23Cu: goto label_8002F23C;
    case 0x8002F240u: goto label_8002F240;
    case 0x8002F244u: goto label_8002F244;
    case 0x8002F248u: goto label_8002F248;
    case 0x8002F24Cu: goto label_8002F24C;
    case 0x8002F250u: goto label_8002F250;
    case 0x8002F254u: goto label_8002F254;
    case 0x8002F258u: goto label_8002F258;
    case 0x8002F25Cu: goto label_8002F25C;
    case 0x8002F260u: goto label_8002F260;
    case 0x8002F264u: goto label_8002F264;
    case 0x8002F268u: goto label_8002F268;
    case 0x8002F26Cu: goto label_8002F26C;
    case 0x8002F270u: goto label_8002F270;
    case 0x8002F274u: goto label_8002F274;
    case 0x8002F278u: goto label_8002F278;
    case 0x8002F27Cu: goto label_8002F27C;
    case 0x8002F280u: goto label_8002F280;
    case 0x8002F284u: goto label_8002F284;
    case 0x8002F288u: goto label_8002F288;
    case 0x8002F28Cu: goto label_8002F28C;
    case 0x8002F290u: goto label_8002F290;
    case 0x8002F294u: goto label_8002F294;
    case 0x8002F298u: goto label_8002F298;
    case 0x8002F29Cu: goto label_8002F29C;
    case 0x8002F2A0u: goto label_8002F2A0;
    case 0x8002F2A4u: goto label_8002F2A4;
    case 0x8002F2A8u: goto label_8002F2A8;
    case 0x8002F2ACu: goto label_8002F2AC;
    case 0x8002F2B0u: goto label_8002F2B0;
    case 0x8002F2B4u: goto label_8002F2B4;
    case 0x8002F2B8u: goto label_8002F2B8;
    case 0x8002F2BCu: goto label_8002F2BC;
    case 0x8002F2C0u: goto label_8002F2C0;
    case 0x8002F2C4u: goto label_8002F2C4;
    case 0x8002F2C8u: goto label_8002F2C8;
    case 0x8002F2CCu: goto label_8002F2CC;
    case 0x8002F2D0u: goto label_8002F2D0;
    case 0x8002F2D4u: goto label_8002F2D4;
    case 0x8002F2D8u: goto label_8002F2D8;
    case 0x8002F2DCu: goto label_8002F2DC;
    case 0x8002F2E0u: goto label_8002F2E0;
    case 0x8002F2E4u: goto label_8002F2E4;
    case 0x8002F2E8u: goto label_8002F2E8;
    case 0x8002F2ECu: goto label_8002F2EC;
    case 0x8002F2F0u: goto label_8002F2F0;
    case 0x8002F2F4u: goto label_8002F2F4;
    case 0x8002F2F8u: goto label_8002F2F8;
    case 0x8002F2FCu: goto label_8002F2FC;
    case 0x8002F300u: goto label_8002F300;
    case 0x8002F304u: goto label_8002F304;
    case 0x8002F308u: goto label_8002F308;
    case 0x8002F30Cu: goto label_8002F30C;
    case 0x8002F310u: goto label_8002F310;
    case 0x8002F314u: goto label_8002F314;
    case 0x8002F318u: goto label_8002F318;
    case 0x8002F31Cu: goto label_8002F31C;
    case 0x8002F320u: goto label_8002F320;
    case 0x8002F324u: goto label_8002F324;
    case 0x8002F328u: goto label_8002F328;
    case 0x8002F32Cu: goto label_8002F32C;
    case 0x8002F330u: goto label_8002F330;
    case 0x8002F334u: goto label_8002F334;
    case 0x8002F338u: goto label_8002F338;
    case 0x8002F33Cu: goto label_8002F33C;
    case 0x8002F340u: goto label_8002F340;
    case 0x8002F344u: goto label_8002F344;
    case 0x8002F348u: goto label_8002F348;
    case 0x8002F34Cu: goto label_8002F34C;
    case 0x8002F350u: goto label_8002F350;
    case 0x8002F354u: goto label_8002F354;
    case 0x8002F358u: goto label_8002F358;
    case 0x8002F35Cu: goto label_8002F35C;
    case 0x8002F360u: goto label_8002F360;
    case 0x8002F364u: goto label_8002F364;
    case 0x8002F368u: goto label_8002F368;
    case 0x8002F36Cu: goto label_8002F36C;
    case 0x8002F370u: goto label_8002F370;
    case 0x8002F374u: goto label_8002F374;
    case 0x8002F378u: goto label_8002F378;
    case 0x8002F37Cu: goto label_8002F37C;
    case 0x8002F380u: goto label_8002F380;
    case 0x8002F384u: goto label_8002F384;
    case 0x8002F388u: goto label_8002F388;
    case 0x8002F38Cu: goto label_8002F38C;
    case 0x8002F390u: goto label_8002F390;
    case 0x8002F394u: goto label_8002F394;
    case 0x8002F398u: goto label_8002F398;
    case 0x8002F39Cu: goto label_8002F39C;
    case 0x8002F3A0u: goto label_8002F3A0;
    case 0x8002F3A4u: goto label_8002F3A4;
    case 0x8002F3A8u: goto label_8002F3A8;
    case 0x8002F3ACu: goto label_8002F3AC;
    case 0x8002F3B0u: goto label_8002F3B0;
    case 0x8002F3B4u: goto label_8002F3B4;
    case 0x8002F3B8u: goto label_8002F3B8;
    case 0x8002F3BCu: goto label_8002F3BC;
    case 0x8002F3C0u: goto label_8002F3C0;
    case 0x8002F3C4u: goto label_8002F3C4;
    case 0x8002F3C8u: goto label_8002F3C8;
    case 0x8002F3CCu: goto label_8002F3CC;
    case 0x8002F3D0u: goto label_8002F3D0;
    case 0x8002F3D4u: goto label_8002F3D4;
    case 0x8002F3D8u: goto label_8002F3D8;
    case 0x8002F3DCu: goto label_8002F3DC;
    case 0x8002F3E0u: goto label_8002F3E0;
    case 0x8002F3E4u: goto label_8002F3E4;
    case 0x8002F3E8u: goto label_8002F3E8;
    case 0x8002F3ECu: goto label_8002F3EC;
    case 0x8002F3F0u: goto label_8002F3F0;
    case 0x8002F3F4u: goto label_8002F3F4;
    case 0x8002F3F8u: goto label_8002F3F8;
    case 0x8002F3FCu: goto label_8002F3FC;
    case 0x8002F400u: goto label_8002F400;
    case 0x8002F404u: goto label_8002F404;
    case 0x8002F408u: goto label_8002F408;
    case 0x8002F40Cu: goto label_8002F40C;
    case 0x8002F410u: goto label_8002F410;
    case 0x8002F414u: goto label_8002F414;
    case 0x8002F418u: goto label_8002F418;
    case 0x8002F41Cu: goto label_8002F41C;
    case 0x8002F420u: goto label_8002F420;
    case 0x8002F424u: goto label_8002F424;
    case 0x8002F428u: goto label_8002F428;
    case 0x8002F42Cu: goto label_8002F42C;
    case 0x8002F430u: goto label_8002F430;
    case 0x8002F434u: goto label_8002F434;
    case 0x8002F438u: goto label_8002F438;
    case 0x8002F43Cu: goto label_8002F43C;
    case 0x8002F440u: goto label_8002F440;
    case 0x8002F444u: goto label_8002F444;
    case 0x8002F448u: goto label_8002F448;
    case 0x8002F44Cu: goto label_8002F44C;
    case 0x8002F450u: goto label_8002F450;
    case 0x8002F454u: goto label_8002F454;
    case 0x8002F458u: goto label_8002F458;
    case 0x8002F45Cu: goto label_8002F45C;
    case 0x8002F460u: goto label_8002F460;
    case 0x8002F464u: goto label_8002F464;
    case 0x8002F468u: goto label_8002F468;
    case 0x8002F46Cu: goto label_8002F46C;
    case 0x8002F470u: goto label_8002F470;
    case 0x8002F474u: goto label_8002F474;
    case 0x8002F478u: goto label_8002F478;
    case 0x8002F47Cu: goto label_8002F47C;
    case 0x8002F480u: goto label_8002F480;
    case 0x8002F484u: goto label_8002F484;
    case 0x8002F488u: goto label_8002F488;
    case 0x8002F48Cu: goto label_8002F48C;
    case 0x8002F490u: goto label_8002F490;
    case 0x8002F494u: goto label_8002F494;
    case 0x8002F498u: goto label_8002F498;
    case 0x8002F49Cu: goto label_8002F49C;
    case 0x8002F4A0u: goto label_8002F4A0;
    case 0x8002F4A4u: goto label_8002F4A4;
    case 0x8002F4A8u: goto label_8002F4A8;
    case 0x8002F4ACu: goto label_8002F4AC;
    case 0x8002F4B0u: goto label_8002F4B0;
    case 0x8002F4B4u: goto label_8002F4B4;
    case 0x8002F4B8u: goto label_8002F4B8;
    case 0x8002F4BCu: goto label_8002F4BC;
    case 0x8002F4C0u: goto label_8002F4C0;
    case 0x8002F4C4u: goto label_8002F4C4;
    case 0x8002F4C8u: goto label_8002F4C8;
    case 0x8002F4CCu: goto label_8002F4CC;
    case 0x8002F4D0u: goto label_8002F4D0;
    case 0x8002F4D4u: goto label_8002F4D4;
    case 0x8002F4D8u: goto label_8002F4D8;
    case 0x8002F4DCu: goto label_8002F4DC;
    case 0x8002F4E0u: goto label_8002F4E0;
    case 0x8002F4E4u: goto label_8002F4E4;
    case 0x8002F4E8u: goto label_8002F4E8;
    case 0x8002F4ECu: goto label_8002F4EC;
    case 0x8002F4F0u: goto label_8002F4F0;
    case 0x8002F4F4u: goto label_8002F4F4;
    case 0x8002F4F8u: goto label_8002F4F8;
    case 0x8002F4FCu: goto label_8002F4FC;
    case 0x8002F500u: goto label_8002F500;
    case 0x8002F504u: goto label_8002F504;
    case 0x8002F508u: goto label_8002F508;
    case 0x8002F50Cu: goto label_8002F50C;
    case 0x8002F510u: goto label_8002F510;
    case 0x8002F514u: goto label_8002F514;
    case 0x8002F518u: goto label_8002F518;
    case 0x8002F51Cu: goto label_8002F51C;
    case 0x8002F520u: goto label_8002F520;
    case 0x8002F524u: goto label_8002F524;
    case 0x8002F528u: goto label_8002F528;
    case 0x8002F52Cu: goto label_8002F52C;
    case 0x8002F530u: goto label_8002F530;
    case 0x8002F534u: goto label_8002F534;
    case 0x8002F538u: goto label_8002F538;
    case 0x8002F53Cu: goto label_8002F53C;
    case 0x8002F540u: goto label_8002F540;
    case 0x8002F544u: goto label_8002F544;
    case 0x8002F548u: goto label_8002F548;
    case 0x8002F54Cu: goto label_8002F54C;
    case 0x8002F550u: goto label_8002F550;
    case 0x8002F554u: goto label_8002F554;
    case 0x8002F558u: goto label_8002F558;
    case 0x8002F55Cu: goto label_8002F55C;
    case 0x8002F560u: goto label_8002F560;
    case 0x8002F564u: goto label_8002F564;
    case 0x8002F568u: goto label_8002F568;
    case 0x8002F56Cu: goto label_8002F56C;
    case 0x8002F570u: goto label_8002F570;
    case 0x8002F574u: goto label_8002F574;
    case 0x8002F578u: goto label_8002F578;
    case 0x8002F57Cu: goto label_8002F57C;
    case 0x8002F580u: goto label_8002F580;
    case 0x8002F584u: goto label_8002F584;
    case 0x8002F588u: goto label_8002F588;
    case 0x8002F58Cu: goto label_8002F58C;
    case 0x8002F590u: goto label_8002F590;
    case 0x8002F594u: goto label_8002F594;
    case 0x8002F598u: goto label_8002F598;
    case 0x8002F59Cu: goto label_8002F59C;
    case 0x8002F5A0u: goto label_8002F5A0;
    case 0x8002F5A4u: goto label_8002F5A4;
    case 0x8002F5A8u: goto label_8002F5A8;
    case 0x8002F5ACu: goto label_8002F5AC;
    case 0x8002F5B0u: goto label_8002F5B0;
    case 0x8002F5B4u: goto label_8002F5B4;
    case 0x8002F5B8u: goto label_8002F5B8;
    case 0x8002F5BCu: goto label_8002F5BC;
    case 0x8002F5C0u: goto label_8002F5C0;
    case 0x8002F5C4u: goto label_8002F5C4;
    case 0x8002F5C8u: goto label_8002F5C8;
    case 0x8002F5CCu: goto label_8002F5CC;
    case 0x8002F5D0u: goto label_8002F5D0;
    case 0x8002F5D4u: goto label_8002F5D4;
    case 0x8002F5D8u: goto label_8002F5D8;
    case 0x8002F5DCu: goto label_8002F5DC;
    case 0x8002F5E0u: goto label_8002F5E0;
    case 0x8002F5E4u: goto label_8002F5E4;
    case 0x8002F5E8u: goto label_8002F5E8;
    case 0x8002F5ECu: goto label_8002F5EC;
    case 0x8002F5F0u: goto label_8002F5F0;
    case 0x8002F5F4u: goto label_8002F5F4;
    case 0x8002F5F8u: goto label_8002F5F8;
    case 0x8002F5FCu: goto label_8002F5FC;
    case 0x8002F600u: goto label_8002F600;
    case 0x8002F604u: goto label_8002F604;
    case 0x8002F608u: goto label_8002F608;
    case 0x8002F60Cu: goto label_8002F60C;
    case 0x8002F610u: goto label_8002F610;
    case 0x8002F614u: goto label_8002F614;
    case 0x8002F618u: goto label_8002F618;
    case 0x8002F61Cu: goto label_8002F61C;
    case 0x8002F620u: goto label_8002F620;
    case 0x8002F624u: goto label_8002F624;
    case 0x8002F628u: goto label_8002F628;
    case 0x8002F62Cu: goto label_8002F62C;
    case 0x8002F630u: goto label_8002F630;
    case 0x8002F634u: goto label_8002F634;
    case 0x8002F638u: goto label_8002F638;
    case 0x8002F63Cu: goto label_8002F63C;
    case 0x8002F640u: goto label_8002F640;
    case 0x8002F644u: goto label_8002F644;
    case 0x8002F648u: goto label_8002F648;
    case 0x8002F64Cu: goto label_8002F64C;
    case 0x8002F650u: goto label_8002F650;
    case 0x8002F654u: goto label_8002F654;
    case 0x8002F658u: goto label_8002F658;
    case 0x8002F65Cu: goto label_8002F65C;
    case 0x8002F660u: goto label_8002F660;
    case 0x8002F664u: goto label_8002F664;
    case 0x8002F668u: goto label_8002F668;
    case 0x8002F66Cu: goto label_8002F66C;
    case 0x8002F670u: goto label_8002F670;
    case 0x8002F674u: goto label_8002F674;
    case 0x8002F678u: goto label_8002F678;
    case 0x8002F67Cu: goto label_8002F67C;
    case 0x8002F680u: goto label_8002F680;
    case 0x8002F684u: goto label_8002F684;
    case 0x8002F688u: goto label_8002F688;
    case 0x8002F68Cu: goto label_8002F68C;
    case 0x8002F690u: goto label_8002F690;
    case 0x8002F694u: goto label_8002F694;
    case 0x8002F698u: goto label_8002F698;
    case 0x8002F69Cu: goto label_8002F69C;
    case 0x8002F6A0u: goto label_8002F6A0;
    case 0x8002F6A4u: goto label_8002F6A4;
    case 0x8002F6A8u: goto label_8002F6A8;
    case 0x8002F6ACu: goto label_8002F6AC;
    case 0x8002F6B0u: goto label_8002F6B0;
    case 0x8002F6B4u: goto label_8002F6B4;
    case 0x8002F6B8u: goto label_8002F6B8;
    case 0x8002F6BCu: goto label_8002F6BC;
    case 0x8002F6C0u: goto label_8002F6C0;
    case 0x8002F6C4u: goto label_8002F6C4;
    case 0x8002F6C8u: goto label_8002F6C8;
    case 0x8002F6CCu: goto label_8002F6CC;
    case 0x8002F6D0u: goto label_8002F6D0;
    case 0x8002F6D4u: goto label_8002F6D4;
    case 0x8002F6D8u: goto label_8002F6D8;
    case 0x8002F6DCu: goto label_8002F6DC;
    case 0x8002F6E0u: goto label_8002F6E0;
    case 0x8002F6E4u: goto label_8002F6E4;
    case 0x8002F6E8u: goto label_8002F6E8;
    case 0x8002F6ECu: goto label_8002F6EC;
    case 0x8002F6F0u: goto label_8002F6F0;
    case 0x8002F6F4u: goto label_8002F6F4;
    case 0x8002F6F8u: goto label_8002F6F8;
    case 0x8002F6FCu: goto label_8002F6FC;
    case 0x8002F700u: goto label_8002F700;
    case 0x8002F704u: goto label_8002F704;
    case 0x8002F708u: goto label_8002F708;
    case 0x8002F70Cu: goto label_8002F70C;
    case 0x8002F710u: goto label_8002F710;
    case 0x8002F714u: goto label_8002F714;
    case 0x8002F718u: goto label_8002F718;
    case 0x8002F71Cu: goto label_8002F71C;
    case 0x8002F720u: goto label_8002F720;
    case 0x8002F724u: goto label_8002F724;
    case 0x8002F728u: goto label_8002F728;
    case 0x8002F72Cu: goto label_8002F72C;
    case 0x8002F730u: goto label_8002F730;
    case 0x8002F734u: goto label_8002F734;
    case 0x8002F738u: goto label_8002F738;
    case 0x8002F73Cu: goto label_8002F73C;
    case 0x8002F740u: goto label_8002F740;
    case 0x8002F744u: goto label_8002F744;
    case 0x8002F748u: goto label_8002F748;
    case 0x8002F74Cu: goto label_8002F74C;
    case 0x8002F750u: goto label_8002F750;
    case 0x8002F754u: goto label_8002F754;
    case 0x8002F758u: goto label_8002F758;
    case 0x8002F75Cu: goto label_8002F75C;
    case 0x8002F760u: goto label_8002F760;
    case 0x8002F764u: goto label_8002F764;
    case 0x8002F768u: goto label_8002F768;
    case 0x8002F76Cu: goto label_8002F76C;
    case 0x8002F770u: goto label_8002F770;
    case 0x8002F774u: goto label_8002F774;
    case 0x8002F778u: goto label_8002F778;
    case 0x8002F77Cu: goto label_8002F77C;
    case 0x8002F780u: goto label_8002F780;
    case 0x8002F784u: goto label_8002F784;
    case 0x8002F788u: goto label_8002F788;
    case 0x8002F78Cu: goto label_8002F78C;
    case 0x8002F790u: goto label_8002F790;
    case 0x8002F794u: goto label_8002F794;
    case 0x8002F798u: goto label_8002F798;
    case 0x8002F79Cu: goto label_8002F79C;
    case 0x8002F7A0u: goto label_8002F7A0;
    case 0x8002F7A4u: goto label_8002F7A4;
    case 0x8002F7A8u: goto label_8002F7A8;
    case 0x8002F7ACu: goto label_8002F7AC;
    case 0x8002F7B0u: goto label_8002F7B0;
    case 0x8002F7B4u: goto label_8002F7B4;
    case 0x8002F7B8u: goto label_8002F7B8;
    case 0x8002F7BCu: goto label_8002F7BC;
    case 0x8002F7C0u: goto label_8002F7C0;
    case 0x8002F7C4u: goto label_8002F7C4;
    case 0x8002F7C8u: goto label_8002F7C8;
    case 0x8002F7CCu: goto label_8002F7CC;
    case 0x8002F7D0u: goto label_8002F7D0;
    case 0x8002F7D4u: goto label_8002F7D4;
    case 0x8002F7D8u: goto label_8002F7D8;
    case 0x8002F7DCu: goto label_8002F7DC;
    case 0x8002F7E0u: goto label_8002F7E0;
    case 0x8002F7E4u: goto label_8002F7E4;
    case 0x8002F7E8u: goto label_8002F7E8;
    case 0x8002F7ECu: goto label_8002F7EC;
    case 0x8002F7F0u: goto label_8002F7F0;
    case 0x8002F7F4u: goto label_8002F7F4;
    case 0x8002F7F8u: goto label_8002F7F8;
    case 0x8002F7FCu: goto label_8002F7FC;
    case 0x8002F800u: goto label_8002F800;
    case 0x8002F804u: goto label_8002F804;
    case 0x8002F808u: goto label_8002F808;
    case 0x8002F80Cu: goto label_8002F80C;
    case 0x8002F810u: goto label_8002F810;
    case 0x8002F814u: goto label_8002F814;
    case 0x8002F818u: goto label_8002F818;
    case 0x8002F81Cu: goto label_8002F81C;
    case 0x8002F820u: goto label_8002F820;
    case 0x8002F824u: goto label_8002F824;
    case 0x8002F828u: goto label_8002F828;
    case 0x8002F82Cu: goto label_8002F82C;
    case 0x8002F830u: goto label_8002F830;
    case 0x8002F834u: goto label_8002F834;
    case 0x8002F838u: goto label_8002F838;
    case 0x8002F83Cu: goto label_8002F83C;
    case 0x8002F840u: goto label_8002F840;
    case 0x8002F844u: goto label_8002F844;
    case 0x8002F848u: goto label_8002F848;
    case 0x8002F84Cu: goto label_8002F84C;
    case 0x8002F850u: goto label_8002F850;
    case 0x8002F854u: goto label_8002F854;
    case 0x8002F858u: goto label_8002F858;
    case 0x8002F85Cu: goto label_8002F85C;
    case 0x8002F860u: goto label_8002F860;
    case 0x8002F864u: goto label_8002F864;
    case 0x8002F868u: goto label_8002F868;
    case 0x8002F86Cu: goto label_8002F86C;
    case 0x8002F870u: goto label_8002F870;
    case 0x8002F874u: goto label_8002F874;
    case 0x8002F878u: goto label_8002F878;
    case 0x8002F87Cu: goto label_8002F87C;
    case 0x8002F880u: goto label_8002F880;
    case 0x8002F884u: goto label_8002F884;
    case 0x8002F888u: goto label_8002F888;
    case 0x8002F88Cu: goto label_8002F88C;
    case 0x8002F890u: goto label_8002F890;
    case 0x8002F894u: goto label_8002F894;
    case 0x8002F898u: goto label_8002F898;
    case 0x8002F89Cu: goto label_8002F89C;
    case 0x8002F8A0u: goto label_8002F8A0;
    case 0x8002F8A4u: goto label_8002F8A4;
    case 0x8002F8A8u: goto label_8002F8A8;
    case 0x8002F8ACu: goto label_8002F8AC;
    case 0x8002F8B0u: goto label_8002F8B0;
    case 0x8002F8B4u: goto label_8002F8B4;
    case 0x8002F8B8u: goto label_8002F8B8;
    case 0x8002F8BCu: goto label_8002F8BC;
    case 0x8002F8C0u: goto label_8002F8C0;
    case 0x8002F8C4u: goto label_8002F8C4;
    case 0x8002F8C8u: goto label_8002F8C8;
    case 0x8002F8CCu: goto label_8002F8CC;
    case 0x8002F8D0u: goto label_8002F8D0;
    case 0x8002F8D4u: goto label_8002F8D4;
    case 0x8002F8D8u: goto label_8002F8D8;
    case 0x8002F8DCu: goto label_8002F8DC;
    case 0x8002F8E0u: goto label_8002F8E0;
    case 0x8002F8E4u: goto label_8002F8E4;
    case 0x8002F8E8u: goto label_8002F8E8;
    case 0x8002F8ECu: goto label_8002F8EC;
    case 0x8002F8F0u: goto label_8002F8F0;
    case 0x8002F8F4u: goto label_8002F8F4;
    case 0x8002F8F8u: goto label_8002F8F8;
    case 0x8002F8FCu: goto label_8002F8FC;
    case 0x8002F900u: goto label_8002F900;
    case 0x8002F904u: goto label_8002F904;
    case 0x8002F908u: goto label_8002F908;
    case 0x8002F90Cu: goto label_8002F90C;
    case 0x8002F910u: goto label_8002F910;
    case 0x8002F914u: goto label_8002F914;
    case 0x8002F918u: goto label_8002F918;
    case 0x8002F91Cu: goto label_8002F91C;
    case 0x8002F920u: goto label_8002F920;
    case 0x8002F924u: goto label_8002F924;
    case 0x8002F928u: goto label_8002F928;
    case 0x8002F92Cu: goto label_8002F92C;
    case 0x8002F930u: goto label_8002F930;
    case 0x8002F934u: goto label_8002F934;
    case 0x8002F938u: goto label_8002F938;
    case 0x8002F93Cu: goto label_8002F93C;
    case 0x8002F940u: goto label_8002F940;
    case 0x8002F944u: goto label_8002F944;
    case 0x8002F948u: goto label_8002F948;
    case 0x8002F94Cu: goto label_8002F94C;
    case 0x8002F950u: goto label_8002F950;
    case 0x8002F954u: goto label_8002F954;
    case 0x8002F958u: goto label_8002F958;
    case 0x8002F95Cu: goto label_8002F95C;
    case 0x8002F960u: goto label_8002F960;
    case 0x8002F964u: goto label_8002F964;
    case 0x8002F968u: goto label_8002F968;
    case 0x8002F96Cu: goto label_8002F96C;
    case 0x8002F970u: goto label_8002F970;
    case 0x8002F974u: goto label_8002F974;
    case 0x8002F978u: goto label_8002F978;
    case 0x8002F97Cu: goto label_8002F97C;
    case 0x8002F980u: goto label_8002F980;
    case 0x8002F984u: goto label_8002F984;
    case 0x8002F988u: goto label_8002F988;
    case 0x8002F98Cu: goto label_8002F98C;
    case 0x8002F990u: goto label_8002F990;
    case 0x8002F994u: goto label_8002F994;
    case 0x8002F998u: goto label_8002F998;
    case 0x8002F99Cu: goto label_8002F99C;
    case 0x8002F9A0u: goto label_8002F9A0;
    case 0x8002F9A4u: goto label_8002F9A4;
    case 0x8002F9A8u: goto label_8002F9A8;
    case 0x8002F9ACu: goto label_8002F9AC;
    case 0x8002F9B0u: goto label_8002F9B0;
    case 0x8002F9B4u: goto label_8002F9B4;
    case 0x8002F9B8u: goto label_8002F9B8;
    case 0x8002F9BCu: goto label_8002F9BC;
    case 0x8002F9C0u: goto label_8002F9C0;
    case 0x8002F9C4u: goto label_8002F9C4;
    case 0x8002F9C8u: goto label_8002F9C8;
    case 0x8002F9CCu: goto label_8002F9CC;
    case 0x8002F9D0u: goto label_8002F9D0;
    case 0x8002F9D4u: goto label_8002F9D4;
    case 0x8002F9D8u: goto label_8002F9D8;
    case 0x8002F9DCu: goto label_8002F9DC;
    case 0x8002F9E0u: goto label_8002F9E0;
    case 0x8002F9E4u: goto label_8002F9E4;
    case 0x8002F9E8u: goto label_8002F9E8;
    case 0x8002F9ECu: goto label_8002F9EC;
    case 0x8002F9F0u: goto label_8002F9F0;
    case 0x8002F9F4u: goto label_8002F9F4;
    case 0x8002F9F8u: goto label_8002F9F8;
    case 0x8002F9FCu: goto label_8002F9FC;
    case 0x8002FA00u: goto label_8002FA00;
    case 0x8002FA04u: goto label_8002FA04;
    case 0x8002FA08u: goto label_8002FA08;
    case 0x8002FA0Cu: goto label_8002FA0C;
    case 0x8002FA10u: goto label_8002FA10;
    case 0x8002FA14u: goto label_8002FA14;
    case 0x8002FA18u: goto label_8002FA18;
    case 0x8002FA1Cu: goto label_8002FA1C;
    case 0x8002FA20u: goto label_8002FA20;
    case 0x8002FA24u: goto label_8002FA24;
    case 0x8002FA28u: goto label_8002FA28;
    case 0x8002FA2Cu: goto label_8002FA2C;
    case 0x8002FA30u: goto label_8002FA30;
    case 0x8002FA34u: goto label_8002FA34;
    case 0x8002FA38u: goto label_8002FA38;
    case 0x8002FA3Cu: goto label_8002FA3C;
    case 0x8002FA40u: goto label_8002FA40;
    case 0x8002FA44u: goto label_8002FA44;
    case 0x8002FA48u: goto label_8002FA48;
    case 0x8002FA4Cu: goto label_8002FA4C;
    case 0x8002FA50u: goto label_8002FA50;
    case 0x8002FA54u: goto label_8002FA54;
    case 0x8002FA58u: goto label_8002FA58;
    case 0x8002FA5Cu: goto label_8002FA5C;
    case 0x8002FA60u: goto label_8002FA60;
    case 0x8002FA64u: goto label_8002FA64;
    case 0x8002FA68u: goto label_8002FA68;
    case 0x8002FA6Cu: goto label_8002FA6C;
    case 0x8002FA70u: goto label_8002FA70;
    case 0x8002FA74u: goto label_8002FA74;
    case 0x8002FA78u: goto label_8002FA78;
    case 0x8002FA7Cu: goto label_8002FA7C;
    case 0x8002FA80u: goto label_8002FA80;
    case 0x8002FA84u: goto label_8002FA84;
    case 0x8002FA88u: goto label_8002FA88;
    case 0x8002FA8Cu: goto label_8002FA8C;
    case 0x8002FA90u: goto label_8002FA90;
    case 0x8002FA94u: goto label_8002FA94;
    case 0x8002FA98u: goto label_8002FA98;
    case 0x8002FA9Cu: goto label_8002FA9C;
    case 0x8002FAA0u: goto label_8002FAA0;
    case 0x8002FAA4u: goto label_8002FAA4;
    case 0x8002FAA8u: goto label_8002FAA8;
    case 0x8002FAACu: goto label_8002FAAC;
    case 0x8002FAB0u: goto label_8002FAB0;
    case 0x8002FAB4u: goto label_8002FAB4;
    case 0x8002FAB8u: goto label_8002FAB8;
    case 0x8002FABCu: goto label_8002FABC;
    case 0x8002FAC0u: goto label_8002FAC0;
    case 0x8002FAC4u: goto label_8002FAC4;
    case 0x8002FAC8u: goto label_8002FAC8;
    case 0x8002FACCu: goto label_8002FACC;
    case 0x8002FAD0u: goto label_8002FAD0;
    case 0x8002FAD4u: goto label_8002FAD4;
    case 0x8002FAD8u: goto label_8002FAD8;
    case 0x8002FADCu: goto label_8002FADC;
    case 0x8002FAE0u: goto label_8002FAE0;
    case 0x8002FAE4u: goto label_8002FAE4;
    case 0x8002FAE8u: goto label_8002FAE8;
    case 0x8002FAECu: goto label_8002FAEC;
    case 0x8002FAF0u: goto label_8002FAF0;
    case 0x8002FAF4u: goto label_8002FAF4;
    case 0x8002FAF8u: goto label_8002FAF8;
    case 0x8002FAFCu: goto label_8002FAFC;
    case 0x8002FB00u: goto label_8002FB00;
    case 0x8002FB04u: goto label_8002FB04;
    case 0x8002FB08u: goto label_8002FB08;
    case 0x8002FB0Cu: goto label_8002FB0C;
    case 0x8002FB10u: goto label_8002FB10;
    case 0x8002FB14u: goto label_8002FB14;
    case 0x8002FB18u: goto label_8002FB18;
    case 0x8002FB1Cu: goto label_8002FB1C;
    case 0x8002FB20u: goto label_8002FB20;
    case 0x8002FB24u: goto label_8002FB24;
    case 0x8002FB28u: goto label_8002FB28;
    case 0x8002FB2Cu: goto label_8002FB2C;
    case 0x8002FB30u: goto label_8002FB30;
    case 0x8002FB34u: goto label_8002FB34;
    case 0x8002FB38u: goto label_8002FB38;
    case 0x8002FB3Cu: goto label_8002FB3C;
    case 0x8002FB40u: goto label_8002FB40;
    case 0x8002FB44u: goto label_8002FB44;
    case 0x8002FB48u: goto label_8002FB48;
    case 0x8002FB4Cu: goto label_8002FB4C;
    case 0x8002FB50u: goto label_8002FB50;
    case 0x8002FB54u: goto label_8002FB54;
    case 0x8002FB58u: goto label_8002FB58;
    case 0x8002FB5Cu: goto label_8002FB5C;
    case 0x8002FB60u: goto label_8002FB60;
    case 0x8002FB64u: goto label_8002FB64;
    case 0x8002FB68u: goto label_8002FB68;
    case 0x8002FB6Cu: goto label_8002FB6C;
    case 0x8002FB70u: goto label_8002FB70;
    case 0x8002FB74u: goto label_8002FB74;
    case 0x8002FB78u: goto label_8002FB78;
    case 0x8002FB7Cu: goto label_8002FB7C;
    case 0x8002FB80u: goto label_8002FB80;
    case 0x8002FB84u: goto label_8002FB84;
    case 0x8002FB88u: goto label_8002FB88;
    case 0x8002FB8Cu: goto label_8002FB8C;
    case 0x8002FB90u: goto label_8002FB90;
    case 0x8002FB94u: goto label_8002FB94;
    case 0x8002FB98u: goto label_8002FB98;
    case 0x8002FB9Cu: goto label_8002FB9C;
    case 0x8002FBA0u: goto label_8002FBA0;
    case 0x8002FBA4u: goto label_8002FBA4;
    case 0x8002FBA8u: goto label_8002FBA8;
    case 0x8002FBACu: goto label_8002FBAC;
    case 0x8002FBB0u: goto label_8002FBB0;
    case 0x8002FBB4u: goto label_8002FBB4;
    case 0x8002FBB8u: goto label_8002FBB8;
    case 0x8002FBBCu: goto label_8002FBBC;
    case 0x8002FBC0u: goto label_8002FBC0;
    case 0x8002FBC4u: goto label_8002FBC4;
    case 0x8002FBC8u: goto label_8002FBC8;
    case 0x8002FBCCu: goto label_8002FBCC;
    case 0x8002FBD0u: goto label_8002FBD0;
    case 0x8002FBD4u: goto label_8002FBD4;
    case 0x8002FBD8u: goto label_8002FBD8;
    case 0x8002FBDCu: goto label_8002FBDC;
    case 0x8002FBE0u: goto label_8002FBE0;
    case 0x8002FBE4u: goto label_8002FBE4;
    case 0x8002FBE8u: goto label_8002FBE8;
    case 0x8002FBECu: goto label_8002FBEC;
    case 0x8002FBF0u: goto label_8002FBF0;
    case 0x8002FBF4u: goto label_8002FBF4;
    case 0x8002FBF8u: goto label_8002FBF8;
    case 0x8002FBFCu: goto label_8002FBFC;
    case 0x8002FC00u: goto label_8002FC00;
    case 0x8002FC04u: goto label_8002FC04;
    case 0x8002FC08u: goto label_8002FC08;
    case 0x8002FC0Cu: goto label_8002FC0C;
    case 0x8002FC10u: goto label_8002FC10;
    case 0x8002FC14u: goto label_8002FC14;
    case 0x8002FC18u: goto label_8002FC18;
    case 0x8002FC1Cu: goto label_8002FC1C;
    case 0x8002FC20u: goto label_8002FC20;
    case 0x8002FC24u: goto label_8002FC24;
    case 0x8002FC28u: goto label_8002FC28;
    case 0x8002FC2Cu: goto label_8002FC2C;
    case 0x8002FC30u: goto label_8002FC30;
    case 0x8002FC34u: goto label_8002FC34;
    case 0x8002FC38u: goto label_8002FC38;
    case 0x8002FC3Cu: goto label_8002FC3C;
    case 0x8002FC40u: goto label_8002FC40;
    case 0x8002FC44u: goto label_8002FC44;
    case 0x8002FC48u: goto label_8002FC48;
    case 0x8002FC4Cu: goto label_8002FC4C;
    case 0x8002FC50u: goto label_8002FC50;
    case 0x8002FC54u: goto label_8002FC54;
    case 0x8002FC58u: goto label_8002FC58;
    case 0x8002FC5Cu: goto label_8002FC5C;
    case 0x8002FC60u: goto label_8002FC60;
    case 0x8002FC64u: goto label_8002FC64;
    case 0x8002FC68u: goto label_8002FC68;
    case 0x8002FC6Cu: goto label_8002FC6C;
    case 0x8002FC70u: goto label_8002FC70;
    case 0x8002FC74u: goto label_8002FC74;
    case 0x8002FC78u: goto label_8002FC78;
    case 0x8002FC7Cu: goto label_8002FC7C;
    case 0x8002FC80u: goto label_8002FC80;
    case 0x8002FC84u: goto label_8002FC84;
    case 0x8002FC88u: goto label_8002FC88;
    case 0x8002FC8Cu: goto label_8002FC8C;
    case 0x8002FC90u: goto label_8002FC90;
    case 0x8002FC94u: goto label_8002FC94;
    case 0x8002FC98u: goto label_8002FC98;
    case 0x8002FC9Cu: goto label_8002FC9C;
    case 0x8002FCA0u: goto label_8002FCA0;
    case 0x8002FCA4u: goto label_8002FCA4;
    case 0x8002FCA8u: goto label_8002FCA8;
    case 0x8002FCACu: goto label_8002FCAC;
    case 0x8002FCB0u: goto label_8002FCB0;
    case 0x8002FCB4u: goto label_8002FCB4;
    case 0x8002FCB8u: goto label_8002FCB8;
    case 0x8002FCBCu: goto label_8002FCBC;
    case 0x8002FCC0u: goto label_8002FCC0;
    case 0x8002FCC4u: goto label_8002FCC4;
    case 0x8002FCC8u: goto label_8002FCC8;
    case 0x8002FCCCu: goto label_8002FCCC;
    case 0x8002FCD0u: goto label_8002FCD0;
    case 0x8002FCD4u: goto label_8002FCD4;
    case 0x8002FCD8u: goto label_8002FCD8;
    case 0x8002FCDCu: goto label_8002FCDC;
    case 0x8002FCE0u: goto label_8002FCE0;
    case 0x8002FCE4u: goto label_8002FCE4;
    case 0x8002FCE8u: goto label_8002FCE8;
    case 0x8002FCECu: goto label_8002FCEC;
    case 0x8002FCF0u: goto label_8002FCF0;
    case 0x8002FCF4u: goto label_8002FCF4;
    case 0x8002FCF8u: goto label_8002FCF8;
    case 0x8002FCFCu: goto label_8002FCFC;
    case 0x8002FD00u: goto label_8002FD00;
    case 0x8002FD04u: goto label_8002FD04;
    case 0x8002FD08u: goto label_8002FD08;
    case 0x8002FD0Cu: goto label_8002FD0C;
    case 0x8002FD10u: goto label_8002FD10;
    case 0x8002FD14u: goto label_8002FD14;
    case 0x8002FD18u: goto label_8002FD18;
    case 0x8002FD1Cu: goto label_8002FD1C;
    case 0x8002FD20u: goto label_8002FD20;
    case 0x8002FD24u: goto label_8002FD24;
    case 0x8002FD28u: goto label_8002FD28;
    case 0x8002FD2Cu: goto label_8002FD2C;
    case 0x8002FD30u: goto label_8002FD30;
    case 0x8002FD34u: goto label_8002FD34;
    case 0x8002FD38u: goto label_8002FD38;
    case 0x8002FD3Cu: goto label_8002FD3C;
    case 0x8002FD40u: goto label_8002FD40;
    case 0x8002FD44u: goto label_8002FD44;
    case 0x8002FD48u: goto label_8002FD48;
    case 0x8002FD4Cu: goto label_8002FD4C;
    case 0x8002FD50u: goto label_8002FD50;
    case 0x8002FD54u: goto label_8002FD54;
    case 0x8002FD58u: goto label_8002FD58;
    case 0x8002FD5Cu: goto label_8002FD5C;
    case 0x8002FD60u: goto label_8002FD60;
    case 0x8002FD64u: goto label_8002FD64;
    case 0x8002FD68u: goto label_8002FD68;
    case 0x8002FD6Cu: goto label_8002FD6C;
    case 0x8002FD70u: goto label_8002FD70;
    case 0x8002FD74u: goto label_8002FD74;
    case 0x8002FD78u: goto label_8002FD78;
    case 0x8002FD7Cu: goto label_8002FD7C;
    case 0x8002FD80u: goto label_8002FD80;
    case 0x8002FD84u: goto label_8002FD84;
    case 0x8002FD88u: goto label_8002FD88;
    case 0x8002FD8Cu: goto label_8002FD8C;
    case 0x8002FD90u: goto label_8002FD90;
    case 0x8002FD94u: goto label_8002FD94;
    case 0x8002FD98u: goto label_8002FD98;
    case 0x8002FD9Cu: goto label_8002FD9C;
    case 0x8002FDA0u: goto label_8002FDA0;
    case 0x8002FDA4u: goto label_8002FDA4;
    case 0x8002FDA8u: goto label_8002FDA8;
    case 0x8002FDACu: goto label_8002FDAC;
    case 0x8002FDB0u: goto label_8002FDB0;
    case 0x8002FDB4u: goto label_8002FDB4;
    case 0x8002FDB8u: goto label_8002FDB8;
    case 0x8002FDBCu: goto label_8002FDBC;
    case 0x8002FDC0u: goto label_8002FDC0;
    case 0x8002FDC4u: goto label_8002FDC4;
    case 0x8002FDC8u: goto label_8002FDC8;
    case 0x8002FDCCu: goto label_8002FDCC;
    case 0x8002FDD0u: goto label_8002FDD0;
    case 0x8002FDD4u: goto label_8002FDD4;
    case 0x8002FDD8u: goto label_8002FDD8;
    case 0x8002FDDCu: goto label_8002FDDC;
    case 0x8002FDE0u: goto label_8002FDE0;
    case 0x8002FDE4u: goto label_8002FDE4;
    case 0x8002FDE8u: goto label_8002FDE8;
    case 0x8002FDECu: goto label_8002FDEC;
    case 0x8002FDF0u: goto label_8002FDF0;
    case 0x8002FDF4u: goto label_8002FDF4;
    case 0x8002FDF8u: goto label_8002FDF8;
    case 0x8002FDFCu: goto label_8002FDFC;
    case 0x8002FE00u: goto label_8002FE00;
    case 0x8002FE04u: goto label_8002FE04;
    case 0x8002FE08u: goto label_8002FE08;
    case 0x8002FE0Cu: goto label_8002FE0C;
    case 0x8002FE10u: goto label_8002FE10;
    case 0x8002FE14u: goto label_8002FE14;
    case 0x8002FE18u: goto label_8002FE18;
    case 0x8002FE1Cu: goto label_8002FE1C;
    case 0x8002FE20u: goto label_8002FE20;
    case 0x8002FE24u: goto label_8002FE24;
    case 0x8002FE28u: goto label_8002FE28;
    case 0x8002FE2Cu: goto label_8002FE2C;
    case 0x8002FE30u: goto label_8002FE30;
    case 0x8002FE34u: goto label_8002FE34;
    case 0x8002FE38u: goto label_8002FE38;
    case 0x8002FE3Cu: goto label_8002FE3C;
    case 0x8002FE40u: goto label_8002FE40;
    case 0x8002FE44u: goto label_8002FE44;
    case 0x8002FE48u: goto label_8002FE48;
    case 0x8002FE4Cu: goto label_8002FE4C;
    case 0x8002FE50u: goto label_8002FE50;
    case 0x8002FE54u: goto label_8002FE54;
    case 0x8002FE58u: goto label_8002FE58;
    case 0x8002FE5Cu: goto label_8002FE5C;
    case 0x8002FE60u: goto label_8002FE60;
    case 0x8002FE64u: goto label_8002FE64;
    case 0x8002FE68u: goto label_8002FE68;
    case 0x8002FE6Cu: goto label_8002FE6C;
    case 0x8002FE70u: goto label_8002FE70;
    case 0x8002FE74u: goto label_8002FE74;
    case 0x8002FE78u: goto label_8002FE78;
    case 0x8002FE7Cu: goto label_8002FE7C;
    case 0x8002FE80u: goto label_8002FE80;
    case 0x8002FE84u: goto label_8002FE84;
    case 0x8002FE88u: goto label_8002FE88;
    case 0x8002FE8Cu: goto label_8002FE8C;
    case 0x8002FE90u: goto label_8002FE90;
    case 0x8002FE94u: goto label_8002FE94;
    case 0x8002FE98u: goto label_8002FE98;
    case 0x8002FE9Cu: goto label_8002FE9C;
    case 0x8002FEA0u: goto label_8002FEA0;
    case 0x8002FEA4u: goto label_8002FEA4;
    case 0x8002FEA8u: goto label_8002FEA8;
    case 0x8002FEACu: goto label_8002FEAC;
    case 0x8002FEB0u: goto label_8002FEB0;
    case 0x8002FEB4u: goto label_8002FEB4;
    case 0x8002FEB8u: goto label_8002FEB8;
    case 0x8002FEBCu: goto label_8002FEBC;
    case 0x8002FEC0u: goto label_8002FEC0;
    case 0x8002FEC4u: goto label_8002FEC4;
    case 0x8002FEC8u: goto label_8002FEC8;
    case 0x8002FECCu: goto label_8002FECC;
    case 0x8002FED0u: goto label_8002FED0;
    case 0x8002FED4u: goto label_8002FED4;
    case 0x8002FED8u: goto label_8002FED8;
    case 0x8002FEDCu: goto label_8002FEDC;
    case 0x8002FEE0u: goto label_8002FEE0;
    case 0x8002FEE4u: goto label_8002FEE4;
    case 0x8002FEE8u: goto label_8002FEE8;
    case 0x8002FEECu: goto label_8002FEEC;
    case 0x8002FEF0u: goto label_8002FEF0;
    case 0x8002FEF4u: goto label_8002FEF4;
    case 0x8002FEF8u: goto label_8002FEF8;
    case 0x8002FEFCu: goto label_8002FEFC;
    case 0x8002FF00u: goto label_8002FF00;
    case 0x8002FF04u: goto label_8002FF04;
    case 0x8002FF08u: goto label_8002FF08;
    case 0x8002FF0Cu: goto label_8002FF0C;
    case 0x8002FF10u: goto label_8002FF10;
    case 0x8002FF14u: goto label_8002FF14;
    case 0x8002FF18u: goto label_8002FF18;
    case 0x8002FF1Cu: goto label_8002FF1C;
    case 0x8002FF20u: goto label_8002FF20;
    case 0x8002FF24u: goto label_8002FF24;
    case 0x8002FF28u: goto label_8002FF28;
    case 0x8002FF2Cu: goto label_8002FF2C;
    case 0x8002FF30u: goto label_8002FF30;
    case 0x8002FF34u: goto label_8002FF34;
    case 0x8002FF38u: goto label_8002FF38;
    case 0x8002FF3Cu: goto label_8002FF3C;
    case 0x8002FF40u: goto label_8002FF40;
    case 0x8002FF44u: goto label_8002FF44;
    case 0x8002FF48u: goto label_8002FF48;
    case 0x8002FF4Cu: goto label_8002FF4C;
    case 0x8002FF50u: goto label_8002FF50;
    case 0x8002FF54u: goto label_8002FF54;
    case 0x8002FF58u: goto label_8002FF58;
    case 0x8002FF5Cu: goto label_8002FF5C;
    case 0x8002FF60u: goto label_8002FF60;
    case 0x8002FF64u: goto label_8002FF64;
    case 0x8002FF68u: goto label_8002FF68;
    case 0x8002FF6Cu: goto label_8002FF6C;
    case 0x8002FF70u: goto label_8002FF70;
    case 0x8002FF74u: goto label_8002FF74;
    case 0x8002FF78u: goto label_8002FF78;
    case 0x8002FF7Cu: goto label_8002FF7C;
    case 0x8002FF80u: goto label_8002FF80;
    case 0x8002FF84u: goto label_8002FF84;
    case 0x8002FF88u: goto label_8002FF88;
    case 0x8002FF8Cu: goto label_8002FF8C;
    case 0x8002FF90u: goto label_8002FF90;
    case 0x8002FF94u: goto label_8002FF94;
    case 0x8002FF98u: goto label_8002FF98;
    case 0x8002FF9Cu: goto label_8002FF9C;
    case 0x8002FFA0u: goto label_8002FFA0;
    case 0x8002FFA4u: goto label_8002FFA4;
    case 0x8002FFA8u: goto label_8002FFA8;
    case 0x8002FFACu: goto label_8002FFAC;
    case 0x8002FFB0u: goto label_8002FFB0;
    case 0x8002FFB4u: goto label_8002FFB4;
    case 0x8002FFB8u: goto label_8002FFB8;
    case 0x8002FFBCu: goto label_8002FFBC;
    case 0x8002FFC0u: goto label_8002FFC0;
    case 0x8002FFC4u: goto label_8002FFC4;
    case 0x8002FFC8u: goto label_8002FFC8;
    case 0x8002FFCCu: goto label_8002FFCC;
    case 0x8002FFD0u: goto label_8002FFD0;
    case 0x8002FFD4u: goto label_8002FFD4;
    case 0x8002FFD8u: goto label_8002FFD8;
    case 0x8002FFDCu: goto label_8002FFDC;
    case 0x8002FFE0u: goto label_8002FFE0;
    case 0x8002FFE4u: goto label_8002FFE4;
    case 0x8002FFE8u: goto label_8002FFE8;
    case 0x8002FFECu: goto label_8002FFEC;
    case 0x8002FFF0u: goto label_8002FFF0;
    case 0x8002FFF4u: goto label_8002FFF4;
    case 0x8002FFF8u: goto label_8002FFF8;
    case 0x8002FFFCu: goto label_8002FFFC;
    case 0x80030000u: goto label_80030000;
    case 0x80030004u: goto label_80030004;
    case 0x80030008u: goto label_80030008;
    case 0x8003000Cu: goto label_8003000C;
    case 0x80030010u: goto label_80030010;
    case 0x80030014u: goto label_80030014;
    case 0x80030018u: goto label_80030018;
    case 0x8003001Cu: goto label_8003001C;
    case 0x80030020u: goto label_80030020;
    case 0x80030024u: goto label_80030024;
    case 0x80030028u: goto label_80030028;
    case 0x8003002Cu: goto label_8003002C;
    case 0x80030030u: goto label_80030030;
    case 0x80030034u: goto label_80030034;
    case 0x80030038u: goto label_80030038;
    case 0x8003003Cu: goto label_8003003C;
    case 0x80030040u: goto label_80030040;
    case 0x80030044u: goto label_80030044;
    case 0x80030048u: goto label_80030048;
    case 0x8003004Cu: goto label_8003004C;
    case 0x80030050u: goto label_80030050;
    case 0x80030054u: goto label_80030054;
    case 0x80030058u: goto label_80030058;
    case 0x8003005Cu: goto label_8003005C;
    case 0x80030060u: goto label_80030060;
    case 0x80030064u: goto label_80030064;
    case 0x80030068u: goto label_80030068;
    case 0x8003006Cu: goto label_8003006C;
    case 0x80030070u: goto label_80030070;
    case 0x80030074u: goto label_80030074;
    case 0x80030078u: goto label_80030078;
    case 0x8003007Cu: goto label_8003007C;
    case 0x80030080u: goto label_80030080;
    case 0x80030084u: goto label_80030084;
    case 0x80030088u: goto label_80030088;
    case 0x8003008Cu: goto label_8003008C;
    case 0x80030090u: goto label_80030090;
    case 0x80030094u: goto label_80030094;
    case 0x80030098u: goto label_80030098;
    case 0x8003009Cu: goto label_8003009C;
    case 0x800300A0u: goto label_800300A0;
    case 0x800300A4u: goto label_800300A4;
    case 0x800300A8u: goto label_800300A8;
    case 0x800300ACu: goto label_800300AC;
    case 0x800300B0u: goto label_800300B0;
    case 0x800300B4u: goto label_800300B4;
    case 0x800300B8u: goto label_800300B8;
    case 0x800300BCu: goto label_800300BC;
    case 0x800300C0u: goto label_800300C0;
    case 0x800300C4u: goto label_800300C4;
    case 0x800300C8u: goto label_800300C8;
    case 0x800300CCu: goto label_800300CC;
    case 0x800300D0u: goto label_800300D0;
    case 0x800300D4u: goto label_800300D4;
    case 0x800300D8u: goto label_800300D8;
    case 0x800300DCu: goto label_800300DC;
    case 0x800300E0u: goto label_800300E0;
    case 0x800300E4u: goto label_800300E4;
    case 0x800300E8u: goto label_800300E8;
    case 0x800300ECu: goto label_800300EC;
    case 0x800300F0u: goto label_800300F0;
    case 0x800300F4u: goto label_800300F4;
    case 0x800300F8u: goto label_800300F8;
    case 0x800300FCu: goto label_800300FC;
    case 0x80030100u: goto label_80030100;
    case 0x80030104u: goto label_80030104;
    case 0x80030108u: goto label_80030108;
    case 0x8003010Cu: goto label_8003010C;
    case 0x80030110u: goto label_80030110;
    case 0x80030114u: goto label_80030114;
    case 0x80030118u: goto label_80030118;
    case 0x8003011Cu: goto label_8003011C;
    case 0x80030120u: goto label_80030120;
    case 0x80030124u: goto label_80030124;
    case 0x80030128u: goto label_80030128;
    case 0x8003012Cu: goto label_8003012C;
    case 0x80030130u: goto label_80030130;
    case 0x80030134u: goto label_80030134;
    case 0x80030138u: goto label_80030138;
    case 0x8003013Cu: goto label_8003013C;
    case 0x80030140u: goto label_80030140;
    case 0x80030144u: goto label_80030144;
    case 0x80030148u: goto label_80030148;
    case 0x8003014Cu: goto label_8003014C;
    case 0x80030150u: goto label_80030150;
    case 0x80030154u: goto label_80030154;
    case 0x80030158u: goto label_80030158;
    case 0x8003015Cu: goto label_8003015C;
    case 0x80030160u: goto label_80030160;
    case 0x80030164u: goto label_80030164;
    case 0x80030168u: goto label_80030168;
    case 0x8003016Cu: goto label_8003016C;
    case 0x80030170u: goto label_80030170;
    case 0x80030174u: goto label_80030174;
    case 0x80030178u: goto label_80030178;
    case 0x8003017Cu: goto label_8003017C;
    case 0x80030180u: goto label_80030180;
    case 0x80030184u: goto label_80030184;
    case 0x80030188u: goto label_80030188;
    case 0x8003018Cu: goto label_8003018C;
    case 0x80030190u: goto label_80030190;
    case 0x80030194u: goto label_80030194;
    case 0x80030198u: goto label_80030198;
    case 0x8003019Cu: goto label_8003019C;
    case 0x800301A0u: goto label_800301A0;
    case 0x800301A4u: goto label_800301A4;
    case 0x800301A8u: goto label_800301A8;
    case 0x800301ACu: goto label_800301AC;
    case 0x800301B0u: goto label_800301B0;
    case 0x800301B4u: goto label_800301B4;
    case 0x800301B8u: goto label_800301B8;
    case 0x800301BCu: goto label_800301BC;
    case 0x800301C0u: goto label_800301C0;
    case 0x800301C4u: goto label_800301C4;
    case 0x800301C8u: goto label_800301C8;
    case 0x800301CCu: goto label_800301CC;
    case 0x800301D0u: goto label_800301D0;
    case 0x800301D4u: goto label_800301D4;
    case 0x800301D8u: goto label_800301D8;
    case 0x800301DCu: goto label_800301DC;
    case 0x800301E0u: goto label_800301E0;
    case 0x800301E4u: goto label_800301E4;
    case 0x800301E8u: goto label_800301E8;
    case 0x800301ECu: goto label_800301EC;
    case 0x800301F0u: goto label_800301F0;
    case 0x800301F4u: goto label_800301F4;
    case 0x800301F8u: goto label_800301F8;
    case 0x800301FCu: goto label_800301FC;
    case 0x80030200u: goto label_80030200;
    case 0x80030204u: goto label_80030204;
    case 0x80030208u: goto label_80030208;
    case 0x8003020Cu: goto label_8003020C;
    case 0x80030210u: goto label_80030210;
    case 0x80030214u: goto label_80030214;
    case 0x80030218u: goto label_80030218;
    case 0x8003021Cu: goto label_8003021C;
    case 0x80030220u: goto label_80030220;
    case 0x80030224u: goto label_80030224;
    case 0x80030228u: goto label_80030228;
    case 0x8003022Cu: goto label_8003022C;
    case 0x80030230u: goto label_80030230;
    case 0x80030234u: goto label_80030234;
    case 0x80030238u: goto label_80030238;
    case 0x8003023Cu: goto label_8003023C;
    case 0x80030240u: goto label_80030240;
    case 0x80030244u: goto label_80030244;
    case 0x80030248u: goto label_80030248;
    case 0x8003024Cu: goto label_8003024C;
    case 0x80030250u: goto label_80030250;
    case 0x80030254u: goto label_80030254;
    case 0x80030258u: goto label_80030258;
    case 0x8003025Cu: goto label_8003025C;
    case 0x80030260u: goto label_80030260;
    case 0x80030264u: goto label_80030264;
    case 0x80030268u: goto label_80030268;
    case 0x8003026Cu: goto label_8003026C;
    case 0x80030270u: goto label_80030270;
    case 0x80030274u: goto label_80030274;
    case 0x80030278u: goto label_80030278;
    case 0x8003027Cu: goto label_8003027C;
    case 0x80030280u: goto label_80030280;
    case 0x80030284u: goto label_80030284;
    case 0x80030288u: goto label_80030288;
    case 0x8003028Cu: goto label_8003028C;
    case 0x80030290u: goto label_80030290;
    case 0x80030294u: goto label_80030294;
    case 0x80030298u: goto label_80030298;
    case 0x8003029Cu: goto label_8003029C;
    case 0x800302A0u: goto label_800302A0;
    case 0x800302A4u: goto label_800302A4;
    case 0x800302A8u: goto label_800302A8;
    case 0x800302ACu: goto label_800302AC;
    case 0x800302B0u: goto label_800302B0;
    case 0x800302B4u: goto label_800302B4;
    case 0x800302B8u: goto label_800302B8;
    case 0x800302BCu: goto label_800302BC;
    case 0x800302C0u: goto label_800302C0;
    case 0x800302C4u: goto label_800302C4;
    case 0x800302C8u: goto label_800302C8;
    case 0x800302CCu: goto label_800302CC;
    case 0x800302D0u: goto label_800302D0;
    case 0x800302D4u: goto label_800302D4;
    case 0x800302D8u: goto label_800302D8;
    case 0x800302DCu: goto label_800302DC;
    case 0x800302E0u: goto label_800302E0;
    case 0x800302E4u: goto label_800302E4;
    case 0x800302E8u: goto label_800302E8;
    case 0x800302ECu: goto label_800302EC;
    case 0x800302F0u: goto label_800302F0;
    case 0x800302F4u: goto label_800302F4;
    case 0x800302F8u: goto label_800302F8;
    case 0x800302FCu: goto label_800302FC;
    case 0x80030300u: goto label_80030300;
    case 0x80030304u: goto label_80030304;
    case 0x80030308u: goto label_80030308;
    case 0x8003030Cu: goto label_8003030C;
    case 0x80030310u: goto label_80030310;
    case 0x80030314u: goto label_80030314;
    case 0x80030318u: goto label_80030318;
    case 0x8003031Cu: goto label_8003031C;
    case 0x80030320u: goto label_80030320;
    case 0x80030324u: goto label_80030324;
    case 0x80030328u: goto label_80030328;
    case 0x8003032Cu: goto label_8003032C;
    case 0x80030330u: goto label_80030330;
    case 0x80030334u: goto label_80030334;
    case 0x80030338u: goto label_80030338;
    case 0x8003033Cu: goto label_8003033C;
    case 0x80030340u: goto label_80030340;
    case 0x80030344u: goto label_80030344;
    case 0x80030348u: goto label_80030348;
    case 0x8003034Cu: goto label_8003034C;
    case 0x80030350u: goto label_80030350;
    case 0x80030354u: goto label_80030354;
    case 0x80030358u: goto label_80030358;
    case 0x8003035Cu: goto label_8003035C;
    case 0x80030360u: goto label_80030360;
    case 0x80030364u: goto label_80030364;
    case 0x80030368u: goto label_80030368;
    case 0x8003036Cu: goto label_8003036C;
    case 0x80030370u: goto label_80030370;
    case 0x80030374u: goto label_80030374;
    case 0x80030378u: goto label_80030378;
    case 0x8003037Cu: goto label_8003037C;
    case 0x80030380u: goto label_80030380;
    case 0x80030384u: goto label_80030384;
    case 0x80030388u: goto label_80030388;
    case 0x8003038Cu: goto label_8003038C;
    case 0x80030390u: goto label_80030390;
    case 0x80030394u: goto label_80030394;
    case 0x80030398u: goto label_80030398;
    case 0x8003039Cu: goto label_8003039C;
    case 0x800303A0u: goto label_800303A0;
    case 0x800303A4u: goto label_800303A4;
    case 0x800303A8u: goto label_800303A8;
    case 0x800303ACu: goto label_800303AC;
    case 0x800303B0u: goto label_800303B0;
    case 0x800303B4u: goto label_800303B4;
    case 0x800303B8u: goto label_800303B8;
    case 0x800303BCu: goto label_800303BC;
    case 0x800303C0u: goto label_800303C0;
    case 0x800303C4u: goto label_800303C4;
    case 0x800303C8u: goto label_800303C8;
    case 0x800303CCu: goto label_800303CC;
    case 0x800303D0u: goto label_800303D0;
    case 0x800303D4u: goto label_800303D4;
    case 0x800303D8u: goto label_800303D8;
    case 0x800303DCu: goto label_800303DC;
    case 0x800303E0u: goto label_800303E0;
    case 0x800303E4u: goto label_800303E4;
    case 0x800303E8u: goto label_800303E8;
    case 0x800303ECu: goto label_800303EC;
    case 0x800303F0u: goto label_800303F0;
    case 0x800303F4u: goto label_800303F4;
    case 0x800303F8u: goto label_800303F8;
    case 0x800303FCu: goto label_800303FC;
    case 0x80030400u: goto label_80030400;
    case 0x80030404u: goto label_80030404;
    case 0x80030408u: goto label_80030408;
    case 0x8003040Cu: goto label_8003040C;
    case 0x80030410u: goto label_80030410;
    case 0x80030414u: goto label_80030414;
    case 0x80030418u: goto label_80030418;
    case 0x8003041Cu: goto label_8003041C;
    case 0x80030420u: goto label_80030420;
    case 0x80030424u: goto label_80030424;
    case 0x80030428u: goto label_80030428;
    case 0x8003042Cu: goto label_8003042C;
    case 0x80030430u: goto label_80030430;
    case 0x80030434u: goto label_80030434;
    case 0x80030438u: goto label_80030438;
    case 0x8003043Cu: goto label_8003043C;
    case 0x80030440u: goto label_80030440;
    case 0x80030444u: goto label_80030444;
    case 0x80030448u: goto label_80030448;
    case 0x8003044Cu: goto label_8003044C;
    case 0x80030450u: goto label_80030450;
    case 0x80030454u: goto label_80030454;
    case 0x80030458u: goto label_80030458;
    case 0x8003045Cu: goto label_8003045C;
    case 0x80030460u: goto label_80030460;
    case 0x80030464u: goto label_80030464;
    case 0x80030468u: goto label_80030468;
    case 0x8003046Cu: goto label_8003046C;
    case 0x80030470u: goto label_80030470;
    case 0x80030474u: goto label_80030474;
    case 0x80030478u: goto label_80030478;
    case 0x8003047Cu: goto label_8003047C;
    case 0x80030480u: goto label_80030480;
    case 0x80030484u: goto label_80030484;
    case 0x80030488u: goto label_80030488;
    case 0x8003048Cu: goto label_8003048C;
    case 0x80030490u: goto label_80030490;
    case 0x80030494u: goto label_80030494;
    case 0x80030498u: goto label_80030498;
    case 0x8003049Cu: goto label_8003049C;
    case 0x800304A0u: goto label_800304A0;
    case 0x800304A4u: goto label_800304A4;
    case 0x800304A8u: goto label_800304A8;
    case 0x800304ACu: goto label_800304AC;
    case 0x800304B0u: goto label_800304B0;
    case 0x800304B4u: goto label_800304B4;
    case 0x800304B8u: goto label_800304B8;
    case 0x800304BCu: goto label_800304BC;
    case 0x800304C0u: goto label_800304C0;
    case 0x800304C4u: goto label_800304C4;
    case 0x800304C8u: goto label_800304C8;
    case 0x800304CCu: goto label_800304CC;
    case 0x800304D0u: goto label_800304D0;
    case 0x800304D4u: goto label_800304D4;
    case 0x800304D8u: goto label_800304D8;
    case 0x800304DCu: goto label_800304DC;
    case 0x800304E0u: goto label_800304E0;
    case 0x800304E4u: goto label_800304E4;
    case 0x800304E8u: goto label_800304E8;
    case 0x800304ECu: goto label_800304EC;
    case 0x800304F0u: goto label_800304F0;
    case 0x800304F4u: goto label_800304F4;
    case 0x800304F8u: goto label_800304F8;
    case 0x800304FCu: goto label_800304FC;
    case 0x80030500u: goto label_80030500;
    case 0x80030504u: goto label_80030504;
    case 0x80030508u: goto label_80030508;
    case 0x8003050Cu: goto label_8003050C;
    case 0x80030510u: goto label_80030510;
    case 0x80030514u: goto label_80030514;
    case 0x80030518u: goto label_80030518;
    case 0x8003051Cu: goto label_8003051C;
    case 0x80030520u: goto label_80030520;
    case 0x80030524u: goto label_80030524;
    case 0x80030528u: goto label_80030528;
    case 0x8003052Cu: goto label_8003052C;
    case 0x80030530u: goto label_80030530;
    case 0x80030534u: goto label_80030534;
    case 0x80030538u: goto label_80030538;
    case 0x8003053Cu: goto label_8003053C;
    case 0x80030540u: goto label_80030540;
    case 0x80030544u: goto label_80030544;
    case 0x80030548u: goto label_80030548;
    case 0x8003054Cu: goto label_8003054C;
    case 0x80030550u: goto label_80030550;
    case 0x80030554u: goto label_80030554;
    case 0x80030558u: goto label_80030558;
    case 0x8003055Cu: goto label_8003055C;
    case 0x80030560u: goto label_80030560;
    case 0x80030564u: goto label_80030564;
    case 0x80030568u: goto label_80030568;
    case 0x8003056Cu: goto label_8003056C;
    case 0x80030570u: goto label_80030570;
    case 0x80030574u: goto label_80030574;
    case 0x80030578u: goto label_80030578;
    case 0x8003057Cu: goto label_8003057C;
    case 0x80030580u: goto label_80030580;
    case 0x80030584u: goto label_80030584;
    case 0x80030588u: goto label_80030588;
    case 0x8003058Cu: goto label_8003058C;
    case 0x80030590u: goto label_80030590;
    case 0x80030594u: goto label_80030594;
    case 0x80030598u: goto label_80030598;
    case 0x8003059Cu: goto label_8003059C;
    case 0x800305A0u: goto label_800305A0;
    case 0x800305A4u: goto label_800305A4;
    case 0x800305A8u: goto label_800305A8;
    case 0x800305ACu: goto label_800305AC;
    case 0x800305B0u: goto label_800305B0;
    case 0x800305B4u: goto label_800305B4;
    case 0x800305B8u: goto label_800305B8;
    case 0x800305BCu: goto label_800305BC;
    case 0x800305C0u: goto label_800305C0;
    case 0x800305C4u: goto label_800305C4;
    case 0x800305C8u: goto label_800305C8;
    case 0x800305CCu: goto label_800305CC;
    case 0x800305D0u: goto label_800305D0;
    case 0x800305D4u: goto label_800305D4;
    case 0x800305D8u: goto label_800305D8;
    case 0x800305DCu: goto label_800305DC;
    case 0x800305E0u: goto label_800305E0;
    case 0x800305E4u: goto label_800305E4;
    case 0x800305E8u: goto label_800305E8;
    case 0x800305ECu: goto label_800305EC;
    case 0x800305F0u: goto label_800305F0;
    case 0x800305F4u: goto label_800305F4;
    case 0x800305F8u: goto label_800305F8;
    case 0x800305FCu: goto label_800305FC;
    case 0x80030600u: goto label_80030600;
    case 0x80030604u: goto label_80030604;
    case 0x80030608u: goto label_80030608;
    case 0x8003060Cu: goto label_8003060C;
    case 0x80030610u: goto label_80030610;
    case 0x80030614u: goto label_80030614;
    case 0x80030618u: goto label_80030618;
    case 0x8003061Cu: goto label_8003061C;
    case 0x80030620u: goto label_80030620;
    case 0x80030624u: goto label_80030624;
    case 0x80030628u: goto label_80030628;
    case 0x8003062Cu: goto label_8003062C;
    case 0x80030630u: goto label_80030630;
    case 0x80030634u: goto label_80030634;
    case 0x80030638u: goto label_80030638;
    case 0x8003063Cu: goto label_8003063C;
    case 0x80030640u: goto label_80030640;
    case 0x80030644u: goto label_80030644;
    case 0x80030648u: goto label_80030648;
    case 0x8003064Cu: goto label_8003064C;
    case 0x80030650u: goto label_80030650;
    case 0x80030654u: goto label_80030654;
    case 0x80030658u: goto label_80030658;
    case 0x8003065Cu: goto label_8003065C;
    case 0x80030660u: goto label_80030660;
    case 0x80030664u: goto label_80030664;
    case 0x80030668u: goto label_80030668;
    case 0x8003066Cu: goto label_8003066C;
    case 0x80030670u: goto label_80030670;
    case 0x80030674u: goto label_80030674;
    case 0x80030678u: goto label_80030678;
    case 0x8003067Cu: goto label_8003067C;
    case 0x80030680u: goto label_80030680;
    case 0x80030684u: goto label_80030684;
    case 0x80030688u: goto label_80030688;
    case 0x8003068Cu: goto label_8003068C;
    case 0x80030690u: goto label_80030690;
    case 0x80030694u: goto label_80030694;
    case 0x80030698u: goto label_80030698;
    case 0x8003069Cu: goto label_8003069C;
    case 0x800306A0u: goto label_800306A0;
    case 0x800306A4u: goto label_800306A4;
    case 0x800306A8u: goto label_800306A8;
    case 0x800306ACu: goto label_800306AC;
    case 0x800306B0u: goto label_800306B0;
    case 0x800306B4u: goto label_800306B4;
    case 0x800306B8u: goto label_800306B8;
    case 0x800306BCu: goto label_800306BC;
    case 0x800306C0u: goto label_800306C0;
    case 0x800306C4u: goto label_800306C4;
    case 0x800306C8u: goto label_800306C8;
    case 0x800306CCu: goto label_800306CC;
    case 0x800306D0u: goto label_800306D0;
    case 0x800306D4u: goto label_800306D4;
    case 0x800306D8u: goto label_800306D8;
    case 0x800306DCu: goto label_800306DC;
    case 0x800306E0u: goto label_800306E0;
    case 0x800306E4u: goto label_800306E4;
    case 0x800306E8u: goto label_800306E8;
    case 0x800306ECu: goto label_800306EC;
    case 0x800306F0u: goto label_800306F0;
    case 0x800306F4u: goto label_800306F4;
    case 0x800306F8u: goto label_800306F8;
    case 0x800306FCu: goto label_800306FC;
    case 0x80030700u: goto label_80030700;
    case 0x80030704u: goto label_80030704;
    case 0x80030708u: goto label_80030708;
    case 0x8003070Cu: goto label_8003070C;
    case 0x80030710u: goto label_80030710;
    case 0x80030714u: goto label_80030714;
    case 0x80030718u: goto label_80030718;
    case 0x8003071Cu: goto label_8003071C;
    case 0x80030720u: goto label_80030720;
    case 0x80030724u: goto label_80030724;
    case 0x80030728u: goto label_80030728;
    case 0x8003072Cu: goto label_8003072C;
    case 0x80030730u: goto label_80030730;
    case 0x80030734u: goto label_80030734;
    case 0x80030738u: goto label_80030738;
    case 0x8003073Cu: goto label_8003073C;
    case 0x80030740u: goto label_80030740;
    case 0x80030744u: goto label_80030744;
    case 0x80030748u: goto label_80030748;
    case 0x8003074Cu: goto label_8003074C;
    case 0x80030750u: goto label_80030750;
    case 0x80030754u: goto label_80030754;
    case 0x80030758u: goto label_80030758;
    case 0x8003075Cu: goto label_8003075C;
    case 0x80030760u: goto label_80030760;
    case 0x80030764u: goto label_80030764;
    case 0x80030768u: goto label_80030768;
    case 0x8003076Cu: goto label_8003076C;
    case 0x80030770u: goto label_80030770;
    case 0x80030774u: goto label_80030774;
    case 0x80030778u: goto label_80030778;
    case 0x8003077Cu: goto label_8003077C;
    case 0x80030780u: goto label_80030780;
    case 0x80030784u: goto label_80030784;
    case 0x80030788u: goto label_80030788;
    case 0x8003078Cu: goto label_8003078C;
    case 0x80030790u: goto label_80030790;
    case 0x80030794u: goto label_80030794;
    case 0x80030798u: goto label_80030798;
    case 0x8003079Cu: goto label_8003079C;
    case 0x800307A0u: goto label_800307A0;
    case 0x800307A4u: goto label_800307A4;
    case 0x800307A8u: goto label_800307A8;
    case 0x800307ACu: goto label_800307AC;
    case 0x800307B0u: goto label_800307B0;
    case 0x800307B4u: goto label_800307B4;
    case 0x800307B8u: goto label_800307B8;
    case 0x800307BCu: goto label_800307BC;
    case 0x800307C0u: goto label_800307C0;
    case 0x800307C4u: goto label_800307C4;
    case 0x800307C8u: goto label_800307C8;
    case 0x800307CCu: goto label_800307CC;
    case 0x800307D0u: goto label_800307D0;
    case 0x800307D4u: goto label_800307D4;
    case 0x800307D8u: goto label_800307D8;
    case 0x800307DCu: goto label_800307DC;
    case 0x800307E0u: goto label_800307E0;
    case 0x800307E4u: goto label_800307E4;
    case 0x800307E8u: goto label_800307E8;
    case 0x800307ECu: goto label_800307EC;
    case 0x800307F0u: goto label_800307F0;
    case 0x800307F4u: goto label_800307F4;
    case 0x800307F8u: goto label_800307F8;
    case 0x800307FCu: goto label_800307FC;
    case 0x80030800u: goto label_80030800;
    case 0x80030804u: goto label_80030804;
    case 0x80030808u: goto label_80030808;
    case 0x8003080Cu: goto label_8003080C;
    case 0x80030810u: goto label_80030810;
    case 0x80030814u: goto label_80030814;
    case 0x80030818u: goto label_80030818;
    case 0x8003081Cu: goto label_8003081C;
    case 0x80030820u: goto label_80030820;
    case 0x80030824u: goto label_80030824;
    case 0x80030828u: goto label_80030828;
    case 0x8003082Cu: goto label_8003082C;
    case 0x80030830u: goto label_80030830;
    case 0x80030834u: goto label_80030834;
    case 0x80030838u: goto label_80030838;
    case 0x8003083Cu: goto label_8003083C;
    case 0x80030840u: goto label_80030840;
    case 0x80030844u: goto label_80030844;
    case 0x80030848u: goto label_80030848;
    case 0x8003084Cu: goto label_8003084C;
    case 0x80030850u: goto label_80030850;
    case 0x80030854u: goto label_80030854;
    case 0x80030858u: goto label_80030858;
    case 0x8003085Cu: goto label_8003085C;
    case 0x80030860u: goto label_80030860;
    case 0x80030864u: goto label_80030864;
    case 0x80030868u: goto label_80030868;
    case 0x8003086Cu: goto label_8003086C;
    case 0x80030870u: goto label_80030870;
    case 0x80030874u: goto label_80030874;
    case 0x80030878u: goto label_80030878;
    case 0x8003087Cu: goto label_8003087C;
    case 0x80030880u: goto label_80030880;
    case 0x80030884u: goto label_80030884;
    case 0x80030888u: goto label_80030888;
    case 0x8003088Cu: goto label_8003088C;
    case 0x80030890u: goto label_80030890;
    case 0x80030894u: goto label_80030894;
    case 0x80030898u: goto label_80030898;
    case 0x8003089Cu: goto label_8003089C;
    case 0x800308A0u: goto label_800308A0;
    case 0x800308A4u: goto label_800308A4;
    case 0x800308A8u: goto label_800308A8;
    case 0x800308ACu: goto label_800308AC;
    case 0x800308B0u: goto label_800308B0;
    case 0x800308B4u: goto label_800308B4;
    case 0x800308B8u: goto label_800308B8;
    case 0x800308BCu: goto label_800308BC;
    case 0x800308C0u: goto label_800308C0;
    case 0x800308C4u: goto label_800308C4;
    case 0x800308C8u: goto label_800308C8;
    case 0x800308CCu: goto label_800308CC;
    case 0x800308D0u: goto label_800308D0;
    case 0x800308D4u: goto label_800308D4;
    case 0x800308D8u: goto label_800308D8;
    case 0x800308DCu: goto label_800308DC;
    case 0x800308E0u: goto label_800308E0;
    case 0x800308E4u: goto label_800308E4;
    case 0x800308E8u: goto label_800308E8;
    case 0x800308ECu: goto label_800308EC;
    case 0x800308F0u: goto label_800308F0;
    case 0x800308F4u: goto label_800308F4;
    case 0x800308F8u: goto label_800308F8;
    case 0x800308FCu: goto label_800308FC;
    case 0x80030900u: goto label_80030900;
    case 0x80030904u: goto label_80030904;
    case 0x80030908u: goto label_80030908;
    case 0x8003090Cu: goto label_8003090C;
    case 0x80030910u: goto label_80030910;
    case 0x80030914u: goto label_80030914;
    case 0x80030918u: goto label_80030918;
    case 0x8003091Cu: goto label_8003091C;
    case 0x80030920u: goto label_80030920;
    case 0x80030924u: goto label_80030924;
    case 0x80030928u: goto label_80030928;
    case 0x8003092Cu: goto label_8003092C;
    case 0x80030930u: goto label_80030930;
    case 0x80030934u: goto label_80030934;
    case 0x80030938u: goto label_80030938;
    case 0x8003093Cu: goto label_8003093C;
    case 0x80030940u: goto label_80030940;
    case 0x80030944u: goto label_80030944;
    case 0x80030948u: goto label_80030948;
    case 0x8003094Cu: goto label_8003094C;
    case 0x80030950u: goto label_80030950;
    case 0x80030954u: goto label_80030954;
    case 0x80030958u: goto label_80030958;
    case 0x8003095Cu: goto label_8003095C;
    case 0x80030960u: goto label_80030960;
    case 0x80030964u: goto label_80030964;
    case 0x80030968u: goto label_80030968;
    case 0x8003096Cu: goto label_8003096C;
    case 0x80030970u: goto label_80030970;
    case 0x80030974u: goto label_80030974;
    case 0x80030978u: goto label_80030978;
    case 0x8003097Cu: goto label_8003097C;
    case 0x80030980u: goto label_80030980;
    case 0x80030984u: goto label_80030984;
    case 0x80030988u: goto label_80030988;
    case 0x8003098Cu: goto label_8003098C;
    case 0x80030990u: goto label_80030990;
    case 0x80030994u: goto label_80030994;
    case 0x80030998u: goto label_80030998;
    case 0x8003099Cu: goto label_8003099C;
    case 0x800309A0u: goto label_800309A0;
    case 0x800309A4u: goto label_800309A4;
    case 0x800309A8u: goto label_800309A8;
    case 0x800309ACu: goto label_800309AC;
    case 0x800309B0u: goto label_800309B0;
    case 0x800309B4u: goto label_800309B4;
    case 0x800309B8u: goto label_800309B8;
    case 0x800309BCu: goto label_800309BC;
    case 0x800309C0u: goto label_800309C0;
    case 0x800309C4u: goto label_800309C4;
    case 0x800309C8u: goto label_800309C8;
    case 0x800309CCu: goto label_800309CC;
    case 0x800309D0u: goto label_800309D0;
    case 0x800309D4u: goto label_800309D4;
    case 0x800309D8u: goto label_800309D8;
    case 0x800309DCu: goto label_800309DC;
    case 0x800309E0u: goto label_800309E0;
    case 0x800309E4u: goto label_800309E4;
    case 0x800309E8u: goto label_800309E8;
    case 0x800309ECu: goto label_800309EC;
    case 0x800309F0u: goto label_800309F0;
    case 0x800309F4u: goto label_800309F4;
    case 0x800309F8u: goto label_800309F8;
    case 0x800309FCu: goto label_800309FC;
    case 0x80030A00u: goto label_80030A00;
    case 0x80030A04u: goto label_80030A04;
    case 0x80030A08u: goto label_80030A08;
    case 0x80030A0Cu: goto label_80030A0C;
    case 0x80030A10u: goto label_80030A10;
    case 0x80030A14u: goto label_80030A14;
    case 0x80030A18u: goto label_80030A18;
    case 0x80030A1Cu: goto label_80030A1C;
    case 0x80030A20u: goto label_80030A20;
    case 0x80030A24u: goto label_80030A24;
    case 0x80030A28u: goto label_80030A28;
    case 0x80030A2Cu: goto label_80030A2C;
    case 0x80030A30u: goto label_80030A30;
    case 0x80030A34u: goto label_80030A34;
    case 0x80030A38u: goto label_80030A38;
    case 0x80030A3Cu: goto label_80030A3C;
    case 0x80030A40u: goto label_80030A40;
    case 0x80030A44u: goto label_80030A44;
    case 0x80030A48u: goto label_80030A48;
    case 0x80030A4Cu: goto label_80030A4C;
    case 0x80030A50u: goto label_80030A50;
    case 0x80030A54u: goto label_80030A54;
    case 0x80030A58u: goto label_80030A58;
    case 0x80030A5Cu: goto label_80030A5C;
    case 0x80030A60u: goto label_80030A60;
    case 0x80030A64u: goto label_80030A64;
    case 0x80030A68u: goto label_80030A68;
    case 0x80030A6Cu: goto label_80030A6C;
    case 0x80030A70u: goto label_80030A70;
    case 0x80030A74u: goto label_80030A74;
    case 0x80030A78u: goto label_80030A78;
    case 0x80030A7Cu: goto label_80030A7C;
    case 0x80030A80u: goto label_80030A80;
    case 0x80030A84u: goto label_80030A84;
    case 0x80030A88u: goto label_80030A88;
    case 0x80030A8Cu: goto label_80030A8C;
    case 0x80030A90u: goto label_80030A90;
    case 0x80030A94u: goto label_80030A94;
    case 0x80030A98u: goto label_80030A98;
    case 0x80030A9Cu: goto label_80030A9C;
    case 0x80030AA0u: goto label_80030AA0;
    case 0x80030AA4u: goto label_80030AA4;
    case 0x80030AA8u: goto label_80030AA8;
    case 0x80030AACu: goto label_80030AAC;
    case 0x80030AB0u: goto label_80030AB0;
    case 0x80030AB4u: goto label_80030AB4;
    case 0x80030AB8u: goto label_80030AB8;
    case 0x80030ABCu: goto label_80030ABC;
    case 0x80030AC0u: goto label_80030AC0;
    case 0x80030AC4u: goto label_80030AC4;
    case 0x80030AC8u: goto label_80030AC8;
    case 0x80030ACCu: goto label_80030ACC;
    case 0x80030AD0u: goto label_80030AD0;
    case 0x80030AD4u: goto label_80030AD4;
    case 0x80030AD8u: goto label_80030AD8;
    case 0x80030ADCu: goto label_80030ADC;
    case 0x80030AE0u: goto label_80030AE0;
    case 0x80030AE4u: goto label_80030AE4;
    case 0x80030AE8u: goto label_80030AE8;
    case 0x80030AECu: goto label_80030AEC;
    case 0x80030AF0u: goto label_80030AF0;
    case 0x80030AF4u: goto label_80030AF4;
    case 0x80030AF8u: goto label_80030AF8;
    case 0x80030AFCu: goto label_80030AFC;
    case 0x80030B00u: goto label_80030B00;
    case 0x80030B04u: goto label_80030B04;
    case 0x80030B08u: goto label_80030B08;
    case 0x80030B0Cu: goto label_80030B0C;
    case 0x80030B10u: goto label_80030B10;
    case 0x80030B14u: goto label_80030B14;
    case 0x80030B18u: goto label_80030B18;
    case 0x80030B1Cu: goto label_80030B1C;
    case 0x80030B20u: goto label_80030B20;
    case 0x80030B24u: goto label_80030B24;
    case 0x80030B28u: goto label_80030B28;
    case 0x80030B2Cu: goto label_80030B2C;
    case 0x80030B30u: goto label_80030B30;
    case 0x80030B34u: goto label_80030B34;
    case 0x80030B38u: goto label_80030B38;
    case 0x80030B3Cu: goto label_80030B3C;
    case 0x80030B40u: goto label_80030B40;
    case 0x80030B44u: goto label_80030B44;
    case 0x80030B48u: goto label_80030B48;
    case 0x80030B4Cu: goto label_80030B4C;
    case 0x80030B50u: goto label_80030B50;
    case 0x80030B54u: goto label_80030B54;
    case 0x80030B58u: goto label_80030B58;
    case 0x80030B5Cu: goto label_80030B5C;
    case 0x80030B60u: goto label_80030B60;
    case 0x80030B64u: goto label_80030B64;
    case 0x80030B68u: goto label_80030B68;
    case 0x80030B6Cu: goto label_80030B6C;
    case 0x80030B70u: goto label_80030B70;
    case 0x80030B74u: goto label_80030B74;
    case 0x80030B78u: goto label_80030B78;
    case 0x80030B7Cu: goto label_80030B7C;
    case 0x80030B80u: goto label_80030B80;
    case 0x80030B84u: goto label_80030B84;
    case 0x80030B88u: goto label_80030B88;
    case 0x80030B8Cu: goto label_80030B8C;
    case 0x80030B90u: goto label_80030B90;
    case 0x80030B94u: goto label_80030B94;
    case 0x80030B98u: goto label_80030B98;
    case 0x80030B9Cu: goto label_80030B9C;
    case 0x80030BA0u: goto label_80030BA0;
    case 0x80030BA4u: goto label_80030BA4;
    case 0x80030BA8u: goto label_80030BA8;
    case 0x80030BACu: goto label_80030BAC;
    case 0x80030BB0u: goto label_80030BB0;
    case 0x80030BB4u: goto label_80030BB4;
    case 0x80030BB8u: goto label_80030BB8;
    case 0x80030BBCu: goto label_80030BBC;
    case 0x80030BC0u: goto label_80030BC0;
    case 0x80030BC4u: goto label_80030BC4;
    case 0x80030BC8u: goto label_80030BC8;
    case 0x80030BCCu: goto label_80030BCC;
    case 0x80030BD0u: goto label_80030BD0;
    case 0x80030BD4u: goto label_80030BD4;
    case 0x80030BD8u: goto label_80030BD8;
    case 0x80030BDCu: goto label_80030BDC;
    case 0x80030BE0u: goto label_80030BE0;
    case 0x80030BE4u: goto label_80030BE4;
    case 0x80030BE8u: goto label_80030BE8;
    case 0x80030BECu: goto label_80030BEC;
    case 0x80030BF0u: goto label_80030BF0;
    case 0x80030BF4u: goto label_80030BF4;
    case 0x80030BF8u: goto label_80030BF8;
    case 0x80030BFCu: goto label_80030BFC;
    case 0x80030C00u: goto label_80030C00;
    case 0x80030C04u: goto label_80030C04;
    case 0x80030C08u: goto label_80030C08;
    case 0x80030C0Cu: goto label_80030C0C;
    case 0x80030C10u: goto label_80030C10;
    case 0x80030C14u: goto label_80030C14;
    case 0x80030C18u: goto label_80030C18;
    case 0x80030C1Cu: goto label_80030C1C;
    case 0x80030C20u: goto label_80030C20;
    case 0x80030C24u: goto label_80030C24;
    case 0x80030C28u: goto label_80030C28;
    case 0x80030C2Cu: goto label_80030C2C;
    case 0x80030C30u: goto label_80030C30;
    case 0x80030C34u: goto label_80030C34;
    case 0x80030C38u: goto label_80030C38;
    case 0x80030C3Cu: goto label_80030C3C;
    case 0x80030C40u: goto label_80030C40;
    case 0x80030C44u: goto label_80030C44;
    case 0x80030C48u: goto label_80030C48;
    case 0x80030C4Cu: goto label_80030C4C;
    case 0x80030C50u: goto label_80030C50;
    case 0x80030C54u: goto label_80030C54;
    case 0x80030C58u: goto label_80030C58;
    case 0x80030C5Cu: goto label_80030C5C;
    case 0x80030C60u: goto label_80030C60;
    case 0x80030C64u: goto label_80030C64;
    case 0x80030C68u: goto label_80030C68;
    case 0x80030C6Cu: goto label_80030C6C;
    case 0x80030C70u: goto label_80030C70;
    case 0x80030C74u: goto label_80030C74;
    case 0x80030C78u: goto label_80030C78;
    case 0x80030C7Cu: goto label_80030C7C;
    case 0x80030C80u: goto label_80030C80;
    case 0x80030C84u: goto label_80030C84;
    case 0x80030C88u: goto label_80030C88;
    case 0x80030C8Cu: goto label_80030C8C;
    case 0x80030C90u: goto label_80030C90;
    case 0x80030C94u: goto label_80030C94;
    case 0x80030C98u: goto label_80030C98;
    case 0x80030C9Cu: goto label_80030C9C;
    case 0x80030CA0u: goto label_80030CA0;
    case 0x80030CA4u: goto label_80030CA4;
    case 0x80030CA8u: goto label_80030CA8;
    case 0x80030CACu: goto label_80030CAC;
    case 0x80030CB0u: goto label_80030CB0;
    case 0x80030CB4u: goto label_80030CB4;
    case 0x80030CB8u: goto label_80030CB8;
    case 0x80030CBCu: goto label_80030CBC;
    case 0x80030CC0u: goto label_80030CC0;
    case 0x80030CC4u: goto label_80030CC4;
    case 0x80030CC8u: goto label_80030CC8;
    case 0x80030CCCu: goto label_80030CCC;
    case 0x80030CD0u: goto label_80030CD0;
    case 0x80030CD4u: goto label_80030CD4;
    case 0x80030CD8u: goto label_80030CD8;
    case 0x80030CDCu: goto label_80030CDC;
    case 0x80030CE0u: goto label_80030CE0;
    case 0x80030CE4u: goto label_80030CE4;
    case 0x80030CE8u: goto label_80030CE8;
    case 0x80030CECu: goto label_80030CEC;
    case 0x80030CF0u: goto label_80030CF0;
    case 0x80030CF4u: goto label_80030CF4;
    case 0x80030CF8u: goto label_80030CF8;
    case 0x80030CFCu: goto label_80030CFC;
    case 0x80030D00u: goto label_80030D00;
    case 0x80030D04u: goto label_80030D04;
    case 0x80030D08u: goto label_80030D08;
    case 0x80030D0Cu: goto label_80030D0C;
    case 0x80030D10u: goto label_80030D10;
    case 0x80030D14u: goto label_80030D14;
    case 0x80030D18u: goto label_80030D18;
    case 0x80030D1Cu: goto label_80030D1C;
    case 0x80030D20u: goto label_80030D20;
    case 0x80030D24u: goto label_80030D24;
    case 0x80030D28u: goto label_80030D28;
    case 0x80030D2Cu: goto label_80030D2C;
    case 0x80030D30u: goto label_80030D30;
    case 0x80030D34u: goto label_80030D34;
    case 0x80030D38u: goto label_80030D38;
    case 0x80030D3Cu: goto label_80030D3C;
    case 0x80030D40u: goto label_80030D40;
    case 0x80030D44u: goto label_80030D44;
    case 0x80030D48u: goto label_80030D48;
    case 0x80030D4Cu: goto label_80030D4C;
    case 0x80030D50u: goto label_80030D50;
    case 0x80030D54u: goto label_80030D54;
    case 0x80030D58u: goto label_80030D58;
    case 0x80030D5Cu: goto label_80030D5C;
    case 0x80030D60u: goto label_80030D60;
    case 0x80030D64u: goto label_80030D64;
    case 0x80030D68u: goto label_80030D68;
    case 0x80030D6Cu: goto label_80030D6C;
    case 0x80030D70u: goto label_80030D70;
    case 0x80030D74u: goto label_80030D74;
    case 0x80030D78u: goto label_80030D78;
    case 0x80030D7Cu: goto label_80030D7C;
    case 0x80030D80u: goto label_80030D80;
    case 0x80030D84u: goto label_80030D84;
    case 0x80030D88u: goto label_80030D88;
    case 0x80030D8Cu: goto label_80030D8C;
    case 0x80030D90u: goto label_80030D90;
    case 0x80030D94u: goto label_80030D94;
    case 0x80030D98u: goto label_80030D98;
    case 0x80030D9Cu: goto label_80030D9C;
    case 0x80030DA0u: goto label_80030DA0;
    case 0x80030DA4u: goto label_80030DA4;
    case 0x80030DA8u: goto label_80030DA8;
    case 0x80030DACu: goto label_80030DAC;
    case 0x80030DB0u: goto label_80030DB0;
    case 0x80030DB4u: goto label_80030DB4;
    case 0x80030DB8u: goto label_80030DB8;
    case 0x80030DBCu: goto label_80030DBC;
    case 0x80030DC0u: goto label_80030DC0;
    case 0x80030DC4u: goto label_80030DC4;
    case 0x80030DC8u: goto label_80030DC8;
    case 0x80030DCCu: goto label_80030DCC;
    case 0x80030DD0u: goto label_80030DD0;
    case 0x80030DD4u: goto label_80030DD4;
    case 0x80030DD8u: goto label_80030DD8;
    case 0x80030DDCu: goto label_80030DDC;
    case 0x80030DE0u: goto label_80030DE0;
    case 0x80030DE4u: goto label_80030DE4;
    case 0x80030DE8u: goto label_80030DE8;
    case 0x80030DECu: goto label_80030DEC;
    case 0x80030DF0u: goto label_80030DF0;
    case 0x80030DF4u: goto label_80030DF4;
    case 0x80030DF8u: goto label_80030DF8;
    case 0x80030DFCu: goto label_80030DFC;
    case 0x80030E00u: goto label_80030E00;
    case 0x80030E04u: goto label_80030E04;
    case 0x80030E08u: goto label_80030E08;
    case 0x80030E0Cu: goto label_80030E0C;
    case 0x80030E10u: goto label_80030E10;
    case 0x80030E14u: goto label_80030E14;
    case 0x80030E18u: goto label_80030E18;
    case 0x80030E1Cu: goto label_80030E1C;
    case 0x80030E20u: goto label_80030E20;
    case 0x80030E24u: goto label_80030E24;
    case 0x80030E28u: goto label_80030E28;
    case 0x80030E2Cu: goto label_80030E2C;
    case 0x80030E30u: goto label_80030E30;
    case 0x80030E34u: goto label_80030E34;
    case 0x80030E38u: goto label_80030E38;
    case 0x80030E3Cu: goto label_80030E3C;
    case 0x80030E40u: goto label_80030E40;
    case 0x80030E44u: goto label_80030E44;
    case 0x80030E48u: goto label_80030E48;
    case 0x80030E4Cu: goto label_80030E4C;
    case 0x80030E50u: goto label_80030E50;
    case 0x80030E54u: goto label_80030E54;
    case 0x80030E58u: goto label_80030E58;
    case 0x80030E5Cu: goto label_80030E5C;
    case 0x80030E60u: goto label_80030E60;
    case 0x80030E64u: goto label_80030E64;
    case 0x80030E68u: goto label_80030E68;
    case 0x80030E6Cu: goto label_80030E6C;
    case 0x80030E70u: goto label_80030E70;
    case 0x80030E74u: goto label_80030E74;
    case 0x80030E78u: goto label_80030E78;
    case 0x80030E7Cu: goto label_80030E7C;
    case 0x80030E80u: goto label_80030E80;
    case 0x80030E84u: goto label_80030E84;
    case 0x80030E88u: goto label_80030E88;
    case 0x80030E8Cu: goto label_80030E8C;
    case 0x80030E90u: goto label_80030E90;
    case 0x80030E94u: goto label_80030E94;
    case 0x80030E98u: goto label_80030E98;
    case 0x80030E9Cu: goto label_80030E9C;
    case 0x80030EA0u: goto label_80030EA0;
    case 0x80030EA4u: goto label_80030EA4;
    case 0x80030EA8u: goto label_80030EA8;
    case 0x80030EACu: goto label_80030EAC;
    case 0x80030EB0u: goto label_80030EB0;
    case 0x80030EB4u: goto label_80030EB4;
    case 0x80030EB8u: goto label_80030EB8;
    case 0x80030EBCu: goto label_80030EBC;
    case 0x80030EC0u: goto label_80030EC0;
    case 0x80030EC4u: goto label_80030EC4;
    case 0x80030EC8u: goto label_80030EC8;
    case 0x80030ECCu: goto label_80030ECC;
    case 0x80030ED0u: goto label_80030ED0;
    case 0x80030ED4u: goto label_80030ED4;
    case 0x80030ED8u: goto label_80030ED8;
    case 0x80030EDCu: goto label_80030EDC;
    case 0x80030EE0u: goto label_80030EE0;
    case 0x80030EE4u: goto label_80030EE4;
    case 0x80030EE8u: goto label_80030EE8;
    case 0x80030EECu: goto label_80030EEC;
    case 0x80030EF0u: goto label_80030EF0;
    case 0x80030EF4u: goto label_80030EF4;
    case 0x80030EF8u: goto label_80030EF8;
    case 0x80030EFCu: goto label_80030EFC;
    case 0x80030F00u: goto label_80030F00;
    case 0x80030F04u: goto label_80030F04;
    case 0x80030F08u: goto label_80030F08;
    case 0x80030F0Cu: goto label_80030F0C;
    case 0x80030F10u: goto label_80030F10;
    case 0x80030F14u: goto label_80030F14;
    case 0x80030F18u: goto label_80030F18;
    case 0x80030F1Cu: goto label_80030F1C;
    case 0x80030F20u: goto label_80030F20;
    case 0x80030F24u: goto label_80030F24;
    case 0x80030F28u: goto label_80030F28;
    case 0x80030F2Cu: goto label_80030F2C;
    case 0x80030F30u: goto label_80030F30;
    case 0x80030F34u: goto label_80030F34;
    case 0x80030F38u: goto label_80030F38;
    case 0x80030F3Cu: goto label_80030F3C;
    case 0x80030F40u: goto label_80030F40;
    case 0x80030F44u: goto label_80030F44;
    case 0x80030F48u: goto label_80030F48;
    case 0x80030F4Cu: goto label_80030F4C;
    case 0x80030F50u: goto label_80030F50;
    case 0x80030F54u: goto label_80030F54;
    case 0x80030F58u: goto label_80030F58;
    case 0x80030F5Cu: goto label_80030F5C;
    case 0x80030F60u: goto label_80030F60;
    case 0x80030F64u: goto label_80030F64;
    case 0x80030F68u: goto label_80030F68;
    case 0x80030F6Cu: goto label_80030F6C;
    case 0x80030F70u: goto label_80030F70;
    case 0x80030F74u: goto label_80030F74;
    case 0x80030F78u: goto label_80030F78;
    case 0x80030F7Cu: goto label_80030F7C;
    case 0x80030F80u: goto label_80030F80;
    case 0x80030F84u: goto label_80030F84;
    case 0x80030F88u: goto label_80030F88;
    case 0x80030F8Cu: goto label_80030F8C;
    case 0x80030F90u: goto label_80030F90;
    case 0x80030F94u: goto label_80030F94;
    case 0x80030F98u: goto label_80030F98;
    case 0x80030F9Cu: goto label_80030F9C;
    case 0x80030FA0u: goto label_80030FA0;
    case 0x80030FA4u: goto label_80030FA4;
    case 0x80030FA8u: goto label_80030FA8;
    case 0x80030FACu: goto label_80030FAC;
    case 0x80030FB0u: goto label_80030FB0;
    case 0x80030FB4u: goto label_80030FB4;
    case 0x80030FB8u: goto label_80030FB8;
    case 0x80030FBCu: goto label_80030FBC;
    case 0x80030FC0u: goto label_80030FC0;
    case 0x80030FC4u: goto label_80030FC4;
    case 0x80030FC8u: goto label_80030FC8;
    case 0x80030FCCu: goto label_80030FCC;
    case 0x80030FD0u: goto label_80030FD0;
    case 0x80030FD4u: goto label_80030FD4;
    case 0x80030FD8u: goto label_80030FD8;
    case 0x80030FDCu: goto label_80030FDC;
    case 0x80030FE0u: goto label_80030FE0;
    case 0x80030FE4u: goto label_80030FE4;
    case 0x80030FE8u: goto label_80030FE8;
    case 0x80030FECu: goto label_80030FEC;
    case 0x80030FF0u: goto label_80030FF0;
    case 0x80030FF4u: goto label_80030FF4;
    case 0x80030FF8u: goto label_80030FF8;
    case 0x80030FFCu: goto label_80030FFC;
    case 0x80031000u: goto label_80031000;
    case 0x80031004u: goto label_80031004;
    case 0x80031008u: goto label_80031008;
    case 0x8003100Cu: goto label_8003100C;
    case 0x80031010u: goto label_80031010;
    case 0x80031014u: goto label_80031014;
    case 0x80031018u: goto label_80031018;
    case 0x8003101Cu: goto label_8003101C;
    case 0x80031020u: goto label_80031020;
    case 0x80031024u: goto label_80031024;
    case 0x80031028u: goto label_80031028;
    case 0x8003102Cu: goto label_8003102C;
    case 0x80031030u: goto label_80031030;
    case 0x80031034u: goto label_80031034;
    case 0x80031038u: goto label_80031038;
    case 0x8003103Cu: goto label_8003103C;
    case 0x80031040u: goto label_80031040;
    case 0x80031044u: goto label_80031044;
    case 0x80031048u: goto label_80031048;
    case 0x8003104Cu: goto label_8003104C;
    case 0x80031050u: goto label_80031050;
    case 0x80031054u: goto label_80031054;
    case 0x80031058u: goto label_80031058;
    case 0x8003105Cu: goto label_8003105C;
    case 0x80031060u: goto label_80031060;
    case 0x80031064u: goto label_80031064;
    case 0x80031068u: goto label_80031068;
    case 0x8003106Cu: goto label_8003106C;
    case 0x80031070u: goto label_80031070;
    case 0x80031074u: goto label_80031074;
    case 0x80031078u: goto label_80031078;
    case 0x8003107Cu: goto label_8003107C;
    case 0x80031080u: goto label_80031080;
    case 0x80031084u: goto label_80031084;
    case 0x80031088u: goto label_80031088;
    case 0x8003108Cu: goto label_8003108C;
    case 0x80031090u: goto label_80031090;
    case 0x80031094u: goto label_80031094;
    case 0x80031098u: goto label_80031098;
    case 0x8003109Cu: goto label_8003109C;
    case 0x800310A0u: goto label_800310A0;
    case 0x800310A4u: goto label_800310A4;
    case 0x800310A8u: goto label_800310A8;
    case 0x800310ACu: goto label_800310AC;
    case 0x800310B0u: goto label_800310B0;
    case 0x800310B4u: goto label_800310B4;
    case 0x800310B8u: goto label_800310B8;
    case 0x800310BCu: goto label_800310BC;
    case 0x800310C0u: goto label_800310C0;
    case 0x800310C4u: goto label_800310C4;
    case 0x800310C8u: goto label_800310C8;
    case 0x800310CCu: goto label_800310CC;
    case 0x800310D0u: goto label_800310D0;
    case 0x800310D4u: goto label_800310D4;
    case 0x800310D8u: goto label_800310D8;
    case 0x800310DCu: goto label_800310DC;
    case 0x800310E0u: goto label_800310E0;
    case 0x800310E4u: goto label_800310E4;
    case 0x800310E8u: goto label_800310E8;
    case 0x800310ECu: goto label_800310EC;
    case 0x800310F0u: goto label_800310F0;
    case 0x800310F4u: goto label_800310F4;
    case 0x800310F8u: goto label_800310F8;
    case 0x800310FCu: goto label_800310FC;
    case 0x80031100u: goto label_80031100;
    case 0x80031104u: goto label_80031104;
    case 0x80031108u: goto label_80031108;
    case 0x8003110Cu: goto label_8003110C;
    case 0x80031110u: goto label_80031110;
    case 0x80031114u: goto label_80031114;
    case 0x80031118u: goto label_80031118;
    case 0x8003111Cu: goto label_8003111C;
    case 0x80031120u: goto label_80031120;
    case 0x80031124u: goto label_80031124;
    case 0x80031128u: goto label_80031128;
    case 0x8003112Cu: goto label_8003112C;
    case 0x80031130u: goto label_80031130;
    case 0x80031134u: goto label_80031134;
    case 0x80031138u: goto label_80031138;
    case 0x8003113Cu: goto label_8003113C;
    case 0x80031140u: goto label_80031140;
    case 0x80031144u: goto label_80031144;
    case 0x80031148u: goto label_80031148;
    case 0x8003114Cu: goto label_8003114C;
    case 0x80031150u: goto label_80031150;
    case 0x80031154u: goto label_80031154;
    case 0x80031158u: goto label_80031158;
    case 0x8003115Cu: goto label_8003115C;
    case 0x80031160u: goto label_80031160;
    case 0x80031164u: goto label_80031164;
    case 0x80031168u: goto label_80031168;
    case 0x8003116Cu: goto label_8003116C;
    case 0x80031170u: goto label_80031170;
    case 0x80031174u: goto label_80031174;
    case 0x80031178u: goto label_80031178;
    case 0x8003117Cu: goto label_8003117C;
    case 0x80031180u: goto label_80031180;
    case 0x80031184u: goto label_80031184;
    case 0x80031188u: goto label_80031188;
    case 0x8003118Cu: goto label_8003118C;
    case 0x80031190u: goto label_80031190;
    case 0x80031194u: goto label_80031194;
    case 0x80031198u: goto label_80031198;
    case 0x8003119Cu: goto label_8003119C;
    case 0x800311A0u: goto label_800311A0;
    case 0x800311A4u: goto label_800311A4;
    case 0x800311A8u: goto label_800311A8;
    case 0x800311ACu: goto label_800311AC;
    case 0x800311B0u: goto label_800311B0;
    case 0x800311B4u: goto label_800311B4;
    case 0x800311B8u: goto label_800311B8;
    case 0x800311BCu: goto label_800311BC;
    case 0x800311C0u: goto label_800311C0;
    case 0x800311C4u: goto label_800311C4;
    case 0x800311C8u: goto label_800311C8;
    case 0x800311CCu: goto label_800311CC;
    case 0x800311D0u: goto label_800311D0;
    case 0x800311D4u: goto label_800311D4;
    case 0x800311D8u: goto label_800311D8;
    case 0x800311DCu: goto label_800311DC;
    case 0x800311E0u: goto label_800311E0;
    case 0x800311E4u: goto label_800311E4;
    case 0x800311E8u: goto label_800311E8;
    case 0x800311ECu: goto label_800311EC;
    case 0x800311F0u: goto label_800311F0;
    case 0x800311F4u: goto label_800311F4;
    case 0x800311F8u: goto label_800311F8;
    case 0x800311FCu: goto label_800311FC;
    case 0x80031200u: goto label_80031200;
    case 0x80031204u: goto label_80031204;
    case 0x80031208u: goto label_80031208;
    case 0x8003120Cu: goto label_8003120C;
    case 0x80031210u: goto label_80031210;
    case 0x80031214u: goto label_80031214;
    case 0x80031218u: goto label_80031218;
    case 0x8003121Cu: goto label_8003121C;
    case 0x80031220u: goto label_80031220;
    case 0x80031224u: goto label_80031224;
    case 0x80031228u: goto label_80031228;
    case 0x8003122Cu: goto label_8003122C;
    case 0x80031230u: goto label_80031230;
    case 0x80031234u: goto label_80031234;
    case 0x80031238u: goto label_80031238;
    case 0x8003123Cu: goto label_8003123C;
    case 0x80031240u: goto label_80031240;
    case 0x80031244u: goto label_80031244;
    case 0x80031248u: goto label_80031248;
    case 0x8003124Cu: goto label_8003124C;
    case 0x80031250u: goto label_80031250;
    case 0x80031254u: goto label_80031254;
    case 0x80031258u: goto label_80031258;
    case 0x8003125Cu: goto label_8003125C;
    case 0x80031260u: goto label_80031260;
    case 0x80031264u: goto label_80031264;
    case 0x80031268u: goto label_80031268;
    case 0x8003126Cu: goto label_8003126C;
    case 0x80031270u: goto label_80031270;
    case 0x80031274u: goto label_80031274;
    case 0x80031278u: goto label_80031278;
    case 0x8003127Cu: goto label_8003127C;
    case 0x80031280u: goto label_80031280;
    case 0x80031284u: goto label_80031284;
    case 0x80031288u: goto label_80031288;
    case 0x8003128Cu: goto label_8003128C;
    case 0x80031290u: goto label_80031290;
    case 0x80031294u: goto label_80031294;
    case 0x80031298u: goto label_80031298;
    case 0x8003129Cu: goto label_8003129C;
    case 0x800312A0u: goto label_800312A0;
    case 0x800312A4u: goto label_800312A4;
    case 0x800312A8u: goto label_800312A8;
    case 0x800312ACu: goto label_800312AC;
    case 0x800312B0u: goto label_800312B0;
    case 0x800312B4u: goto label_800312B4;
    case 0x800312B8u: goto label_800312B8;
    case 0x800312BCu: goto label_800312BC;
    case 0x800312C0u: goto label_800312C0;
    case 0x800312C4u: goto label_800312C4;
    case 0x800312C8u: goto label_800312C8;
    case 0x800312CCu: goto label_800312CC;
    case 0x800312D0u: goto label_800312D0;
    case 0x800312D4u: goto label_800312D4;
    case 0x800312D8u: goto label_800312D8;
    case 0x800312DCu: goto label_800312DC;
    case 0x800312E0u: goto label_800312E0;
    case 0x800312E4u: goto label_800312E4;
    case 0x800312E8u: goto label_800312E8;
    case 0x800312ECu: goto label_800312EC;
    case 0x800312F0u: goto label_800312F0;
    case 0x800312F4u: goto label_800312F4;
    case 0x800312F8u: goto label_800312F8;
    case 0x800312FCu: goto label_800312FC;
    case 0x80031300u: goto label_80031300;
    case 0x80031304u: goto label_80031304;
    case 0x80031308u: goto label_80031308;
    case 0x8003130Cu: goto label_8003130C;
    case 0x80031310u: goto label_80031310;
    case 0x80031314u: goto label_80031314;
    case 0x80031318u: goto label_80031318;
    case 0x8003131Cu: goto label_8003131C;
    case 0x80031320u: goto label_80031320;
    case 0x80031324u: goto label_80031324;
    case 0x80031328u: goto label_80031328;
    case 0x8003132Cu: goto label_8003132C;
    case 0x80031330u: goto label_80031330;
    case 0x80031334u: goto label_80031334;
    case 0x80031338u: goto label_80031338;
    case 0x8003133Cu: goto label_8003133C;
    case 0x80031340u: goto label_80031340;
    case 0x80031344u: goto label_80031344;
    case 0x80031348u: goto label_80031348;
    case 0x8003134Cu: goto label_8003134C;
    case 0x80031350u: goto label_80031350;
    case 0x80031354u: goto label_80031354;
    case 0x80031358u: goto label_80031358;
    case 0x8003135Cu: goto label_8003135C;
    case 0x80031360u: goto label_80031360;
    case 0x80031364u: goto label_80031364;
    case 0x80031368u: goto label_80031368;
    case 0x8003136Cu: goto label_8003136C;
    case 0x80031370u: goto label_80031370;
    case 0x80031374u: goto label_80031374;
    case 0x80031378u: goto label_80031378;
    case 0x8003137Cu: goto label_8003137C;
    case 0x80031380u: goto label_80031380;
    case 0x80031384u: goto label_80031384;
    case 0x80031388u: goto label_80031388;
    case 0x8003138Cu: goto label_8003138C;
    case 0x80031390u: goto label_80031390;
    case 0x80031394u: goto label_80031394;
    case 0x80031398u: goto label_80031398;
    case 0x8003139Cu: goto label_8003139C;
    case 0x800313A0u: goto label_800313A0;
    case 0x800313A4u: goto label_800313A4;
    case 0x800313A8u: goto label_800313A8;
    case 0x800313ACu: goto label_800313AC;
    case 0x800313B0u: goto label_800313B0;
    case 0x800313B4u: goto label_800313B4;
    case 0x800313B8u: goto label_800313B8;
    case 0x800313BCu: goto label_800313BC;
    case 0x800313C0u: goto label_800313C0;
    case 0x800313C4u: goto label_800313C4;
    case 0x800313C8u: goto label_800313C8;
    case 0x800313CCu: goto label_800313CC;
    case 0x800313D0u: goto label_800313D0;
    case 0x800313D4u: goto label_800313D4;
    case 0x800313D8u: goto label_800313D8;
    case 0x800313DCu: goto label_800313DC;
    case 0x800313E0u: goto label_800313E0;
    case 0x800313E4u: goto label_800313E4;
    case 0x800313E8u: goto label_800313E8;
    case 0x800313ECu: goto label_800313EC;
    case 0x800313F0u: goto label_800313F0;
    case 0x800313F4u: goto label_800313F4;
    case 0x800313F8u: goto label_800313F8;
    case 0x800313FCu: goto label_800313FC;
    case 0x80031400u: goto label_80031400;
    case 0x80031404u: goto label_80031404;
    case 0x80031408u: goto label_80031408;
    case 0x8003140Cu: goto label_8003140C;
    case 0x80031410u: goto label_80031410;
    case 0x80031414u: goto label_80031414;
    case 0x80031418u: goto label_80031418;
    case 0x8003141Cu: goto label_8003141C;
    case 0x80031420u: goto label_80031420;
    case 0x80031424u: goto label_80031424;
    case 0x80031428u: goto label_80031428;
    case 0x8003142Cu: goto label_8003142C;
    case 0x80031430u: goto label_80031430;
    case 0x80031434u: goto label_80031434;
    case 0x80031438u: goto label_80031438;
    case 0x8003143Cu: goto label_8003143C;
    case 0x80031440u: goto label_80031440;
    case 0x80031444u: goto label_80031444;
    case 0x80031448u: goto label_80031448;
    case 0x8003144Cu: goto label_8003144C;
    case 0x80031450u: goto label_80031450;
    case 0x80031454u: goto label_80031454;
    case 0x80031458u: goto label_80031458;
    case 0x8003145Cu: goto label_8003145C;
    case 0x80031460u: goto label_80031460;
    case 0x80031464u: goto label_80031464;
    case 0x80031468u: goto label_80031468;
    case 0x8003146Cu: goto label_8003146C;
    case 0x80031470u: goto label_80031470;
    case 0x80031474u: goto label_80031474;
    case 0x80031478u: goto label_80031478;
    case 0x8003147Cu: goto label_8003147C;
    case 0x80031480u: goto label_80031480;
    case 0x80031484u: goto label_80031484;
    case 0x80031488u: goto label_80031488;
    case 0x8003148Cu: goto label_8003148C;
    case 0x80031490u: goto label_80031490;
    case 0x80031494u: goto label_80031494;
    case 0x80031498u: goto label_80031498;
    case 0x8003149Cu: goto label_8003149C;
    case 0x800314A0u: goto label_800314A0;
    case 0x800314A4u: goto label_800314A4;
    case 0x800314A8u: goto label_800314A8;
    case 0x800314ACu: goto label_800314AC;
    case 0x800314B0u: goto label_800314B0;
    case 0x800314B4u: goto label_800314B4;
    case 0x800314B8u: goto label_800314B8;
    case 0x800314BCu: goto label_800314BC;
    case 0x800314C0u: goto label_800314C0;
    case 0x800314C4u: goto label_800314C4;
    case 0x800314C8u: goto label_800314C8;
    case 0x800314CCu: goto label_800314CC;
    case 0x800314D0u: goto label_800314D0;
    case 0x800314D4u: goto label_800314D4;
    case 0x800314D8u: goto label_800314D8;
    case 0x800314DCu: goto label_800314DC;
    case 0x800314E0u: goto label_800314E0;
    case 0x800314E4u: goto label_800314E4;
    case 0x800314E8u: goto label_800314E8;
    case 0x800314ECu: goto label_800314EC;
    case 0x800314F0u: goto label_800314F0;
    case 0x800314F4u: goto label_800314F4;
    case 0x800314F8u: goto label_800314F8;
    case 0x800314FCu: goto label_800314FC;
    case 0x80031500u: goto label_80031500;
    case 0x80031504u: goto label_80031504;
    case 0x80031508u: goto label_80031508;
    case 0x8003150Cu: goto label_8003150C;
    case 0x80031510u: goto label_80031510;
    case 0x80031514u: goto label_80031514;
    case 0x80031518u: goto label_80031518;
    case 0x8003151Cu: goto label_8003151C;
    case 0x80031520u: goto label_80031520;
    case 0x80031524u: goto label_80031524;
    case 0x80031528u: goto label_80031528;
    case 0x8003152Cu: goto label_8003152C;
    case 0x80031530u: goto label_80031530;
    case 0x80031534u: goto label_80031534;
    case 0x80031538u: goto label_80031538;
    case 0x8003153Cu: goto label_8003153C;
    case 0x80031540u: goto label_80031540;
    case 0x80031544u: goto label_80031544;
    case 0x80031548u: goto label_80031548;
    case 0x8003154Cu: goto label_8003154C;
    case 0x80031550u: goto label_80031550;
    case 0x80031554u: goto label_80031554;
    case 0x80031558u: goto label_80031558;
    case 0x8003155Cu: goto label_8003155C;
    case 0x80031560u: goto label_80031560;
    case 0x80031564u: goto label_80031564;
    case 0x80031568u: goto label_80031568;
    case 0x8003156Cu: goto label_8003156C;
    case 0x80031570u: goto label_80031570;
    case 0x80031574u: goto label_80031574;
    case 0x80031578u: goto label_80031578;
    case 0x8003157Cu: goto label_8003157C;
    case 0x80031580u: goto label_80031580;
    case 0x80031584u: goto label_80031584;
    case 0x80031588u: goto label_80031588;
    case 0x8003158Cu: goto label_8003158C;
    case 0x80031590u: goto label_80031590;
    case 0x80031594u: goto label_80031594;
    case 0x80031598u: goto label_80031598;
    case 0x8003159Cu: goto label_8003159C;
    case 0x800315A0u: goto label_800315A0;
    case 0x800315A4u: goto label_800315A4;
    case 0x800315A8u: goto label_800315A8;
    case 0x800315ACu: goto label_800315AC;
    case 0x800315B0u: goto label_800315B0;
    case 0x800315B4u: goto label_800315B4;
    case 0x800315B8u: goto label_800315B8;
    case 0x800315BCu: goto label_800315BC;
    case 0x800315C0u: goto label_800315C0;
    case 0x800315C4u: goto label_800315C4;
    case 0x800315C8u: goto label_800315C8;
    case 0x800315CCu: goto label_800315CC;
    case 0x800315D0u: goto label_800315D0;
    case 0x800315D4u: goto label_800315D4;
    case 0x800315D8u: goto label_800315D8;
    case 0x800315DCu: goto label_800315DC;
    default: return;
    }
label_8002D5E0:
    ctx->pc = 0x8002D5E0u;
    ctx->downcount -= 1;
    // 8002D5E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002D5E4:
    ctx->pc = 0x8002D5E4u;
    ctx->downcount -= 43;
    // 8002D5E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002D5E8:
    ctx->pc = 0x8002D5E8u;
    // 8002D5E8: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002D5EC:
    ctx->pc = 0x8002D5ECu;
    // 8002D5EC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8002D5F0:
    ctx->pc = 0x8002D5F0u;
    // 8002D5F0: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002D5F4:
    ctx->pc = 0x8002D5F4u;
    // 8002D5F4: stmw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8002D5F8:
    ctx->pc = 0x8002D5F8u;
    // 8002D5F8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002D5FC:
    ctx->pc = 0x8002D5FCu;
    // 8002D5FC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8002D600:
    ctx->pc = 0x8002D600u;
    // 8002D600: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002D604:
    ctx->pc = 0x8002D604u;
    // 8002D604: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002D608:
    ctx->pc = 0x8002D608u;
    // 8002D608: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8002D608u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002D60C:
    ctx->pc = 0x8002D60Cu;
    // 8002D60C: lfd     f2, -31440(r2)
    if (!ppc_fp_available_inline(ctx, 0x8002D60Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31440);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002D610:
    ctx->pc = 0x8002D610u;
    // 8002D610: lfs     f0, -31444(r2)
    if (!ppc_fp_available_inline(ctx, 0x8002D610u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31444);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8002D614:
    ctx->pc = 0x8002D614u;
    // 8002D614: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8002D614u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_8002D618:
    ctx->pc = 0x8002D618u;
    // 8002D618: lfs     f3, -31448(r2)
    if (!ppc_fp_available_inline(ctx, 0x8002D618u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31448);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_8002D61C:
    ctx->pc = 0x8002D61Cu;
    // 8002D61C: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8002D61Cu)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_8002D620:
    ctx->pc = 0x8002D620u;
    // 8002D620: fmuls   f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x8002D620u)) return;
    ppc_fmuls(ctx, 1, 3, 0);

label_8002D624:
    ctx->pc = 0x8002D624u;
    // 8002D624: bl      0x8000DBEC
    {
            ctx->lr = 0x8002D628u;
            ctx->pc = 0x8000DBECu;
            return;
    }

label_8002D628:
    ctx->pc = 0x8002D628u;
    ctx->downcount -= 4;
    // 8002D628: lwz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002D62C:
    ctx->pc = 0x8002D62Cu;
    // 8002D62C: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_8002D630:
    ctx->pc = 0x8002D630u;
    // 8002D630: cmpwi   r0, 3
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

label_8002D634:
    ctx->pc = 0x8002D634u;
    // 8002D634: bc    12, 2, 0x8002D994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002D994;
        }
    }

label_8002D638:
    ctx->pc = 0x8002D638u;
    ctx->downcount -= 1;
    // 8002D638: bc    4, 0, 0x8002D654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002D654;
        }
    }

label_8002D63C:
    ctx->pc = 0x8002D63Cu;
    ctx->downcount -= 2;
    // 8002D63C: cmpwi   r0, 1
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

label_8002D640:
    ctx->pc = 0x8002D640u;
    // 8002D640: bc    12, 2, 0x8002D784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002D784;
        }
    }

label_8002D644:
    ctx->pc = 0x8002D644u;
    ctx->downcount -= 1;
    // 8002D644: bc    4, 0, 0x8002D8C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002D8C0;
        }
    }

label_8002D648:
    ctx->pc = 0x8002D648u;
    ctx->downcount -= 2;
    // 8002D648: cmpwi   r0, 0
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

label_8002D64C:
    ctx->pc = 0x8002D64Cu;
    // 8002D64C: bc    4, 0, 0x8002D664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002D664;
        }
    }

label_8002D650:
    ctx->pc = 0x8002D650u;
    ctx->downcount -= 1;
    // 8002D650: b       0x8002DC14
    {
            goto label_8002DC14;
    }

label_8002D654:
    ctx->pc = 0x8002D654u;
    ctx->downcount -= 2;
    // 8002D654: cmpwi   r0, 5
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

label_8002D658:
    ctx->pc = 0x8002D658u;
    // 8002D658: bc    12, 2, 0x8002DB40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002DB40;
        }
    }

label_8002D65C:
    ctx->pc = 0x8002D65Cu;
    ctx->downcount -= 1;
    // 8002D65C: bc    4, 0, 0x8002DC14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DC14;
        }
    }

label_8002D660:
    ctx->pc = 0x8002D660u;
    ctx->downcount -= 1;
    // 8002D660: b       0x8002DA6C
    {
            goto label_8002DA6C;
    }

label_8002D664:
    ctx->pc = 0x8002D664u;
    ctx->downcount -= 6;
    // 8002D664: lwz     r24, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_8002D668:
    ctx->pc = 0x8002D668u;
    // 8002D668: addi    r28, r31, 422
    ctx->gpr[28] = ctx->gpr[31] + (u32)(s32)(422);

label_8002D66C:
    ctx->pc = 0x8002D66Cu;
    // 8002D66C: lwz     r25, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_8002D670:
    ctx->pc = 0x8002D670u;
    // 8002D670: lwz     r26, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8002D674:
    ctx->pc = 0x8002D674u;
    // 8002D674: lwz     r29, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8002D678:
    ctx->pc = 0x8002D678u;
    // 8002D678: bl      0x80020680
    {
            ctx->lr = 0x8002D67Cu;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002D67C:
    ctx->pc = 0x8002D67Cu;
    ctx->downcount -= 65;
    // 8002D67C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002D680:
    ctx->pc = 0x8002D680u;
    // 8002D680: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D684:
    ctx->pc = 0x8002D684u;
    // 8002D684: rlwinm r4, r24, 16, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[24], 16u) & 0x0000FFFFu;
    }

label_8002D688:
    ctx->pc = 0x8002D688u;
    // 8002D688: sth     r0, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D68C:
    ctx->pc = 0x8002D68Cu;
    // 8002D68C: sth     r4, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D690:
    ctx->pc = 0x8002D690u;
    // 8002D690: rlwinm r4, r25, 16, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[25], 16u) & 0x0000FFFFu;
    }

label_8002D694:
    ctx->pc = 0x8002D694u;
    // 8002D694: sth     r24, 6(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[24]);
    }

label_8002D698:
    ctx->pc = 0x8002D698u;
    // 8002D698: sth     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D69C:
    ctx->pc = 0x8002D69Cu;
    // 8002D69C: rlwinm r4, r26, 16, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[26], 16u) & 0x0000FFFFu;
    }

label_8002D6A0:
    ctx->pc = 0x8002D6A0u;
    // 8002D6A0: sth     r25, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[25]);
    }

label_8002D6A4:
    ctx->pc = 0x8002D6A4u;
    // 8002D6A4: sth     r4, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D6A8:
    ctx->pc = 0x8002D6A8u;
    // 8002D6A8: sth     r26, 14(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_8002D6AC:
    ctx->pc = 0x8002D6ACu;
    // 8002D6AC: lhz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D6B0:
    ctx->pc = 0x8002D6B0u;
    // 8002D6B0: sth     r4, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D6B4:
    ctx->pc = 0x8002D6B4u;
    // 8002D6B4: lhz     r4, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D6B8:
    ctx->pc = 0x8002D6B8u;
    // 8002D6B8: sth     r4, 18(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D6BC:
    ctx->pc = 0x8002D6BCu;
    // 8002D6BC: lhz     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D6C0:
    ctx->pc = 0x8002D6C0u;
    // 8002D6C0: sth     r4, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D6C4:
    ctx->pc = 0x8002D6C4u;
    // 8002D6C4: lhz     r4, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D6C8:
    ctx->pc = 0x8002D6C8u;
    // 8002D6C8: sth     r4, 22(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D6CC:
    ctx->pc = 0x8002D6CCu;
    // 8002D6CC: lhz     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D6D0:
    ctx->pc = 0x8002D6D0u;
    // 8002D6D0: sth     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D6D4:
    ctx->pc = 0x8002D6D4u;
    // 8002D6D4: lhz     r4, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D6D8:
    ctx->pc = 0x8002D6D8u;
    // 8002D6D8: sth     r4, 26(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D6DC:
    ctx->pc = 0x8002D6DCu;
    // 8002D6DC: lhz     r4, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D6E0:
    ctx->pc = 0x8002D6E0u;
    // 8002D6E0: sth     r4, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D6E4:
    ctx->pc = 0x8002D6E4u;
    // 8002D6E4: lhz     r4, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D6E8:
    ctx->pc = 0x8002D6E8u;
    // 8002D6E8: sth     r4, 30(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D6EC:
    ctx->pc = 0x8002D6ECu;
    // 8002D6EC: lhz     r4, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D6F0:
    ctx->pc = 0x8002D6F0u;
    // 8002D6F0: sth     r4, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D6F4:
    ctx->pc = 0x8002D6F4u;
    // 8002D6F4: lhz     r4, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D6F8:
    ctx->pc = 0x8002D6F8u;
    // 8002D6F8: sth     r4, 34(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D6FC:
    ctx->pc = 0x8002D6FCu;
    // 8002D6FC: lhz     r4, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D700:
    ctx->pc = 0x8002D700u;
    // 8002D700: sth     r4, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D704:
    ctx->pc = 0x8002D704u;
    // 8002D704: lhz     r4, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D708:
    ctx->pc = 0x8002D708u;
    // 8002D708: sth     r4, 38(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D70C:
    ctx->pc = 0x8002D70Cu;
    // 8002D70C: lhz     r4, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D710:
    ctx->pc = 0x8002D710u;
    // 8002D710: sth     r4, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D714:
    ctx->pc = 0x8002D714u;
    // 8002D714: lhz     r4, 26(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(26);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D718:
    ctx->pc = 0x8002D718u;
    // 8002D718: sth     r4, 42(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D71C:
    ctx->pc = 0x8002D71Cu;
    // 8002D71C: lhz     r4, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D720:
    ctx->pc = 0x8002D720u;
    // 8002D720: sth     r4, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D724:
    ctx->pc = 0x8002D724u;
    // 8002D724: lhz     r4, 30(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(30);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D728:
    ctx->pc = 0x8002D728u;
    // 8002D728: sth     r4, 46(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D72C:
    ctx->pc = 0x8002D72Cu;
    // 8002D72C: lhz     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D730:
    ctx->pc = 0x8002D730u;
    // 8002D730: sth     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D734:
    ctx->pc = 0x8002D734u;
    // 8002D734: lhz     r4, 34(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(34);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D738:
    ctx->pc = 0x8002D738u;
    // 8002D738: sth     r4, 50(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D73C:
    ctx->pc = 0x8002D73Cu;
    // 8002D73C: rlwinm r4, r30, 16, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 16u) & 0x0000FFFFu;
    }

label_8002D740:
    ctx->pc = 0x8002D740u;
    // 8002D740: lhzu     r5, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read16(ctx, ea);
        ctx->gpr[29] = ea;
    }

label_8002D744:
    ctx->pc = 0x8002D744u;
    // 8002D744: sthu     r5, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
        ctx->gpr[28] = ea;
    }

label_8002D748:
    ctx->pc = 0x8002D748u;
    // 8002D748: lhz     r5, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8002D74C:
    ctx->pc = 0x8002D74Cu;
    // 8002D74C: sth     r5, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D750:
    ctx->pc = 0x8002D750u;
    // 8002D750: sth     r4, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D754:
    ctx->pc = 0x8002D754u;
    // 8002D754: sth     r30, 6(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_8002D758:
    ctx->pc = 0x8002D758u;
    // 8002D758: sth     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D75C:
    ctx->pc = 0x8002D75Cu;
    // 8002D75C: sth     r0, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D760:
    ctx->pc = 0x8002D760u;
    // 8002D760: sth     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D764:
    ctx->pc = 0x8002D764u;
    // 8002D764: sth     r0, 14(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D768:
    ctx->pc = 0x8002D768u;
    // 8002D768: sth     r0, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D76C:
    ctx->pc = 0x8002D76Cu;
    // 8002D76C: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002D770:
    ctx->pc = 0x8002D770u;
    // 8002D770: oris    r0, r0, 0x0006
    ctx->gpr[0] = ctx->gpr[0] | (0x0006u << 16);

label_8002D774:
    ctx->pc = 0x8002D774u;
    // 8002D774: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_8002D778:
    ctx->pc = 0x8002D778u;
    // 8002D778: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002D77C:
    ctx->pc = 0x8002D77Cu;
    // 8002D77C: bl      0x800206A8
    {
            ctx->lr = 0x8002D780u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002D780:
    ctx->pc = 0x8002D780u;
    ctx->downcount -= 1;
    // 8002D780: b       0x8002DC14
    {
            goto label_8002DC14;
    }

label_8002D784:
    ctx->pc = 0x8002D784u;
    ctx->downcount -= 6;
    // 8002D784: lwz     r26, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8002D788:
    ctx->pc = 0x8002D788u;
    // 8002D788: addi    r29, r31, 422
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(422);

label_8002D78C:
    ctx->pc = 0x8002D78Cu;
    // 8002D78C: lwz     r25, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_8002D790:
    ctx->pc = 0x8002D790u;
    // 8002D790: lwz     r24, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_8002D794:
    ctx->pc = 0x8002D794u;
    // 8002D794: lwz     r28, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8002D798:
    ctx->pc = 0x8002D798u;
    // 8002D798: bl      0x80020680
    {
            ctx->lr = 0x8002D79Cu;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002D79C:
    ctx->pc = 0x8002D79Cu;
    ctx->downcount -= 72;
    // 8002D79C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8002D7A0:
    ctx->pc = 0x8002D7A0u;
    // 8002D7A0: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D7A4:
    ctx->pc = 0x8002D7A4u;
    // 8002D7A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002D7A8:
    ctx->pc = 0x8002D7A8u;
    // 8002D7A8: rlwinm r4, r26, 16, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[26], 16u) & 0x0000FFFFu;
    }

label_8002D7AC:
    ctx->pc = 0x8002D7ACu;
    // 8002D7AC: sth     r0, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D7B0:
    ctx->pc = 0x8002D7B0u;
    // 8002D7B0: sth     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D7B4:
    ctx->pc = 0x8002D7B4u;
    // 8002D7B4: rlwinm r4, r25, 16, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[25], 16u) & 0x0000FFFFu;
    }

label_8002D7B8:
    ctx->pc = 0x8002D7B8u;
    // 8002D7B8: sth     r26, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_8002D7BC:
    ctx->pc = 0x8002D7BCu;
    // 8002D7BC: sth     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D7C0:
    ctx->pc = 0x8002D7C0u;
    // 8002D7C0: rlwinm r4, r24, 16, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[24], 16u) & 0x0000FFFFu;
    }

label_8002D7C4:
    ctx->pc = 0x8002D7C4u;
    // 8002D7C4: sth     r25, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[25]);
    }

label_8002D7C8:
    ctx->pc = 0x8002D7C8u;
    // 8002D7C8: sth     r4, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D7CC:
    ctx->pc = 0x8002D7CCu;
    // 8002D7CC: sth     r24, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[24]);
    }

label_8002D7D0:
    ctx->pc = 0x8002D7D0u;
    // 8002D7D0: lhz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D7D4:
    ctx->pc = 0x8002D7D4u;
    // 8002D7D4: sth     r4, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D7D8:
    ctx->pc = 0x8002D7D8u;
    // 8002D7D8: lhz     r4, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D7DC:
    ctx->pc = 0x8002D7DCu;
    // 8002D7DC: sth     r4, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D7E0:
    ctx->pc = 0x8002D7E0u;
    // 8002D7E0: lhz     r4, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D7E4:
    ctx->pc = 0x8002D7E4u;
    // 8002D7E4: sth     r4, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D7E8:
    ctx->pc = 0x8002D7E8u;
    // 8002D7E8: lhz     r4, 6(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D7EC:
    ctx->pc = 0x8002D7ECu;
    // 8002D7EC: sth     r4, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D7F0:
    ctx->pc = 0x8002D7F0u;
    // 8002D7F0: lhz     r4, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D7F4:
    ctx->pc = 0x8002D7F4u;
    // 8002D7F4: sth     r4, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D7F8:
    ctx->pc = 0x8002D7F8u;
    // 8002D7F8: lhz     r4, 10(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(10);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D7FC:
    ctx->pc = 0x8002D7FCu;
    // 8002D7FC: sth     r4, 26(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D800:
    ctx->pc = 0x8002D800u;
    // 8002D800: lhz     r4, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D804:
    ctx->pc = 0x8002D804u;
    // 8002D804: sth     r4, 28(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D808:
    ctx->pc = 0x8002D808u;
    // 8002D808: lhz     r4, 14(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(14);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D80C:
    ctx->pc = 0x8002D80Cu;
    // 8002D80C: sth     r4, 30(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D810:
    ctx->pc = 0x8002D810u;
    // 8002D810: lhz     r4, 16(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D814:
    ctx->pc = 0x8002D814u;
    // 8002D814: sth     r4, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D818:
    ctx->pc = 0x8002D818u;
    // 8002D818: lhz     r4, 18(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(18);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D81C:
    ctx->pc = 0x8002D81Cu;
    // 8002D81C: sth     r4, 34(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D820:
    ctx->pc = 0x8002D820u;
    // 8002D820: lhz     r4, 20(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D824:
    ctx->pc = 0x8002D824u;
    // 8002D824: sth     r4, 36(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D828:
    ctx->pc = 0x8002D828u;
    // 8002D828: lhz     r4, 22(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(22);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D82C:
    ctx->pc = 0x8002D82Cu;
    // 8002D82C: sth     r4, 38(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D830:
    ctx->pc = 0x8002D830u;
    // 8002D830: lhz     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D834:
    ctx->pc = 0x8002D834u;
    // 8002D834: sth     r4, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D838:
    ctx->pc = 0x8002D838u;
    // 8002D838: lhz     r4, 26(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(26);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D83C:
    ctx->pc = 0x8002D83Cu;
    // 8002D83C: sth     r4, 42(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D840:
    ctx->pc = 0x8002D840u;
    // 8002D840: lhz     r4, 28(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D844:
    ctx->pc = 0x8002D844u;
    // 8002D844: sth     r4, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D848:
    ctx->pc = 0x8002D848u;
    // 8002D848: lhz     r4, 30(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(30);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D84C:
    ctx->pc = 0x8002D84Cu;
    // 8002D84C: sth     r4, 46(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D850:
    ctx->pc = 0x8002D850u;
    // 8002D850: lhz     r4, 32(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D854:
    ctx->pc = 0x8002D854u;
    // 8002D854: sth     r4, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D858:
    ctx->pc = 0x8002D858u;
    // 8002D858: lhz     r4, 34(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(34);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002D85C:
    ctx->pc = 0x8002D85Cu;
    // 8002D85C: sth     r4, 50(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D860:
    ctx->pc = 0x8002D860u;
    // 8002D860: rlwinm r4, r30, 16, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 16u) & 0x0000FFFFu;
    }

label_8002D864:
    ctx->pc = 0x8002D864u;
    // 8002D864: lhzu     r5, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read16(ctx, ea);
        ctx->gpr[28] = ea;
    }

label_8002D868:
    ctx->pc = 0x8002D868u;
    // 8002D868: sthu     r5, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
        ctx->gpr[29] = ea;
    }

label_8002D86C:
    ctx->pc = 0x8002D86Cu;
    // 8002D86C: lhz     r5, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8002D870:
    ctx->pc = 0x8002D870u;
    // 8002D870: sth     r5, 2(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D874:
    ctx->pc = 0x8002D874u;
    // 8002D874: sth     r4, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D878:
    ctx->pc = 0x8002D878u;
    // 8002D878: sth     r30, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_8002D87C:
    ctx->pc = 0x8002D87Cu;
    // 8002D87C: sth     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D880:
    ctx->pc = 0x8002D880u;
    // 8002D880: sth     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D884:
    ctx->pc = 0x8002D884u;
    // 8002D884: sth     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D888:
    ctx->pc = 0x8002D888u;
    // 8002D888: sth     r0, 14(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D88C:
    ctx->pc = 0x8002D88Cu;
    // 8002D88C: sth     r0, 16(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D890:
    ctx->pc = 0x8002D890u;
    // 8002D890: lhz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002D894:
    ctx->pc = 0x8002D894u;
    // 8002D894: sth     r0, 18(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D898:
    ctx->pc = 0x8002D898u;
    // 8002D898: lhz     r0, 6(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002D89C:
    ctx->pc = 0x8002D89Cu;
    // 8002D89C: sth     r0, 20(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D8A0:
    ctx->pc = 0x8002D8A0u;
    // 8002D8A0: lhz     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002D8A4:
    ctx->pc = 0x8002D8A4u;
    // 8002D8A4: sth     r0, 22(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D8A8:
    ctx->pc = 0x8002D8A8u;
    // 8002D8A8: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002D8AC:
    ctx->pc = 0x8002D8ACu;
    // 8002D8AC: oris    r0, r0, 0x0016
    ctx->gpr[0] = ctx->gpr[0] | (0x0016u << 16);

label_8002D8B0:
    ctx->pc = 0x8002D8B0u;
    // 8002D8B0: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_8002D8B4:
    ctx->pc = 0x8002D8B4u;
    // 8002D8B4: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002D8B8:
    ctx->pc = 0x8002D8B8u;
    // 8002D8B8: bl      0x800206A8
    {
            ctx->lr = 0x8002D8BCu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002D8BC:
    ctx->pc = 0x8002D8BCu;
    ctx->downcount -= 1;
    // 8002D8BC: b       0x8002DC14
    {
            goto label_8002DC14;
    }

label_8002D8C0:
    ctx->pc = 0x8002D8C0u;
    ctx->downcount -= 5;
    // 8002D8C0: lwz     r28, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8002D8C4:
    ctx->pc = 0x8002D8C4u;
    // 8002D8C4: addi    r24, r31, 422
    ctx->gpr[24] = ctx->gpr[31] + (u32)(s32)(422);

label_8002D8C8:
    ctx->pc = 0x8002D8C8u;
    // 8002D8C8: lwz     r26, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8002D8CC:
    ctx->pc = 0x8002D8CCu;
    // 8002D8CC: lwz     r25, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_8002D8D0:
    ctx->pc = 0x8002D8D0u;
    // 8002D8D0: bl      0x80020680
    {
            ctx->lr = 0x8002D8D4u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002D8D4:
    ctx->pc = 0x8002D8D4u;
    ctx->downcount -= 47;
    // 8002D8D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8002D8D8:
    ctx->pc = 0x8002D8D8u;
    // 8002D8D8: sth     r5, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D8DC:
    ctx->pc = 0x8002D8DCu;
    // 8002D8DC: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_8002D8E0:
    ctx->pc = 0x8002D8E0u;
    // 8002D8E0: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_8002D8E4:
    ctx->pc = 0x8002D8E4u;
    // 8002D8E4: sth     r0, 2(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D8E8:
    ctx->pc = 0x8002D8E8u;
    // 8002D8E8: rlwinm r0, r28, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 16u) & 0x0000FFFFu;
    }

label_8002D8EC:
    ctx->pc = 0x8002D8ECu;
    // 8002D8EC: sth     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D8F0:
    ctx->pc = 0x8002D8F0u;
    // 8002D8F0: rlwinm r0, r26, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 16u) & 0x0000FFFFu;
    }

label_8002D8F4:
    ctx->pc = 0x8002D8F4u;
    // 8002D8F4: sth     r28, 6(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_8002D8F8:
    ctx->pc = 0x8002D8F8u;
    // 8002D8F8: sth     r0, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D8FC:
    ctx->pc = 0x8002D8FCu;
    // 8002D8FC: rlwinm r0, r25, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 16u) & 0x0000FFFFu;
    }

label_8002D900:
    ctx->pc = 0x8002D900u;
    // 8002D900: sth     r26, 10(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_8002D904:
    ctx->pc = 0x8002D904u;
    // 8002D904: sth     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D908:
    ctx->pc = 0x8002D908u;
    // 8002D908: rlwinm r0, r30, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 16u) & 0x0000FFFFu;
    }

label_8002D90C:
    ctx->pc = 0x8002D90Cu;
    // 8002D90C: sth     r25, 14(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[25]);
    }

label_8002D910:
    ctx->pc = 0x8002D910u;
    // 8002D910: sth     r5, 16(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D914:
    ctx->pc = 0x8002D914u;
    // 8002D914: sth     r5, 18(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D918:
    ctx->pc = 0x8002D918u;
    // 8002D918: sth     r5, 20(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D91C:
    ctx->pc = 0x8002D91Cu;
    // 8002D91C: sth     r5, 22(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D920:
    ctx->pc = 0x8002D920u;
    // 8002D920: sth     r5, 24(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D924:
    ctx->pc = 0x8002D924u;
    // 8002D924: sth     r5, 26(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D928:
    ctx->pc = 0x8002D928u;
    // 8002D928: sth     r5, 28(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D92C:
    ctx->pc = 0x8002D92Cu;
    // 8002D92C: sth     r5, 30(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D930:
    ctx->pc = 0x8002D930u;
    // 8002D930: sth     r5, 32(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D934:
    ctx->pc = 0x8002D934u;
    // 8002D934: sth     r5, 34(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D938:
    ctx->pc = 0x8002D938u;
    // 8002D938: sth     r5, 36(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D93C:
    ctx->pc = 0x8002D93Cu;
    // 8002D93C: sth     r5, 38(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D940:
    ctx->pc = 0x8002D940u;
    // 8002D940: sth     r5, 40(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D944:
    ctx->pc = 0x8002D944u;
    // 8002D944: sth     r5, 42(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D948:
    ctx->pc = 0x8002D948u;
    // 8002D948: sth     r5, 44(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D94C:
    ctx->pc = 0x8002D94Cu;
    // 8002D94C: sth     r5, 46(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D950:
    ctx->pc = 0x8002D950u;
    // 8002D950: sth     r4, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002D954:
    ctx->pc = 0x8002D954u;
    // 8002D954: sth     r5, 50(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D958:
    ctx->pc = 0x8002D958u;
    // 8002D958: sth     r5, 52(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D95C:
    ctx->pc = 0x8002D95Cu;
    // 8002D95C: sth     r5, 54(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D960:
    ctx->pc = 0x8002D960u;
    // 8002D960: sth     r0, 56(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D964:
    ctx->pc = 0x8002D964u;
    // 8002D964: sth     r30, 58(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_8002D968:
    ctx->pc = 0x8002D968u;
    // 8002D968: sth     r5, 60(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D96C:
    ctx->pc = 0x8002D96Cu;
    // 8002D96C: sth     r5, 62(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D970:
    ctx->pc = 0x8002D970u;
    // 8002D970: sth     r5, 64(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D974:
    ctx->pc = 0x8002D974u;
    // 8002D974: sth     r5, 66(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D978:
    ctx->pc = 0x8002D978u;
    // 8002D978: sth     r5, 68(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D97C:
    ctx->pc = 0x8002D97Cu;
    // 8002D97C: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002D980:
    ctx->pc = 0x8002D980u;
    // 8002D980: oris    r0, r0, 0x0006
    ctx->gpr[0] = ctx->gpr[0] | (0x0006u << 16);

label_8002D984:
    ctx->pc = 0x8002D984u;
    // 8002D984: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_8002D988:
    ctx->pc = 0x8002D988u;
    // 8002D988: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002D98C:
    ctx->pc = 0x8002D98Cu;
    // 8002D98C: bl      0x800206A8
    {
            ctx->lr = 0x8002D990u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002D990:
    ctx->pc = 0x8002D990u;
    ctx->downcount -= 1;
    // 8002D990: b       0x8002DC14
    {
            goto label_8002DC14;
    }

label_8002D994:
    ctx->pc = 0x8002D994u;
    ctx->downcount -= 5;
    // 8002D994: lwz     r28, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8002D998:
    ctx->pc = 0x8002D998u;
    // 8002D998: addi    r24, r31, 422
    ctx->gpr[24] = ctx->gpr[31] + (u32)(s32)(422);

label_8002D99C:
    ctx->pc = 0x8002D99Cu;
    // 8002D99C: lwz     r26, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8002D9A0:
    ctx->pc = 0x8002D9A0u;
    // 8002D9A0: lwz     r25, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_8002D9A4:
    ctx->pc = 0x8002D9A4u;
    // 8002D9A4: bl      0x80020680
    {
            ctx->lr = 0x8002D9A8u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002D9A8:
    ctx->pc = 0x8002D9A8u;
    ctx->downcount -= 48;
    // 8002D9A8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8002D9AC:
    ctx->pc = 0x8002D9ACu;
    // 8002D9AC: sth     r0, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D9B0:
    ctx->pc = 0x8002D9B0u;
    // 8002D9B0: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_8002D9B4:
    ctx->pc = 0x8002D9B4u;
    // 8002D9B4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8002D9B8:
    ctx->pc = 0x8002D9B8u;
    // 8002D9B8: sth     r0, 2(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D9BC:
    ctx->pc = 0x8002D9BCu;
    // 8002D9BC: rlwinm r0, r28, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 16u) & 0x0000FFFFu;
    }

label_8002D9C0:
    ctx->pc = 0x8002D9C0u;
    // 8002D9C0: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_8002D9C4:
    ctx->pc = 0x8002D9C4u;
    // 8002D9C4: sth     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D9C8:
    ctx->pc = 0x8002D9C8u;
    // 8002D9C8: rlwinm r0, r26, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 16u) & 0x0000FFFFu;
    }

label_8002D9CC:
    ctx->pc = 0x8002D9CCu;
    // 8002D9CC: sth     r28, 6(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_8002D9D0:
    ctx->pc = 0x8002D9D0u;
    // 8002D9D0: sth     r0, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D9D4:
    ctx->pc = 0x8002D9D4u;
    // 8002D9D4: rlwinm r0, r25, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 16u) & 0x0000FFFFu;
    }

label_8002D9D8:
    ctx->pc = 0x8002D9D8u;
    // 8002D9D8: sth     r26, 10(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_8002D9DC:
    ctx->pc = 0x8002D9DCu;
    // 8002D9DC: sth     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002D9E0:
    ctx->pc = 0x8002D9E0u;
    // 8002D9E0: rlwinm r0, r30, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 16u) & 0x0000FFFFu;
    }

label_8002D9E4:
    ctx->pc = 0x8002D9E4u;
    // 8002D9E4: sth     r25, 14(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[25]);
    }

label_8002D9E8:
    ctx->pc = 0x8002D9E8u;
    // 8002D9E8: sth     r5, 16(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D9EC:
    ctx->pc = 0x8002D9ECu;
    // 8002D9EC: sth     r5, 18(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D9F0:
    ctx->pc = 0x8002D9F0u;
    // 8002D9F0: sth     r5, 20(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D9F4:
    ctx->pc = 0x8002D9F4u;
    // 8002D9F4: sth     r5, 22(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D9F8:
    ctx->pc = 0x8002D9F8u;
    // 8002D9F8: sth     r5, 24(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002D9FC:
    ctx->pc = 0x8002D9FCu;
    // 8002D9FC: sth     r5, 26(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA00:
    ctx->pc = 0x8002DA00u;
    // 8002DA00: sth     r5, 28(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA04:
    ctx->pc = 0x8002DA04u;
    // 8002DA04: sth     r5, 30(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA08:
    ctx->pc = 0x8002DA08u;
    // 8002DA08: sth     r5, 32(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA0C:
    ctx->pc = 0x8002DA0Cu;
    // 8002DA0C: sth     r5, 34(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA10:
    ctx->pc = 0x8002DA10u;
    // 8002DA10: sth     r5, 36(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA14:
    ctx->pc = 0x8002DA14u;
    // 8002DA14: sth     r5, 38(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA18:
    ctx->pc = 0x8002DA18u;
    // 8002DA18: sth     r5, 40(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA1C:
    ctx->pc = 0x8002DA1Cu;
    // 8002DA1C: sth     r5, 42(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA20:
    ctx->pc = 0x8002DA20u;
    // 8002DA20: sth     r5, 44(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA24:
    ctx->pc = 0x8002DA24u;
    // 8002DA24: sth     r5, 46(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA28:
    ctx->pc = 0x8002DA28u;
    // 8002DA28: sth     r4, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002DA2C:
    ctx->pc = 0x8002DA2Cu;
    // 8002DA2C: sth     r5, 50(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA30:
    ctx->pc = 0x8002DA30u;
    // 8002DA30: sth     r5, 52(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA34:
    ctx->pc = 0x8002DA34u;
    // 8002DA34: sth     r5, 54(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA38:
    ctx->pc = 0x8002DA38u;
    // 8002DA38: sth     r0, 56(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DA3C:
    ctx->pc = 0x8002DA3Cu;
    // 8002DA3C: sth     r30, 58(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_8002DA40:
    ctx->pc = 0x8002DA40u;
    // 8002DA40: sth     r5, 60(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA44:
    ctx->pc = 0x8002DA44u;
    // 8002DA44: sth     r5, 62(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA48:
    ctx->pc = 0x8002DA48u;
    // 8002DA48: sth     r5, 64(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA4C:
    ctx->pc = 0x8002DA4Cu;
    // 8002DA4C: sth     r5, 66(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA50:
    ctx->pc = 0x8002DA50u;
    // 8002DA50: sth     r5, 68(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA54:
    ctx->pc = 0x8002DA54u;
    // 8002DA54: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002DA58:
    ctx->pc = 0x8002DA58u;
    // 8002DA58: oris    r0, r0, 0x0006
    ctx->gpr[0] = ctx->gpr[0] | (0x0006u << 16);

label_8002DA5C:
    ctx->pc = 0x8002DA5Cu;
    // 8002DA5C: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_8002DA60:
    ctx->pc = 0x8002DA60u;
    // 8002DA60: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DA64:
    ctx->pc = 0x8002DA64u;
    // 8002DA64: bl      0x800206A8
    {
            ctx->lr = 0x8002DA68u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002DA68:
    ctx->pc = 0x8002DA68u;
    ctx->downcount -= 1;
    // 8002DA68: b       0x8002DC14
    {
            goto label_8002DC14;
    }

label_8002DA6C:
    ctx->pc = 0x8002DA6Cu;
    ctx->downcount -= 5;
    // 8002DA6C: lwz     r28, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8002DA70:
    ctx->pc = 0x8002DA70u;
    // 8002DA70: addi    r24, r31, 422
    ctx->gpr[24] = ctx->gpr[31] + (u32)(s32)(422);

label_8002DA74:
    ctx->pc = 0x8002DA74u;
    // 8002DA74: lwz     r26, 16(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(16);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8002DA78:
    ctx->pc = 0x8002DA78u;
    // 8002DA78: lwz     r25, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_8002DA7C:
    ctx->pc = 0x8002DA7Cu;
    // 8002DA7C: bl      0x80020680
    {
            ctx->lr = 0x8002DA80u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002DA80:
    ctx->pc = 0x8002DA80u;
    ctx->downcount -= 47;
    // 8002DA80: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8002DA84:
    ctx->pc = 0x8002DA84u;
    // 8002DA84: sth     r5, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DA88:
    ctx->pc = 0x8002DA88u;
    // 8002DA88: li      r0, 25
    ctx->gpr[0] = (u32)(s32)(25);

label_8002DA8C:
    ctx->pc = 0x8002DA8Cu;
    // 8002DA8C: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_8002DA90:
    ctx->pc = 0x8002DA90u;
    // 8002DA90: sth     r0, 2(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DA94:
    ctx->pc = 0x8002DA94u;
    // 8002DA94: rlwinm r0, r28, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 16u) & 0x0000FFFFu;
    }

label_8002DA98:
    ctx->pc = 0x8002DA98u;
    // 8002DA98: sth     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DA9C:
    ctx->pc = 0x8002DA9Cu;
    // 8002DA9C: rlwinm r0, r26, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 16u) & 0x0000FFFFu;
    }

label_8002DAA0:
    ctx->pc = 0x8002DAA0u;
    // 8002DAA0: sth     r28, 6(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_8002DAA4:
    ctx->pc = 0x8002DAA4u;
    // 8002DAA4: sth     r0, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DAA8:
    ctx->pc = 0x8002DAA8u;
    // 8002DAA8: rlwinm r0, r25, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 16u) & 0x0000FFFFu;
    }

label_8002DAAC:
    ctx->pc = 0x8002DAACu;
    // 8002DAAC: sth     r26, 10(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_8002DAB0:
    ctx->pc = 0x8002DAB0u;
    // 8002DAB0: sth     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DAB4:
    ctx->pc = 0x8002DAB4u;
    // 8002DAB4: rlwinm r0, r30, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 16u) & 0x0000FFFFu;
    }

label_8002DAB8:
    ctx->pc = 0x8002DAB8u;
    // 8002DAB8: sth     r25, 14(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[25]);
    }

label_8002DABC:
    ctx->pc = 0x8002DABCu;
    // 8002DABC: sth     r5, 16(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAC0:
    ctx->pc = 0x8002DAC0u;
    // 8002DAC0: sth     r5, 18(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAC4:
    ctx->pc = 0x8002DAC4u;
    // 8002DAC4: sth     r5, 20(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAC8:
    ctx->pc = 0x8002DAC8u;
    // 8002DAC8: sth     r5, 22(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DACC:
    ctx->pc = 0x8002DACCu;
    // 8002DACC: sth     r5, 24(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAD0:
    ctx->pc = 0x8002DAD0u;
    // 8002DAD0: sth     r5, 26(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAD4:
    ctx->pc = 0x8002DAD4u;
    // 8002DAD4: sth     r5, 28(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAD8:
    ctx->pc = 0x8002DAD8u;
    // 8002DAD8: sth     r5, 30(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DADC:
    ctx->pc = 0x8002DADCu;
    // 8002DADC: sth     r5, 32(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAE0:
    ctx->pc = 0x8002DAE0u;
    // 8002DAE0: sth     r5, 34(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAE4:
    ctx->pc = 0x8002DAE4u;
    // 8002DAE4: sth     r5, 36(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAE8:
    ctx->pc = 0x8002DAE8u;
    // 8002DAE8: sth     r5, 38(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAEC:
    ctx->pc = 0x8002DAECu;
    // 8002DAEC: sth     r5, 40(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAF0:
    ctx->pc = 0x8002DAF0u;
    // 8002DAF0: sth     r5, 42(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAF4:
    ctx->pc = 0x8002DAF4u;
    // 8002DAF4: sth     r5, 44(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAF8:
    ctx->pc = 0x8002DAF8u;
    // 8002DAF8: sth     r5, 46(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DAFC:
    ctx->pc = 0x8002DAFCu;
    // 8002DAFC: sth     r4, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002DB00:
    ctx->pc = 0x8002DB00u;
    // 8002DB00: sth     r5, 50(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DB04:
    ctx->pc = 0x8002DB04u;
    // 8002DB04: sth     r5, 52(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DB08:
    ctx->pc = 0x8002DB08u;
    // 8002DB08: sth     r5, 54(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DB0C:
    ctx->pc = 0x8002DB0Cu;
    // 8002DB0C: sth     r0, 56(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DB10:
    ctx->pc = 0x8002DB10u;
    // 8002DB10: sth     r30, 58(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_8002DB14:
    ctx->pc = 0x8002DB14u;
    // 8002DB14: sth     r5, 60(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DB18:
    ctx->pc = 0x8002DB18u;
    // 8002DB18: sth     r5, 62(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DB1C:
    ctx->pc = 0x8002DB1Cu;
    // 8002DB1C: sth     r5, 64(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DB20:
    ctx->pc = 0x8002DB20u;
    // 8002DB20: sth     r5, 66(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DB24:
    ctx->pc = 0x8002DB24u;
    // 8002DB24: sth     r5, 68(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DB28:
    ctx->pc = 0x8002DB28u;
    // 8002DB28: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002DB2C:
    ctx->pc = 0x8002DB2Cu;
    // 8002DB2C: oris    r0, r0, 0x0006
    ctx->gpr[0] = ctx->gpr[0] | (0x0006u << 16);

label_8002DB30:
    ctx->pc = 0x8002DB30u;
    // 8002DB30: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_8002DB34:
    ctx->pc = 0x8002DB34u;
    // 8002DB34: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DB38:
    ctx->pc = 0x8002DB38u;
    // 8002DB38: bl      0x800206A8
    {
            ctx->lr = 0x8002DB3Cu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002DB3C:
    ctx->pc = 0x8002DB3Cu;
    ctx->downcount -= 1;
    // 8002DB3C: b       0x8002DC14
    {
            goto label_8002DC14;
    }

label_8002DB40:
    ctx->pc = 0x8002DB40u;
    ctx->downcount -= 5;
    // 8002DB40: lwz     r28, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8002DB44:
    ctx->pc = 0x8002DB44u;
    // 8002DB44: addi    r24, r31, 422
    ctx->gpr[24] = ctx->gpr[31] + (u32)(s32)(422);

label_8002DB48:
    ctx->pc = 0x8002DB48u;
    // 8002DB48: lwz     r26, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_8002DB4C:
    ctx->pc = 0x8002DB4Cu;
    // 8002DB4C: lwz     r25, 20(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(20);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_8002DB50:
    ctx->pc = 0x8002DB50u;
    // 8002DB50: bl      0x80020680
    {
            ctx->lr = 0x8002DB54u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002DB54:
    ctx->pc = 0x8002DB54u;
    ctx->downcount -= 48;
    // 8002DB54: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8002DB58:
    ctx->pc = 0x8002DB58u;
    // 8002DB58: sth     r0, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DB5C:
    ctx->pc = 0x8002DB5Cu;
    // 8002DB5C: li      r0, 25
    ctx->gpr[0] = (u32)(s32)(25);

label_8002DB60:
    ctx->pc = 0x8002DB60u;
    // 8002DB60: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8002DB64:
    ctx->pc = 0x8002DB64u;
    // 8002DB64: sth     r0, 2(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DB68:
    ctx->pc = 0x8002DB68u;
    // 8002DB68: rlwinm r0, r28, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 16u) & 0x0000FFFFu;
    }

label_8002DB6C:
    ctx->pc = 0x8002DB6Cu;
    // 8002DB6C: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_8002DB70:
    ctx->pc = 0x8002DB70u;
    // 8002DB70: sth     r0, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DB74:
    ctx->pc = 0x8002DB74u;
    // 8002DB74: rlwinm r0, r26, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 16u) & 0x0000FFFFu;
    }

label_8002DB78:
    ctx->pc = 0x8002DB78u;
    // 8002DB78: sth     r28, 6(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_8002DB7C:
    ctx->pc = 0x8002DB7Cu;
    // 8002DB7C: sth     r0, 8(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DB80:
    ctx->pc = 0x8002DB80u;
    // 8002DB80: rlwinm r0, r25, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 16u) & 0x0000FFFFu;
    }

label_8002DB84:
    ctx->pc = 0x8002DB84u;
    // 8002DB84: sth     r26, 10(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_8002DB88:
    ctx->pc = 0x8002DB88u;
    // 8002DB88: sth     r0, 12(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DB8C:
    ctx->pc = 0x8002DB8Cu;
    // 8002DB8C: rlwinm r0, r30, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 16u) & 0x0000FFFFu;
    }

label_8002DB90:
    ctx->pc = 0x8002DB90u;
    // 8002DB90: sth     r25, 14(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[25]);
    }

label_8002DB94:
    ctx->pc = 0x8002DB94u;
    // 8002DB94: sth     r5, 16(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DB98:
    ctx->pc = 0x8002DB98u;
    // 8002DB98: sth     r5, 18(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DB9C:
    ctx->pc = 0x8002DB9Cu;
    // 8002DB9C: sth     r5, 20(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBA0:
    ctx->pc = 0x8002DBA0u;
    // 8002DBA0: sth     r5, 22(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBA4:
    ctx->pc = 0x8002DBA4u;
    // 8002DBA4: sth     r5, 24(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBA8:
    ctx->pc = 0x8002DBA8u;
    // 8002DBA8: sth     r5, 26(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBAC:
    ctx->pc = 0x8002DBACu;
    // 8002DBAC: sth     r5, 28(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBB0:
    ctx->pc = 0x8002DBB0u;
    // 8002DBB0: sth     r5, 30(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBB4:
    ctx->pc = 0x8002DBB4u;
    // 8002DBB4: sth     r5, 32(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBB8:
    ctx->pc = 0x8002DBB8u;
    // 8002DBB8: sth     r5, 34(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBBC:
    ctx->pc = 0x8002DBBCu;
    // 8002DBBC: sth     r5, 36(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBC0:
    ctx->pc = 0x8002DBC0u;
    // 8002DBC0: sth     r5, 38(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBC4:
    ctx->pc = 0x8002DBC4u;
    // 8002DBC4: sth     r5, 40(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBC8:
    ctx->pc = 0x8002DBC8u;
    // 8002DBC8: sth     r5, 42(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBCC:
    ctx->pc = 0x8002DBCCu;
    // 8002DBCC: sth     r5, 44(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBD0:
    ctx->pc = 0x8002DBD0u;
    // 8002DBD0: sth     r5, 46(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBD4:
    ctx->pc = 0x8002DBD4u;
    // 8002DBD4: sth     r4, 48(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8002DBD8:
    ctx->pc = 0x8002DBD8u;
    // 8002DBD8: sth     r5, 50(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBDC:
    ctx->pc = 0x8002DBDCu;
    // 8002DBDC: sth     r5, 52(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(52);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBE0:
    ctx->pc = 0x8002DBE0u;
    // 8002DBE0: sth     r5, 54(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBE4:
    ctx->pc = 0x8002DBE4u;
    // 8002DBE4: sth     r0, 56(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DBE8:
    ctx->pc = 0x8002DBE8u;
    // 8002DBE8: sth     r30, 58(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_8002DBEC:
    ctx->pc = 0x8002DBECu;
    // 8002DBEC: sth     r5, 60(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBF0:
    ctx->pc = 0x8002DBF0u;
    // 8002DBF0: sth     r5, 62(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBF4:
    ctx->pc = 0x8002DBF4u;
    // 8002DBF4: sth     r5, 64(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBF8:
    ctx->pc = 0x8002DBF8u;
    // 8002DBF8: sth     r5, 66(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DBFC:
    ctx->pc = 0x8002DBFCu;
    // 8002DBFC: sth     r5, 68(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_8002DC00:
    ctx->pc = 0x8002DC00u;
    // 8002DC00: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002DC04:
    ctx->pc = 0x8002DC04u;
    // 8002DC04: oris    r0, r0, 0x0006
    ctx->gpr[0] = ctx->gpr[0] | (0x0006u << 16);

label_8002DC08:
    ctx->pc = 0x8002DC08u;
    // 8002DC08: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_8002DC0C:
    ctx->pc = 0x8002DC0Cu;
    // 8002DC0C: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DC10:
    ctx->pc = 0x8002DC10u;
    // 8002DC10: bl      0x800206A8
    {
            ctx->lr = 0x8002DC14u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002DC14:
    ctx->pc = 0x8002DC14u;
    ctx->downcount -= 16;
    // 8002DC14: lmw     r24, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8002DC18:
    ctx->pc = 0x8002DC18u;
    // 8002DC18: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002DC1C:
    ctx->pc = 0x8002DC1Cu;
    // 8002DC1C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8002DC20:
    ctx->pc = 0x8002DC20u;
    // 8002DC20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002DC24:
    ctx->pc = 0x8002DC24u;
    // 8002DC24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002DC28:
    ctx->pc = 0x8002DC28u;
    ctx->downcount -= 8;
    // 8002DC28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002DC2C:
    ctx->pc = 0x8002DC2Cu;
    // 8002DC2C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DC30:
    ctx->pc = 0x8002DC30u;
    // 8002DC30: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002DC34:
    ctx->pc = 0x8002DC34u;
    // 8002DC34: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002DC38:
    ctx->pc = 0x8002DC38u;
    // 8002DC38: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_8002DC3C:
    ctx->pc = 0x8002DC3Cu;
    // 8002DC3C: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002DC40:
    ctx->pc = 0x8002DC40u;
    // 8002DC40: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_8002DC44:
    ctx->pc = 0x8002DC44u;
    // 8002DC44: bl      0x80020680
    {
            ctx->lr = 0x8002DC48u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002DC48:
    ctx->pc = 0x8002DC48u;
    ctx->downcount -= 11;
    // 8002DC48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002DC4C:
    ctx->pc = 0x8002DC4Cu;
    // 8002DC4C: sth     r0, 422(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(422);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DC50:
    ctx->pc = 0x8002DC50u;
    // 8002DC50: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002DC54:
    ctx->pc = 0x8002DC54u;
    // 8002DC54: rlwinm r0, r0, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x0000FFFFu;
    }

label_8002DC58:
    ctx->pc = 0x8002DC58u;
    // 8002DC58: sth     r0, 430(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(430);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DC5C:
    ctx->pc = 0x8002DC5Cu;
    // 8002DC5C: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002DC60:
    ctx->pc = 0x8002DC60u;
    // 8002DC60: sth     r0, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002DC64:
    ctx->pc = 0x8002DC64u;
    // 8002DC64: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002DC68:
    ctx->pc = 0x8002DC68u;
    // 8002DC68: ori     r0, r0, 0xA000
    ctx->gpr[0] = ctx->gpr[0] | 0xA000u;

label_8002DC6C:
    ctx->pc = 0x8002DC6Cu;
    // 8002DC6C: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DC70:
    ctx->pc = 0x8002DC70u;
    // 8002DC70: bl      0x800206A8
    {
            ctx->lr = 0x8002DC74u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002DC74:
    ctx->pc = 0x8002DC74u;
    ctx->downcount -= 7;
    // 8002DC74: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002DC78:
    ctx->pc = 0x8002DC78u;
    // 8002DC78: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002DC7C:
    ctx->pc = 0x8002DC7Cu;
    // 8002DC7C: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002DC80:
    ctx->pc = 0x8002DC80u;
    // 8002DC80: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8002DC84:
    ctx->pc = 0x8002DC84u;
    // 8002DC84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002DC88:
    ctx->pc = 0x8002DC88u;
    // 8002DC88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002DC8C:
    ctx->pc = 0x8002DC8Cu;
    ctx->downcount -= 9;
    // 8002DC8C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002DC90:
    ctx->pc = 0x8002DC90u;
    // 8002DC90: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002DC94:
    ctx->pc = 0x8002DC94u;
    // 8002DC94: neg  r7, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[7] = (~a) + 1u;
    }

label_8002DC98:
    ctx->pc = 0x8002DC98u;
    // 8002DC98: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002DC9C:
    ctx->pc = 0x8002DC9Cu;
    // 8002DC9C: lbz     r9, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

label_8002DCA0:
    ctx->pc = 0x8002DCA0u;
    // 8002DCA0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002DCA4:
    ctx->pc = 0x8002DCA4u;
    // 8002DCA4: cmpw    r7, r0
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

label_8002DCA8:
    ctx->pc = 0x8002DCA8u;
    // 8002DCA8: extsb r9, r9
    {
        ctx->gpr[9] = (u32)(s32)(s8)ctx->gpr[9];
    }

label_8002DCAC:
    ctx->pc = 0x8002DCACu;
    // 8002DCAC: bc    4, 0, 0x8002DCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DCC0;
        }
    }

label_8002DCB0:
    ctx->pc = 0x8002DCB0u;
    ctx->downcount -= 2;
    // 8002DCB0: cmpw    r0, r6
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

label_8002DCB4:
    ctx->pc = 0x8002DCB4u;
    // 8002DCB4: bc    4, 0, 0x8002DCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DCC0;
        }
    }

label_8002DCB8:
    ctx->pc = 0x8002DCB8u;
    ctx->downcount -= 2;
    // 8002DCB8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8002DCBC:
    ctx->pc = 0x8002DCBCu;
    // 8002DCBC: b       0x8002DCD4
    {
            goto label_8002DCD4;
    }

label_8002DCC0:
    ctx->pc = 0x8002DCC0u;
    ctx->downcount -= 2;
    // 8002DCC0: cmpwi   r0, 0
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

label_8002DCC4:
    ctx->pc = 0x8002DCC4u;
    // 8002DCC4: bc    4, 1, 0x8002DCD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DCD0;
        }
    }

label_8002DCC8:
    ctx->pc = 0x8002DCC8u;
    ctx->downcount -= 2;
    // 8002DCC8: subf   r8, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_8002DCCC:
    ctx->pc = 0x8002DCCCu;
    // 8002DCCC: b       0x8002DCD4
    {
            goto label_8002DCD4;
    }

label_8002DCD0:
    ctx->pc = 0x8002DCD0u;
    ctx->downcount -= 1;
    // 8002DCD0: add   r8, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_8002DCD4:
    ctx->pc = 0x8002DCD4u;
    ctx->downcount -= 2;
    // 8002DCD4: cmpw    r7, r9
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002DCD8:
    ctx->pc = 0x8002DCD8u;
    // 8002DCD8: bc    4, 0, 0x8002DCEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DCEC;
        }
    }

label_8002DCDC:
    ctx->pc = 0x8002DCDCu;
    ctx->downcount -= 2;
    // 8002DCDC: cmpw    r9, r6
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002DCE0:
    ctx->pc = 0x8002DCE0u;
    // 8002DCE0: bc    4, 0, 0x8002DCEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DCEC;
        }
    }

label_8002DCE4:
    ctx->pc = 0x8002DCE4u;
    ctx->downcount -= 2;
    // 8002DCE4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8002DCE8:
    ctx->pc = 0x8002DCE8u;
    // 8002DCE8: b       0x8002DD00
    {
            goto label_8002DD00;
    }

label_8002DCEC:
    ctx->pc = 0x8002DCECu;
    ctx->downcount -= 2;
    // 8002DCEC: cmpwi   r9, 0
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

label_8002DCF0:
    ctx->pc = 0x8002DCF0u;
    // 8002DCF0: bc    4, 1, 0x8002DCFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DCFC;
        }
    }

label_8002DCF4:
    ctx->pc = 0x8002DCF4u;
    ctx->downcount -= 2;
    // 8002DCF4: subf   r9, r6, r9
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[9];
        u32 res = a + b + 1u;
        ctx->gpr[9] = res;
    }

label_8002DCF8:
    ctx->pc = 0x8002DCF8u;
    // 8002DCF8: b       0x8002DD00
    {
            goto label_8002DD00;
    }

label_8002DCFC:
    ctx->pc = 0x8002DCFCu;
    ctx->downcount -= 1;
    // 8002DCFC: add   r9, r9, r6
    {
        u32 a = ctx->gpr[9];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_8002DD00:
    ctx->pc = 0x8002DD00u;
    ctx->downcount -= 19;
    // 8002DD00: extsb r7, r5
    {
        ctx->gpr[7] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_8002DD04:
    ctx->pc = 0x8002DD04u;
    // 8002DD04: mullw   r6, r8, r8
    {
        s64 product = (s64)(s32)ctx->gpr[8] * (s64)(s32)ctx->gpr[8];
        ctx->gpr[6] = (u32)product;
    }

label_8002DD08:
    ctx->pc = 0x8002DD08u;
    // 8002DD08: mullw   r5, r9, r9
    {
        s64 product = (s64)(s32)ctx->gpr[9] * (s64)(s32)ctx->gpr[9];
        ctx->gpr[5] = (u32)product;
    }

label_8002DD0C:
    ctx->pc = 0x8002DD0Cu;
    // 8002DD0C: mullw   r0, r7, r7
    {
        s64 product = (s64)(s32)ctx->gpr[7] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[0] = (u32)product;
    }

label_8002DD10:
    ctx->pc = 0x8002DD10u;
    // 8002DD10: add   r5, r6, r5
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8002DD14:
    ctx->pc = 0x8002DD14u;
    // 8002DD14: cmpw    r0, r5
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

label_8002DD18:
    ctx->pc = 0x8002DD18u;
    // 8002DD18: bc    4, 0, 0x8002DE1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DE1C;
        }
    }

label_8002DD1C:
    ctx->pc = 0x8002DD1Cu;
    ctx->downcount -= 10;
    // 8002DD1C: xoris   r5, r5, 0x8000
    ctx->gpr[5] = ctx->gpr[5] ^ (0x8000u << 16);

label_8002DD20:
    ctx->pc = 0x8002DD20u;
    // 8002DD20: lfd     f7, -31408(r2)
    if (!ppc_fp_available_inline(ctx, 0x8002DD20u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31408);
        ctx->fpr[7] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002DD24:
    ctx->pc = 0x8002DD24u;
    // 8002DD24: stw     r5, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002DD28:
    ctx->pc = 0x8002DD28u;
    // 8002DD28: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8002DD2C:
    ctx->pc = 0x8002DD2Cu;
    // 8002DD2C: lfs     f0, -31432(r2)
    if (!ppc_fp_available_inline(ctx, 0x8002DD2Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31432);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8002DD30:
    ctx->pc = 0x8002DD30u;
    // 8002DD30: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DD34:
    ctx->pc = 0x8002DD34u;
    // 8002DD34: lfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x8002DD34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002DD38:
    ctx->pc = 0x8002DD38u;
    // 8002DD38: fsubs   f1, f1, f7
    if (!ppc_fp_available_inline(ctx, 0x8002DD38u)) return;
    ppc_fsubs(ctx, 1, 1, 7);

label_8002DD3C:
    ctx->pc = 0x8002DD3Cu;
    // 8002DD3C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x8002DD3Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_8002DD40:
    ctx->pc = 0x8002DD40u;
    // 8002DD40: bc    4, 1, 0x8002DDF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DDF0;
        }
    }

label_8002DD44:
    ctx->pc = 0x8002DD44u;
    ctx->downcount -= 43;
    // 8002DD44: stw     r5, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002DD48:
    ctx->pc = 0x8002DD48u;
    // 8002DD48: lfd     f6, -31424(r2)
    if (!ppc_fp_available_inline(ctx, 0x8002DD48u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31424);
        ctx->fpr[6] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002DD4C:
    ctx->pc = 0x8002DD4Cu;
    // 8002DD4C: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DD50:
    ctx->pc = 0x8002DD50u;
    // 8002DD50: lfd     f5, -31416(r2)
    if (!ppc_fp_available_inline(ctx, 0x8002DD50u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-31416);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002DD54:
    ctx->pc = 0x8002DD54u;
    // 8002DD54: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x8002DD54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002DD58:
    ctx->pc = 0x8002DD58u;
    // 8002DD58: stw     r5, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002DD5C:
    ctx->pc = 0x8002DD5Cu;
    // 8002DD5C: fsubs   f0, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x8002DD5Cu)) return;
    ppc_fsubs(ctx, 0, 0, 7);

label_8002DD60:
    ctx->pc = 0x8002DD60u;
    // 8002DD60: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DD64:
    ctx->pc = 0x8002DD64u;
    // 8002DD64: frsqrte    f3, f0
    if (!ppc_fp_available_inline(ctx, 0x8002DD64u)) return;
    { f64 result; if (ppc_frsqrte(ctx, ctx->fpr[0], &result)) ctx->fpr[3] = result; }

label_8002DD68:
    ctx->pc = 0x8002DD68u;
    // 8002DD68: lfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x8002DD68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002DD6C:
    ctx->pc = 0x8002DD6Cu;
    // 8002DD6C: stw     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002DD70:
    ctx->pc = 0x8002DD70u;
    // 8002DD70: fsubs   f2, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x8002DD70u)) return;
    ppc_fsubs(ctx, 2, 0, 7);

label_8002DD74:
    ctx->pc = 0x8002DD74u;
    // 8002DD74: fmul   f1, f3, f3
    if (!ppc_fp_available_inline(ctx, 0x8002DD74u)) return;
    ppc_fmul(ctx, 1, 3, 3);

label_8002DD78:
    ctx->pc = 0x8002DD78u;
    // 8002DD78: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DD7C:
    ctx->pc = 0x8002DD7Cu;
    // 8002DD7C: fmul   f4, f6, f3
    if (!ppc_fp_available_inline(ctx, 0x8002DD7Cu)) return;
    ppc_fmul(ctx, 4, 6, 3);

label_8002DD80:
    ctx->pc = 0x8002DD80u;
    // 8002DD80: lfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8002DD80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002DD84:
    ctx->pc = 0x8002DD84u;
    // 8002DD84: fmul   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8002DD84u)) return;
    ppc_fmul(ctx, 1, 2, 1);

label_8002DD88:
    ctx->pc = 0x8002DD88u;
    // 8002DD88: stw     r5, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002DD8C:
    ctx->pc = 0x8002DD8Cu;
    // 8002DD8C: fsubs   f3, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x8002DD8Cu)) return;
    ppc_fsubs(ctx, 3, 0, 7);

label_8002DD90:
    ctx->pc = 0x8002DD90u;
    // 8002DD90: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DD94:
    ctx->pc = 0x8002DD94u;
    // 8002DD94: fsub   f1, f5, f1
    if (!ppc_fp_available_inline(ctx, 0x8002DD94u)) return;
    ppc_fsub(ctx, 1, 5, 1);

label_8002DD98:
    ctx->pc = 0x8002DD98u;
    // 8002DD98: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8002DD98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002DD9C:
    ctx->pc = 0x8002DD9Cu;
    // 8002DD9C: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002DDA0:
    ctx->pc = 0x8002DDA0u;
    // 8002DDA0: fmul   f4, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x8002DDA0u)) return;
    ppc_fmul(ctx, 4, 4, 1);

label_8002DDA4:
    ctx->pc = 0x8002DDA4u;
    // 8002DDA4: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DDA8:
    ctx->pc = 0x8002DDA8u;
    // 8002DDA8: fsubs   f2, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x8002DDA8u)) return;
    ppc_fsubs(ctx, 2, 0, 7);

label_8002DDAC:
    ctx->pc = 0x8002DDACu;
    // 8002DDAC: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8002DDACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002DDB0:
    ctx->pc = 0x8002DDB0u;
    // 8002DDB0: fmul   f1, f4, f4
    if (!ppc_fp_available_inline(ctx, 0x8002DDB0u)) return;
    ppc_fmul(ctx, 1, 4, 4);

label_8002DDB4:
    ctx->pc = 0x8002DDB4u;
    // 8002DDB4: fmul   f4, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x8002DDB4u)) return;
    ppc_fmul(ctx, 4, 6, 4);

label_8002DDB8:
    ctx->pc = 0x8002DDB8u;
    // 8002DDB8: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8002DDB8u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8002DDBC:
    ctx->pc = 0x8002DDBCu;
    // 8002DDBC: fsubs   f0, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x8002DDBCu)) return;
    ppc_fsubs(ctx, 0, 0, 7);

label_8002DDC0:
    ctx->pc = 0x8002DDC0u;
    // 8002DDC0: fsub   f1, f5, f1
    if (!ppc_fp_available_inline(ctx, 0x8002DDC0u)) return;
    ppc_fsub(ctx, 1, 5, 1);

label_8002DDC4:
    ctx->pc = 0x8002DDC4u;
    // 8002DDC4: fmul   f3, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x8002DDC4u)) return;
    ppc_fmul(ctx, 3, 4, 1);

label_8002DDC8:
    ctx->pc = 0x8002DDC8u;
    // 8002DDC8: fmul   f1, f3, f3
    if (!ppc_fp_available_inline(ctx, 0x8002DDC8u)) return;
    ppc_fmul(ctx, 1, 3, 3);

label_8002DDCC:
    ctx->pc = 0x8002DDCCu;
    // 8002DDCC: fmul   f3, f6, f3
    if (!ppc_fp_available_inline(ctx, 0x8002DDCCu)) return;
    ppc_fmul(ctx, 3, 6, 3);

label_8002DDD0:
    ctx->pc = 0x8002DDD0u;
    // 8002DDD0: fmul   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x8002DDD0u)) return;
    ppc_fmul(ctx, 1, 2, 1);

label_8002DDD4:
    ctx->pc = 0x8002DDD4u;
    // 8002DDD4: fsub   f1, f5, f1
    if (!ppc_fp_available_inline(ctx, 0x8002DDD4u)) return;
    ppc_fsub(ctx, 1, 5, 1);

label_8002DDD8:
    ctx->pc = 0x8002DDD8u;
    // 8002DDD8: fmul   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x8002DDD8u)) return;
    ppc_fmul(ctx, 1, 3, 1);

label_8002DDDC:
    ctx->pc = 0x8002DDDCu;
    // 8002DDDC: fmul   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8002DDDCu)) return;
    ppc_fmul(ctx, 0, 0, 1);

label_8002DDE0:
    ctx->pc = 0x8002DDE0u;
    // 8002DDE0: frsp    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8002DDE0u)) return;
    ppc_frsp(ctx, 0, 0);

label_8002DDE4:
    ctx->pc = 0x8002DDE4u;
    // 8002DDE4: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8002DDE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8002DDE8:
    ctx->pc = 0x8002DDE8u;
    // 8002DDE8: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8002DDE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8002DDEC:
    ctx->pc = 0x8002DDECu;
    // 8002DDEC: b       0x8002DE00
    {
            goto label_8002DE00;
    }

label_8002DDF0:
    ctx->pc = 0x8002DDF0u;
    ctx->downcount -= 4;
    // 8002DDF0: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002DDF4:
    ctx->pc = 0x8002DDF4u;
    // 8002DDF4: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DDF8:
    ctx->pc = 0x8002DDF8u;
    // 8002DDF8: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8002DDF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8002DDFC:
    ctx->pc = 0x8002DDFCu;
    // 8002DDFC: fsubs   f0, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x8002DDFCu)) return;
    ppc_fsubs(ctx, 0, 0, 7);

label_8002DE00:
    ctx->pc = 0x8002DE00u;
    ctx->downcount -= 93;
    // 8002DE00: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8002DE00u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8002DE04:
    ctx->pc = 0x8002DE04u;
    // 8002DE04: mullw   r5, r8, r7
    {
        s64 product = (s64)(s32)ctx->gpr[8] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[5] = (u32)product;
    }

label_8002DE08:
    ctx->pc = 0x8002DE08u;
    // 8002DE08: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8002DE08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_8002DE0C:
    ctx->pc = 0x8002DE0Cu;
    // 8002DE0C: lwz     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002DE10:
    ctx->pc = 0x8002DE10u;
    // 8002DE10: mullw   r0, r9, r7
    {
        s64 product = (s64)(s32)ctx->gpr[9] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[0] = (u32)product;
    }

label_8002DE14:
    ctx->pc = 0x8002DE14u;
    // 8002DE14: divw   r8, r5, r6
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[8] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8002DE18:
    ctx->pc = 0x8002DE18u;
    // 8002DE18: divw   r9, r0, r6
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[9] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_8002DE1C:
    ctx->pc = 0x8002DE1Cu;
    ctx->downcount -= 6;
    // 8002DE1C: extsb r0, r8
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[8];
    }

label_8002DE20:
    ctx->pc = 0x8002DE20u;
    // 8002DE20: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002DE24:
    ctx->pc = 0x8002DE24u;
    // 8002DE24: extsb r0, r9
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[9];
    }

label_8002DE28:
    ctx->pc = 0x8002DE28u;
    // 8002DE28: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002DE2C:
    ctx->pc = 0x8002DE2Cu;
    // 8002DE2C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8002DE30:
    ctx->pc = 0x8002DE30u;
    // 8002DE30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002DE34:
    ctx->pc = 0x8002DE34u;
    ctx->downcount -= 12;
    // 8002DE34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002DE38:
    ctx->pc = 0x8002DE38u;
    // 8002DE38: lis     r4, -32762
    ctx->gpr[4] = ((u32)(s32)(-32762) << 16);

label_8002DE3C:
    ctx->pc = 0x8002DE3Cu;
    // 8002DE3C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DE40:
    ctx->pc = 0x8002DE40u;
    // 8002DE40: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002DE44:
    ctx->pc = 0x8002DE44u;
    // 8002DE44: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002DE48:
    ctx->pc = 0x8002DE48u;
    // 8002DE48: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002DE4C:
    ctx->pc = 0x8002DE4Cu;
    // 8002DE4C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8002DE50:
    ctx->pc = 0x8002DE50u;
    // 8002DE50: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8002DE54:
    ctx->pc = 0x8002DE54u;
    // 8002DE54: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_8002DE58:
    ctx->pc = 0x8002DE58u;
    // 8002DE58: stw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8002DE5C:
    ctx->pc = 0x8002DE5Cu;
    // 8002DE5C: addi    r28, r4, 12464
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(12464);

label_8002DE60:
    ctx->pc = 0x8002DE60u;
    // 8002DE60: addi    r31, r28, 1
    ctx->gpr[31] = ctx->gpr[28] + (u32)(s32)(1);

label_8002DE64:
    ctx->pc = 0x8002DE64u;
    ctx->downcount -= 3;
    // 8002DE64: lbz     r0, 10(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002DE68:
    // 8002DE68: extsb. r0, r0
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

label_8002DE6C:
    // 8002DE6C: bc    4, 2, 0x8002DF10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DF10;
        }
    }

label_8002DE70:
    ctx->pc = 0x8002DE70u;
    ctx->downcount -= 5;
    // 8002DE70: lbz     r5, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8002DE74:
    // 8002DE74: addi    r3, r29, 2
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(2);

label_8002DE78:
    ctx->pc = 0x8002DE78u;
    // 8002DE78: lbz     r6, 2(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(2);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8002DE7C:
    // 8002DE7C: addi    r4, r29, 3
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(3);

label_8002DE80:
    // 8002DE80: bl      0x8002DC8C
    {
            ctx->lr = 0x8002DE84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002DC8Cu;
                return;
            }
            goto label_8002DC8C;
    }

label_8002DE84:
    ctx->pc = 0x8002DE84u;
    ctx->downcount -= 5;
    // 8002DE84: lbz     r5, 9(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(9);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8002DE88:
    // 8002DE88: addi    r3, r29, 4
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(4);

label_8002DE8C:
    ctx->pc = 0x8002DE8Cu;
    // 8002DE8C: lbz     r6, 5(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(5);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8002DE90:
    // 8002DE90: addi    r4, r29, 5
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(5);

label_8002DE94:
    // 8002DE94: bl      0x8002DC8C
    {
            ctx->lr = 0x8002DE98u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002DC8Cu;
                return;
            }
            goto label_8002DC8C;
    }

label_8002DE98:
    ctx->pc = 0x8002DE98u;
    ctx->downcount -= 5;
    // 8002DE98: lbz     r4, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002DE9C:
    ctx->pc = 0x8002DE9Cu;
    // 8002DE9C: lbz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002DEA0:
    ctx->pc = 0x8002DEA0u;
    // 8002DEA0: lbz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002DEA4:
    // 8002DEA4: cmplw   r4, r0
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

label_8002DEA8:
    // 8002DEA8: bc    12, 1, 0x8002DEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002DEB8;
        }
    }

label_8002DEAC:
    ctx->downcount -= 3;
    // 8002DEAC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002DEB0:
    ctx->pc = 0x8002DEB0u;
    // 8002DEB0: stb     r0, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002DEB4:
    // 8002DEB4: b       0x8002DED4
    {
            goto label_8002DED4;
    }

label_8002DEB8:
    ctx->downcount -= 2;
    // 8002DEB8: cmplw   r3, r4
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002DEBC:
    // 8002DEBC: bc    4, 0, 0x8002DEC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DEC4;
        }
    }

label_8002DEC0:
    ctx->pc = 0x8002DEC0u;
    ctx->downcount -= 1;
    // 8002DEC0: stb     r3, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002DEC4:
    ctx->pc = 0x8002DEC4u;
    ctx->downcount -= 4;
    // 8002DEC4: lbz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002DEC8:
    ctx->pc = 0x8002DEC8u;
    // 8002DEC8: lbz     r0, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002DECC:
    // 8002DECC: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8002DED0:
    ctx->pc = 0x8002DED0u;
    // 8002DED0: stb     r0, 6(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002DED4:
    ctx->pc = 0x8002DED4u;
    ctx->downcount -= 5;
    // 8002DED4: lbz     r4, 7(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(7);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002DED8:
    ctx->pc = 0x8002DED8u;
    // 8002DED8: lbz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002DEDC:
    ctx->pc = 0x8002DEDCu;
    // 8002DEDC: lbz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002DEE0:
    // 8002DEE0: cmplw   r4, r0
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

label_8002DEE4:
    // 8002DEE4: bc    12, 1, 0x8002DEF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002DEF4;
        }
    }

label_8002DEE8:
    ctx->downcount -= 3;
    // 8002DEE8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002DEEC:
    ctx->pc = 0x8002DEECu;
    // 8002DEEC: stb     r0, 7(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002DEF0:
    // 8002DEF0: b       0x8002DF10
    {
            goto label_8002DF10;
    }

label_8002DEF4:
    ctx->downcount -= 2;
    // 8002DEF4: cmplw   r3, r4
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002DEF8:
    // 8002DEF8: bc    4, 0, 0x8002DF00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DF00;
        }
    }

label_8002DEFC:
    ctx->pc = 0x8002DEFCu;
    ctx->downcount -= 1;
    // 8002DEFC: stb     r3, 7(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002DF00:
    ctx->pc = 0x8002DF00u;
    ctx->downcount -= 4;
    // 8002DF00: lbz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002DF04:
    ctx->pc = 0x8002DF04u;
    // 8002DF04: lbz     r0, 7(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(7);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002DF08:
    // 8002DF08: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8002DF0C:
    ctx->pc = 0x8002DF0Cu;
    // 8002DF0C: stb     r0, 7(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002DF10:
    ctx->downcount -= 4;
    // 8002DF10: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8002DF14:
    // 8002DF14: cmpwi   r30, 4
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

label_8002DF18:
    // 8002DF18: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_8002DF1C:
    // 8002DF1C: bc    12, 0, 0x8002DE64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002DE64u;
                return;
            }
            goto label_8002DE64;
        }
    }

label_8002DF20:
    ctx->pc = 0x8002DF20u;
    ctx->downcount -= 9;
    // 8002DF20: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002DF24:
    ctx->pc = 0x8002DF24u;
    // 8002DF24: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002DF28:
    ctx->pc = 0x8002DF28u;
    // 8002DF28: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002DF2C:
    ctx->pc = 0x8002DF2Cu;
    // 8002DF2C: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8002DF30:
    ctx->pc = 0x8002DF30u;
    // 8002DF30: lwz     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8002DF34:
    ctx->pc = 0x8002DF34u;
    // 8002DF34: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8002DF38:
    ctx->pc = 0x8002DF38u;
    // 8002DF38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002DF3C:
    ctx->pc = 0x8002DF3Cu;
    // 8002DF3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002DF40:
    ctx->pc = 0x8002DF40u;
    ctx->downcount -= 16;
    // 8002DF40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002DF44:
    ctx->pc = 0x8002DF44u;
    // 8002DF44: lis     r5, -32737
    ctx->gpr[5] = ((u32)(s32)(-32737) << 16);

label_8002DF48:
    ctx->pc = 0x8002DF48u;
    // 8002DF48: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002DF4C:
    ctx->pc = 0x8002DF4Cu;
    // 8002DF4C: mulli   r6, r3, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)12);

label_8002DF50:
    ctx->pc = 0x8002DF50u;
    // 8002DF50: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002DF54:
    ctx->pc = 0x8002DF54u;
    // 8002DF54: addi    r5, r5, -544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-544);

label_8002DF58:
    ctx->pc = 0x8002DF58u;
    // 8002DF58: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002DF5C:
    ctx->pc = 0x8002DF5Cu;
    // 8002DF5C: add   r31, r5, r6
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_8002DF60:
    ctx->pc = 0x8002DF60u;
    // 8002DF60: lwz     r0, -32540(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32540);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002DF64:
    ctx->pc = 0x8002DF64u;
    // 8002DF64: rlwinm r4, r0, 0, 21, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000700u;
    }

label_8002DF68:
    ctx->pc = 0x8002DF68u;
    // 8002DF68: cmpwi   r4, 1024
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1024);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002DF6C:
    ctx->pc = 0x8002DF6Cu;
    // 8002DF6C: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8002DF70:
    ctx->pc = 0x8002DF70u;
    // 8002DF70: srw   r0, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] >> sh);
    }

label_8002DF74:
    ctx->pc = 0x8002DF74u;
    // 8002DF74: bc    12, 2, 0x8002E068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E068;
        }
    }

label_8002DF78:
    ctx->pc = 0x8002DF78u;
    ctx->downcount -= 1;
    // 8002DF78: bc    4, 0, 0x8002DFAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DFAC;
        }
    }

label_8002DF7C:
    ctx->pc = 0x8002DF7Cu;
    ctx->downcount -= 2;
    // 8002DF7C: cmpwi   r4, 512
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(512);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002DF80:
    ctx->pc = 0x8002DF80u;
    // 8002DF80: bc    12, 2, 0x8002E038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E038;
        }
    }

label_8002DF84:
    ctx->pc = 0x8002DF84u;
    ctx->downcount -= 1;
    // 8002DF84: bc    4, 0, 0x8002DFA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DFA0;
        }
    }

label_8002DF88:
    ctx->pc = 0x8002DF88u;
    ctx->downcount -= 2;
    // 8002DF88: cmpwi   r4, 256
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002DF8C:
    ctx->pc = 0x8002DF8Cu;
    // 8002DF8C: bc    12, 2, 0x8002E004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E004;
        }
    }

label_8002DF90:
    ctx->pc = 0x8002DF90u;
    ctx->downcount -= 1;
    // 8002DF90: bc    4, 0, 0x8002E068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E068;
        }
    }

label_8002DF94:
    ctx->pc = 0x8002DF94u;
    ctx->downcount -= 2;
    // 8002DF94: cmpwi   r4, 0
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

label_8002DF98:
    ctx->pc = 0x8002DF98u;
    // 8002DF98: bc    12, 2, 0x8002DFD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002DFD0;
        }
    }

label_8002DF9C:
    ctx->pc = 0x8002DF9Cu;
    ctx->downcount -= 1;
    // 8002DF9C: b       0x8002E068
    {
            goto label_8002E068;
    }

label_8002DFA0:
    ctx->pc = 0x8002DFA0u;
    ctx->downcount -= 2;
    // 8002DFA0: cmpwi   r4, 768
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(768);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002DFA4:
    ctx->pc = 0x8002DFA4u;
    // 8002DFA4: bc    12, 2, 0x8002E068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E068;
        }
    }

label_8002DFA8:
    ctx->pc = 0x8002DFA8u;
    ctx->downcount -= 1;
    // 8002DFA8: b       0x8002E068
    {
            goto label_8002E068;
    }

label_8002DFAC:
    ctx->pc = 0x8002DFACu;
    ctx->downcount -= 2;
    // 8002DFAC: cmpwi   r4, 1536
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1536);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002DFB0:
    ctx->pc = 0x8002DFB0u;
    // 8002DFB0: bc    12, 2, 0x8002DFD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002DFD0;
        }
    }

label_8002DFB4:
    ctx->pc = 0x8002DFB4u;
    ctx->downcount -= 1;
    // 8002DFB4: bc    4, 0, 0x8002DFC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002DFC4;
        }
    }

label_8002DFB8:
    ctx->pc = 0x8002DFB8u;
    ctx->downcount -= 2;
    // 8002DFB8: cmpwi   r4, 1280
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1280);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002DFBC:
    ctx->pc = 0x8002DFBCu;
    // 8002DFBC: bc    12, 2, 0x8002DFD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002DFD0;
        }
    }

label_8002DFC0:
    ctx->pc = 0x8002DFC0u;
    ctx->downcount -= 1;
    // 8002DFC0: b       0x8002E068
    {
            goto label_8002E068;
    }

label_8002DFC4:
    ctx->pc = 0x8002DFC4u;
    ctx->downcount -= 2;
    // 8002DFC4: cmpwi   r4, 1792
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1792);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002DFC8:
    ctx->pc = 0x8002DFC8u;
    // 8002DFC8: bc    12, 2, 0x8002DFD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002DFD0;
        }
    }

label_8002DFCC:
    ctx->pc = 0x8002DFCCu;
    ctx->downcount -= 1;
    // 8002DFCC: b       0x8002E068
    {
            goto label_8002E068;
    }

label_8002DFD0:
    ctx->pc = 0x8002DFD0u;
    ctx->downcount -= 13;
    // 8002DFD0: lbz     r4, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002DFD4:
    ctx->pc = 0x8002DFD4u;
    // 8002DFD4: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002DFD8:
    ctx->pc = 0x8002DFD8u;
    // 8002DFD8: stb     r4, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002DFDC:
    ctx->pc = 0x8002DFDCu;
    // 8002DFDC: lbz     r4, 7(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002DFE0:
    ctx->pc = 0x8002DFE0u;
    // 8002DFE0: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002DFE4:
    ctx->pc = 0x8002DFE4u;
    // 8002DFE4: stb     r4, 7(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002DFE8:
    ctx->pc = 0x8002DFE8u;
    // 8002DFE8: lbz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002DFEC:
    ctx->pc = 0x8002DFECu;
    // 8002DFEC: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002DFF0:
    ctx->pc = 0x8002DFF0u;
    // 8002DFF0: stb     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002DFF4:
    ctx->pc = 0x8002DFF4u;
    // 8002DFF4: lbz     r4, 9(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(9);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002DFF8:
    ctx->pc = 0x8002DFF8u;
    // 8002DFF8: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002DFFC:
    ctx->pc = 0x8002DFFCu;
    // 8002DFFC: stb     r4, 9(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E000:
    ctx->pc = 0x8002E000u;
    // 8002E000: b       0x8002E068
    {
            goto label_8002E068;
    }

label_8002E004:
    ctx->pc = 0x8002E004u;
    ctx->downcount -= 13;
    // 8002E004: lbz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E008:
    ctx->pc = 0x8002E008u;
    // 8002E008: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002E00C:
    ctx->pc = 0x8002E00Cu;
    // 8002E00C: stb     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E010:
    ctx->pc = 0x8002E010u;
    // 8002E010: lbz     r4, 5(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E014:
    ctx->pc = 0x8002E014u;
    // 8002E014: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002E018:
    ctx->pc = 0x8002E018u;
    // 8002E018: stb     r4, 5(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E01C:
    ctx->pc = 0x8002E01Cu;
    // 8002E01C: lbz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E020:
    ctx->pc = 0x8002E020u;
    // 8002E020: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002E024:
    ctx->pc = 0x8002E024u;
    // 8002E024: stb     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E028:
    ctx->pc = 0x8002E028u;
    // 8002E028: lbz     r4, 9(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(9);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E02C:
    ctx->pc = 0x8002E02Cu;
    // 8002E02C: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002E030:
    ctx->pc = 0x8002E030u;
    // 8002E030: stb     r4, 9(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E034:
    ctx->pc = 0x8002E034u;
    // 8002E034: b       0x8002E068
    {
            goto label_8002E068;
    }

label_8002E038:
    ctx->pc = 0x8002E038u;
    ctx->downcount -= 12;
    // 8002E038: lbz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E03C:
    ctx->pc = 0x8002E03Cu;
    // 8002E03C: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002E040:
    ctx->pc = 0x8002E040u;
    // 8002E040: stb     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E044:
    ctx->pc = 0x8002E044u;
    // 8002E044: lbz     r4, 5(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E048:
    ctx->pc = 0x8002E048u;
    // 8002E048: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002E04C:
    ctx->pc = 0x8002E04Cu;
    // 8002E04C: stb     r4, 5(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E050:
    ctx->pc = 0x8002E050u;
    // 8002E050: lbz     r4, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E054:
    ctx->pc = 0x8002E054u;
    // 8002E054: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002E058:
    ctx->pc = 0x8002E058u;
    // 8002E058: stb     r4, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E05C:
    ctx->pc = 0x8002E05Cu;
    // 8002E05C: lbz     r4, 7(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E060:
    ctx->pc = 0x8002E060u;
    // 8002E060: rlwinm r4, r4, 0, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFF0u;
    }

label_8002E064:
    ctx->pc = 0x8002E064u;
    // 8002E064: stb     r4, 7(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E068:
    ctx->pc = 0x8002E068u;
    ctx->downcount -= 15;
    // 8002E068: lbz     r4, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E06C:
    ctx->pc = 0x8002E06Cu;
    // 8002E06C: addi    r4, r4, -128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-128);

label_8002E070:
    ctx->pc = 0x8002E070u;
    // 8002E070: stb     r4, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E074:
    ctx->pc = 0x8002E074u;
    // 8002E074: lbz     r4, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E078:
    ctx->pc = 0x8002E078u;
    // 8002E078: addi    r4, r4, -128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-128);

label_8002E07C:
    ctx->pc = 0x8002E07Cu;
    // 8002E07C: stb     r4, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E080:
    ctx->pc = 0x8002E080u;
    // 8002E080: lbz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E084:
    ctx->pc = 0x8002E084u;
    // 8002E084: addi    r4, r4, -128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-128);

label_8002E088:
    ctx->pc = 0x8002E088u;
    // 8002E088: stb     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E08C:
    ctx->pc = 0x8002E08Cu;
    // 8002E08C: lbz     r4, 5(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8002E090:
    ctx->pc = 0x8002E090u;
    // 8002E090: addi    r4, r4, -128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-128);

label_8002E094:
    ctx->pc = 0x8002E094u;
    // 8002E094: stb     r4, 5(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8002E098:
    ctx->pc = 0x8002E098u;
    // 8002E098: lwz     r4, -32544(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32544);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E09C:
    ctx->pc = 0x8002E09Cu;
    // 8002E09C: and.   r0, r4, r0
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

label_8002E0A0:
    ctx->pc = 0x8002E0A0u;
    // 8002E0A0: bc    12, 2, 0x8002E0D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E0D0;
        }
    }

label_8002E0A4:
    ctx->pc = 0x8002E0A4u;
    ctx->downcount -= 4;
    // 8002E0A4: lbz     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002E0A8:
    ctx->pc = 0x8002E0A8u;
    // 8002E0A8: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002E0AC:
    ctx->pc = 0x8002E0ACu;
    // 8002E0AC: cmpwi   r0, 64
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

label_8002E0B0:
    ctx->pc = 0x8002E0B0u;
    // 8002E0B0: bc    4, 1, 0x8002E0D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E0D0;
        }
    }

label_8002E0B4:
    ctx->pc = 0x8002E0B4u;
    ctx->downcount -= 1;
    // 8002E0B4: bl      0x8001BA38
    {
            ctx->lr = 0x8002E0B8u;
            ctx->pc = 0x8001BA38u;
            return;
    }

label_8002E0B8:
    ctx->pc = 0x8002E0B8u;
    ctx->downcount -= 4;
    // 8002E0B8: rlwinm r3, r3, 0, 0, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFF0000u;
    }

label_8002E0BC:
    ctx->pc = 0x8002E0BCu;
    // 8002E0BC: addis   r0, r3, -2304
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-2304) << 16);

label_8002E0C0:
    ctx->pc = 0x8002E0C0u;
    // 8002E0C0: cmplwi  r0, 0x0000
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

label_8002E0C4:
    ctx->pc = 0x8002E0C4u;
    // 8002E0C4: bc    4, 2, 0x8002E0D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E0D0;
        }
    }

label_8002E0C8:
    ctx->pc = 0x8002E0C8u;
    ctx->downcount -= 2;
    // 8002E0C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002E0CC:
    ctx->pc = 0x8002E0CCu;
    // 8002E0CC: stb     r0, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002E0D0:
    ctx->pc = 0x8002E0D0u;
    ctx->downcount -= 6;
    // 8002E0D0: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E0D4:
    ctx->pc = 0x8002E0D4u;
    // 8002E0D4: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002E0D8:
    ctx->pc = 0x8002E0D8u;
    // 8002E0D8: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8002E0DC:
    ctx->pc = 0x8002E0DCu;
    // 8002E0DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002E0E0:
    ctx->pc = 0x8002E0E0u;
    // 8002E0E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002E0E4:
    ctx->pc = 0x8002E0E4u;
    ctx->downcount -= 6;
    // 8002E0E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002E0E8:
    ctx->pc = 0x8002E0E8u;
    // 8002E0E8: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E0EC:
    ctx->pc = 0x8002E0ECu;
    // 8002E0EC: rlwinm. r0, r4, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000000Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E0F0:
    ctx->pc = 0x8002E0F0u;
    // 8002E0F0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002E0F4:
    ctx->pc = 0x8002E0F4u;
    // 8002E0F4: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002E0F8:
    ctx->pc = 0x8002E0F8u;
    // 8002E0F8: bc    4, 2, 0x8002E140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E140;
        }
    }

label_8002E0FC:
    ctx->pc = 0x8002E0FCu;
    ctx->downcount -= 2;
    // 8002E0FC: lwz     r3, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E100:
    ctx->pc = 0x8002E100u;
    // 8002E100: bl      0x8002DF40
    {
            ctx->lr = 0x8002E104u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002DF40u;
                return;
            }
            goto label_8002DF40;
    }

label_8002E104:
    ctx->pc = 0x8002E104u;
    ctx->downcount -= 9;
    // 8002E104: lwz     r31, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002E108:
    ctx->pc = 0x8002E108u;
    // 8002E108: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8002E10C:
    ctx->pc = 0x8002E10Cu;
    // 8002E10C: lwz     r3, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E110:
    ctx->pc = 0x8002E110u;
    // 8002E110: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_8002E114:
    ctx->pc = 0x8002E114u;
    // 8002E114: srw   r0, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] >> sh);
    }

label_8002E118:
    ctx->pc = 0x8002E118u;
    // 8002E118: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8002E11C:
    ctx->pc = 0x8002E11Cu;
    // 8002E11C: stw     r0, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E120:
    ctx->pc = 0x8002E120u;
    // 8002E120: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002E124:
    ctx->pc = 0x8002E124u;
    // 8002E124: bl      0x8001B4E4
    {
            ctx->lr = 0x8002E128u;
            ctx->pc = 0x8001B4E4u;
            return;
    }

label_8002E128:
    ctx->pc = 0x8002E128u;
    ctx->downcount -= 4;
    // 8002E128: lwz     r0, -32540(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32540);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E12C:
    ctx->pc = 0x8002E12Cu;
    // 8002E12C: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8002E130:
    ctx->pc = 0x8002E130u;
    // 8002E130: oris    r4, r0, 0x0040
    ctx->gpr[4] = ctx->gpr[0] | (0x0040u << 16);

label_8002E134:
    ctx->pc = 0x8002E134u;
    // 8002E134: bl      0x8001B278
    {
            ctx->lr = 0x8002E138u;
            ctx->pc = 0x8001B278u;
            return;
    }

label_8002E138:
    ctx->pc = 0x8002E138u;
    ctx->downcount -= 2;
    // 8002E138: lwz     r3, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E13C:
    ctx->pc = 0x8002E13Cu;
    // 8002E13C: bl      0x8001B308
    {
            ctx->lr = 0x8002E140u;
            ctx->pc = 0x8001B308u;
            return;
    }

label_8002E140:
    ctx->pc = 0x8002E140u;
    ctx->downcount -= 6;
    // 8002E140: lwz     r5, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E144:
    ctx->pc = 0x8002E144u;
    // 8002E144: cntlzw r0, r5
    {
        u32 v = ctx->gpr[5];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8002E148:
    ctx->pc = 0x8002E148u;
    // 8002E148: stw     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E14C:
    ctx->pc = 0x8002E14Cu;
    // 8002E14C: lwz     r4, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E150:
    ctx->pc = 0x8002E150u;
    // 8002E150: cmpwi   r4, 32
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002E154:
    ctx->pc = 0x8002E154u;
    // 8002E154: bc    12, 2, 0x8002E194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E194;
        }
    }

label_8002E158:
    ctx->pc = 0x8002E158u;
    ctx->downcount -= 13;
    // 8002E158: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8002E15C:
    ctx->pc = 0x8002E15Cu;
    // 8002E15C: srw   r0, r0, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] >> sh);
    }

label_8002E160:
    ctx->pc = 0x8002E160u;
    // 8002E160: andc   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ~ctx->gpr[0];
    }

label_8002E164:
    ctx->pc = 0x8002E164u;
    // 8002E164: mulli   r4, r4, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)12);

label_8002E168:
    ctx->pc = 0x8002E168u;
    // 8002E168: stw     r0, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E16C:
    ctx->pc = 0x8002E16Cu;
    // 8002E16C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8002E170:
    ctx->pc = 0x8002E170u;
    // 8002E170: addi    r0, r3, -544
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-544);

label_8002E174:
    ctx->pc = 0x8002E174u;
    // 8002E174: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002E178:
    ctx->pc = 0x8002E178u;
    // 8002E178: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002E17C:
    ctx->pc = 0x8002E17Cu;
    // 8002E17C: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_8002E180:
    ctx->pc = 0x8002E180u;
    // 8002E180: bl      0x800050B4
    {
            ctx->lr = 0x8002E184u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002E184:
    ctx->pc = 0x8002E184u;
    ctx->downcount -= 4;
    // 8002E184: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002E188:
    ctx->pc = 0x8002E188u;
    // 8002E188: lwz     r3, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E18C:
    ctx->pc = 0x8002E18Cu;
    // 8002E18C: addi    r4, r4, -7348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7348);

label_8002E190:
    ctx->pc = 0x8002E190u;
    // 8002E190: bl      0x8001BBFC
    {
            ctx->lr = 0x8002E194u;
            ctx->pc = 0x8001BBFCu;
            return;
    }

label_8002E194:
    ctx->pc = 0x8002E194u;
    ctx->downcount -= 6;
    // 8002E194: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E198:
    ctx->pc = 0x8002E198u;
    // 8002E198: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002E19C:
    ctx->pc = 0x8002E19Cu;
    // 8002E19C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8002E1A0:
    ctx->pc = 0x8002E1A0u;
    // 8002E1A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002E1A4:
    ctx->pc = 0x8002E1A4u;
    // 8002E1A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002E1A8:
    ctx->pc = 0x8002E1A8u;
    ctx->downcount -= 13;
    // 8002E1A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002E1AC:
    ctx->pc = 0x8002E1ACu;
    // 8002E1AC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E1B0:
    ctx->pc = 0x8002E1B0u;
    // 8002E1B0: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8002E1B4:
    ctx->pc = 0x8002E1B4u;
    // 8002E1B4: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002E1B8:
    ctx->pc = 0x8002E1B8u;
    // 8002E1B8: stw     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002E1BC:
    ctx->pc = 0x8002E1BCu;
    // 8002E1BC: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_8002E1C0:
    ctx->pc = 0x8002E1C0u;
    // 8002E1C0: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002E1C4:
    ctx->pc = 0x8002E1C4u;
    // 8002E1C4: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8002E1C8:
    ctx->pc = 0x8002E1C8u;
    // 8002E1C8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002E1CC:
    ctx->pc = 0x8002E1CCu;
    // 8002E1CC: srw   r30, r0, r29
    {
        u32 sh = ctx->gpr[29] & 0x3Fu;
        ctx->gpr[30] = sh > 31 ? 0u : (ctx->gpr[0] >> sh);
    }

label_8002E1D0:
    ctx->pc = 0x8002E1D0u;
    // 8002E1D0: lwz     r3, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E1D4:
    ctx->pc = 0x8002E1D4u;
    // 8002E1D4: and.   r0, r3, r30
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[30];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E1D8:
    ctx->pc = 0x8002E1D8u;
    // 8002E1D8: bc    12, 2, 0x8002E258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E258;
        }
    }

label_8002E1DC:
    ctx->pc = 0x8002E1DCu;
    ctx->downcount -= 2;
    // 8002E1DC: rlwinm. r0, r31, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x0000000Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E1E0:
    ctx->pc = 0x8002E1E0u;
    // 8002E1E0: bc    4, 2, 0x8002E1EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E1EC;
        }
    }

label_8002E1E4:
    ctx->pc = 0x8002E1E4u;
    ctx->downcount -= 2;
    // 8002E1E4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8002E1E8:
    ctx->pc = 0x8002E1E8u;
    // 8002E1E8: bl      0x8002DF40
    {
            ctx->lr = 0x8002E1ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002DF40u;
                return;
            }
            goto label_8002DF40;
    }

label_8002E1EC:
    ctx->pc = 0x8002E1ECu;
    ctx->downcount -= 2;
    // 8002E1EC: rlwinm. r0, r31, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E1F0:
    ctx->pc = 0x8002E1F0u;
    // 8002E1F0: bc    12, 2, 0x8002E258
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E258;
        }
    }

label_8002E1F4:
    ctx->pc = 0x8002E1F4u;
    ctx->downcount -= 1;
    // 8002E1F4: bl      0x80020680
    {
            ctx->lr = 0x8002E1F8u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002E1F8:
    ctx->pc = 0x8002E1F8u;
    ctx->downcount -= 3;
    // 8002E1F8: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8002E1FC:
    ctx->pc = 0x8002E1FCu;
    // 8002E1FC: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_8002E200:
    ctx->pc = 0x8002E200u;
    // 8002E200: bl      0x8001B3A4
    {
            ctx->lr = 0x8002E204u;
            ctx->pc = 0x8001B3A4u;
            return;
    }

label_8002E204:
    ctx->pc = 0x8002E204u;
    ctx->downcount -= 19;
    // 8002E204: lwz     r0, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E208:
    ctx->pc = 0x8002E208u;
    // 8002E208: nor   r9, r30, r30
    {
        ctx->gpr[9] = ~(ctx->gpr[30] | ctx->gpr[30]);
    }

label_8002E20C:
    ctx->pc = 0x8002E20Cu;
    // 8002E20C: lwz     r6, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002E210:
    ctx->pc = 0x8002E210u;
    // 8002E210: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8002E214:
    ctx->pc = 0x8002E214u;
    // 8002E214: lwz     r5, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E218:
    ctx->pc = 0x8002E218u;
    // 8002E218: lwz     r4, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E21C:
    ctx->pc = 0x8002E21Cu;
    // 8002E21C: and   r8, r0, r9
    {
        ctx->gpr[8] = ctx->gpr[0] & ctx->gpr[9];
    }

label_8002E220:
    ctx->pc = 0x8002E220u;
    // 8002E220: lwz     r0, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E224:
    ctx->pc = 0x8002E224u;
    // 8002E224: and   r7, r6, r9
    {
        ctx->gpr[7] = ctx->gpr[6] & ctx->gpr[9];
    }

label_8002E228:
    ctx->pc = 0x8002E228u;
    // 8002E228: and   r6, r5, r9
    {
        ctx->gpr[6] = ctx->gpr[5] & ctx->gpr[9];
    }

label_8002E22C:
    ctx->pc = 0x8002E22Cu;
    // 8002E22C: and   r5, r4, r9
    {
        ctx->gpr[5] = ctx->gpr[4] & ctx->gpr[9];
    }

label_8002E230:
    ctx->pc = 0x8002E230u;
    // 8002E230: stw     r8, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8002E234:
    ctx->pc = 0x8002E234u;
    // 8002E234: and   r0, r0, r9
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[9];
    }

label_8002E238:
    ctx->pc = 0x8002E238u;
    // 8002E238: stw     r7, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8002E23C:
    ctx->pc = 0x8002E23Cu;
    // 8002E23C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002E240:
    ctx->pc = 0x8002E240u;
    // 8002E240: stw     r6, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8002E244:
    ctx->pc = 0x8002E244u;
    // 8002E244: stw     r5, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002E248:
    ctx->pc = 0x8002E248u;
    // 8002E248: stw     r0, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E24C:
    ctx->pc = 0x8002E24Cu;
    // 8002E24C: bl      0x800232DC
    {
            ctx->lr = 0x8002E250u;
            ctx->pc = 0x800232DCu;
            return;
    }

label_8002E250:
    ctx->pc = 0x8002E250u;
    ctx->downcount -= 2;
    // 8002E250: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002E254:
    ctx->pc = 0x8002E254u;
    // 8002E254: bl      0x800206A8
    {
            ctx->lr = 0x8002E258u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002E258:
    ctx->pc = 0x8002E258u;
    ctx->downcount -= 8;
    // 8002E258: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E25C:
    ctx->pc = 0x8002E25Cu;
    // 8002E25C: lwz     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002E260:
    ctx->pc = 0x8002E260u;
    // 8002E260: lwz     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002E264:
    ctx->pc = 0x8002E264u;
    // 8002E264: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8002E268:
    ctx->pc = 0x8002E268u;
    // 8002E268: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_8002E26C:
    ctx->pc = 0x8002E26Cu;
    // 8002E26C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002E270:
    ctx->pc = 0x8002E270u;
    // 8002E270: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002E274:
    ctx->pc = 0x8002E274u;
    ctx->downcount -= 7;
    // 8002E274: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002E278:
    ctx->pc = 0x8002E278u;
    // 8002E278: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E27C:
    ctx->pc = 0x8002E27Cu;
    // 8002E27C: rlwinm. r0, r4, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000000Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E280:
    ctx->pc = 0x8002E280u;
    // 8002E280: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002E284:
    ctx->pc = 0x8002E284u;
    // 8002E284: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002E288:
    ctx->pc = 0x8002E288u;
    // 8002E288: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002E28C:
    ctx->pc = 0x8002E28Cu;
    // 8002E28C: bc    4, 2, 0x8002E2E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E2E0;
        }
    }

label_8002E290:
    ctx->pc = 0x8002E290u;
    ctx->downcount -= 9;
    // 8002E290: lwz     r30, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002E294:
    ctx->pc = 0x8002E294u;
    // 8002E294: lis     r31, -32768
    ctx->gpr[31] = ((u32)(s32)(-32768) << 16);

label_8002E298:
    ctx->pc = 0x8002E298u;
    // 8002E298: lwz     r3, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E29C:
    ctx->pc = 0x8002E29Cu;
    // 8002E29C: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_8002E2A0:
    ctx->pc = 0x8002E2A0u;
    // 8002E2A0: srw   r0, r31, r30
    {
        u32 sh = ctx->gpr[30] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[31] >> sh);
    }

label_8002E2A4:
    ctx->pc = 0x8002E2A4u;
    // 8002E2A4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8002E2A8:
    ctx->pc = 0x8002E2A8u;
    // 8002E2A8: stw     r0, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E2AC:
    ctx->pc = 0x8002E2ACu;
    // 8002E2AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8002E2B0:
    ctx->pc = 0x8002E2B0u;
    // 8002E2B0: bl      0x8001B4E4
    {
            ctx->lr = 0x8002E2B4u;
            ctx->pc = 0x8001B4E4u;
            return;
    }

label_8002E2B4:
    ctx->pc = 0x8002E2B4u;
    ctx->downcount -= 4;
    // 8002E2B4: lwz     r0, -32540(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32540);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E2B8:
    ctx->pc = 0x8002E2B8u;
    // 8002E2B8: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_8002E2BC:
    ctx->pc = 0x8002E2BCu;
    // 8002E2BC: oris    r4, r0, 0x0040
    ctx->gpr[4] = ctx->gpr[0] | (0x0040u << 16);

label_8002E2C0:
    ctx->pc = 0x8002E2C0u;
    // 8002E2C0: bl      0x8001B278
    {
            ctx->lr = 0x8002E2C4u;
            ctx->pc = 0x8001B278u;
            return;
    }

label_8002E2C4:
    ctx->pc = 0x8002E2C4u;
    ctx->downcount -= 2;
    // 8002E2C4: lwz     r3, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E2C8:
    ctx->pc = 0x8002E2C8u;
    // 8002E2C8: bl      0x8001B308
    {
            ctx->lr = 0x8002E2CCu;
            ctx->pc = 0x8001B308u;
            return;
    }

label_8002E2CC:
    ctx->pc = 0x8002E2CCu;
    ctx->downcount -= 5;
    // 8002E2CC: lwz     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E2D0:
    ctx->pc = 0x8002E2D0u;
    // 8002E2D0: lwz     r3, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E2D4:
    ctx->pc = 0x8002E2D4u;
    // 8002E2D4: srw   r0, r31, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[31] >> sh);
    }

label_8002E2D8:
    ctx->pc = 0x8002E2D8u;
    // 8002E2D8: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8002E2DC:
    ctx->pc = 0x8002E2DCu;
    // 8002E2DC: stw     r0, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E2E0:
    ctx->pc = 0x8002E2E0u;
    ctx->downcount -= 6;
    // 8002E2E0: lwz     r5, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E2E4:
    ctx->pc = 0x8002E2E4u;
    // 8002E2E4: cntlzw r0, r5
    {
        u32 v = ctx->gpr[5];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8002E2E8:
    ctx->pc = 0x8002E2E8u;
    // 8002E2E8: stw     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E2EC:
    ctx->pc = 0x8002E2ECu;
    // 8002E2EC: lwz     r4, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E2F0:
    ctx->pc = 0x8002E2F0u;
    // 8002E2F0: cmpwi   r4, 32
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002E2F4:
    ctx->pc = 0x8002E2F4u;
    // 8002E2F4: bc    12, 2, 0x8002E334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E334;
        }
    }

label_8002E2F8:
    ctx->pc = 0x8002E2F8u;
    ctx->downcount -= 13;
    // 8002E2F8: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8002E2FC:
    ctx->pc = 0x8002E2FCu;
    // 8002E2FC: srw   r0, r0, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] >> sh);
    }

label_8002E300:
    ctx->pc = 0x8002E300u;
    // 8002E300: andc   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ~ctx->gpr[0];
    }

label_8002E304:
    ctx->pc = 0x8002E304u;
    // 8002E304: mulli   r4, r4, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)12);

label_8002E308:
    ctx->pc = 0x8002E308u;
    // 8002E308: stw     r0, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E30C:
    ctx->pc = 0x8002E30Cu;
    // 8002E30C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8002E310:
    ctx->pc = 0x8002E310u;
    // 8002E310: addi    r0, r3, -544
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-544);

label_8002E314:
    ctx->pc = 0x8002E314u;
    // 8002E314: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002E318:
    ctx->pc = 0x8002E318u;
    // 8002E318: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002E31C:
    ctx->pc = 0x8002E31Cu;
    // 8002E31C: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_8002E320:
    ctx->pc = 0x8002E320u;
    // 8002E320: bl      0x800050B4
    {
            ctx->lr = 0x8002E324u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002E324:
    ctx->pc = 0x8002E324u;
    ctx->downcount -= 4;
    // 8002E324: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002E328:
    ctx->pc = 0x8002E328u;
    // 8002E328: lwz     r3, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E32C:
    ctx->pc = 0x8002E32Cu;
    // 8002E32C: addi    r4, r4, -7348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7348);

label_8002E330:
    ctx->pc = 0x8002E330u;
    // 8002E330: bl      0x8001BBFC
    {
            ctx->lr = 0x8002E334u;
            ctx->pc = 0x8001BBFCu;
            return;
    }

label_8002E334:
    ctx->pc = 0x8002E334u;
    ctx->downcount -= 7;
    // 8002E334: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E338:
    ctx->pc = 0x8002E338u;
    // 8002E338: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002E33C:
    ctx->pc = 0x8002E33Cu;
    // 8002E33C: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002E340:
    ctx->pc = 0x8002E340u;
    // 8002E340: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8002E344:
    ctx->pc = 0x8002E344u;
    // 8002E344: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002E348:
    ctx->pc = 0x8002E348u;
    // 8002E348: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002E34C:
    ctx->pc = 0x8002E34Cu;
    ctx->downcount -= 19;
    // 8002E34C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002E350:
    ctx->pc = 0x8002E350u;
    // 8002E350: lis     r6, -32737
    ctx->gpr[6] = ((u32)(s32)(-32737) << 16);

label_8002E354:
    ctx->pc = 0x8002E354u;
    // 8002E354: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E358:
    ctx->pc = 0x8002E358u;
    // 8002E358: rlwinm. r0, r4, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000000Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E35C:
    ctx->pc = 0x8002E35Cu;
    // 8002E35C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002E360:
    ctx->pc = 0x8002E360u;
    // 8002E360: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002E364:
    ctx->pc = 0x8002E364u;
    // 8002E364: lis     r31, -32768
    ctx->gpr[31] = ((u32)(s32)(-32768) << 16);

label_8002E368:
    ctx->pc = 0x8002E368u;
    // 8002E368: stw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002E36C:
    ctx->pc = 0x8002E36Cu;
    // 8002E36C: addi    r30, r6, -560
    ctx->gpr[30] = ctx->gpr[6] + (u32)(s32)(-560);

label_8002E370:
    ctx->pc = 0x8002E370u;
    // 8002E370: stw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8002E374:
    ctx->pc = 0x8002E374u;
    // 8002E374: stw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_8002E378:
    ctx->pc = 0x8002E378u;
    // 8002E378: lwz     r29, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8002E37C:
    ctx->pc = 0x8002E37Cu;
    // 8002E37C: lwz     r5, -31644(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31644);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E380:
    ctx->pc = 0x8002E380u;
    // 8002E380: srw   r28, r31, r29
    {
        u32 sh = ctx->gpr[29] & 0x3Fu;
        ctx->gpr[28] = sh > 31 ? 0u : (ctx->gpr[31] >> sh);
    }

label_8002E384:
    ctx->pc = 0x8002E384u;
    // 8002E384: andc   r3, r5, r28
    {
        ctx->gpr[3] = ctx->gpr[5] & ~ctx->gpr[28];
    }

label_8002E388:
    ctx->pc = 0x8002E388u;
    // 8002E388: stw     r3, -31644(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31644);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8002E38C:
    ctx->pc = 0x8002E38Cu;
    // 8002E38C: and   r5, r5, r28
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[28];
    }

label_8002E390:
    ctx->pc = 0x8002E390u;
    // 8002E390: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8002E394:
    ctx->pc = 0x8002E394u;
    // 8002E394: bc    12, 2, 0x8002E3E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E3E8;
        }
    }

label_8002E398:
    ctx->pc = 0x8002E398u;
    ctx->downcount -= 6;
    // 8002E398: lwz     r4, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E39C:
    ctx->pc = 0x8002E39Cu;
    // 8002E39C: cntlzw r0, r4
    {
        u32 v = ctx->gpr[4];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8002E3A0:
    ctx->pc = 0x8002E3A0u;
    // 8002E3A0: stw     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E3A4:
    ctx->pc = 0x8002E3A4u;
    // 8002E3A4: lwz     r3, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E3A8:
    ctx->pc = 0x8002E3A8u;
    // 8002E3A8: cmpwi   r3, 32
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002E3AC:
    ctx->pc = 0x8002E3ACu;
    // 8002E3AC: bc    12, 2, 0x8002E658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E658;
        }
    }

label_8002E3B0:
    ctx->pc = 0x8002E3B0u;
    ctx->downcount -= 11;
    // 8002E3B0: mulli   r0, r3, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)12);

label_8002E3B4:
    ctx->pc = 0x8002E3B4u;
    // 8002E3B4: srw   r3, r31, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[3] = sh > 31 ? 0u : (ctx->gpr[31] >> sh);
    }

label_8002E3B8:
    ctx->pc = 0x8002E3B8u;
    // 8002E3B8: andc   r4, r4, r3
    {
        ctx->gpr[4] = ctx->gpr[4] & ~ctx->gpr[3];
    }

label_8002E3BC:
    ctx->pc = 0x8002E3BCu;
    // 8002E3BC: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002E3C0:
    ctx->pc = 0x8002E3C0u;
    // 8002E3C0: stw     r4, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002E3C4:
    ctx->pc = 0x8002E3C4u;
    // 8002E3C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002E3C8:
    ctx->pc = 0x8002E3C8u;
    // 8002E3C8: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_8002E3CC:
    ctx->pc = 0x8002E3CCu;
    // 8002E3CC: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_8002E3D0:
    ctx->pc = 0x8002E3D0u;
    // 8002E3D0: bl      0x800050B4
    {
            ctx->lr = 0x8002E3D4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002E3D4:
    ctx->pc = 0x8002E3D4u;
    ctx->downcount -= 4;
    // 8002E3D4: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002E3D8:
    ctx->pc = 0x8002E3D8u;
    // 8002E3D8: lwz     r3, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E3DC:
    ctx->pc = 0x8002E3DCu;
    // 8002E3DC: addi    r4, r4, -7348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7348);

label_8002E3E0:
    ctx->pc = 0x8002E3E0u;
    // 8002E3E0: bl      0x8001BBFC
    {
            ctx->lr = 0x8002E3E4u;
            ctx->pc = 0x8001BBFCu;
            return;
    }

label_8002E3E4:
    ctx->pc = 0x8002E3E4u;
    ctx->downcount -= 1;
    // 8002E3E4: b       0x8002E658
    {
            goto label_8002E658;
    }

label_8002E3E8:
    ctx->pc = 0x8002E3E8u;
    ctx->downcount -= 7;
    // 8002E3E8: rlwinm r6, r4, 0, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFF00u;
    }

label_8002E3EC:
    ctx->pc = 0x8002E3ECu;
    // 8002E3EC: rlwinm r4, r4, 0, 3, 4
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x18000000u;
    }

label_8002E3F0:
    ctx->pc = 0x8002E3F0u;
    // 8002E3F0: addis   r0, r4, -2048
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(-2048) << 16);

label_8002E3F4:
    ctx->pc = 0x8002E3F4u;
    // 8002E3F4: rlwinm r4, r29, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_8002E3F8:
    ctx->pc = 0x8002E3F8u;
    // 8002E3F8: cmplwi  r0, 0x0000
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

label_8002E3FC:
    ctx->pc = 0x8002E3FCu;
    // 8002E3FC: stwx    r6, r30, r4
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8002E400:
    ctx->pc = 0x8002E400u;
    // 8002E400: bc    4, 2, 0x8002E40C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E40C;
        }
    }

label_8002E404:
    ctx->pc = 0x8002E404u;
    ctx->downcount -= 2;
    // 8002E404: rlwinm. r0, r6, 0, 7, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x01000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E408:
    ctx->pc = 0x8002E408u;
    // 8002E408: bc    4, 2, 0x8002E460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E460;
        }
    }

label_8002E40C:
    ctx->pc = 0x8002E40Cu;
    ctx->downcount -= 6;
    // 8002E40C: lwz     r5, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E410:
    ctx->pc = 0x8002E410u;
    // 8002E410: cntlzw r0, r5
    {
        u32 v = ctx->gpr[5];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8002E414:
    ctx->pc = 0x8002E414u;
    // 8002E414: stw     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E418:
    ctx->pc = 0x8002E418u;
    // 8002E418: lwz     r4, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E41C:
    ctx->pc = 0x8002E41Cu;
    // 8002E41C: cmpwi   r4, 32
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002E420:
    ctx->pc = 0x8002E420u;
    // 8002E420: bc    12, 2, 0x8002E658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E658;
        }
    }

label_8002E424:
    ctx->pc = 0x8002E424u;
    ctx->downcount -= 12;
    // 8002E424: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8002E428:
    ctx->pc = 0x8002E428u;
    // 8002E428: mulli   r0, r4, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)12);

label_8002E42C:
    ctx->pc = 0x8002E42Cu;
    // 8002E42C: srw   r3, r3, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[3] = sh > 31 ? 0u : (ctx->gpr[3] >> sh);
    }

label_8002E430:
    ctx->pc = 0x8002E430u;
    // 8002E430: andc   r4, r5, r3
    {
        ctx->gpr[4] = ctx->gpr[5] & ~ctx->gpr[3];
    }

label_8002E434:
    ctx->pc = 0x8002E434u;
    // 8002E434: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002E438:
    ctx->pc = 0x8002E438u;
    // 8002E438: stw     r4, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002E43C:
    ctx->pc = 0x8002E43Cu;
    // 8002E43C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002E440:
    ctx->pc = 0x8002E440u;
    // 8002E440: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_8002E444:
    ctx->pc = 0x8002E444u;
    // 8002E444: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_8002E448:
    ctx->pc = 0x8002E448u;
    // 8002E448: bl      0x800050B4
    {
            ctx->lr = 0x8002E44Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002E44C:
    ctx->pc = 0x8002E44Cu;
    ctx->downcount -= 4;
    // 8002E44C: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002E450:
    ctx->pc = 0x8002E450u;
    // 8002E450: lwz     r3, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E454:
    ctx->pc = 0x8002E454u;
    // 8002E454: addi    r4, r4, -7348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7348);

label_8002E458:
    ctx->pc = 0x8002E458u;
    // 8002E458: bl      0x8001BBFC
    {
            ctx->lr = 0x8002E45Cu;
            ctx->pc = 0x8001BBFCu;
            return;
    }

label_8002E45C:
    ctx->pc = 0x8002E45Cu;
    ctx->downcount -= 1;
    // 8002E45C: b       0x8002E658
    {
            goto label_8002E658;
    }

label_8002E460:
    ctx->pc = 0x8002E460u;
    ctx->downcount -= 3;
    // 8002E460: lwz     r0, -32536(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32536);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E464:
    ctx->pc = 0x8002E464u;
    // 8002E464: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002E468:
    ctx->pc = 0x8002E468u;
    // 8002E468: bc    4, 0, 0x8002E4EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E4EC;
        }
    }

label_8002E46C:
    ctx->pc = 0x8002E46Cu;
    ctx->downcount -= 6;
    // 8002E46C: lwz     r0, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E470:
    ctx->pc = 0x8002E470u;
    // 8002E470: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8002E474:
    ctx->pc = 0x8002E474u;
    // 8002E474: addi    r4, r1, 28
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(28);

label_8002E478:
    ctx->pc = 0x8002E478u;
    // 8002E478: or   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[28];
    }

label_8002E47C:
    ctx->pc = 0x8002E47Cu;
    // 8002E47C: stw     r0, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E480:
    ctx->pc = 0x8002E480u;
    // 8002E480: bl      0x8001B4E4
    {
            ctx->lr = 0x8002E484u;
            ctx->pc = 0x8001B4E4u;
            return;
    }

label_8002E484:
    ctx->pc = 0x8002E484u;
    ctx->downcount -= 4;
    // 8002E484: lwz     r0, -32540(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32540);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E488:
    ctx->pc = 0x8002E488u;
    // 8002E488: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8002E48C:
    ctx->pc = 0x8002E48Cu;
    // 8002E48C: oris    r4, r0, 0x0040
    ctx->gpr[4] = ctx->gpr[0] | (0x0040u << 16);

label_8002E490:
    ctx->pc = 0x8002E490u;
    // 8002E490: bl      0x8001B278
    {
            ctx->lr = 0x8002E494u;
            ctx->pc = 0x8001B278u;
            return;
    }

label_8002E494:
    ctx->pc = 0x8002E494u;
    ctx->downcount -= 2;
    // 8002E494: lwz     r3, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E498:
    ctx->pc = 0x8002E498u;
    // 8002E498: bl      0x8001B308
    {
            ctx->lr = 0x8002E49Cu;
            ctx->pc = 0x8001B308u;
            return;
    }

label_8002E49C:
    ctx->pc = 0x8002E49Cu;
    ctx->downcount -= 6;
    // 8002E49C: lwz     r4, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E4A0:
    ctx->pc = 0x8002E4A0u;
    // 8002E4A0: cntlzw r0, r4
    {
        u32 v = ctx->gpr[4];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8002E4A4:
    ctx->pc = 0x8002E4A4u;
    // 8002E4A4: stw     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E4A8:
    ctx->pc = 0x8002E4A8u;
    // 8002E4A8: lwz     r3, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E4AC:
    ctx->pc = 0x8002E4ACu;
    // 8002E4AC: cmpwi   r3, 32
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002E4B0:
    ctx->pc = 0x8002E4B0u;
    // 8002E4B0: bc    12, 2, 0x8002E658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E658;
        }
    }

label_8002E4B4:
    ctx->pc = 0x8002E4B4u;
    ctx->downcount -= 11;
    // 8002E4B4: mulli   r0, r3, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)12);

label_8002E4B8:
    ctx->pc = 0x8002E4B8u;
    // 8002E4B8: srw   r3, r31, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[3] = sh > 31 ? 0u : (ctx->gpr[31] >> sh);
    }

label_8002E4BC:
    ctx->pc = 0x8002E4BCu;
    // 8002E4BC: andc   r4, r4, r3
    {
        ctx->gpr[4] = ctx->gpr[4] & ~ctx->gpr[3];
    }

label_8002E4C0:
    ctx->pc = 0x8002E4C0u;
    // 8002E4C0: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002E4C4:
    ctx->pc = 0x8002E4C4u;
    // 8002E4C4: stw     r4, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002E4C8:
    ctx->pc = 0x8002E4C8u;
    // 8002E4C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002E4CC:
    ctx->pc = 0x8002E4CCu;
    // 8002E4CC: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_8002E4D0:
    ctx->pc = 0x8002E4D0u;
    // 8002E4D0: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_8002E4D4:
    ctx->pc = 0x8002E4D4u;
    // 8002E4D4: bl      0x800050B4
    {
            ctx->lr = 0x8002E4D8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002E4D8:
    ctx->pc = 0x8002E4D8u;
    ctx->downcount -= 4;
    // 8002E4D8: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002E4DC:
    ctx->pc = 0x8002E4DCu;
    // 8002E4DC: lwz     r3, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E4E0:
    ctx->pc = 0x8002E4E0u;
    // 8002E4E0: addi    r4, r4, -7348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7348);

label_8002E4E4:
    ctx->pc = 0x8002E4E4u;
    // 8002E4E4: bl      0x8001BBFC
    {
            ctx->lr = 0x8002E4E8u;
            ctx->pc = 0x8001BBFCu;
            return;
    }

label_8002E4E8:
    ctx->pc = 0x8002E4E8u;
    ctx->downcount -= 1;
    // 8002E4E8: b       0x8002E658
    {
            goto label_8002E658;
    }

label_8002E4EC:
    ctx->pc = 0x8002E4ECu;
    ctx->downcount -= 2;
    // 8002E4EC: rlwinm. r0, r6, 0, 0, 0
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x80000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E4F0:
    ctx->pc = 0x8002E4F0u;
    // 8002E4F0: bc    12, 2, 0x8002E4FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E4FC;
        }
    }

label_8002E4F4:
    ctx->pc = 0x8002E4F4u;
    ctx->downcount -= 2;
    // 8002E4F4: rlwinm. r0, r6, 0, 5, 5
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x04000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E4F8:
    ctx->pc = 0x8002E4F8u;
    // 8002E4F8: bc    12, 2, 0x8002E56C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E56C;
        }
    }

label_8002E4FC:
    ctx->pc = 0x8002E4FCu;
    ctx->downcount -= 2;
    // 8002E4FC: cmplwi  r5, 0x0000
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

label_8002E500:
    ctx->pc = 0x8002E500u;
    // 8002E500: bc    12, 2, 0x8002E538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E538;
        }
    }

label_8002E504:
    ctx->pc = 0x8002E504u;
    ctx->downcount -= 14;
    // 8002E504: mulli   r0, r29, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)12);

label_8002E508:
    ctx->pc = 0x8002E508u;
    // 8002E508: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_8002E50C:
    ctx->pc = 0x8002E50Cu;
    // 8002E50C: add   r6, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8002E510:
    ctx->pc = 0x8002E510u;
    // 8002E510: addi    r8, r3, -7964
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-7964);

label_8002E514:
    ctx->pc = 0x8002E514u;
    // 8002E514: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8002E518:
    ctx->pc = 0x8002E518u;
    // 8002E518: addi    r4, r13, -32524
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-32524);

label_8002E51C:
    ctx->pc = 0x8002E51Cu;
    // 8002E51C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8002E520:
    ctx->pc = 0x8002E520u;
    // 8002E520: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_8002E524:
    ctx->pc = 0x8002E524u;
    // 8002E524: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8002E528:
    ctx->pc = 0x8002E528u;
    // 8002E528: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8002E52C:
    ctx->pc = 0x8002E52Cu;
    // 8002E52C: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

label_8002E530:
    ctx->pc = 0x8002E530u;
    // 8002E530: bl      0x8001B634
    {
            ctx->lr = 0x8002E534u;
            ctx->pc = 0x8001B634u;
            return;
    }

label_8002E534:
    ctx->pc = 0x8002E534u;
    ctx->downcount -= 1;
    // 8002E534: b       0x8002E5F4
    {
            goto label_8002E5F4;
    }

label_8002E538:
    ctx->pc = 0x8002E538u;
    ctx->downcount -= 14;
    // 8002E538: mulli   r0, r29, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)12);

label_8002E53C:
    ctx->pc = 0x8002E53Cu;
    // 8002E53C: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_8002E540:
    ctx->pc = 0x8002E540u;
    // 8002E540: add   r6, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8002E544:
    ctx->pc = 0x8002E544u;
    // 8002E544: addi    r8, r3, -7964
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-7964);

label_8002E548:
    ctx->pc = 0x8002E548u;
    // 8002E548: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8002E54C:
    ctx->pc = 0x8002E54Cu;
    // 8002E54C: addi    r4, r13, -32528
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-32528);

label_8002E550:
    ctx->pc = 0x8002E550u;
    // 8002E550: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8002E554:
    ctx->pc = 0x8002E554u;
    // 8002E554: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_8002E558:
    ctx->pc = 0x8002E558u;
    // 8002E558: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8002E55C:
    ctx->pc = 0x8002E55Cu;
    // 8002E55C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8002E560:
    ctx->pc = 0x8002E560u;
    // 8002E560: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

label_8002E564:
    ctx->pc = 0x8002E564u;
    // 8002E564: bl      0x8001B634
    {
            ctx->lr = 0x8002E568u;
            ctx->pc = 0x8001B634u;
            return;
    }

label_8002E568:
    ctx->pc = 0x8002E568u;
    ctx->downcount -= 1;
    // 8002E568: b       0x8002E5F4
    {
            goto label_8002E5F4;
    }

label_8002E56C:
    ctx->pc = 0x8002E56Cu;
    ctx->downcount -= 2;
    // 8002E56C: rlwinm. r0, r6, 0, 11, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00100000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E570:
    ctx->pc = 0x8002E570u;
    // 8002E570: bc    12, 2, 0x8002E5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E5F4;
        }
    }

label_8002E574:
    ctx->pc = 0x8002E574u;
    ctx->downcount -= 2;
    // 8002E574: rlwinm. r0, r6, 0, 12, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00080000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E578:
    ctx->pc = 0x8002E578u;
    // 8002E578: bc    4, 2, 0x8002E5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E5F4;
        }
    }

label_8002E57C:
    ctx->pc = 0x8002E57Cu;
    ctx->downcount -= 2;
    // 8002E57C: rlwinm. r0, r6, 0, 13, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00040000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E580:
    ctx->pc = 0x8002E580u;
    // 8002E580: bc    4, 2, 0x8002E5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E5F4;
        }
    }

label_8002E584:
    ctx->pc = 0x8002E584u;
    ctx->downcount -= 2;
    // 8002E584: rlwinm. r0, r6, 0, 1, 1
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x40000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E588:
    ctx->pc = 0x8002E588u;
    // 8002E588: bc    12, 2, 0x8002E5C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E5C0;
        }
    }

label_8002E58C:
    ctx->pc = 0x8002E58Cu;
    ctx->downcount -= 14;
    // 8002E58C: mulli   r0, r29, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)12);

label_8002E590:
    ctx->pc = 0x8002E590u;
    // 8002E590: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_8002E594:
    ctx->pc = 0x8002E594u;
    // 8002E594: add   r6, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8002E598:
    ctx->pc = 0x8002E598u;
    // 8002E598: addi    r8, r3, -7964
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-7964);

label_8002E59C:
    ctx->pc = 0x8002E59Cu;
    // 8002E59C: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8002E5A0:
    ctx->pc = 0x8002E5A0u;
    // 8002E5A0: addi    r4, r13, -32528
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-32528);

label_8002E5A4:
    ctx->pc = 0x8002E5A4u;
    // 8002E5A4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8002E5A8:
    ctx->pc = 0x8002E5A8u;
    // 8002E5A8: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_8002E5AC:
    ctx->pc = 0x8002E5ACu;
    // 8002E5AC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8002E5B0:
    ctx->pc = 0x8002E5B0u;
    // 8002E5B0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8002E5B4:
    ctx->pc = 0x8002E5B4u;
    // 8002E5B4: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

label_8002E5B8:
    ctx->pc = 0x8002E5B8u;
    // 8002E5B8: bl      0x8001B634
    {
            ctx->lr = 0x8002E5BCu;
            ctx->pc = 0x8001B634u;
            return;
    }

label_8002E5BC:
    ctx->pc = 0x8002E5BCu;
    ctx->downcount -= 1;
    // 8002E5BC: b       0x8002E5F4
    {
            goto label_8002E5F4;
    }

label_8002E5C0:
    ctx->pc = 0x8002E5C0u;
    ctx->downcount -= 15;
    // 8002E5C0: mulli   r0, r29, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)12);

label_8002E5C4:
    ctx->pc = 0x8002E5C4u;
    // 8002E5C4: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_8002E5C8:
    ctx->pc = 0x8002E5C8u;
    // 8002E5C8: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8002E5CC:
    ctx->pc = 0x8002E5CCu;
    // 8002E5CC: add   r6, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8002E5D0:
    ctx->pc = 0x8002E5D0u;
    // 8002E5D0: addi    r8, r3, -7564
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-7564);

label_8002E5D4:
    ctx->pc = 0x8002E5D4u;
    // 8002E5D4: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8002E5D8:
    ctx->pc = 0x8002E5D8u;
    // 8002E5D8: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8002E5DC:
    ctx->pc = 0x8002E5DCu;
    // 8002E5DC: li      r7, 8
    ctx->gpr[7] = (u32)(s32)(8);

label_8002E5E0:
    ctx->pc = 0x8002E5E0u;
    // 8002E5E0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8002E5E4:
    ctx->pc = 0x8002E5E4u;
    // 8002E5E4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8002E5E8:
    ctx->pc = 0x8002E5E8u;
    // 8002E5E8: addi    r4, r4, 64
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(64);

label_8002E5EC:
    ctx->pc = 0x8002E5ECu;
    // 8002E5EC: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

label_8002E5F0:
    ctx->pc = 0x8002E5F0u;
    // 8002E5F0: bl      0x8001B634
    {
            ctx->lr = 0x8002E5F4u;
            ctx->pc = 0x8001B634u;
            return;
    }

label_8002E5F4:
    ctx->pc = 0x8002E5F4u;
    ctx->downcount -= 2;
    // 8002E5F4: cmpwi   r3, 0
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

label_8002E5F8:
    ctx->pc = 0x8002E5F8u;
    // 8002E5F8: bc    4, 2, 0x8002E658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E658;
        }
    }

label_8002E5FC:
    ctx->pc = 0x8002E5FCu;
    ctx->downcount -= 9;
    // 8002E5FC: lwz     r5, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E600:
    ctx->pc = 0x8002E600u;
    // 8002E600: lwz     r3, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E604:
    ctx->pc = 0x8002E604u;
    // 8002E604: cntlzw r0, r5
    {
        u32 v = ctx->gpr[5];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8002E608:
    ctx->pc = 0x8002E608u;
    // 8002E608: stw     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E60C:
    ctx->pc = 0x8002E60Cu;
    // 8002E60C: or   r0, r3, r28
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[28];
    }

label_8002E610:
    ctx->pc = 0x8002E610u;
    // 8002E610: lwz     r4, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E614:
    ctx->pc = 0x8002E614u;
    // 8002E614: stw     r0, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E618:
    ctx->pc = 0x8002E618u;
    // 8002E618: cmpwi   r4, 32
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002E61C:
    ctx->pc = 0x8002E61Cu;
    // 8002E61C: bc    12, 2, 0x8002E658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E658;
        }
    }

label_8002E620:
    ctx->pc = 0x8002E620u;
    ctx->downcount -= 12;
    // 8002E620: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8002E624:
    ctx->pc = 0x8002E624u;
    // 8002E624: mulli   r0, r4, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)12);

label_8002E628:
    ctx->pc = 0x8002E628u;
    // 8002E628: srw   r3, r3, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[3] = sh > 31 ? 0u : (ctx->gpr[3] >> sh);
    }

label_8002E62C:
    ctx->pc = 0x8002E62Cu;
    // 8002E62C: andc   r4, r5, r3
    {
        ctx->gpr[4] = ctx->gpr[5] & ~ctx->gpr[3];
    }

label_8002E630:
    ctx->pc = 0x8002E630u;
    // 8002E630: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002E634:
    ctx->pc = 0x8002E634u;
    // 8002E634: stw     r4, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002E638:
    ctx->pc = 0x8002E638u;
    // 8002E638: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002E63C:
    ctx->pc = 0x8002E63Cu;
    // 8002E63C: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_8002E640:
    ctx->pc = 0x8002E640u;
    // 8002E640: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_8002E644:
    ctx->pc = 0x8002E644u;
    // 8002E644: bl      0x800050B4
    {
            ctx->lr = 0x8002E648u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002E648:
    ctx->pc = 0x8002E648u;
    ctx->downcount -= 4;
    // 8002E648: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002E64C:
    ctx->pc = 0x8002E64Cu;
    // 8002E64C: lwz     r3, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E650:
    ctx->pc = 0x8002E650u;
    // 8002E650: addi    r4, r4, -7348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7348);

label_8002E654:
    ctx->pc = 0x8002E654u;
    // 8002E654: bl      0x8001BBFC
    {
            ctx->lr = 0x8002E658u;
            ctx->pc = 0x8001BBFCu;
            return;
    }

label_8002E658:
    ctx->pc = 0x8002E658u;
    ctx->downcount -= 9;
    // 8002E658: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E65C:
    ctx->pc = 0x8002E65Cu;
    // 8002E65C: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002E660:
    ctx->pc = 0x8002E660u;
    // 8002E660: lwz     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002E664:
    ctx->pc = 0x8002E664u;
    // 8002E664: lwz     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8002E668:
    ctx->pc = 0x8002E668u;
    // 8002E668: lwz     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8002E66C:
    ctx->pc = 0x8002E66Cu;
    // 8002E66C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8002E670:
    ctx->pc = 0x8002E670u;
    // 8002E670: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002E674:
    ctx->pc = 0x8002E674u;
    // 8002E674: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002E678:
    ctx->pc = 0x8002E678u;
    ctx->downcount -= 12;
    // 8002E678: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002E67C:
    ctx->pc = 0x8002E67Cu;
    // 8002E67C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E680:
    ctx->pc = 0x8002E680u;
    // 8002E680: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002E684:
    ctx->pc = 0x8002E684u;
    // 8002E684: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002E688:
    ctx->pc = 0x8002E688u;
    // 8002E688: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002E68C:
    ctx->pc = 0x8002E68Cu;
    // 8002E68C: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8002E690:
    ctx->pc = 0x8002E690u;
    // 8002E690: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002E694:
    ctx->pc = 0x8002E694u;
    // 8002E694: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8002E698:
    ctx->pc = 0x8002E698u;
    // 8002E698: srw   r29, r3, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[29] = sh > 31 ? 0u : (ctx->gpr[3] >> sh);
    }

label_8002E69C:
    ctx->pc = 0x8002E69Cu;
    // 8002E69C: lwz     r0, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E6A0:
    ctx->pc = 0x8002E6A0u;
    // 8002E6A0: and.   r0, r0, r29
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[29];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E6A4:
    ctx->pc = 0x8002E6A4u;
    // 8002E6A4: bc    12, 2, 0x8002E79C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E79C;
        }
    }

label_8002E6A8:
    ctx->pc = 0x8002E6A8u;
    ctx->downcount -= 10;
    // 8002E6A8: lwz     r5, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E6AC:
    ctx->pc = 0x8002E6ACu;
    // 8002E6AC: nor   r6, r29, r29
    {
        ctx->gpr[6] = ~(ctx->gpr[29] | ctx->gpr[29]);
    }

label_8002E6B0:
    ctx->pc = 0x8002E6B0u;
    // 8002E6B0: lwz     r3, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E6B4:
    ctx->pc = 0x8002E6B4u;
    // 8002E6B4: rlwinm. r0, r4, 0, 28, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x0000000Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E6B8:
    ctx->pc = 0x8002E6B8u;
    // 8002E6B8: and   r5, r5, r6
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[6];
    }

label_8002E6BC:
    ctx->pc = 0x8002E6BCu;
    // 8002E6BC: and   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[6];
    }

label_8002E6C0:
    ctx->pc = 0x8002E6C0u;
    // 8002E6C0: stw     r5, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002E6C4:
    ctx->pc = 0x8002E6C4u;
    // 8002E6C4: stw     r3, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8002E6C8:
    ctx->pc = 0x8002E6C8u;
    // 8002E6C8: rlwinm r3, r4, 0, 0, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFF00u;
    }

label_8002E6CC:
    ctx->pc = 0x8002E6CCu;
    // 8002E6CC: bc    4, 2, 0x8002E738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E738;
        }
    }

label_8002E6D0:
    ctx->pc = 0x8002E6D0u;
    ctx->downcount -= 2;
    // 8002E6D0: rlwinm. r0, r3, 0, 0, 0
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x80000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E6D4:
    ctx->pc = 0x8002E6D4u;
    // 8002E6D4: bc    12, 2, 0x8002E738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E738;
        }
    }

label_8002E6D8:
    ctx->pc = 0x8002E6D8u;
    ctx->downcount -= 2;
    // 8002E6D8: rlwinm. r0, r3, 0, 11, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00100000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E6DC:
    ctx->pc = 0x8002E6DCu;
    // 8002E6DC: bc    12, 2, 0x8002E738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E738;
        }
    }

label_8002E6E0:
    ctx->pc = 0x8002E6E0u;
    ctx->downcount -= 2;
    // 8002E6E0: rlwinm. r0, r3, 0, 1, 1
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x40000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E6E4:
    ctx->pc = 0x8002E6E4u;
    // 8002E6E4: bc    12, 2, 0x8002E738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E738;
        }
    }

label_8002E6E8:
    ctx->pc = 0x8002E6E8u;
    ctx->downcount -= 2;
    // 8002E6E8: rlwinm. r0, r3, 0, 5, 5
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x04000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E6EC:
    ctx->pc = 0x8002E6ECu;
    // 8002E6EC: bc    4, 2, 0x8002E738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E738;
        }
    }

label_8002E6F0:
    ctx->pc = 0x8002E6F0u;
    ctx->downcount -= 2;
    // 8002E6F0: rlwinm. r0, r3, 0, 12, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00080000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E6F4:
    ctx->pc = 0x8002E6F4u;
    // 8002E6F4: bc    4, 2, 0x8002E738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E738;
        }
    }

label_8002E6F8:
    ctx->pc = 0x8002E6F8u;
    ctx->downcount -= 2;
    // 8002E6F8: rlwinm. r0, r3, 0, 13, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00040000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002E6FC:
    ctx->pc = 0x8002E6FCu;
    // 8002E6FC: bc    4, 2, 0x8002E738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E738;
        }
    }

label_8002E700:
    ctx->pc = 0x8002E700u;
    ctx->downcount -= 15;
    // 8002E700: mulli   r4, r31, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_8002E704:
    ctx->pc = 0x8002E704u;
    // 8002E704: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8002E708:
    ctx->pc = 0x8002E708u;
    // 8002E708: addi    r0, r3, -544
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-544);

label_8002E70C:
    ctx->pc = 0x8002E70Cu;
    // 8002E70C: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_8002E710:
    ctx->pc = 0x8002E710u;
    // 8002E710: add   r6, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8002E714:
    ctx->pc = 0x8002E714u;
    // 8002E714: addi    r8, r3, -7768
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-7768);

label_8002E718:
    ctx->pc = 0x8002E718u;
    // 8002E718: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8002E71C:
    ctx->pc = 0x8002E71Cu;
    // 8002E71C: addi    r4, r13, -32528
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-32528);

label_8002E720:
    ctx->pc = 0x8002E720u;
    // 8002E720: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8002E724:
    ctx->pc = 0x8002E724u;
    // 8002E724: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_8002E728:
    ctx->pc = 0x8002E728u;
    // 8002E728: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8002E72C:
    ctx->pc = 0x8002E72Cu;
    // 8002E72C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8002E730:
    ctx->pc = 0x8002E730u;
    // 8002E730: bl      0x8001B634
    {
            ctx->lr = 0x8002E734u;
            ctx->pc = 0x8001B634u;
            return;
    }

label_8002E734:
    ctx->pc = 0x8002E734u;
    ctx->downcount -= 1;
    // 8002E734: b       0x8002E79C
    {
            goto label_8002E79C;
    }

label_8002E738:
    ctx->pc = 0x8002E738u;
    ctx->downcount -= 1;
    // 8002E738: bl      0x80020680
    {
            ctx->lr = 0x8002E73Cu;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002E73C:
    ctx->pc = 0x8002E73Cu;
    ctx->downcount -= 3;
    // 8002E73C: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_8002E740:
    ctx->pc = 0x8002E740u;
    // 8002E740: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8002E744:
    ctx->pc = 0x8002E744u;
    // 8002E744: bl      0x8001B3A4
    {
            ctx->lr = 0x8002E748u;
            ctx->pc = 0x8001B3A4u;
            return;
    }

label_8002E748:
    ctx->pc = 0x8002E748u;
    ctx->downcount -= 19;
    // 8002E748: lwz     r0, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E74C:
    ctx->pc = 0x8002E74Cu;
    // 8002E74C: nor   r9, r29, r29
    {
        ctx->gpr[9] = ~(ctx->gpr[29] | ctx->gpr[29]);
    }

label_8002E750:
    ctx->pc = 0x8002E750u;
    // 8002E750: lwz     r6, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002E754:
    ctx->pc = 0x8002E754u;
    // 8002E754: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002E758:
    ctx->pc = 0x8002E758u;
    // 8002E758: lwz     r5, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E75C:
    ctx->pc = 0x8002E75Cu;
    // 8002E75C: lwz     r4, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E760:
    ctx->pc = 0x8002E760u;
    // 8002E760: and   r8, r0, r9
    {
        ctx->gpr[8] = ctx->gpr[0] & ctx->gpr[9];
    }

label_8002E764:
    ctx->pc = 0x8002E764u;
    // 8002E764: lwz     r0, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E768:
    ctx->pc = 0x8002E768u;
    // 8002E768: and   r7, r6, r9
    {
        ctx->gpr[7] = ctx->gpr[6] & ctx->gpr[9];
    }

label_8002E76C:
    ctx->pc = 0x8002E76Cu;
    // 8002E76C: and   r6, r5, r9
    {
        ctx->gpr[6] = ctx->gpr[5] & ctx->gpr[9];
    }

label_8002E770:
    ctx->pc = 0x8002E770u;
    // 8002E770: and   r5, r4, r9
    {
        ctx->gpr[5] = ctx->gpr[4] & ctx->gpr[9];
    }

label_8002E774:
    ctx->pc = 0x8002E774u;
    // 8002E774: stw     r8, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8002E778:
    ctx->pc = 0x8002E778u;
    // 8002E778: and   r0, r0, r9
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[9];
    }

label_8002E77C:
    ctx->pc = 0x8002E77Cu;
    // 8002E77C: stw     r7, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8002E780:
    ctx->pc = 0x8002E780u;
    // 8002E780: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002E784:
    ctx->pc = 0x8002E784u;
    // 8002E784: stw     r6, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8002E788:
    ctx->pc = 0x8002E788u;
    // 8002E788: stw     r5, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002E78C:
    ctx->pc = 0x8002E78Cu;
    // 8002E78C: stw     r0, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E790:
    ctx->pc = 0x8002E790u;
    // 8002E790: bl      0x800232DC
    {
            ctx->lr = 0x8002E794u;
            ctx->pc = 0x800232DCu;
            return;
    }

label_8002E794:
    ctx->pc = 0x8002E794u;
    ctx->downcount -= 2;
    // 8002E794: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8002E798:
    ctx->pc = 0x8002E798u;
    // 8002E798: bl      0x800206A8
    {
            ctx->lr = 0x8002E79Cu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002E79C:
    ctx->pc = 0x8002E79Cu;
    ctx->downcount -= 8;
    // 8002E79C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E7A0:
    ctx->pc = 0x8002E7A0u;
    // 8002E7A0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002E7A4:
    ctx->pc = 0x8002E7A4u;
    // 8002E7A4: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002E7A8:
    ctx->pc = 0x8002E7A8u;
    // 8002E7A8: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8002E7AC:
    ctx->pc = 0x8002E7ACu;
    // 8002E7AC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8002E7B0:
    ctx->pc = 0x8002E7B0u;
    // 8002E7B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002E7B4:
    ctx->pc = 0x8002E7B4u;
    // 8002E7B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002E7B8:
    ctx->pc = 0x8002E7B8u;
    ctx->downcount -= 7;
    // 8002E7B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002E7BC:
    ctx->pc = 0x8002E7BCu;
    // 8002E7BC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E7C0:
    ctx->pc = 0x8002E7C0u;
    // 8002E7C0: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002E7C4:
    ctx->pc = 0x8002E7C4u;
    // 8002E7C4: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002E7C8:
    ctx->pc = 0x8002E7C8u;
    // 8002E7C8: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002E7CC:
    ctx->pc = 0x8002E7CCu;
    // 8002E7CC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002E7D0:
    ctx->pc = 0x8002E7D0u;
    // 8002E7D0: bl      0x80020680
    {
            ctx->lr = 0x8002E7D4u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002E7D4:
    ctx->pc = 0x8002E7D4u;
    ctx->downcount -= 24;
    // 8002E7D4: lwz     r4, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E7D8:
    ctx->pc = 0x8002E7D8u;
    // 8002E7D8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8002E7DC:
    ctx->pc = 0x8002E7DCu;
    // 8002E7DC: lwz     r5, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E7E0:
    ctx->pc = 0x8002E7E0u;
    // 8002E7E0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002E7E4:
    ctx->pc = 0x8002E7E4u;
    // 8002E7E4: lwz     r0, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E7E8:
    ctx->pc = 0x8002E7E8u;
    // 8002E7E8: or   r30, r30, r4
    {
        ctx->gpr[30] = ctx->gpr[30] | ctx->gpr[4];
    }

label_8002E7EC:
    ctx->pc = 0x8002E7ECu;
    // 8002E7EC: lwz     r4, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E7F0:
    ctx->pc = 0x8002E7F0u;
    // 8002E7F0: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_8002E7F4:
    ctx->pc = 0x8002E7F4u;
    // 8002E7F4: lwz     r0, -32536(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32536);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E7F8:
    ctx->pc = 0x8002E7F8u;
    // 8002E7F8: andc   r30, r30, r5
    {
        ctx->gpr[30] = ctx->gpr[30] & ~ctx->gpr[5];
    }

label_8002E7FC:
    ctx->pc = 0x8002E7FCu;
    // 8002E7FC: lwz     r6, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002E800:
    ctx->pc = 0x8002E800u;
    // 8002E800: or   r5, r4, r30
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[30];
    }

label_8002E804:
    ctx->pc = 0x8002E804u;
    // 8002E804: lwz     r4, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E808:
    ctx->pc = 0x8002E808u;
    // 8002E808: nor   r7, r30, r30
    {
        ctx->gpr[7] = ~(ctx->gpr[30] | ctx->gpr[30]);
    }

label_8002E80C:
    ctx->pc = 0x8002E80Cu;
    // 8002E80C: stw     r5, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002E810:
    ctx->pc = 0x8002E810u;
    // 8002E810: and   r5, r6, r7
    {
        ctx->gpr[5] = ctx->gpr[6] & ctx->gpr[7];
    }

label_8002E814:
    ctx->pc = 0x8002E814u;
    // 8002E814: and   r4, r4, r7
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[7];
    }

label_8002E818:
    ctx->pc = 0x8002E818u;
    // 8002E818: lwz     r7, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8002E81C:
    ctx->pc = 0x8002E81Cu;
    // 8002E81C: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002E820:
    ctx->pc = 0x8002E820u;
    // 8002E820: stw     r8, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8002E824:
    ctx->pc = 0x8002E824u;
    // 8002E824: and   r3, r7, r6
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[6];
    }

label_8002E828:
    ctx->pc = 0x8002E828u;
    // 8002E828: stw     r5, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002E82C:
    ctx->pc = 0x8002E82Cu;
    // 8002E82C: stw     r4, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002E830:
    ctx->pc = 0x8002E830u;
    // 8002E830: bc    4, 2, 0x8002E840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E840;
        }
    }

label_8002E834:
    ctx->pc = 0x8002E834u;
    ctx->downcount -= 3;
    // 8002E834: lwz     r0, -31644(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31644);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E838:
    ctx->pc = 0x8002E838u;
    // 8002E838: or   r0, r0, r30
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[30];
    }

label_8002E83C:
    ctx->pc = 0x8002E83Cu;
    // 8002E83C: stw     r0, -31644(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E840:
    ctx->pc = 0x8002E840u;
    ctx->downcount -= 1;
    // 8002E840: bl      0x8001B3A4
    {
            ctx->lr = 0x8002E844u;
            ctx->pc = 0x8001B3A4u;
            return;
    }

label_8002E844:
    ctx->pc = 0x8002E844u;
    ctx->downcount -= 3;
    // 8002E844: lwz     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E848:
    ctx->pc = 0x8002E848u;
    // 8002E848: cmpwi   r0, 32
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

label_8002E84C:
    ctx->pc = 0x8002E84Cu;
    // 8002E84C: bc    4, 2, 0x8002E8A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E8A4;
        }
    }

label_8002E850:
    ctx->pc = 0x8002E850u;
    ctx->downcount -= 6;
    // 8002E850: lwz     r5, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E854:
    ctx->pc = 0x8002E854u;
    // 8002E854: cntlzw r0, r5
    {
        u32 v = ctx->gpr[5];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8002E858:
    ctx->pc = 0x8002E858u;
    // 8002E858: stw     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E85C:
    ctx->pc = 0x8002E85Cu;
    // 8002E85C: lwz     r4, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E860:
    ctx->pc = 0x8002E860u;
    // 8002E860: cmpwi   r4, 32
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002E864:
    ctx->pc = 0x8002E864u;
    // 8002E864: bc    12, 2, 0x8002E8A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E8A4;
        }
    }

label_8002E868:
    ctx->pc = 0x8002E868u;
    ctx->downcount -= 13;
    // 8002E868: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8002E86C:
    ctx->pc = 0x8002E86Cu;
    // 8002E86C: srw   r0, r0, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] >> sh);
    }

label_8002E870:
    ctx->pc = 0x8002E870u;
    // 8002E870: andc   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ~ctx->gpr[0];
    }

label_8002E874:
    ctx->pc = 0x8002E874u;
    // 8002E874: mulli   r4, r4, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)12);

label_8002E878:
    ctx->pc = 0x8002E878u;
    // 8002E878: stw     r0, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E87C:
    ctx->pc = 0x8002E87Cu;
    // 8002E87C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8002E880:
    ctx->pc = 0x8002E880u;
    // 8002E880: addi    r0, r3, -544
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-544);

label_8002E884:
    ctx->pc = 0x8002E884u;
    // 8002E884: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002E888:
    ctx->pc = 0x8002E888u;
    // 8002E888: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002E88C:
    ctx->pc = 0x8002E88Cu;
    // 8002E88C: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_8002E890:
    ctx->pc = 0x8002E890u;
    // 8002E890: bl      0x800050B4
    {
            ctx->lr = 0x8002E894u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002E894:
    ctx->pc = 0x8002E894u;
    ctx->downcount -= 4;
    // 8002E894: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002E898:
    ctx->pc = 0x8002E898u;
    // 8002E898: lwz     r3, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E89C:
    ctx->pc = 0x8002E89Cu;
    // 8002E89C: addi    r4, r4, -7348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7348);

label_8002E8A0:
    ctx->pc = 0x8002E8A0u;
    // 8002E8A0: bl      0x8001BBFC
    {
            ctx->lr = 0x8002E8A4u;
            ctx->pc = 0x8001BBFCu;
            return;
    }

label_8002E8A4:
    ctx->pc = 0x8002E8A4u;
    ctx->downcount -= 2;
    // 8002E8A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002E8A8:
    ctx->pc = 0x8002E8A8u;
    // 8002E8A8: bl      0x800206A8
    {
            ctx->lr = 0x8002E8ACu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002E8AC:
    ctx->pc = 0x8002E8ACu;
    ctx->downcount -= 8;
    // 8002E8AC: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E8B0:
    ctx->pc = 0x8002E8B0u;
    // 8002E8B0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8002E8B4:
    ctx->pc = 0x8002E8B4u;
    // 8002E8B4: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002E8B8:
    ctx->pc = 0x8002E8B8u;
    // 8002E8B8: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002E8BC:
    ctx->pc = 0x8002E8BCu;
    // 8002E8BC: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8002E8C0:
    ctx->pc = 0x8002E8C0u;
    // 8002E8C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002E8C4:
    ctx->pc = 0x8002E8C4u;
    // 8002E8C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002E8C8:
    ctx->pc = 0x8002E8C8u;
    ctx->downcount -= 7;
    // 8002E8C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002E8CC:
    ctx->pc = 0x8002E8CCu;
    // 8002E8CC: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E8D0:
    ctx->pc = 0x8002E8D0u;
    // 8002E8D0: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002E8D4:
    ctx->pc = 0x8002E8D4u;
    // 8002E8D4: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002E8D8:
    ctx->pc = 0x8002E8D8u;
    // 8002E8D8: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002E8DC:
    ctx->pc = 0x8002E8DCu;
    // 8002E8DC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002E8E0:
    ctx->pc = 0x8002E8E0u;
    // 8002E8E0: bl      0x80020680
    {
            ctx->lr = 0x8002E8E4u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002E8E4:
    ctx->pc = 0x8002E8E4u;
    ctx->downcount -= 25;
    // 8002E8E4: lwz     r5, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E8E8:
    ctx->pc = 0x8002E8E8u;
    // 8002E8E8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8002E8EC:
    ctx->pc = 0x8002E8ECu;
    // 8002E8EC: lwz     r6, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002E8F0:
    ctx->pc = 0x8002E8F0u;
    // 8002E8F0: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_8002E8F4:
    ctx->pc = 0x8002E8F4u;
    // 8002E8F4: lwz     r0, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E8F8:
    ctx->pc = 0x8002E8F8u;
    // 8002E8F8: or   r30, r30, r5
    {
        ctx->gpr[30] = ctx->gpr[30] | ctx->gpr[5];
    }

label_8002E8FC:
    ctx->pc = 0x8002E8FCu;
    // 8002E8FC: lwz     r5, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E900:
    ctx->pc = 0x8002E900u;
    // 8002E900: or   r6, r6, r0
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[0];
    }

label_8002E904:
    ctx->pc = 0x8002E904u;
    // 8002E904: lbz     r0, 12515(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12515);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002E908:
    ctx->pc = 0x8002E908u;
    // 8002E908: andc   r30, r30, r6
    {
        ctx->gpr[30] = ctx->gpr[30] & ~ctx->gpr[6];
    }

label_8002E90C:
    ctx->pc = 0x8002E90Cu;
    // 8002E90C: lwz     r6, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002E910:
    ctx->pc = 0x8002E910u;
    // 8002E910: or   r5, r5, r30
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[30];
    }

label_8002E914:
    ctx->pc = 0x8002E914u;
    // 8002E914: lwz     r4, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E918:
    ctx->pc = 0x8002E918u;
    // 8002E918: stw     r5, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002E91C:
    ctx->pc = 0x8002E91Cu;
    // 8002E91C: nor   r9, r30, r30
    {
        ctx->gpr[9] = ~(ctx->gpr[30] | ctx->gpr[30]);
    }

label_8002E920:
    ctx->pc = 0x8002E920u;
    // 8002E920: and   r5, r6, r9
    {
        ctx->gpr[5] = ctx->gpr[6] & ctx->gpr[9];
    }

label_8002E924:
    ctx->pc = 0x8002E924u;
    // 8002E924: and   r4, r4, r9
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[9];
    }

label_8002E928:
    ctx->pc = 0x8002E928u;
    // 8002E928: lwz     r7, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8002E92C:
    ctx->pc = 0x8002E92Cu;
    // 8002E92C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002E930:
    ctx->pc = 0x8002E930u;
    // 8002E930: stw     r8, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8002E934:
    ctx->pc = 0x8002E934u;
    // 8002E934: rlwinm. r0, r0, 0, 25, 25
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

label_8002E938:
    ctx->pc = 0x8002E938u;
    // 8002E938: stw     r5, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002E93C:
    ctx->pc = 0x8002E93Cu;
    // 8002E93C: and   r3, r7, r6
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[6];
    }

label_8002E940:
    ctx->pc = 0x8002E940u;
    // 8002E940: stw     r4, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002E944:
    ctx->pc = 0x8002E944u;
    // 8002E944: bc    4, 2, 0x8002E954
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E954;
        }
    }

label_8002E948:
    ctx->pc = 0x8002E948u;
    ctx->downcount -= 3;
    // 8002E948: lwz     r0, -31644(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31644);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E94C:
    ctx->pc = 0x8002E94Cu;
    // 8002E94C: or   r0, r0, r30
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[30];
    }

label_8002E950:
    ctx->pc = 0x8002E950u;
    // 8002E950: stw     r0, -31644(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E954:
    ctx->pc = 0x8002E954u;
    ctx->downcount -= 1;
    // 8002E954: bl      0x8001B3A4
    {
            ctx->lr = 0x8002E958u;
            ctx->pc = 0x8001B3A4u;
            return;
    }

label_8002E958:
    ctx->pc = 0x8002E958u;
    ctx->downcount -= 3;
    // 8002E958: lwz     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E95C:
    ctx->pc = 0x8002E95Cu;
    // 8002E95C: cmpwi   r0, 32
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

label_8002E960:
    ctx->pc = 0x8002E960u;
    // 8002E960: bc    4, 2, 0x8002E9B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002E9B8;
        }
    }

label_8002E964:
    ctx->pc = 0x8002E964u;
    ctx->downcount -= 6;
    // 8002E964: lwz     r5, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002E968:
    ctx->pc = 0x8002E968u;
    // 8002E968: cntlzw r0, r5
    {
        u32 v = ctx->gpr[5];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8002E96C:
    ctx->pc = 0x8002E96Cu;
    // 8002E96C: stw     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E970:
    ctx->pc = 0x8002E970u;
    // 8002E970: lwz     r4, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002E974:
    ctx->pc = 0x8002E974u;
    // 8002E974: cmpwi   r4, 32
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002E978:
    ctx->pc = 0x8002E978u;
    // 8002E978: bc    12, 2, 0x8002E9B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002E9B8;
        }
    }

label_8002E97C:
    ctx->pc = 0x8002E97Cu;
    ctx->downcount -= 13;
    // 8002E97C: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8002E980:
    ctx->pc = 0x8002E980u;
    // 8002E980: srw   r0, r0, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] >> sh);
    }

label_8002E984:
    ctx->pc = 0x8002E984u;
    // 8002E984: andc   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ~ctx->gpr[0];
    }

label_8002E988:
    ctx->pc = 0x8002E988u;
    // 8002E988: mulli   r4, r4, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)12);

label_8002E98C:
    ctx->pc = 0x8002E98Cu;
    // 8002E98C: stw     r0, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E990:
    ctx->pc = 0x8002E990u;
    // 8002E990: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8002E994:
    ctx->pc = 0x8002E994u;
    // 8002E994: addi    r0, r3, -544
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-544);

label_8002E998:
    ctx->pc = 0x8002E998u;
    // 8002E998: add   r3, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002E99C:
    ctx->pc = 0x8002E99Cu;
    // 8002E99C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002E9A0:
    ctx->pc = 0x8002E9A0u;
    // 8002E9A0: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_8002E9A4:
    ctx->pc = 0x8002E9A4u;
    // 8002E9A4: bl      0x800050B4
    {
            ctx->lr = 0x8002E9A8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002E9A8:
    ctx->pc = 0x8002E9A8u;
    ctx->downcount -= 4;
    // 8002E9A8: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002E9AC:
    ctx->pc = 0x8002E9ACu;
    // 8002E9AC: lwz     r3, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002E9B0:
    ctx->pc = 0x8002E9B0u;
    // 8002E9B0: addi    r4, r4, -7348
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-7348);

label_8002E9B4:
    ctx->pc = 0x8002E9B4u;
    // 8002E9B4: bl      0x8001BBFC
    {
            ctx->lr = 0x8002E9B8u;
            ctx->pc = 0x8001BBFCu;
            return;
    }

label_8002E9B8:
    ctx->pc = 0x8002E9B8u;
    ctx->downcount -= 2;
    // 8002E9B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002E9BC:
    ctx->pc = 0x8002E9BCu;
    // 8002E9BC: bl      0x800206A8
    {
            ctx->lr = 0x8002E9C0u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002E9C0:
    ctx->pc = 0x8002E9C0u;
    ctx->downcount -= 8;
    // 8002E9C0: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E9C4:
    ctx->pc = 0x8002E9C4u;
    // 8002E9C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8002E9C8:
    ctx->pc = 0x8002E9C8u;
    // 8002E9C8: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002E9CC:
    ctx->pc = 0x8002E9CCu;
    // 8002E9CC: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002E9D0:
    ctx->pc = 0x8002E9D0u;
    // 8002E9D0: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8002E9D4:
    ctx->pc = 0x8002E9D4u;
    // 8002E9D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002E9D8:
    ctx->pc = 0x8002E9D8u;
    // 8002E9D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002E9DC:
    ctx->pc = 0x8002E9DCu;
    ctx->downcount -= 19;
    // 8002E9DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002E9E0:
    ctx->pc = 0x8002E9E0u;
    // 8002E9E0: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_8002E9E4:
    ctx->pc = 0x8002E9E4u;
    // 8002E9E4: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002E9E8:
    ctx->pc = 0x8002E9E8u;
    // 8002E9E8: stwu     r1, -56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-56);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002E9EC:
    ctx->pc = 0x8002E9ECu;
    // 8002E9EC: stmw     r25, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8002E9F0:
    ctx->pc = 0x8002E9F0u;
    // 8002E9F0: addi    r31, r3, -560
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-560);

label_8002E9F4:
    ctx->pc = 0x8002E9F4u;
    // 8002E9F4: lwz     r0, -31656(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31656);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002E9F8:
    ctx->pc = 0x8002E9F8u;
    // 8002E9F8: cmpwi   r0, 0
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

label_8002E9FC:
    ctx->pc = 0x8002E9FCu;
    // 8002E9FC: bc    12, 2, 0x8002EA08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EA08;
        }
    }

label_8002EA00:
    ctx->pc = 0x8002EA00u;
    ctx->downcount -= 2;
    // 8002EA00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8002EA04:
    ctx->pc = 0x8002EA04u;
    // 8002EA04: b       0x8002EB18
    {
            goto label_8002EB18;
    }

label_8002EA08:
    ctx->pc = 0x8002EA08u;
    ctx->downcount -= 2;
    // 8002EA08: lwz     r3, -32552(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32552);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002EA0C:
    ctx->pc = 0x8002EA0Cu;
    // 8002EA0C: bl      0x8001CB90
    {
            ctx->lr = 0x8002EA10u;
            ctx->pc = 0x8001CB90u;
            return;
    }

label_8002EA10:
    ctx->pc = 0x8002EA10u;
    ctx->downcount -= 3;
    // 8002EA10: lwz     r3, -31616(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31616);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002EA14:
    ctx->pc = 0x8002EA14u;
    // 8002EA14: cmplwi  r3, 0x0000
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

label_8002EA18:
    ctx->pc = 0x8002EA18u;
    // 8002EA18: bc    12, 2, 0x8002EA20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EA20;
        }
    }

label_8002EA1C:
    ctx->pc = 0x8002EA1Cu;
    ctx->downcount -= 1;
    // 8002EA1C: bl      0x8002EEE4
    {
            ctx->lr = 0x8002EA20u;
            goto label_8002EEE4;
    }

label_8002EA20:
    ctx->pc = 0x8002EA20u;
    ctx->downcount -= 5;
    // 8002EA20: lwz     r0, -32216(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EA24:
    ctx->pc = 0x8002EA24u;
    // 8002EA24: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8002EA28:
    ctx->pc = 0x8002EA28u;
    // 8002EA28: stw     r3, -31656(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31656);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8002EA2C:
    ctx->pc = 0x8002EA2Cu;
    // 8002EA2C: cmplwi  r0, 0x0000
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

label_8002EA30:
    ctx->pc = 0x8002EA30u;
    // 8002EA30: bc    12, 2, 0x8002EABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EABC;
        }
    }

label_8002EA34:
    ctx->pc = 0x8002EA34u;
    ctx->downcount -= 1;
    // 8002EA34: bl      0x80024A8C
    {
            ctx->lr = 0x8002EA38u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_8002EA38:
    ctx->pc = 0x8002EA38u;
    ctx->downcount -= 4;
    // 8002EA38: addi    r25, r4, 0
    ctx->gpr[25] = ctx->gpr[4] + (u32)(s32)(0);

label_8002EA3C:
    ctx->pc = 0x8002EA3Cu;
    // 8002EA3C: addi    r26, r3, 0
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(0);

label_8002EA40:
    ctx->pc = 0x8002EA40u;
    // 8002EA40: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8002EA44:
    ctx->pc = 0x8002EA44u;
    // 8002EA44: bl      0x8000E1D4
    {
            ctx->lr = 0x8002EA48u;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8002EA48:
    ctx->pc = 0x8002EA48u;
    ctx->downcount -= 13;
    // 8002EA48: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_8002EA4C:
    ctx->pc = 0x8002EA4Cu;
    // 8002EA4C: addi    r27, r5, -1
    ctx->gpr[27] = ctx->gpr[5] + (u32)(s32)(-1);

label_8002EA50:
    ctx->pc = 0x8002EA50u;
    // 8002EA50: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8002EA54:
    ctx->pc = 0x8002EA54u;
    // 8002EA54: and   r6, r4, r27
    {
        ctx->gpr[6] = ctx->gpr[4] & ctx->gpr[27];
    }

label_8002EA58:
    ctx->pc = 0x8002EA58u;
    // 8002EA58: and   r4, r25, r27
    {
        ctx->gpr[4] = ctx->gpr[25] & ctx->gpr[27];
    }

label_8002EA5C:
    ctx->pc = 0x8002EA5Cu;
    // 8002EA5C: and   r5, r3, r28
    {
        ctx->gpr[5] = ctx->gpr[3] & ctx->gpr[28];
    }

label_8002EA60:
    ctx->pc = 0x8002EA60u;
    // 8002EA60: and   r0, r26, r28
    {
        ctx->gpr[0] = ctx->gpr[26] & ctx->gpr[28];
    }

label_8002EA64:
    ctx->pc = 0x8002EA64u;
    // 8002EA64: addc   r29, r4, r6
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[29] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8002EA68:
    ctx->pc = 0x8002EA68u;
    // 8002EA68: addi    r3, r26, 0
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(0);

label_8002EA6C:
    ctx->pc = 0x8002EA6Cu;
    // 8002EA6C: addi    r4, r25, 0
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(0);

label_8002EA70:
    ctx->pc = 0x8002EA70u;
    // 8002EA70: adde   r30, r0, r5
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[30] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8002EA74:
    ctx->pc = 0x8002EA74u;
    // 8002EA74: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8002EA78:
    ctx->pc = 0x8002EA78u;
    // 8002EA78: bl      0x8000E1D4
    {
            ctx->lr = 0x8002EA7Cu;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8002EA7C:
    ctx->pc = 0x8002EA7Cu;
    ctx->downcount -= 8;
    // 8002EA7C: and   r4, r4, r27
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[27];
    }

label_8002EA80:
    ctx->pc = 0x8002EA80u;
    // 8002EA80: and   r0, r3, r28
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[28];
    }

label_8002EA84:
    ctx->pc = 0x8002EA84u;
    // 8002EA84: addc   r29, r4, r29
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[29] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8002EA88:
    ctx->pc = 0x8002EA88u;
    // 8002EA88: addi    r3, r26, 0
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(0);

label_8002EA8C:
    ctx->pc = 0x8002EA8Cu;
    // 8002EA8C: addi    r4, r25, 0
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(0);

label_8002EA90:
    ctx->pc = 0x8002EA90u;
    // 8002EA90: adde   r30, r0, r30
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[30] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8002EA94:
    ctx->pc = 0x8002EA94u;
    // 8002EA94: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_8002EA98:
    ctx->pc = 0x8002EA98u;
    // 8002EA98: bl      0x8000E1D4
    {
            ctx->lr = 0x8002EA9Cu;
            ctx->pc = 0x8000E1D4u;
            return;
    }

label_8002EA9C:
    ctx->pc = 0x8002EA9Cu;
    ctx->downcount -= 8;
    // 8002EA9C: and   r0, r4, r27
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[27];
    }

label_8002EAA0:
    ctx->pc = 0x8002EAA0u;
    // 8002EAA0: addc   r5, r0, r29
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8002EAA4:
    ctx->pc = 0x8002EAA4u;
    // 8002EAA4: lis     r0, -4096
    ctx->gpr[0] = ((u32)(s32)(-4096) << 16);

label_8002EAA8:
    ctx->pc = 0x8002EAA8u;
    // 8002EAA8: li      r4, 16383
    ctx->gpr[4] = (u32)(s32)(16383);

label_8002EAAC:
    ctx->pc = 0x8002EAACu;
    // 8002EAAC: stw     r0, -31644(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31644);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EAB0:
    ctx->pc = 0x8002EAB0u;
    // 8002EAB0: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_8002EAB4:
    ctx->pc = 0x8002EAB4u;
    // 8002EAB4: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8002EAB8:
    ctx->pc = 0x8002EAB8u;
    // 8002EAB8: sth     r0, 12512(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12512);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002EABC:
    ctx->pc = 0x8002EABCu;
    ctx->downcount -= 18;
    // 8002EABC: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8002EAC0:
    ctx->pc = 0x8002EAC0u;
    // 8002EAC0: lhz     r0, 12512(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12512);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002EAC4:
    ctx->pc = 0x8002EAC4u;
    // 8002EAC4: rlwinm r0, r0, 8, 10, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x003FFF00u;
    }

label_8002EAC8:
    ctx->pc = 0x8002EAC8u;
    // 8002EAC8: oris    r0, r0, 0x4D00
    ctx->gpr[0] = ctx->gpr[0] | (0x4D00u << 16);

label_8002EACC:
    ctx->pc = 0x8002EACCu;
    // 8002EACC: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EAD0:
    ctx->pc = 0x8002EAD0u;
    // 8002EAD0: lhz     r0, 12512(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12512);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002EAD4:
    ctx->pc = 0x8002EAD4u;
    // 8002EAD4: rlwinm r0, r0, 8, 10, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x003FFF00u;
    }

label_8002EAD8:
    ctx->pc = 0x8002EAD8u;
    // 8002EAD8: oris    r0, r0, 0x4D40
    ctx->gpr[0] = ctx->gpr[0] | (0x4D40u << 16);

label_8002EADC:
    ctx->pc = 0x8002EADCu;
    // 8002EADC: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EAE0:
    ctx->pc = 0x8002EAE0u;
    // 8002EAE0: lhz     r0, 12512(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12512);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002EAE4:
    ctx->pc = 0x8002EAE4u;
    // 8002EAE4: rlwinm r0, r0, 8, 10, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x003FFF00u;
    }

label_8002EAE8:
    ctx->pc = 0x8002EAE8u;
    // 8002EAE8: oris    r0, r0, 0x4D80
    ctx->gpr[0] = ctx->gpr[0] | (0x4D80u << 16);

label_8002EAEC:
    ctx->pc = 0x8002EAECu;
    // 8002EAEC: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EAF0:
    ctx->pc = 0x8002EAF0u;
    // 8002EAF0: lhz     r0, 12512(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12512);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002EAF4:
    ctx->pc = 0x8002EAF4u;
    // 8002EAF4: rlwinm r0, r0, 8, 10, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x003FFF00u;
    }

label_8002EAF8:
    ctx->pc = 0x8002EAF8u;
    // 8002EAF8: oris    r0, r0, 0x4DC0
    ctx->gpr[0] = ctx->gpr[0] | (0x4DC0u << 16);

label_8002EAFC:
    ctx->pc = 0x8002EAFCu;
    // 8002EAFC: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EB00:
    ctx->pc = 0x8002EB00u;
    // 8002EB00: bl      0x8001BF8C
    {
            ctx->lr = 0x8002EB04u;
            ctx->pc = 0x8001BF8Cu;
            return;
    }

label_8002EB04:
    ctx->pc = 0x8002EB04u;
    ctx->downcount -= 3;
    // 8002EB04: lis     r3, -32738
    ctx->gpr[3] = ((u32)(s32)(-32738) << 16);

label_8002EB08:
    ctx->pc = 0x8002EB08u;
    // 8002EB08: addi    r3, r3, 6760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6760);

label_8002EB0C:
    ctx->pc = 0x8002EB0Cu;
    // 8002EB0C: bl      0x80021F4C
    {
            ctx->lr = 0x8002EB10u;
            ctx->pc = 0x80021F4Cu;
            return;
    }

label_8002EB10:
    ctx->pc = 0x8002EB10u;
    ctx->downcount -= 2;
    // 8002EB10: lis     r3, -4096
    ctx->gpr[3] = ((u32)(s32)(-4096) << 16);

label_8002EB14:
    ctx->pc = 0x8002EB14u;
    // 8002EB14: bl      0x8002E7B8
    {
            ctx->lr = 0x8002EB18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002E7B8u;
                return;
            }
            goto label_8002E7B8;
    }

label_8002EB18:
    ctx->pc = 0x8002EB18u;
    ctx->downcount -= 16;
    // 8002EB18: lmw     r25, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8002EB1C:
    ctx->pc = 0x8002EB1Cu;
    // 8002EB1C: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EB20:
    ctx->pc = 0x8002EB20u;
    // 8002EB20: addi    r1, r1, 56
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(56);

label_8002EB24:
    ctx->pc = 0x8002EB24u;
    // 8002EB24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002EB28:
    ctx->pc = 0x8002EB28u;
    // 8002EB28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002EB2C:
    ctx->pc = 0x8002EB2Cu;
    ctx->downcount -= 16;
    // 8002EB2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002EB30:
    ctx->pc = 0x8002EB30u;
    // 8002EB30: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EB34:
    ctx->pc = 0x8002EB34u;
    // 8002EB34: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002EB38:
    ctx->pc = 0x8002EB38u;
    // 8002EB38: stmw     r22, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8002EB3C:
    ctx->pc = 0x8002EB3Cu;
    // 8002EB3C: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002EB40:
    ctx->pc = 0x8002EB40u;
    // 8002EB40: bl      0x80020680
    {
            ctx->lr = 0x8002EB44u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002EB44:
    ctx->pc = 0x8002EB44u;
    ctx->downcount -= 14;
    // 8002EB44: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8002EB48:
    ctx->pc = 0x8002EB48u;
    // 8002EB48: mulli   r5, r25, 12
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[25] * (s64)(s32)12);

label_8002EB4C:
    ctx->pc = 0x8002EB4Cu;
    // 8002EB4C: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_8002EB50:
    ctx->pc = 0x8002EB50u;
    // 8002EB50: addi    r0, r4, -544
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-544);

label_8002EB54:
    ctx->pc = 0x8002EB54u;
    // 8002EB54: add   r28, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_8002EB58:
    ctx->pc = 0x8002EB58u;
    // 8002EB58: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002EB5C:
    ctx->pc = 0x8002EB5Cu;
    // 8002EB5C: lis     r5, -32765
    ctx->gpr[5] = ((u32)(s32)(-32765) << 16);

label_8002EB60:
    ctx->pc = 0x8002EB60u;
    // 8002EB60: addi    r26, r3, 0
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(0);

label_8002EB64:
    ctx->pc = 0x8002EB64u;
    // 8002EB64: addi    r22, r4, -7768
    ctx->gpr[22] = ctx->gpr[4] + (u32)(s32)(-7768);

label_8002EB68:
    ctx->pc = 0x8002EB68u;
    // 8002EB68: addi    r31, r5, -6536
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(-6536);

label_8002EB6C:
    ctx->pc = 0x8002EB6Cu;
    // 8002EB6C: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8002EB70:
    ctx->pc = 0x8002EB70u;
    // 8002EB70: lis     r30, -32768
    ctx->gpr[30] = ((u32)(s32)(-32768) << 16);

label_8002EB74:
    ctx->pc = 0x8002EB74u;
    ctx->downcount -= 4;
    // 8002EB74: lwz     r0, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EB78:
    // 8002EB78: srw   r27, r30, r25
    {
        u32 sh = ctx->gpr[25] & 0x3Fu;
        ctx->gpr[27] = sh > 31 ? 0u : (ctx->gpr[30] >> sh);
    }

label_8002EB7C:
    // 8002EB7C: and.   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[27];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EB80:
    // 8002EB80: bc    12, 2, 0x8002EBA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EBA8;
        }
    }

label_8002EB84:
    ctx->downcount -= 2;
    // 8002EB84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002EB88:
    // 8002EB88: bl      0x8002E7B8
    {
            ctx->lr = 0x8002EB8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002E7B8u;
                return;
            }
            goto label_8002E7B8;
    }

label_8002EB8C:
    ctx->downcount -= 6;
    // 8002EB8C: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_8002EB90:
    ctx->pc = 0x8002EB90u;
    // 8002EB90: stb     r0, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002EB94:
    // 8002EB94: addi    r3, r23, 0
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(0);

label_8002EB98:
    // 8002EB98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002EB9C:
    // 8002EB9C: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_8002EBA0:
    // 8002EBA0: bl      0x800050B4
    {
            ctx->lr = 0x8002EBA4u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002EBA4:
    ctx->downcount -= 1;
    // 8002EBA4: b       0x8002EDF8
    {
            goto label_8002EDF8;
    }

label_8002EBA8:
    ctx->pc = 0x8002EBA8u;
    ctx->downcount -= 3;
    // 8002EBA8: lwz     r0, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EBAC:
    // 8002EBAC: and.   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[27];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EBB0:
    // 8002EBB0: bc    4, 2, 0x8002EBC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002EBC0;
        }
    }

label_8002EBB4:
    ctx->pc = 0x8002EBB4u;
    ctx->downcount -= 3;
    // 8002EBB4: lwz     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EBB8:
    // 8002EBB8: cmpw    r0, r25
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002EBBC:
    // 8002EBBC: bc    4, 2, 0x8002EBDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002EBDC;
        }
    }

label_8002EBC0:
    ctx->downcount -= 6;
    // 8002EBC0: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_8002EBC4:
    ctx->pc = 0x8002EBC4u;
    // 8002EBC4: stb     r0, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002EBC8:
    // 8002EBC8: addi    r3, r23, 0
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(0);

label_8002EBCC:
    // 8002EBCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002EBD0:
    // 8002EBD0: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_8002EBD4:
    // 8002EBD4: bl      0x800050B4
    {
            ctx->lr = 0x8002EBD8u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002EBD8:
    ctx->downcount -= 1;
    // 8002EBD8: b       0x8002EDF8
    {
            goto label_8002EDF8;
    }

label_8002EBDC:
    ctx->pc = 0x8002EBDCu;
    ctx->downcount -= 3;
    // 8002EBDC: lwz     r0, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EBE0:
    // 8002EBE0: and.   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[27];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EBE4:
    // 8002EBE4: bc    4, 2, 0x8002EC04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002EC04;
        }
    }

label_8002EBE8:
    ctx->downcount -= 6;
    // 8002EBE8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8002EBEC:
    ctx->pc = 0x8002EBECu;
    // 8002EBEC: stb     r0, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002EBF0:
    // 8002EBF0: addi    r3, r23, 0
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(0);

label_8002EBF4:
    // 8002EBF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002EBF8:
    // 8002EBF8: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_8002EBFC:
    // 8002EBFC: bl      0x800050B4
    {
            ctx->lr = 0x8002EC00u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002EC00:
    ctx->downcount -= 1;
    // 8002EC00: b       0x8002EDF8
    {
            goto label_8002EDF8;
    }

label_8002EC04:
    ctx->downcount -= 2;
    // 8002EC04: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8002EC08:
    // 8002EC08: bl      0x8001A668
    {
            ctx->lr = 0x8002EC0Cu;
            ctx->pc = 0x8001A668u;
            return;
    }

label_8002EC0C:
    ctx->downcount -= 2;
    // 8002EC0C: cmpwi   r3, 0
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

label_8002EC10:
    // 8002EC10: bc    12, 2, 0x8002EC30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EC30;
        }
    }

label_8002EC14:
    ctx->downcount -= 6;
    // 8002EC14: li      r0, -3
    ctx->gpr[0] = (u32)(s32)(-3);

label_8002EC18:
    ctx->pc = 0x8002EC18u;
    // 8002EC18: stb     r0, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002EC1C:
    // 8002EC1C: addi    r3, r23, 0
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(0);

label_8002EC20:
    // 8002EC20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002EC24:
    // 8002EC24: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_8002EC28:
    // 8002EC28: bl      0x800050B4
    {
            ctx->lr = 0x8002EC2Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002EC2C:
    ctx->downcount -= 1;
    // 8002EC2C: b       0x8002EDF8
    {
            goto label_8002EDF8;
    }

label_8002EC30:
    ctx->downcount -= 2;
    // 8002EC30: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8002EC34:
    // 8002EC34: bl      0x8001B1FC
    {
            ctx->lr = 0x8002EC38u;
            ctx->pc = 0x8001B1FCu;
            return;
    }

label_8002EC38:
    ctx->downcount -= 2;
    // 8002EC38: rlwinm. r0, r3, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EC3C:
    // 8002EC3C: bc    12, 2, 0x8002ED14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002ED14;
        }
    }

label_8002EC40:
    ctx->downcount -= 3;
    // 8002EC40: addi    r3, r25, 0
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(0);

label_8002EC44:
    // 8002EC44: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_8002EC48:
    // 8002EC48: bl      0x8001B4E4
    {
            ctx->lr = 0x8002EC4Cu;
            ctx->pc = 0x8001B4E4u;
            return;
    }

label_8002EC4C:
    ctx->pc = 0x8002EC4Cu;
    ctx->downcount -= 3;
    // 8002EC4C: lwz     r0, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EC50:
    // 8002EC50: and.   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[27];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EC54:
    // 8002EC54: bc    12, 2, 0x8002EC94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EC94;
        }
    }

label_8002EC58:
    ctx->downcount -= 6;
    // 8002EC58: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002EC5C:
    ctx->pc = 0x8002EC5Cu;
    // 8002EC5C: stb     r0, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002EC60:
    // 8002EC60: addi    r3, r23, 0
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(0);

label_8002EC64:
    // 8002EC64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002EC68:
    // 8002EC68: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_8002EC6C:
    // 8002EC6C: bl      0x800050B4
    {
            ctx->lr = 0x8002EC70u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002EC70:
    ctx->pc = 0x8002EC70u;
    ctx->downcount -= 3;
    // 8002EC70: lwz     r3, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002EC74:
    // 8002EC74: and.   r0, r3, r27
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[27];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EC78:
    // 8002EC78: bc    4, 2, 0x8002EDF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002EDF8;
        }
    }

label_8002EC7C:
    ctx->downcount -= 5;
    // 8002EC7C: or   r0, r3, r27
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[27];
    }

label_8002EC80:
    ctx->pc = 0x8002EC80u;
    // 8002EC80: stw     r0, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EC84:
    // 8002EC84: addi    r3, r25, 0
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(0);

label_8002EC88:
    // 8002EC88: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8002EC8C:
    // 8002EC8C: bl      0x8001BBFC
    {
            ctx->lr = 0x8002EC90u;
            ctx->pc = 0x8001BBFCu;
            return;
    }

label_8002EC90:
    ctx->downcount -= 1;
    // 8002EC90: b       0x8002EDF8
    {
            goto label_8002EDF8;
    }

label_8002EC94:
    ctx->downcount -= 1;
    // 8002EC94: bl      0x80020680
    {
            ctx->lr = 0x8002EC98u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002EC98:
    ctx->downcount -= 3;
    // 8002EC98: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_8002EC9C:
    // 8002EC9C: addi    r3, r27, 0
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(0);

label_8002ECA0:
    // 8002ECA0: bl      0x8001B3A4
    {
            ctx->lr = 0x8002ECA4u;
            ctx->pc = 0x8001B3A4u;
            return;
    }

label_8002ECA4:
    ctx->pc = 0x8002ECA4u;
    ctx->downcount -= 19;
    // 8002ECA4: lwz     r0, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002ECA8:
    // 8002ECA8: nor   r9, r27, r27
    {
        ctx->gpr[9] = ~(ctx->gpr[27] | ctx->gpr[27]);
    }

label_8002ECAC:
    ctx->pc = 0x8002ECACu;
    // 8002ECAC: lwz     r6, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002ECB0:
    // 8002ECB0: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8002ECB4:
    ctx->pc = 0x8002ECB4u;
    // 8002ECB4: lwz     r5, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002ECB8:
    ctx->pc = 0x8002ECB8u;
    // 8002ECB8: lwz     r4, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002ECBC:
    // 8002ECBC: and   r8, r0, r9
    {
        ctx->gpr[8] = ctx->gpr[0] & ctx->gpr[9];
    }

label_8002ECC0:
    ctx->pc = 0x8002ECC0u;
    // 8002ECC0: lwz     r0, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002ECC4:
    // 8002ECC4: and   r7, r6, r9
    {
        ctx->gpr[7] = ctx->gpr[6] & ctx->gpr[9];
    }

label_8002ECC8:
    // 8002ECC8: and   r6, r5, r9
    {
        ctx->gpr[6] = ctx->gpr[5] & ctx->gpr[9];
    }

label_8002ECCC:
    // 8002ECCC: and   r5, r4, r9
    {
        ctx->gpr[5] = ctx->gpr[4] & ctx->gpr[9];
    }

label_8002ECD0:
    ctx->pc = 0x8002ECD0u;
    // 8002ECD0: stw     r8, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8002ECD4:
    // 8002ECD4: and   r0, r0, r9
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[9];
    }

label_8002ECD8:
    ctx->pc = 0x8002ECD8u;
    // 8002ECD8: stw     r7, -31640(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31640);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8002ECDC:
    // 8002ECDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002ECE0:
    ctx->pc = 0x8002ECE0u;
    // 8002ECE0: stw     r6, -31636(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31636);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8002ECE4:
    ctx->pc = 0x8002ECE4u;
    // 8002ECE4: stw     r5, -31632(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31632);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002ECE8:
    ctx->pc = 0x8002ECE8u;
    // 8002ECE8: stw     r0, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002ECEC:
    // 8002ECEC: bl      0x800232DC
    {
            ctx->lr = 0x8002ECF0u;
            ctx->pc = 0x800232DCu;
            return;
    }

label_8002ECF0:
    ctx->downcount -= 2;
    // 8002ECF0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8002ECF4:
    // 8002ECF4: bl      0x800206A8
    {
            ctx->lr = 0x8002ECF8u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002ECF8:
    ctx->downcount -= 6;
    // 8002ECF8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8002ECFC:
    ctx->pc = 0x8002ECFCu;
    // 8002ECFC: stb     r0, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002ED00:
    // 8002ED00: addi    r3, r23, 0
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(0);

label_8002ED04:
    // 8002ED04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002ED08:
    // 8002ED08: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_8002ED0C:
    // 8002ED0C: bl      0x800050B4
    {
            ctx->lr = 0x8002ED10u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002ED10:
    ctx->downcount -= 1;
    // 8002ED10: b       0x8002EDF8
    {
            goto label_8002EDF8;
    }

label_8002ED14:
    ctx->downcount -= 2;
    // 8002ED14: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8002ED18:
    // 8002ED18: bl      0x8001BA38
    {
            ctx->lr = 0x8002ED1Cu;
            ctx->pc = 0x8001BA38u;
            return;
    }

label_8002ED1C:
    ctx->downcount -= 2;
    // 8002ED1C: rlwinm. r0, r3, 0, 2, 2
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x20000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002ED20:
    // 8002ED20: bc    4, 2, 0x8002ED28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002ED28;
        }
    }

label_8002ED24:
    ctx->downcount -= 1;
    // 8002ED24: or   r24, r24, r27
    {
        ctx->gpr[24] = ctx->gpr[24] | ctx->gpr[27];
    }

label_8002ED28:
    ctx->downcount -= 3;
    // 8002ED28: addi    r3, r25, 0
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(0);

label_8002ED2C:
    // 8002ED2C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_8002ED30:
    // 8002ED30: bl      0x8001B4E4
    {
            ctx->lr = 0x8002ED34u;
            ctx->pc = 0x8001B4E4u;
            return;
    }

label_8002ED34:
    ctx->downcount -= 2;
    // 8002ED34: cmpwi   r3, 0
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

label_8002ED38:
    // 8002ED38: bc    4, 2, 0x8002ED58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002ED58;
        }
    }

label_8002ED3C:
    ctx->downcount -= 6;
    // 8002ED3C: li      r0, -3
    ctx->gpr[0] = (u32)(s32)(-3);

label_8002ED40:
    ctx->pc = 0x8002ED40u;
    // 8002ED40: stb     r0, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002ED44:
    // 8002ED44: addi    r3, r23, 0
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(0);

label_8002ED48:
    // 8002ED48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002ED4C:
    // 8002ED4C: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_8002ED50:
    // 8002ED50: bl      0x800050B4
    {
            ctx->lr = 0x8002ED54u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002ED54:
    ctx->downcount -= 1;
    // 8002ED54: b       0x8002EDF8
    {
            goto label_8002EDF8;
    }

label_8002ED58:
    ctx->pc = 0x8002ED58u;
    ctx->downcount -= 3;
    // 8002ED58: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002ED5C:
    // 8002ED5C: rlwinm. r0, r0, 0, 0, 0
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x80000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002ED60:
    // 8002ED60: bc    12, 2, 0x8002ED80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002ED80;
        }
    }

label_8002ED64:
    ctx->downcount -= 6;
    // 8002ED64: li      r0, -3
    ctx->gpr[0] = (u32)(s32)(-3);

label_8002ED68:
    ctx->pc = 0x8002ED68u;
    // 8002ED68: stb     r0, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002ED6C:
    // 8002ED6C: addi    r3, r23, 0
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(0);

label_8002ED70:
    // 8002ED70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002ED74:
    // 8002ED74: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_8002ED78:
    // 8002ED78: bl      0x800050B4
    {
            ctx->lr = 0x8002ED7Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002ED7C:
    ctx->downcount -= 1;
    // 8002ED7C: b       0x8002EDF8
    {
            goto label_8002EDF8;
    }

label_8002ED80:
    ctx->pc = 0x8002ED80u;
    ctx->downcount -= 7;
    // 8002ED80: lwz     r12, -32532(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32532);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8002ED84:
    // 8002ED84: addi    r3, r25, 0
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(0);

label_8002ED88:
    // 8002ED88: addi    r4, r23, 0
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(0);

label_8002ED8C:
    ctx->pc = 0x8002ED8Cu;
    // 8002ED8C: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_8002ED90:
    // 8002ED90: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_8002ED94:
    ctx->pc = 0x8002ED94u;
    // 8002ED94: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8002ED98u;
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002ED98:
    ctx->pc = 0x8002ED98u;
    ctx->downcount -= 3;
    // 8002ED98: lhz     r0, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002ED9C:
    // 8002ED9C: rlwinm. r0, r0, 0, 18, 18
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

label_8002EDA0:
    // 8002EDA0: bc    12, 2, 0x8002EDE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EDE4;
        }
    }

label_8002EDA4:
    ctx->downcount -= 6;
    // 8002EDA4: li      r0, -3
    ctx->gpr[0] = (u32)(s32)(-3);

label_8002EDA8:
    ctx->pc = 0x8002EDA8u;
    // 8002EDA8: stb     r0, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002EDAC:
    // 8002EDAC: addi    r3, r23, 0
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(0);

label_8002EDB0:
    // 8002EDB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002EDB4:
    // 8002EDB4: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_8002EDB8:
    // 8002EDB8: bl      0x800050B4
    {
            ctx->lr = 0x8002EDBCu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8002EDBC:
    ctx->downcount -= 9;
    // 8002EDBC: addi    r3, r25, 0
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(0);

label_8002EDC0:
    // 8002EDC0: addi    r6, r28, 0
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(0);

label_8002EDC4:
    // 8002EDC4: addi    r8, r22, 0
    ctx->gpr[8] = ctx->gpr[22] + (u32)(s32)(0);

label_8002EDC8:
    // 8002EDC8: addi    r4, r13, -32528
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-32528);

label_8002EDCC:
    // 8002EDCC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8002EDD0:
    // 8002EDD0: li      r7, 10
    ctx->gpr[7] = (u32)(s32)(10);

label_8002EDD4:
    // 8002EDD4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8002EDD8:
    // 8002EDD8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8002EDDC:
    // 8002EDDC: bl      0x8001B634
    {
            ctx->lr = 0x8002EDE0u;
            ctx->pc = 0x8001B634u;
            return;
    }

label_8002EDE0:
    ctx->downcount -= 1;
    // 8002EDE0: b       0x8002EDF8
    {
            goto label_8002EDF8;
    }

label_8002EDE4:
    ctx->downcount -= 5;
    // 8002EDE4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002EDE8:
    ctx->pc = 0x8002EDE8u;
    // 8002EDE8: stb     r0, 10(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002EDEC:
    ctx->pc = 0x8002EDECu;
    // 8002EDEC: lhz     r0, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002EDF0:
    // 8002EDF0: rlwinm r0, r0, 0, 25, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF7Fu;
    }

label_8002EDF4:
    ctx->pc = 0x8002EDF4u;
    // 8002EDF4: sth     r0, 0(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002EDF8:
    ctx->downcount -= 5;
    // 8002EDF8: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8002EDFC:
    // 8002EDFC: cmpwi   r25, 4
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

label_8002EE00:
    // 8002EE00: addi    r28, r28, 12
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(12);

label_8002EE04:
    // 8002EE04: addi    r23, r23, 12
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(12);

label_8002EE08:
    // 8002EE08: bc    12, 0, 0x8002EB74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002EB74u;
                return;
            }
            goto label_8002EB74;
        }
    }

label_8002EE0C:
    ctx->pc = 0x8002EE0Cu;
    ctx->downcount -= 2;
    // 8002EE0C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8002EE10:
    ctx->pc = 0x8002EE10u;
    // 8002EE10: bl      0x800206A8
    {
            ctx->lr = 0x8002EE14u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002EE14:
    ctx->pc = 0x8002EE14u;
    ctx->downcount -= 17;
    // 8002EE14: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8002EE18:
    ctx->pc = 0x8002EE18u;
    // 8002EE18: lmw     r22, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8002EE1C:
    ctx->pc = 0x8002EE1Cu;
    // 8002EE1C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EE20:
    ctx->pc = 0x8002EE20u;
    // 8002EE20: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8002EE24:
    ctx->pc = 0x8002EE24u;
    // 8002EE24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002EE28:
    ctx->pc = 0x8002EE28u;
    // 8002EE28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002EE2C:
    ctx->pc = 0x8002EE2Cu;
    ctx->downcount -= 9;
    // 8002EE2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002EE30:
    ctx->pc = 0x8002EE30u;
    // 8002EE30: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EE34:
    ctx->pc = 0x8002EE34u;
    // 8002EE34: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002EE38:
    ctx->pc = 0x8002EE38u;
    // 8002EE38: stw     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002EE3C:
    ctx->pc = 0x8002EE3Cu;
    // 8002EE3C: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002EE40:
    ctx->pc = 0x8002EE40u;
    // 8002EE40: addi    r30, r4, 0
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(0);

label_8002EE44:
    ctx->pc = 0x8002EE44u;
    // 8002EE44: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8002EE48:
    ctx->pc = 0x8002EE48u;
    // 8002EE48: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_8002EE4C:
    ctx->pc = 0x8002EE4Cu;
    // 8002EE4C: bl      0x80020680
    {
            ctx->lr = 0x8002EE50u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002EE50:
    ctx->pc = 0x8002EE50u;
    ctx->downcount -= 6;
    // 8002EE50: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8002EE54:
    ctx->pc = 0x8002EE54u;
    // 8002EE54: lwz     r4, -31652(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31652);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002EE58:
    ctx->pc = 0x8002EE58u;
    // 8002EE58: srw   r0, r0, r29
    {
        u32 sh = ctx->gpr[29] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] >> sh);
    }

label_8002EE5C:
    ctx->pc = 0x8002EE5Cu;
    // 8002EE5C: and.   r0, r4, r0
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

label_8002EE60:
    ctx->pc = 0x8002EE60u;
    // 8002EE60: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8002EE64:
    ctx->pc = 0x8002EE64u;
    // 8002EE64: bc    12, 2, 0x8002EEC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EEC0;
        }
    }

label_8002EE68:
    ctx->pc = 0x8002EE68u;
    ctx->downcount -= 2;
    // 8002EE68: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8002EE6C:
    ctx->pc = 0x8002EE6Cu;
    // 8002EE6C: bl      0x8001BA38
    {
            ctx->lr = 0x8002EE70u;
            ctx->pc = 0x8001BA38u;
            return;
    }

label_8002EE70:
    ctx->pc = 0x8002EE70u;
    ctx->downcount -= 2;
    // 8002EE70: rlwinm. r0, r3, 0, 2, 2
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x20000000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EE74:
    ctx->pc = 0x8002EE74u;
    // 8002EE74: bc    4, 2, 0x8002EEC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002EEC0;
        }
    }

label_8002EE78:
    ctx->pc = 0x8002EE78u;
    ctx->downcount -= 3;
    // 8002EE78: lwz     r0, -32536(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32536);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EE7C:
    ctx->pc = 0x8002EE7Cu;
    // 8002EE7C: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002EE80:
    ctx->pc = 0x8002EE80u;
    // 8002EE80: bc    4, 0, 0x8002EE90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002EE90;
        }
    }

label_8002EE84:
    ctx->pc = 0x8002EE84u;
    ctx->downcount -= 2;
    // 8002EE84: cmplwi  r30, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002EE88:
    ctx->pc = 0x8002EE88u;
    // 8002EE88: bc    4, 2, 0x8002EE90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002EE90;
        }
    }

label_8002EE8C:
    ctx->pc = 0x8002EE8Cu;
    ctx->downcount -= 1;
    // 8002EE8C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8002EE90:
    ctx->pc = 0x8002EE90u;
    ctx->downcount -= 4;
    // 8002EE90: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8002EE94:
    ctx->pc = 0x8002EE94u;
    // 8002EE94: lbz     r0, 12515(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12515);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002EE98:
    ctx->pc = 0x8002EE98u;
    // 8002EE98: rlwinm. r0, r0, 0, 26, 26
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

label_8002EE9C:
    ctx->pc = 0x8002EE9Cu;
    // 8002EE9C: bc    12, 2, 0x8002EEA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EEA4;
        }
    }

label_8002EEA0:
    ctx->pc = 0x8002EEA0u;
    ctx->downcount -= 1;
    // 8002EEA0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8002EEA4:
    ctx->pc = 0x8002EEA4u;
    ctx->downcount -= 6;
    // 8002EEA4: lwz     r4, -32540(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32540);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002EEA8:
    ctx->pc = 0x8002EEA8u;
    // 8002EEA8: rlwinm r0, r30, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000003u;
    }

label_8002EEAC:
    ctx->pc = 0x8002EEACu;
    // 8002EEAC: addi    r3, r29, 0
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(0);

label_8002EEB0:
    ctx->pc = 0x8002EEB0u;
    // 8002EEB0: oris    r4, r4, 0x0040
    ctx->gpr[4] = ctx->gpr[4] | (0x0040u << 16);

label_8002EEB4:
    ctx->pc = 0x8002EEB4u;
    // 8002EEB4: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8002EEB8:
    ctx->pc = 0x8002EEB8u;
    // 8002EEB8: bl      0x8001B278
    {
            ctx->lr = 0x8002EEBCu;
            ctx->pc = 0x8001B278u;
            return;
    }

label_8002EEBC:
    ctx->pc = 0x8002EEBCu;
    ctx->downcount -= 1;
    // 8002EEBC: bl      0x8001B28C
    {
            ctx->lr = 0x8002EEC0u;
            ctx->pc = 0x8001B28Cu;
            return;
    }

label_8002EEC0:
    ctx->pc = 0x8002EEC0u;
    ctx->downcount -= 2;
    // 8002EEC0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002EEC4:
    ctx->pc = 0x8002EEC4u;
    // 8002EEC4: bl      0x800206A8
    {
            ctx->lr = 0x8002EEC8u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002EEC8:
    ctx->pc = 0x8002EEC8u;
    ctx->downcount -= 8;
    // 8002EEC8: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EECC:
    ctx->pc = 0x8002EECCu;
    // 8002EECC: lwz     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002EED0:
    ctx->pc = 0x8002EED0u;
    // 8002EED0: lwz     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002EED4:
    ctx->pc = 0x8002EED4u;
    // 8002EED4: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8002EED8:
    ctx->pc = 0x8002EED8u;
    // 8002EED8: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_8002EEDC:
    ctx->pc = 0x8002EEDCu;
    // 8002EEDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002EEE0:
    ctx->pc = 0x8002EEE0u;
    // 8002EEE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002EEE4:
    ctx->pc = 0x8002EEE4u;
    ctx->downcount -= 4;
    // 8002EEE4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002EEE8:
    ctx->pc = 0x8002EEE8u;
    // 8002EEE8: cmpwi   r3, 1
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

label_8002EEEC:
    ctx->pc = 0x8002EEECu;
    // 8002EEEC: stw     r0, -31616(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31616);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EEF0:
    ctx->pc = 0x8002EEF0u;
    // 8002EEF0: bc    12, 2, 0x8002EF20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EF20;
        }
    }

label_8002EEF4:
    ctx->pc = 0x8002EEF4u;
    ctx->downcount -= 1;
    // 8002EEF4: bc    4, 0, 0x8002EF04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002EF04;
        }
    }

label_8002EEF8:
    ctx->pc = 0x8002EEF8u;
    ctx->downcount -= 2;
    // 8002EEF8: cmpwi   r3, 0
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

label_8002EEFC:
    ctx->pc = 0x8002EEFCu;
    // 8002EEFC: bc    4, 0, 0x8002EF10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002EF10;
        }
    }

label_8002EF00:
    ctx->pc = 0x8002EF00u;
    ctx->downcount -= 1;
    // 8002EF00: b       0x8002EF3C
    {
            goto label_8002EF3C;
    }

label_8002EF04:
    ctx->pc = 0x8002EF04u;
    ctx->downcount -= 2;
    // 8002EF04: cmpwi   r3, 6
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002EF08:
    ctx->pc = 0x8002EF08u;
    // 8002EF08: bc    4, 0, 0x8002EF3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002EF3C;
        }
    }

label_8002EF0C:
    ctx->pc = 0x8002EF0Cu;
    ctx->downcount -= 1;
    // 8002EF0C: b       0x8002EF30
    {
            goto label_8002EF30;
    }

label_8002EF10:
    ctx->pc = 0x8002EF10u;
    ctx->downcount -= 4;
    // 8002EF10: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002EF14:
    ctx->pc = 0x8002EF14u;
    // 8002EF14: addi    r0, r4, -4284
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-4284);

label_8002EF18:
    ctx->pc = 0x8002EF18u;
    // 8002EF18: stw     r0, -32532(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32532);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EF1C:
    ctx->pc = 0x8002EF1Cu;
    // 8002EF1C: b       0x8002EF3C
    {
            goto label_8002EF3C;
    }

label_8002EF20:
    ctx->pc = 0x8002EF20u;
    ctx->downcount -= 4;
    // 8002EF20: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002EF24:
    ctx->pc = 0x8002EF24u;
    // 8002EF24: addi    r0, r4, -3912
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-3912);

label_8002EF28:
    ctx->pc = 0x8002EF28u;
    // 8002EF28: stw     r0, -32532(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32532);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EF2C:
    ctx->pc = 0x8002EF2Cu;
    // 8002EF2C: b       0x8002EF3C
    {
            goto label_8002EF3C;
    }

label_8002EF30:
    ctx->pc = 0x8002EF30u;
    ctx->downcount -= 3;
    // 8002EF30: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_8002EF34:
    ctx->pc = 0x8002EF34u;
    // 8002EF34: addi    r0, r4, -3540
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-3540);

label_8002EF38:
    ctx->pc = 0x8002EF38u;
    // 8002EF38: stw     r0, -32532(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32532);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002EF3C:
    ctx->pc = 0x8002EF3Cu;
    ctx->downcount -= 2;
    // 8002EF3C: stw     r3, -32536(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32536);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8002EF40:
    ctx->pc = 0x8002EF40u;
    // 8002EF40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002EF44:
    ctx->pc = 0x8002EF44u;
    ctx->downcount -= 5;
    // 8002EF44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002EF48:
    ctx->pc = 0x8002EF48u;
    // 8002EF48: sth     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_8002EF4C:
    ctx->pc = 0x8002EF4Cu;
    // 8002EF4C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EF50:
    ctx->pc = 0x8002EF50u;
    // 8002EF50: rlwinm. r0, r0, 16, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EF54:
    ctx->pc = 0x8002EF54u;
    // 8002EF54: bc    12, 2, 0x8002EF5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EF5C;
        }
    }

label_8002EF58:
    ctx->pc = 0x8002EF58u;
    ctx->downcount -= 1;
    // 8002EF58: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_8002EF5C:
    ctx->pc = 0x8002EF5Cu;
    ctx->downcount -= 6;
    // 8002EF5C: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002EF60:
    ctx->pc = 0x8002EF60u;
    // 8002EF60: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8002EF64:
    ctx->pc = 0x8002EF64u;
    // 8002EF64: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002EF68:
    ctx->pc = 0x8002EF68u;
    // 8002EF68: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EF6C:
    ctx->pc = 0x8002EF6Cu;
    // 8002EF6C: rlwinm. r0, r0, 16, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EF70:
    ctx->pc = 0x8002EF70u;
    // 8002EF70: bc    12, 2, 0x8002EF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EF7C;
        }
    }

label_8002EF74:
    ctx->pc = 0x8002EF74u;
    ctx->downcount -= 2;
    // 8002EF74: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_8002EF78:
    ctx->pc = 0x8002EF78u;
    // 8002EF78: b       0x8002EF80
    {
            goto label_8002EF80;
    }

label_8002EF7C:
    ctx->pc = 0x8002EF7Cu;
    ctx->downcount -= 1;
    // 8002EF7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002EF80:
    ctx->pc = 0x8002EF80u;
    ctx->downcount -= 6;
    // 8002EF80: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002EF84:
    ctx->pc = 0x8002EF84u;
    // 8002EF84: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8002EF88:
    ctx->pc = 0x8002EF88u;
    // 8002EF88: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002EF8C:
    ctx->pc = 0x8002EF8Cu;
    // 8002EF8C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EF90:
    ctx->pc = 0x8002EF90u;
    // 8002EF90: rlwinm. r0, r0, 16, 23, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00000100u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EF94:
    ctx->pc = 0x8002EF94u;
    // 8002EF94: bc    12, 2, 0x8002EFA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EFA0;
        }
    }

label_8002EF98:
    ctx->pc = 0x8002EF98u;
    ctx->downcount -= 2;
    // 8002EF98: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_8002EF9C:
    ctx->pc = 0x8002EF9Cu;
    // 8002EF9C: b       0x8002EFA4
    {
            goto label_8002EFA4;
    }

label_8002EFA0:
    ctx->pc = 0x8002EFA0u;
    ctx->downcount -= 1;
    // 8002EFA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002EFA4:
    ctx->pc = 0x8002EFA4u;
    ctx->downcount -= 6;
    // 8002EFA4: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002EFA8:
    ctx->pc = 0x8002EFA8u;
    // 8002EFA8: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8002EFAC:
    ctx->pc = 0x8002EFACu;
    // 8002EFAC: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002EFB0:
    ctx->pc = 0x8002EFB0u;
    // 8002EFB0: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EFB4:
    ctx->pc = 0x8002EFB4u;
    // 8002EFB4: rlwinm. r0, r0, 16, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EFB8:
    ctx->pc = 0x8002EFB8u;
    // 8002EFB8: bc    12, 2, 0x8002EFC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EFC4;
        }
    }

label_8002EFBC:
    ctx->pc = 0x8002EFBCu;
    ctx->downcount -= 2;
    // 8002EFBC: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_8002EFC0:
    ctx->pc = 0x8002EFC0u;
    // 8002EFC0: b       0x8002EFC8
    {
            goto label_8002EFC8;
    }

label_8002EFC4:
    ctx->pc = 0x8002EFC4u;
    ctx->downcount -= 1;
    // 8002EFC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002EFC8:
    ctx->pc = 0x8002EFC8u;
    ctx->downcount -= 6;
    // 8002EFC8: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002EFCC:
    ctx->pc = 0x8002EFCCu;
    // 8002EFCC: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8002EFD0:
    ctx->pc = 0x8002EFD0u;
    // 8002EFD0: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002EFD4:
    ctx->pc = 0x8002EFD4u;
    // 8002EFD4: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002EFD8:
    ctx->pc = 0x8002EFD8u;
    // 8002EFD8: rlwinm. r0, r0, 16, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002EFDC:
    ctx->pc = 0x8002EFDCu;
    // 8002EFDC: bc    12, 2, 0x8002EFE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002EFE8;
        }
    }

label_8002EFE0:
    ctx->pc = 0x8002EFE0u;
    ctx->downcount -= 2;
    // 8002EFE0: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_8002EFE4:
    ctx->pc = 0x8002EFE4u;
    // 8002EFE4: b       0x8002EFEC
    {
            goto label_8002EFEC;
    }

label_8002EFE8:
    ctx->pc = 0x8002EFE8u;
    ctx->downcount -= 1;
    // 8002EFE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8002EFEC:
    ctx->pc = 0x8002EFECu;
    ctx->downcount -= 29;
    // 8002EFEC: lhz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8002EFF0:
    ctx->pc = 0x8002EFF0u;
    // 8002EFF0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002EFF4:
    ctx->pc = 0x8002EFF4u;
    // 8002EFF4: or   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[6];
    }

label_8002EFF8:
    ctx->pc = 0x8002EFF8u;
    // 8002EFF8: sth     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_8002EFFC:
    ctx->pc = 0x8002EFFCu;
    // 8002EFFC: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F000:
    ctx->pc = 0x8002F000u;
    // 8002F000: rlwinm r3, r3, 16, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0x0000FFFFu;
    }

label_8002F004:
    ctx->pc = 0x8002F004u;
    // 8002F004: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_8002F008:
    ctx->pc = 0x8002F008u;
    // 8002F008: stb     r3, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F00C:
    ctx->pc = 0x8002F00Cu;
    // 8002F00C: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F010:
    ctx->pc = 0x8002F010u;
    // 8002F010: rlwinm r3, r3, 8, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0x000000FFu;
    }

label_8002F014:
    ctx->pc = 0x8002F014u;
    // 8002F014: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_8002F018:
    ctx->pc = 0x8002F018u;
    // 8002F018: stb     r3, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F01C:
    ctx->pc = 0x8002F01Cu;
    // 8002F01C: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F020:
    ctx->pc = 0x8002F020u;
    // 8002F020: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_8002F024:
    ctx->pc = 0x8002F024u;
    // 8002F024: stb     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F028:
    ctx->pc = 0x8002F028u;
    // 8002F028: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F02C:
    ctx->pc = 0x8002F02Cu;
    // 8002F02C: rlwinm r3, r3, 24, 8, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0x00FFFFFFu;
    }

label_8002F030:
    ctx->pc = 0x8002F030u;
    // 8002F030: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_8002F034:
    ctx->pc = 0x8002F034u;
    // 8002F034: stb     r3, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F038:
    ctx->pc = 0x8002F038u;
    // 8002F038: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F03C:
    ctx->pc = 0x8002F03Cu;
    // 8002F03C: rlwinm r3, r3, 24, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0x000000FFu;
    }

label_8002F040:
    ctx->pc = 0x8002F040u;
    // 8002F040: stb     r3, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F044:
    ctx->pc = 0x8002F044u;
    // 8002F044: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F048:
    ctx->pc = 0x8002F048u;
    // 8002F048: stb     r3, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F04C:
    ctx->pc = 0x8002F04Cu;
    // 8002F04C: stb     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F050:
    ctx->pc = 0x8002F050u;
    // 8002F050: stb     r0, 9(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F054:
    ctx->pc = 0x8002F054u;
    // 8002F054: lbz     r0, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002F058:
    ctx->pc = 0x8002F058u;
    // 8002F058: cmplwi  r0, 0x00AA
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00AAu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F05C:
    ctx->pc = 0x8002F05Cu;
    // 8002F05C: bc    12, 0, 0x8002F06C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F06C;
        }
    }

label_8002F060:
    ctx->pc = 0x8002F060u;
    ctx->downcount -= 3;
    // 8002F060: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002F064:
    ctx->pc = 0x8002F064u;
    // 8002F064: ori     r0, r0, 0x0040
    ctx->gpr[0] = ctx->gpr[0] | 0x0040u;

label_8002F068:
    ctx->pc = 0x8002F068u;
    // 8002F068: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F06C:
    ctx->pc = 0x8002F06Cu;
    ctx->downcount -= 3;
    // 8002F06C: lbz     r0, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002F070:
    ctx->pc = 0x8002F070u;
    // 8002F070: cmplwi  r0, 0x00AA
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00AAu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F074:
    ctx->pc = 0x8002F074u;
    // 8002F074: bc    12, 0, 0x8002F084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F084;
        }
    }

label_8002F078:
    ctx->pc = 0x8002F078u;
    ctx->downcount -= 3;
    // 8002F078: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002F07C:
    ctx->pc = 0x8002F07Cu;
    // 8002F07C: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_8002F080:
    ctx->pc = 0x8002F080u;
    // 8002F080: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F084:
    ctx->pc = 0x8002F084u;
    ctx->downcount -= 13;
    // 8002F084: lbz     r3, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002F088:
    ctx->pc = 0x8002F088u;
    // 8002F088: addi    r0, r3, -128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-128);

label_8002F08C:
    ctx->pc = 0x8002F08Cu;
    // 8002F08C: stb     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F090:
    ctx->pc = 0x8002F090u;
    // 8002F090: lbz     r3, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002F094:
    ctx->pc = 0x8002F094u;
    // 8002F094: addi    r0, r3, -128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-128);

label_8002F098:
    ctx->pc = 0x8002F098u;
    // 8002F098: stb     r0, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F09C:
    ctx->pc = 0x8002F09Cu;
    // 8002F09C: lbz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002F0A0:
    ctx->pc = 0x8002F0A0u;
    // 8002F0A0: addi    r0, r3, -128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-128);

label_8002F0A4:
    ctx->pc = 0x8002F0A4u;
    // 8002F0A4: stb     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F0A8:
    ctx->pc = 0x8002F0A8u;
    // 8002F0A8: lbz     r3, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002F0AC:
    ctx->pc = 0x8002F0ACu;
    // 8002F0AC: addi    r0, r3, -128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-128);

label_8002F0B0:
    ctx->pc = 0x8002F0B0u;
    // 8002F0B0: stb     r0, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F0B4:
    ctx->pc = 0x8002F0B4u;
    // 8002F0B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F0B8:
    ctx->pc = 0x8002F0B8u;
    ctx->downcount -= 5;
    // 8002F0B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002F0BC:
    ctx->pc = 0x8002F0BCu;
    // 8002F0BC: sth     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_8002F0C0:
    ctx->pc = 0x8002F0C0u;
    // 8002F0C0: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F0C4:
    ctx->pc = 0x8002F0C4u;
    // 8002F0C4: rlwinm. r0, r0, 16, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00000080u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F0C8:
    ctx->pc = 0x8002F0C8u;
    // 8002F0C8: bc    12, 2, 0x8002F0D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F0D0;
        }
    }

label_8002F0CC:
    ctx->pc = 0x8002F0CCu;
    ctx->downcount -= 1;
    // 8002F0CC: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_8002F0D0:
    ctx->pc = 0x8002F0D0u;
    ctx->downcount -= 6;
    // 8002F0D0: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002F0D4:
    ctx->pc = 0x8002F0D4u;
    // 8002F0D4: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8002F0D8:
    ctx->pc = 0x8002F0D8u;
    // 8002F0D8: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F0DC:
    ctx->pc = 0x8002F0DCu;
    // 8002F0DC: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F0E0:
    ctx->pc = 0x8002F0E0u;
    // 8002F0E0: rlwinm. r0, r0, 16, 23, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00000100u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F0E4:
    ctx->pc = 0x8002F0E4u;
    // 8002F0E4: bc    12, 2, 0x8002F0F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F0F0;
        }
    }

label_8002F0E8:
    ctx->pc = 0x8002F0E8u;
    ctx->downcount -= 2;
    // 8002F0E8: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_8002F0EC:
    ctx->pc = 0x8002F0ECu;
    // 8002F0EC: b       0x8002F0F4
    {
            goto label_8002F0F4;
    }

label_8002F0F0:
    ctx->pc = 0x8002F0F0u;
    ctx->downcount -= 1;
    // 8002F0F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002F0F4:
    ctx->pc = 0x8002F0F4u;
    ctx->downcount -= 6;
    // 8002F0F4: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002F0F8:
    ctx->pc = 0x8002F0F8u;
    // 8002F0F8: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8002F0FC:
    ctx->pc = 0x8002F0FCu;
    // 8002F0FC: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F100:
    ctx->pc = 0x8002F100u;
    // 8002F100: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F104:
    ctx->pc = 0x8002F104u;
    // 8002F104: rlwinm. r0, r0, 16, 26, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00000020u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F108:
    ctx->pc = 0x8002F108u;
    // 8002F108: bc    12, 2, 0x8002F114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F114;
        }
    }

label_8002F10C:
    ctx->pc = 0x8002F10Cu;
    ctx->downcount -= 2;
    // 8002F10C: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_8002F110:
    ctx->pc = 0x8002F110u;
    // 8002F110: b       0x8002F118
    {
            goto label_8002F118;
    }

label_8002F114:
    ctx->pc = 0x8002F114u;
    ctx->downcount -= 1;
    // 8002F114: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002F118:
    ctx->pc = 0x8002F118u;
    ctx->downcount -= 6;
    // 8002F118: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002F11C:
    ctx->pc = 0x8002F11Cu;
    // 8002F11C: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8002F120:
    ctx->pc = 0x8002F120u;
    // 8002F120: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F124:
    ctx->pc = 0x8002F124u;
    // 8002F124: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F128:
    ctx->pc = 0x8002F128u;
    // 8002F128: rlwinm. r0, r0, 16, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F12C:
    ctx->pc = 0x8002F12Cu;
    // 8002F12C: bc    12, 2, 0x8002F138
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F138;
        }
    }

label_8002F130:
    ctx->pc = 0x8002F130u;
    ctx->downcount -= 2;
    // 8002F130: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_8002F134:
    ctx->pc = 0x8002F134u;
    // 8002F134: b       0x8002F13C
    {
            goto label_8002F13C;
    }

label_8002F138:
    ctx->pc = 0x8002F138u;
    ctx->downcount -= 1;
    // 8002F138: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002F13C:
    ctx->pc = 0x8002F13Cu;
    ctx->downcount -= 6;
    // 8002F13C: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002F140:
    ctx->pc = 0x8002F140u;
    // 8002F140: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_8002F144:
    ctx->pc = 0x8002F144u;
    // 8002F144: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F148:
    ctx->pc = 0x8002F148u;
    // 8002F148: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F14C:
    ctx->pc = 0x8002F14Cu;
    // 8002F14C: rlwinm. r0, r0, 16, 22, 22
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00000200u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F150:
    ctx->pc = 0x8002F150u;
    // 8002F150: bc    12, 2, 0x8002F15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F15C;
        }
    }

label_8002F154:
    ctx->pc = 0x8002F154u;
    ctx->downcount -= 2;
    // 8002F154: li      r6, 4096
    ctx->gpr[6] = (u32)(s32)(4096);

label_8002F158:
    ctx->pc = 0x8002F158u;
    // 8002F158: b       0x8002F160
    {
            goto label_8002F160;
    }

label_8002F15C:
    ctx->pc = 0x8002F15Cu;
    ctx->downcount -= 1;
    // 8002F15C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8002F160:
    ctx->pc = 0x8002F160u;
    ctx->downcount -= 29;
    // 8002F160: lhz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8002F164:
    ctx->pc = 0x8002F164u;
    // 8002F164: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002F168:
    ctx->pc = 0x8002F168u;
    // 8002F168: or   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] | ctx->gpr[6];
    }

label_8002F16C:
    ctx->pc = 0x8002F16Cu;
    // 8002F16C: sth     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_8002F170:
    ctx->pc = 0x8002F170u;
    // 8002F170: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F174:
    ctx->pc = 0x8002F174u;
    // 8002F174: rlwinm r3, r3, 16, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0x0000FFFFu;
    }

label_8002F178:
    ctx->pc = 0x8002F178u;
    // 8002F178: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_8002F17C:
    ctx->pc = 0x8002F17Cu;
    // 8002F17C: stb     r3, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F180:
    ctx->pc = 0x8002F180u;
    // 8002F180: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F184:
    ctx->pc = 0x8002F184u;
    // 8002F184: rlwinm r3, r3, 8, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 8u) & 0x000000FFu;
    }

label_8002F188:
    ctx->pc = 0x8002F188u;
    // 8002F188: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_8002F18C:
    ctx->pc = 0x8002F18Cu;
    // 8002F18C: stb     r3, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F190:
    ctx->pc = 0x8002F190u;
    // 8002F190: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F194:
    ctx->pc = 0x8002F194u;
    // 8002F194: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_8002F198:
    ctx->pc = 0x8002F198u;
    // 8002F198: stb     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F19C:
    ctx->pc = 0x8002F19Cu;
    // 8002F19C: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F1A0:
    ctx->pc = 0x8002F1A0u;
    // 8002F1A0: rlwinm r3, r3, 24, 8, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0x00FFFFFFu;
    }

label_8002F1A4:
    ctx->pc = 0x8002F1A4u;
    // 8002F1A4: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_8002F1A8:
    ctx->pc = 0x8002F1A8u;
    // 8002F1A8: stb     r3, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F1AC:
    ctx->pc = 0x8002F1ACu;
    // 8002F1AC: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F1B0:
    ctx->pc = 0x8002F1B0u;
    // 8002F1B0: rlwinm r3, r3, 24, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0x000000FFu;
    }

label_8002F1B4:
    ctx->pc = 0x8002F1B4u;
    // 8002F1B4: stb     r3, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F1B8:
    ctx->pc = 0x8002F1B8u;
    // 8002F1B8: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002F1BC:
    ctx->pc = 0x8002F1BCu;
    // 8002F1BC: stb     r3, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F1C0:
    ctx->pc = 0x8002F1C0u;
    // 8002F1C0: stb     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F1C4:
    ctx->pc = 0x8002F1C4u;
    // 8002F1C4: stb     r0, 9(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F1C8:
    ctx->pc = 0x8002F1C8u;
    // 8002F1C8: lbz     r0, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002F1CC:
    ctx->pc = 0x8002F1CCu;
    // 8002F1CC: cmplwi  r0, 0x00AA
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00AAu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F1D0:
    ctx->pc = 0x8002F1D0u;
    // 8002F1D0: bc    12, 0, 0x8002F1E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F1E0;
        }
    }

label_8002F1D4:
    ctx->pc = 0x8002F1D4u;
    ctx->downcount -= 3;
    // 8002F1D4: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002F1D8:
    ctx->pc = 0x8002F1D8u;
    // 8002F1D8: ori     r0, r0, 0x0040
    ctx->gpr[0] = ctx->gpr[0] | 0x0040u;

label_8002F1DC:
    ctx->pc = 0x8002F1DCu;
    // 8002F1DC: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F1E0:
    ctx->pc = 0x8002F1E0u;
    ctx->downcount -= 3;
    // 8002F1E0: lbz     r0, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002F1E4:
    ctx->pc = 0x8002F1E4u;
    // 8002F1E4: cmplwi  r0, 0x00AA
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00AAu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F1E8:
    ctx->pc = 0x8002F1E8u;
    // 8002F1E8: bc    12, 0, 0x8002F1F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F1F8;
        }
    }

label_8002F1EC:
    ctx->pc = 0x8002F1ECu;
    ctx->downcount -= 3;
    // 8002F1EC: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002F1F0:
    ctx->pc = 0x8002F1F0u;
    // 8002F1F0: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_8002F1F4:
    ctx->pc = 0x8002F1F4u;
    // 8002F1F4: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F1F8:
    ctx->pc = 0x8002F1F8u;
    ctx->downcount -= 13;
    // 8002F1F8: lbz     r3, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002F1FC:
    ctx->pc = 0x8002F1FCu;
    // 8002F1FC: addi    r0, r3, -128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-128);

label_8002F200:
    ctx->pc = 0x8002F200u;
    // 8002F200: stb     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F204:
    ctx->pc = 0x8002F204u;
    // 8002F204: lbz     r3, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002F208:
    ctx->pc = 0x8002F208u;
    // 8002F208: addi    r0, r3, -128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-128);

label_8002F20C:
    ctx->pc = 0x8002F20Cu;
    // 8002F20C: stb     r0, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F210:
    ctx->pc = 0x8002F210u;
    // 8002F210: lbz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002F214:
    ctx->pc = 0x8002F214u;
    // 8002F214: addi    r0, r3, -128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-128);

label_8002F218:
    ctx->pc = 0x8002F218u;
    // 8002F218: stb     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F21C:
    ctx->pc = 0x8002F21Cu;
    // 8002F21C: lbz     r3, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002F220:
    ctx->pc = 0x8002F220u;
    // 8002F220: addi    r0, r3, -128
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-128);

label_8002F224:
    ctx->pc = 0x8002F224u;
    // 8002F224: stb     r0, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F228:
    ctx->pc = 0x8002F228u;
    // 8002F228: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F22C:
    ctx->pc = 0x8002F22Cu;
    ctx->downcount -= 14;
    // 8002F22C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F230:
    ctx->pc = 0x8002F230u;
    // 8002F230: rlwinm r0, r0, 16, 18, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x00003FFFu;
    }

label_8002F234:
    ctx->pc = 0x8002F234u;
    // 8002F234: sth     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F238:
    ctx->pc = 0x8002F238u;
    // 8002F238: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F23C:
    ctx->pc = 0x8002F23Cu;
    // 8002F23C: rlwinm r0, r0, 24, 8, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0x00FFFFFFu;
    }

label_8002F240:
    ctx->pc = 0x8002F240u;
    // 8002F240: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F244:
    ctx->pc = 0x8002F244u;
    // 8002F244: stb     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F248:
    ctx->pc = 0x8002F248u;
    // 8002F248: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F24C:
    ctx->pc = 0x8002F24Cu;
    // 8002F24C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F250:
    ctx->pc = 0x8002F250u;
    // 8002F250: stb     r0, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F254:
    ctx->pc = 0x8002F254u;
    // 8002F254: lwz     r0, -32540(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32540);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F258:
    ctx->pc = 0x8002F258u;
    // 8002F258: rlwinm r0, r0, 0, 21, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000700u;
    }

label_8002F25C:
    ctx->pc = 0x8002F25Cu;
    // 8002F25C: cmpwi   r0, 1024
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1024);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F260:
    ctx->pc = 0x8002F260u;
    // 8002F260: bc    12, 2, 0x8002F3F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F3F8;
        }
    }

label_8002F264:
    ctx->pc = 0x8002F264u;
    ctx->downcount -= 1;
    // 8002F264: bc    4, 0, 0x8002F298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F298;
        }
    }

label_8002F268:
    ctx->pc = 0x8002F268u;
    ctx->downcount -= 2;
    // 8002F268: cmpwi   r0, 512
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(512);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F26C:
    ctx->pc = 0x8002F26Cu;
    // 8002F26C: bc    12, 2, 0x8002F364
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F364;
        }
    }

label_8002F270:
    ctx->pc = 0x8002F270u;
    ctx->downcount -= 1;
    // 8002F270: bc    4, 0, 0x8002F28C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F28C;
        }
    }

label_8002F274:
    ctx->pc = 0x8002F274u;
    ctx->downcount -= 2;
    // 8002F274: cmpwi   r0, 256
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F278:
    ctx->pc = 0x8002F278u;
    // 8002F278: bc    12, 2, 0x8002F310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F310;
        }
    }

label_8002F27C:
    ctx->pc = 0x8002F27Cu;
    ctx->downcount -= 1;
    // 8002F27C: bc    4, 0, 0x8002F438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F438;
        }
    }

label_8002F280:
    ctx->pc = 0x8002F280u;
    ctx->downcount -= 2;
    // 8002F280: cmpwi   r0, 0
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

label_8002F284:
    ctx->pc = 0x8002F284u;
    // 8002F284: bc    12, 2, 0x8002F2BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F2BC;
        }
    }

label_8002F288:
    ctx->pc = 0x8002F288u;
    ctx->downcount -= 1;
    // 8002F288: b       0x8002F438
    {
            goto label_8002F438;
    }

label_8002F28C:
    ctx->pc = 0x8002F28Cu;
    ctx->downcount -= 2;
    // 8002F28C: cmpwi   r0, 768
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(768);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F290:
    ctx->pc = 0x8002F290u;
    // 8002F290: bc    12, 2, 0x8002F3B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F3B4;
        }
    }

label_8002F294:
    ctx->pc = 0x8002F294u;
    ctx->downcount -= 1;
    // 8002F294: b       0x8002F438
    {
            goto label_8002F438;
    }

label_8002F298:
    ctx->pc = 0x8002F298u;
    ctx->downcount -= 2;
    // 8002F298: cmpwi   r0, 1536
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1536);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F29C:
    ctx->pc = 0x8002F29Cu;
    // 8002F29C: bc    12, 2, 0x8002F2BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F2BC;
        }
    }

label_8002F2A0:
    ctx->pc = 0x8002F2A0u;
    ctx->downcount -= 1;
    // 8002F2A0: bc    4, 0, 0x8002F2B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F2B0;
        }
    }

label_8002F2A4:
    ctx->pc = 0x8002F2A4u;
    ctx->downcount -= 2;
    // 8002F2A4: cmpwi   r0, 1280
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1280);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F2A8:
    ctx->pc = 0x8002F2A8u;
    // 8002F2A8: bc    12, 2, 0x8002F2BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F2BC;
        }
    }

label_8002F2AC:
    ctx->pc = 0x8002F2ACu;
    ctx->downcount -= 1;
    // 8002F2AC: b       0x8002F438
    {
            goto label_8002F438;
    }

label_8002F2B0:
    ctx->pc = 0x8002F2B0u;
    ctx->downcount -= 2;
    // 8002F2B0: cmpwi   r0, 1792
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1792);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F2B4:
    ctx->pc = 0x8002F2B4u;
    // 8002F2B4: bc    12, 2, 0x8002F2BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F2BC;
        }
    }

label_8002F2B8:
    ctx->pc = 0x8002F2B8u;
    ctx->downcount -= 1;
    // 8002F2B8: b       0x8002F438
    {
            goto label_8002F438;
    }

label_8002F2BC:
    ctx->pc = 0x8002F2BCu;
    ctx->downcount -= 21;
    // 8002F2BC: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F2C0:
    ctx->pc = 0x8002F2C0u;
    // 8002F2C0: rlwinm r0, r0, 8, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x000000FFu;
    }

label_8002F2C4:
    ctx->pc = 0x8002F2C4u;
    // 8002F2C4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F2C8:
    ctx->pc = 0x8002F2C8u;
    // 8002F2C8: stb     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F2CC:
    ctx->pc = 0x8002F2CCu;
    // 8002F2CC: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F2D0:
    ctx->pc = 0x8002F2D0u;
    // 8002F2D0: rlwinm r0, r0, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x0000FFFFu;
    }

label_8002F2D4:
    ctx->pc = 0x8002F2D4u;
    // 8002F2D4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F2D8:
    ctx->pc = 0x8002F2D8u;
    // 8002F2D8: stb     r0, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F2DC:
    ctx->pc = 0x8002F2DCu;
    // 8002F2DC: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F2E0:
    ctx->pc = 0x8002F2E0u;
    // 8002F2E0: rlwinm r0, r0, 24, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0x000000F0u;
    }

label_8002F2E4:
    ctx->pc = 0x8002F2E4u;
    // 8002F2E4: stb     r0, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F2E8:
    ctx->pc = 0x8002F2E8u;
    // 8002F2E8: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F2EC:
    ctx->pc = 0x8002F2ECu;
    // 8002F2EC: rlwinm r0, r0, 28, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 28u) & 0x000000F0u;
    }

label_8002F2F0:
    ctx->pc = 0x8002F2F0u;
    // 8002F2F0: stb     r0, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F2F4:
    ctx->pc = 0x8002F2F4u;
    // 8002F2F4: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F2F8:
    ctx->pc = 0x8002F2F8u;
    // 8002F2F8: rlwinm r0, r0, 0, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000F0u;
    }

label_8002F2FC:
    ctx->pc = 0x8002F2FCu;
    // 8002F2FC: stb     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F300:
    ctx->pc = 0x8002F300u;
    // 8002F300: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F304:
    ctx->pc = 0x8002F304u;
    // 8002F304: rlwinm r0, r0, 4, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0x000000F0u;
    }

label_8002F308:
    ctx->pc = 0x8002F308u;
    // 8002F308: stb     r0, 9(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F30C:
    ctx->pc = 0x8002F30Cu;
    // 8002F30C: b       0x8002F438
    {
            goto label_8002F438;
    }

label_8002F310:
    ctx->pc = 0x8002F310u;
    ctx->downcount -= 21;
    // 8002F310: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F314:
    ctx->pc = 0x8002F314u;
    // 8002F314: rlwinm r0, r0, 8, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x000000F0u;
    }

label_8002F318:
    ctx->pc = 0x8002F318u;
    // 8002F318: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F31C:
    ctx->pc = 0x8002F31Cu;
    // 8002F31C: stb     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F320:
    ctx->pc = 0x8002F320u;
    // 8002F320: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F324:
    ctx->pc = 0x8002F324u;
    // 8002F324: rlwinm r0, r0, 12, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0x000000F0u;
    }

label_8002F328:
    ctx->pc = 0x8002F328u;
    // 8002F328: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F32C:
    ctx->pc = 0x8002F32Cu;
    // 8002F32C: stb     r0, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F330:
    ctx->pc = 0x8002F330u;
    // 8002F330: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F334:
    ctx->pc = 0x8002F334u;
    // 8002F334: rlwinm r0, r0, 16, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x000000FFu;
    }

label_8002F338:
    ctx->pc = 0x8002F338u;
    // 8002F338: stb     r0, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F33C:
    ctx->pc = 0x8002F33Cu;
    // 8002F33C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F340:
    ctx->pc = 0x8002F340u;
    // 8002F340: rlwinm r0, r0, 24, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0x000000FFu;
    }

label_8002F344:
    ctx->pc = 0x8002F344u;
    // 8002F344: stb     r0, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F348:
    ctx->pc = 0x8002F348u;
    // 8002F348: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F34C:
    ctx->pc = 0x8002F34Cu;
    // 8002F34C: rlwinm r0, r0, 0, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000F0u;
    }

label_8002F350:
    ctx->pc = 0x8002F350u;
    // 8002F350: stb     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F354:
    ctx->pc = 0x8002F354u;
    // 8002F354: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F358:
    ctx->pc = 0x8002F358u;
    // 8002F358: rlwinm r0, r0, 4, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0x000000F0u;
    }

label_8002F35C:
    ctx->pc = 0x8002F35Cu;
    // 8002F35C: stb     r0, 9(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F360:
    ctx->pc = 0x8002F360u;
    // 8002F360: b       0x8002F438
    {
            goto label_8002F438;
    }

label_8002F364:
    ctx->pc = 0x8002F364u;
    ctx->downcount -= 20;
    // 8002F364: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F368:
    ctx->pc = 0x8002F368u;
    // 8002F368: rlwinm r0, r0, 8, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0x000000F0u;
    }

label_8002F36C:
    ctx->pc = 0x8002F36Cu;
    // 8002F36C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F370:
    ctx->pc = 0x8002F370u;
    // 8002F370: stb     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F374:
    ctx->pc = 0x8002F374u;
    // 8002F374: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F378:
    ctx->pc = 0x8002F378u;
    // 8002F378: rlwinm r0, r0, 12, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 12u) & 0x000000F0u;
    }

label_8002F37C:
    ctx->pc = 0x8002F37Cu;
    // 8002F37C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F380:
    ctx->pc = 0x8002F380u;
    // 8002F380: stb     r0, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F384:
    ctx->pc = 0x8002F384u;
    // 8002F384: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F388:
    ctx->pc = 0x8002F388u;
    // 8002F388: rlwinm r0, r0, 16, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x000000F0u;
    }

label_8002F38C:
    ctx->pc = 0x8002F38Cu;
    // 8002F38C: stb     r0, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F390:
    ctx->pc = 0x8002F390u;
    // 8002F390: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F394:
    ctx->pc = 0x8002F394u;
    // 8002F394: rlwinm r0, r0, 20, 24, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 20u) & 0x000000F0u;
    }

label_8002F398:
    ctx->pc = 0x8002F398u;
    // 8002F398: stb     r0, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F39C:
    ctx->pc = 0x8002F39Cu;
    // 8002F39C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F3A0:
    ctx->pc = 0x8002F3A0u;
    // 8002F3A0: rlwinm r0, r0, 24, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0x000000FFu;
    }

label_8002F3A4:
    ctx->pc = 0x8002F3A4u;
    // 8002F3A4: stb     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F3A8:
    ctx->pc = 0x8002F3A8u;
    // 8002F3A8: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F3AC:
    ctx->pc = 0x8002F3ACu;
    // 8002F3AC: stb     r0, 9(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F3B0:
    ctx->pc = 0x8002F3B0u;
    // 8002F3B0: b       0x8002F438
    {
            goto label_8002F438;
    }

label_8002F3B4:
    ctx->pc = 0x8002F3B4u;
    ctx->downcount -= 17;
    // 8002F3B4: lwz     r6, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002F3B8:
    ctx->pc = 0x8002F3B8u;
    // 8002F3B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002F3BC:
    ctx->pc = 0x8002F3BCu;
    // 8002F3BC: rlwinm r6, r6, 8, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 8u) & 0x000000FFu;
    }

label_8002F3C0:
    ctx->pc = 0x8002F3C0u;
    // 8002F3C0: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F3C4:
    ctx->pc = 0x8002F3C4u;
    // 8002F3C4: stb     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8002F3C8:
    ctx->pc = 0x8002F3C8u;
    // 8002F3C8: lwz     r6, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002F3CC:
    ctx->pc = 0x8002F3CCu;
    // 8002F3CC: rlwinm r6, r6, 16, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 16u) & 0x0000FFFFu;
    }

label_8002F3D0:
    ctx->pc = 0x8002F3D0u;
    // 8002F3D0: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F3D4:
    ctx->pc = 0x8002F3D4u;
    // 8002F3D4: stb     r6, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8002F3D8:
    ctx->pc = 0x8002F3D8u;
    // 8002F3D8: lwz     r6, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002F3DC:
    ctx->pc = 0x8002F3DCu;
    // 8002F3DC: rlwinm r6, r6, 24, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0x000000FFu;
    }

label_8002F3E0:
    ctx->pc = 0x8002F3E0u;
    // 8002F3E0: stb     r6, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8002F3E4:
    ctx->pc = 0x8002F3E4u;
    // 8002F3E4: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002F3E8:
    ctx->pc = 0x8002F3E8u;
    // 8002F3E8: stb     r5, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_8002F3EC:
    ctx->pc = 0x8002F3ECu;
    // 8002F3EC: stb     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F3F0:
    ctx->pc = 0x8002F3F0u;
    // 8002F3F0: stb     r0, 9(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F3F4:
    ctx->pc = 0x8002F3F4u;
    // 8002F3F4: b       0x8002F438
    {
            goto label_8002F438;
    }

label_8002F3F8:
    ctx->pc = 0x8002F3F8u;
    ctx->downcount -= 16;
    // 8002F3F8: lwz     r6, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002F3FC:
    ctx->pc = 0x8002F3FCu;
    // 8002F3FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002F400:
    ctx->pc = 0x8002F400u;
    // 8002F400: rlwinm r6, r6, 8, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 8u) & 0x000000FFu;
    }

label_8002F404:
    ctx->pc = 0x8002F404u;
    // 8002F404: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F408:
    ctx->pc = 0x8002F408u;
    // 8002F408: stb     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8002F40C:
    ctx->pc = 0x8002F40Cu;
    // 8002F40C: lwz     r6, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8002F410:
    ctx->pc = 0x8002F410u;
    // 8002F410: rlwinm r6, r6, 16, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 16u) & 0x0000FFFFu;
    }

label_8002F414:
    ctx->pc = 0x8002F414u;
    // 8002F414: extsb r6, r6
    {
        ctx->gpr[6] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F418:
    ctx->pc = 0x8002F418u;
    // 8002F418: stb     r6, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8002F41C:
    ctx->pc = 0x8002F41Cu;
    // 8002F41C: stb     r0, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F420:
    ctx->pc = 0x8002F420u;
    // 8002F420: stb     r0, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F424:
    ctx->pc = 0x8002F424u;
    // 8002F424: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F428:
    ctx->pc = 0x8002F428u;
    // 8002F428: rlwinm r0, r0, 24, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0x000000FFu;
    }

label_8002F42C:
    ctx->pc = 0x8002F42Cu;
    // 8002F42C: stb     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F430:
    ctx->pc = 0x8002F430u;
    // 8002F430: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F434:
    ctx->pc = 0x8002F434u;
    // 8002F434: stb     r0, 9(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F438:
    ctx->pc = 0x8002F438u;
    ctx->downcount -= 21;
    // 8002F438: lbz     r7, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8002F43C:
    ctx->pc = 0x8002F43Cu;
    // 8002F43C: lis     r5, -32737
    ctx->gpr[5] = ((u32)(s32)(-32737) << 16);

label_8002F440:
    ctx->pc = 0x8002F440u;
    // 8002F440: rlwinm r6, r3, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8002F444:
    ctx->pc = 0x8002F444u;
    // 8002F444: addi    r0, r7, -128
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(-128);

label_8002F448:
    ctx->pc = 0x8002F448u;
    // 8002F448: stb     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F44C:
    ctx->pc = 0x8002F44Cu;
    // 8002F44C: addi    r0, r5, -560
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-560);

label_8002F450:
    ctx->pc = 0x8002F450u;
    // 8002F450: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8002F454:
    ctx->pc = 0x8002F454u;
    // 8002F454: lbz     r6, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8002F458:
    ctx->pc = 0x8002F458u;
    // 8002F458: addi    r0, r6, -128
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-128);

label_8002F45C:
    ctx->pc = 0x8002F45Cu;
    // 8002F45C: stb     r0, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F460:
    ctx->pc = 0x8002F460u;
    // 8002F460: lbz     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8002F464:
    ctx->pc = 0x8002F464u;
    // 8002F464: addi    r0, r6, -128
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-128);

label_8002F468:
    ctx->pc = 0x8002F468u;
    // 8002F468: stb     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F46C:
    ctx->pc = 0x8002F46Cu;
    // 8002F46C: lbz     r6, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8002F470:
    ctx->pc = 0x8002F470u;
    // 8002F470: addi    r0, r6, -128
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-128);

label_8002F474:
    ctx->pc = 0x8002F474u;
    // 8002F474: stb     r0, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F478:
    ctx->pc = 0x8002F478u;
    // 8002F478: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F47C:
    ctx->pc = 0x8002F47Cu;
    // 8002F47C: rlwinm r5, r0, 0, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF0000u;
    }

label_8002F480:
    ctx->pc = 0x8002F480u;
    // 8002F480: addis   r0, r5, -2304
    ctx->gpr[0] = ctx->gpr[5] + ((u32)(s32)(-2304) << 16);

label_8002F484:
    ctx->pc = 0x8002F484u;
    // 8002F484: cmplwi  r0, 0x0000
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

label_8002F488:
    ctx->pc = 0x8002F488u;
    // 8002F488: bc    4, 2, 0x8002F4CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F4CC;
        }
    }

label_8002F48C:
    ctx->pc = 0x8002F48Cu;
    ctx->downcount -= 5;
    // 8002F48C: lhz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002F490:
    ctx->pc = 0x8002F490u;
    // 8002F490: rlwinm r0, r0, 0, 24, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000080u;
    }

label_8002F494:
    ctx->pc = 0x8002F494u;
    // 8002F494: xori    r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0080u;

label_8002F498:
    ctx->pc = 0x8002F498u;
    // 8002F498: cmpwi   r0, 0
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

label_8002F49C:
    ctx->pc = 0x8002F49Cu;
    // 8002F49C: bc    12, 2, 0x8002F4CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F4CC;
        }
    }

label_8002F4A0:
    ctx->pc = 0x8002F4A0u;
    ctx->downcount -= 11;
    // 8002F4A0: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8002F4A4:
    ctx->pc = 0x8002F4A4u;
    // 8002F4A4: lwz     r5, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002F4A8:
    ctx->pc = 0x8002F4A8u;
    // 8002F4A8: srw   r0, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] >> sh);
    }

label_8002F4AC:
    ctx->pc = 0x8002F4ACu;
    // 8002F4AC: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_8002F4B0:
    ctx->pc = 0x8002F4B0u;
    // 8002F4B0: stw     r0, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F4B4:
    ctx->pc = 0x8002F4B4u;
    // 8002F4B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002F4B8:
    ctx->pc = 0x8002F4B8u;
    // 8002F4B8: stb     r0, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F4BC:
    ctx->pc = 0x8002F4BCu;
    // 8002F4BC: stb     r0, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F4C0:
    ctx->pc = 0x8002F4C0u;
    // 8002F4C0: stb     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F4C4:
    ctx->pc = 0x8002F4C4u;
    // 8002F4C4: stb     r0, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F4C8:
    ctx->pc = 0x8002F4C8u;
    // 8002F4C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F4CC:
    ctx->pc = 0x8002F4CCu;
    ctx->downcount -= 15;
    // 8002F4CC: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_8002F4D0:
    ctx->pc = 0x8002F4D0u;
    // 8002F4D0: lwz     r5, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002F4D4:
    ctx->pc = 0x8002F4D4u;
    // 8002F4D4: srw   r0, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] >> sh);
    }

label_8002F4D8:
    ctx->pc = 0x8002F4D8u;
    // 8002F4D8: andc   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ~ctx->gpr[0];
    }

label_8002F4DC:
    ctx->pc = 0x8002F4DCu;
    // 8002F4DC: stw     r0, -31628(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31628);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F4E0:
    ctx->pc = 0x8002F4E0u;
    // 8002F4E0: lis     r5, -32737
    ctx->gpr[5] = ((u32)(s32)(-32737) << 16);

label_8002F4E4:
    ctx->pc = 0x8002F4E4u;
    // 8002F4E4: mulli   r3, r3, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)12);

label_8002F4E8:
    ctx->pc = 0x8002F4E8u;
    // 8002F4E8: lbz     r6, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8002F4EC:
    ctx->pc = 0x8002F4ECu;
    // 8002F4EC: addi    r0, r5, -544
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-544);

label_8002F4F0:
    ctx->pc = 0x8002F4F0u;
    // 8002F4F0: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8002F4F4:
    ctx->pc = 0x8002F4F4u;
    // 8002F4F4: lbz     r7, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8002F4F8:
    ctx->pc = 0x8002F4F8u;
    // 8002F4F8: extsb. r0, r7
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[7];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F4FC:
    ctx->pc = 0x8002F4FCu;
    // 8002F4FC: bc    4, 1, 0x8002F520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F520;
        }
    }

label_8002F500:
    ctx->pc = 0x8002F500u;
    ctx->downcount -= 6;
    // 8002F500: extsb r5, r7
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_8002F504:
    ctx->pc = 0x8002F504u;
    // 8002F504: addi    r0, r5, -128
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-128);

label_8002F508:
    ctx->pc = 0x8002F508u;
    // 8002F508: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F50C:
    ctx->pc = 0x8002F50Cu;
    // 8002F50C: extsb r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F510:
    ctx->pc = 0x8002F510u;
    // 8002F510: cmpw    r0, r5
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

label_8002F514:
    ctx->pc = 0x8002F514u;
    // 8002F514: bc    4, 0, 0x8002F544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F544;
        }
    }

label_8002F518:
    ctx->pc = 0x8002F518u;
    ctx->downcount -= 2;
    // 8002F518: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8002F51C:
    ctx->pc = 0x8002F51Cu;
    // 8002F51C: b       0x8002F544
    {
            goto label_8002F544;
    }

label_8002F520:
    ctx->pc = 0x8002F520u;
    ctx->downcount -= 2;
    // 8002F520: extsb. r0, r7
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[7];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F524:
    ctx->pc = 0x8002F524u;
    // 8002F524: bc    4, 0, 0x8002F544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F544;
        }
    }

label_8002F528:
    ctx->pc = 0x8002F528u;
    ctx->downcount -= 6;
    // 8002F528: extsb r5, r7
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_8002F52C:
    ctx->pc = 0x8002F52Cu;
    // 8002F52C: addi    r0, r5, 127
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(127);

label_8002F530:
    ctx->pc = 0x8002F530u;
    // 8002F530: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F534:
    ctx->pc = 0x8002F534u;
    // 8002F534: extsb r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F538:
    ctx->pc = 0x8002F538u;
    // 8002F538: cmpw    r5, r0
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

label_8002F53C:
    ctx->pc = 0x8002F53Cu;
    // 8002F53C: bc    4, 0, 0x8002F544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F544;
        }
    }

label_8002F540:
    ctx->pc = 0x8002F540u;
    ctx->downcount -= 1;
    // 8002F540: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8002F544:
    ctx->pc = 0x8002F544u;
    ctx->downcount -= 6;
    // 8002F544: subf   r6, r7, r6
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_8002F548:
    ctx->pc = 0x8002F548u;
    // 8002F548: stb     r6, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8002F54C:
    ctx->pc = 0x8002F54Cu;
    // 8002F54C: lbz     r7, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8002F550:
    ctx->pc = 0x8002F550u;
    // 8002F550: lbz     r6, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8002F554:
    ctx->pc = 0x8002F554u;
    // 8002F554: extsb. r0, r7
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[7];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F558:
    ctx->pc = 0x8002F558u;
    // 8002F558: bc    4, 1, 0x8002F57C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F57C;
        }
    }

label_8002F55C:
    ctx->pc = 0x8002F55Cu;
    ctx->downcount -= 6;
    // 8002F55C: extsb r5, r7
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_8002F560:
    ctx->pc = 0x8002F560u;
    // 8002F560: addi    r0, r5, -128
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-128);

label_8002F564:
    ctx->pc = 0x8002F564u;
    // 8002F564: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F568:
    ctx->pc = 0x8002F568u;
    // 8002F568: extsb r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F56C:
    ctx->pc = 0x8002F56Cu;
    // 8002F56C: cmpw    r0, r5
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

label_8002F570:
    ctx->pc = 0x8002F570u;
    // 8002F570: bc    4, 0, 0x8002F5A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F5A0;
        }
    }

label_8002F574:
    ctx->pc = 0x8002F574u;
    ctx->downcount -= 2;
    // 8002F574: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8002F578:
    ctx->pc = 0x8002F578u;
    // 8002F578: b       0x8002F5A0
    {
            goto label_8002F5A0;
    }

label_8002F57C:
    ctx->pc = 0x8002F57Cu;
    ctx->downcount -= 2;
    // 8002F57C: extsb. r0, r7
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[7];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F580:
    ctx->pc = 0x8002F580u;
    // 8002F580: bc    4, 0, 0x8002F5A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F5A0;
        }
    }

label_8002F584:
    ctx->pc = 0x8002F584u;
    ctx->downcount -= 6;
    // 8002F584: extsb r5, r7
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_8002F588:
    ctx->pc = 0x8002F588u;
    // 8002F588: addi    r0, r5, 127
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(127);

label_8002F58C:
    ctx->pc = 0x8002F58Cu;
    // 8002F58C: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F590:
    ctx->pc = 0x8002F590u;
    // 8002F590: extsb r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F594:
    ctx->pc = 0x8002F594u;
    // 8002F594: cmpw    r5, r0
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

label_8002F598:
    ctx->pc = 0x8002F598u;
    // 8002F598: bc    4, 0, 0x8002F5A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F5A0;
        }
    }

label_8002F59C:
    ctx->pc = 0x8002F59Cu;
    ctx->downcount -= 1;
    // 8002F59C: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8002F5A0:
    ctx->pc = 0x8002F5A0u;
    ctx->downcount -= 6;
    // 8002F5A0: subf   r6, r7, r6
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_8002F5A4:
    ctx->pc = 0x8002F5A4u;
    // 8002F5A4: stb     r6, 3(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8002F5A8:
    ctx->pc = 0x8002F5A8u;
    // 8002F5A8: lbz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8002F5AC:
    ctx->pc = 0x8002F5ACu;
    // 8002F5AC: lbz     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8002F5B0:
    ctx->pc = 0x8002F5B0u;
    // 8002F5B0: extsb. r0, r7
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[7];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F5B4:
    ctx->pc = 0x8002F5B4u;
    // 8002F5B4: bc    4, 1, 0x8002F5D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F5D8;
        }
    }

label_8002F5B8:
    ctx->pc = 0x8002F5B8u;
    ctx->downcount -= 6;
    // 8002F5B8: extsb r5, r7
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_8002F5BC:
    ctx->pc = 0x8002F5BCu;
    // 8002F5BC: addi    r0, r5, -128
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-128);

label_8002F5C0:
    ctx->pc = 0x8002F5C0u;
    // 8002F5C0: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F5C4:
    ctx->pc = 0x8002F5C4u;
    // 8002F5C4: extsb r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F5C8:
    ctx->pc = 0x8002F5C8u;
    // 8002F5C8: cmpw    r0, r5
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

label_8002F5CC:
    ctx->pc = 0x8002F5CCu;
    // 8002F5CC: bc    4, 0, 0x8002F5FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F5FC;
        }
    }

label_8002F5D0:
    ctx->pc = 0x8002F5D0u;
    ctx->downcount -= 2;
    // 8002F5D0: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8002F5D4:
    ctx->pc = 0x8002F5D4u;
    // 8002F5D4: b       0x8002F5FC
    {
            goto label_8002F5FC;
    }

label_8002F5D8:
    ctx->pc = 0x8002F5D8u;
    ctx->downcount -= 2;
    // 8002F5D8: extsb. r0, r7
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[7];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F5DC:
    ctx->pc = 0x8002F5DCu;
    // 8002F5DC: bc    4, 0, 0x8002F5FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F5FC;
        }
    }

label_8002F5E0:
    ctx->pc = 0x8002F5E0u;
    ctx->downcount -= 6;
    // 8002F5E0: extsb r5, r7
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_8002F5E4:
    ctx->pc = 0x8002F5E4u;
    // 8002F5E4: addi    r0, r5, 127
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(127);

label_8002F5E8:
    ctx->pc = 0x8002F5E8u;
    // 8002F5E8: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F5EC:
    ctx->pc = 0x8002F5ECu;
    // 8002F5EC: extsb r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F5F0:
    ctx->pc = 0x8002F5F0u;
    // 8002F5F0: cmpw    r5, r0
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

label_8002F5F4:
    ctx->pc = 0x8002F5F4u;
    // 8002F5F4: bc    4, 0, 0x8002F5FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F5FC;
        }
    }

label_8002F5F8:
    ctx->pc = 0x8002F5F8u;
    ctx->downcount -= 1;
    // 8002F5F8: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8002F5FC:
    ctx->pc = 0x8002F5FCu;
    ctx->downcount -= 6;
    // 8002F5FC: subf   r6, r7, r6
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_8002F600:
    ctx->pc = 0x8002F600u;
    // 8002F600: stb     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8002F604:
    ctx->pc = 0x8002F604u;
    // 8002F604: lbz     r7, 5(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8002F608:
    ctx->pc = 0x8002F608u;
    // 8002F608: lbz     r6, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8002F60C:
    ctx->pc = 0x8002F60Cu;
    // 8002F60C: extsb. r0, r7
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[7];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F610:
    ctx->pc = 0x8002F610u;
    // 8002F610: bc    4, 1, 0x8002F634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F634;
        }
    }

label_8002F614:
    ctx->pc = 0x8002F614u;
    ctx->downcount -= 6;
    // 8002F614: extsb r5, r7
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_8002F618:
    ctx->pc = 0x8002F618u;
    // 8002F618: addi    r0, r5, -128
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-128);

label_8002F61C:
    ctx->pc = 0x8002F61Cu;
    // 8002F61C: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F620:
    ctx->pc = 0x8002F620u;
    // 8002F620: extsb r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F624:
    ctx->pc = 0x8002F624u;
    // 8002F624: cmpw    r0, r5
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

label_8002F628:
    ctx->pc = 0x8002F628u;
    // 8002F628: bc    4, 0, 0x8002F658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F658;
        }
    }

label_8002F62C:
    ctx->pc = 0x8002F62Cu;
    ctx->downcount -= 2;
    // 8002F62C: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8002F630:
    ctx->pc = 0x8002F630u;
    // 8002F630: b       0x8002F658
    {
            goto label_8002F658;
    }

label_8002F634:
    ctx->pc = 0x8002F634u;
    ctx->downcount -= 2;
    // 8002F634: extsb. r0, r7
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[7];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8002F638:
    ctx->pc = 0x8002F638u;
    // 8002F638: bc    4, 0, 0x8002F658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F658;
        }
    }

label_8002F63C:
    ctx->pc = 0x8002F63Cu;
    ctx->downcount -= 6;
    // 8002F63C: extsb r5, r7
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[7];
    }

label_8002F640:
    ctx->pc = 0x8002F640u;
    // 8002F640: addi    r0, r5, 127
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(127);

label_8002F644:
    ctx->pc = 0x8002F644u;
    // 8002F644: extsb r5, r0
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_8002F648:
    ctx->pc = 0x8002F648u;
    // 8002F648: extsb r0, r6
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[6];
    }

label_8002F64C:
    ctx->pc = 0x8002F64Cu;
    // 8002F64C: cmpw    r5, r0
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

label_8002F650:
    ctx->pc = 0x8002F650u;
    // 8002F650: bc    4, 0, 0x8002F658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F658;
        }
    }

label_8002F654:
    ctx->pc = 0x8002F654u;
    ctx->downcount -= 1;
    // 8002F654: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8002F658:
    ctx->pc = 0x8002F658u;
    ctx->downcount -= 6;
    // 8002F658: subf   r6, r7, r6
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_8002F65C:
    ctx->pc = 0x8002F65Cu;
    // 8002F65C: stb     r6, 5(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8002F660:
    ctx->pc = 0x8002F660u;
    // 8002F660: lbz     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002F664:
    ctx->pc = 0x8002F664u;
    // 8002F664: lbz     r5, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8002F668:
    ctx->pc = 0x8002F668u;
    // 8002F668: cmplw   r5, r0
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

label_8002F66C:
    ctx->pc = 0x8002F66Cu;
    // 8002F66C: bc    4, 0, 0x8002F674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F674;
        }
    }

label_8002F670:
    ctx->pc = 0x8002F670u;
    ctx->downcount -= 1;
    // 8002F670: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8002F674:
    ctx->pc = 0x8002F674u;
    ctx->downcount -= 6;
    // 8002F674: subf   r5, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8002F678:
    ctx->pc = 0x8002F678u;
    // 8002F678: stb     r5, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_8002F67C:
    ctx->pc = 0x8002F67Cu;
    // 8002F67C: lbz     r0, 7(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002F680:
    ctx->pc = 0x8002F680u;
    // 8002F680: lbz     r3, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8002F684:
    ctx->pc = 0x8002F684u;
    // 8002F684: cmplw   r3, r0
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

label_8002F688:
    ctx->pc = 0x8002F688u;
    // 8002F688: bc    4, 0, 0x8002F690
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F690;
        }
    }

label_8002F68C:
    ctx->pc = 0x8002F68Cu;
    ctx->downcount -= 1;
    // 8002F68C: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8002F690:
    ctx->pc = 0x8002F690u;
    ctx->downcount -= 3;
    // 8002F690: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_8002F694:
    ctx->pc = 0x8002F694u;
    // 8002F694: stb     r3, 7(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_8002F698:
    ctx->pc = 0x8002F698u;
    // 8002F698: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F69C:
    ctx->pc = 0x8002F69Cu;
    ctx->downcount -= 8;
    // 8002F69C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002F6A0:
    ctx->pc = 0x8002F6A0u;
    // 8002F6A0: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F6A4:
    ctx->pc = 0x8002F6A4u;
    // 8002F6A4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002F6A8:
    ctx->pc = 0x8002F6A8u;
    // 8002F6A8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002F6AC:
    ctx->pc = 0x8002F6ACu;
    // 8002F6AC: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8002F6B0:
    ctx->pc = 0x8002F6B0u;
    // 8002F6B0: lwz     r0, -31624(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31624);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F6B4:
    ctx->pc = 0x8002F6B4u;
    // 8002F6B4: cmplwi  r0, 0x0000
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

label_8002F6B8:
    ctx->pc = 0x8002F6B8u;
    // 8002F6B8: bc    12, 2, 0x8002F6C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F6C4;
        }
    }

label_8002F6BC:
    ctx->pc = 0x8002F6BCu;
    ctx->downcount -= 2;
    // 8002F6BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002F6C0:
    ctx->pc = 0x8002F6C0u;
    // 8002F6C0: bl      0x8002F7B8
    {
            ctx->lr = 0x8002F6C4u;
            goto label_8002F7B8;
    }

label_8002F6C4:
    ctx->pc = 0x8002F6C4u;
    ctx->downcount -= 2;
    // 8002F6C4: cmpwi   r31, 0
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

label_8002F6C8:
    ctx->pc = 0x8002F6C8u;
    // 8002F6C8: bc    4, 2, 0x8002F738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F738;
        }
    }

label_8002F6CC:
    ctx->pc = 0x8002F6CCu;
    ctx->downcount -= 5;
    // 8002F6CC: lwz     r0, -31648(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F6D0:
    ctx->pc = 0x8002F6D0u;
    // 8002F6D0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8002F6D4:
    ctx->pc = 0x8002F6D4u;
    // 8002F6D4: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8002F6D8:
    ctx->pc = 0x8002F6D8u;
    // 8002F6D8: cmplwi  r0, 0x0000
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

label_8002F6DC:
    ctx->pc = 0x8002F6DCu;
    // 8002F6DC: bc    4, 2, 0x8002F6F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F6F0;
        }
    }

label_8002F6E0:
    ctx->pc = 0x8002F6E0u;
    ctx->downcount -= 3;
    // 8002F6E0: lwz     r0, -32548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32548);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F6E4:
    ctx->pc = 0x8002F6E4u;
    // 8002F6E4: cmpwi   r0, 32
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

label_8002F6E8:
    ctx->pc = 0x8002F6E8u;
    // 8002F6E8: bc    4, 2, 0x8002F6F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F6F0;
        }
    }

label_8002F6EC:
    ctx->pc = 0x8002F6ECu;
    ctx->downcount -= 1;
    // 8002F6EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8002F6F0:
    ctx->pc = 0x8002F6F0u;
    ctx->downcount -= 2;
    // 8002F6F0: cmpwi   r3, 0
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

label_8002F6F4:
    ctx->pc = 0x8002F6F4u;
    // 8002F6F4: bc    12, 2, 0x8002F708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F708;
        }
    }

label_8002F6F8:
    ctx->pc = 0x8002F6F8u;
    ctx->downcount -= 1;
    // 8002F6F8: bl      0x8001A648
    {
            ctx->lr = 0x8002F6FCu;
            ctx->pc = 0x8001A648u;
            return;
    }

label_8002F6FC:
    ctx->pc = 0x8002F6FCu;
    ctx->downcount -= 2;
    // 8002F6FC: cmpwi   r3, 0
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

label_8002F700:
    ctx->pc = 0x8002F700u;
    // 8002F700: bc    4, 2, 0x8002F708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F708;
        }
    }

label_8002F704:
    ctx->pc = 0x8002F704u;
    ctx->downcount -= 1;
    // 8002F704: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_8002F708:
    ctx->pc = 0x8002F708u;
    ctx->downcount -= 3;
    // 8002F708: lwz     r0, -31620(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31620);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F70C:
    ctx->pc = 0x8002F70Cu;
    // 8002F70C: cmpwi   r0, 0
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

label_8002F710:
    ctx->pc = 0x8002F710u;
    // 8002F710: bc    4, 2, 0x8002F730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002F730;
        }
    }

label_8002F714:
    ctx->pc = 0x8002F714u;
    ctx->downcount -= 2;
    // 8002F714: cmpwi   r31, 0
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

label_8002F718:
    ctx->pc = 0x8002F718u;
    // 8002F718: bc    12, 2, 0x8002F730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F730;
        }
    }

label_8002F71C:
    ctx->pc = 0x8002F71Cu;
    ctx->downcount -= 2;
    // 8002F71C: lis     r3, -4096
    ctx->gpr[3] = ((u32)(s32)(-4096) << 16);

label_8002F720:
    ctx->pc = 0x8002F720u;
    // 8002F720: bl      0x8002E8C8
    {
            ctx->lr = 0x8002F724u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002E8C8u;
                return;
            }
            goto label_8002E8C8;
    }

label_8002F724:
    ctx->pc = 0x8002F724u;
    ctx->downcount -= 3;
    // 8002F724: stw     r3, -31620(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31620);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8002F728:
    ctx->pc = 0x8002F728u;
    // 8002F728: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002F72C:
    ctx->pc = 0x8002F72Cu;
    // 8002F72C: b       0x8002F744
    {
            goto label_8002F744;
    }

label_8002F730:
    ctx->pc = 0x8002F730u;
    ctx->downcount -= 2;
    // 8002F730: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002F734:
    ctx->pc = 0x8002F734u;
    // 8002F734: b       0x8002F744
    {
            goto label_8002F744;
    }

label_8002F738:
    ctx->pc = 0x8002F738u;
    ctx->downcount -= 3;
    // 8002F738: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002F73C:
    ctx->pc = 0x8002F73Cu;
    // 8002F73C: stw     r0, -31620(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31620);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F740:
    ctx->pc = 0x8002F740u;
    // 8002F740: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8002F744:
    ctx->pc = 0x8002F744u;
    ctx->downcount -= 6;
    // 8002F744: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F748:
    ctx->pc = 0x8002F748u;
    // 8002F748: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002F74C:
    ctx->pc = 0x8002F74Cu;
    // 8002F74C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8002F750:
    ctx->pc = 0x8002F750u;
    // 8002F750: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002F754:
    ctx->pc = 0x8002F754u;
    // 8002F754: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F758:
    ctx->pc = 0x8002F758u;
    ctx->downcount -= 8;
    // 8002F758: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002F75C:
    ctx->pc = 0x8002F75Cu;
    // 8002F75C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F760:
    ctx->pc = 0x8002F760u;
    // 8002F760: stwu     r1, -736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-736);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002F764:
    ctx->pc = 0x8002F764u;
    // 8002F764: stw     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002F768:
    ctx->pc = 0x8002F768u;
    // 8002F768: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_8002F76C:
    ctx->pc = 0x8002F76Cu;
    // 8002F76C: lwz     r0, -31624(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31624);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F770:
    ctx->pc = 0x8002F770u;
    // 8002F770: cmplwi  r0, 0x0000
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

label_8002F774:
    ctx->pc = 0x8002F774u;
    // 8002F774: bc    12, 2, 0x8002F7A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F7A4;
        }
    }

label_8002F778:
    ctx->pc = 0x8002F778u;
    ctx->downcount -= 2;
    // 8002F778: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8002F77C:
    ctx->pc = 0x8002F77Cu;
    // 8002F77C: bl      0x8001E4A4
    {
            ctx->lr = 0x8002F780u;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_8002F780:
    ctx->pc = 0x8002F780u;
    ctx->downcount -= 2;
    // 8002F780: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8002F784:
    ctx->pc = 0x8002F784u;
    // 8002F784: bl      0x8001E2AC
    {
            ctx->lr = 0x8002F788u;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_8002F788:
    ctx->pc = 0x8002F788u;
    ctx->downcount -= 4;
    // 8002F788: lwz     r12, -31624(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31624);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8002F78C:
    ctx->pc = 0x8002F78Cu;
    // 8002F78C: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_8002F790:
    ctx->pc = 0x8002F790u;
    // 8002F790: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8002F794u;
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F794:
    ctx->pc = 0x8002F794u;
    ctx->downcount -= 2;
    // 8002F794: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8002F798:
    ctx->pc = 0x8002F798u;
    // 8002F798: bl      0x8001E4A4
    {
            ctx->lr = 0x8002F79Cu;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_8002F79C:
    ctx->pc = 0x8002F79Cu;
    ctx->downcount -= 2;
    // 8002F79C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002F7A0:
    ctx->pc = 0x8002F7A0u;
    // 8002F7A0: bl      0x8001E2AC
    {
            ctx->lr = 0x8002F7A4u;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_8002F7A4:
    ctx->pc = 0x8002F7A4u;
    ctx->downcount -= 6;
    // 8002F7A4: lwz     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F7A8:
    ctx->pc = 0x8002F7A8u;
    // 8002F7A8: lwz     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002F7AC:
    ctx->pc = 0x8002F7ACu;
    // 8002F7AC: addi    r1, r1, 736
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(736);

label_8002F7B0:
    ctx->pc = 0x8002F7B0u;
    // 8002F7B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002F7B4:
    ctx->pc = 0x8002F7B4u;
    // 8002F7B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F7B8:
    ctx->pc = 0x8002F7B8u;
    ctx->downcount -= 8;
    // 8002F7B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002F7BC:
    ctx->pc = 0x8002F7BCu;
    // 8002F7BC: cmplwi  r3, 0x0000
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

label_8002F7C0:
    ctx->pc = 0x8002F7C0u;
    // 8002F7C0: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F7C4:
    ctx->pc = 0x8002F7C4u;
    // 8002F7C4: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002F7C8:
    ctx->pc = 0x8002F7C8u;
    // 8002F7C8: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002F7CC:
    ctx->pc = 0x8002F7CCu;
    // 8002F7CC: lwz     r31, -31624(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31624);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002F7D0:
    ctx->pc = 0x8002F7D0u;
    // 8002F7D0: stw     r3, -31624(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31624);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8002F7D4:
    ctx->pc = 0x8002F7D4u;
    // 8002F7D4: bc    12, 2, 0x8002F7E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F7E8;
        }
    }

label_8002F7D8:
    ctx->pc = 0x8002F7D8u;
    ctx->downcount -= 3;
    // 8002F7D8: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_8002F7DC:
    ctx->pc = 0x8002F7DCu;
    // 8002F7DC: addi    r3, r3, -2216
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2216);

label_8002F7E0:
    ctx->pc = 0x8002F7E0u;
    // 8002F7E0: bl      0x8001AD7C
    {
            ctx->lr = 0x8002F7E4u;
            ctx->pc = 0x8001AD7Cu;
            return;
    }

label_8002F7E4:
    ctx->pc = 0x8002F7E4u;
    ctx->downcount -= 1;
    // 8002F7E4: b       0x8002F7F4
    {
            goto label_8002F7F4;
    }

label_8002F7E8:
    ctx->pc = 0x8002F7E8u;
    ctx->downcount -= 3;
    // 8002F7E8: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_8002F7EC:
    ctx->pc = 0x8002F7ECu;
    // 8002F7EC: addi    r3, r3, -2216
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2216);

label_8002F7F0:
    ctx->pc = 0x8002F7F0u;
    // 8002F7F0: bl      0x8001AE48
    {
            ctx->lr = 0x8002F7F4u;
            ctx->pc = 0x8001AE48u;
            return;
    }

label_8002F7F4:
    ctx->pc = 0x8002F7F4u;
    ctx->downcount -= 7;
    // 8002F7F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002F7F8:
    ctx->pc = 0x8002F7F8u;
    // 8002F7F8: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F7FC:
    ctx->pc = 0x8002F7FCu;
    // 8002F7FC: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002F800:
    ctx->pc = 0x8002F800u;
    // 8002F800: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8002F804:
    ctx->pc = 0x8002F804u;
    // 8002F804: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002F808:
    ctx->pc = 0x8002F808u;
    // 8002F808: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F80C:
    ctx->pc = 0x8002F80Cu;
    ctx->downcount -= 7;
    // 8002F80C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002F810:
    ctx->pc = 0x8002F810u;
    // 8002F810: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F814:
    ctx->pc = 0x8002F814u;
    // 8002F814: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002F818:
    ctx->pc = 0x8002F818u;
    // 8002F818: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002F81C:
    ctx->pc = 0x8002F81Cu;
    // 8002F81C: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002F820:
    ctx->pc = 0x8002F820u;
    // 8002F820: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002F824:
    ctx->pc = 0x8002F824u;
    // 8002F824: bl      0x80020680
    {
            ctx->lr = 0x8002F828u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002F828:
    ctx->pc = 0x8002F828u;
    ctx->downcount -= 4;
    // 8002F828: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_8002F82C:
    ctx->pc = 0x8002F82Cu;
    // 8002F82C: lbz     r0, 12515(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12515);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002F830:
    ctx->pc = 0x8002F830u;
    // 8002F830: rlwinm. r0, r0, 0, 25, 25
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

label_8002F834:
    ctx->pc = 0x8002F834u;
    // 8002F834: bc    12, 2, 0x8002F840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F840;
        }
    }

label_8002F838:
    ctx->pc = 0x8002F838u;
    ctx->downcount -= 2;
    // 8002F838: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_8002F83C:
    ctx->pc = 0x8002F83Cu;
    // 8002F83C: b       0x8002F844
    {
            goto label_8002F844;
    }

label_8002F840:
    ctx->pc = 0x8002F840u;
    ctx->downcount -= 1;
    // 8002F840: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8002F844:
    ctx->pc = 0x8002F844u;
    ctx->downcount -= 6;
    // 8002F844: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_8002F848:
    ctx->pc = 0x8002F848u;
    // 8002F848: lbz     r0, 12515(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12515);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002F84C:
    ctx->pc = 0x8002F84Cu;
    // 8002F84C: cmpwi   r30, 0
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

label_8002F850:
    ctx->pc = 0x8002F850u;
    // 8002F850: rlwinm r0, r0, 0, 26, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFBFu;
    }

label_8002F854:
    ctx->pc = 0x8002F854u;
    // 8002F854: stb     r0, 12515(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12515);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F858:
    ctx->pc = 0x8002F858u;
    // 8002F858: bc    12, 2, 0x8002F868
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002F868;
        }
    }

label_8002F85C:
    ctx->pc = 0x8002F85Cu;
    ctx->downcount -= 3;
    // 8002F85C: lbz     r0, 12515(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12515);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8002F860:
    ctx->pc = 0x8002F860u;
    // 8002F860: ori     r0, r0, 0x0040
    ctx->gpr[0] = ctx->gpr[0] | 0x0040u;

label_8002F864:
    ctx->pc = 0x8002F864u;
    // 8002F864: stb     r0, 12515(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12515);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8002F868:
    ctx->pc = 0x8002F868u;
    ctx->downcount -= 1;
    // 8002F868: bl      0x800206A8
    {
            ctx->lr = 0x8002F86Cu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002F86C:
    ctx->pc = 0x8002F86Cu;
    ctx->downcount -= 8;
    // 8002F86C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002F870:
    ctx->pc = 0x8002F870u;
    // 8002F870: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F874:
    ctx->pc = 0x8002F874u;
    // 8002F874: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002F878:
    ctx->pc = 0x8002F878u;
    // 8002F878: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002F87C:
    ctx->pc = 0x8002F87Cu;
    // 8002F87C: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8002F880:
    ctx->pc = 0x8002F880u;
    // 8002F880: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002F884:
    ctx->pc = 0x8002F884u;
    // 8002F884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F888:
    ctx->pc = 0x8002F888u;
    ctx->downcount -= 8;
    // 8002F888: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002F88C:
    ctx->pc = 0x8002F88Cu;
    // 8002F88C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F890:
    ctx->pc = 0x8002F890u;
    // 8002F890: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002F894:
    ctx->pc = 0x8002F894u;
    // 8002F894: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002F898:
    ctx->pc = 0x8002F898u;
    // 8002F898: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002F89C:
    ctx->pc = 0x8002F89Cu;
    // 8002F89C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002F8A0:
    ctx->pc = 0x8002F8A0u;
    // 8002F8A0: lwz     r31, -31604(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31604);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002F8A4:
    ctx->pc = 0x8002F8A4u;
    // 8002F8A4: bl      0x80020680
    {
            ctx->lr = 0x8002F8A8u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002F8A8:
    ctx->pc = 0x8002F8A8u;
    ctx->downcount -= 2;
    // 8002F8A8: stw     r30, -31604(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31604);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002F8AC:
    ctx->pc = 0x8002F8ACu;
    // 8002F8AC: bl      0x800206A8
    {
            ctx->lr = 0x8002F8B0u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002F8B0:
    ctx->pc = 0x8002F8B0u;
    ctx->downcount -= 8;
    // 8002F8B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002F8B4:
    ctx->pc = 0x8002F8B4u;
    // 8002F8B4: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F8B8:
    ctx->pc = 0x8002F8B8u;
    // 8002F8B8: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002F8BC:
    ctx->pc = 0x8002F8BCu;
    // 8002F8BC: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002F8C0:
    ctx->pc = 0x8002F8C0u;
    // 8002F8C0: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8002F8C4:
    ctx->pc = 0x8002F8C4u;
    // 8002F8C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002F8C8:
    ctx->pc = 0x8002F8C8u;
    // 8002F8C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F8CC:
    ctx->pc = 0x8002F8CCu;
    ctx->downcount -= 8;
    // 8002F8CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002F8D0:
    ctx->pc = 0x8002F8D0u;
    // 8002F8D0: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F8D4:
    ctx->pc = 0x8002F8D4u;
    // 8002F8D4: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002F8D8:
    ctx->pc = 0x8002F8D8u;
    // 8002F8D8: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002F8DC:
    ctx->pc = 0x8002F8DCu;
    // 8002F8DC: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_8002F8E0:
    ctx->pc = 0x8002F8E0u;
    // 8002F8E0: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002F8E4:
    ctx->pc = 0x8002F8E4u;
    // 8002F8E4: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_8002F8E8:
    ctx->pc = 0x8002F8E8u;
    // 8002F8E8: bl      0x80020680
    {
            ctx->lr = 0x8002F8ECu;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002F8EC:
    ctx->pc = 0x8002F8ECu;
    ctx->downcount -= 20;
    // 8002F8EC: lis     r4, -13312
    ctx->gpr[4] = ((u32)(s32)(-13312) << 16);

label_8002F8F0:
    ctx->pc = 0x8002F8F0u;
    // 8002F8F0: lhz     r0, 20528(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20528);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002F8F4:
    ctx->pc = 0x8002F8F4u;
    // 8002F8F4: addi    r5, r4, 20480
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20480);

label_8002F8F8:
    ctx->pc = 0x8002F8F8u;
    // 8002F8F8: addi    r6, r4, 20480
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(20480);

label_8002F8FC:
    ctx->pc = 0x8002F8FCu;
    // 8002F8FC: addi    r7, r4, 20480
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(20480);

label_8002F900:
    ctx->pc = 0x8002F900u;
    // 8002F900: rlwinm r4, r0, 0, 0, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_8002F904:
    ctx->pc = 0x8002F904u;
    // 8002F904: rlwinm r0, r30, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 16u) & 0x0000FFFFu;
    }

label_8002F908:
    ctx->pc = 0x8002F908u;
    // 8002F908: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8002F90C:
    ctx->pc = 0x8002F90Cu;
    // 8002F90C: sth     r0, 48(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F910:
    ctx->pc = 0x8002F910u;
    // 8002F910: rlwinm r0, r30, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x0000FFFFu;
    }

label_8002F914:
    ctx->pc = 0x8002F914u;
    // 8002F914: lhz     r4, 50(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(50);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002F918:
    ctx->pc = 0x8002F918u;
    // 8002F918: rlwinm r4, r4, 0, 27, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFF001Fu;
    }

label_8002F91C:
    ctx->pc = 0x8002F91Cu;
    // 8002F91C: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8002F920:
    ctx->pc = 0x8002F920u;
    // 8002F920: sth     r0, 50(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F924:
    ctx->pc = 0x8002F924u;
    // 8002F924: rlwinm r0, r31, 27, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 27u) & 0x0000FFFFu;
    }

label_8002F928:
    ctx->pc = 0x8002F928u;
    // 8002F928: lhz     r4, 54(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(54);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8002F92C:
    ctx->pc = 0x8002F92Cu;
    // 8002F92C: rlwinm r4, r4, 0, 0, 16
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFF8000u;
    }

label_8002F930:
    ctx->pc = 0x8002F930u;
    // 8002F930: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8002F934:
    ctx->pc = 0x8002F934u;
    // 8002F934: sth     r0, 54(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F938:
    ctx->pc = 0x8002F938u;
    // 8002F938: bl      0x800206A8
    {
            ctx->lr = 0x8002F93Cu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002F93C:
    ctx->pc = 0x8002F93Cu;
    ctx->downcount -= 7;
    // 8002F93C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F940:
    ctx->pc = 0x8002F940u;
    // 8002F940: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002F944:
    ctx->pc = 0x8002F944u;
    // 8002F944: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002F948:
    ctx->pc = 0x8002F948u;
    // 8002F948: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8002F94C:
    ctx->pc = 0x8002F94Cu;
    // 8002F94C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002F950:
    ctx->pc = 0x8002F950u;
    // 8002F950: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F954:
    ctx->pc = 0x8002F954u;
    ctx->downcount -= 6;
    // 8002F954: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_8002F958:
    ctx->pc = 0x8002F958u;
    // 8002F958: addi    r3, r3, 20480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20480);

label_8002F95C:
    ctx->pc = 0x8002F95Cu;
    // 8002F95C: lhz     r0, 54(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(54);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8002F960:
    ctx->pc = 0x8002F960u;
    // 8002F960: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_8002F964:
    ctx->pc = 0x8002F964u;
    // 8002F964: sth     r0, 54(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(54);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002F968:
    ctx->pc = 0x8002F968u;
    // 8002F968: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002F96C:
    ctx->pc = 0x8002F96Cu;
    ctx->downcount -= 8;
    // 8002F96C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002F970:
    ctx->pc = 0x8002F970u;
    // 8002F970: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F974:
    ctx->pc = 0x8002F974u;
    // 8002F974: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002F978:
    ctx->pc = 0x8002F978u;
    // 8002F978: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002F97C:
    ctx->pc = 0x8002F97Cu;
    // 8002F97C: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002F980:
    ctx->pc = 0x8002F980u;
    // 8002F980: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8002F984:
    ctx->pc = 0x8002F984u;
    // 8002F984: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002F988:
    ctx->pc = 0x8002F988u;
    // 8002F988: bl      0x8002FA44
    {
            ctx->lr = 0x8002F98Cu;
            goto label_8002FA44;
    }

label_8002F98C:
    ctx->pc = 0x8002F98Cu;
    ctx->downcount -= 2;
    // 8002F98C: cmplw   r29, r3
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F990:
    ctx->pc = 0x8002F990u;
    // 8002F990: bc    12, 2, 0x8002FA28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002FA28;
        }
    }

label_8002F994:
    ctx->pc = 0x8002F994u;
    ctx->downcount -= 1;
    // 8002F994: bl      0x8002FC1C
    {
            ctx->lr = 0x8002F998u;
            goto label_8002FC1C;
    }

label_8002F998:
    ctx->pc = 0x8002F998u;
    ctx->downcount -= 2;
    // 8002F998: cmplwi  r3, 0x0000
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

label_8002F99C:
    ctx->pc = 0x8002F99Cu;
    // 8002F99C: bc    4, 2, 0x8002FA14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002FA14;
        }
    }

label_8002F9A0:
    ctx->pc = 0x8002F9A0u;
    ctx->downcount -= 2;
    // 8002F9A0: cmplwi  r29, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002F9A4:
    ctx->pc = 0x8002F9A4u;
    // 8002F9A4: bc    4, 2, 0x8002FA14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002FA14;
        }
    }

label_8002F9A8:
    ctx->pc = 0x8002F9A8u;
    ctx->downcount -= 1;
    // 8002F9A8: bl      0x8002FC74
    {
            ctx->lr = 0x8002F9ACu;
            goto label_8002FC74;
    }

label_8002F9AC:
    ctx->pc = 0x8002F9ACu;
    ctx->downcount -= 2;
    // 8002F9AC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002F9B0:
    ctx->pc = 0x8002F9B0u;
    // 8002F9B0: bl      0x8002FC48
    {
            ctx->lr = 0x8002F9B4u;
            goto label_8002FC48;
    }

label_8002F9B4:
    ctx->pc = 0x8002F9B4u;
    ctx->downcount -= 3;
    // 8002F9B4: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_8002F9B8:
    ctx->pc = 0x8002F9B8u;
    // 8002F9B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002F9BC:
    ctx->pc = 0x8002F9BCu;
    // 8002F9BC: bl      0x8002FC58
    {
            ctx->lr = 0x8002F9C0u;
            goto label_8002FC58;
    }

label_8002F9C0:
    ctx->pc = 0x8002F9C0u;
    ctx->downcount -= 2;
    // 8002F9C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002F9C4:
    ctx->pc = 0x8002F9C4u;
    // 8002F9C4: bl      0x8002FC2C
    {
            ctx->lr = 0x8002F9C8u;
            goto label_8002FC2C;
    }

label_8002F9C8:
    ctx->pc = 0x8002F9C8u;
    ctx->downcount -= 1;
    // 8002F9C8: bl      0x80020680
    {
            ctx->lr = 0x8002F9CCu;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002F9CC:
    ctx->pc = 0x8002F9CCu;
    ctx->downcount -= 2;
    // 8002F9CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002F9D0:
    ctx->pc = 0x8002F9D0u;
    // 8002F9D0: bl      0x8002FF70
    {
            ctx->lr = 0x8002F9D4u;
            goto label_8002FF70;
    }

label_8002F9D4:
    ctx->pc = 0x8002F9D4u;
    ctx->downcount -= 11;
    // 8002F9D4: lis     r4, -13312
    ctx->gpr[4] = ((u32)(s32)(-13312) << 16);

label_8002F9D8:
    ctx->pc = 0x8002F9D8u;
    // 8002F9D8: lwz     r0, 27648(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F9DC:
    ctx->pc = 0x8002F9DCu;
    // 8002F9DC: addi    r3, r31, 0
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(0);

label_8002F9E0:
    ctx->pc = 0x8002F9E0u;
    // 8002F9E0: rlwinm r0, r0, 0, 27, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFDFu;
    }

label_8002F9E4:
    ctx->pc = 0x8002F9E4u;
    // 8002F9E4: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_8002F9E8:
    ctx->pc = 0x8002F9E8u;
    // 8002F9E8: stw     r0, 27648(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F9EC:
    ctx->pc = 0x8002F9ECu;
    // 8002F9EC: lwz     r0, 27648(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002F9F0:
    ctx->pc = 0x8002F9F0u;
    // 8002F9F0: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_8002F9F4:
    ctx->pc = 0x8002F9F4u;
    // 8002F9F4: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_8002F9F8:
    ctx->pc = 0x8002F9F8u;
    // 8002F9F8: stw     r0, 27648(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002F9FC:
    ctx->pc = 0x8002F9FCu;
    // 8002F9FC: bl      0x800206A8
    {
            ctx->lr = 0x8002FA00u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002FA00:
    ctx->pc = 0x8002FA00u;
    ctx->downcount -= 2;
    // 8002FA00: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8002FA04:
    ctx->pc = 0x8002FA04u;
    // 8002FA04: bl      0x8002FC2C
    {
            ctx->lr = 0x8002FA08u;
            goto label_8002FC2C;
    }

label_8002FA08:
    ctx->pc = 0x8002FA08u;
    ctx->downcount -= 2;
    // 8002FA08: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8002FA0C:
    ctx->pc = 0x8002FA0Cu;
    // 8002FA0C: bl      0x8002FC58
    {
            ctx->lr = 0x8002FA10u;
            goto label_8002FC58;
    }

label_8002FA10:
    ctx->pc = 0x8002FA10u;
    ctx->downcount -= 1;
    // 8002FA10: b       0x8002FA28
    {
            goto label_8002FA28;
    }

label_8002FA14:
    ctx->pc = 0x8002FA14u;
    ctx->downcount -= 5;
    // 8002FA14: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_8002FA18:
    ctx->pc = 0x8002FA18u;
    // 8002FA18: lwz     r0, 27648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FA1C:
    ctx->pc = 0x8002FA1Cu;
    // 8002FA1C: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_8002FA20:
    ctx->pc = 0x8002FA20u;
    // 8002FA20: or   r0, r0, r29
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[29];
    }

label_8002FA24:
    ctx->pc = 0x8002FA24u;
    // 8002FA24: stw     r0, 27648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FA28:
    ctx->pc = 0x8002FA28u;
    ctx->downcount -= 8;
    // 8002FA28: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FA2C:
    ctx->pc = 0x8002FA2Cu;
    // 8002FA2C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002FA30:
    ctx->pc = 0x8002FA30u;
    // 8002FA30: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002FA34:
    ctx->pc = 0x8002FA34u;
    // 8002FA34: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8002FA38:
    ctx->pc = 0x8002FA38u;
    // 8002FA38: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8002FA3C:
    ctx->pc = 0x8002FA3Cu;
    // 8002FA3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002FA40:
    ctx->pc = 0x8002FA40u;
    // 8002FA40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FA44:
    ctx->pc = 0x8002FA44u;
    ctx->downcount -= 4;
    // 8002FA44: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_8002FA48:
    ctx->pc = 0x8002FA48u;
    // 8002FA48: lwz     r0, 27648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FA4C:
    ctx->pc = 0x8002FA4Cu;
    // 8002FA4C: rlwinm r3, r0, 0, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_8002FA50:
    ctx->pc = 0x8002FA50u;
    // 8002FA50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FA54:
    ctx->pc = 0x8002FA54u;
    ctx->downcount -= 16;
    // 8002FA54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002FA58:
    ctx->pc = 0x8002FA58u;
    // 8002FA58: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FA5C:
    ctx->pc = 0x8002FA5Cu;
    // 8002FA5C: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002FA60:
    ctx->pc = 0x8002FA60u;
    // 8002FA60: stmw     r26, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8002FA64:
    ctx->pc = 0x8002FA64u;
    // 8002FA64: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002FA68:
    ctx->pc = 0x8002FA68u;
    // 8002FA68: bl      0x8002FB34
    {
            ctx->lr = 0x8002FA6Cu;
            goto label_8002FB34;
    }

label_8002FA6C:
    ctx->pc = 0x8002FA6Cu;
    ctx->downcount -= 2;
    // 8002FA6C: cmplw   r26, r3
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002FA70:
    ctx->pc = 0x8002FA70u;
    // 8002FA70: bc    12, 2, 0x8002FB20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002FB20;
        }
    }

label_8002FA74:
    ctx->pc = 0x8002FA74u;
    ctx->downcount -= 6;
    // 8002FA74: lis     r31, -13312
    ctx->gpr[31] = ((u32)(s32)(-13312) << 16);

label_8002FA78:
    ctx->pc = 0x8002FA78u;
    // 8002FA78: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FA7C:
    ctx->pc = 0x8002FA7Cu;
    // 8002FA7C: cmplwi  r26, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[26]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002FA80:
    ctx->pc = 0x8002FA80u;
    // 8002FA80: rlwinm r0, r0, 0, 26, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFBFu;
    }

label_8002FA84:
    ctx->pc = 0x8002FA84u;
    // 8002FA84: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FA88:
    ctx->pc = 0x8002FA88u;
    // 8002FA88: bc    4, 2, 0x8002FB20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002FB20;
        }
    }

label_8002FA8C:
    ctx->pc = 0x8002FA8Cu;
    ctx->downcount -= 1;
    // 8002FA8C: bl      0x8002FC48
    {
            ctx->lr = 0x8002FA90u;
            goto label_8002FC48;
    }

label_8002FA90:
    ctx->pc = 0x8002FA90u;
    ctx->downcount -= 2;
    // 8002FA90: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002FA94:
    ctx->pc = 0x8002FA94u;
    // 8002FA94: bl      0x8002FC74
    {
            ctx->lr = 0x8002FA98u;
            goto label_8002FC74;
    }

label_8002FA98:
    ctx->pc = 0x8002FA98u;
    ctx->downcount -= 4;
    // 8002FA98: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FA9C:
    ctx->pc = 0x8002FA9Cu;
    // 8002FA9C: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_8002FAA0:
    ctx->pc = 0x8002FAA0u;
    // 8002FAA0: rlwinm r27, r0, 0, 31, 31
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_8002FAA4:
    ctx->pc = 0x8002FAA4u;
    // 8002FAA4: bl      0x8002FC1C
    {
            ctx->lr = 0x8002FAA8u;
            goto label_8002FC1C;
    }

label_8002FAA8:
    ctx->pc = 0x8002FAA8u;
    ctx->downcount -= 3;
    // 8002FAA8: addi    r28, r3, 0
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(0);

label_8002FAAC:
    ctx->pc = 0x8002FAACu;
    // 8002FAAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002FAB0:
    ctx->pc = 0x8002FAB0u;
    // 8002FAB0: bl      0x8002FC2C
    {
            ctx->lr = 0x8002FAB4u;
            goto label_8002FC2C;
    }

label_8002FAB4:
    ctx->pc = 0x8002FAB4u;
    ctx->downcount -= 2;
    // 8002FAB4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002FAB8:
    ctx->pc = 0x8002FAB8u;
    // 8002FAB8: bl      0x8002FC58
    {
            ctx->lr = 0x8002FABCu;
            goto label_8002FC58;
    }

label_8002FABC:
    ctx->pc = 0x8002FABCu;
    ctx->downcount -= 1;
    // 8002FABC: bl      0x80020680
    {
            ctx->lr = 0x8002FAC0u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002FAC0:
    ctx->pc = 0x8002FAC0u;
    ctx->downcount -= 2;
    // 8002FAC0: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002FAC4:
    ctx->pc = 0x8002FAC4u;
    // 8002FAC4: bl      0x8002FF70
    {
            ctx->lr = 0x8002FAC8u;
            goto label_8002FF70;
    }

label_8002FAC8:
    ctx->pc = 0x8002FAC8u;
    ctx->downcount -= 18;
    // 8002FAC8: lwz     r4, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002FACC:
    ctx->pc = 0x8002FACCu;
    // 8002FACC: rlwinm r0, r28, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 1u) & 0xFFFFFFFEu;
    }

label_8002FAD0:
    ctx->pc = 0x8002FAD0u;
    // 8002FAD0: addi    r3, r26, 0
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(0);

label_8002FAD4:
    ctx->pc = 0x8002FAD4u;
    // 8002FAD4: rlwinm r4, r4, 0, 27, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFDFu;
    }

label_8002FAD8:
    ctx->pc = 0x8002FAD8u;
    // 8002FAD8: ori     r4, r4, 0x0020
    ctx->gpr[4] = ctx->gpr[4] | 0x0020u;

label_8002FADC:
    ctx->pc = 0x8002FADCu;
    // 8002FADC: stw     r4, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002FAE0:
    ctx->pc = 0x8002FAE0u;
    // 8002FAE0: lwz     r4, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002FAE4:
    ctx->pc = 0x8002FAE4u;
    // 8002FAE4: rlwinm r4, r4, 0, 31, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFFDu;
    }

label_8002FAE8:
    ctx->pc = 0x8002FAE8u;
    // 8002FAE8: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8002FAEC:
    ctx->pc = 0x8002FAECu;
    // 8002FAEC: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FAF0:
    ctx->pc = 0x8002FAF0u;
    // 8002FAF0: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FAF4:
    ctx->pc = 0x8002FAF4u;
    // 8002FAF4: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_8002FAF8:
    ctx->pc = 0x8002FAF8u;
    // 8002FAF8: or   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[27];
    }

label_8002FAFC:
    ctx->pc = 0x8002FAFCu;
    // 8002FAFC: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FB00:
    ctx->pc = 0x8002FB00u;
    // 8002FB00: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FB04:
    ctx->pc = 0x8002FB04u;
    // 8002FB04: ori     r0, r0, 0x0040
    ctx->gpr[0] = ctx->gpr[0] | 0x0040u;

label_8002FB08:
    ctx->pc = 0x8002FB08u;
    // 8002FB08: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FB0C:
    ctx->pc = 0x8002FB0Cu;
    // 8002FB0C: bl      0x800206A8
    {
            ctx->lr = 0x8002FB10u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002FB10:
    ctx->pc = 0x8002FB10u;
    ctx->downcount -= 2;
    // 8002FB10: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8002FB14:
    ctx->pc = 0x8002FB14u;
    // 8002FB14: bl      0x8002FC2C
    {
            ctx->lr = 0x8002FB18u;
            goto label_8002FC2C;
    }

label_8002FB18:
    ctx->pc = 0x8002FB18u;
    ctx->downcount -= 2;
    // 8002FB18: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8002FB1C:
    ctx->pc = 0x8002FB1Cu;
    // 8002FB1C: bl      0x8002FC58
    {
            ctx->lr = 0x8002FB20u;
            goto label_8002FC58;
    }

label_8002FB20:
    ctx->pc = 0x8002FB20u;
    ctx->downcount -= 16;
    // 8002FB20: lmw     r26, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8002FB24:
    ctx->pc = 0x8002FB24u;
    // 8002FB24: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FB28:
    ctx->pc = 0x8002FB28u;
    // 8002FB28: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_8002FB2C:
    ctx->pc = 0x8002FB2Cu;
    // 8002FB2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002FB30:
    ctx->pc = 0x8002FB30u;
    // 8002FB30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FB34:
    ctx->pc = 0x8002FB34u;
    ctx->downcount -= 5;
    // 8002FB34: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_8002FB38:
    ctx->pc = 0x8002FB38u;
    // 8002FB38: lwz     r0, 27648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FB3C:
    ctx->pc = 0x8002FB3Cu;
    // 8002FB3C: rlwinm r0, r0, 26, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 26u) & 0x00000001u;
    }

label_8002FB40:
    ctx->pc = 0x8002FB40u;
    // 8002FB40: xori    r3, r0, 0x0001
    ctx->gpr[3] = ctx->gpr[0] ^ 0x0001u;

label_8002FB44:
    ctx->pc = 0x8002FB44u;
    // 8002FB44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FB48:
    ctx->pc = 0x8002FB48u;
    ctx->downcount -= 16;
    // 8002FB48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002FB4C:
    ctx->pc = 0x8002FB4Cu;
    // 8002FB4C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FB50:
    ctx->pc = 0x8002FB50u;
    // 8002FB50: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002FB54:
    ctx->pc = 0x8002FB54u;
    // 8002FB54: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8002FB58:
    ctx->pc = 0x8002FB58u;
    // 8002FB58: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002FB5C:
    ctx->pc = 0x8002FB5Cu;
    // 8002FB5C: bl      0x8002FC1C
    {
            ctx->lr = 0x8002FB60u;
            goto label_8002FC1C;
    }

label_8002FB60:
    ctx->pc = 0x8002FB60u;
    ctx->downcount -= 2;
    // 8002FB60: cmplw   r25, r3
    {
        u32 val_a = (u32)(ctx->gpr[25]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8002FB64:
    ctx->pc = 0x8002FB64u;
    // 8002FB64: bc    12, 2, 0x8002FC08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002FC08;
        }
    }

label_8002FB68:
    ctx->pc = 0x8002FB68u;
    ctx->downcount -= 5;
    // 8002FB68: lis     r31, -13312
    ctx->gpr[31] = ((u32)(s32)(-13312) << 16);

label_8002FB6C:
    ctx->pc = 0x8002FB6Cu;
    // 8002FB6C: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FB70:
    ctx->pc = 0x8002FB70u;
    // 8002FB70: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_8002FB74:
    ctx->pc = 0x8002FB74u;
    // 8002FB74: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_8002FB78:
    ctx->pc = 0x8002FB78u;
    // 8002FB78: bl      0x8002FC48
    {
            ctx->lr = 0x8002FB7Cu;
            goto label_8002FC48;
    }

label_8002FB7C:
    ctx->pc = 0x8002FB7Cu;
    ctx->downcount -= 2;
    // 8002FB7C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002FB80:
    ctx->pc = 0x8002FB80u;
    // 8002FB80: bl      0x8002FC74
    {
            ctx->lr = 0x8002FB84u;
            goto label_8002FC74;
    }

label_8002FB84:
    ctx->pc = 0x8002FB84u;
    ctx->downcount -= 3;
    // 8002FB84: addi    r27, r3, 0
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(0);

label_8002FB88:
    ctx->pc = 0x8002FB88u;
    // 8002FB88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002FB8C:
    ctx->pc = 0x8002FB8Cu;
    // 8002FB8C: bl      0x8002FC58
    {
            ctx->lr = 0x8002FB90u;
            goto label_8002FC58;
    }

label_8002FB90:
    ctx->pc = 0x8002FB90u;
    ctx->downcount -= 2;
    // 8002FB90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002FB94:
    ctx->pc = 0x8002FB94u;
    // 8002FB94: bl      0x8002FC2C
    {
            ctx->lr = 0x8002FB98u;
            goto label_8002FC2C;
    }

label_8002FB98:
    ctx->pc = 0x8002FB98u;
    ctx->downcount -= 6;
    // 8002FB98: lwz     r3, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002FB9C:
    ctx->pc = 0x8002FB9Cu;
    // 8002FB9C: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FBA0:
    ctx->pc = 0x8002FBA0u;
    // 8002FBA0: rlwinm r26, r3, 0, 25, 25
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000040u;
    }

label_8002FBA4:
    ctx->pc = 0x8002FBA4u;
    // 8002FBA4: rlwinm r0, r0, 0, 26, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFBFu;
    }

label_8002FBA8:
    ctx->pc = 0x8002FBA8u;
    // 8002FBA8: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FBAC:
    ctx->pc = 0x8002FBACu;
    // 8002FBAC: bl      0x80020680
    {
            ctx->lr = 0x8002FBB0u;
            ctx->pc = 0x80020680u;
            return;
    }

label_8002FBB0:
    ctx->pc = 0x8002FBB0u;
    ctx->downcount -= 2;
    // 8002FBB0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002FBB4:
    ctx->pc = 0x8002FBB4u;
    // 8002FBB4: bl      0x8002FF70
    {
            ctx->lr = 0x8002FBB8u;
            goto label_8002FF70;
    }

label_8002FBB8:
    ctx->pc = 0x8002FBB8u;
    ctx->downcount -= 14;
    // 8002FBB8: lwz     r4, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002FBBC:
    ctx->pc = 0x8002FBBCu;
    // 8002FBBC: rlwinm r0, r25, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 1u) & 0xFFFFFFFEu;
    }

label_8002FBC0:
    ctx->pc = 0x8002FBC0u;
    // 8002FBC0: addi    r3, r30, 0
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(0);

label_8002FBC4:
    ctx->pc = 0x8002FBC4u;
    // 8002FBC4: or   r4, r4, r26
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[26];
    }

label_8002FBC8:
    ctx->pc = 0x8002FBC8u;
    // 8002FBC8: stw     r4, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002FBCC:
    ctx->pc = 0x8002FBCCu;
    // 8002FBCC: lwz     r4, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002FBD0:
    ctx->pc = 0x8002FBD0u;
    // 8002FBD0: rlwinm r4, r4, 0, 27, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFDFu;
    }

label_8002FBD4:
    ctx->pc = 0x8002FBD4u;
    // 8002FBD4: ori     r4, r4, 0x0020
    ctx->gpr[4] = ctx->gpr[4] | 0x0020u;

label_8002FBD8:
    ctx->pc = 0x8002FBD8u;
    // 8002FBD8: stw     r4, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002FBDC:
    ctx->pc = 0x8002FBDCu;
    // 8002FBDC: lwz     r4, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8002FBE0:
    ctx->pc = 0x8002FBE0u;
    // 8002FBE0: rlwinm r4, r4, 0, 31, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFFDu;
    }

label_8002FBE4:
    ctx->pc = 0x8002FBE4u;
    // 8002FBE4: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8002FBE8:
    ctx->pc = 0x8002FBE8u;
    // 8002FBE8: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FBEC:
    ctx->pc = 0x8002FBECu;
    // 8002FBEC: bl      0x800206A8
    {
            ctx->lr = 0x8002FBF0u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8002FBF0:
    ctx->pc = 0x8002FBF0u;
    ctx->downcount -= 2;
    // 8002FBF0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8002FBF4:
    ctx->pc = 0x8002FBF4u;
    // 8002FBF4: bl      0x8002F96C
    {
            ctx->lr = 0x8002FBF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002F96Cu;
                return;
            }
            goto label_8002F96C;
    }

label_8002FBF8:
    ctx->pc = 0x8002FBF8u;
    ctx->downcount -= 2;
    // 8002FBF8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8002FBFC:
    ctx->pc = 0x8002FBFCu;
    // 8002FBFC: bl      0x8002FC2C
    {
            ctx->lr = 0x8002FC00u;
            goto label_8002FC2C;
    }

label_8002FC00:
    ctx->pc = 0x8002FC00u;
    ctx->downcount -= 2;
    // 8002FC00: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8002FC04:
    ctx->pc = 0x8002FC04u;
    // 8002FC04: bl      0x8002FC58
    {
            ctx->lr = 0x8002FC08u;
            goto label_8002FC58;
    }

label_8002FC08:
    ctx->pc = 0x8002FC08u;
    ctx->downcount -= 16;
    // 8002FC08: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8002FC0C:
    ctx->pc = 0x8002FC0Cu;
    // 8002FC0C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FC10:
    ctx->pc = 0x8002FC10u;
    // 8002FC10: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8002FC14:
    ctx->pc = 0x8002FC14u;
    // 8002FC14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002FC18:
    ctx->pc = 0x8002FC18u;
    // 8002FC18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FC1C:
    ctx->pc = 0x8002FC1Cu;
    ctx->downcount -= 4;
    // 8002FC1C: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_8002FC20:
    ctx->pc = 0x8002FC20u;
    // 8002FC20: lwz     r0, 27648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FC24:
    ctx->pc = 0x8002FC24u;
    // 8002FC24: rlwinm r3, r0, 31, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 31u) & 0x00000001u;
    }

label_8002FC28:
    ctx->pc = 0x8002FC28u;
    // 8002FC28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FC2C:
    ctx->pc = 0x8002FC2Cu;
    ctx->downcount -= 7;
    // 8002FC2C: lis     r4, -13312
    ctx->gpr[4] = ((u32)(s32)(-13312) << 16);

label_8002FC30:
    ctx->pc = 0x8002FC30u;
    // 8002FC30: addi    r4, r4, 27648
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27648);

label_8002FC34:
    ctx->pc = 0x8002FC34u;
    // 8002FC34: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FC38:
    ctx->pc = 0x8002FC38u;
    // 8002FC38: rlwinm r0, r0, 0, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF00u;
    }

label_8002FC3C:
    ctx->pc = 0x8002FC3Cu;
    // 8002FC3C: rlwimi r0, r3, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_8002FC40:
    ctx->pc = 0x8002FC40u;
    // 8002FC40: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FC44:
    ctx->pc = 0x8002FC44u;
    // 8002FC44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FC48:
    ctx->pc = 0x8002FC48u;
    ctx->downcount -= 4;
    // 8002FC48: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_8002FC4C:
    ctx->pc = 0x8002FC4Cu;
    // 8002FC4C: lwz     r0, 27652(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FC50:
    ctx->pc = 0x8002FC50u;
    // 8002FC50: rlwinm r3, r0, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_8002FC54:
    ctx->pc = 0x8002FC54u;
    // 8002FC54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FC58:
    ctx->pc = 0x8002FC58u;
    ctx->downcount -= 7;
    // 8002FC58: lis     r4, -13312
    ctx->gpr[4] = ((u32)(s32)(-13312) << 16);

label_8002FC5C:
    ctx->pc = 0x8002FC5Cu;
    // 8002FC5C: addi    r4, r4, 27648
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27648);

label_8002FC60:
    ctx->pc = 0x8002FC60u;
    // 8002FC60: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FC64:
    ctx->pc = 0x8002FC64u;
    // 8002FC64: rlwinm r0, r0, 0, 24, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF00FFu;
    }

label_8002FC68:
    ctx->pc = 0x8002FC68u;
    // 8002FC68: rlwimi r0, r3, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 8u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_8002FC6C:
    ctx->pc = 0x8002FC6Cu;
    // 8002FC6C: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FC70:
    ctx->pc = 0x8002FC70u;
    // 8002FC70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FC74:
    ctx->pc = 0x8002FC74u;
    ctx->downcount -= 4;
    // 8002FC74: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_8002FC78:
    ctx->pc = 0x8002FC78u;
    // 8002FC78: lwz     r0, 27652(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FC7C:
    ctx->pc = 0x8002FC7Cu;
    // 8002FC7C: rlwinm r3, r0, 24, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0x000000FFu;
    }

label_8002FC80:
    ctx->pc = 0x8002FC80u;
    // 8002FC80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FC84:
    ctx->pc = 0x8002FC84u;
    ctx->downcount -= 9;
    // 8002FC84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002FC88:
    ctx->pc = 0x8002FC88u;
    // 8002FC88: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FC8C:
    ctx->pc = 0x8002FC8Cu;
    // 8002FC8C: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002FC90:
    ctx->pc = 0x8002FC90u;
    // 8002FC90: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FC94:
    ctx->pc = 0x8002FC94u;
    // 8002FC94: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002FC98:
    ctx->pc = 0x8002FC98u;
    // 8002FC98: addi    r30, r3, 0
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(0);

label_8002FC9C:
    ctx->pc = 0x8002FC9Cu;
    // 8002FC9C: lwz     r0, -31592(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31592);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FCA0:
    ctx->pc = 0x8002FCA0u;
    // 8002FCA0: cmpwi   r0, 1
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

label_8002FCA4:
    ctx->pc = 0x8002FCA4u;
    // 8002FCA4: bc    12, 2, 0x8002FDD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002FDD8;
        }
    }

label_8002FCA8:
    ctx->pc = 0x8002FCA8u;
    ctx->downcount -= 2;
    // 8002FCA8: lwz     r3, -32520(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002FCAC:
    ctx->pc = 0x8002FCACu;
    // 8002FCAC: bl      0x8001CB90
    {
            ctx->lr = 0x8002FCB0u;
            ctx->pc = 0x8001CB90u;
            return;
    }

label_8002FCB0:
    ctx->pc = 0x8002FCB0u;
    ctx->downcount -= 95;
    // 8002FCB0: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8002FCB4:
    ctx->pc = 0x8002FCB4u;
    // 8002FCB4: lwz     r0, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FCB8:
    ctx->pc = 0x8002FCB8u;
    // 8002FCB8: lis     r3, 17180
    ctx->gpr[3] = ((u32)(s32)(17180) << 16);

label_8002FCBC:
    ctx->pc = 0x8002FCBCu;
    // 8002FCBC: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_8002FCC0:
    ctx->pc = 0x8002FCC0u;
    // 8002FCC0: rlwinm r0, r0, 30, 2, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 30u) & 0x3FFFFFFFu;
    }

label_8002FCC4:
    ctx->pc = 0x8002FCC4u;
    // 8002FCC4: addi    r3, r3, -8573
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8573);

label_8002FCC8:
    ctx->pc = 0x8002FCC8u;
    // 8002FCC8: mulhwu   r0, r3, r0
    {
        u64 product = (u64)ctx->gpr[3] * (u64)ctx->gpr[0];
        ctx->gpr[0] = (u32)(product >> 32);
    }

label_8002FCCC:
    ctx->pc = 0x8002FCCCu;
    // 8002FCCC: rlwinm r9, r0, 17, 15, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[0], 17u) & 0x0001FFFFu;
    }

label_8002FCD0:
    ctx->pc = 0x8002FCD0u;
    // 8002FCD0: addi    r5, r4, -23512
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23512);

label_8002FCD4:
    ctx->pc = 0x8002FCD4u;
    // 8002FCD4: addi    r3, r4, -23536
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-23536);

label_8002FCD8:
    ctx->pc = 0x8002FCD8u;
    // 8002FCD8: addi    r0, r4, -2536
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-2536);

label_8002FCDC:
    ctx->pc = 0x8002FCDCu;
    // 8002FCDC: lis     r4, 4194
    ctx->gpr[4] = ((u32)(s32)(4194) << 16);

label_8002FCE0:
    ctx->pc = 0x8002FCE0u;
    // 8002FCE0: mullw   r7, r9, r5
    {
        s64 product = (s64)(s32)ctx->gpr[9] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[7] = (u32)product;
    }

label_8002FCE4:
    ctx->pc = 0x8002FCE4u;
    // 8002FCE4: addi    r10, r4, 19923
    ctx->gpr[10] = ctx->gpr[4] + (u32)(s32)(19923);

label_8002FCE8:
    ctx->pc = 0x8002FCE8u;
    // 8002FCE8: mullw   r5, r9, r3
    {
        s64 product = (s64)(s32)ctx->gpr[9] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[5] = (u32)product;
    }

label_8002FCEC:
    ctx->pc = 0x8002FCECu;
    // 8002FCEC: mullw   r4, r9, r0
    {
        s64 product = (s64)(s32)ctx->gpr[9] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[4] = (u32)product;
    }

label_8002FCF0:
    ctx->pc = 0x8002FCF0u;
    // 8002FCF0: mulli   r8, r9, 31524
    ctx->gpr[8] = (u32)((s64)(s32)ctx->gpr[9] * (s64)(s32)31524);

label_8002FCF4:
    ctx->pc = 0x8002FCF4u;
    // 8002FCF4: mulli   r3, r9, 3000
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[9] * (s64)(s32)3000);

label_8002FCF8:
    ctx->pc = 0x8002FCF8u;
    // 8002FCF8: mulhwu   r8, r10, r8
    {
        u64 product = (u64)ctx->gpr[10] * (u64)ctx->gpr[8];
        ctx->gpr[8] = (u32)(product >> 32);
    }

label_8002FCFC:
    ctx->pc = 0x8002FCFCu;
    // 8002FCFC: mulhwu   r7, r10, r7
    {
        u64 product = (u64)ctx->gpr[10] * (u64)ctx->gpr[7];
        ctx->gpr[7] = (u32)(product >> 32);
    }

label_8002FD00:
    ctx->pc = 0x8002FD00u;
    // 8002FD00: mulhwu   r5, r10, r5
    {
        u64 product = (u64)ctx->gpr[10] * (u64)ctx->gpr[5];
        ctx->gpr[5] = (u32)(product >> 32);
    }

label_8002FD04:
    ctx->pc = 0x8002FD04u;
    // 8002FD04: mulhwu   r4, r10, r4
    {
        u64 product = (u64)ctx->gpr[10] * (u64)ctx->gpr[4];
        ctx->gpr[4] = (u32)(product >> 32);
    }

label_8002FD08:
    ctx->pc = 0x8002FD08u;
    // 8002FD08: mulhwu   r3, r10, r3
    {
        u64 product = (u64)ctx->gpr[10] * (u64)ctx->gpr[3];
        ctx->gpr[3] = (u32)(product >> 32);
    }

label_8002FD0C:
    ctx->pc = 0x8002FD0Cu;
    // 8002FD0C: rlwinm r8, r8, 23, 9, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[8], 23u) & 0x007FFFFFu;
    }

label_8002FD10:
    ctx->pc = 0x8002FD10u;
    // 8002FD10: rlwinm r7, r7, 23, 9, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 23u) & 0x007FFFFFu;
    }

label_8002FD14:
    ctx->pc = 0x8002FD14u;
    // 8002FD14: stw     r8, -31580(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31580);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_8002FD18:
    ctx->pc = 0x8002FD18u;
    // 8002FD18: rlwinm r5, r5, 23, 9, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 23u) & 0x007FFFFFu;
    }

label_8002FD1C:
    ctx->pc = 0x8002FD1Cu;
    // 8002FD1C: rlwinm r4, r4, 23, 9, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 23u) & 0x007FFFFFu;
    }

label_8002FD20:
    ctx->pc = 0x8002FD20u;
    // 8002FD20: stw     r7, -31572(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31572);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8002FD24:
    ctx->pc = 0x8002FD24u;
    // 8002FD24: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8002FD28:
    ctx->pc = 0x8002FD28u;
    // 8002FD28: rlwinm r3, r3, 23, 9, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 23u) & 0x007FFFFFu;
    }

label_8002FD2C:
    ctx->pc = 0x8002FD2Cu;
    // 8002FD2C: stw     r5, -31564(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31564);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8002FD30:
    ctx->pc = 0x8002FD30u;
    // 8002FD30: lis     r6, -13312
    ctx->gpr[6] = ((u32)(s32)(-13312) << 16);

label_8002FD34:
    ctx->pc = 0x8002FD34u;
    // 8002FD34: stw     r3, -31548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31548);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8002FD38:
    ctx->pc = 0x8002FD38u;
    // 8002FD38: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8002FD3C:
    ctx->pc = 0x8002FD3Cu;
    // 8002FD3C: lwz     r0, 27648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FD40:
    ctx->pc = 0x8002FD40u;
    // 8002FD40: stw     r4, -31556(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31556);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002FD44:
    ctx->pc = 0x8002FD44u;
    // 8002FD44: rlwinm r0, r0, 0, 27, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFDFu;
    }

label_8002FD48:
    ctx->pc = 0x8002FD48u;
    // 8002FD48: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_8002FD4C:
    ctx->pc = 0x8002FD4Cu;
    // 8002FD4C: stw     r31, -31584(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31584);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FD50:
    ctx->pc = 0x8002FD50u;
    // 8002FD50: stw     r31, -31576(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31576);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FD54:
    ctx->pc = 0x8002FD54u;
    // 8002FD54: stw     r31, -31568(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31568);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FD58:
    ctx->pc = 0x8002FD58u;
    // 8002FD58: stw     r31, -31560(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31560);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FD5C:
    ctx->pc = 0x8002FD5Cu;
    // 8002FD5C: stw     r31, -31552(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31552);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FD60:
    ctx->pc = 0x8002FD60u;
    // 8002FD60: lwz     r5, 27652(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27652);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8002FD64:
    ctx->pc = 0x8002FD64u;
    // 8002FD64: stw     r0, 27648(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FD68:
    ctx->pc = 0x8002FD68u;
    // 8002FD68: rlwinm r0, r5, 0, 24, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFF00FFu;
    }

label_8002FD6C:
    ctx->pc = 0x8002FD6Cu;
    // 8002FD6C: nop
    // nop

label_8002FD70:
    ctx->pc = 0x8002FD70u;
    // 8002FD70: stw     r0, 27652(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FD74:
    ctx->pc = 0x8002FD74u;
    // 8002FD74: lwz     r0, 27652(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FD78:
    ctx->pc = 0x8002FD78u;
    // 8002FD78: rlwinm r0, r0, 0, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF00u;
    }

label_8002FD7C:
    ctx->pc = 0x8002FD7Cu;
    // 8002FD7C: nop
    // nop

label_8002FD80:
    ctx->pc = 0x8002FD80u;
    // 8002FD80: stw     r0, 27652(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FD84:
    ctx->pc = 0x8002FD84u;
    // 8002FD84: stw     r31, 27660(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27660);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FD88:
    ctx->pc = 0x8002FD88u;
    // 8002FD88: bl      0x8002FB48
    {
            ctx->lr = 0x8002FD8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002FB48u;
                return;
            }
            goto label_8002FB48;
    }

label_8002FD8C:
    ctx->pc = 0x8002FD8Cu;
    ctx->downcount -= 2;
    // 8002FD8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002FD90:
    ctx->pc = 0x8002FD90u;
    // 8002FD90: bl      0x8002FA54
    {
            ctx->lr = 0x8002FD94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002FA54u;
                return;
            }
            goto label_8002FA54;
    }

label_8002FD94:
    ctx->pc = 0x8002FD94u;
    ctx->downcount -= 7;
    // 8002FD94: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_8002FD98:
    ctx->pc = 0x8002FD98u;
    // 8002FD98: stw     r31, -31608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31608);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FD9C:
    ctx->pc = 0x8002FD9Cu;
    // 8002FD9C: addi    r4, r3, -404
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-404);

label_8002FDA0:
    ctx->pc = 0x8002FDA0u;
    // 8002FDA0: stw     r31, -31604(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31604);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FDA4:
    ctx->pc = 0x8002FDA4u;
    // 8002FDA4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_8002FDA8:
    ctx->pc = 0x8002FDA8u;
    // 8002FDA8: stw     r30, -31600(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31600);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002FDAC:
    ctx->pc = 0x8002FDACu;
    // 8002FDAC: bl      0x800206CC
    {
            ctx->lr = 0x8002FDB0u;
            ctx->pc = 0x800206CCu;
            return;
    }

label_8002FDB0:
    ctx->pc = 0x8002FDB0u;
    ctx->downcount -= 2;
    // 8002FDB0: lis     r3, 1024
    ctx->gpr[3] = ((u32)(s32)(1024) << 16);

label_8002FDB4:
    ctx->pc = 0x8002FDB4u;
    // 8002FDB4: bl      0x80020AD0
    {
            ctx->lr = 0x8002FDB8u;
            ctx->pc = 0x80020AD0u;
            return;
    }

label_8002FDB8:
    ctx->pc = 0x8002FDB8u;
    ctx->downcount -= 4;
    // 8002FDB8: lis     r3, -32765
    ctx->gpr[3] = ((u32)(s32)(-32765) << 16);

label_8002FDBC:
    ctx->pc = 0x8002FDBCu;
    // 8002FDBC: addi    r4, r3, -528
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-528);

label_8002FDC0:
    ctx->pc = 0x8002FDC0u;
    // 8002FDC0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_8002FDC4:
    ctx->pc = 0x8002FDC4u;
    // 8002FDC4: bl      0x800206CC
    {
            ctx->lr = 0x8002FDC8u;
            ctx->pc = 0x800206CCu;
            return;
    }

label_8002FDC8:
    ctx->pc = 0x8002FDC8u;
    ctx->downcount -= 2;
    // 8002FDC8: lis     r3, 128
    ctx->gpr[3] = ((u32)(s32)(128) << 16);

label_8002FDCC:
    ctx->pc = 0x8002FDCCu;
    // 8002FDCC: bl      0x80020AD0
    {
            ctx->lr = 0x8002FDD0u;
            ctx->pc = 0x80020AD0u;
            return;
    }

label_8002FDD0:
    ctx->pc = 0x8002FDD0u;
    ctx->downcount -= 2;
    // 8002FDD0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8002FDD4:
    ctx->pc = 0x8002FDD4u;
    // 8002FDD4: stw     r0, -31592(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FDD8:
    ctx->pc = 0x8002FDD8u;
    ctx->downcount -= 7;
    // 8002FDD8: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FDDC:
    ctx->pc = 0x8002FDDCu;
    // 8002FDDC: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002FDE0:
    ctx->pc = 0x8002FDE0u;
    // 8002FDE0: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002FDE4:
    ctx->pc = 0x8002FDE4u;
    // 8002FDE4: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8002FDE8:
    ctx->pc = 0x8002FDE8u;
    // 8002FDE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002FDEC:
    ctx->pc = 0x8002FDECu;
    // 8002FDEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FDF0:
    ctx->pc = 0x8002FDF0u;
    ctx->downcount -= 12;
    // 8002FDF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002FDF4:
    ctx->pc = 0x8002FDF4u;
    // 8002FDF4: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FDF8:
    ctx->pc = 0x8002FDF8u;
    // 8002FDF8: stwu     r1, -736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-736);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002FDFC:
    ctx->pc = 0x8002FDFCu;
    // 8002FDFC: stw     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FE00:
    ctx->pc = 0x8002FE00u;
    // 8002FE00: lis     r31, -13312
    ctx->gpr[31] = ((u32)(s32)(-13312) << 16);

label_8002FE04:
    ctx->pc = 0x8002FE04u;
    // 8002FE04: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FE08:
    ctx->pc = 0x8002FE08u;
    // 8002FE08: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8002FE0C:
    ctx->pc = 0x8002FE0Cu;
    // 8002FE0C: stw     r30, 728(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(728);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8002FE10:
    ctx->pc = 0x8002FE10u;
    // 8002FE10: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_8002FE14:
    ctx->pc = 0x8002FE14u;
    // 8002FE14: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FE18:
    ctx->pc = 0x8002FE18u;
    // 8002FE18: addi    r30, r4, 0
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(0);

label_8002FE1C:
    ctx->pc = 0x8002FE1Cu;
    // 8002FE1C: bl      0x8001E4A4
    {
            ctx->lr = 0x8002FE20u;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_8002FE20:
    ctx->pc = 0x8002FE20u;
    ctx->downcount -= 2;
    // 8002FE20: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8002FE24:
    ctx->pc = 0x8002FE24u;
    // 8002FE24: bl      0x8001E2AC
    {
            ctx->lr = 0x8002FE28u;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_8002FE28:
    ctx->pc = 0x8002FE28u;
    ctx->downcount -= 3;
    // 8002FE28: lwz     r12, -31608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31608);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8002FE2C:
    ctx->pc = 0x8002FE2Cu;
    // 8002FE2C: cmplwi  r12, 0x0000
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

label_8002FE30:
    ctx->pc = 0x8002FE30u;
    // 8002FE30: bc    12, 2, 0x8002FE44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002FE44;
        }
    }

label_8002FE34:
    ctx->pc = 0x8002FE34u;
    ctx->downcount -= 5;
    // 8002FE34: addi    r3, r31, 27648
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(27648);

label_8002FE38:
    ctx->pc = 0x8002FE38u;
    // 8002FE38: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_8002FE3C:
    ctx->pc = 0x8002FE3Cu;
    // 8002FE3C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002FE40:
    ctx->pc = 0x8002FE40u;
    // 8002FE40: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8002FE44u;
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FE44:
    ctx->pc = 0x8002FE44u;
    ctx->downcount -= 2;
    // 8002FE44: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8002FE48:
    ctx->pc = 0x8002FE48u;
    // 8002FE48: bl      0x8001E4A4
    {
            ctx->lr = 0x8002FE4Cu;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_8002FE4C:
    ctx->pc = 0x8002FE4Cu;
    ctx->downcount -= 2;
    // 8002FE4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8002FE50:
    ctx->pc = 0x8002FE50u;
    // 8002FE50: bl      0x8001E2AC
    {
            ctx->lr = 0x8002FE54u;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_8002FE54:
    ctx->pc = 0x8002FE54u;
    ctx->downcount -= 7;
    // 8002FE54: lwz     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FE58:
    ctx->pc = 0x8002FE58u;
    // 8002FE58: lwz     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002FE5C:
    ctx->pc = 0x8002FE5Cu;
    // 8002FE5C: lwz     r30, 728(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(728);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8002FE60:
    ctx->pc = 0x8002FE60u;
    // 8002FE60: addi    r1, r1, 736
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(736);

label_8002FE64:
    ctx->pc = 0x8002FE64u;
    // 8002FE64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002FE68:
    ctx->pc = 0x8002FE68u;
    // 8002FE68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FE6C:
    ctx->pc = 0x8002FE6Cu;
    ctx->downcount -= 14;
    // 8002FE6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002FE70:
    ctx->pc = 0x8002FE70u;
    // 8002FE70: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_8002FE74:
    ctx->pc = 0x8002FE74u;
    // 8002FE74: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FE78:
    ctx->pc = 0x8002FE78u;
    // 8002FE78: addi    r3, r3, 20480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20480);

label_8002FE7C:
    ctx->pc = 0x8002FE7Cu;
    // 8002FE7C: li      r0, -161
    ctx->gpr[0] = (u32)(s32)(-161);

label_8002FE80:
    ctx->pc = 0x8002FE80u;
    // 8002FE80: stwu     r1, -736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-736);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002FE84:
    ctx->pc = 0x8002FE84u;
    // 8002FE84: stw     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FE88:
    ctx->pc = 0x8002FE88u;
    // 8002FE88: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_8002FE8C:
    ctx->pc = 0x8002FE8Cu;
    // 8002FE8C: lhz     r5, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8002FE90:
    ctx->pc = 0x8002FE90u;
    // 8002FE90: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_8002FE94:
    ctx->pc = 0x8002FE94u;
    // 8002FE94: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_8002FE98:
    ctx->pc = 0x8002FE98u;
    // 8002FE98: sth     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8002FE9C:
    ctx->pc = 0x8002FE9Cu;
    // 8002FE9C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8002FEA0:
    ctx->pc = 0x8002FEA0u;
    // 8002FEA0: bl      0x8001E4A4
    {
            ctx->lr = 0x8002FEA4u;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_8002FEA4:
    ctx->pc = 0x8002FEA4u;
    ctx->downcount -= 2;
    // 8002FEA4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8002FEA8:
    ctx->pc = 0x8002FEA8u;
    // 8002FEA8: bl      0x8001E2AC
    {
            ctx->lr = 0x8002FEACu;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_8002FEAC:
    ctx->pc = 0x8002FEACu;
    ctx->downcount -= 3;
    // 8002FEAC: lwz     r3, -31604(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31604);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002FEB0:
    ctx->pc = 0x8002FEB0u;
    // 8002FEB0: cmplwi  r3, 0x0000
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

label_8002FEB4:
    ctx->pc = 0x8002FEB4u;
    // 8002FEB4: bc    12, 2, 0x8002FEF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002FEF4;
        }
    }

label_8002FEB8:
    ctx->pc = 0x8002FEB8u;
    ctx->downcount -= 3;
    // 8002FEB8: lwz     r0, -31588(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31588);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FEBC:
    ctx->pc = 0x8002FEBCu;
    // 8002FEBC: cmpwi   r0, 0
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

label_8002FEC0:
    ctx->pc = 0x8002FEC0u;
    // 8002FEC0: bc    4, 2, 0x8002FEF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8002FEF4;
        }
    }

label_8002FEC4:
    ctx->pc = 0x8002FEC4u;
    ctx->downcount -= 5;
    // 8002FEC4: lwz     r0, -31600(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31600);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FEC8:
    ctx->pc = 0x8002FEC8u;
    // 8002FEC8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8002FECC:
    ctx->pc = 0x8002FECCu;
    // 8002FECC: stw     r4, -31588(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31588);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8002FED0:
    ctx->pc = 0x8002FED0u;
    // 8002FED0: cmplwi  r0, 0x0000
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

label_8002FED4:
    ctx->pc = 0x8002FED4u;
    // 8002FED4: bc    12, 2, 0x8002FEE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8002FEE0;
        }
    }

label_8002FED8:
    ctx->pc = 0x8002FED8u;
    ctx->downcount -= 1;
    // 8002FED8: bl      0x8002FF18
    {
            ctx->lr = 0x8002FEDCu;
            goto label_8002FF18;
    }

label_8002FEDC:
    ctx->pc = 0x8002FEDCu;
    ctx->downcount -= 1;
    // 8002FEDC: b       0x8002FEEC
    {
            goto label_8002FEEC;
    }

label_8002FEE0:
    ctx->pc = 0x8002FEE0u;
    ctx->downcount -= 4;
    // 8002FEE0: addi    r12, r3, 0
    ctx->gpr[12] = ctx->gpr[3] + (u32)(s32)(0);

label_8002FEE4:
    ctx->pc = 0x8002FEE4u;
    // 8002FEE4: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_8002FEE8:
    ctx->pc = 0x8002FEE8u;
    // 8002FEE8: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8002FEECu;
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FEEC:
    ctx->pc = 0x8002FEECu;
    ctx->downcount -= 2;
    // 8002FEEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002FEF0:
    ctx->pc = 0x8002FEF0u;
    // 8002FEF0: stw     r0, -31588(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31588);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FEF4:
    ctx->pc = 0x8002FEF4u;
    ctx->downcount -= 2;
    // 8002FEF4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8002FEF8:
    ctx->pc = 0x8002FEF8u;
    // 8002FEF8: bl      0x8001E4A4
    {
            ctx->lr = 0x8002FEFCu;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_8002FEFC:
    ctx->pc = 0x8002FEFCu;
    ctx->downcount -= 2;
    // 8002FEFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8002FF00:
    ctx->pc = 0x8002FF00u;
    // 8002FF00: bl      0x8001E2AC
    {
            ctx->lr = 0x8002FF04u;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_8002FF04:
    ctx->pc = 0x8002FF04u;
    ctx->downcount -= 6;
    // 8002FF04: lwz     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FF08:
    ctx->pc = 0x8002FF08u;
    // 8002FF08: lwz     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002FF0C:
    ctx->pc = 0x8002FF0Cu;
    // 8002FF0C: addi    r1, r1, 736
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(736);

label_8002FF10:
    ctx->pc = 0x8002FF10u;
    // 8002FF10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002FF14:
    ctx->pc = 0x8002FF14u;
    // 8002FF14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FF18:
    ctx->pc = 0x8002FF18u;
    ctx->downcount -= 15;
    // 8002FF18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002FF1C:
    ctx->pc = 0x8002FF1Cu;
    // 8002FF1C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FF20:
    ctx->pc = 0x8002FF20u;
    // 8002FF20: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002FF24:
    ctx->pc = 0x8002FF24u;
    // 8002FF24: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8002FF28:
    ctx->pc = 0x8002FF28u;
    // 8002FF28: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8002FF2C:
    ctx->pc = 0x8002FF2Cu;
    // 8002FF2C: lis     r5, -32728
    ctx->gpr[5] = ((u32)(s32)(-32728) << 16);

label_8002FF30:
    ctx->pc = 0x8002FF30u;
    // 8002FF30: addi    r5, r5, -7596
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7596);

label_8002FF34:
    ctx->pc = 0x8002FF34u;
    // 8002FF34: stw     r1, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
    }

label_8002FF38:
    ctx->pc = 0x8002FF38u;
    // 8002FF38: lis     r5, -32728
    ctx->gpr[5] = ((u32)(s32)(-32728) << 16);

label_8002FF3C:
    ctx->pc = 0x8002FF3Cu;
    // 8002FF3C: addi    r5, r5, -7600
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7600);

label_8002FF40:
    ctx->pc = 0x8002FF40u;
    // 8002FF40: lwz     r1, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[1] = mem_read32(ctx, ea);
    }

label_8002FF44:
    ctx->pc = 0x8002FF44u;
    // 8002FF44: addi    r1, r1, -8
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(-8);

label_8002FF48:
    ctx->pc = 0x8002FF48u;
    // 8002FF48: mtlr    r31
    ctx->lr = ctx->gpr[31];

label_8002FF4C:
    ctx->pc = 0x8002FF4Cu;
    // 8002FF4C: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8002FF50u;
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FF50:
    ctx->pc = 0x8002FF50u;
    ctx->downcount -= 9;
    // 8002FF50: lis     r5, -32728
    ctx->gpr[5] = ((u32)(s32)(-32728) << 16);

label_8002FF54:
    ctx->pc = 0x8002FF54u;
    // 8002FF54: addi    r5, r5, -7596
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-7596);

label_8002FF58:
    ctx->pc = 0x8002FF58u;
    // 8002FF58: lwz     r1, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[1] = mem_read32(ctx, ea);
    }

label_8002FF5C:
    ctx->pc = 0x8002FF5Cu;
    // 8002FF5C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FF60:
    ctx->pc = 0x8002FF60u;
    // 8002FF60: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8002FF64:
    ctx->pc = 0x8002FF64u;
    // 8002FF64: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_8002FF68:
    ctx->pc = 0x8002FF68u;
    // 8002FF68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8002FF6C:
    ctx->pc = 0x8002FF6Cu;
    // 8002FF6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8002FF70:
    ctx->pc = 0x8002FF70u;
    ctx->downcount -= 20;
    // 8002FF70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8002FF74:
    ctx->pc = 0x8002FF74u;
    // 8002FF74: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FF78:
    ctx->pc = 0x8002FF78u;
    // 8002FF78: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8002FF7C:
    ctx->pc = 0x8002FF7Cu;
    // 8002FF7C: stmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8002FF80:
    ctx->pc = 0x8002FF80u;
    // 8002FF80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8002FF84:
    ctx->pc = 0x8002FF84u;
    // 8002FF84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8002FF88:
    ctx->pc = 0x8002FF88u;
    // 8002FF88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8002FF8C:
    ctx->pc = 0x8002FF8Cu;
    // 8002FF8C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8002FF90:
    ctx->pc = 0x8002FF90u;
    // 8002FF90: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8002FF94:
    ctx->pc = 0x8002FF94u;
    // 8002FF94: b       0x8002FF98
    {
            goto label_8002FF98;
    }

label_8002FF98:
    ctx->pc = 0x8002FF98u;
    ctx->downcount -= 2;
    // 8002FF98: lis     r31, -13312
    ctx->gpr[31] = ((u32)(s32)(-13312) << 16);

label_8002FF9C:
    ctx->pc = 0x8002FF9Cu;
    // 8002FF9C: b       0x8002FFA0
    {
            goto label_8002FFA0;
    }

label_8002FFA0:
    ctx->pc = 0x8002FFA0u;
    ctx->downcount -= 1;
    // 8002FFA0: b       0x80030104
    {
            goto label_80030104;
    }

label_8002FFA4:
    ctx->pc = 0x8002FFA4u;
    ctx->downcount -= 15;
    // 8002FFA4: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FFA8:
    // 8002FFA8: addi    r30, r31, 27648
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(27648);

label_8002FFAC:
    // 8002FFAC: addi    r30, r30, 8
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(8);

label_8002FFB0:
    // 8002FFB0: rlwinm r0, r0, 0, 27, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFDFu;
    }

label_8002FFB4:
    // 8002FFB4: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_8002FFB8:
    ctx->pc = 0x8002FFB8u;
    // 8002FFB8: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FFBC:
    ctx->pc = 0x8002FFBCu;
    // 8002FFBC: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FFC0:
    // 8002FFC0: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_8002FFC4:
    ctx->pc = 0x8002FFC4u;
    // 8002FFC4: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FFC8:
    ctx->pc = 0x8002FFC8u;
    // 8002FFC8: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FFCC:
    // 8002FFCC: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_8002FFD0:
    // 8002FFD0: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_8002FFD4:
    ctx->pc = 0x8002FFD4u;
    // 8002FFD4: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8002FFD8:
    ctx->pc = 0x8002FFD8u;
    // 8002FFD8: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8002FFDC:
    // 8002FFDC: b       0x8002FFE0
    {
            goto label_8002FFE0;
    }

label_8002FFE0:
    ctx->downcount -= 1;
    // 8002FFE0: b       0x8002FFE4
    {
            goto label_8002FFE4;
    }

label_8002FFE4:
    loop_8002FFE4(ctx);
    if (ctx->pc == 0x8002FFF0u) goto label_8002FFF0;
    return;
label_8002FFE8:
    // 8002FFE8: cmplw   r3, r0
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

label_8002FFEC:
    // 8002FFEC: bc    12, 2, 0x8002FFE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002FFE4u;
                return;
            }
            goto label_8002FFE4;
        }
    }

label_8002FFF0:
    ctx->downcount -= 1;
    // 8002FFF0: bl      0x80024A8C
    {
            ctx->lr = 0x8002FFF4u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_8002FFF4:
    ctx->pc = 0x8002FFF4u;
    ctx->downcount -= 12;
    // 8002FFF4: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8002FFF8:
    // 8002FFF8: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8002FFFC:
    // 8002FFFC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80030000:
    // 80030000: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_80030004:
    // 80030004: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_80030008:
    ctx->pc = 0x80030008u;
    // 80030008: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003000C:
    ctx->pc = 0x8003000Cu;
    // 8003000C: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030010:
    // 80030010: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_80030014:
    // 80030014: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_80030018:
    ctx->pc = 0x80030018u;
    // 80030018: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003001C:
    ctx->pc = 0x8003001Cu;
    // 8003001C: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80030020:
    // 80030020: b       0x80030024
    {
            goto label_80030024;
    }

label_80030024:
    ctx->downcount -= 1;
    // 80030024: b       0x80030028
    {
            goto label_80030028;
    }

label_80030028:
    loop_80030028(ctx);
    if (ctx->pc == 0x80030034u) goto label_80030034;
    return;
label_8003002C:
    // 8003002C: cmplw   r3, r0
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

label_80030030:
    // 80030030: bc    12, 2, 0x80030028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030028u;
                return;
            }
            goto label_80030028;
        }
    }

label_80030034:
    ctx->downcount -= 1;
    // 80030034: bl      0x80024A8C
    {
            ctx->lr = 0x80030038u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_80030038:
    ctx->downcount -= 22;
    // 80030038: subfc   r8, r26, r4
    {
        u32 a = ~ctx->gpr[26];
        u32 b = ctx->gpr[4];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[8] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003003C:
    ctx->pc = 0x8003003Cu;
    // 8003003C: lwz     r12, -31580(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31580);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80030040:
    ctx->pc = 0x80030040u;
    // 80030040: lwz     r5, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80030044:
    // 80030044: subfe   r7, r27, r3
    {
        u32 a = ~ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80030048:
    ctx->pc = 0x80030048u;
    // 80030048: lwz     r10, -31548(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31548);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8003004C:
    // 8003004C: xoris   r7, r7, 0x8000
    ctx->gpr[7] = ctx->gpr[7] ^ (0x8000u << 16);

label_80030050:
    // 80030050: rlwinm r5, r5, 0, 31, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFFFFDu;
    }

label_80030054:
    ctx->pc = 0x80030054u;
    // 80030054: lwz     r11, -31584(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31584);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80030058:
    // 80030058: subfc   r6, r10, r12
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[12];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[6] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003005C:
    ctx->pc = 0x8003005Cu;
    // 8003005C: lwz     r9, -31552(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31552);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80030060:
    ctx->pc = 0x80030060u;
    // 80030060: stw     r5, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80030064:
    // 80030064: subfe   r0, r9, r11
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[11];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80030068:
    // 80030068: xoris   r5, r0, 0x8000
    ctx->gpr[5] = ctx->gpr[0] ^ (0x8000u << 16);

label_8003006C:
    // 8003006C: subfc   r0, r6, r8
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80030070:
    ctx->pc = 0x80030070u;
    // 80030070: lwz     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030074:
    // 80030074: subfe   r5, r5, r7
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[7];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80030078:
    // 80030078: subfe   r5, r7, r7
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[7];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003007C:
    // 8003007C: neg  r5, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[5] = (~a) + 1u;
    }

label_80030080:
    // 80030080: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_80030084:
    // 80030084: cmpwi   r5, 0
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

label_80030088:
    ctx->pc = 0x80030088u;
    // 80030088: stw     r0, 27648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(27648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003008C:
    // 8003008C: bc    12, 2, 0x800300A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800300A0;
        }
    }

label_80030090:
    ctx->pc = 0x80030090u;
    ctx->downcount -= 4;
    // 80030090: lwz     r29, -31568(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31568);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80030094:
    // 80030094: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80030098:
    ctx->pc = 0x80030098u;
    // 80030098: lwz     r28, -31564(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31564);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_8003009C:
    // 8003009C: b       0x80030104
    {
            goto label_80030104;
    }

label_800300A0:
    ctx->downcount -= 9;
    // 800300A0: addc   r6, r12, r10
    {
        u32 a = ctx->gpr[12];
        u32 b = ctx->gpr[10];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[6] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800300A4:
    // 800300A4: adde   r0, r11, r9
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[9];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800300A8:
    // 800300A8: xoris   r5, r0, 0x8000
    ctx->gpr[5] = ctx->gpr[0] ^ (0x8000u << 16);

label_800300AC:
    // 800300AC: subfc   r0, r6, r8
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800300B0:
    // 800300B0: subfe   r5, r5, r7
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[7];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800300B4:
    // 800300B4: subfe   r5, r7, r7
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[7];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800300B8:
    // 800300B8: neg  r5, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[5] = (~a) + 1u;
    }

label_800300BC:
    // 800300BC: cmpwi   r5, 0
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

label_800300C0:
    // 800300C0: bc    4, 2, 0x80030100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80030100;
        }
    }

label_800300C4:
    ctx->pc = 0x800300C4u;
    ctx->downcount -= 11;
    // 800300C4: lwz     r5, -31572(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31572);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800300C8:
    ctx->pc = 0x800300C8u;
    // 800300C8: lwz     r0, -31576(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800300CC:
    // 800300CC: subfc   r6, r10, r5
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[5];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[6] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800300D0:
    // 800300D0: subfe   r0, r9, r0
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800300D4:
    // 800300D4: xoris   r5, r0, 0x8000
    ctx->gpr[5] = ctx->gpr[0] ^ (0x8000u << 16);

label_800300D8:
    // 800300D8: subfc   r0, r6, r8
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[8];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800300DC:
    // 800300DC: subfe   r5, r5, r7
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[7];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800300E0:
    // 800300E0: subfe   r5, r7, r7
    {
        u32 a = ~ctx->gpr[7];
        u32 b = ctx->gpr[7];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_800300E4:
    // 800300E4: neg  r5, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[5] = (~a) + 1u;
    }

label_800300E8:
    // 800300E8: cmpwi   r5, 0
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

label_800300EC:
    // 800300EC: bc    12, 2, 0x80030100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80030100;
        }
    }

label_800300F0:
    ctx->pc = 0x800300F0u;
    ctx->downcount -= 4;
    // 800300F0: lwz     r29, -31560(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31560);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800300F4:
    // 800300F4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800300F8:
    ctx->pc = 0x800300F8u;
    // 800300F8: lwz     r28, -31556(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31556);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_800300FC:
    // 800300FC: b       0x80030104
    {
            goto label_80030104;
    }

label_80030100:
    ctx->downcount -= 1;
    // 80030100: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80030104:
    ctx->downcount -= 2;
    // 80030104: cmplwi  r0, 0x0000
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

label_80030108:
    // 80030108: bc    12, 2, 0x8002FFA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8002FFA4u;
                return;
            }
            goto label_8002FFA4;
        }
    }

label_8003010C:
    ctx->pc = 0x8003010Cu;
    ctx->downcount -= 3;
    // 8003010C: addc   r27, r4, r28
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[28];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[27] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80030110:
    ctx->pc = 0x80030110u;
    // 80030110: adde   r26, r3, r29
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[26] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80030114:
    ctx->pc = 0x80030114u;
    // 80030114: b       0x80030118
    {
            goto label_80030118;
    }

label_80030118:
    ctx->pc = 0x80030118u;
    ctx->downcount -= 1;
    // 80030118: b       0x8003011C
    {
            goto label_8003011C;
    }

label_8003011C:
    ctx->downcount -= 1;
    // 8003011C: bl      0x80024A8C
    {
            ctx->lr = 0x80030120u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_80030120:
    ctx->downcount -= 8;
    // 80030120: xoris   r5, r3, 0x8000
    ctx->gpr[5] = ctx->gpr[3] ^ (0x8000u << 16);

label_80030124:
    // 80030124: xoris   r3, r26, 0x8000
    ctx->gpr[3] = ctx->gpr[26] ^ (0x8000u << 16);

label_80030128:
    // 80030128: subfc   r0, r27, r4
    {
        u32 a = ~ctx->gpr[27];
        u32 b = ctx->gpr[4];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8003012C:
    // 8003012C: subfe   r3, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80030130:
    // 80030130: subfe   r3, r5, r5
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80030134:
    // 80030134: neg  r3, r3
    {
        u32 a = ctx->gpr[3];
        ctx->gpr[3] = (~a) + 1u;
    }

label_80030138:
    // 80030138: cmpwi   r3, 0
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

label_8003013C:
    // 8003013C: bc    4, 2, 0x8003011C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003011Cu;
                return;
            }
            goto label_8003011C;
        }
    }

label_80030140:
    ctx->pc = 0x80030140u;
    ctx->downcount -= 16;
    // 80030140: lmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80030144:
    ctx->pc = 0x80030144u;
    // 80030144: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030148:
    ctx->pc = 0x80030148u;
    // 80030148: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8003014C:
    ctx->pc = 0x8003014Cu;
    // 8003014C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80030150:
    ctx->pc = 0x80030150u;
    // 80030150: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_80030154:
    ctx->pc = 0x80030154u;
    ctx->downcount -= 8;
    // 80030154: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80030158:
    ctx->pc = 0x80030158u;
    // 80030158: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003015C:
    ctx->pc = 0x8003015Cu;
    // 8003015C: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80030160:
    ctx->pc = 0x80030160u;
    // 80030160: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80030164:
    ctx->pc = 0x80030164u;
    // 80030164: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80030168:
    ctx->pc = 0x80030168u;
    // 80030168: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8003016C:
    ctx->pc = 0x8003016Cu;
    // 8003016C: lwz     r31, -31544(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31544);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80030170:
    ctx->pc = 0x80030170u;
    // 80030170: bl      0x80020680
    {
            ctx->lr = 0x80030174u;
            ctx->pc = 0x80020680u;
            return;
    }

label_80030174:
    ctx->pc = 0x80030174u;
    ctx->downcount -= 2;
    // 80030174: stw     r30, -31544(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31544);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80030178:
    ctx->pc = 0x80030178u;
    // 80030178: bl      0x800206A8
    {
            ctx->lr = 0x8003017Cu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_8003017C:
    ctx->pc = 0x8003017Cu;
    ctx->downcount -= 8;
    // 8003017C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80030180:
    ctx->pc = 0x80030180u;
    // 80030180: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030184:
    ctx->pc = 0x80030184u;
    // 80030184: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80030188:
    ctx->pc = 0x80030188u;
    // 80030188: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8003018C:
    ctx->pc = 0x8003018Cu;
    // 8003018C: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_80030190:
    ctx->pc = 0x80030190u;
    // 80030190: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80030194:
    ctx->pc = 0x80030194u;
    // 80030194: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_80030198:
    ctx->pc = 0x80030198u;
    ctx->downcount -= 5;
    // 80030198: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8003019C:
    ctx->pc = 0x8003019Cu;
    // 8003019C: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800301A0:
    ctx->pc = 0x800301A0u;
    // 800301A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800301A4:
    ctx->pc = 0x800301A4u;
    // 800301A4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800301A8:
    ctx->pc = 0x800301A8u;
    // 800301A8: bl      0x80020680
    {
            ctx->lr = 0x800301ACu;
            ctx->pc = 0x80020680u;
            return;
    }

label_800301AC:
    ctx->pc = 0x800301ACu;
    ctx->downcount -= 4;
    // 800301AC: lis     r4, -13312
    ctx->gpr[4] = ((u32)(s32)(-13312) << 16);

label_800301B0:
    ctx->pc = 0x800301B0u;
    // 800301B0: lhz     r0, 20490(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20490);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800301B4:
    ctx->pc = 0x800301B4u;
    // 800301B4: rlwinm r31, r0, 0, 22, 22
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000200u;
    }

label_800301B8:
    ctx->pc = 0x800301B8u;
    // 800301B8: bl      0x800206A8
    {
            ctx->lr = 0x800301BCu;
            ctx->pc = 0x800206A8u;
            return;
    }

label_800301BC:
    ctx->pc = 0x800301BCu;
    ctx->downcount -= 7;
    // 800301BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800301C0:
    ctx->pc = 0x800301C0u;
    // 800301C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800301C4:
    ctx->pc = 0x800301C4u;
    // 800301C4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800301C8:
    ctx->pc = 0x800301C8u;
    // 800301C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_800301CC:
    ctx->pc = 0x800301CCu;
    // 800301CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800301D0:
    ctx->pc = 0x800301D0u;
    // 800301D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_800301D4:
    ctx->pc = 0x800301D4u;
    ctx->downcount -= 12;
    // 800301D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800301D8:
    ctx->pc = 0x800301D8u;
    // 800301D8: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800301DC:
    ctx->pc = 0x800301DCu;
    // 800301DC: stwu     r1, -40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-40);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800301E0:
    ctx->pc = 0x800301E0u;
    // 800301E0: stw     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800301E4:
    ctx->pc = 0x800301E4u;
    // 800301E4: addi    r31, r6, 0
    ctx->gpr[31] = ctx->gpr[6] + (u32)(s32)(0);

label_800301E8:
    ctx->pc = 0x800301E8u;
    // 800301E8: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800301EC:
    ctx->pc = 0x800301ECu;
    // 800301EC: addi    r30, r5, 0
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(0);

label_800301F0:
    ctx->pc = 0x800301F0u;
    // 800301F0: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800301F4:
    ctx->pc = 0x800301F4u;
    // 800301F4: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_800301F8:
    ctx->pc = 0x800301F8u;
    // 800301F8: stw     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_800301FC:
    ctx->pc = 0x800301FCu;
    // 800301FC: addi    r28, r4, 0
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(0);

label_80030200:
    ctx->pc = 0x80030200u;
    // 80030200: bl      0x80020680
    {
            ctx->lr = 0x80030204u;
            ctx->pc = 0x80020680u;
            return;
    }

label_80030204:
    ctx->pc = 0x80030204u;
    ctx->downcount -= 40;
    // 80030204: lis     r6, -13312
    ctx->gpr[6] = ((u32)(s32)(-13312) << 16);

label_80030208:
    ctx->pc = 0x80030208u;
    // 80030208: lhz     r0, 20512(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20512);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003020C:
    ctx->pc = 0x8003020Cu;
    // 8003020C: addi    r8, r6, 20480
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(20480);

label_80030210:
    ctx->pc = 0x80030210u;
    // 80030210: addi    r9, r6, 20480
    ctx->gpr[9] = ctx->gpr[6] + (u32)(s32)(20480);

label_80030214:
    ctx->pc = 0x80030214u;
    // 80030214: rlwinm r4, r0, 0, 0, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030218:
    ctx->pc = 0x80030218u;
    // 80030218: rlwinm r0, r28, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 16u) & 0x0000FFFFu;
    }

label_8003021C:
    ctx->pc = 0x8003021Cu;
    // 8003021C: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80030220:
    ctx->pc = 0x80030220u;
    // 80030220: sth     r0, 20512(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20512);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030224:
    ctx->pc = 0x80030224u;
    // 80030224: rlwinm r0, r28, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x0000FFFFu;
    }

label_80030228:
    ctx->pc = 0x80030228u;
    // 80030228: addi    r4, r6, 20480
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(20480);

label_8003022C:
    ctx->pc = 0x8003022Cu;
    // 8003022C: lhz     r5, 20514(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20514);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_80030230:
    ctx->pc = 0x80030230u;
    // 80030230: rlwinm r5, r5, 0, 27, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFF001Fu;
    }

label_80030234:
    ctx->pc = 0x80030234u;
    // 80030234: or   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] | ctx->gpr[0];
    }

label_80030238:
    ctx->pc = 0x80030238u;
    // 80030238: sth     r0, 20514(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20514);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003023C:
    ctx->pc = 0x8003023Cu;
    // 8003023C: addi    r5, r6, 20480
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(20480);

label_80030240:
    ctx->pc = 0x80030240u;
    // 80030240: rlwinm r0, r30, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 16u) & 0x0000FFFFu;
    }

label_80030244:
    ctx->pc = 0x80030244u;
    // 80030244: lhz     r6, 20516(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20516);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_80030248:
    ctx->pc = 0x80030248u;
    // 80030248: rlwinm r6, r6, 0, 0, 21
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFC00u;
    }

label_8003024C:
    ctx->pc = 0x8003024Cu;
    // 8003024C: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_80030250:
    ctx->pc = 0x80030250u;
    // 80030250: sth     r0, 36(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030254:
    ctx->pc = 0x80030254u;
    // 80030254: rlwinm r0, r30, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x0000FFFFu;
    }

label_80030258:
    ctx->pc = 0x80030258u;
    // 80030258: lhz     r6, 38(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(38);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_8003025C:
    ctx->pc = 0x8003025Cu;
    // 8003025C: rlwinm r6, r6, 0, 27, 15
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFF001Fu;
    }

label_80030260:
    ctx->pc = 0x80030260u;
    // 80030260: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_80030264:
    ctx->pc = 0x80030264u;
    // 80030264: sth     r0, 38(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030268:
    ctx->pc = 0x80030268u;
    // 80030268: rlwinm r6, r31, 16, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[31], 16u) & 0x0000FFFFu;
    }

label_8003026C:
    ctx->pc = 0x8003026Cu;
    // 8003026C: rlwinm r0, r31, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x0000FFFFu;
    }

label_80030270:
    ctx->pc = 0x80030270u;
    // 80030270: lhz     r7, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_80030274:
    ctx->pc = 0x80030274u;
    // 80030274: rlwinm r7, r7, 0, 17, 15
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFF7FFFu;
    }

label_80030278:
    ctx->pc = 0x80030278u;
    // 80030278: rlwimi r7, r29, 15, 0, 16
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[29], 15u);
        ctx->gpr[7] = (ctx->gpr[7] & ~0xFFFF8000u) | (rot & 0xFFFF8000u);
    }

label_8003027C:
    ctx->pc = 0x8003027Cu;
    // 8003027C: sth     r7, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_80030280:
    ctx->pc = 0x80030280u;
    // 80030280: lhz     r7, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_80030284:
    ctx->pc = 0x80030284u;
    // 80030284: rlwinm r7, r7, 0, 0, 21
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFFC00u;
    }

label_80030288:
    ctx->pc = 0x80030288u;
    // 80030288: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_8003028C:
    ctx->pc = 0x8003028Cu;
    // 8003028C: sth     r6, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_80030290:
    ctx->pc = 0x80030290u;
    // 80030290: lhz     r4, 42(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(42);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80030294:
    ctx->pc = 0x80030294u;
    // 80030294: rlwinm r4, r4, 0, 27, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFF001Fu;
    }

label_80030298:
    ctx->pc = 0x80030298u;
    // 80030298: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_8003029C:
    ctx->pc = 0x8003029Cu;
    // 8003029C: sth     r0, 42(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800302A0:
    ctx->pc = 0x800302A0u;
    // 800302A0: bl      0x800206A8
    {
            ctx->lr = 0x800302A4u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_800302A4:
    ctx->pc = 0x800302A4u;
    ctx->downcount -= 9;
    // 800302A4: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800302A8:
    ctx->pc = 0x800302A8u;
    // 800302A8: lwz     r31, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800302AC:
    ctx->pc = 0x800302ACu;
    // 800302AC: lwz     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800302B0:
    ctx->pc = 0x800302B0u;
    // 800302B0: lwz     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800302B4:
    ctx->pc = 0x800302B4u;
    // 800302B4: lwz     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_800302B8:
    ctx->pc = 0x800302B8u;
    // 800302B8: addi    r1, r1, 40
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(40);

label_800302BC:
    ctx->pc = 0x800302BCu;
    // 800302BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800302C0:
    ctx->pc = 0x800302C0u;
    // 800302C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_800302C4:
    ctx->pc = 0x800302C4u;
    ctx->downcount -= 7;
    // 800302C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800302C8:
    ctx->pc = 0x800302C8u;
    // 800302C8: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800302CC:
    ctx->pc = 0x800302CCu;
    // 800302CC: stwu     r1, -24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-24);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800302D0:
    ctx->pc = 0x800302D0u;
    // 800302D0: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_800302D4:
    ctx->pc = 0x800302D4u;
    // 800302D4: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800302D8:
    ctx->pc = 0x800302D8u;
    // 800302D8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_800302DC:
    ctx->pc = 0x800302DCu;
    // 800302DC: bl      0x80020680
    {
            ctx->lr = 0x800302E0u;
            ctx->pc = 0x80020680u;
            return;
    }

label_800302E0:
    ctx->pc = 0x800302E0u;
    ctx->downcount -= 12;
    // 800302E0: lwz     r31, -31528(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31528);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800302E4:
    ctx->pc = 0x800302E4u;
    // 800302E4: lwz     r4, -31520(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31520);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800302E8:
    ctx->pc = 0x800302E8u;
    // 800302E8: add   r0, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_800302EC:
    ctx->pc = 0x800302ECu;
    // 800302EC: stw     r0, -31528(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31528);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800302F0:
    ctx->pc = 0x800302F0u;
    // 800302F0: stw     r30, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_800302F4:
    ctx->pc = 0x800302F4u;
    // 800302F4: lwz     r5, -31520(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31520);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800302F8:
    ctx->pc = 0x800302F8u;
    // 800302F8: lwz     r4, -31524(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31524);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800302FC:
    ctx->pc = 0x800302FCu;
    // 800302FC: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_80030300:
    ctx->pc = 0x80030300u;
    // 80030300: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_80030304:
    ctx->pc = 0x80030304u;
    // 80030304: stw     r5, -31520(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31520);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80030308:
    ctx->pc = 0x80030308u;
    // 80030308: stw     r0, -31524(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31524);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003030C:
    ctx->pc = 0x8003030Cu;
    // 8003030C: bl      0x800206A8
    {
            ctx->lr = 0x80030310u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_80030310:
    ctx->pc = 0x80030310u;
    ctx->downcount -= 8;
    // 80030310: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80030314:
    ctx->pc = 0x80030314u;
    // 80030314: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030318:
    ctx->pc = 0x80030318u;
    // 80030318: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8003031C:
    ctx->pc = 0x8003031Cu;
    // 8003031C: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80030320:
    ctx->pc = 0x80030320u;
    // 80030320: addi    r1, r1, 24
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(24);

label_80030324:
    ctx->pc = 0x80030324u;
    // 80030324: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80030328:
    ctx->pc = 0x80030328u;
    // 80030328: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8003032C:
    ctx->pc = 0x8003032Cu;
    ctx->downcount -= 11;
    // 8003032C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80030330:
    ctx->pc = 0x80030330u;
    // 80030330: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030334:
    ctx->pc = 0x80030334u;
    // 80030334: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80030338:
    ctx->pc = 0x80030338u;
    // 80030338: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8003033C:
    ctx->pc = 0x8003033Cu;
    // 8003033C: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80030340:
    ctx->pc = 0x80030340u;
    // 80030340: addi    r30, r4, 0
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(0);

label_80030344:
    ctx->pc = 0x80030344u;
    // 80030344: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80030348:
    ctx->pc = 0x80030348u;
    // 80030348: addi    r29, r3, 0
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(0);

label_8003034C:
    ctx->pc = 0x8003034Cu;
    // 8003034C: lwz     r0, -31516(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31516);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030350:
    ctx->pc = 0x80030350u;
    // 80030350: cmpwi   r0, 1
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

label_80030354:
    ctx->pc = 0x80030354u;
    // 80030354: bc    4, 2, 0x80030360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80030360;
        }
    }

label_80030358:
    ctx->pc = 0x80030358u;
    ctx->downcount -= 2;
    // 80030358: li      r3, 16384
    ctx->gpr[3] = (u32)(s32)(16384);

label_8003035C:
    ctx->pc = 0x8003035Cu;
    // 8003035C: b       0x800303D4
    {
            goto label_800303D4;
    }

label_80030360:
    ctx->pc = 0x80030360u;
    ctx->downcount -= 2;
    // 80030360: lwz     r3, -32512(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-32512);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80030364:
    ctx->pc = 0x80030364u;
    // 80030364: bl      0x8001CB90
    {
            ctx->lr = 0x80030368u;
            ctx->pc = 0x8001CB90u;
            return;
    }

label_80030368:
    ctx->pc = 0x80030368u;
    ctx->downcount -= 1;
    // 80030368: bl      0x80020680
    {
            ctx->lr = 0x8003036Cu;
            ctx->pc = 0x80020680u;
            return;
    }

label_8003036C:
    ctx->pc = 0x8003036Cu;
    ctx->downcount -= 7;
    // 8003036C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80030370:
    ctx->pc = 0x80030370u;
    // 80030370: lis     r4, -32765
    ctx->gpr[4] = ((u32)(s32)(-32765) << 16);

label_80030374:
    ctx->pc = 0x80030374u;
    // 80030374: stw     r0, -31544(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31544);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030378:
    ctx->pc = 0x80030378u;
    // 80030378: addi    r31, r3, 0
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(0);

label_8003037C:
    ctx->pc = 0x8003037Cu;
    // 8003037C: addi    r4, r4, 1016
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1016);

label_80030380:
    ctx->pc = 0x80030380u;
    // 80030380: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_80030384:
    ctx->pc = 0x80030384u;
    // 80030384: bl      0x800206CC
    {
            ctx->lr = 0x80030388u;
            ctx->pc = 0x800206CCu;
            return;
    }

label_80030388:
    ctx->pc = 0x80030388u;
    ctx->downcount -= 2;
    // 80030388: lis     r3, 512
    ctx->gpr[3] = ((u32)(s32)(512) << 16);

label_8003038C:
    ctx->pc = 0x8003038Cu;
    // 8003038C: bl      0x80020AD0
    {
            ctx->lr = 0x80030390u;
            ctx->pc = 0x80020AD0u;
            return;
    }

label_80030390:
    ctx->pc = 0x80030390u;
    ctx->downcount -= 12;
    // 80030390: li      r0, 16384
    ctx->gpr[0] = (u32)(s32)(16384);

label_80030394:
    ctx->pc = 0x80030394u;
    // 80030394: stw     r30, -31524(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31524);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80030398:
    ctx->pc = 0x80030398u;
    // 80030398: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_8003039C:
    ctx->pc = 0x8003039Cu;
    // 8003039C: stw     r0, -31528(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31528);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800303A0:
    ctx->pc = 0x800303A0u;
    // 800303A0: addi    r4, r3, 20480
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20480);

label_800303A4:
    ctx->pc = 0x800303A4u;
    // 800303A4: stw     r29, -31520(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31520);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_800303A8:
    ctx->pc = 0x800303A8u;
    // 800303A8: lhz     r0, 26(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800303AC:
    ctx->pc = 0x800303ACu;
    // 800303AC: lhz     r3, 20506(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20506);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_800303B0:
    ctx->pc = 0x800303B0u;
    // 800303B0: rlwinm r0, r0, 0, 0, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF00u;
    }

label_800303B4:
    ctx->pc = 0x800303B4u;
    // 800303B4: rlwimi r0, r3, 0, 24, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FFu) | (rot & 0x000000FFu);
    }

label_800303B8:
    ctx->pc = 0x800303B8u;
    // 800303B8: sth     r0, 26(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800303BC:
    ctx->pc = 0x800303BCu;
    // 800303BC: bl      0x800304A0
    {
            ctx->lr = 0x800303C0u;
            goto label_800304A0;
    }

label_800303C0:
    ctx->pc = 0x800303C0u;
    ctx->downcount -= 4;
    // 800303C0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800303C4:
    ctx->pc = 0x800303C4u;
    // 800303C4: stw     r0, -31516(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800303C8:
    ctx->pc = 0x800303C8u;
    // 800303C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_800303CC:
    ctx->pc = 0x800303CCu;
    // 800303CC: bl      0x800206A8
    {
            ctx->lr = 0x800303D0u;
            ctx->pc = 0x800206A8u;
            return;
    }

label_800303D0:
    ctx->pc = 0x800303D0u;
    ctx->downcount -= 1;
    // 800303D0: lwz     r3, -31528(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31528);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800303D4:
    ctx->pc = 0x800303D4u;
    ctx->downcount -= 8;
    // 800303D4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800303D8:
    ctx->pc = 0x800303D8u;
    // 800303D8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800303DC:
    ctx->pc = 0x800303DCu;
    // 800303DC: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800303E0:
    ctx->pc = 0x800303E0u;
    // 800303E0: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800303E4:
    ctx->pc = 0x800303E4u;
    // 800303E4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_800303E8:
    ctx->pc = 0x800303E8u;
    // 800303E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800303EC:
    ctx->pc = 0x800303ECu;
    // 800303EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_800303F0:
    ctx->pc = 0x800303F0u;
    ctx->downcount -= 2;
    // 800303F0: li      r3, 16384
    ctx->gpr[3] = (u32)(s32)(16384);

label_800303F4:
    ctx->pc = 0x800303F4u;
    // 800303F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_800303F8:
    ctx->pc = 0x800303F8u;
    ctx->downcount -= 14;
    // 800303F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800303FC:
    ctx->pc = 0x800303FCu;
    // 800303FC: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_80030400:
    ctx->pc = 0x80030400u;
    // 80030400: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030404:
    ctx->pc = 0x80030404u;
    // 80030404: addi    r3, r3, 20480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20480);

label_80030408:
    ctx->pc = 0x80030408u;
    // 80030408: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_8003040C:
    ctx->pc = 0x8003040Cu;
    // 8003040C: stwu     r1, -736(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-736);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80030410:
    ctx->pc = 0x80030410u;
    // 80030410: stw     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80030414:
    ctx->pc = 0x80030414u;
    // 80030414: addi    r31, r4, 0
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(0);

label_80030418:
    ctx->pc = 0x80030418u;
    // 80030418: lhz     r5, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[5] = mem_read16(ctx, ea);
    }

label_8003041C:
    ctx->pc = 0x8003041Cu;
    // 8003041C: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_80030420:
    ctx->pc = 0x80030420u;
    // 80030420: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030424:
    ctx->pc = 0x80030424u;
    // 80030424: sth     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030428:
    ctx->pc = 0x80030428u;
    // 80030428: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8003042C:
    ctx->pc = 0x8003042Cu;
    // 8003042C: bl      0x8001E4A4
    {
            ctx->lr = 0x80030430u;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_80030430:
    ctx->pc = 0x80030430u;
    ctx->downcount -= 2;
    // 80030430: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80030434:
    ctx->pc = 0x80030434u;
    // 80030434: bl      0x8001E2AC
    {
            ctx->lr = 0x80030438u;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_80030438:
    ctx->pc = 0x80030438u;
    ctx->downcount -= 3;
    // 80030438: lwz     r12, -31544(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31544);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8003043C:
    ctx->pc = 0x8003043Cu;
    // 8003043C: cmplwi  r12, 0x0000
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

label_80030440:
    ctx->pc = 0x80030440u;
    // 80030440: bc    12, 2, 0x8003044C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8003044C;
        }
    }

label_80030444:
    ctx->pc = 0x80030444u;
    ctx->downcount -= 3;
    // 80030444: mtlr    r12
    ctx->lr = ctx->gpr[12];

label_80030448:
    ctx->pc = 0x80030448u;
    // 80030448: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8003044Cu;
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_8003044C:
    ctx->pc = 0x8003044Cu;
    ctx->downcount -= 2;
    // 8003044C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80030450:
    ctx->pc = 0x80030450u;
    // 80030450: bl      0x8001E4A4
    {
            ctx->lr = 0x80030454u;
            ctx->pc = 0x8001E4A4u;
            return;
    }

label_80030454:
    ctx->pc = 0x80030454u;
    ctx->downcount -= 2;
    // 80030454: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80030458:
    ctx->pc = 0x80030458u;
    // 80030458: bl      0x8001E2AC
    {
            ctx->lr = 0x8003045Cu;
            ctx->pc = 0x8001E2ACu;
            return;
    }

label_8003045C:
    ctx->pc = 0x8003045Cu;
    ctx->downcount -= 6;
    // 8003045C: lwz     r0, 740(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030460:
    ctx->pc = 0x80030460u;
    // 80030460: lwz     r31, 732(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(732);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80030464:
    ctx->pc = 0x80030464u;
    // 80030464: addi    r1, r1, 736
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(736);

label_80030468:
    ctx->pc = 0x80030468u;
    // 80030468: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8003046C:
    ctx->pc = 0x8003046Cu;
    // 8003046C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_80030470:
    ctx->pc = 0x80030470u;
    ctx->downcount -= 8;
    // 80030470: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_80030474:
    ctx->pc = 0x80030474u;
    // 80030474: addi    r3, r3, 20480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20480);

label_80030478:
    ctx->pc = 0x80030478u;
    // 80030478: lhz     r4, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_8003047C:
    ctx->pc = 0x8003047Cu;
    // 8003047C: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_80030480:
    ctx->pc = 0x80030480u;
    // 80030480: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_80030484:
    ctx->pc = 0x80030484u;
    // 80030484: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030488:
    ctx->pc = 0x80030488u;
    // 80030488: sth     r0, 10(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003048C:
    ctx->pc = 0x8003048Cu;
    // 8003048C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_80030490:
    ctx->pc = 0x80030490u;
    ctx->downcount -= 4;
    // 80030490: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_80030494:
    ctx->pc = 0x80030494u;
    // 80030494: lhz     r0, 20490(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20490);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030498:
    ctx->pc = 0x80030498u;
    // 80030498: rlwinm r3, r0, 0, 26, 26
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000020u;
    }

label_8003049C:
    ctx->pc = 0x8003049Cu;
    // 8003049C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8002D5E0;
        }
    }

label_800304A0:
    ctx->pc = 0x800304A0u;
    ctx->downcount -= 16;
    // 800304A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_800304A4:
    ctx->pc = 0x800304A4u;
    // 800304A4: lis     r3, -13312
    ctx->gpr[3] = ((u32)(s32)(-13312) << 16);

label_800304A8:
    ctx->pc = 0x800304A8u;
    // 800304A8: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800304AC:
    ctx->pc = 0x800304ACu;
    // 800304AC: addi    r3, r3, 20480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20480);

label_800304B0:
    ctx->pc = 0x800304B0u;
    // 800304B0: stwu     r1, -704(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-704);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_800304B4:
    ctx->pc = 0x800304B4u;
    // 800304B4: stmw     r14, 632(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(632);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_800304B8:
    loop_800304B8(ctx);
    if (ctx->pc == 0x800304C4u) goto label_800304C4;
    return;
label_800304BC:
    // 800304BC: rlwinm. r0, r0, 0, 31, 31
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

label_800304C0:
    // 800304C0: bc    12, 2, 0x800304B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800304B8u;
                return;
            }
            goto label_800304B8;
        }
    }

label_800304C4:
    ctx->pc = 0x800304C4u;
    ctx->downcount -= 59;
    // 800304C4: lis     r23, -13312
    ctx->gpr[23] = ((u32)(s32)(-13312) << 16);

label_800304C8:
    ctx->pc = 0x800304C8u;
    // 800304C8: addi    r0, r23, 20480
    ctx->gpr[0] = ctx->gpr[23] + (u32)(s32)(20480);

label_800304CC:
    ctx->pc = 0x800304CCu;
    // 800304CC: stw     r0, 584(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(584);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800304D0:
    ctx->pc = 0x800304D0u;
    // 800304D0: lis     r3, 256
    ctx->gpr[3] = ((u32)(s32)(256) << 16);

label_800304D4:
    ctx->pc = 0x800304D4u;
    // 800304D4: addi    r0, r1, 499
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(499);

label_800304D8:
    ctx->pc = 0x800304D8u;
    // 800304D8: stw     r3, -31536(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31536);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800304DC:
    ctx->pc = 0x800304DCu;
    // 800304DC: lis     r5, -8530
    ctx->gpr[5] = ((u32)(s32)(-8530) << 16);

label_800304E0:
    ctx->pc = 0x800304E0u;
    // 800304E0: lwz     r4, 584(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(584);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_800304E4:
    ctx->pc = 0x800304E4u;
    // 800304E4: rlwinm r22, r0, 0, 0, 26
    {
        ctx->gpr[22] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_800304E8:
    ctx->pc = 0x800304E8u;
    // 800304E8: addi    r0, r1, 435
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(435);

label_800304EC:
    ctx->pc = 0x800304ECu;
    // 800304EC: lhz     r4, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_800304F0:
    ctx->pc = 0x800304F0u;
    // 800304F0: addi    r7, r1, 179
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(179);

label_800304F4:
    ctx->pc = 0x800304F4u;
    // 800304F4: rlwinm r7, r7, 0, 0, 26
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0xFFFFFFE0u;
    }

label_800304F8:
    ctx->pc = 0x800304F8u;
    // 800304F8: rlwinm r4, r4, 0, 0, 25
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFC0u;
    }

label_800304FC:
    ctx->pc = 0x800304FCu;
    // 800304FC: stw     r7, 540(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(540);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80030500:
    ctx->pc = 0x80030500u;
    // 80030500: ori     r6, r4, 0x0023
    ctx->gpr[6] = ctx->gpr[4] | 0x0023u;

label_80030504:
    ctx->pc = 0x80030504u;
    // 80030504: lwz     r4, 584(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(584);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80030508:
    ctx->pc = 0x80030508u;
    // 80030508: addi    r10, r1, 371
    ctx->gpr[10] = ctx->gpr[1] + (u32)(s32)(371);

label_8003050C:
    ctx->pc = 0x8003050Cu;
    // 8003050C: sth     r6, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_80030510:
    ctx->pc = 0x80030510u;
    // 80030510: addi    r5, r5, -16657
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-16657);

label_80030514:
    ctx->pc = 0x80030514u;
    // 80030514: lis     r4, -17711
    ctx->gpr[4] = ((u32)(s32)(-17711) << 16);

label_80030518:
    ctx->pc = 0x80030518u;
    // 80030518: rlwinm r21, r0, 0, 0, 26
    {
        ctx->gpr[21] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFE0u;
    }

label_8003051C:
    ctx->pc = 0x8003051Cu;
    // 8003051C: stw     r5, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80030520:
    ctx->pc = 0x80030520u;
    // 80030520: addi    r0, r4, -17712
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-17712);

label_80030524:
    ctx->pc = 0x80030524u;
    // 80030524: stw     r0, 0(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030528:
    ctx->pc = 0x80030528u;
    // 80030528: addi    r4, r1, 51
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(51);

label_8003052C:
    ctx->pc = 0x8003052Cu;
    // 8003052C: addi    r6, r1, 115
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(115);

label_80030530:
    ctx->pc = 0x80030530u;
    // 80030530: stw     r5, 4(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80030534:
    ctx->pc = 0x80030534u;
    // 80030534: rlwinm r4, r4, 0, 0, 26
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFE0u;
    }

label_80030538:
    ctx->pc = 0x80030538u;
    // 80030538: rlwinm r6, r6, 0, 0, 26
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFFE0u;
    }

label_8003053C:
    ctx->pc = 0x8003053Cu;
    // 8003053C: stw     r0, 4(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030540:
    ctx->pc = 0x80030540u;
    // 80030540: addi    r9, r1, 307
    ctx->gpr[9] = ctx->gpr[1] + (u32)(s32)(307);

label_80030544:
    ctx->pc = 0x80030544u;
    // 80030544: addi    r8, r1, 243
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(243);

label_80030548:
    ctx->pc = 0x80030548u;
    // 80030548: stw     r5, 8(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8003054C:
    ctx->pc = 0x8003054Cu;
    // 8003054C: addi    r19, r3, 0
    ctx->gpr[19] = ctx->gpr[3] + (u32)(s32)(0);

label_80030550:
    ctx->pc = 0x80030550u;
    // 80030550: addi    r3, r22, 0
    ctx->gpr[3] = ctx->gpr[22] + (u32)(s32)(0);

label_80030554:
    ctx->pc = 0x80030554u;
    // 80030554: stw     r0, 8(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030558:
    ctx->pc = 0x80030558u;
    // 80030558: rlwinm r24, r10, 0, 0, 26
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[10], 0u) & 0xFFFFFFE0u;
    }

label_8003055C:
    ctx->pc = 0x8003055Cu;
    // 8003055C: rlwinm r28, r9, 0, 0, 26
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0xFFFFFFE0u;
    }

label_80030560:
    ctx->pc = 0x80030560u;
    // 80030560: stw     r5, 12(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80030564:
    ctx->pc = 0x80030564u;
    // 80030564: rlwinm r20, r8, 0, 0, 26
    {
        ctx->gpr[20] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0xFFFFFFE0u;
    }

label_80030568:
    ctx->pc = 0x80030568u;
    // 80030568: stw     r0, 12(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003056C:
    ctx->pc = 0x8003056Cu;
    // 8003056C: stw     r5, 16(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80030570:
    ctx->pc = 0x80030570u;
    // 80030570: stw     r0, 16(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030574:
    ctx->pc = 0x80030574u;
    // 80030574: stw     r5, 20(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80030578:
    ctx->pc = 0x80030578u;
    // 80030578: stw     r0, 20(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003057C:
    ctx->pc = 0x8003057Cu;
    // 8003057C: stw     r5, 24(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80030580:
    ctx->pc = 0x80030580u;
    // 80030580: stw     r0, 24(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030584:
    ctx->pc = 0x80030584u;
    // 80030584: stw     r5, 28(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80030588:
    ctx->pc = 0x80030588u;
    // 80030588: lwz     r5, 584(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(584);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8003058C:
    ctx->pc = 0x8003058Cu;
    // 8003058C: stw     r4, 532(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(532);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80030590:
    ctx->pc = 0x80030590u;
    // 80030590: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80030594:
    ctx->pc = 0x80030594u;
    // 80030594: addi    r5, r5, 18
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18);

label_80030598:
    ctx->pc = 0x80030598u;
    // 80030598: sth     r4, 624(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(624);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_8003059C:
    ctx->pc = 0x8003059Cu;
    // 8003059C: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_800305A0:
    ctx->pc = 0x800305A0u;
    // 800305A0: stw     r6, 536(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_800305A4:
    ctx->pc = 0x800305A4u;
    // 800305A4: stw     r0, 28(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800305A8:
    ctx->pc = 0x800305A8u;
    // 800305A8: stw     r5, 584(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(584);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_800305AC:
    ctx->pc = 0x800305ACu;
    // 800305AC: bl      0x8001DA4C
    {
            ctx->lr = 0x800305B0u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_800305B0:
    ctx->pc = 0x800305B0u;
    ctx->downcount -= 3;
    // 800305B0: addi    r3, r21, 0
    ctx->gpr[3] = ctx->gpr[21] + (u32)(s32)(0);

label_800305B4:
    ctx->pc = 0x800305B4u;
    // 800305B4: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_800305B8:
    ctx->pc = 0x800305B8u;
    // 800305B8: bl      0x8001DA4C
    {
            ctx->lr = 0x800305BCu;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_800305BC:
    ctx->pc = 0x800305BCu;
    ctx->downcount -= 5;
    // 800305BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_800305C0:
    ctx->pc = 0x800305C0u;
    // 800305C0: stw     r0, -31532(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31532);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800305C4:
    ctx->pc = 0x800305C4u;
    // 800305C4: addi    r3, r28, 0
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(0);

label_800305C8:
    ctx->pc = 0x800305C8u;
    // 800305C8: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_800305CC:
    ctx->pc = 0x800305CCu;
    // 800305CC: bl      0x8001DA20
    {
            ctx->lr = 0x800305D0u;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_800305D0:
    ctx->pc = 0x800305D0u;
    ctx->downcount -= 41;
    // 800305D0: rlwinm r3, r28, 16, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[28], 16u) & 0x0000FFFFu;
    }

label_800305D4:
    ctx->pc = 0x800305D4u;
    // 800305D4: lhz     r0, 20512(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(20512);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800305D8:
    ctx->pc = 0x800305D8u;
    // 800305D8: stw     r3, 572(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800305DC:
    ctx->pc = 0x800305DCu;
    // 800305DC: addi    r25, r23, 20480
    ctx->gpr[25] = ctx->gpr[23] + (u32)(s32)(20480);

label_800305E0:
    ctx->pc = 0x800305E0u;
    // 800305E0: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800305E4:
    ctx->pc = 0x800305E4u;
    // 800305E4: lwz     r0, 572(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(572);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800305E8:
    ctx->pc = 0x800305E8u;
    // 800305E8: addi    r26, r23, 20480
    ctx->gpr[26] = ctx->gpr[23] + (u32)(s32)(20480);

label_800305EC:
    ctx->pc = 0x800305ECu;
    // 800305EC: rlwinm r17, r19, 16, 16, 31
    {
        ctx->gpr[17] = dolrecomp_rotl32(ctx->gpr[19], 16u) & 0x0000FFFFu;
    }

label_800305F0:
    ctx->pc = 0x800305F0u;
    // 800305F0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800305F4:
    ctx->pc = 0x800305F4u;
    // 800305F4: sthu     r0, 32(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
        ctx->gpr[25] = ea;
    }

label_800305F8:
    ctx->pc = 0x800305F8u;
    // 800305F8: rlwinm r3, r28, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x0000FFFFu;
    }

label_800305FC:
    ctx->pc = 0x800305FCu;
    // 800305FC: addi    r27, r23, 20480
    ctx->gpr[27] = ctx->gpr[23] + (u32)(s32)(20480);

label_80030600:
    ctx->pc = 0x80030600u;
    // 80030600: lhz     r0, 20514(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(20514);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030604:
    ctx->pc = 0x80030604u;
    // 80030604: rlwinm r18, r19, 0, 16, 31
    {
        ctx->gpr[18] = dolrecomp_rotl32(ctx->gpr[19], 0u) & 0x0000FFFFu;
    }

label_80030608:
    ctx->pc = 0x80030608u;
    // 80030608: stw     r3, 588(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(588);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8003060C:
    ctx->pc = 0x8003060Cu;
    // 8003060C: addi    r28, r23, 20480
    ctx->gpr[28] = ctx->gpr[23] + (u32)(s32)(20480);

label_80030610:
    ctx->pc = 0x80030610u;
    // 80030610: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030614:
    ctx->pc = 0x80030614u;
    // 80030614: lwz     r0, 588(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(588);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030618:
    ctx->pc = 0x80030618u;
    // 80030618: addi    r30, r23, 20480
    ctx->gpr[30] = ctx->gpr[23] + (u32)(s32)(20480);

label_8003061C:
    ctx->pc = 0x8003061Cu;
    // 8003061C: addi    r29, r23, 20480
    ctx->gpr[29] = ctx->gpr[23] + (u32)(s32)(20480);

label_80030620:
    ctx->pc = 0x80030620u;
    // 80030620: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030624:
    ctx->pc = 0x80030624u;
    // 80030624: sthu     r0, 34(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
        ctx->gpr[26] = ea;
    }

label_80030628:
    ctx->pc = 0x80030628u;
    // 80030628: lhz     r0, 20516(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(20516);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003062C:
    ctx->pc = 0x8003062Cu;
    // 8003062C: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030630:
    ctx->pc = 0x80030630u;
    // 80030630: or   r0, r0, r17
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[17];
    }

label_80030634:
    ctx->pc = 0x80030634u;
    // 80030634: sthu     r0, 36(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
        ctx->gpr[27] = ea;
    }

label_80030638:
    ctx->pc = 0x80030638u;
    // 80030638: lhz     r0, 20518(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(20518);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003063C:
    ctx->pc = 0x8003063Cu;
    // 8003063C: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030640:
    ctx->pc = 0x80030640u;
    // 80030640: or   r0, r0, r18
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[18];
    }

label_80030644:
    ctx->pc = 0x80030644u;
    // 80030644: sthu     r0, 38(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(38);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
        ctx->gpr[28] = ea;
    }

label_80030648:
    ctx->pc = 0x80030648u;
    // 80030648: lhz     r0, 20520(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(20520);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003064C:
    ctx->pc = 0x8003064Cu;
    // 8003064C: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_80030650:
    ctx->pc = 0x80030650u;
    // 80030650: sth     r0, 20520(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(20520);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030654:
    ctx->pc = 0x80030654u;
    // 80030654: lhz     r0, 20520(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(20520);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030658:
    ctx->pc = 0x80030658u;
    // 80030658: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_8003065C:
    ctx->pc = 0x8003065Cu;
    // 8003065C: nop
    // nop

label_80030660:
    ctx->pc = 0x80030660u;
    // 80030660: sthu     r0, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
        ctx->gpr[30] = ea;
    }

label_80030664:
    ctx->pc = 0x80030664u;
    // 80030664: lhz     r0, 20522(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(20522);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030668:
    ctx->pc = 0x80030668u;
    // 80030668: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_8003066C:
    ctx->pc = 0x8003066Cu;
    // 8003066C: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030670:
    ctx->pc = 0x80030670u;
    // 80030670: sthu     r0, 42(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
        ctx->gpr[29] = ea;
    }

label_80030674:
    loop_80030674(ctx);
    if (ctx->pc == 0x80030684u) goto label_80030684;
    return;
label_80030678:
    ctx->pc = 0x80030678u;
    // 80030678: lhzu     r0, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        ctx->gpr[0] = mem_read16(ctx, ea);
        ctx->gpr[31] = ea;
    }

label_8003067C:
    // 8003067C: rlwinm. r0, r0, 0, 22, 22
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

label_80030680:
    // 80030680: bc    4, 2, 0x80030674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030674u;
                return;
            }
            goto label_80030674;
        }
    }

label_80030684:
    ctx->pc = 0x80030684u;
    ctx->downcount -= 6;
    // 80030684: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80030688:
    ctx->pc = 0x80030688u;
    // 80030688: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_8003068C:
    ctx->pc = 0x8003068Cu;
    // 8003068C: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80030690:
    ctx->pc = 0x80030690u;
    // 80030690: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030694:
    ctx->pc = 0x80030694u;
    // 80030694: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030698:
    ctx->pc = 0x80030698u;
    // 80030698: bl      0x8001BFE8
    {
            ctx->lr = 0x8003069Cu;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_8003069C:
    ctx->pc = 0x8003069Cu;
    ctx->downcount -= 33;
    // 8003069C: rlwinm r0, r22, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[22], 16u) & 0x0000FFFFu;
    }

label_800306A0:
    ctx->pc = 0x800306A0u;
    // 800306A0: lhz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_800306A4:
    ctx->pc = 0x800306A4u;
    // 800306A4: stw     r0, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800306A8:
    ctx->pc = 0x800306A8u;
    // 800306A8: rlwinm r3, r3, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFC00u;
    }

label_800306AC:
    ctx->pc = 0x800306ACu;
    // 800306AC: lwz     r0, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800306B0:
    ctx->pc = 0x800306B0u;
    // 800306B0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800306B4:
    ctx->pc = 0x800306B4u;
    // 800306B4: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800306B8:
    ctx->pc = 0x800306B8u;
    // 800306B8: rlwinm r0, r22, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[22], 0u) & 0x0000FFFFu;
    }

label_800306BC:
    ctx->pc = 0x800306BCu;
    // 800306BC: stw     r0, 592(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800306C0:
    ctx->pc = 0x800306C0u;
    // 800306C0: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800306C4:
    ctx->pc = 0x800306C4u;
    // 800306C4: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800306C8:
    ctx->pc = 0x800306C8u;
    // 800306C8: lwz     r0, 592(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(592);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800306CC:
    ctx->pc = 0x800306CCu;
    // 800306CC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800306D0:
    ctx->pc = 0x800306D0u;
    // 800306D0: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800306D4:
    ctx->pc = 0x800306D4u;
    // 800306D4: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800306D8:
    ctx->pc = 0x800306D8u;
    // 800306D8: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800306DC:
    ctx->pc = 0x800306DCu;
    // 800306DC: or   r0, r0, r17
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[17];
    }

label_800306E0:
    ctx->pc = 0x800306E0u;
    // 800306E0: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800306E4:
    ctx->pc = 0x800306E4u;
    // 800306E4: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800306E8:
    ctx->pc = 0x800306E8u;
    // 800306E8: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800306EC:
    ctx->pc = 0x800306ECu;
    // 800306EC: or   r0, r0, r18
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[18];
    }

label_800306F0:
    ctx->pc = 0x800306F0u;
    // 800306F0: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800306F4:
    ctx->pc = 0x800306F4u;
    // 800306F4: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800306F8:
    ctx->pc = 0x800306F8u;
    // 800306F8: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_800306FC:
    ctx->pc = 0x800306FCu;
    // 800306FC: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030700:
    ctx->pc = 0x80030700u;
    // 80030700: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030704:
    ctx->pc = 0x80030704u;
    // 80030704: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030708:
    ctx->pc = 0x80030708u;
    // 80030708: nop
    // nop

label_8003070C:
    ctx->pc = 0x8003070Cu;
    // 8003070C: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030710:
    ctx->pc = 0x80030710u;
    // 80030710: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030714:
    ctx->pc = 0x80030714u;
    // 80030714: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030718:
    ctx->pc = 0x80030718u;
    // 80030718: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_8003071C:
    ctx->pc = 0x8003071Cu;
    // 8003071C: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030720:
    loop_80030720(ctx);
    if (ctx->pc == 0x8003072Cu) goto label_8003072C;
    return;
label_80030724:
    // 80030724: rlwinm. r0, r0, 0, 22, 22
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

label_80030728:
    // 80030728: bc    4, 2, 0x80030720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030720u;
                return;
            }
            goto label_80030720;
        }
    }

label_8003072C:
    ctx->pc = 0x8003072Cu;
    ctx->downcount -= 9;
    // 8003072C: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030730:
    ctx->pc = 0x80030730u;
    // 80030730: li      r4, -137
    ctx->gpr[4] = (u32)(s32)(-137);

label_80030734:
    ctx->pc = 0x80030734u;
    // 80030734: addi    r3, r24, 0
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(0);

label_80030738:
    ctx->pc = 0x80030738u;
    // 80030738: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_8003073C:
    ctx->pc = 0x8003073Cu;
    // 8003073C: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030740:
    ctx->pc = 0x80030740u;
    // 80030740: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030744:
    ctx->pc = 0x80030744u;
    // 80030744: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80030748:
    ctx->pc = 0x80030748u;
    // 80030748: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8003074C:
    ctx->pc = 0x8003074Cu;
    // 8003074C: bl      0x800050B4
    {
            ctx->lr = 0x80030750u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80030750:
    ctx->pc = 0x80030750u;
    ctx->downcount -= 3;
    // 80030750: addi    r3, r24, 0
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(0);

label_80030754:
    ctx->pc = 0x80030754u;
    // 80030754: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80030758:
    ctx->pc = 0x80030758u;
    // 80030758: bl      0x8001DA4C
    {
            ctx->lr = 0x8003075Cu;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_8003075C:
    ctx->pc = 0x8003075Cu;
    ctx->downcount -= 33;
    // 8003075C: rlwinm r0, r24, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[24], 16u) & 0x0000FFFFu;
    }

label_80030760:
    ctx->pc = 0x80030760u;
    // 80030760: lhz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80030764:
    ctx->pc = 0x80030764u;
    // 80030764: stw     r0, 576(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030768:
    ctx->pc = 0x80030768u;
    // 80030768: rlwinm r3, r3, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFC00u;
    }

label_8003076C:
    ctx->pc = 0x8003076Cu;
    // 8003076C: lwz     r0, 576(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030770:
    ctx->pc = 0x80030770u;
    // 80030770: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030774:
    ctx->pc = 0x80030774u;
    // 80030774: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030778:
    ctx->pc = 0x80030778u;
    // 80030778: rlwinm r0, r24, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[24], 0u) & 0x0000FFFFu;
    }

label_8003077C:
    ctx->pc = 0x8003077Cu;
    // 8003077C: stw     r0, 596(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(596);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030780:
    ctx->pc = 0x80030780u;
    // 80030780: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030784:
    ctx->pc = 0x80030784u;
    // 80030784: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030788:
    ctx->pc = 0x80030788u;
    // 80030788: lwz     r0, 596(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(596);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003078C:
    ctx->pc = 0x8003078Cu;
    // 8003078C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030790:
    ctx->pc = 0x80030790u;
    // 80030790: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030794:
    ctx->pc = 0x80030794u;
    // 80030794: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030798:
    ctx->pc = 0x80030798u;
    // 80030798: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_8003079C:
    ctx->pc = 0x8003079Cu;
    // 8003079C: or   r0, r0, r17
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[17];
    }

label_800307A0:
    ctx->pc = 0x800307A0u;
    // 800307A0: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800307A4:
    ctx->pc = 0x800307A4u;
    // 800307A4: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800307A8:
    ctx->pc = 0x800307A8u;
    // 800307A8: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800307AC:
    ctx->pc = 0x800307ACu;
    // 800307AC: or   r0, r0, r18
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[18];
    }

label_800307B0:
    ctx->pc = 0x800307B0u;
    // 800307B0: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800307B4:
    ctx->pc = 0x800307B4u;
    // 800307B4: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800307B8:
    ctx->pc = 0x800307B8u;
    // 800307B8: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_800307BC:
    ctx->pc = 0x800307BCu;
    // 800307BC: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800307C0:
    ctx->pc = 0x800307C0u;
    // 800307C0: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800307C4:
    ctx->pc = 0x800307C4u;
    // 800307C4: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800307C8:
    ctx->pc = 0x800307C8u;
    // 800307C8: nop
    // nop

label_800307CC:
    ctx->pc = 0x800307CCu;
    // 800307CC: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800307D0:
    ctx->pc = 0x800307D0u;
    // 800307D0: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800307D4:
    ctx->pc = 0x800307D4u;
    // 800307D4: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800307D8:
    ctx->pc = 0x800307D8u;
    // 800307D8: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_800307DC:
    ctx->pc = 0x800307DCu;
    // 800307DC: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800307E0:
    loop_800307E0(ctx);
    if (ctx->pc == 0x800307ECu) goto label_800307EC;
    return;
label_800307E4:
    // 800307E4: rlwinm. r0, r0, 0, 22, 22
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

label_800307E8:
    // 800307E8: bc    4, 2, 0x800307E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800307E0u;
                return;
            }
            goto label_800307E0;
        }
    }

label_800307EC:
    ctx->pc = 0x800307ECu;
    ctx->downcount -= 6;
    // 800307EC: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_800307F0:
    ctx->pc = 0x800307F0u;
    // 800307F0: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_800307F4:
    ctx->pc = 0x800307F4u;
    // 800307F4: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_800307F8:
    ctx->pc = 0x800307F8u;
    // 800307F8: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_800307FC:
    ctx->pc = 0x800307FCu;
    // 800307FC: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030800:
    ctx->pc = 0x80030800u;
    // 80030800: bl      0x8001BFE8
    {
            ctx->lr = 0x80030804u;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_80030804:
    ctx->pc = 0x80030804u;
    ctx->downcount -= 4;
    // 80030804: lwz     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80030808:
    ctx->pc = 0x80030808u;
    // 80030808: lwz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003080C:
    ctx->pc = 0x8003080Cu;
    // 8003080C: cmplw   r3, r0
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

label_80030810:
    ctx->pc = 0x80030810u;
    // 80030810: bc    4, 2, 0x80031C74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x80031C74u;
            return;
        }
    }

label_80030814:
    ctx->pc = 0x80030814u;
    ctx->downcount -= 3;
    // 80030814: addi    r3, r20, 0
    ctx->gpr[3] = ctx->gpr[20] + (u32)(s32)(0);

label_80030818:
    ctx->pc = 0x80030818u;
    // 80030818: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8003081C:
    ctx->pc = 0x8003081Cu;
    // 8003081C: bl      0x8001DA20
    {
            ctx->lr = 0x80030820u;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_80030820:
    ctx->pc = 0x80030820u;
    ctx->downcount -= 36;
    // 80030820: rlwinm r0, r20, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[20], 16u) & 0x0000FFFFu;
    }

label_80030824:
    ctx->pc = 0x80030824u;
    // 80030824: lhz     r4, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80030828:
    ctx->pc = 0x80030828u;
    // 80030828: stw     r0, 564(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(564);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8003082C:
    ctx->pc = 0x8003082Cu;
    // 8003082C: addis   r3, r19, 32
    ctx->gpr[3] = ctx->gpr[19] + ((u32)(s32)(32) << 16);

label_80030830:
    ctx->pc = 0x80030830u;
    // 80030830: rlwinm r4, r4, 0, 0, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFC00u;
    }

label_80030834:
    ctx->pc = 0x80030834u;
    // 80030834: lwz     r0, 564(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030838:
    ctx->pc = 0x80030838u;
    // 80030838: rlwinm r16, r3, 16, 16, 31
    {
        ctx->gpr[16] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0x0000FFFFu;
    }

label_8003083C:
    ctx->pc = 0x8003083Cu;
    // 8003083C: rlwinm r23, r3, 0, 16, 31
    {
        ctx->gpr[23] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_80030840:
    ctx->pc = 0x80030840u;
    // 80030840: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80030844:
    ctx->pc = 0x80030844u;
    // 80030844: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030848:
    ctx->pc = 0x80030848u;
    // 80030848: rlwinm r0, r20, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[20], 0u) & 0x0000FFFFu;
    }

label_8003084C:
    ctx->pc = 0x8003084Cu;
    // 8003084C: stw     r0, 600(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(600);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030850:
    ctx->pc = 0x80030850u;
    // 80030850: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030854:
    ctx->pc = 0x80030854u;
    // 80030854: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030858:
    ctx->pc = 0x80030858u;
    // 80030858: lwz     r0, 600(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(600);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003085C:
    ctx->pc = 0x8003085Cu;
    // 8003085C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030860:
    ctx->pc = 0x80030860u;
    // 80030860: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030864:
    ctx->pc = 0x80030864u;
    // 80030864: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030868:
    ctx->pc = 0x80030868u;
    // 80030868: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_8003086C:
    ctx->pc = 0x8003086Cu;
    // 8003086C: or   r0, r0, r16
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[16];
    }

label_80030870:
    ctx->pc = 0x80030870u;
    // 80030870: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030874:
    ctx->pc = 0x80030874u;
    // 80030874: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030878:
    ctx->pc = 0x80030878u;
    // 80030878: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_8003087C:
    ctx->pc = 0x8003087Cu;
    // 8003087C: or   r0, r0, r23
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[23];
    }

label_80030880:
    ctx->pc = 0x80030880u;
    // 80030880: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030884:
    ctx->pc = 0x80030884u;
    // 80030884: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030888:
    ctx->pc = 0x80030888u;
    // 80030888: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_8003088C:
    ctx->pc = 0x8003088Cu;
    // 8003088C: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030890:
    ctx->pc = 0x80030890u;
    // 80030890: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030894:
    ctx->pc = 0x80030894u;
    // 80030894: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030898:
    ctx->pc = 0x80030898u;
    // 80030898: nop
    // nop

label_8003089C:
    ctx->pc = 0x8003089Cu;
    // 8003089C: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800308A0:
    ctx->pc = 0x800308A0u;
    // 800308A0: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800308A4:
    ctx->pc = 0x800308A4u;
    // 800308A4: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800308A8:
    ctx->pc = 0x800308A8u;
    // 800308A8: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_800308AC:
    ctx->pc = 0x800308ACu;
    // 800308AC: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800308B0:
    loop_800308B0(ctx);
    if (ctx->pc == 0x800308BCu) goto label_800308BC;
    return;
label_800308B4:
    // 800308B4: rlwinm. r0, r0, 0, 22, 22
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

label_800308B8:
    // 800308B8: bc    4, 2, 0x800308B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800308B0u;
                return;
            }
            goto label_800308B0;
        }
    }

label_800308BC:
    ctx->pc = 0x800308BCu;
    ctx->downcount -= 6;
    // 800308BC: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_800308C0:
    ctx->pc = 0x800308C0u;
    // 800308C0: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_800308C4:
    ctx->pc = 0x800308C4u;
    // 800308C4: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_800308C8:
    ctx->pc = 0x800308C8u;
    // 800308C8: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_800308CC:
    ctx->pc = 0x800308CCu;
    // 800308CC: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800308D0:
    ctx->pc = 0x800308D0u;
    // 800308D0: bl      0x8001BFE8
    {
            ctx->lr = 0x800308D4u;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_800308D4:
    ctx->pc = 0x800308D4u;
    ctx->downcount -= 3;
    // 800308D4: lwz     r3, 540(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800308D8:
    ctx->pc = 0x800308D8u;
    // 800308D8: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_800308DC:
    ctx->pc = 0x800308DCu;
    // 800308DC: bl      0x8001DA20
    {
            ctx->lr = 0x800308E0u;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_800308E0:
    ctx->pc = 0x800308E0u;
    ctx->downcount -= 38;
    // 800308E0: lwz     r0, 540(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(540);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800308E4:
    ctx->pc = 0x800308E4u;
    // 800308E4: addis   r3, r19, 256
    ctx->gpr[3] = ctx->gpr[19] + ((u32)(s32)(256) << 16);

label_800308E8:
    ctx->pc = 0x800308E8u;
    // 800308E8: lhz     r4, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_800308EC:
    ctx->pc = 0x800308ECu;
    // 800308EC: rlwinm r14, r3, 16, 16, 31
    {
        ctx->gpr[14] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0x0000FFFFu;
    }

label_800308F0:
    ctx->pc = 0x800308F0u;
    // 800308F0: rlwinm r0, r0, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x0000FFFFu;
    }

label_800308F4:
    ctx->pc = 0x800308F4u;
    // 800308F4: stw     r0, 556(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800308F8:
    ctx->pc = 0x800308F8u;
    // 800308F8: rlwinm r4, r4, 0, 0, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFC00u;
    }

label_800308FC:
    ctx->pc = 0x800308FCu;
    // 800308FC: rlwinm r15, r3, 0, 16, 31
    {
        ctx->gpr[15] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_80030900:
    ctx->pc = 0x80030900u;
    // 80030900: lwz     r0, 556(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(556);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030904:
    ctx->pc = 0x80030904u;
    // 80030904: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80030908:
    ctx->pc = 0x80030908u;
    // 80030908: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003090C:
    ctx->pc = 0x8003090Cu;
    // 8003090C: lwz     r0, 540(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(540);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030910:
    ctx->pc = 0x80030910u;
    // 80030910: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80030914:
    ctx->pc = 0x80030914u;
    // 80030914: stw     r0, 604(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(604);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030918:
    ctx->pc = 0x80030918u;
    // 80030918: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003091C:
    ctx->pc = 0x8003091Cu;
    // 8003091C: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030920:
    ctx->pc = 0x80030920u;
    // 80030920: lwz     r0, 604(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(604);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030924:
    ctx->pc = 0x80030924u;
    // 80030924: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030928:
    ctx->pc = 0x80030928u;
    // 80030928: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003092C:
    ctx->pc = 0x8003092Cu;
    // 8003092C: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030930:
    ctx->pc = 0x80030930u;
    // 80030930: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030934:
    ctx->pc = 0x80030934u;
    // 80030934: or   r0, r0, r14
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[14];
    }

label_80030938:
    ctx->pc = 0x80030938u;
    // 80030938: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003093C:
    ctx->pc = 0x8003093Cu;
    // 8003093C: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030940:
    ctx->pc = 0x80030940u;
    // 80030940: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030944:
    ctx->pc = 0x80030944u;
    // 80030944: or   r0, r0, r15
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[15];
    }

label_80030948:
    ctx->pc = 0x80030948u;
    // 80030948: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003094C:
    ctx->pc = 0x8003094Cu;
    // 8003094C: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030950:
    ctx->pc = 0x80030950u;
    // 80030950: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_80030954:
    ctx->pc = 0x80030954u;
    // 80030954: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030958:
    ctx->pc = 0x80030958u;
    // 80030958: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003095C:
    ctx->pc = 0x8003095Cu;
    // 8003095C: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030960:
    ctx->pc = 0x80030960u;
    // 80030960: nop
    // nop

label_80030964:
    ctx->pc = 0x80030964u;
    // 80030964: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030968:
    ctx->pc = 0x80030968u;
    // 80030968: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003096C:
    ctx->pc = 0x8003096Cu;
    // 8003096C: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030970:
    ctx->pc = 0x80030970u;
    // 80030970: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030974:
    ctx->pc = 0x80030974u;
    // 80030974: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030978:
    loop_80030978(ctx);
    if (ctx->pc == 0x80030984u) goto label_80030984;
    return;
label_8003097C:
    // 8003097C: rlwinm. r0, r0, 0, 22, 22
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

label_80030980:
    // 80030980: bc    4, 2, 0x80030978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030978u;
                return;
            }
            goto label_80030978;
        }
    }

label_80030984:
    ctx->pc = 0x80030984u;
    ctx->downcount -= 6;
    // 80030984: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80030988:
    ctx->pc = 0x80030988u;
    // 80030988: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_8003098C:
    ctx->pc = 0x8003098Cu;
    // 8003098C: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80030990:
    ctx->pc = 0x80030990u;
    // 80030990: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030994:
    ctx->pc = 0x80030994u;
    // 80030994: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030998:
    ctx->pc = 0x80030998u;
    // 80030998: bl      0x8001BFE8
    {
            ctx->lr = 0x8003099Cu;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_8003099C:
    ctx->pc = 0x8003099Cu;
    ctx->downcount -= 3;
    // 8003099C: lwz     r3, 536(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(536);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800309A0:
    ctx->pc = 0x800309A0u;
    // 800309A0: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_800309A4:
    ctx->pc = 0x800309A4u;
    // 800309A4: bl      0x8001DA20
    {
            ctx->lr = 0x800309A8u;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_800309A8:
    ctx->pc = 0x800309A8u;
    ctx->downcount -= 42;
    // 800309A8: lwz     r0, 536(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(536);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800309AC:
    ctx->pc = 0x800309ACu;
    // 800309AC: addi    r3, r19, 512
    ctx->gpr[3] = ctx->gpr[19] + (u32)(s32)(512);

label_800309B0:
    ctx->pc = 0x800309B0u;
    // 800309B0: lhz     r4, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_800309B4:
    ctx->pc = 0x800309B4u;
    // 800309B4: rlwinm r0, r0, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x0000FFFFu;
    }

label_800309B8:
    ctx->pc = 0x800309B8u;
    // 800309B8: stw     r0, 548(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800309BC:
    ctx->pc = 0x800309BCu;
    // 800309BC: rlwinm r4, r4, 0, 0, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFC00u;
    }

label_800309C0:
    ctx->pc = 0x800309C0u;
    // 800309C0: lwz     r0, 548(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(548);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800309C4:
    ctx->pc = 0x800309C4u;
    // 800309C4: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_800309C8:
    ctx->pc = 0x800309C8u;
    // 800309C8: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800309CC:
    ctx->pc = 0x800309CCu;
    // 800309CC: rlwinm r0, r3, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0x0000FFFFu;
    }

label_800309D0:
    ctx->pc = 0x800309D0u;
    // 800309D0: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_800309D4:
    ctx->pc = 0x800309D4u;
    // 800309D4: stw     r0, 560(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800309D8:
    ctx->pc = 0x800309D8u;
    // 800309D8: lwz     r0, 536(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(536);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800309DC:
    ctx->pc = 0x800309DCu;
    // 800309DC: stw     r3, 612(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(612);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800309E0:
    ctx->pc = 0x800309E0u;
    // 800309E0: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_800309E4:
    ctx->pc = 0x800309E4u;
    // 800309E4: stw     r0, 608(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(608);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_800309E8:
    ctx->pc = 0x800309E8u;
    // 800309E8: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800309EC:
    ctx->pc = 0x800309ECu;
    // 800309EC: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800309F0:
    ctx->pc = 0x800309F0u;
    // 800309F0: lwz     r0, 608(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(608);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800309F4:
    ctx->pc = 0x800309F4u;
    // 800309F4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800309F8:
    ctx->pc = 0x800309F8u;
    // 800309F8: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800309FC:
    ctx->pc = 0x800309FCu;
    // 800309FC: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030A00:
    ctx->pc = 0x80030A00u;
    // 80030A00: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030A04:
    ctx->pc = 0x80030A04u;
    // 80030A04: lwz     r0, 560(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030A08:
    ctx->pc = 0x80030A08u;
    // 80030A08: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030A0C:
    ctx->pc = 0x80030A0Cu;
    // 80030A0C: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030A10:
    ctx->pc = 0x80030A10u;
    // 80030A10: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030A14:
    ctx->pc = 0x80030A14u;
    // 80030A14: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030A18:
    ctx->pc = 0x80030A18u;
    // 80030A18: lwz     r0, 612(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030A1C:
    ctx->pc = 0x80030A1Cu;
    // 80030A1C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030A20:
    ctx->pc = 0x80030A20u;
    // 80030A20: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030A24:
    ctx->pc = 0x80030A24u;
    // 80030A24: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030A28:
    ctx->pc = 0x80030A28u;
    // 80030A28: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_80030A2C:
    ctx->pc = 0x80030A2Cu;
    // 80030A2C: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030A30:
    ctx->pc = 0x80030A30u;
    // 80030A30: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030A34:
    ctx->pc = 0x80030A34u;
    // 80030A34: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030A38:
    ctx->pc = 0x80030A38u;
    // 80030A38: nop
    // nop

label_80030A3C:
    ctx->pc = 0x80030A3Cu;
    // 80030A3C: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030A40:
    ctx->pc = 0x80030A40u;
    // 80030A40: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030A44:
    ctx->pc = 0x80030A44u;
    // 80030A44: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030A48:
    ctx->pc = 0x80030A48u;
    // 80030A48: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030A4C:
    ctx->pc = 0x80030A4Cu;
    // 80030A4C: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030A50:
    loop_80030A50(ctx);
    if (ctx->pc == 0x80030A5Cu) goto label_80030A5C;
    return;
label_80030A54:
    // 80030A54: rlwinm. r0, r0, 0, 22, 22
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

label_80030A58:
    // 80030A58: bc    4, 2, 0x80030A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030A50u;
                return;
            }
            goto label_80030A50;
        }
    }

label_80030A5C:
    ctx->pc = 0x80030A5Cu;
    ctx->downcount -= 6;
    // 80030A5C: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80030A60:
    ctx->pc = 0x80030A60u;
    // 80030A60: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_80030A64:
    ctx->pc = 0x80030A64u;
    // 80030A64: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80030A68:
    ctx->pc = 0x80030A68u;
    // 80030A68: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030A6C:
    ctx->pc = 0x80030A6Cu;
    // 80030A6C: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030A70:
    ctx->pc = 0x80030A70u;
    // 80030A70: bl      0x8001BFE8
    {
            ctx->lr = 0x80030A74u;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_80030A74:
    ctx->pc = 0x80030A74u;
    ctx->downcount -= 3;
    // 80030A74: lwz     r3, 532(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(532);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80030A78:
    ctx->pc = 0x80030A78u;
    // 80030A78: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80030A7C:
    ctx->pc = 0x80030A7Cu;
    // 80030A7C: bl      0x8001DA20
    {
            ctx->lr = 0x80030A80u;
            ctx->pc = 0x8001DA20u;
            return;
    }

label_80030A80:
    ctx->pc = 0x80030A80u;
    ctx->downcount -= 42;
    // 80030A80: lwz     r0, 532(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(532);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030A84:
    ctx->pc = 0x80030A84u;
    // 80030A84: addis   r3, r19, 64
    ctx->gpr[3] = ctx->gpr[19] + ((u32)(s32)(64) << 16);

label_80030A88:
    ctx->pc = 0x80030A88u;
    // 80030A88: lhz     r4, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80030A8C:
    ctx->pc = 0x80030A8Cu;
    // 80030A8C: rlwinm r0, r0, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0x0000FFFFu;
    }

label_80030A90:
    ctx->pc = 0x80030A90u;
    // 80030A90: stw     r0, 544(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(544);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030A94:
    ctx->pc = 0x80030A94u;
    // 80030A94: rlwinm r4, r4, 0, 0, 21
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFC00u;
    }

label_80030A98:
    ctx->pc = 0x80030A98u;
    // 80030A98: lwz     r0, 544(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(544);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030A9C:
    ctx->pc = 0x80030A9Cu;
    // 80030A9C: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_80030AA0:
    ctx->pc = 0x80030AA0u;
    // 80030AA0: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030AA4:
    ctx->pc = 0x80030AA4u;
    // 80030AA4: rlwinm r0, r3, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 16u) & 0x0000FFFFu;
    }

label_80030AA8:
    ctx->pc = 0x80030AA8u;
    // 80030AA8: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_80030AAC:
    ctx->pc = 0x80030AACu;
    // 80030AAC: stw     r0, 552(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(552);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030AB0:
    ctx->pc = 0x80030AB0u;
    // 80030AB0: lwz     r0, 532(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(532);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030AB4:
    ctx->pc = 0x80030AB4u;
    // 80030AB4: stw     r3, 620(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(620);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80030AB8:
    ctx->pc = 0x80030AB8u;
    // 80030AB8: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_80030ABC:
    ctx->pc = 0x80030ABCu;
    // 80030ABC: stw     r0, 616(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(616);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030AC0:
    ctx->pc = 0x80030AC0u;
    // 80030AC0: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030AC4:
    ctx->pc = 0x80030AC4u;
    // 80030AC4: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030AC8:
    ctx->pc = 0x80030AC8u;
    // 80030AC8: lwz     r0, 616(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(616);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030ACC:
    ctx->pc = 0x80030ACCu;
    // 80030ACC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030AD0:
    ctx->pc = 0x80030AD0u;
    // 80030AD0: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030AD4:
    ctx->pc = 0x80030AD4u;
    // 80030AD4: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030AD8:
    ctx->pc = 0x80030AD8u;
    // 80030AD8: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030ADC:
    ctx->pc = 0x80030ADCu;
    // 80030ADC: lwz     r0, 552(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(552);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030AE0:
    ctx->pc = 0x80030AE0u;
    // 80030AE0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030AE4:
    ctx->pc = 0x80030AE4u;
    // 80030AE4: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030AE8:
    ctx->pc = 0x80030AE8u;
    // 80030AE8: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030AEC:
    ctx->pc = 0x80030AECu;
    // 80030AEC: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030AF0:
    ctx->pc = 0x80030AF0u;
    // 80030AF0: lwz     r0, 620(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(620);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030AF4:
    ctx->pc = 0x80030AF4u;
    // 80030AF4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030AF8:
    ctx->pc = 0x80030AF8u;
    // 80030AF8: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030AFC:
    ctx->pc = 0x80030AFCu;
    // 80030AFC: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030B00:
    ctx->pc = 0x80030B00u;
    // 80030B00: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_80030B04:
    ctx->pc = 0x80030B04u;
    // 80030B04: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030B08:
    ctx->pc = 0x80030B08u;
    // 80030B08: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030B0C:
    ctx->pc = 0x80030B0Cu;
    // 80030B0C: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030B10:
    ctx->pc = 0x80030B10u;
    // 80030B10: nop
    // nop

label_80030B14:
    ctx->pc = 0x80030B14u;
    // 80030B14: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030B18:
    ctx->pc = 0x80030B18u;
    // 80030B18: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030B1C:
    ctx->pc = 0x80030B1Cu;
    // 80030B1C: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030B20:
    ctx->pc = 0x80030B20u;
    // 80030B20: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030B24:
    ctx->pc = 0x80030B24u;
    // 80030B24: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030B28:
    loop_80030B28(ctx);
    if (ctx->pc == 0x80030B34u) goto label_80030B34;
    return;
label_80030B2C:
    // 80030B2C: rlwinm. r0, r0, 0, 22, 22
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

label_80030B30:
    // 80030B30: bc    4, 2, 0x80030B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030B28u;
                return;
            }
            goto label_80030B28;
        }
    }

label_80030B34:
    ctx->pc = 0x80030B34u;
    ctx->downcount -= 6;
    // 80030B34: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80030B38:
    ctx->pc = 0x80030B38u;
    // 80030B38: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_80030B3C:
    ctx->pc = 0x80030B3Cu;
    // 80030B3C: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80030B40:
    ctx->pc = 0x80030B40u;
    // 80030B40: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030B44:
    ctx->pc = 0x80030B44u;
    // 80030B44: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030B48:
    ctx->pc = 0x80030B48u;
    // 80030B48: bl      0x8001BFE8
    {
            ctx->lr = 0x80030B4Cu;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_80030B4C:
    ctx->pc = 0x80030B4Cu;
    ctx->downcount -= 31;
    // 80030B4C: rlwinm r0, r21, 16, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[21], 16u) & 0x0000FFFFu;
    }

label_80030B50:
    ctx->pc = 0x80030B50u;
    // 80030B50: lhz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80030B54:
    ctx->pc = 0x80030B54u;
    // 80030B54: stw     r0, 568(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(568);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030B58:
    ctx->pc = 0x80030B58u;
    // 80030B58: rlwinm r20, r21, 0, 16, 31
    {
        ctx->gpr[20] = dolrecomp_rotl32(ctx->gpr[21], 0u) & 0x0000FFFFu;
    }

label_80030B5C:
    ctx->pc = 0x80030B5Cu;
    // 80030B5C: rlwinm r3, r3, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFC00u;
    }

label_80030B60:
    ctx->pc = 0x80030B60u;
    // 80030B60: lwz     r0, 568(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030B64:
    ctx->pc = 0x80030B64u;
    // 80030B64: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030B68:
    ctx->pc = 0x80030B68u;
    // 80030B68: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030B6C:
    ctx->pc = 0x80030B6Cu;
    // 80030B6C: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030B70:
    ctx->pc = 0x80030B70u;
    // 80030B70: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030B74:
    ctx->pc = 0x80030B74u;
    // 80030B74: or   r0, r0, r20
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[20];
    }

label_80030B78:
    ctx->pc = 0x80030B78u;
    // 80030B78: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030B7C:
    ctx->pc = 0x80030B7Cu;
    // 80030B7C: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030B80:
    ctx->pc = 0x80030B80u;
    // 80030B80: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030B84:
    ctx->pc = 0x80030B84u;
    // 80030B84: or   r0, r0, r16
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[16];
    }

label_80030B88:
    ctx->pc = 0x80030B88u;
    // 80030B88: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030B8C:
    ctx->pc = 0x80030B8Cu;
    // 80030B8C: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030B90:
    ctx->pc = 0x80030B90u;
    // 80030B90: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030B94:
    ctx->pc = 0x80030B94u;
    // 80030B94: or   r0, r0, r23
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[23];
    }

label_80030B98:
    ctx->pc = 0x80030B98u;
    // 80030B98: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030B9C:
    ctx->pc = 0x80030B9Cu;
    // 80030B9C: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030BA0:
    ctx->pc = 0x80030BA0u;
    // 80030BA0: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_80030BA4:
    ctx->pc = 0x80030BA4u;
    // 80030BA4: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030BA8:
    ctx->pc = 0x80030BA8u;
    // 80030BA8: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030BAC:
    ctx->pc = 0x80030BACu;
    // 80030BAC: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030BB0:
    ctx->pc = 0x80030BB0u;
    // 80030BB0: nop
    // nop

label_80030BB4:
    ctx->pc = 0x80030BB4u;
    // 80030BB4: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030BB8:
    ctx->pc = 0x80030BB8u;
    // 80030BB8: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030BBC:
    ctx->pc = 0x80030BBCu;
    // 80030BBC: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030BC0:
    ctx->pc = 0x80030BC0u;
    // 80030BC0: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030BC4:
    ctx->pc = 0x80030BC4u;
    // 80030BC4: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030BC8:
    loop_80030BC8(ctx);
    if (ctx->pc == 0x80030BD4u) goto label_80030BD4;
    return;
label_80030BCC:
    // 80030BCC: rlwinm. r0, r0, 0, 22, 22
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

label_80030BD0:
    // 80030BD0: bc    4, 2, 0x80030BC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030BC8u;
                return;
            }
            goto label_80030BC8;
        }
    }

label_80030BD4:
    ctx->pc = 0x80030BD4u;
    ctx->downcount -= 34;
    // 80030BD4: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80030BD8:
    ctx->pc = 0x80030BD8u;
    // 80030BD8: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_80030BDC:
    ctx->pc = 0x80030BDCu;
    // 80030BDC: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80030BE0:
    ctx->pc = 0x80030BE0u;
    // 80030BE0: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030BE4:
    ctx->pc = 0x80030BE4u;
    // 80030BE4: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030BE8:
    ctx->pc = 0x80030BE8u;
    // 80030BE8: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030BEC:
    ctx->pc = 0x80030BECu;
    // 80030BEC: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030BF0:
    ctx->pc = 0x80030BF0u;
    // 80030BF0: lwz     r0, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030BF4:
    ctx->pc = 0x80030BF4u;
    // 80030BF4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030BF8:
    ctx->pc = 0x80030BF8u;
    // 80030BF8: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030BFC:
    ctx->pc = 0x80030BFCu;
    // 80030BFC: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030C00:
    ctx->pc = 0x80030C00u;
    // 80030C00: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030C04:
    ctx->pc = 0x80030C04u;
    // 80030C04: lwz     r0, 592(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(592);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030C08:
    ctx->pc = 0x80030C08u;
    // 80030C08: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030C0C:
    ctx->pc = 0x80030C0Cu;
    // 80030C0C: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030C10:
    ctx->pc = 0x80030C10u;
    // 80030C10: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030C14:
    ctx->pc = 0x80030C14u;
    // 80030C14: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030C18:
    ctx->pc = 0x80030C18u;
    // 80030C18: or   r0, r0, r17
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[17];
    }

label_80030C1C:
    ctx->pc = 0x80030C1Cu;
    // 80030C1C: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030C20:
    ctx->pc = 0x80030C20u;
    // 80030C20: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030C24:
    ctx->pc = 0x80030C24u;
    // 80030C24: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030C28:
    ctx->pc = 0x80030C28u;
    // 80030C28: or   r0, r0, r18
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[18];
    }

label_80030C2C:
    ctx->pc = 0x80030C2Cu;
    // 80030C2C: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030C30:
    ctx->pc = 0x80030C30u;
    // 80030C30: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030C34:
    ctx->pc = 0x80030C34u;
    // 80030C34: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_80030C38:
    ctx->pc = 0x80030C38u;
    // 80030C38: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030C3C:
    ctx->pc = 0x80030C3Cu;
    // 80030C3C: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030C40:
    ctx->pc = 0x80030C40u;
    // 80030C40: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030C44:
    ctx->pc = 0x80030C44u;
    // 80030C44: nop
    // nop

label_80030C48:
    ctx->pc = 0x80030C48u;
    // 80030C48: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030C4C:
    ctx->pc = 0x80030C4Cu;
    // 80030C4C: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030C50:
    ctx->pc = 0x80030C50u;
    // 80030C50: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030C54:
    ctx->pc = 0x80030C54u;
    // 80030C54: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030C58:
    ctx->pc = 0x80030C58u;
    // 80030C58: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030C5C:
    loop_80030C5C(ctx);
    if (ctx->pc == 0x80030C68u) goto label_80030C68;
    return;
label_80030C60:
    // 80030C60: rlwinm. r0, r0, 0, 22, 22
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

label_80030C64:
    // 80030C64: bc    4, 2, 0x80030C5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030C5Cu;
                return;
            }
            goto label_80030C5C;
        }
    }

label_80030C68:
    ctx->pc = 0x80030C68u;
    ctx->downcount -= 9;
    // 80030C68: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030C6C:
    ctx->pc = 0x80030C6Cu;
    // 80030C6C: li      r4, -137
    ctx->gpr[4] = (u32)(s32)(-137);

label_80030C70:
    ctx->pc = 0x80030C70u;
    // 80030C70: addi    r3, r24, 0
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(0);

label_80030C74:
    ctx->pc = 0x80030C74u;
    // 80030C74: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_80030C78:
    ctx->pc = 0x80030C78u;
    // 80030C78: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030C7C:
    ctx->pc = 0x80030C7Cu;
    // 80030C7C: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030C80:
    ctx->pc = 0x80030C80u;
    // 80030C80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80030C84:
    ctx->pc = 0x80030C84u;
    // 80030C84: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80030C88:
    ctx->pc = 0x80030C88u;
    // 80030C88: bl      0x800050B4
    {
            ctx->lr = 0x80030C8Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80030C8C:
    ctx->pc = 0x80030C8Cu;
    ctx->downcount -= 3;
    // 80030C8C: addi    r3, r24, 0
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(0);

label_80030C90:
    ctx->pc = 0x80030C90u;
    // 80030C90: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80030C94:
    ctx->pc = 0x80030C94u;
    // 80030C94: bl      0x8001DA4C
    {
            ctx->lr = 0x80030C98u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_80030C98:
    ctx->pc = 0x80030C98u;
    ctx->downcount -= 29;
    // 80030C98: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030C9C:
    ctx->pc = 0x80030C9Cu;
    // 80030C9C: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030CA0:
    ctx->pc = 0x80030CA0u;
    // 80030CA0: lwz     r0, 576(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030CA4:
    ctx->pc = 0x80030CA4u;
    // 80030CA4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030CA8:
    ctx->pc = 0x80030CA8u;
    // 80030CA8: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030CAC:
    ctx->pc = 0x80030CACu;
    // 80030CAC: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030CB0:
    ctx->pc = 0x80030CB0u;
    // 80030CB0: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030CB4:
    ctx->pc = 0x80030CB4u;
    // 80030CB4: lwz     r0, 596(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(596);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030CB8:
    ctx->pc = 0x80030CB8u;
    // 80030CB8: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030CBC:
    ctx->pc = 0x80030CBCu;
    // 80030CBC: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030CC0:
    ctx->pc = 0x80030CC0u;
    // 80030CC0: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030CC4:
    ctx->pc = 0x80030CC4u;
    // 80030CC4: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030CC8:
    ctx->pc = 0x80030CC8u;
    // 80030CC8: or   r0, r0, r16
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[16];
    }

label_80030CCC:
    ctx->pc = 0x80030CCCu;
    // 80030CCC: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030CD0:
    ctx->pc = 0x80030CD0u;
    // 80030CD0: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030CD4:
    ctx->pc = 0x80030CD4u;
    // 80030CD4: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030CD8:
    ctx->pc = 0x80030CD8u;
    // 80030CD8: or   r0, r0, r23
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[23];
    }

label_80030CDC:
    ctx->pc = 0x80030CDCu;
    // 80030CDC: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030CE0:
    ctx->pc = 0x80030CE0u;
    // 80030CE0: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030CE4:
    ctx->pc = 0x80030CE4u;
    // 80030CE4: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_80030CE8:
    ctx->pc = 0x80030CE8u;
    // 80030CE8: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030CEC:
    ctx->pc = 0x80030CECu;
    // 80030CEC: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030CF0:
    ctx->pc = 0x80030CF0u;
    // 80030CF0: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030CF4:
    ctx->pc = 0x80030CF4u;
    // 80030CF4: nop
    // nop

label_80030CF8:
    ctx->pc = 0x80030CF8u;
    // 80030CF8: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030CFC:
    ctx->pc = 0x80030CFCu;
    // 80030CFC: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030D00:
    ctx->pc = 0x80030D00u;
    // 80030D00: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030D04:
    ctx->pc = 0x80030D04u;
    // 80030D04: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030D08:
    ctx->pc = 0x80030D08u;
    // 80030D08: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030D0C:
    loop_80030D0C(ctx);
    if (ctx->pc == 0x80030D18u) goto label_80030D18;
    return;
label_80030D10:
    // 80030D10: rlwinm. r0, r0, 0, 22, 22
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

label_80030D14:
    // 80030D14: bc    4, 2, 0x80030D0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030D0Cu;
                return;
            }
            goto label_80030D0C;
        }
    }

label_80030D18:
    ctx->pc = 0x80030D18u;
    ctx->downcount -= 6;
    // 80030D18: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80030D1C:
    ctx->pc = 0x80030D1Cu;
    // 80030D1C: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_80030D20:
    ctx->pc = 0x80030D20u;
    // 80030D20: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80030D24:
    ctx->pc = 0x80030D24u;
    // 80030D24: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030D28:
    ctx->pc = 0x80030D28u;
    // 80030D28: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030D2C:
    ctx->pc = 0x80030D2Cu;
    // 80030D2C: bl      0x8001BFE8
    {
            ctx->lr = 0x80030D30u;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_80030D30:
    ctx->pc = 0x80030D30u;
    ctx->downcount -= 4;
    // 80030D30: lwz     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80030D34:
    ctx->pc = 0x80030D34u;
    // 80030D34: lwz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030D38:
    ctx->pc = 0x80030D38u;
    // 80030D38: cmplw   r3, r0
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

label_80030D3C:
    ctx->pc = 0x80030D3Cu;
    // 80030D3C: bc    4, 2, 0x80030DE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80030DE4;
        }
    }

label_80030D40:
    ctx->pc = 0x80030D40u;
    ctx->downcount -= 29;
    // 80030D40: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030D44:
    ctx->pc = 0x80030D44u;
    // 80030D44: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030D48:
    ctx->pc = 0x80030D48u;
    // 80030D48: lwz     r0, 572(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(572);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030D4C:
    ctx->pc = 0x80030D4Cu;
    // 80030D4C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030D50:
    ctx->pc = 0x80030D50u;
    // 80030D50: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030D54:
    ctx->pc = 0x80030D54u;
    // 80030D54: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030D58:
    ctx->pc = 0x80030D58u;
    // 80030D58: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030D5C:
    ctx->pc = 0x80030D5Cu;
    // 80030D5C: lwz     r0, 588(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(588);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030D60:
    ctx->pc = 0x80030D60u;
    // 80030D60: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030D64:
    ctx->pc = 0x80030D64u;
    // 80030D64: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030D68:
    ctx->pc = 0x80030D68u;
    // 80030D68: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030D6C:
    ctx->pc = 0x80030D6Cu;
    // 80030D6C: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030D70:
    ctx->pc = 0x80030D70u;
    // 80030D70: or   r0, r0, r17
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[17];
    }

label_80030D74:
    ctx->pc = 0x80030D74u;
    // 80030D74: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030D78:
    ctx->pc = 0x80030D78u;
    // 80030D78: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030D7C:
    ctx->pc = 0x80030D7Cu;
    // 80030D7C: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030D80:
    ctx->pc = 0x80030D80u;
    // 80030D80: or   r0, r0, r18
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[18];
    }

label_80030D84:
    ctx->pc = 0x80030D84u;
    // 80030D84: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030D88:
    ctx->pc = 0x80030D88u;
    // 80030D88: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030D8C:
    ctx->pc = 0x80030D8Cu;
    // 80030D8C: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_80030D90:
    ctx->pc = 0x80030D90u;
    // 80030D90: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030D94:
    ctx->pc = 0x80030D94u;
    // 80030D94: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030D98:
    ctx->pc = 0x80030D98u;
    // 80030D98: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030D9C:
    ctx->pc = 0x80030D9Cu;
    // 80030D9C: nop
    // nop

label_80030DA0:
    ctx->pc = 0x80030DA0u;
    // 80030DA0: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030DA4:
    ctx->pc = 0x80030DA4u;
    // 80030DA4: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030DA8:
    ctx->pc = 0x80030DA8u;
    // 80030DA8: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030DAC:
    ctx->pc = 0x80030DACu;
    // 80030DAC: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030DB0:
    ctx->pc = 0x80030DB0u;
    // 80030DB0: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030DB4:
    loop_80030DB4(ctx);
    if (ctx->pc == 0x80030DC0u) goto label_80030DC0;
    return;
label_80030DB8:
    // 80030DB8: rlwinm. r0, r0, 0, 22, 22
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

label_80030DBC:
    // 80030DBC: bc    4, 2, 0x80030DB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030DB4u;
                return;
            }
            goto label_80030DB4;
        }
    }

label_80030DC0:
    ctx->pc = 0x80030DC0u;
    ctx->downcount -= 9;
    // 80030DC0: lhz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_80030DC4:
    ctx->pc = 0x80030DC4u;
    // 80030DC4: li      r3, -137
    ctx->gpr[3] = (u32)(s32)(-137);

label_80030DC8:
    ctx->pc = 0x80030DC8u;
    // 80030DC8: lis     r0, 32
    ctx->gpr[0] = ((u32)(s32)(32) << 16);

label_80030DCC:
    ctx->pc = 0x80030DCCu;
    // 80030DCC: and   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] & ctx->gpr[3];
    }

label_80030DD0:
    ctx->pc = 0x80030DD0u;
    // 80030DD0: ori     r3, r3, 0x0020
    ctx->gpr[3] = ctx->gpr[3] | 0x0020u;

label_80030DD4:
    ctx->pc = 0x80030DD4u;
    // 80030DD4: sth     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_80030DD8:
    ctx->pc = 0x80030DD8u;
    // 80030DD8: addis   r19, r19, 32
    ctx->gpr[19] = ctx->gpr[19] + ((u32)(s32)(32) << 16);

label_80030DDC:
    ctx->pc = 0x80030DDCu;
    // 80030DDC: stw     r0, -31532(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31532);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80030DE0:
    ctx->pc = 0x80030DE0u;
    // 80030DE0: b       0x80031C58
    {
            ctx->pc = 0x80031C58u;
            return;
    }

label_80030DE4:
    ctx->pc = 0x80030DE4u;
    ctx->downcount -= 28;
    // 80030DE4: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030DE8:
    ctx->pc = 0x80030DE8u;
    // 80030DE8: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030DEC:
    ctx->pc = 0x80030DECu;
    // 80030DEC: lwz     r0, 568(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030DF0:
    ctx->pc = 0x80030DF0u;
    // 80030DF0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030DF4:
    ctx->pc = 0x80030DF4u;
    // 80030DF4: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030DF8:
    ctx->pc = 0x80030DF8u;
    // 80030DF8: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030DFC:
    ctx->pc = 0x80030DFCu;
    // 80030DFC: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030E00:
    ctx->pc = 0x80030E00u;
    // 80030E00: or   r0, r0, r20
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[20];
    }

label_80030E04:
    ctx->pc = 0x80030E04u;
    // 80030E04: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030E08:
    ctx->pc = 0x80030E08u;
    // 80030E08: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030E0C:
    ctx->pc = 0x80030E0Cu;
    // 80030E0C: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030E10:
    ctx->pc = 0x80030E10u;
    // 80030E10: or   r0, r0, r14
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[14];
    }

label_80030E14:
    ctx->pc = 0x80030E14u;
    // 80030E14: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030E18:
    ctx->pc = 0x80030E18u;
    // 80030E18: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030E1C:
    ctx->pc = 0x80030E1Cu;
    // 80030E1C: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030E20:
    ctx->pc = 0x80030E20u;
    // 80030E20: or   r0, r0, r15
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[15];
    }

label_80030E24:
    ctx->pc = 0x80030E24u;
    // 80030E24: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030E28:
    ctx->pc = 0x80030E28u;
    // 80030E28: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030E2C:
    ctx->pc = 0x80030E2Cu;
    // 80030E2C: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_80030E30:
    ctx->pc = 0x80030E30u;
    // 80030E30: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030E34:
    ctx->pc = 0x80030E34u;
    // 80030E34: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030E38:
    ctx->pc = 0x80030E38u;
    // 80030E38: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030E3C:
    ctx->pc = 0x80030E3Cu;
    // 80030E3C: nop
    // nop

label_80030E40:
    ctx->pc = 0x80030E40u;
    // 80030E40: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030E44:
    ctx->pc = 0x80030E44u;
    // 80030E44: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030E48:
    ctx->pc = 0x80030E48u;
    // 80030E48: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030E4C:
    ctx->pc = 0x80030E4Cu;
    // 80030E4C: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030E50:
    ctx->pc = 0x80030E50u;
    // 80030E50: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030E54:
    loop_80030E54(ctx);
    if (ctx->pc == 0x80030E60u) goto label_80030E60;
    return;
label_80030E58:
    // 80030E58: rlwinm. r0, r0, 0, 22, 22
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

label_80030E5C:
    // 80030E5C: bc    4, 2, 0x80030E54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030E54u;
                return;
            }
            goto label_80030E54;
        }
    }

label_80030E60:
    ctx->pc = 0x80030E60u;
    ctx->downcount -= 34;
    // 80030E60: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80030E64:
    ctx->pc = 0x80030E64u;
    // 80030E64: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_80030E68:
    ctx->pc = 0x80030E68u;
    // 80030E68: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80030E6C:
    ctx->pc = 0x80030E6Cu;
    // 80030E6C: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030E70:
    ctx->pc = 0x80030E70u;
    // 80030E70: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030E74:
    ctx->pc = 0x80030E74u;
    // 80030E74: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030E78:
    ctx->pc = 0x80030E78u;
    // 80030E78: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030E7C:
    ctx->pc = 0x80030E7Cu;
    // 80030E7C: lwz     r0, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030E80:
    ctx->pc = 0x80030E80u;
    // 80030E80: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030E84:
    ctx->pc = 0x80030E84u;
    // 80030E84: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030E88:
    ctx->pc = 0x80030E88u;
    // 80030E88: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030E8C:
    ctx->pc = 0x80030E8Cu;
    // 80030E8C: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030E90:
    ctx->pc = 0x80030E90u;
    // 80030E90: lwz     r0, 592(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(592);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030E94:
    ctx->pc = 0x80030E94u;
    // 80030E94: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030E98:
    ctx->pc = 0x80030E98u;
    // 80030E98: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030E9C:
    ctx->pc = 0x80030E9Cu;
    // 80030E9C: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030EA0:
    ctx->pc = 0x80030EA0u;
    // 80030EA0: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030EA4:
    ctx->pc = 0x80030EA4u;
    // 80030EA4: or   r0, r0, r17
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[17];
    }

label_80030EA8:
    ctx->pc = 0x80030EA8u;
    // 80030EA8: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030EAC:
    ctx->pc = 0x80030EACu;
    // 80030EAC: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030EB0:
    ctx->pc = 0x80030EB0u;
    // 80030EB0: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030EB4:
    ctx->pc = 0x80030EB4u;
    // 80030EB4: or   r0, r0, r18
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[18];
    }

label_80030EB8:
    ctx->pc = 0x80030EB8u;
    // 80030EB8: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030EBC:
    ctx->pc = 0x80030EBCu;
    // 80030EBC: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030EC0:
    ctx->pc = 0x80030EC0u;
    // 80030EC0: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_80030EC4:
    ctx->pc = 0x80030EC4u;
    // 80030EC4: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030EC8:
    ctx->pc = 0x80030EC8u;
    // 80030EC8: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030ECC:
    ctx->pc = 0x80030ECCu;
    // 80030ECC: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030ED0:
    ctx->pc = 0x80030ED0u;
    // 80030ED0: nop
    // nop

label_80030ED4:
    ctx->pc = 0x80030ED4u;
    // 80030ED4: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030ED8:
    ctx->pc = 0x80030ED8u;
    // 80030ED8: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030EDC:
    ctx->pc = 0x80030EDCu;
    // 80030EDC: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030EE0:
    ctx->pc = 0x80030EE0u;
    // 80030EE0: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030EE4:
    ctx->pc = 0x80030EE4u;
    // 80030EE4: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030EE8:
    loop_80030EE8(ctx);
    if (ctx->pc == 0x80030EF4u) goto label_80030EF4;
    return;
label_80030EEC:
    // 80030EEC: rlwinm. r0, r0, 0, 22, 22
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

label_80030EF0:
    // 80030EF0: bc    4, 2, 0x80030EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030EE8u;
                return;
            }
            goto label_80030EE8;
        }
    }

label_80030EF4:
    ctx->pc = 0x80030EF4u;
    ctx->downcount -= 9;
    // 80030EF4: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030EF8:
    ctx->pc = 0x80030EF8u;
    // 80030EF8: li      r4, -137
    ctx->gpr[4] = (u32)(s32)(-137);

label_80030EFC:
    ctx->pc = 0x80030EFCu;
    // 80030EFC: addi    r3, r24, 0
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(0);

label_80030F00:
    ctx->pc = 0x80030F00u;
    // 80030F00: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_80030F04:
    ctx->pc = 0x80030F04u;
    // 80030F04: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030F08:
    ctx->pc = 0x80030F08u;
    // 80030F08: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030F0C:
    ctx->pc = 0x80030F0Cu;
    // 80030F0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80030F10:
    ctx->pc = 0x80030F10u;
    // 80030F10: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80030F14:
    ctx->pc = 0x80030F14u;
    // 80030F14: bl      0x800050B4
    {
            ctx->lr = 0x80030F18u;
            ctx->pc = 0x800050B4u;
            return;
    }

label_80030F18:
    ctx->pc = 0x80030F18u;
    ctx->downcount -= 3;
    // 80030F18: addi    r3, r24, 0
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(0);

label_80030F1C:
    ctx->pc = 0x80030F1Cu;
    // 80030F1C: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80030F20:
    ctx->pc = 0x80030F20u;
    // 80030F20: bl      0x8001DA4C
    {
            ctx->lr = 0x80030F24u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_80030F24:
    ctx->pc = 0x80030F24u;
    ctx->downcount -= 29;
    // 80030F24: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030F28:
    ctx->pc = 0x80030F28u;
    // 80030F28: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030F2C:
    ctx->pc = 0x80030F2Cu;
    // 80030F2C: lwz     r0, 576(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030F30:
    ctx->pc = 0x80030F30u;
    // 80030F30: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030F34:
    ctx->pc = 0x80030F34u;
    // 80030F34: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030F38:
    ctx->pc = 0x80030F38u;
    // 80030F38: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030F3C:
    ctx->pc = 0x80030F3Cu;
    // 80030F3C: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030F40:
    ctx->pc = 0x80030F40u;
    // 80030F40: lwz     r0, 596(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(596);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030F44:
    ctx->pc = 0x80030F44u;
    // 80030F44: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030F48:
    ctx->pc = 0x80030F48u;
    // 80030F48: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030F4C:
    ctx->pc = 0x80030F4Cu;
    // 80030F4C: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030F50:
    ctx->pc = 0x80030F50u;
    // 80030F50: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030F54:
    ctx->pc = 0x80030F54u;
    // 80030F54: or   r0, r0, r14
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[14];
    }

label_80030F58:
    ctx->pc = 0x80030F58u;
    // 80030F58: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030F5C:
    ctx->pc = 0x80030F5Cu;
    // 80030F5C: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030F60:
    ctx->pc = 0x80030F60u;
    // 80030F60: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030F64:
    ctx->pc = 0x80030F64u;
    // 80030F64: or   r0, r0, r15
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[15];
    }

label_80030F68:
    ctx->pc = 0x80030F68u;
    // 80030F68: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030F6C:
    ctx->pc = 0x80030F6Cu;
    // 80030F6C: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030F70:
    ctx->pc = 0x80030F70u;
    // 80030F70: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_80030F74:
    ctx->pc = 0x80030F74u;
    // 80030F74: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030F78:
    ctx->pc = 0x80030F78u;
    // 80030F78: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030F7C:
    ctx->pc = 0x80030F7Cu;
    // 80030F7C: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030F80:
    ctx->pc = 0x80030F80u;
    // 80030F80: nop
    // nop

label_80030F84:
    ctx->pc = 0x80030F84u;
    // 80030F84: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030F88:
    ctx->pc = 0x80030F88u;
    // 80030F88: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030F8C:
    ctx->pc = 0x80030F8Cu;
    // 80030F8C: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030F90:
    ctx->pc = 0x80030F90u;
    // 80030F90: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030F94:
    ctx->pc = 0x80030F94u;
    // 80030F94: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030F98:
    loop_80030F98(ctx);
    if (ctx->pc == 0x80030FA4u) goto label_80030FA4;
    return;
label_80030F9C:
    // 80030F9C: rlwinm. r0, r0, 0, 22, 22
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

label_80030FA0:
    // 80030FA0: bc    4, 2, 0x80030F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80030F98u;
                return;
            }
            goto label_80030F98;
        }
    }

label_80030FA4:
    ctx->pc = 0x80030FA4u;
    ctx->downcount -= 6;
    // 80030FA4: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80030FA8:
    ctx->pc = 0x80030FA8u;
    // 80030FA8: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_80030FAC:
    ctx->pc = 0x80030FACu;
    // 80030FAC: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80030FB0:
    ctx->pc = 0x80030FB0u;
    // 80030FB0: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80030FB4:
    ctx->pc = 0x80030FB4u;
    // 80030FB4: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030FB8:
    ctx->pc = 0x80030FB8u;
    // 80030FB8: bl      0x8001BFE8
    {
            ctx->lr = 0x80030FBCu;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_80030FBC:
    ctx->pc = 0x80030FBCu;
    ctx->downcount -= 4;
    // 80030FBC: lwz     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80030FC0:
    ctx->pc = 0x80030FC0u;
    // 80030FC0: lwz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030FC4:
    ctx->pc = 0x80030FC4u;
    // 80030FC4: cmplw   r3, r0
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

label_80030FC8:
    ctx->pc = 0x80030FC8u;
    // 80030FC8: bc    4, 2, 0x80031110
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80031110;
        }
    }

label_80030FCC:
    ctx->pc = 0x80030FCCu;
    ctx->downcount -= 29;
    // 80030FCC: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030FD0:
    ctx->pc = 0x80030FD0u;
    // 80030FD0: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030FD4:
    ctx->pc = 0x80030FD4u;
    // 80030FD4: lwz     r0, 572(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(572);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030FD8:
    ctx->pc = 0x80030FD8u;
    // 80030FD8: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030FDC:
    ctx->pc = 0x80030FDCu;
    // 80030FDC: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030FE0:
    ctx->pc = 0x80030FE0u;
    // 80030FE0: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030FE4:
    ctx->pc = 0x80030FE4u;
    // 80030FE4: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80030FE8:
    ctx->pc = 0x80030FE8u;
    // 80030FE8: lwz     r0, 588(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(588);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80030FEC:
    ctx->pc = 0x80030FECu;
    // 80030FEC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80030FF0:
    ctx->pc = 0x80030FF0u;
    // 80030FF0: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80030FF4:
    ctx->pc = 0x80030FF4u;
    // 80030FF4: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80030FF8:
    ctx->pc = 0x80030FF8u;
    // 80030FF8: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80030FFC:
    ctx->pc = 0x80030FFCu;
    // 80030FFC: or   r0, r0, r17
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[17];
    }

label_80031000:
    ctx->pc = 0x80031000u;
    // 80031000: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031004:
    ctx->pc = 0x80031004u;
    // 80031004: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031008:
    ctx->pc = 0x80031008u;
    // 80031008: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_8003100C:
    ctx->pc = 0x8003100Cu;
    // 8003100C: or   r0, r0, r18
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[18];
    }

label_80031010:
    ctx->pc = 0x80031010u;
    // 80031010: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031014:
    ctx->pc = 0x80031014u;
    // 80031014: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031018:
    ctx->pc = 0x80031018u;
    // 80031018: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_8003101C:
    ctx->pc = 0x8003101Cu;
    // 8003101C: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031020:
    ctx->pc = 0x80031020u;
    // 80031020: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031024:
    ctx->pc = 0x80031024u;
    // 80031024: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031028:
    ctx->pc = 0x80031028u;
    // 80031028: nop
    // nop

label_8003102C:
    ctx->pc = 0x8003102Cu;
    // 8003102C: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031030:
    ctx->pc = 0x80031030u;
    // 80031030: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031034:
    ctx->pc = 0x80031034u;
    // 80031034: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031038:
    ctx->pc = 0x80031038u;
    // 80031038: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_8003103C:
    ctx->pc = 0x8003103Cu;
    // 8003103C: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031040:
    loop_80031040(ctx);
    if (ctx->pc == 0x8003104Cu) goto label_8003104C;
    return;
label_80031044:
    // 80031044: rlwinm. r0, r0, 0, 22, 22
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

label_80031048:
    // 80031048: bc    4, 2, 0x80031040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80031040u;
                return;
            }
            goto label_80031040;
        }
    }

label_8003104C:
    ctx->pc = 0x8003104Cu;
    ctx->downcount -= 34;
    // 8003104C: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80031050:
    ctx->pc = 0x80031050u;
    // 80031050: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_80031054:
    ctx->pc = 0x80031054u;
    // 80031054: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80031058:
    ctx->pc = 0x80031058u;
    // 80031058: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_8003105C:
    ctx->pc = 0x8003105Cu;
    // 8003105C: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031060:
    ctx->pc = 0x80031060u;
    // 80031060: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031064:
    ctx->pc = 0x80031064u;
    // 80031064: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031068:
    ctx->pc = 0x80031068u;
    // 80031068: lwz     r0, 564(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003106C:
    ctx->pc = 0x8003106Cu;
    // 8003106C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031070:
    ctx->pc = 0x80031070u;
    // 80031070: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031074:
    ctx->pc = 0x80031074u;
    // 80031074: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031078:
    ctx->pc = 0x80031078u;
    // 80031078: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_8003107C:
    ctx->pc = 0x8003107Cu;
    // 8003107C: lwz     r0, 600(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(600);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031080:
    ctx->pc = 0x80031080u;
    // 80031080: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031084:
    ctx->pc = 0x80031084u;
    // 80031084: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031088:
    ctx->pc = 0x80031088u;
    // 80031088: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003108C:
    ctx->pc = 0x8003108Cu;
    // 8003108C: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031090:
    ctx->pc = 0x80031090u;
    // 80031090: or   r0, r0, r16
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[16];
    }

label_80031094:
    ctx->pc = 0x80031094u;
    // 80031094: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031098:
    ctx->pc = 0x80031098u;
    // 80031098: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003109C:
    ctx->pc = 0x8003109Cu;
    // 8003109C: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800310A0:
    ctx->pc = 0x800310A0u;
    // 800310A0: or   r0, r0, r23
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[23];
    }

label_800310A4:
    ctx->pc = 0x800310A4u;
    // 800310A4: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800310A8:
    ctx->pc = 0x800310A8u;
    // 800310A8: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800310AC:
    ctx->pc = 0x800310ACu;
    // 800310AC: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_800310B0:
    ctx->pc = 0x800310B0u;
    // 800310B0: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800310B4:
    ctx->pc = 0x800310B4u;
    // 800310B4: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800310B8:
    ctx->pc = 0x800310B8u;
    // 800310B8: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800310BC:
    ctx->pc = 0x800310BCu;
    // 800310BC: nop
    // nop

label_800310C0:
    ctx->pc = 0x800310C0u;
    // 800310C0: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800310C4:
    ctx->pc = 0x800310C4u;
    // 800310C4: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800310C8:
    ctx->pc = 0x800310C8u;
    // 800310C8: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800310CC:
    ctx->pc = 0x800310CCu;
    // 800310CC: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_800310D0:
    ctx->pc = 0x800310D0u;
    // 800310D0: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800310D4:
    loop_800310D4(ctx);
    if (ctx->pc == 0x800310E0u) goto label_800310E0;
    return;
label_800310D8:
    // 800310D8: rlwinm. r0, r0, 0, 22, 22
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

label_800310DC:
    // 800310DC: bc    4, 2, 0x800310D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800310D4u;
                return;
            }
            goto label_800310D4;
        }
    }

label_800310E0:
    ctx->pc = 0x800310E0u;
    ctx->downcount -= 12;
    // 800310E0: lhz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_800310E4:
    ctx->pc = 0x800310E4u;
    // 800310E4: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_800310E8:
    ctx->pc = 0x800310E8u;
    // 800310E8: lis     r3, 64
    ctx->gpr[3] = ((u32)(s32)(64) << 16);

label_800310EC:
    ctx->pc = 0x800310ECu;
    // 800310EC: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_800310F0:
    ctx->pc = 0x800310F0u;
    // 800310F0: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_800310F4:
    ctx->pc = 0x800310F4u;
    // 800310F4: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800310F8:
    ctx->pc = 0x800310F8u;
    // 800310F8: addis   r19, r19, 64
    ctx->gpr[19] = ctx->gpr[19] + ((u32)(s32)(64) << 16);

label_800310FC:
    ctx->pc = 0x800310FCu;
    // 800310FC: lhz     r0, 624(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(624);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031100:
    ctx->pc = 0x80031100u;
    // 80031100: stw     r3, -31532(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31532);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80031104:
    ctx->pc = 0x80031104u;
    // 80031104: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_80031108:
    ctx->pc = 0x80031108u;
    // 80031108: sth     r0, 624(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(624);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003110C:
    ctx->pc = 0x8003110Cu;
    // 8003110C: b       0x80031C58
    {
            ctx->pc = 0x80031C58u;
            return;
    }

label_80031110:
    ctx->pc = 0x80031110u;
    ctx->downcount -= 30;
    // 80031110: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031114:
    ctx->pc = 0x80031114u;
    // 80031114: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031118:
    ctx->pc = 0x80031118u;
    // 80031118: lwz     r0, 568(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003111C:
    ctx->pc = 0x8003111Cu;
    // 8003111C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031120:
    ctx->pc = 0x80031120u;
    // 80031120: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031124:
    ctx->pc = 0x80031124u;
    // 80031124: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031128:
    ctx->pc = 0x80031128u;
    // 80031128: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_8003112C:
    ctx->pc = 0x8003112Cu;
    // 8003112C: or   r0, r0, r20
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[20];
    }

label_80031130:
    ctx->pc = 0x80031130u;
    // 80031130: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031134:
    ctx->pc = 0x80031134u;
    // 80031134: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031138:
    ctx->pc = 0x80031138u;
    // 80031138: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_8003113C:
    ctx->pc = 0x8003113Cu;
    // 8003113C: lwz     r0, 560(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031140:
    ctx->pc = 0x80031140u;
    // 80031140: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031144:
    ctx->pc = 0x80031144u;
    // 80031144: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031148:
    ctx->pc = 0x80031148u;
    // 80031148: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003114C:
    ctx->pc = 0x8003114Cu;
    // 8003114C: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031150:
    ctx->pc = 0x80031150u;
    // 80031150: lwz     r0, 612(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031154:
    ctx->pc = 0x80031154u;
    // 80031154: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031158:
    ctx->pc = 0x80031158u;
    // 80031158: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003115C:
    ctx->pc = 0x8003115Cu;
    // 8003115C: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031160:
    ctx->pc = 0x80031160u;
    // 80031160: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_80031164:
    ctx->pc = 0x80031164u;
    // 80031164: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031168:
    ctx->pc = 0x80031168u;
    // 80031168: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003116C:
    ctx->pc = 0x8003116Cu;
    // 8003116C: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031170:
    ctx->pc = 0x80031170u;
    // 80031170: nop
    // nop

label_80031174:
    ctx->pc = 0x80031174u;
    // 80031174: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031178:
    ctx->pc = 0x80031178u;
    // 80031178: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003117C:
    ctx->pc = 0x8003117Cu;
    // 8003117C: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031180:
    ctx->pc = 0x80031180u;
    // 80031180: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80031184:
    ctx->pc = 0x80031184u;
    // 80031184: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031188:
    loop_80031188(ctx);
    if (ctx->pc == 0x80031194u) goto label_80031194;
    return;
label_8003118C:
    // 8003118C: rlwinm. r0, r0, 0, 22, 22
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

label_80031190:
    // 80031190: bc    4, 2, 0x80031188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80031188u;
                return;
            }
            goto label_80031188;
        }
    }

label_80031194:
    ctx->pc = 0x80031194u;
    ctx->downcount -= 34;
    // 80031194: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80031198:
    ctx->pc = 0x80031198u;
    // 80031198: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_8003119C:
    ctx->pc = 0x8003119Cu;
    // 8003119C: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_800311A0:
    ctx->pc = 0x800311A0u;
    // 800311A0: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_800311A4:
    ctx->pc = 0x800311A4u;
    // 800311A4: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800311A8:
    ctx->pc = 0x800311A8u;
    // 800311A8: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800311AC:
    ctx->pc = 0x800311ACu;
    // 800311AC: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800311B0:
    ctx->pc = 0x800311B0u;
    // 800311B0: lwz     r0, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800311B4:
    ctx->pc = 0x800311B4u;
    // 800311B4: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800311B8:
    ctx->pc = 0x800311B8u;
    // 800311B8: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800311BC:
    ctx->pc = 0x800311BCu;
    // 800311BC: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800311C0:
    ctx->pc = 0x800311C0u;
    // 800311C0: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800311C4:
    ctx->pc = 0x800311C4u;
    // 800311C4: lwz     r0, 592(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(592);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800311C8:
    ctx->pc = 0x800311C8u;
    // 800311C8: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800311CC:
    ctx->pc = 0x800311CCu;
    // 800311CC: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800311D0:
    ctx->pc = 0x800311D0u;
    // 800311D0: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800311D4:
    ctx->pc = 0x800311D4u;
    // 800311D4: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800311D8:
    ctx->pc = 0x800311D8u;
    // 800311D8: or   r0, r0, r17
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[17];
    }

label_800311DC:
    ctx->pc = 0x800311DCu;
    // 800311DC: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800311E0:
    ctx->pc = 0x800311E0u;
    // 800311E0: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800311E4:
    ctx->pc = 0x800311E4u;
    // 800311E4: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800311E8:
    ctx->pc = 0x800311E8u;
    // 800311E8: or   r0, r0, r18
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[18];
    }

label_800311EC:
    ctx->pc = 0x800311ECu;
    // 800311EC: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800311F0:
    ctx->pc = 0x800311F0u;
    // 800311F0: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800311F4:
    ctx->pc = 0x800311F4u;
    // 800311F4: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_800311F8:
    ctx->pc = 0x800311F8u;
    // 800311F8: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800311FC:
    ctx->pc = 0x800311FCu;
    // 800311FC: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031200:
    ctx->pc = 0x80031200u;
    // 80031200: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031204:
    ctx->pc = 0x80031204u;
    // 80031204: nop
    // nop

label_80031208:
    ctx->pc = 0x80031208u;
    // 80031208: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003120C:
    ctx->pc = 0x8003120Cu;
    // 8003120C: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031210:
    ctx->pc = 0x80031210u;
    // 80031210: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031214:
    ctx->pc = 0x80031214u;
    // 80031214: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80031218:
    ctx->pc = 0x80031218u;
    // 80031218: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003121C:
    loop_8003121C(ctx);
    if (ctx->pc == 0x80031228u) goto label_80031228;
    return;
label_80031220:
    // 80031220: rlwinm. r0, r0, 0, 22, 22
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

label_80031224:
    // 80031224: bc    4, 2, 0x8003121C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003121Cu;
                return;
            }
            goto label_8003121C;
        }
    }

label_80031228:
    ctx->pc = 0x80031228u;
    ctx->downcount -= 9;
    // 80031228: lhz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003122C:
    ctx->pc = 0x8003122Cu;
    // 8003122C: li      r4, -137
    ctx->gpr[4] = (u32)(s32)(-137);

label_80031230:
    ctx->pc = 0x80031230u;
    // 80031230: addi    r3, r24, 0
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(0);

label_80031234:
    ctx->pc = 0x80031234u;
    // 80031234: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_80031238:
    ctx->pc = 0x80031238u;
    // 80031238: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_8003123C:
    ctx->pc = 0x8003123Cu;
    // 8003123C: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031240:
    ctx->pc = 0x80031240u;
    // 80031240: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80031244:
    ctx->pc = 0x80031244u;
    // 80031244: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80031248:
    ctx->pc = 0x80031248u;
    // 80031248: bl      0x800050B4
    {
            ctx->lr = 0x8003124Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_8003124C:
    ctx->pc = 0x8003124Cu;
    ctx->downcount -= 3;
    // 8003124C: addi    r3, r24, 0
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(0);

label_80031250:
    ctx->pc = 0x80031250u;
    // 80031250: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80031254:
    ctx->pc = 0x80031254u;
    // 80031254: bl      0x8001DA4C
    {
            ctx->lr = 0x80031258u;
            ctx->pc = 0x8001DA4Cu;
            return;
    }

label_80031258:
    ctx->pc = 0x80031258u;
    ctx->downcount -= 31;
    // 80031258: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003125C:
    ctx->pc = 0x8003125Cu;
    // 8003125C: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031260:
    ctx->pc = 0x80031260u;
    // 80031260: lwz     r0, 576(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031264:
    ctx->pc = 0x80031264u;
    // 80031264: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031268:
    ctx->pc = 0x80031268u;
    // 80031268: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003126C:
    ctx->pc = 0x8003126Cu;
    // 8003126C: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031270:
    ctx->pc = 0x80031270u;
    // 80031270: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031274:
    ctx->pc = 0x80031274u;
    // 80031274: lwz     r0, 596(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(596);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031278:
    ctx->pc = 0x80031278u;
    // 80031278: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8003127C:
    ctx->pc = 0x8003127Cu;
    // 8003127C: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031280:
    ctx->pc = 0x80031280u;
    // 80031280: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031284:
    ctx->pc = 0x80031284u;
    // 80031284: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031288:
    ctx->pc = 0x80031288u;
    // 80031288: lwz     r0, 560(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003128C:
    ctx->pc = 0x8003128Cu;
    // 8003128C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031290:
    ctx->pc = 0x80031290u;
    // 80031290: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031294:
    ctx->pc = 0x80031294u;
    // 80031294: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031298:
    ctx->pc = 0x80031298u;
    // 80031298: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_8003129C:
    ctx->pc = 0x8003129Cu;
    // 8003129C: lwz     r0, 612(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(612);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800312A0:
    ctx->pc = 0x800312A0u;
    // 800312A0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800312A4:
    ctx->pc = 0x800312A4u;
    // 800312A4: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800312A8:
    ctx->pc = 0x800312A8u;
    // 800312A8: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800312AC:
    ctx->pc = 0x800312ACu;
    // 800312AC: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_800312B0:
    ctx->pc = 0x800312B0u;
    // 800312B0: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800312B4:
    ctx->pc = 0x800312B4u;
    // 800312B4: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800312B8:
    ctx->pc = 0x800312B8u;
    // 800312B8: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800312BC:
    ctx->pc = 0x800312BCu;
    // 800312BC: nop
    // nop

label_800312C0:
    ctx->pc = 0x800312C0u;
    // 800312C0: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800312C4:
    ctx->pc = 0x800312C4u;
    // 800312C4: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800312C8:
    ctx->pc = 0x800312C8u;
    // 800312C8: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800312CC:
    ctx->pc = 0x800312CCu;
    // 800312CC: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_800312D0:
    ctx->pc = 0x800312D0u;
    // 800312D0: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800312D4:
    loop_800312D4(ctx);
    if (ctx->pc == 0x800312E0u) goto label_800312E0;
    return;
label_800312D8:
    // 800312D8: rlwinm. r0, r0, 0, 22, 22
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

label_800312DC:
    // 800312DC: bc    4, 2, 0x800312D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800312D4u;
                return;
            }
            goto label_800312D4;
        }
    }

label_800312E0:
    ctx->pc = 0x800312E0u;
    ctx->downcount -= 6;
    // 800312E0: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_800312E4:
    ctx->pc = 0x800312E4u;
    // 800312E4: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_800312E8:
    ctx->pc = 0x800312E8u;
    // 800312E8: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_800312EC:
    ctx->pc = 0x800312ECu;
    // 800312EC: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_800312F0:
    ctx->pc = 0x800312F0u;
    // 800312F0: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800312F4:
    ctx->pc = 0x800312F4u;
    // 800312F4: bl      0x8001BFE8
    {
            ctx->lr = 0x800312F8u;
            ctx->pc = 0x8001BFE8u;
            return;
    }

label_800312F8:
    ctx->pc = 0x800312F8u;
    ctx->downcount -= 4;
    // 800312F8: lwz     r3, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800312FC:
    ctx->pc = 0x800312FCu;
    // 800312FC: lwz     r0, 0(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031300:
    ctx->pc = 0x80031300u;
    // 80031300: cmplw   r3, r0
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

label_80031304:
    ctx->pc = 0x80031304u;
    // 80031304: bc    4, 2, 0x800314E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800314E0;
        }
    }

label_80031308:
    ctx->pc = 0x80031308u;
    ctx->downcount -= 29;
    // 80031308: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003130C:
    ctx->pc = 0x8003130Cu;
    // 8003130C: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031310:
    ctx->pc = 0x80031310u;
    // 80031310: lwz     r0, 572(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(572);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031314:
    ctx->pc = 0x80031314u;
    // 80031314: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031318:
    ctx->pc = 0x80031318u;
    // 80031318: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003131C:
    ctx->pc = 0x8003131Cu;
    // 8003131C: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031320:
    ctx->pc = 0x80031320u;
    // 80031320: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031324:
    ctx->pc = 0x80031324u;
    // 80031324: lwz     r0, 588(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(588);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031328:
    ctx->pc = 0x80031328u;
    // 80031328: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8003132C:
    ctx->pc = 0x8003132Cu;
    // 8003132C: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031330:
    ctx->pc = 0x80031330u;
    // 80031330: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031334:
    ctx->pc = 0x80031334u;
    // 80031334: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031338:
    ctx->pc = 0x80031338u;
    // 80031338: or   r0, r0, r17
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[17];
    }

label_8003133C:
    ctx->pc = 0x8003133Cu;
    // 8003133C: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031340:
    ctx->pc = 0x80031340u;
    // 80031340: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031344:
    ctx->pc = 0x80031344u;
    // 80031344: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031348:
    ctx->pc = 0x80031348u;
    // 80031348: or   r0, r0, r18
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[18];
    }

label_8003134C:
    ctx->pc = 0x8003134Cu;
    // 8003134C: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031350:
    ctx->pc = 0x80031350u;
    // 80031350: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031354:
    ctx->pc = 0x80031354u;
    // 80031354: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_80031358:
    ctx->pc = 0x80031358u;
    // 80031358: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003135C:
    ctx->pc = 0x8003135Cu;
    // 8003135C: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031360:
    ctx->pc = 0x80031360u;
    // 80031360: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031364:
    ctx->pc = 0x80031364u;
    // 80031364: nop
    // nop

label_80031368:
    ctx->pc = 0x80031368u;
    // 80031368: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003136C:
    ctx->pc = 0x8003136Cu;
    // 8003136C: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031370:
    ctx->pc = 0x80031370u;
    // 80031370: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031374:
    ctx->pc = 0x80031374u;
    // 80031374: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80031378:
    ctx->pc = 0x80031378u;
    // 80031378: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003137C:
    loop_8003137C(ctx);
    if (ctx->pc == 0x80031388u) goto label_80031388;
    return;
label_80031380:
    // 80031380: rlwinm. r0, r0, 0, 22, 22
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

label_80031384:
    // 80031384: bc    4, 2, 0x8003137C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8003137Cu;
                return;
            }
            goto label_8003137C;
        }
    }

label_80031388:
    ctx->pc = 0x80031388u;
    ctx->downcount -= 34;
    // 80031388: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_8003138C:
    ctx->pc = 0x8003138Cu;
    // 8003138C: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_80031390:
    ctx->pc = 0x80031390u;
    // 80031390: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80031394:
    ctx->pc = 0x80031394u;
    // 80031394: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80031398:
    ctx->pc = 0x80031398u;
    // 80031398: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003139C:
    ctx->pc = 0x8003139Cu;
    // 8003139C: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800313A0:
    ctx->pc = 0x800313A0u;
    // 800313A0: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800313A4:
    ctx->pc = 0x800313A4u;
    // 800313A4: lwz     r0, 564(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(564);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800313A8:
    ctx->pc = 0x800313A8u;
    // 800313A8: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800313AC:
    ctx->pc = 0x800313ACu;
    // 800313AC: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800313B0:
    ctx->pc = 0x800313B0u;
    // 800313B0: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800313B4:
    ctx->pc = 0x800313B4u;
    // 800313B4: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800313B8:
    ctx->pc = 0x800313B8u;
    // 800313B8: lwz     r0, 600(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(600);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800313BC:
    ctx->pc = 0x800313BCu;
    // 800313BC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800313C0:
    ctx->pc = 0x800313C0u;
    // 800313C0: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800313C4:
    ctx->pc = 0x800313C4u;
    // 800313C4: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800313C8:
    ctx->pc = 0x800313C8u;
    // 800313C8: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800313CC:
    ctx->pc = 0x800313CCu;
    // 800313CC: or   r0, r0, r16
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[16];
    }

label_800313D0:
    ctx->pc = 0x800313D0u;
    // 800313D0: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800313D4:
    ctx->pc = 0x800313D4u;
    // 800313D4: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800313D8:
    ctx->pc = 0x800313D8u;
    // 800313D8: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800313DC:
    ctx->pc = 0x800313DCu;
    // 800313DC: or   r0, r0, r23
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[23];
    }

label_800313E0:
    ctx->pc = 0x800313E0u;
    // 800313E0: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800313E4:
    ctx->pc = 0x800313E4u;
    // 800313E4: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800313E8:
    ctx->pc = 0x800313E8u;
    // 800313E8: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_800313EC:
    ctx->pc = 0x800313ECu;
    // 800313EC: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800313F0:
    ctx->pc = 0x800313F0u;
    // 800313F0: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800313F4:
    ctx->pc = 0x800313F4u;
    // 800313F4: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800313F8:
    ctx->pc = 0x800313F8u;
    // 800313F8: nop
    // nop

label_800313FC:
    ctx->pc = 0x800313FCu;
    // 800313FC: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031400:
    ctx->pc = 0x80031400u;
    // 80031400: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031404:
    ctx->pc = 0x80031404u;
    // 80031404: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031408:
    ctx->pc = 0x80031408u;
    // 80031408: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_8003140C:
    ctx->pc = 0x8003140Cu;
    // 8003140C: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031410:
    loop_80031410(ctx);
    if (ctx->pc == 0x8003141Cu) goto label_8003141C;
    return;
label_80031414:
    // 80031414: rlwinm. r0, r0, 0, 22, 22
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

label_80031418:
    // 80031418: bc    4, 2, 0x80031410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80031410u;
                return;
            }
            goto label_80031410;
        }
    }

label_8003141C:
    ctx->pc = 0x8003141Cu;
    ctx->downcount -= 34;
    // 8003141C: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80031420:
    ctx->pc = 0x80031420u;
    // 80031420: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_80031424:
    ctx->pc = 0x80031424u;
    // 80031424: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80031428:
    ctx->pc = 0x80031428u;
    // 80031428: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_8003142C:
    ctx->pc = 0x8003142Cu;
    // 8003142C: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031430:
    ctx->pc = 0x80031430u;
    // 80031430: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031434:
    ctx->pc = 0x80031434u;
    // 80031434: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031438:
    ctx->pc = 0x80031438u;
    // 80031438: lwz     r0, 556(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(556);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8003143C:
    ctx->pc = 0x8003143Cu;
    // 8003143C: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031440:
    ctx->pc = 0x80031440u;
    // 80031440: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031444:
    ctx->pc = 0x80031444u;
    // 80031444: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031448:
    ctx->pc = 0x80031448u;
    // 80031448: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_8003144C:
    ctx->pc = 0x8003144Cu;
    // 8003144C: lwz     r0, 604(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(604);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031450:
    ctx->pc = 0x80031450u;
    // 80031450: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031454:
    ctx->pc = 0x80031454u;
    // 80031454: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031458:
    ctx->pc = 0x80031458u;
    // 80031458: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003145C:
    ctx->pc = 0x8003145Cu;
    // 8003145C: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031460:
    ctx->pc = 0x80031460u;
    // 80031460: or   r0, r0, r14
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[14];
    }

label_80031464:
    ctx->pc = 0x80031464u;
    // 80031464: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031468:
    ctx->pc = 0x80031468u;
    // 80031468: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003146C:
    ctx->pc = 0x8003146Cu;
    // 8003146C: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031470:
    ctx->pc = 0x80031470u;
    // 80031470: or   r0, r0, r15
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[15];
    }

label_80031474:
    ctx->pc = 0x80031474u;
    // 80031474: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031478:
    ctx->pc = 0x80031478u;
    // 80031478: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003147C:
    ctx->pc = 0x8003147Cu;
    // 8003147C: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_80031480:
    ctx->pc = 0x80031480u;
    // 80031480: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031484:
    ctx->pc = 0x80031484u;
    // 80031484: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031488:
    ctx->pc = 0x80031488u;
    // 80031488: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_8003148C:
    ctx->pc = 0x8003148Cu;
    // 8003148C: nop
    // nop

label_80031490:
    ctx->pc = 0x80031490u;
    // 80031490: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031494:
    ctx->pc = 0x80031494u;
    // 80031494: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031498:
    ctx->pc = 0x80031498u;
    // 80031498: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_8003149C:
    ctx->pc = 0x8003149Cu;
    // 8003149C: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_800314A0:
    ctx->pc = 0x800314A0u;
    // 800314A0: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800314A4:
    loop_800314A4(ctx);
    if (ctx->pc == 0x800314B0u) goto label_800314B0;
    return;
label_800314A8:
    // 800314A8: rlwinm. r0, r0, 0, 22, 22
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

label_800314AC:
    // 800314AC: bc    4, 2, 0x800314A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800314A4u;
                return;
            }
            goto label_800314A4;
        }
    }

label_800314B0:
    ctx->pc = 0x800314B0u;
    ctx->downcount -= 12;
    // 800314B0: lhz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read16(ctx, ea);
    }

label_800314B4:
    ctx->pc = 0x800314B4u;
    // 800314B4: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_800314B8:
    ctx->pc = 0x800314B8u;
    // 800314B8: lis     r3, 128
    ctx->gpr[3] = ((u32)(s32)(128) << 16);

label_800314BC:
    ctx->pc = 0x800314BCu;
    // 800314BC: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_800314C0:
    ctx->pc = 0x800314C0u;
    // 800314C0: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_800314C4:
    ctx->pc = 0x800314C4u;
    // 800314C4: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800314C8:
    ctx->pc = 0x800314C8u;
    // 800314C8: addis   r19, r19, 128
    ctx->gpr[19] = ctx->gpr[19] + ((u32)(s32)(128) << 16);

label_800314CC:
    ctx->pc = 0x800314CCu;
    // 800314CC: lhz     r0, 624(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(624);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800314D0:
    ctx->pc = 0x800314D0u;
    // 800314D0: stw     r3, -31532(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-31532);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_800314D4:
    ctx->pc = 0x800314D4u;
    // 800314D4: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_800314D8:
    ctx->pc = 0x800314D8u;
    // 800314D8: sth     r0, 624(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(624);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800314DC:
    ctx->pc = 0x800314DCu;
    // 800314DC: b       0x80031C58
    {
            ctx->pc = 0x80031C58u;
            return;
    }

label_800314E0:
    ctx->pc = 0x800314E0u;
    ctx->downcount -= 30;
    // 800314E0: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800314E4:
    ctx->pc = 0x800314E4u;
    // 800314E4: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800314E8:
    ctx->pc = 0x800314E8u;
    // 800314E8: lwz     r0, 568(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(568);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800314EC:
    ctx->pc = 0x800314ECu;
    // 800314EC: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800314F0:
    ctx->pc = 0x800314F0u;
    // 800314F0: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800314F4:
    ctx->pc = 0x800314F4u;
    // 800314F4: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800314F8:
    ctx->pc = 0x800314F8u;
    // 800314F8: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800314FC:
    ctx->pc = 0x800314FCu;
    // 800314FC: or   r0, r0, r20
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[20];
    }

label_80031500:
    ctx->pc = 0x80031500u;
    // 80031500: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031504:
    ctx->pc = 0x80031504u;
    // 80031504: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031508:
    ctx->pc = 0x80031508u;
    // 80031508: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_8003150C:
    ctx->pc = 0x8003150Cu;
    // 8003150C: lwz     r0, 552(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(552);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031510:
    ctx->pc = 0x80031510u;
    // 80031510: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031514:
    ctx->pc = 0x80031514u;
    // 80031514: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031518:
    ctx->pc = 0x80031518u;
    // 80031518: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003151C:
    ctx->pc = 0x8003151Cu;
    // 8003151C: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031520:
    ctx->pc = 0x80031520u;
    // 80031520: lwz     r0, 620(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(620);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031524:
    ctx->pc = 0x80031524u;
    // 80031524: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031528:
    ctx->pc = 0x80031528u;
    // 80031528: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003152C:
    ctx->pc = 0x8003152Cu;
    // 8003152C: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031530:
    ctx->pc = 0x80031530u;
    // 80031530: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_80031534:
    ctx->pc = 0x80031534u;
    // 80031534: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031538:
    ctx->pc = 0x80031538u;
    // 80031538: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003153C:
    ctx->pc = 0x8003153Cu;
    // 8003153C: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031540:
    ctx->pc = 0x80031540u;
    // 80031540: nop
    // nop

label_80031544:
    ctx->pc = 0x80031544u;
    // 80031544: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031548:
    ctx->pc = 0x80031548u;
    // 80031548: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003154C:
    ctx->pc = 0x8003154Cu;
    // 8003154C: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031550:
    ctx->pc = 0x80031550u;
    // 80031550: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80031554:
    ctx->pc = 0x80031554u;
    // 80031554: sth     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031558:
    loop_80031558(ctx);
    if (ctx->pc == 0x80031564u) goto label_80031564;
    return;
label_8003155C:
    // 8003155C: rlwinm. r0, r0, 0, 22, 22
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

label_80031560:
    // 80031560: bc    4, 2, 0x80031558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80031558u;
                return;
            }
            goto label_80031558;
        }
    }

label_80031564:
    ctx->pc = 0x80031564u;
    ctx->downcount -= 31;
    // 80031564: lhz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80031568:
    ctx->pc = 0x80031568u;
    // 80031568: li      r0, -137
    ctx->gpr[0] = (u32)(s32)(-137);

label_8003156C:
    ctx->pc = 0x8003156Cu;
    // 8003156C: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_80031570:
    ctx->pc = 0x80031570u;
    // 80031570: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_80031574:
    ctx->pc = 0x80031574u;
    // 80031574: sth     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80031578:
    ctx->pc = 0x80031578u;
    // 80031578: lhz     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_8003157C:
    ctx->pc = 0x8003157Cu;
    // 8003157C: rlwinm r3, r0, 0, 0, 21
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_80031580:
    ctx->pc = 0x80031580u;
    // 80031580: lwz     r0, 580(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(580);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031584:
    ctx->pc = 0x80031584u;
    // 80031584: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_80031588:
    ctx->pc = 0x80031588u;
    // 80031588: sth     r0, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8003158C:
    ctx->pc = 0x8003158Cu;
    // 8003158C: lhz     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80031590:
    ctx->pc = 0x80031590u;
    // 80031590: rlwinm r3, r0, 0, 27, 15
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_80031594:
    ctx->pc = 0x80031594u;
    // 80031594: lwz     r0, 592(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(592);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80031598:
    ctx->pc = 0x80031598u;
    // 80031598: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_8003159C:
    ctx->pc = 0x8003159Cu;
    // 8003159C: sth     r0, 0(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800315A0:
    ctx->pc = 0x800315A0u;
    // 800315A0: lhz     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800315A4:
    ctx->pc = 0x800315A4u;
    // 800315A4: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800315A8:
    ctx->pc = 0x800315A8u;
    // 800315A8: or   r0, r0, r17
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[17];
    }

label_800315AC:
    ctx->pc = 0x800315ACu;
    // 800315AC: sth     r0, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800315B0:
    ctx->pc = 0x800315B0u;
    // 800315B0: lhz     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800315B4:
    ctx->pc = 0x800315B4u;
    // 800315B4: rlwinm r0, r0, 0, 27, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF001Fu;
    }

label_800315B8:
    ctx->pc = 0x800315B8u;
    // 800315B8: or   r0, r0, r18
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[18];
    }

label_800315BC:
    ctx->pc = 0x800315BCu;
    // 800315BC: sth     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800315C0:
    ctx->pc = 0x800315C0u;
    // 800315C0: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800315C4:
    ctx->pc = 0x800315C4u;
    // 800315C4: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_800315C8:
    ctx->pc = 0x800315C8u;
    // 800315C8: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800315CC:
    ctx->pc = 0x800315CCu;
    // 800315CC: lhz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800315D0:
    ctx->pc = 0x800315D0u;
    // 800315D0: rlwinm r0, r0, 0, 0, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFC00u;
    }

label_800315D4:
    ctx->pc = 0x800315D4u;
    // 800315D4: nop
    // nop

label_800315D8:
    ctx->pc = 0x800315D8u;
    // 800315D8: sth     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_800315DC:
    ctx->pc = 0x800315DCu;
    // 800315DC: lhz     r0, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

    ctx->pc = 0x800315E0u;
    return;
return_dispatch_8002D5E0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x8002D628u: goto label_8002D628;
    case 0x8002D67Cu: goto label_8002D67C;
    case 0x8002D780u: goto label_8002D780;
    case 0x8002D79Cu: goto label_8002D79C;
    case 0x8002D8BCu: goto label_8002D8BC;
    case 0x8002D8D4u: goto label_8002D8D4;
    case 0x8002D990u: goto label_8002D990;
    case 0x8002D9A8u: goto label_8002D9A8;
    case 0x8002DA68u: goto label_8002DA68;
    case 0x8002DA80u: goto label_8002DA80;
    case 0x8002DB3Cu: goto label_8002DB3C;
    case 0x8002DB54u: goto label_8002DB54;
    case 0x8002DC14u: goto label_8002DC14;
    case 0x8002DC48u: goto label_8002DC48;
    case 0x8002DC74u: goto label_8002DC74;
    case 0x8002DE84u: goto label_8002DE84;
    case 0x8002DE98u: goto label_8002DE98;
    case 0x8002E0B8u: goto label_8002E0B8;
    case 0x8002E104u: goto label_8002E104;
    case 0x8002E128u: goto label_8002E128;
    case 0x8002E138u: goto label_8002E138;
    case 0x8002E140u: goto label_8002E140;
    case 0x8002E184u: goto label_8002E184;
    case 0x8002E194u: goto label_8002E194;
    case 0x8002E1ECu: goto label_8002E1EC;
    case 0x8002E1F8u: goto label_8002E1F8;
    case 0x8002E204u: goto label_8002E204;
    case 0x8002E250u: goto label_8002E250;
    case 0x8002E258u: goto label_8002E258;
    case 0x8002E2B4u: goto label_8002E2B4;
    case 0x8002E2C4u: goto label_8002E2C4;
    case 0x8002E2CCu: goto label_8002E2CC;
    case 0x8002E324u: goto label_8002E324;
    case 0x8002E334u: goto label_8002E334;
    case 0x8002E3D4u: goto label_8002E3D4;
    case 0x8002E3E4u: goto label_8002E3E4;
    case 0x8002E44Cu: goto label_8002E44C;
    case 0x8002E45Cu: goto label_8002E45C;
    case 0x8002E484u: goto label_8002E484;
    case 0x8002E494u: goto label_8002E494;
    case 0x8002E49Cu: goto label_8002E49C;
    case 0x8002E4D8u: goto label_8002E4D8;
    case 0x8002E4E8u: goto label_8002E4E8;
    case 0x8002E534u: goto label_8002E534;
    case 0x8002E568u: goto label_8002E568;
    case 0x8002E5BCu: goto label_8002E5BC;
    case 0x8002E5F4u: goto label_8002E5F4;
    case 0x8002E648u: goto label_8002E648;
    case 0x8002E658u: goto label_8002E658;
    case 0x8002E734u: goto label_8002E734;
    case 0x8002E73Cu: goto label_8002E73C;
    case 0x8002E748u: goto label_8002E748;
    case 0x8002E794u: goto label_8002E794;
    case 0x8002E79Cu: goto label_8002E79C;
    case 0x8002E7D4u: goto label_8002E7D4;
    case 0x8002E844u: goto label_8002E844;
    case 0x8002E894u: goto label_8002E894;
    case 0x8002E8A4u: goto label_8002E8A4;
    case 0x8002E8ACu: goto label_8002E8AC;
    case 0x8002E8E4u: goto label_8002E8E4;
    case 0x8002E958u: goto label_8002E958;
    case 0x8002E9A8u: goto label_8002E9A8;
    case 0x8002E9B8u: goto label_8002E9B8;
    case 0x8002E9C0u: goto label_8002E9C0;
    case 0x8002EA10u: goto label_8002EA10;
    case 0x8002EA20u: goto label_8002EA20;
    case 0x8002EA38u: goto label_8002EA38;
    case 0x8002EA48u: goto label_8002EA48;
    case 0x8002EA7Cu: goto label_8002EA7C;
    case 0x8002EA9Cu: goto label_8002EA9C;
    case 0x8002EB04u: goto label_8002EB04;
    case 0x8002EB10u: goto label_8002EB10;
    case 0x8002EB18u: goto label_8002EB18;
    case 0x8002EB44u: goto label_8002EB44;
    case 0x8002EB8Cu: goto label_8002EB8C;
    case 0x8002EBA4u: goto label_8002EBA4;
    case 0x8002EBD8u: goto label_8002EBD8;
    case 0x8002EC00u: goto label_8002EC00;
    case 0x8002EC0Cu: goto label_8002EC0C;
    case 0x8002EC2Cu: goto label_8002EC2C;
    case 0x8002EC38u: goto label_8002EC38;
    case 0x8002EC4Cu: goto label_8002EC4C;
    case 0x8002EC70u: goto label_8002EC70;
    case 0x8002EC90u: goto label_8002EC90;
    case 0x8002EC98u: goto label_8002EC98;
    case 0x8002ECA4u: goto label_8002ECA4;
    case 0x8002ECF0u: goto label_8002ECF0;
    case 0x8002ECF8u: goto label_8002ECF8;
    case 0x8002ED10u: goto label_8002ED10;
    case 0x8002ED1Cu: goto label_8002ED1C;
    case 0x8002ED34u: goto label_8002ED34;
    case 0x8002ED54u: goto label_8002ED54;
    case 0x8002ED7Cu: goto label_8002ED7C;
    case 0x8002ED98u: goto label_8002ED98;
    case 0x8002EDBCu: goto label_8002EDBC;
    case 0x8002EDE0u: goto label_8002EDE0;
    case 0x8002EE14u: goto label_8002EE14;
    case 0x8002EE50u: goto label_8002EE50;
    case 0x8002EE70u: goto label_8002EE70;
    case 0x8002EEBCu: goto label_8002EEBC;
    case 0x8002EEC0u: goto label_8002EEC0;
    case 0x8002EEC8u: goto label_8002EEC8;
    case 0x8002F6C4u: goto label_8002F6C4;
    case 0x8002F6FCu: goto label_8002F6FC;
    case 0x8002F724u: goto label_8002F724;
    case 0x8002F780u: goto label_8002F780;
    case 0x8002F788u: goto label_8002F788;
    case 0x8002F794u: goto label_8002F794;
    case 0x8002F79Cu: goto label_8002F79C;
    case 0x8002F7A4u: goto label_8002F7A4;
    case 0x8002F7E4u: goto label_8002F7E4;
    case 0x8002F7F4u: goto label_8002F7F4;
    case 0x8002F828u: goto label_8002F828;
    case 0x8002F86Cu: goto label_8002F86C;
    case 0x8002F8A8u: goto label_8002F8A8;
    case 0x8002F8B0u: goto label_8002F8B0;
    case 0x8002F8ECu: goto label_8002F8EC;
    case 0x8002F93Cu: goto label_8002F93C;
    case 0x8002F98Cu: goto label_8002F98C;
    case 0x8002F998u: goto label_8002F998;
    case 0x8002F9ACu: goto label_8002F9AC;
    case 0x8002F9B4u: goto label_8002F9B4;
    case 0x8002F9C0u: goto label_8002F9C0;
    case 0x8002F9C8u: goto label_8002F9C8;
    case 0x8002F9CCu: goto label_8002F9CC;
    case 0x8002F9D4u: goto label_8002F9D4;
    case 0x8002FA00u: goto label_8002FA00;
    case 0x8002FA08u: goto label_8002FA08;
    case 0x8002FA10u: goto label_8002FA10;
    case 0x8002FA6Cu: goto label_8002FA6C;
    case 0x8002FA90u: goto label_8002FA90;
    case 0x8002FA98u: goto label_8002FA98;
    case 0x8002FAA8u: goto label_8002FAA8;
    case 0x8002FAB4u: goto label_8002FAB4;
    case 0x8002FABCu: goto label_8002FABC;
    case 0x8002FAC0u: goto label_8002FAC0;
    case 0x8002FAC8u: goto label_8002FAC8;
    case 0x8002FB10u: goto label_8002FB10;
    case 0x8002FB18u: goto label_8002FB18;
    case 0x8002FB20u: goto label_8002FB20;
    case 0x8002FB60u: goto label_8002FB60;
    case 0x8002FB7Cu: goto label_8002FB7C;
    case 0x8002FB84u: goto label_8002FB84;
    case 0x8002FB90u: goto label_8002FB90;
    case 0x8002FB98u: goto label_8002FB98;
    case 0x8002FBB0u: goto label_8002FBB0;
    case 0x8002FBB8u: goto label_8002FBB8;
    case 0x8002FBF0u: goto label_8002FBF0;
    case 0x8002FBF8u: goto label_8002FBF8;
    case 0x8002FC00u: goto label_8002FC00;
    case 0x8002FC08u: goto label_8002FC08;
    case 0x8002FCB0u: goto label_8002FCB0;
    case 0x8002FD8Cu: goto label_8002FD8C;
    case 0x8002FD94u: goto label_8002FD94;
    case 0x8002FDB0u: goto label_8002FDB0;
    case 0x8002FDB8u: goto label_8002FDB8;
    case 0x8002FDC8u: goto label_8002FDC8;
    case 0x8002FDD0u: goto label_8002FDD0;
    case 0x8002FE20u: goto label_8002FE20;
    case 0x8002FE28u: goto label_8002FE28;
    case 0x8002FE44u: goto label_8002FE44;
    case 0x8002FE4Cu: goto label_8002FE4C;
    case 0x8002FE54u: goto label_8002FE54;
    case 0x8002FEA4u: goto label_8002FEA4;
    case 0x8002FEACu: goto label_8002FEAC;
    case 0x8002FEDCu: goto label_8002FEDC;
    case 0x8002FEECu: goto label_8002FEEC;
    case 0x8002FEFCu: goto label_8002FEFC;
    case 0x8002FF04u: goto label_8002FF04;
    case 0x8002FF50u: goto label_8002FF50;
    case 0x8002FFF4u: goto label_8002FFF4;
    case 0x80030038u: goto label_80030038;
    case 0x80030120u: goto label_80030120;
    case 0x80030174u: goto label_80030174;
    case 0x8003017Cu: goto label_8003017C;
    case 0x800301ACu: goto label_800301AC;
    case 0x800301BCu: goto label_800301BC;
    case 0x80030204u: goto label_80030204;
    case 0x800302A4u: goto label_800302A4;
    case 0x800302E0u: goto label_800302E0;
    case 0x80030310u: goto label_80030310;
    case 0x80030368u: goto label_80030368;
    case 0x8003036Cu: goto label_8003036C;
    case 0x80030388u: goto label_80030388;
    case 0x80030390u: goto label_80030390;
    case 0x800303C0u: goto label_800303C0;
    case 0x800303D0u: goto label_800303D0;
    case 0x80030430u: goto label_80030430;
    case 0x80030438u: goto label_80030438;
    case 0x8003044Cu: goto label_8003044C;
    case 0x80030454u: goto label_80030454;
    case 0x8003045Cu: goto label_8003045C;
    case 0x800305B0u: goto label_800305B0;
    case 0x800305BCu: goto label_800305BC;
    case 0x800305D0u: goto label_800305D0;
    case 0x8003069Cu: goto label_8003069C;
    case 0x80030750u: goto label_80030750;
    case 0x8003075Cu: goto label_8003075C;
    case 0x80030804u: goto label_80030804;
    case 0x80030820u: goto label_80030820;
    case 0x800308D4u: goto label_800308D4;
    case 0x800308E0u: goto label_800308E0;
    case 0x8003099Cu: goto label_8003099C;
    case 0x800309A8u: goto label_800309A8;
    case 0x80030A74u: goto label_80030A74;
    case 0x80030A80u: goto label_80030A80;
    case 0x80030B4Cu: goto label_80030B4C;
    case 0x80030C8Cu: goto label_80030C8C;
    case 0x80030C98u: goto label_80030C98;
    case 0x80030D30u: goto label_80030D30;
    case 0x80030F18u: goto label_80030F18;
    case 0x80030F24u: goto label_80030F24;
    case 0x80030FBCu: goto label_80030FBC;
    case 0x8003124Cu: goto label_8003124C;
    case 0x80031258u: goto label_80031258;
    case 0x800312F8u: goto label_800312F8;
    default: return;
    }
}

