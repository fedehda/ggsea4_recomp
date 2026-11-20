// DolRecomp output
#include "../generated.h"

static void loop_7F060F24(CPUState* ctx) {
label_7F060F24:
    ctx->downcount -= 7;
    // 7F060F24: add   r5, r23, r3
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 7F060F28: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F060F2C: addis   r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + ((u32)(s32)(1) << 16);

    ctx->pc = 0x7F060F30u;
    // 7F060F30: stw     r7, -20996(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20996);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F060F34u;
    // 7F060F34: stw     r7, -20980(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20980);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F060F38u;
    // 7F060F38: stw     r4, -20964(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20964);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 7F060F3C: bc    16, 0, 0x7F060F24
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F060F24u;
                return;
            }
            goto label_7F060F24;
        }
    }

    ctx->pc = 0x7F060F40u;
}

static void loop_7F0616C8(CPUState* ctx) {
label_7F0616C8:
    ctx->downcount -= 5;
    // 7F0616C8: addis   r3, r4, 1
    ctx->gpr[3] = ctx->gpr[4] + ((u32)(s32)(1) << 16);

    // 7F0616CC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    // 7F0616D0: addi    r3, r3, -29424
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29424);

    ctx->pc = 0x7F0616D4u;
    // 7F0616D4: stwx    r5, r31, r3
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F0616D8: bc    16, 0, 0x7F0616C8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0616C8u;
                return;
            }
            goto label_7F0616C8;
        }
    }

    ctx->pc = 0x7F0616DCu;
}

static void loop_7F0616F4(CPUState* ctx) {
label_7F0616F4:
    ctx->downcount -= 7;
    // 7F0616F4: add   r5, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 7F0616F8: addis   r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + ((u32)(s32)(1) << 16);

    ctx->pc = 0x7F0616FCu;
    // 7F0616FC: stw     r6, -20144(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20144);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    ctx->pc = 0x7F061700u;
    // 7F061700: stwx    r6, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 7F061704: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x7F061708u;
    // 7F061708: stw     r6, -20980(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20980);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 7F06170C: bc    16, 0, 0x7F0616F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0616F4u;
                return;
            }
            goto label_7F0616F4;
        }
    }

    ctx->pc = 0x7F061710u;
}

static void loop_7F061720(CPUState* ctx) {
label_7F061720:
    ctx->downcount -= 7;
    // 7F061720: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 7F061724: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F061728: addis   r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + ((u32)(s32)(1) << 16);

    ctx->pc = 0x7F06172Cu;
    // 7F06172C: stw     r5, -19808(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19808);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F061730u;
    // 7F061730: lwz     r0, -19808(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F061734u;
    // 7F061734: stw     r0, -19520(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19520);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F061738: bc    16, 0, 0x7F061720
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061720u;
                return;
            }
            goto label_7F061720;
        }
    }

    ctx->pc = 0x7F06173Cu;
}

static void loop_7F061A3C(CPUState* ctx) {
label_7F061A3C:
    ctx->downcount -= 11;
    // 7F061A3C: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 7F061A40: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    // 7F061A44: addis   r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + ((u32)(s32)(1) << 16);

    // 7F061A48: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

    ctx->pc = 0x7F061A4Cu;
    // 7F061A4C: lwz     r0, -21732(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21732);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F061A50u;
    // 7F061A50: lwz     r4, -21736(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21736);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 7F061A54: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

    // 7F061A58: rlwimi r0, r4, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 8u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

    ctx->pc = 0x7F061A5Cu;
    // 7F061A5C: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F061A60: addi    r8, r8, 4
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(4);

    // 7F061A64: bc    16, 0, 0x7F061A3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061A3Cu;
                return;
            }
            goto label_7F061A3C;
        }
    }

    ctx->pc = 0x7F061A68u;
}

static void loop_7F061D6C(CPUState* ctx) {
label_7F061D6C:
    ctx->downcount -= 5;
    // 7F061D6C: addis   r4, r3, 1
    ctx->gpr[4] = ctx->gpr[3] + ((u32)(s32)(1) << 16);

    // 7F061D70: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F061D74: addi    r4, r4, -24296
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24296);

    ctx->pc = 0x7F061D78u;
    // 7F061D78: stwx    r5, r31, r4
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F061D7C: bc    16, 0, 0x7F061D6C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061D6Cu;
                return;
            }
            goto label_7F061D6C;
        }
    }

    ctx->pc = 0x7F061D80u;
}

static void loop_7F061F04(CPUState* ctx) {
label_7F061F04:
    ctx->downcount -= 11;
    ctx->pc = 0x7F061F04u;
    // 7F061F04: lhax    r0, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    // 7F061F08: add   r5, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 7F061F0C: addis   r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + ((u32)(s32)(1) << 16);

    // 7F061F10: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

    // 7F061F14: rlwinm r0, r0, 24, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0x000000FFu;
    }

    ctx->pc = 0x7F061F18u;
    // 7F061F18: stw     r0, -20080(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20080);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x7F061F1Cu;
    // 7F061F1C: lhax    r0, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    // 7F061F20: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

    // 7F061F24: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

    ctx->pc = 0x7F061F28u;
    // 7F061F28: stw     r0, -20076(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20076);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F061F2C: bc    16, 0, 0x7F061F04
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061F04u;
                return;
            }
            goto label_7F061F04;
        }
    }

    ctx->pc = 0x7F061F30u;
}

static void loop_7F0626D0(CPUState* ctx) {
label_7F0626D0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0626D0u;
    // 7F0626D0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0626D4u;
    // 7F0626D4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F0626D8u;
    // 7F0626D8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0626DCu;
    // 7F0626DC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F0626E0: bc    16, 0, 0x7F0626D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0626D0u;
                return;
            }
            goto label_7F0626D0;
        }
    }

    ctx->pc = 0x7F0626E4u;
}

static void loop_7F062994(CPUState* ctx) {
label_7F062994:
    ctx->downcount -= 5;
    ctx->pc = 0x7F062994u;
    // 7F062994: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F062998u;
    // 7F062998: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

    ctx->pc = 0x7F06299Cu;
    // 7F06299C: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F0629A0u;
    // 7F0629A0: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

    // 7F0629A4: bc    16, 0, 0x7F062994
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F062994u;
                return;
            }
            goto label_7F062994;
        }
    }

    ctx->pc = 0x7F0629A8u;
}

static void loop_7F062D98(CPUState* ctx) {
label_7F062D98:
    ctx->downcount -= 7;
    // 7F062D98: addi    r7, r6, -10500
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-10500);

    // 7F062D9C: add   r10, r8, r5
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

    ctx->pc = 0x7F062DA0u;
    // 7F062DA0: sth     r7, 4912(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4912);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

    // 7F062DA4: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

    // 7F062DA8: addi    r6, r6, 7000
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7000);

    ctx->pc = 0x7F062DACu;
    // 7F062DAC: sth     r9, 4914(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4914);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

    // 7F062DB0: bc    16, 0, 0x7F062D98
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F062D98u;
                return;
            }
            goto label_7F062D98;
        }
    }

    ctx->pc = 0x7F062DB4u;
}

void func_7F0600EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F0600ECu: goto label_7F0600EC;
    case 0x7F0600F0u: goto label_7F0600F0;
    case 0x7F0600F4u: goto label_7F0600F4;
    case 0x7F0600F8u: goto label_7F0600F8;
    case 0x7F0600FCu: goto label_7F0600FC;
    case 0x7F060100u: goto label_7F060100;
    case 0x7F060104u: goto label_7F060104;
    case 0x7F060108u: goto label_7F060108;
    case 0x7F06010Cu: goto label_7F06010C;
    case 0x7F060110u: goto label_7F060110;
    case 0x7F060114u: goto label_7F060114;
    case 0x7F060118u: goto label_7F060118;
    case 0x7F06011Cu: goto label_7F06011C;
    case 0x7F060120u: goto label_7F060120;
    case 0x7F060124u: goto label_7F060124;
    case 0x7F060128u: goto label_7F060128;
    case 0x7F06012Cu: goto label_7F06012C;
    case 0x7F060130u: goto label_7F060130;
    case 0x7F060134u: goto label_7F060134;
    case 0x7F060138u: goto label_7F060138;
    case 0x7F06013Cu: goto label_7F06013C;
    case 0x7F060140u: goto label_7F060140;
    case 0x7F060144u: goto label_7F060144;
    case 0x7F060148u: goto label_7F060148;
    case 0x7F06014Cu: goto label_7F06014C;
    case 0x7F060150u: goto label_7F060150;
    case 0x7F060154u: goto label_7F060154;
    case 0x7F060158u: goto label_7F060158;
    case 0x7F06015Cu: goto label_7F06015C;
    case 0x7F060160u: goto label_7F060160;
    case 0x7F060164u: goto label_7F060164;
    case 0x7F060168u: goto label_7F060168;
    case 0x7F06016Cu: goto label_7F06016C;
    case 0x7F060170u: goto label_7F060170;
    case 0x7F060174u: goto label_7F060174;
    case 0x7F060178u: goto label_7F060178;
    case 0x7F06017Cu: goto label_7F06017C;
    case 0x7F060180u: goto label_7F060180;
    case 0x7F060184u: goto label_7F060184;
    case 0x7F060188u: goto label_7F060188;
    case 0x7F06018Cu: goto label_7F06018C;
    case 0x7F060190u: goto label_7F060190;
    case 0x7F060194u: goto label_7F060194;
    case 0x7F060198u: goto label_7F060198;
    case 0x7F06019Cu: goto label_7F06019C;
    case 0x7F0601A0u: goto label_7F0601A0;
    case 0x7F0601A4u: goto label_7F0601A4;
    case 0x7F0601A8u: goto label_7F0601A8;
    case 0x7F0601ACu: goto label_7F0601AC;
    case 0x7F0601B0u: goto label_7F0601B0;
    case 0x7F0601B4u: goto label_7F0601B4;
    case 0x7F0601B8u: goto label_7F0601B8;
    case 0x7F0601BCu: goto label_7F0601BC;
    case 0x7F0601C0u: goto label_7F0601C0;
    case 0x7F0601C4u: goto label_7F0601C4;
    case 0x7F0601C8u: goto label_7F0601C8;
    case 0x7F0601CCu: goto label_7F0601CC;
    case 0x7F0601D0u: goto label_7F0601D0;
    case 0x7F0601D4u: goto label_7F0601D4;
    case 0x7F0601D8u: goto label_7F0601D8;
    case 0x7F0601DCu: goto label_7F0601DC;
    case 0x7F0601E0u: goto label_7F0601E0;
    case 0x7F0601E4u: goto label_7F0601E4;
    case 0x7F0601E8u: goto label_7F0601E8;
    case 0x7F0601ECu: goto label_7F0601EC;
    case 0x7F0601F0u: goto label_7F0601F0;
    case 0x7F0601F4u: goto label_7F0601F4;
    case 0x7F0601F8u: goto label_7F0601F8;
    case 0x7F0601FCu: goto label_7F0601FC;
    case 0x7F060200u: goto label_7F060200;
    case 0x7F060204u: goto label_7F060204;
    case 0x7F060208u: goto label_7F060208;
    case 0x7F06020Cu: goto label_7F06020C;
    case 0x7F060210u: goto label_7F060210;
    case 0x7F060214u: goto label_7F060214;
    case 0x7F060218u: goto label_7F060218;
    case 0x7F06021Cu: goto label_7F06021C;
    case 0x7F060220u: goto label_7F060220;
    case 0x7F060224u: goto label_7F060224;
    case 0x7F060228u: goto label_7F060228;
    case 0x7F06022Cu: goto label_7F06022C;
    case 0x7F060230u: goto label_7F060230;
    case 0x7F060234u: goto label_7F060234;
    case 0x7F060238u: goto label_7F060238;
    case 0x7F06023Cu: goto label_7F06023C;
    case 0x7F060240u: goto label_7F060240;
    case 0x7F060244u: goto label_7F060244;
    case 0x7F060248u: goto label_7F060248;
    case 0x7F06024Cu: goto label_7F06024C;
    case 0x7F060250u: goto label_7F060250;
    case 0x7F060254u: goto label_7F060254;
    case 0x7F060258u: goto label_7F060258;
    case 0x7F06025Cu: goto label_7F06025C;
    case 0x7F060260u: goto label_7F060260;
    case 0x7F060264u: goto label_7F060264;
    case 0x7F060268u: goto label_7F060268;
    case 0x7F06026Cu: goto label_7F06026C;
    case 0x7F060270u: goto label_7F060270;
    case 0x7F060274u: goto label_7F060274;
    case 0x7F060278u: goto label_7F060278;
    case 0x7F06027Cu: goto label_7F06027C;
    case 0x7F060280u: goto label_7F060280;
    case 0x7F060284u: goto label_7F060284;
    case 0x7F060288u: goto label_7F060288;
    case 0x7F06028Cu: goto label_7F06028C;
    case 0x7F060290u: goto label_7F060290;
    case 0x7F060294u: goto label_7F060294;
    case 0x7F060298u: goto label_7F060298;
    case 0x7F06029Cu: goto label_7F06029C;
    case 0x7F0602A0u: goto label_7F0602A0;
    case 0x7F0602A4u: goto label_7F0602A4;
    case 0x7F0602A8u: goto label_7F0602A8;
    case 0x7F0602ACu: goto label_7F0602AC;
    case 0x7F0602B0u: goto label_7F0602B0;
    case 0x7F0602B4u: goto label_7F0602B4;
    case 0x7F0602B8u: goto label_7F0602B8;
    case 0x7F0602BCu: goto label_7F0602BC;
    case 0x7F0602C0u: goto label_7F0602C0;
    case 0x7F0602C4u: goto label_7F0602C4;
    case 0x7F0602C8u: goto label_7F0602C8;
    case 0x7F0602CCu: goto label_7F0602CC;
    case 0x7F0602D0u: goto label_7F0602D0;
    case 0x7F0602D4u: goto label_7F0602D4;
    case 0x7F0602D8u: goto label_7F0602D8;
    case 0x7F0602DCu: goto label_7F0602DC;
    case 0x7F0602E0u: goto label_7F0602E0;
    case 0x7F0602E4u: goto label_7F0602E4;
    case 0x7F0602E8u: goto label_7F0602E8;
    case 0x7F0602ECu: goto label_7F0602EC;
    case 0x7F0602F0u: goto label_7F0602F0;
    case 0x7F0602F4u: goto label_7F0602F4;
    case 0x7F0602F8u: goto label_7F0602F8;
    case 0x7F0602FCu: goto label_7F0602FC;
    case 0x7F060300u: goto label_7F060300;
    case 0x7F060304u: goto label_7F060304;
    case 0x7F060308u: goto label_7F060308;
    case 0x7F06030Cu: goto label_7F06030C;
    case 0x7F060310u: goto label_7F060310;
    case 0x7F060314u: goto label_7F060314;
    case 0x7F060318u: goto label_7F060318;
    case 0x7F06031Cu: goto label_7F06031C;
    case 0x7F060320u: goto label_7F060320;
    case 0x7F060324u: goto label_7F060324;
    case 0x7F060328u: goto label_7F060328;
    case 0x7F06032Cu: goto label_7F06032C;
    case 0x7F060330u: goto label_7F060330;
    case 0x7F060334u: goto label_7F060334;
    case 0x7F060338u: goto label_7F060338;
    case 0x7F06033Cu: goto label_7F06033C;
    case 0x7F060340u: goto label_7F060340;
    case 0x7F060344u: goto label_7F060344;
    case 0x7F060348u: goto label_7F060348;
    case 0x7F06034Cu: goto label_7F06034C;
    case 0x7F060350u: goto label_7F060350;
    case 0x7F060354u: goto label_7F060354;
    case 0x7F060358u: goto label_7F060358;
    case 0x7F06035Cu: goto label_7F06035C;
    case 0x7F060360u: goto label_7F060360;
    case 0x7F060364u: goto label_7F060364;
    case 0x7F060368u: goto label_7F060368;
    case 0x7F06036Cu: goto label_7F06036C;
    case 0x7F060370u: goto label_7F060370;
    case 0x7F060374u: goto label_7F060374;
    case 0x7F060378u: goto label_7F060378;
    case 0x7F06037Cu: goto label_7F06037C;
    case 0x7F060380u: goto label_7F060380;
    case 0x7F060384u: goto label_7F060384;
    case 0x7F060388u: goto label_7F060388;
    case 0x7F06038Cu: goto label_7F06038C;
    case 0x7F060390u: goto label_7F060390;
    case 0x7F060394u: goto label_7F060394;
    case 0x7F060398u: goto label_7F060398;
    case 0x7F06039Cu: goto label_7F06039C;
    case 0x7F0603A0u: goto label_7F0603A0;
    case 0x7F0603A4u: goto label_7F0603A4;
    case 0x7F0603A8u: goto label_7F0603A8;
    case 0x7F0603ACu: goto label_7F0603AC;
    case 0x7F0603B0u: goto label_7F0603B0;
    case 0x7F0603B4u: goto label_7F0603B4;
    case 0x7F0603B8u: goto label_7F0603B8;
    case 0x7F0603BCu: goto label_7F0603BC;
    case 0x7F0603C0u: goto label_7F0603C0;
    case 0x7F0603C4u: goto label_7F0603C4;
    case 0x7F0603C8u: goto label_7F0603C8;
    case 0x7F0603CCu: goto label_7F0603CC;
    case 0x7F0603D0u: goto label_7F0603D0;
    case 0x7F0603D4u: goto label_7F0603D4;
    case 0x7F0603D8u: goto label_7F0603D8;
    case 0x7F0603DCu: goto label_7F0603DC;
    case 0x7F0603E0u: goto label_7F0603E0;
    case 0x7F0603E4u: goto label_7F0603E4;
    case 0x7F0603E8u: goto label_7F0603E8;
    case 0x7F0603ECu: goto label_7F0603EC;
    case 0x7F0603F0u: goto label_7F0603F0;
    case 0x7F0603F4u: goto label_7F0603F4;
    case 0x7F0603F8u: goto label_7F0603F8;
    case 0x7F0603FCu: goto label_7F0603FC;
    case 0x7F060400u: goto label_7F060400;
    case 0x7F060404u: goto label_7F060404;
    case 0x7F060408u: goto label_7F060408;
    case 0x7F06040Cu: goto label_7F06040C;
    case 0x7F060410u: goto label_7F060410;
    case 0x7F060414u: goto label_7F060414;
    case 0x7F060418u: goto label_7F060418;
    case 0x7F06041Cu: goto label_7F06041C;
    case 0x7F060420u: goto label_7F060420;
    case 0x7F060424u: goto label_7F060424;
    case 0x7F060428u: goto label_7F060428;
    case 0x7F06042Cu: goto label_7F06042C;
    case 0x7F060430u: goto label_7F060430;
    case 0x7F060434u: goto label_7F060434;
    case 0x7F060438u: goto label_7F060438;
    case 0x7F06043Cu: goto label_7F06043C;
    case 0x7F060440u: goto label_7F060440;
    case 0x7F060444u: goto label_7F060444;
    case 0x7F060448u: goto label_7F060448;
    case 0x7F06044Cu: goto label_7F06044C;
    case 0x7F060450u: goto label_7F060450;
    case 0x7F060454u: goto label_7F060454;
    case 0x7F060458u: goto label_7F060458;
    case 0x7F06045Cu: goto label_7F06045C;
    case 0x7F060460u: goto label_7F060460;
    case 0x7F060464u: goto label_7F060464;
    case 0x7F060468u: goto label_7F060468;
    case 0x7F06046Cu: goto label_7F06046C;
    case 0x7F060470u: goto label_7F060470;
    case 0x7F060474u: goto label_7F060474;
    case 0x7F060478u: goto label_7F060478;
    case 0x7F06047Cu: goto label_7F06047C;
    case 0x7F060480u: goto label_7F060480;
    case 0x7F060484u: goto label_7F060484;
    case 0x7F060488u: goto label_7F060488;
    case 0x7F06048Cu: goto label_7F06048C;
    case 0x7F060490u: goto label_7F060490;
    case 0x7F060494u: goto label_7F060494;
    case 0x7F060498u: goto label_7F060498;
    case 0x7F06049Cu: goto label_7F06049C;
    case 0x7F0604A0u: goto label_7F0604A0;
    case 0x7F0604A4u: goto label_7F0604A4;
    case 0x7F0604A8u: goto label_7F0604A8;
    case 0x7F0604ACu: goto label_7F0604AC;
    case 0x7F0604B0u: goto label_7F0604B0;
    case 0x7F0604B4u: goto label_7F0604B4;
    case 0x7F0604B8u: goto label_7F0604B8;
    case 0x7F0604BCu: goto label_7F0604BC;
    case 0x7F0604C0u: goto label_7F0604C0;
    case 0x7F0604C4u: goto label_7F0604C4;
    case 0x7F0604C8u: goto label_7F0604C8;
    case 0x7F0604CCu: goto label_7F0604CC;
    case 0x7F0604D0u: goto label_7F0604D0;
    case 0x7F0604D4u: goto label_7F0604D4;
    case 0x7F0604D8u: goto label_7F0604D8;
    case 0x7F0604DCu: goto label_7F0604DC;
    case 0x7F0604E0u: goto label_7F0604E0;
    case 0x7F0604E4u: goto label_7F0604E4;
    case 0x7F0604E8u: goto label_7F0604E8;
    case 0x7F0604ECu: goto label_7F0604EC;
    case 0x7F0604F0u: goto label_7F0604F0;
    case 0x7F0604F4u: goto label_7F0604F4;
    case 0x7F0604F8u: goto label_7F0604F8;
    case 0x7F0604FCu: goto label_7F0604FC;
    case 0x7F060500u: goto label_7F060500;
    case 0x7F060504u: goto label_7F060504;
    case 0x7F060508u: goto label_7F060508;
    case 0x7F06050Cu: goto label_7F06050C;
    case 0x7F060510u: goto label_7F060510;
    case 0x7F060514u: goto label_7F060514;
    case 0x7F060518u: goto label_7F060518;
    case 0x7F06051Cu: goto label_7F06051C;
    case 0x7F060520u: goto label_7F060520;
    case 0x7F060524u: goto label_7F060524;
    case 0x7F060528u: goto label_7F060528;
    case 0x7F06052Cu: goto label_7F06052C;
    case 0x7F060530u: goto label_7F060530;
    case 0x7F060534u: goto label_7F060534;
    case 0x7F060538u: goto label_7F060538;
    case 0x7F06053Cu: goto label_7F06053C;
    case 0x7F060540u: goto label_7F060540;
    case 0x7F060544u: goto label_7F060544;
    case 0x7F060548u: goto label_7F060548;
    case 0x7F06054Cu: goto label_7F06054C;
    case 0x7F060550u: goto label_7F060550;
    case 0x7F060554u: goto label_7F060554;
    case 0x7F060558u: goto label_7F060558;
    case 0x7F06055Cu: goto label_7F06055C;
    case 0x7F060560u: goto label_7F060560;
    case 0x7F060564u: goto label_7F060564;
    case 0x7F060568u: goto label_7F060568;
    case 0x7F06056Cu: goto label_7F06056C;
    case 0x7F060570u: goto label_7F060570;
    case 0x7F060574u: goto label_7F060574;
    case 0x7F060578u: goto label_7F060578;
    case 0x7F06057Cu: goto label_7F06057C;
    case 0x7F060580u: goto label_7F060580;
    case 0x7F060584u: goto label_7F060584;
    case 0x7F060588u: goto label_7F060588;
    case 0x7F06058Cu: goto label_7F06058C;
    case 0x7F060590u: goto label_7F060590;
    case 0x7F060594u: goto label_7F060594;
    case 0x7F060598u: goto label_7F060598;
    case 0x7F06059Cu: goto label_7F06059C;
    case 0x7F0605A0u: goto label_7F0605A0;
    case 0x7F0605A4u: goto label_7F0605A4;
    case 0x7F0605A8u: goto label_7F0605A8;
    case 0x7F0605ACu: goto label_7F0605AC;
    case 0x7F0605B0u: goto label_7F0605B0;
    case 0x7F0605B4u: goto label_7F0605B4;
    case 0x7F0605B8u: goto label_7F0605B8;
    case 0x7F0605BCu: goto label_7F0605BC;
    case 0x7F0605C0u: goto label_7F0605C0;
    case 0x7F0605C4u: goto label_7F0605C4;
    case 0x7F0605C8u: goto label_7F0605C8;
    case 0x7F0605CCu: goto label_7F0605CC;
    case 0x7F0605D0u: goto label_7F0605D0;
    case 0x7F0605D4u: goto label_7F0605D4;
    case 0x7F0605D8u: goto label_7F0605D8;
    case 0x7F0605DCu: goto label_7F0605DC;
    case 0x7F0605E0u: goto label_7F0605E0;
    case 0x7F0605E4u: goto label_7F0605E4;
    case 0x7F0605E8u: goto label_7F0605E8;
    case 0x7F0605ECu: goto label_7F0605EC;
    case 0x7F0605F0u: goto label_7F0605F0;
    case 0x7F0605F4u: goto label_7F0605F4;
    case 0x7F0605F8u: goto label_7F0605F8;
    case 0x7F0605FCu: goto label_7F0605FC;
    case 0x7F060600u: goto label_7F060600;
    case 0x7F060604u: goto label_7F060604;
    case 0x7F060608u: goto label_7F060608;
    case 0x7F06060Cu: goto label_7F06060C;
    case 0x7F060610u: goto label_7F060610;
    case 0x7F060614u: goto label_7F060614;
    case 0x7F060618u: goto label_7F060618;
    case 0x7F06061Cu: goto label_7F06061C;
    case 0x7F060620u: goto label_7F060620;
    case 0x7F060624u: goto label_7F060624;
    case 0x7F060628u: goto label_7F060628;
    case 0x7F06062Cu: goto label_7F06062C;
    case 0x7F060630u: goto label_7F060630;
    case 0x7F060634u: goto label_7F060634;
    case 0x7F060638u: goto label_7F060638;
    case 0x7F06063Cu: goto label_7F06063C;
    case 0x7F060640u: goto label_7F060640;
    case 0x7F060644u: goto label_7F060644;
    case 0x7F060648u: goto label_7F060648;
    case 0x7F06064Cu: goto label_7F06064C;
    case 0x7F060650u: goto label_7F060650;
    case 0x7F060654u: goto label_7F060654;
    case 0x7F060658u: goto label_7F060658;
    case 0x7F06065Cu: goto label_7F06065C;
    case 0x7F060660u: goto label_7F060660;
    case 0x7F060664u: goto label_7F060664;
    case 0x7F060668u: goto label_7F060668;
    case 0x7F06066Cu: goto label_7F06066C;
    case 0x7F060670u: goto label_7F060670;
    case 0x7F060674u: goto label_7F060674;
    case 0x7F060678u: goto label_7F060678;
    case 0x7F06067Cu: goto label_7F06067C;
    case 0x7F060680u: goto label_7F060680;
    case 0x7F060684u: goto label_7F060684;
    case 0x7F060688u: goto label_7F060688;
    case 0x7F06068Cu: goto label_7F06068C;
    case 0x7F060690u: goto label_7F060690;
    case 0x7F060694u: goto label_7F060694;
    case 0x7F060698u: goto label_7F060698;
    case 0x7F06069Cu: goto label_7F06069C;
    case 0x7F0606A0u: goto label_7F0606A0;
    case 0x7F0606A4u: goto label_7F0606A4;
    case 0x7F0606A8u: goto label_7F0606A8;
    case 0x7F0606ACu: goto label_7F0606AC;
    case 0x7F0606B0u: goto label_7F0606B0;
    case 0x7F0606B4u: goto label_7F0606B4;
    case 0x7F0606B8u: goto label_7F0606B8;
    case 0x7F0606BCu: goto label_7F0606BC;
    case 0x7F0606C0u: goto label_7F0606C0;
    case 0x7F0606C4u: goto label_7F0606C4;
    case 0x7F0606C8u: goto label_7F0606C8;
    case 0x7F0606CCu: goto label_7F0606CC;
    case 0x7F0606D0u: goto label_7F0606D0;
    case 0x7F0606D4u: goto label_7F0606D4;
    case 0x7F0606D8u: goto label_7F0606D8;
    case 0x7F0606DCu: goto label_7F0606DC;
    case 0x7F0606E0u: goto label_7F0606E0;
    case 0x7F0606E4u: goto label_7F0606E4;
    case 0x7F0606E8u: goto label_7F0606E8;
    case 0x7F0606ECu: goto label_7F0606EC;
    case 0x7F0606F0u: goto label_7F0606F0;
    case 0x7F0606F4u: goto label_7F0606F4;
    case 0x7F0606F8u: goto label_7F0606F8;
    case 0x7F0606FCu: goto label_7F0606FC;
    case 0x7F060700u: goto label_7F060700;
    case 0x7F060704u: goto label_7F060704;
    case 0x7F060708u: goto label_7F060708;
    case 0x7F06070Cu: goto label_7F06070C;
    case 0x7F060710u: goto label_7F060710;
    case 0x7F060714u: goto label_7F060714;
    case 0x7F060718u: goto label_7F060718;
    case 0x7F06071Cu: goto label_7F06071C;
    case 0x7F060720u: goto label_7F060720;
    case 0x7F060724u: goto label_7F060724;
    case 0x7F060728u: goto label_7F060728;
    case 0x7F06072Cu: goto label_7F06072C;
    case 0x7F060730u: goto label_7F060730;
    case 0x7F060734u: goto label_7F060734;
    case 0x7F060738u: goto label_7F060738;
    case 0x7F06073Cu: goto label_7F06073C;
    case 0x7F060740u: goto label_7F060740;
    case 0x7F060744u: goto label_7F060744;
    case 0x7F060748u: goto label_7F060748;
    case 0x7F06074Cu: goto label_7F06074C;
    case 0x7F060750u: goto label_7F060750;
    case 0x7F060754u: goto label_7F060754;
    case 0x7F060758u: goto label_7F060758;
    case 0x7F06075Cu: goto label_7F06075C;
    case 0x7F060760u: goto label_7F060760;
    case 0x7F060764u: goto label_7F060764;
    case 0x7F060768u: goto label_7F060768;
    case 0x7F06076Cu: goto label_7F06076C;
    case 0x7F060770u: goto label_7F060770;
    case 0x7F060774u: goto label_7F060774;
    case 0x7F060778u: goto label_7F060778;
    case 0x7F06077Cu: goto label_7F06077C;
    case 0x7F060780u: goto label_7F060780;
    case 0x7F060784u: goto label_7F060784;
    case 0x7F060788u: goto label_7F060788;
    case 0x7F06078Cu: goto label_7F06078C;
    case 0x7F060790u: goto label_7F060790;
    case 0x7F060794u: goto label_7F060794;
    case 0x7F060798u: goto label_7F060798;
    case 0x7F06079Cu: goto label_7F06079C;
    case 0x7F0607A0u: goto label_7F0607A0;
    case 0x7F0607A4u: goto label_7F0607A4;
    case 0x7F0607A8u: goto label_7F0607A8;
    case 0x7F0607ACu: goto label_7F0607AC;
    case 0x7F0607B0u: goto label_7F0607B0;
    case 0x7F0607B4u: goto label_7F0607B4;
    case 0x7F0607B8u: goto label_7F0607B8;
    case 0x7F0607BCu: goto label_7F0607BC;
    case 0x7F0607C0u: goto label_7F0607C0;
    case 0x7F0607C4u: goto label_7F0607C4;
    case 0x7F0607C8u: goto label_7F0607C8;
    case 0x7F0607CCu: goto label_7F0607CC;
    case 0x7F0607D0u: goto label_7F0607D0;
    case 0x7F0607D4u: goto label_7F0607D4;
    case 0x7F0607D8u: goto label_7F0607D8;
    case 0x7F0607DCu: goto label_7F0607DC;
    case 0x7F0607E0u: goto label_7F0607E0;
    case 0x7F0607E4u: goto label_7F0607E4;
    case 0x7F0607E8u: goto label_7F0607E8;
    case 0x7F0607ECu: goto label_7F0607EC;
    case 0x7F0607F0u: goto label_7F0607F0;
    case 0x7F0607F4u: goto label_7F0607F4;
    case 0x7F0607F8u: goto label_7F0607F8;
    case 0x7F0607FCu: goto label_7F0607FC;
    case 0x7F060800u: goto label_7F060800;
    case 0x7F060804u: goto label_7F060804;
    case 0x7F060808u: goto label_7F060808;
    case 0x7F06080Cu: goto label_7F06080C;
    case 0x7F060810u: goto label_7F060810;
    case 0x7F060814u: goto label_7F060814;
    case 0x7F060818u: goto label_7F060818;
    case 0x7F06081Cu: goto label_7F06081C;
    case 0x7F060820u: goto label_7F060820;
    case 0x7F060824u: goto label_7F060824;
    case 0x7F060828u: goto label_7F060828;
    case 0x7F06082Cu: goto label_7F06082C;
    case 0x7F060830u: goto label_7F060830;
    case 0x7F060834u: goto label_7F060834;
    case 0x7F060838u: goto label_7F060838;
    case 0x7F06083Cu: goto label_7F06083C;
    case 0x7F060840u: goto label_7F060840;
    case 0x7F060844u: goto label_7F060844;
    case 0x7F060848u: goto label_7F060848;
    case 0x7F06084Cu: goto label_7F06084C;
    case 0x7F060850u: goto label_7F060850;
    case 0x7F060854u: goto label_7F060854;
    case 0x7F060858u: goto label_7F060858;
    case 0x7F06085Cu: goto label_7F06085C;
    case 0x7F060860u: goto label_7F060860;
    case 0x7F060864u: goto label_7F060864;
    case 0x7F060868u: goto label_7F060868;
    case 0x7F06086Cu: goto label_7F06086C;
    case 0x7F060870u: goto label_7F060870;
    case 0x7F060874u: goto label_7F060874;
    case 0x7F060878u: goto label_7F060878;
    case 0x7F06087Cu: goto label_7F06087C;
    case 0x7F060880u: goto label_7F060880;
    case 0x7F060884u: goto label_7F060884;
    case 0x7F060888u: goto label_7F060888;
    case 0x7F06088Cu: goto label_7F06088C;
    case 0x7F060890u: goto label_7F060890;
    case 0x7F060894u: goto label_7F060894;
    case 0x7F060898u: goto label_7F060898;
    case 0x7F06089Cu: goto label_7F06089C;
    case 0x7F0608A0u: goto label_7F0608A0;
    case 0x7F0608A4u: goto label_7F0608A4;
    case 0x7F0608A8u: goto label_7F0608A8;
    case 0x7F0608ACu: goto label_7F0608AC;
    case 0x7F0608B0u: goto label_7F0608B0;
    case 0x7F0608B4u: goto label_7F0608B4;
    case 0x7F0608B8u: goto label_7F0608B8;
    case 0x7F0608BCu: goto label_7F0608BC;
    case 0x7F0608C0u: goto label_7F0608C0;
    case 0x7F0608C4u: goto label_7F0608C4;
    case 0x7F0608C8u: goto label_7F0608C8;
    case 0x7F0608CCu: goto label_7F0608CC;
    case 0x7F0608D0u: goto label_7F0608D0;
    case 0x7F0608D4u: goto label_7F0608D4;
    case 0x7F0608D8u: goto label_7F0608D8;
    case 0x7F0608DCu: goto label_7F0608DC;
    case 0x7F0608E0u: goto label_7F0608E0;
    case 0x7F0608E4u: goto label_7F0608E4;
    case 0x7F0608E8u: goto label_7F0608E8;
    case 0x7F0608ECu: goto label_7F0608EC;
    case 0x7F0608F0u: goto label_7F0608F0;
    case 0x7F0608F4u: goto label_7F0608F4;
    case 0x7F0608F8u: goto label_7F0608F8;
    case 0x7F0608FCu: goto label_7F0608FC;
    case 0x7F060900u: goto label_7F060900;
    case 0x7F060904u: goto label_7F060904;
    case 0x7F060908u: goto label_7F060908;
    case 0x7F06090Cu: goto label_7F06090C;
    case 0x7F060910u: goto label_7F060910;
    case 0x7F060914u: goto label_7F060914;
    case 0x7F060918u: goto label_7F060918;
    case 0x7F06091Cu: goto label_7F06091C;
    case 0x7F060920u: goto label_7F060920;
    case 0x7F060924u: goto label_7F060924;
    case 0x7F060928u: goto label_7F060928;
    case 0x7F06092Cu: goto label_7F06092C;
    case 0x7F060930u: goto label_7F060930;
    case 0x7F060934u: goto label_7F060934;
    case 0x7F060938u: goto label_7F060938;
    case 0x7F06093Cu: goto label_7F06093C;
    case 0x7F060940u: goto label_7F060940;
    case 0x7F060944u: goto label_7F060944;
    case 0x7F060948u: goto label_7F060948;
    case 0x7F06094Cu: goto label_7F06094C;
    case 0x7F060950u: goto label_7F060950;
    case 0x7F060954u: goto label_7F060954;
    case 0x7F060958u: goto label_7F060958;
    case 0x7F06095Cu: goto label_7F06095C;
    case 0x7F060960u: goto label_7F060960;
    case 0x7F060964u: goto label_7F060964;
    case 0x7F060968u: goto label_7F060968;
    case 0x7F06096Cu: goto label_7F06096C;
    case 0x7F060970u: goto label_7F060970;
    case 0x7F060974u: goto label_7F060974;
    case 0x7F060978u: goto label_7F060978;
    case 0x7F06097Cu: goto label_7F06097C;
    case 0x7F060980u: goto label_7F060980;
    case 0x7F060984u: goto label_7F060984;
    case 0x7F060988u: goto label_7F060988;
    case 0x7F06098Cu: goto label_7F06098C;
    case 0x7F060990u: goto label_7F060990;
    case 0x7F060994u: goto label_7F060994;
    case 0x7F060998u: goto label_7F060998;
    case 0x7F06099Cu: goto label_7F06099C;
    case 0x7F0609A0u: goto label_7F0609A0;
    case 0x7F0609A4u: goto label_7F0609A4;
    case 0x7F0609A8u: goto label_7F0609A8;
    case 0x7F0609ACu: goto label_7F0609AC;
    case 0x7F0609B0u: goto label_7F0609B0;
    case 0x7F0609B4u: goto label_7F0609B4;
    case 0x7F0609B8u: goto label_7F0609B8;
    case 0x7F0609BCu: goto label_7F0609BC;
    case 0x7F0609C0u: goto label_7F0609C0;
    case 0x7F0609C4u: goto label_7F0609C4;
    case 0x7F0609C8u: goto label_7F0609C8;
    case 0x7F0609CCu: goto label_7F0609CC;
    case 0x7F0609D0u: goto label_7F0609D0;
    case 0x7F0609D4u: goto label_7F0609D4;
    case 0x7F0609D8u: goto label_7F0609D8;
    case 0x7F0609DCu: goto label_7F0609DC;
    case 0x7F0609E0u: goto label_7F0609E0;
    case 0x7F0609E4u: goto label_7F0609E4;
    case 0x7F0609E8u: goto label_7F0609E8;
    case 0x7F0609ECu: goto label_7F0609EC;
    case 0x7F0609F0u: goto label_7F0609F0;
    case 0x7F0609F4u: goto label_7F0609F4;
    case 0x7F0609F8u: goto label_7F0609F8;
    case 0x7F0609FCu: goto label_7F0609FC;
    case 0x7F060A00u: goto label_7F060A00;
    case 0x7F060A04u: goto label_7F060A04;
    case 0x7F060A08u: goto label_7F060A08;
    case 0x7F060A0Cu: goto label_7F060A0C;
    case 0x7F060A10u: goto label_7F060A10;
    case 0x7F060A14u: goto label_7F060A14;
    case 0x7F060A18u: goto label_7F060A18;
    case 0x7F060A1Cu: goto label_7F060A1C;
    case 0x7F060A20u: goto label_7F060A20;
    case 0x7F060A24u: goto label_7F060A24;
    case 0x7F060A28u: goto label_7F060A28;
    case 0x7F060A2Cu: goto label_7F060A2C;
    case 0x7F060A30u: goto label_7F060A30;
    case 0x7F060A34u: goto label_7F060A34;
    case 0x7F060A38u: goto label_7F060A38;
    case 0x7F060A3Cu: goto label_7F060A3C;
    case 0x7F060A40u: goto label_7F060A40;
    case 0x7F060A44u: goto label_7F060A44;
    case 0x7F060A48u: goto label_7F060A48;
    case 0x7F060A4Cu: goto label_7F060A4C;
    case 0x7F060A50u: goto label_7F060A50;
    case 0x7F060A54u: goto label_7F060A54;
    case 0x7F060A58u: goto label_7F060A58;
    case 0x7F060A5Cu: goto label_7F060A5C;
    case 0x7F060A60u: goto label_7F060A60;
    case 0x7F060A64u: goto label_7F060A64;
    case 0x7F060A68u: goto label_7F060A68;
    case 0x7F060A6Cu: goto label_7F060A6C;
    case 0x7F060A70u: goto label_7F060A70;
    case 0x7F060A74u: goto label_7F060A74;
    case 0x7F060A78u: goto label_7F060A78;
    case 0x7F060A7Cu: goto label_7F060A7C;
    case 0x7F060A80u: goto label_7F060A80;
    case 0x7F060A84u: goto label_7F060A84;
    case 0x7F060A88u: goto label_7F060A88;
    case 0x7F060A8Cu: goto label_7F060A8C;
    case 0x7F060A90u: goto label_7F060A90;
    case 0x7F060A94u: goto label_7F060A94;
    case 0x7F060A98u: goto label_7F060A98;
    case 0x7F060A9Cu: goto label_7F060A9C;
    case 0x7F060AA0u: goto label_7F060AA0;
    case 0x7F060AA4u: goto label_7F060AA4;
    case 0x7F060AA8u: goto label_7F060AA8;
    case 0x7F060AACu: goto label_7F060AAC;
    case 0x7F060AB0u: goto label_7F060AB0;
    case 0x7F060AB4u: goto label_7F060AB4;
    case 0x7F060AB8u: goto label_7F060AB8;
    case 0x7F060ABCu: goto label_7F060ABC;
    case 0x7F060AC0u: goto label_7F060AC0;
    case 0x7F060AC4u: goto label_7F060AC4;
    case 0x7F060AC8u: goto label_7F060AC8;
    case 0x7F060ACCu: goto label_7F060ACC;
    case 0x7F060AD0u: goto label_7F060AD0;
    case 0x7F060AD4u: goto label_7F060AD4;
    case 0x7F060AD8u: goto label_7F060AD8;
    case 0x7F060ADCu: goto label_7F060ADC;
    case 0x7F060AE0u: goto label_7F060AE0;
    case 0x7F060AE4u: goto label_7F060AE4;
    case 0x7F060AE8u: goto label_7F060AE8;
    case 0x7F060AECu: goto label_7F060AEC;
    case 0x7F060AF0u: goto label_7F060AF0;
    case 0x7F060AF4u: goto label_7F060AF4;
    case 0x7F060AF8u: goto label_7F060AF8;
    case 0x7F060AFCu: goto label_7F060AFC;
    case 0x7F060B00u: goto label_7F060B00;
    case 0x7F060B04u: goto label_7F060B04;
    case 0x7F060B08u: goto label_7F060B08;
    case 0x7F060B0Cu: goto label_7F060B0C;
    case 0x7F060B10u: goto label_7F060B10;
    case 0x7F060B14u: goto label_7F060B14;
    case 0x7F060B18u: goto label_7F060B18;
    case 0x7F060B1Cu: goto label_7F060B1C;
    case 0x7F060B20u: goto label_7F060B20;
    case 0x7F060B24u: goto label_7F060B24;
    case 0x7F060B28u: goto label_7F060B28;
    case 0x7F060B2Cu: goto label_7F060B2C;
    case 0x7F060B30u: goto label_7F060B30;
    case 0x7F060B34u: goto label_7F060B34;
    case 0x7F060B38u: goto label_7F060B38;
    case 0x7F060B3Cu: goto label_7F060B3C;
    case 0x7F060B40u: goto label_7F060B40;
    case 0x7F060B44u: goto label_7F060B44;
    case 0x7F060B48u: goto label_7F060B48;
    case 0x7F060B4Cu: goto label_7F060B4C;
    case 0x7F060B50u: goto label_7F060B50;
    case 0x7F060B54u: goto label_7F060B54;
    case 0x7F060B58u: goto label_7F060B58;
    case 0x7F060B5Cu: goto label_7F060B5C;
    case 0x7F060B60u: goto label_7F060B60;
    case 0x7F060B64u: goto label_7F060B64;
    case 0x7F060B68u: goto label_7F060B68;
    case 0x7F060B6Cu: goto label_7F060B6C;
    case 0x7F060B70u: goto label_7F060B70;
    case 0x7F060B74u: goto label_7F060B74;
    case 0x7F060B78u: goto label_7F060B78;
    case 0x7F060B7Cu: goto label_7F060B7C;
    case 0x7F060B80u: goto label_7F060B80;
    case 0x7F060B84u: goto label_7F060B84;
    case 0x7F060B88u: goto label_7F060B88;
    case 0x7F060B8Cu: goto label_7F060B8C;
    case 0x7F060B90u: goto label_7F060B90;
    case 0x7F060B94u: goto label_7F060B94;
    case 0x7F060B98u: goto label_7F060B98;
    case 0x7F060B9Cu: goto label_7F060B9C;
    case 0x7F060BA0u: goto label_7F060BA0;
    case 0x7F060BA4u: goto label_7F060BA4;
    case 0x7F060BA8u: goto label_7F060BA8;
    case 0x7F060BACu: goto label_7F060BAC;
    case 0x7F060BB0u: goto label_7F060BB0;
    case 0x7F060BB4u: goto label_7F060BB4;
    case 0x7F060BB8u: goto label_7F060BB8;
    case 0x7F060BBCu: goto label_7F060BBC;
    case 0x7F060BC0u: goto label_7F060BC0;
    case 0x7F060BC4u: goto label_7F060BC4;
    case 0x7F060BC8u: goto label_7F060BC8;
    case 0x7F060BCCu: goto label_7F060BCC;
    case 0x7F060BD0u: goto label_7F060BD0;
    case 0x7F060BD4u: goto label_7F060BD4;
    case 0x7F060BD8u: goto label_7F060BD8;
    case 0x7F060BDCu: goto label_7F060BDC;
    case 0x7F060BE0u: goto label_7F060BE0;
    case 0x7F060BE4u: goto label_7F060BE4;
    case 0x7F060BE8u: goto label_7F060BE8;
    case 0x7F060BECu: goto label_7F060BEC;
    case 0x7F060BF0u: goto label_7F060BF0;
    case 0x7F060BF4u: goto label_7F060BF4;
    case 0x7F060BF8u: goto label_7F060BF8;
    case 0x7F060BFCu: goto label_7F060BFC;
    case 0x7F060C00u: goto label_7F060C00;
    case 0x7F060C04u: goto label_7F060C04;
    case 0x7F060C08u: goto label_7F060C08;
    case 0x7F060C0Cu: goto label_7F060C0C;
    case 0x7F060C10u: goto label_7F060C10;
    case 0x7F060C14u: goto label_7F060C14;
    case 0x7F060C18u: goto label_7F060C18;
    case 0x7F060C1Cu: goto label_7F060C1C;
    case 0x7F060C20u: goto label_7F060C20;
    case 0x7F060C24u: goto label_7F060C24;
    case 0x7F060C28u: goto label_7F060C28;
    case 0x7F060C2Cu: goto label_7F060C2C;
    case 0x7F060C30u: goto label_7F060C30;
    case 0x7F060C34u: goto label_7F060C34;
    case 0x7F060C38u: goto label_7F060C38;
    case 0x7F060C3Cu: goto label_7F060C3C;
    case 0x7F060C40u: goto label_7F060C40;
    case 0x7F060C44u: goto label_7F060C44;
    case 0x7F060C48u: goto label_7F060C48;
    case 0x7F060C4Cu: goto label_7F060C4C;
    case 0x7F060C50u: goto label_7F060C50;
    case 0x7F060C54u: goto label_7F060C54;
    case 0x7F060C58u: goto label_7F060C58;
    case 0x7F060C5Cu: goto label_7F060C5C;
    case 0x7F060C60u: goto label_7F060C60;
    case 0x7F060C64u: goto label_7F060C64;
    case 0x7F060C68u: goto label_7F060C68;
    case 0x7F060C6Cu: goto label_7F060C6C;
    case 0x7F060C70u: goto label_7F060C70;
    case 0x7F060C74u: goto label_7F060C74;
    case 0x7F060C78u: goto label_7F060C78;
    case 0x7F060C7Cu: goto label_7F060C7C;
    case 0x7F060C80u: goto label_7F060C80;
    case 0x7F060C84u: goto label_7F060C84;
    case 0x7F060C88u: goto label_7F060C88;
    case 0x7F060C8Cu: goto label_7F060C8C;
    case 0x7F060C90u: goto label_7F060C90;
    case 0x7F060C94u: goto label_7F060C94;
    case 0x7F060C98u: goto label_7F060C98;
    case 0x7F060C9Cu: goto label_7F060C9C;
    case 0x7F060CA0u: goto label_7F060CA0;
    case 0x7F060CA4u: goto label_7F060CA4;
    case 0x7F060CA8u: goto label_7F060CA8;
    case 0x7F060CACu: goto label_7F060CAC;
    case 0x7F060CB0u: goto label_7F060CB0;
    case 0x7F060CB4u: goto label_7F060CB4;
    case 0x7F060CB8u: goto label_7F060CB8;
    case 0x7F060CBCu: goto label_7F060CBC;
    case 0x7F060CC0u: goto label_7F060CC0;
    case 0x7F060CC4u: goto label_7F060CC4;
    case 0x7F060CC8u: goto label_7F060CC8;
    case 0x7F060CCCu: goto label_7F060CCC;
    case 0x7F060CD0u: goto label_7F060CD0;
    case 0x7F060CD4u: goto label_7F060CD4;
    case 0x7F060CD8u: goto label_7F060CD8;
    case 0x7F060CDCu: goto label_7F060CDC;
    case 0x7F060CE0u: goto label_7F060CE0;
    case 0x7F060CE4u: goto label_7F060CE4;
    case 0x7F060CE8u: goto label_7F060CE8;
    case 0x7F060CECu: goto label_7F060CEC;
    case 0x7F060CF0u: goto label_7F060CF0;
    case 0x7F060CF4u: goto label_7F060CF4;
    case 0x7F060CF8u: goto label_7F060CF8;
    case 0x7F060CFCu: goto label_7F060CFC;
    case 0x7F060D00u: goto label_7F060D00;
    case 0x7F060D04u: goto label_7F060D04;
    case 0x7F060D08u: goto label_7F060D08;
    case 0x7F060D0Cu: goto label_7F060D0C;
    case 0x7F060D10u: goto label_7F060D10;
    case 0x7F060D14u: goto label_7F060D14;
    case 0x7F060D18u: goto label_7F060D18;
    case 0x7F060D1Cu: goto label_7F060D1C;
    case 0x7F060D20u: goto label_7F060D20;
    case 0x7F060D24u: goto label_7F060D24;
    case 0x7F060D28u: goto label_7F060D28;
    case 0x7F060D2Cu: goto label_7F060D2C;
    case 0x7F060D30u: goto label_7F060D30;
    case 0x7F060D34u: goto label_7F060D34;
    case 0x7F060D38u: goto label_7F060D38;
    case 0x7F060D3Cu: goto label_7F060D3C;
    case 0x7F060D40u: goto label_7F060D40;
    case 0x7F060D44u: goto label_7F060D44;
    case 0x7F060D48u: goto label_7F060D48;
    case 0x7F060D4Cu: goto label_7F060D4C;
    case 0x7F060D50u: goto label_7F060D50;
    case 0x7F060D54u: goto label_7F060D54;
    case 0x7F060D58u: goto label_7F060D58;
    case 0x7F060D5Cu: goto label_7F060D5C;
    case 0x7F060D60u: goto label_7F060D60;
    case 0x7F060D64u: goto label_7F060D64;
    case 0x7F060D68u: goto label_7F060D68;
    case 0x7F060D6Cu: goto label_7F060D6C;
    case 0x7F060D70u: goto label_7F060D70;
    case 0x7F060D74u: goto label_7F060D74;
    case 0x7F060D78u: goto label_7F060D78;
    case 0x7F060D7Cu: goto label_7F060D7C;
    case 0x7F060D80u: goto label_7F060D80;
    case 0x7F060D84u: goto label_7F060D84;
    case 0x7F060D88u: goto label_7F060D88;
    case 0x7F060D8Cu: goto label_7F060D8C;
    case 0x7F060D90u: goto label_7F060D90;
    case 0x7F060D94u: goto label_7F060D94;
    case 0x7F060D98u: goto label_7F060D98;
    case 0x7F060D9Cu: goto label_7F060D9C;
    case 0x7F060DA0u: goto label_7F060DA0;
    case 0x7F060DA4u: goto label_7F060DA4;
    case 0x7F060DA8u: goto label_7F060DA8;
    case 0x7F060DACu: goto label_7F060DAC;
    case 0x7F060DB0u: goto label_7F060DB0;
    case 0x7F060DB4u: goto label_7F060DB4;
    case 0x7F060DB8u: goto label_7F060DB8;
    case 0x7F060DBCu: goto label_7F060DBC;
    case 0x7F060DC0u: goto label_7F060DC0;
    case 0x7F060DC4u: goto label_7F060DC4;
    case 0x7F060DC8u: goto label_7F060DC8;
    case 0x7F060DCCu: goto label_7F060DCC;
    case 0x7F060DD0u: goto label_7F060DD0;
    case 0x7F060DD4u: goto label_7F060DD4;
    case 0x7F060DD8u: goto label_7F060DD8;
    case 0x7F060DDCu: goto label_7F060DDC;
    case 0x7F060DE0u: goto label_7F060DE0;
    case 0x7F060DE4u: goto label_7F060DE4;
    case 0x7F060DE8u: goto label_7F060DE8;
    case 0x7F060DECu: goto label_7F060DEC;
    case 0x7F060DF0u: goto label_7F060DF0;
    case 0x7F060DF4u: goto label_7F060DF4;
    case 0x7F060DF8u: goto label_7F060DF8;
    case 0x7F060DFCu: goto label_7F060DFC;
    case 0x7F060E00u: goto label_7F060E00;
    case 0x7F060E04u: goto label_7F060E04;
    case 0x7F060E08u: goto label_7F060E08;
    case 0x7F060E0Cu: goto label_7F060E0C;
    case 0x7F060E10u: goto label_7F060E10;
    case 0x7F060E14u: goto label_7F060E14;
    case 0x7F060E18u: goto label_7F060E18;
    case 0x7F060E1Cu: goto label_7F060E1C;
    case 0x7F060E20u: goto label_7F060E20;
    case 0x7F060E24u: goto label_7F060E24;
    case 0x7F060E28u: goto label_7F060E28;
    case 0x7F060E2Cu: goto label_7F060E2C;
    case 0x7F060E30u: goto label_7F060E30;
    case 0x7F060E34u: goto label_7F060E34;
    case 0x7F060E38u: goto label_7F060E38;
    case 0x7F060E3Cu: goto label_7F060E3C;
    case 0x7F060E40u: goto label_7F060E40;
    case 0x7F060E44u: goto label_7F060E44;
    case 0x7F060E48u: goto label_7F060E48;
    case 0x7F060E4Cu: goto label_7F060E4C;
    case 0x7F060E50u: goto label_7F060E50;
    case 0x7F060E54u: goto label_7F060E54;
    case 0x7F060E58u: goto label_7F060E58;
    case 0x7F060E5Cu: goto label_7F060E5C;
    case 0x7F060E60u: goto label_7F060E60;
    case 0x7F060E64u: goto label_7F060E64;
    case 0x7F060E68u: goto label_7F060E68;
    case 0x7F060E6Cu: goto label_7F060E6C;
    case 0x7F060E70u: goto label_7F060E70;
    case 0x7F060E74u: goto label_7F060E74;
    case 0x7F060E78u: goto label_7F060E78;
    case 0x7F060E7Cu: goto label_7F060E7C;
    case 0x7F060E80u: goto label_7F060E80;
    case 0x7F060E84u: goto label_7F060E84;
    case 0x7F060E88u: goto label_7F060E88;
    case 0x7F060E8Cu: goto label_7F060E8C;
    case 0x7F060E90u: goto label_7F060E90;
    case 0x7F060E94u: goto label_7F060E94;
    case 0x7F060E98u: goto label_7F060E98;
    case 0x7F060E9Cu: goto label_7F060E9C;
    case 0x7F060EA0u: goto label_7F060EA0;
    case 0x7F060EA4u: goto label_7F060EA4;
    case 0x7F060EA8u: goto label_7F060EA8;
    case 0x7F060EACu: goto label_7F060EAC;
    case 0x7F060EB0u: goto label_7F060EB0;
    case 0x7F060EB4u: goto label_7F060EB4;
    case 0x7F060EB8u: goto label_7F060EB8;
    case 0x7F060EBCu: goto label_7F060EBC;
    case 0x7F060EC0u: goto label_7F060EC0;
    case 0x7F060EC4u: goto label_7F060EC4;
    case 0x7F060EC8u: goto label_7F060EC8;
    case 0x7F060ECCu: goto label_7F060ECC;
    case 0x7F060ED0u: goto label_7F060ED0;
    case 0x7F060ED4u: goto label_7F060ED4;
    case 0x7F060ED8u: goto label_7F060ED8;
    case 0x7F060EDCu: goto label_7F060EDC;
    case 0x7F060EE0u: goto label_7F060EE0;
    case 0x7F060EE4u: goto label_7F060EE4;
    case 0x7F060EE8u: goto label_7F060EE8;
    case 0x7F060EECu: goto label_7F060EEC;
    case 0x7F060EF0u: goto label_7F060EF0;
    case 0x7F060EF4u: goto label_7F060EF4;
    case 0x7F060EF8u: goto label_7F060EF8;
    case 0x7F060EFCu: goto label_7F060EFC;
    case 0x7F060F00u: goto label_7F060F00;
    case 0x7F060F04u: goto label_7F060F04;
    case 0x7F060F08u: goto label_7F060F08;
    case 0x7F060F0Cu: goto label_7F060F0C;
    case 0x7F060F10u: goto label_7F060F10;
    case 0x7F060F14u: goto label_7F060F14;
    case 0x7F060F18u: goto label_7F060F18;
    case 0x7F060F1Cu: goto label_7F060F1C;
    case 0x7F060F20u: goto label_7F060F20;
    case 0x7F060F24u: goto label_7F060F24;
    case 0x7F060F28u: goto label_7F060F28;
    case 0x7F060F2Cu: goto label_7F060F2C;
    case 0x7F060F30u: goto label_7F060F30;
    case 0x7F060F34u: goto label_7F060F34;
    case 0x7F060F38u: goto label_7F060F38;
    case 0x7F060F3Cu: goto label_7F060F3C;
    case 0x7F060F40u: goto label_7F060F40;
    case 0x7F060F44u: goto label_7F060F44;
    case 0x7F060F48u: goto label_7F060F48;
    case 0x7F060F4Cu: goto label_7F060F4C;
    case 0x7F060F50u: goto label_7F060F50;
    case 0x7F060F54u: goto label_7F060F54;
    case 0x7F060F58u: goto label_7F060F58;
    case 0x7F060F5Cu: goto label_7F060F5C;
    case 0x7F060F60u: goto label_7F060F60;
    case 0x7F060F64u: goto label_7F060F64;
    case 0x7F060F68u: goto label_7F060F68;
    case 0x7F060F6Cu: goto label_7F060F6C;
    case 0x7F060F70u: goto label_7F060F70;
    case 0x7F060F74u: goto label_7F060F74;
    case 0x7F060F78u: goto label_7F060F78;
    case 0x7F060F7Cu: goto label_7F060F7C;
    case 0x7F060F80u: goto label_7F060F80;
    case 0x7F060F84u: goto label_7F060F84;
    case 0x7F060F88u: goto label_7F060F88;
    case 0x7F060F8Cu: goto label_7F060F8C;
    case 0x7F060F90u: goto label_7F060F90;
    case 0x7F060F94u: goto label_7F060F94;
    case 0x7F060F98u: goto label_7F060F98;
    case 0x7F060F9Cu: goto label_7F060F9C;
    case 0x7F060FA0u: goto label_7F060FA0;
    case 0x7F060FA4u: goto label_7F060FA4;
    case 0x7F060FA8u: goto label_7F060FA8;
    case 0x7F060FACu: goto label_7F060FAC;
    case 0x7F060FB0u: goto label_7F060FB0;
    case 0x7F060FB4u: goto label_7F060FB4;
    case 0x7F060FB8u: goto label_7F060FB8;
    case 0x7F060FBCu: goto label_7F060FBC;
    case 0x7F060FC0u: goto label_7F060FC0;
    case 0x7F060FC4u: goto label_7F060FC4;
    case 0x7F060FC8u: goto label_7F060FC8;
    case 0x7F060FCCu: goto label_7F060FCC;
    case 0x7F060FD0u: goto label_7F060FD0;
    case 0x7F060FD4u: goto label_7F060FD4;
    case 0x7F060FD8u: goto label_7F060FD8;
    case 0x7F060FDCu: goto label_7F060FDC;
    case 0x7F060FE0u: goto label_7F060FE0;
    case 0x7F060FE4u: goto label_7F060FE4;
    case 0x7F060FE8u: goto label_7F060FE8;
    case 0x7F060FECu: goto label_7F060FEC;
    case 0x7F060FF0u: goto label_7F060FF0;
    case 0x7F060FF4u: goto label_7F060FF4;
    case 0x7F060FF8u: goto label_7F060FF8;
    case 0x7F060FFCu: goto label_7F060FFC;
    case 0x7F061000u: goto label_7F061000;
    case 0x7F061004u: goto label_7F061004;
    case 0x7F061008u: goto label_7F061008;
    case 0x7F06100Cu: goto label_7F06100C;
    case 0x7F061010u: goto label_7F061010;
    case 0x7F061014u: goto label_7F061014;
    case 0x7F061018u: goto label_7F061018;
    case 0x7F06101Cu: goto label_7F06101C;
    case 0x7F061020u: goto label_7F061020;
    case 0x7F061024u: goto label_7F061024;
    case 0x7F061028u: goto label_7F061028;
    case 0x7F06102Cu: goto label_7F06102C;
    case 0x7F061030u: goto label_7F061030;
    case 0x7F061034u: goto label_7F061034;
    case 0x7F061038u: goto label_7F061038;
    case 0x7F06103Cu: goto label_7F06103C;
    case 0x7F061040u: goto label_7F061040;
    case 0x7F061044u: goto label_7F061044;
    case 0x7F061048u: goto label_7F061048;
    case 0x7F06104Cu: goto label_7F06104C;
    case 0x7F061050u: goto label_7F061050;
    case 0x7F061054u: goto label_7F061054;
    case 0x7F061058u: goto label_7F061058;
    case 0x7F06105Cu: goto label_7F06105C;
    case 0x7F061060u: goto label_7F061060;
    case 0x7F061064u: goto label_7F061064;
    case 0x7F061068u: goto label_7F061068;
    case 0x7F06106Cu: goto label_7F06106C;
    case 0x7F061070u: goto label_7F061070;
    case 0x7F061074u: goto label_7F061074;
    case 0x7F061078u: goto label_7F061078;
    case 0x7F06107Cu: goto label_7F06107C;
    case 0x7F061080u: goto label_7F061080;
    case 0x7F061084u: goto label_7F061084;
    case 0x7F061088u: goto label_7F061088;
    case 0x7F06108Cu: goto label_7F06108C;
    case 0x7F061090u: goto label_7F061090;
    case 0x7F061094u: goto label_7F061094;
    case 0x7F061098u: goto label_7F061098;
    case 0x7F06109Cu: goto label_7F06109C;
    case 0x7F0610A0u: goto label_7F0610A0;
    case 0x7F0610A4u: goto label_7F0610A4;
    case 0x7F0610A8u: goto label_7F0610A8;
    case 0x7F0610ACu: goto label_7F0610AC;
    case 0x7F0610B0u: goto label_7F0610B0;
    case 0x7F0610B4u: goto label_7F0610B4;
    case 0x7F0610B8u: goto label_7F0610B8;
    case 0x7F0610BCu: goto label_7F0610BC;
    case 0x7F0610C0u: goto label_7F0610C0;
    case 0x7F0610C4u: goto label_7F0610C4;
    case 0x7F0610C8u: goto label_7F0610C8;
    case 0x7F0610CCu: goto label_7F0610CC;
    case 0x7F0610D0u: goto label_7F0610D0;
    case 0x7F0610D4u: goto label_7F0610D4;
    case 0x7F0610D8u: goto label_7F0610D8;
    case 0x7F0610DCu: goto label_7F0610DC;
    case 0x7F0610E0u: goto label_7F0610E0;
    case 0x7F0610E4u: goto label_7F0610E4;
    case 0x7F0610E8u: goto label_7F0610E8;
    case 0x7F0610ECu: goto label_7F0610EC;
    case 0x7F0610F0u: goto label_7F0610F0;
    case 0x7F0610F4u: goto label_7F0610F4;
    case 0x7F0610F8u: goto label_7F0610F8;
    case 0x7F0610FCu: goto label_7F0610FC;
    case 0x7F061100u: goto label_7F061100;
    case 0x7F061104u: goto label_7F061104;
    case 0x7F061108u: goto label_7F061108;
    case 0x7F06110Cu: goto label_7F06110C;
    case 0x7F061110u: goto label_7F061110;
    case 0x7F061114u: goto label_7F061114;
    case 0x7F061118u: goto label_7F061118;
    case 0x7F06111Cu: goto label_7F06111C;
    case 0x7F061120u: goto label_7F061120;
    case 0x7F061124u: goto label_7F061124;
    case 0x7F061128u: goto label_7F061128;
    case 0x7F06112Cu: goto label_7F06112C;
    case 0x7F061130u: goto label_7F061130;
    case 0x7F061134u: goto label_7F061134;
    case 0x7F061138u: goto label_7F061138;
    case 0x7F06113Cu: goto label_7F06113C;
    case 0x7F061140u: goto label_7F061140;
    case 0x7F061144u: goto label_7F061144;
    case 0x7F061148u: goto label_7F061148;
    case 0x7F06114Cu: goto label_7F06114C;
    case 0x7F061150u: goto label_7F061150;
    case 0x7F061154u: goto label_7F061154;
    case 0x7F061158u: goto label_7F061158;
    case 0x7F06115Cu: goto label_7F06115C;
    case 0x7F061160u: goto label_7F061160;
    case 0x7F061164u: goto label_7F061164;
    case 0x7F061168u: goto label_7F061168;
    case 0x7F06116Cu: goto label_7F06116C;
    case 0x7F061170u: goto label_7F061170;
    case 0x7F061174u: goto label_7F061174;
    case 0x7F061178u: goto label_7F061178;
    case 0x7F06117Cu: goto label_7F06117C;
    case 0x7F061180u: goto label_7F061180;
    case 0x7F061184u: goto label_7F061184;
    case 0x7F061188u: goto label_7F061188;
    case 0x7F06118Cu: goto label_7F06118C;
    case 0x7F061190u: goto label_7F061190;
    case 0x7F061194u: goto label_7F061194;
    case 0x7F061198u: goto label_7F061198;
    case 0x7F06119Cu: goto label_7F06119C;
    case 0x7F0611A0u: goto label_7F0611A0;
    case 0x7F0611A4u: goto label_7F0611A4;
    case 0x7F0611A8u: goto label_7F0611A8;
    case 0x7F0611ACu: goto label_7F0611AC;
    case 0x7F0611B0u: goto label_7F0611B0;
    case 0x7F0611B4u: goto label_7F0611B4;
    case 0x7F0611B8u: goto label_7F0611B8;
    case 0x7F0611BCu: goto label_7F0611BC;
    case 0x7F0611C0u: goto label_7F0611C0;
    case 0x7F0611C4u: goto label_7F0611C4;
    case 0x7F0611C8u: goto label_7F0611C8;
    case 0x7F0611CCu: goto label_7F0611CC;
    case 0x7F0611D0u: goto label_7F0611D0;
    case 0x7F0611D4u: goto label_7F0611D4;
    case 0x7F0611D8u: goto label_7F0611D8;
    case 0x7F0611DCu: goto label_7F0611DC;
    case 0x7F0611E0u: goto label_7F0611E0;
    case 0x7F0611E4u: goto label_7F0611E4;
    case 0x7F0611E8u: goto label_7F0611E8;
    case 0x7F0611ECu: goto label_7F0611EC;
    case 0x7F0611F0u: goto label_7F0611F0;
    case 0x7F0611F4u: goto label_7F0611F4;
    case 0x7F0611F8u: goto label_7F0611F8;
    case 0x7F0611FCu: goto label_7F0611FC;
    case 0x7F061200u: goto label_7F061200;
    case 0x7F061204u: goto label_7F061204;
    case 0x7F061208u: goto label_7F061208;
    case 0x7F06120Cu: goto label_7F06120C;
    case 0x7F061210u: goto label_7F061210;
    case 0x7F061214u: goto label_7F061214;
    case 0x7F061218u: goto label_7F061218;
    case 0x7F06121Cu: goto label_7F06121C;
    case 0x7F061220u: goto label_7F061220;
    case 0x7F061224u: goto label_7F061224;
    case 0x7F061228u: goto label_7F061228;
    case 0x7F06122Cu: goto label_7F06122C;
    case 0x7F061230u: goto label_7F061230;
    case 0x7F061234u: goto label_7F061234;
    case 0x7F061238u: goto label_7F061238;
    case 0x7F06123Cu: goto label_7F06123C;
    case 0x7F061240u: goto label_7F061240;
    case 0x7F061244u: goto label_7F061244;
    case 0x7F061248u: goto label_7F061248;
    case 0x7F06124Cu: goto label_7F06124C;
    case 0x7F061250u: goto label_7F061250;
    case 0x7F061254u: goto label_7F061254;
    case 0x7F061258u: goto label_7F061258;
    case 0x7F06125Cu: goto label_7F06125C;
    case 0x7F061260u: goto label_7F061260;
    case 0x7F061264u: goto label_7F061264;
    case 0x7F061268u: goto label_7F061268;
    case 0x7F06126Cu: goto label_7F06126C;
    case 0x7F061270u: goto label_7F061270;
    case 0x7F061274u: goto label_7F061274;
    case 0x7F061278u: goto label_7F061278;
    case 0x7F06127Cu: goto label_7F06127C;
    case 0x7F061280u: goto label_7F061280;
    case 0x7F061284u: goto label_7F061284;
    case 0x7F061288u: goto label_7F061288;
    case 0x7F06128Cu: goto label_7F06128C;
    case 0x7F061290u: goto label_7F061290;
    case 0x7F061294u: goto label_7F061294;
    case 0x7F061298u: goto label_7F061298;
    case 0x7F06129Cu: goto label_7F06129C;
    case 0x7F0612A0u: goto label_7F0612A0;
    case 0x7F0612A4u: goto label_7F0612A4;
    case 0x7F0612A8u: goto label_7F0612A8;
    case 0x7F0612ACu: goto label_7F0612AC;
    case 0x7F0612B0u: goto label_7F0612B0;
    case 0x7F0612B4u: goto label_7F0612B4;
    case 0x7F0612B8u: goto label_7F0612B8;
    case 0x7F0612BCu: goto label_7F0612BC;
    case 0x7F0612C0u: goto label_7F0612C0;
    case 0x7F0612C4u: goto label_7F0612C4;
    case 0x7F0612C8u: goto label_7F0612C8;
    case 0x7F0612CCu: goto label_7F0612CC;
    case 0x7F0612D0u: goto label_7F0612D0;
    case 0x7F0612D4u: goto label_7F0612D4;
    case 0x7F0612D8u: goto label_7F0612D8;
    case 0x7F0612DCu: goto label_7F0612DC;
    case 0x7F0612E0u: goto label_7F0612E0;
    case 0x7F0612E4u: goto label_7F0612E4;
    case 0x7F0612E8u: goto label_7F0612E8;
    case 0x7F0612ECu: goto label_7F0612EC;
    case 0x7F0612F0u: goto label_7F0612F0;
    case 0x7F0612F4u: goto label_7F0612F4;
    case 0x7F0612F8u: goto label_7F0612F8;
    case 0x7F0612FCu: goto label_7F0612FC;
    case 0x7F061300u: goto label_7F061300;
    case 0x7F061304u: goto label_7F061304;
    case 0x7F061308u: goto label_7F061308;
    case 0x7F06130Cu: goto label_7F06130C;
    case 0x7F061310u: goto label_7F061310;
    case 0x7F061314u: goto label_7F061314;
    case 0x7F061318u: goto label_7F061318;
    case 0x7F06131Cu: goto label_7F06131C;
    case 0x7F061320u: goto label_7F061320;
    case 0x7F061324u: goto label_7F061324;
    case 0x7F061328u: goto label_7F061328;
    case 0x7F06132Cu: goto label_7F06132C;
    case 0x7F061330u: goto label_7F061330;
    case 0x7F061334u: goto label_7F061334;
    case 0x7F061338u: goto label_7F061338;
    case 0x7F06133Cu: goto label_7F06133C;
    case 0x7F061340u: goto label_7F061340;
    case 0x7F061344u: goto label_7F061344;
    case 0x7F061348u: goto label_7F061348;
    case 0x7F06134Cu: goto label_7F06134C;
    case 0x7F061350u: goto label_7F061350;
    case 0x7F061354u: goto label_7F061354;
    case 0x7F061358u: goto label_7F061358;
    case 0x7F06135Cu: goto label_7F06135C;
    case 0x7F061360u: goto label_7F061360;
    case 0x7F061364u: goto label_7F061364;
    case 0x7F061368u: goto label_7F061368;
    case 0x7F06136Cu: goto label_7F06136C;
    case 0x7F061370u: goto label_7F061370;
    case 0x7F061374u: goto label_7F061374;
    case 0x7F061378u: goto label_7F061378;
    case 0x7F06137Cu: goto label_7F06137C;
    case 0x7F061380u: goto label_7F061380;
    case 0x7F061384u: goto label_7F061384;
    case 0x7F061388u: goto label_7F061388;
    case 0x7F06138Cu: goto label_7F06138C;
    case 0x7F061390u: goto label_7F061390;
    case 0x7F061394u: goto label_7F061394;
    case 0x7F061398u: goto label_7F061398;
    case 0x7F06139Cu: goto label_7F06139C;
    case 0x7F0613A0u: goto label_7F0613A0;
    case 0x7F0613A4u: goto label_7F0613A4;
    case 0x7F0613A8u: goto label_7F0613A8;
    case 0x7F0613ACu: goto label_7F0613AC;
    case 0x7F0613B0u: goto label_7F0613B0;
    case 0x7F0613B4u: goto label_7F0613B4;
    case 0x7F0613B8u: goto label_7F0613B8;
    case 0x7F0613BCu: goto label_7F0613BC;
    case 0x7F0613C0u: goto label_7F0613C0;
    case 0x7F0613C4u: goto label_7F0613C4;
    case 0x7F0613C8u: goto label_7F0613C8;
    case 0x7F0613CCu: goto label_7F0613CC;
    case 0x7F0613D0u: goto label_7F0613D0;
    case 0x7F0613D4u: goto label_7F0613D4;
    case 0x7F0613D8u: goto label_7F0613D8;
    case 0x7F0613DCu: goto label_7F0613DC;
    case 0x7F0613E0u: goto label_7F0613E0;
    case 0x7F0613E4u: goto label_7F0613E4;
    case 0x7F0613E8u: goto label_7F0613E8;
    case 0x7F0613ECu: goto label_7F0613EC;
    case 0x7F0613F0u: goto label_7F0613F0;
    case 0x7F0613F4u: goto label_7F0613F4;
    case 0x7F0613F8u: goto label_7F0613F8;
    case 0x7F0613FCu: goto label_7F0613FC;
    case 0x7F061400u: goto label_7F061400;
    case 0x7F061404u: goto label_7F061404;
    case 0x7F061408u: goto label_7F061408;
    case 0x7F06140Cu: goto label_7F06140C;
    case 0x7F061410u: goto label_7F061410;
    case 0x7F061414u: goto label_7F061414;
    case 0x7F061418u: goto label_7F061418;
    case 0x7F06141Cu: goto label_7F06141C;
    case 0x7F061420u: goto label_7F061420;
    case 0x7F061424u: goto label_7F061424;
    case 0x7F061428u: goto label_7F061428;
    case 0x7F06142Cu: goto label_7F06142C;
    case 0x7F061430u: goto label_7F061430;
    case 0x7F061434u: goto label_7F061434;
    case 0x7F061438u: goto label_7F061438;
    case 0x7F06143Cu: goto label_7F06143C;
    case 0x7F061440u: goto label_7F061440;
    case 0x7F061444u: goto label_7F061444;
    case 0x7F061448u: goto label_7F061448;
    case 0x7F06144Cu: goto label_7F06144C;
    case 0x7F061450u: goto label_7F061450;
    case 0x7F061454u: goto label_7F061454;
    case 0x7F061458u: goto label_7F061458;
    case 0x7F06145Cu: goto label_7F06145C;
    case 0x7F061460u: goto label_7F061460;
    case 0x7F061464u: goto label_7F061464;
    case 0x7F061468u: goto label_7F061468;
    case 0x7F06146Cu: goto label_7F06146C;
    case 0x7F061470u: goto label_7F061470;
    case 0x7F061474u: goto label_7F061474;
    case 0x7F061478u: goto label_7F061478;
    case 0x7F06147Cu: goto label_7F06147C;
    case 0x7F061480u: goto label_7F061480;
    case 0x7F061484u: goto label_7F061484;
    case 0x7F061488u: goto label_7F061488;
    case 0x7F06148Cu: goto label_7F06148C;
    case 0x7F061490u: goto label_7F061490;
    case 0x7F061494u: goto label_7F061494;
    case 0x7F061498u: goto label_7F061498;
    case 0x7F06149Cu: goto label_7F06149C;
    case 0x7F0614A0u: goto label_7F0614A0;
    case 0x7F0614A4u: goto label_7F0614A4;
    case 0x7F0614A8u: goto label_7F0614A8;
    case 0x7F0614ACu: goto label_7F0614AC;
    case 0x7F0614B0u: goto label_7F0614B0;
    case 0x7F0614B4u: goto label_7F0614B4;
    case 0x7F0614B8u: goto label_7F0614B8;
    case 0x7F0614BCu: goto label_7F0614BC;
    case 0x7F0614C0u: goto label_7F0614C0;
    case 0x7F0614C4u: goto label_7F0614C4;
    case 0x7F0614C8u: goto label_7F0614C8;
    case 0x7F0614CCu: goto label_7F0614CC;
    case 0x7F0614D0u: goto label_7F0614D0;
    case 0x7F0614D4u: goto label_7F0614D4;
    case 0x7F0614D8u: goto label_7F0614D8;
    case 0x7F0614DCu: goto label_7F0614DC;
    case 0x7F0614E0u: goto label_7F0614E0;
    case 0x7F0614E4u: goto label_7F0614E4;
    case 0x7F0614E8u: goto label_7F0614E8;
    case 0x7F0614ECu: goto label_7F0614EC;
    case 0x7F0614F0u: goto label_7F0614F0;
    case 0x7F0614F4u: goto label_7F0614F4;
    case 0x7F0614F8u: goto label_7F0614F8;
    case 0x7F0614FCu: goto label_7F0614FC;
    case 0x7F061500u: goto label_7F061500;
    case 0x7F061504u: goto label_7F061504;
    case 0x7F061508u: goto label_7F061508;
    case 0x7F06150Cu: goto label_7F06150C;
    case 0x7F061510u: goto label_7F061510;
    case 0x7F061514u: goto label_7F061514;
    case 0x7F061518u: goto label_7F061518;
    case 0x7F06151Cu: goto label_7F06151C;
    case 0x7F061520u: goto label_7F061520;
    case 0x7F061524u: goto label_7F061524;
    case 0x7F061528u: goto label_7F061528;
    case 0x7F06152Cu: goto label_7F06152C;
    case 0x7F061530u: goto label_7F061530;
    case 0x7F061534u: goto label_7F061534;
    case 0x7F061538u: goto label_7F061538;
    case 0x7F06153Cu: goto label_7F06153C;
    case 0x7F061540u: goto label_7F061540;
    case 0x7F061544u: goto label_7F061544;
    case 0x7F061548u: goto label_7F061548;
    case 0x7F06154Cu: goto label_7F06154C;
    case 0x7F061550u: goto label_7F061550;
    case 0x7F061554u: goto label_7F061554;
    case 0x7F061558u: goto label_7F061558;
    case 0x7F06155Cu: goto label_7F06155C;
    case 0x7F061560u: goto label_7F061560;
    case 0x7F061564u: goto label_7F061564;
    case 0x7F061568u: goto label_7F061568;
    case 0x7F06156Cu: goto label_7F06156C;
    case 0x7F061570u: goto label_7F061570;
    case 0x7F061574u: goto label_7F061574;
    case 0x7F061578u: goto label_7F061578;
    case 0x7F06157Cu: goto label_7F06157C;
    case 0x7F061580u: goto label_7F061580;
    case 0x7F061584u: goto label_7F061584;
    case 0x7F061588u: goto label_7F061588;
    case 0x7F06158Cu: goto label_7F06158C;
    case 0x7F061590u: goto label_7F061590;
    case 0x7F061594u: goto label_7F061594;
    case 0x7F061598u: goto label_7F061598;
    case 0x7F06159Cu: goto label_7F06159C;
    case 0x7F0615A0u: goto label_7F0615A0;
    case 0x7F0615A4u: goto label_7F0615A4;
    case 0x7F0615A8u: goto label_7F0615A8;
    case 0x7F0615ACu: goto label_7F0615AC;
    case 0x7F0615B0u: goto label_7F0615B0;
    case 0x7F0615B4u: goto label_7F0615B4;
    case 0x7F0615B8u: goto label_7F0615B8;
    case 0x7F0615BCu: goto label_7F0615BC;
    case 0x7F0615C0u: goto label_7F0615C0;
    case 0x7F0615C4u: goto label_7F0615C4;
    case 0x7F0615C8u: goto label_7F0615C8;
    case 0x7F0615CCu: goto label_7F0615CC;
    case 0x7F0615D0u: goto label_7F0615D0;
    case 0x7F0615D4u: goto label_7F0615D4;
    case 0x7F0615D8u: goto label_7F0615D8;
    case 0x7F0615DCu: goto label_7F0615DC;
    case 0x7F0615E0u: goto label_7F0615E0;
    case 0x7F0615E4u: goto label_7F0615E4;
    case 0x7F0615E8u: goto label_7F0615E8;
    case 0x7F0615ECu: goto label_7F0615EC;
    case 0x7F0615F0u: goto label_7F0615F0;
    case 0x7F0615F4u: goto label_7F0615F4;
    case 0x7F0615F8u: goto label_7F0615F8;
    case 0x7F0615FCu: goto label_7F0615FC;
    case 0x7F061600u: goto label_7F061600;
    case 0x7F061604u: goto label_7F061604;
    case 0x7F061608u: goto label_7F061608;
    case 0x7F06160Cu: goto label_7F06160C;
    case 0x7F061610u: goto label_7F061610;
    case 0x7F061614u: goto label_7F061614;
    case 0x7F061618u: goto label_7F061618;
    case 0x7F06161Cu: goto label_7F06161C;
    case 0x7F061620u: goto label_7F061620;
    case 0x7F061624u: goto label_7F061624;
    case 0x7F061628u: goto label_7F061628;
    case 0x7F06162Cu: goto label_7F06162C;
    case 0x7F061630u: goto label_7F061630;
    case 0x7F061634u: goto label_7F061634;
    case 0x7F061638u: goto label_7F061638;
    case 0x7F06163Cu: goto label_7F06163C;
    case 0x7F061640u: goto label_7F061640;
    case 0x7F061644u: goto label_7F061644;
    case 0x7F061648u: goto label_7F061648;
    case 0x7F06164Cu: goto label_7F06164C;
    case 0x7F061650u: goto label_7F061650;
    case 0x7F061654u: goto label_7F061654;
    case 0x7F061658u: goto label_7F061658;
    case 0x7F06165Cu: goto label_7F06165C;
    case 0x7F061660u: goto label_7F061660;
    case 0x7F061664u: goto label_7F061664;
    case 0x7F061668u: goto label_7F061668;
    case 0x7F06166Cu: goto label_7F06166C;
    case 0x7F061670u: goto label_7F061670;
    case 0x7F061674u: goto label_7F061674;
    case 0x7F061678u: goto label_7F061678;
    case 0x7F06167Cu: goto label_7F06167C;
    case 0x7F061680u: goto label_7F061680;
    case 0x7F061684u: goto label_7F061684;
    case 0x7F061688u: goto label_7F061688;
    case 0x7F06168Cu: goto label_7F06168C;
    case 0x7F061690u: goto label_7F061690;
    case 0x7F061694u: goto label_7F061694;
    case 0x7F061698u: goto label_7F061698;
    case 0x7F06169Cu: goto label_7F06169C;
    case 0x7F0616A0u: goto label_7F0616A0;
    case 0x7F0616A4u: goto label_7F0616A4;
    case 0x7F0616A8u: goto label_7F0616A8;
    case 0x7F0616ACu: goto label_7F0616AC;
    case 0x7F0616B0u: goto label_7F0616B0;
    case 0x7F0616B4u: goto label_7F0616B4;
    case 0x7F0616B8u: goto label_7F0616B8;
    case 0x7F0616BCu: goto label_7F0616BC;
    case 0x7F0616C0u: goto label_7F0616C0;
    case 0x7F0616C4u: goto label_7F0616C4;
    case 0x7F0616C8u: goto label_7F0616C8;
    case 0x7F0616CCu: goto label_7F0616CC;
    case 0x7F0616D0u: goto label_7F0616D0;
    case 0x7F0616D4u: goto label_7F0616D4;
    case 0x7F0616D8u: goto label_7F0616D8;
    case 0x7F0616DCu: goto label_7F0616DC;
    case 0x7F0616E0u: goto label_7F0616E0;
    case 0x7F0616E4u: goto label_7F0616E4;
    case 0x7F0616E8u: goto label_7F0616E8;
    case 0x7F0616ECu: goto label_7F0616EC;
    case 0x7F0616F0u: goto label_7F0616F0;
    case 0x7F0616F4u: goto label_7F0616F4;
    case 0x7F0616F8u: goto label_7F0616F8;
    case 0x7F0616FCu: goto label_7F0616FC;
    case 0x7F061700u: goto label_7F061700;
    case 0x7F061704u: goto label_7F061704;
    case 0x7F061708u: goto label_7F061708;
    case 0x7F06170Cu: goto label_7F06170C;
    case 0x7F061710u: goto label_7F061710;
    case 0x7F061714u: goto label_7F061714;
    case 0x7F061718u: goto label_7F061718;
    case 0x7F06171Cu: goto label_7F06171C;
    case 0x7F061720u: goto label_7F061720;
    case 0x7F061724u: goto label_7F061724;
    case 0x7F061728u: goto label_7F061728;
    case 0x7F06172Cu: goto label_7F06172C;
    case 0x7F061730u: goto label_7F061730;
    case 0x7F061734u: goto label_7F061734;
    case 0x7F061738u: goto label_7F061738;
    case 0x7F06173Cu: goto label_7F06173C;
    case 0x7F061740u: goto label_7F061740;
    case 0x7F061744u: goto label_7F061744;
    case 0x7F061748u: goto label_7F061748;
    case 0x7F06174Cu: goto label_7F06174C;
    case 0x7F061750u: goto label_7F061750;
    case 0x7F061754u: goto label_7F061754;
    case 0x7F061758u: goto label_7F061758;
    case 0x7F06175Cu: goto label_7F06175C;
    case 0x7F061760u: goto label_7F061760;
    case 0x7F061764u: goto label_7F061764;
    case 0x7F061768u: goto label_7F061768;
    case 0x7F06176Cu: goto label_7F06176C;
    case 0x7F061770u: goto label_7F061770;
    case 0x7F061774u: goto label_7F061774;
    case 0x7F061778u: goto label_7F061778;
    case 0x7F06177Cu: goto label_7F06177C;
    case 0x7F061780u: goto label_7F061780;
    case 0x7F061784u: goto label_7F061784;
    case 0x7F061788u: goto label_7F061788;
    case 0x7F06178Cu: goto label_7F06178C;
    case 0x7F061790u: goto label_7F061790;
    case 0x7F061794u: goto label_7F061794;
    case 0x7F061798u: goto label_7F061798;
    case 0x7F06179Cu: goto label_7F06179C;
    case 0x7F0617A0u: goto label_7F0617A0;
    case 0x7F0617A4u: goto label_7F0617A4;
    case 0x7F0617A8u: goto label_7F0617A8;
    case 0x7F0617ACu: goto label_7F0617AC;
    case 0x7F0617B0u: goto label_7F0617B0;
    case 0x7F0617B4u: goto label_7F0617B4;
    case 0x7F0617B8u: goto label_7F0617B8;
    case 0x7F0617BCu: goto label_7F0617BC;
    case 0x7F0617C0u: goto label_7F0617C0;
    case 0x7F0617C4u: goto label_7F0617C4;
    case 0x7F0617C8u: goto label_7F0617C8;
    case 0x7F0617CCu: goto label_7F0617CC;
    case 0x7F0617D0u: goto label_7F0617D0;
    case 0x7F0617D4u: goto label_7F0617D4;
    case 0x7F0617D8u: goto label_7F0617D8;
    case 0x7F0617DCu: goto label_7F0617DC;
    case 0x7F0617E0u: goto label_7F0617E0;
    case 0x7F0617E4u: goto label_7F0617E4;
    case 0x7F0617E8u: goto label_7F0617E8;
    case 0x7F0617ECu: goto label_7F0617EC;
    case 0x7F0617F0u: goto label_7F0617F0;
    case 0x7F0617F4u: goto label_7F0617F4;
    case 0x7F0617F8u: goto label_7F0617F8;
    case 0x7F0617FCu: goto label_7F0617FC;
    case 0x7F061800u: goto label_7F061800;
    case 0x7F061804u: goto label_7F061804;
    case 0x7F061808u: goto label_7F061808;
    case 0x7F06180Cu: goto label_7F06180C;
    case 0x7F061810u: goto label_7F061810;
    case 0x7F061814u: goto label_7F061814;
    case 0x7F061818u: goto label_7F061818;
    case 0x7F06181Cu: goto label_7F06181C;
    case 0x7F061820u: goto label_7F061820;
    case 0x7F061824u: goto label_7F061824;
    case 0x7F061828u: goto label_7F061828;
    case 0x7F06182Cu: goto label_7F06182C;
    case 0x7F061830u: goto label_7F061830;
    case 0x7F061834u: goto label_7F061834;
    case 0x7F061838u: goto label_7F061838;
    case 0x7F06183Cu: goto label_7F06183C;
    case 0x7F061840u: goto label_7F061840;
    case 0x7F061844u: goto label_7F061844;
    case 0x7F061848u: goto label_7F061848;
    case 0x7F06184Cu: goto label_7F06184C;
    case 0x7F061850u: goto label_7F061850;
    case 0x7F061854u: goto label_7F061854;
    case 0x7F061858u: goto label_7F061858;
    case 0x7F06185Cu: goto label_7F06185C;
    case 0x7F061860u: goto label_7F061860;
    case 0x7F061864u: goto label_7F061864;
    case 0x7F061868u: goto label_7F061868;
    case 0x7F06186Cu: goto label_7F06186C;
    case 0x7F061870u: goto label_7F061870;
    case 0x7F061874u: goto label_7F061874;
    case 0x7F061878u: goto label_7F061878;
    case 0x7F06187Cu: goto label_7F06187C;
    case 0x7F061880u: goto label_7F061880;
    case 0x7F061884u: goto label_7F061884;
    case 0x7F061888u: goto label_7F061888;
    case 0x7F06188Cu: goto label_7F06188C;
    case 0x7F061890u: goto label_7F061890;
    case 0x7F061894u: goto label_7F061894;
    case 0x7F061898u: goto label_7F061898;
    case 0x7F06189Cu: goto label_7F06189C;
    case 0x7F0618A0u: goto label_7F0618A0;
    case 0x7F0618A4u: goto label_7F0618A4;
    case 0x7F0618A8u: goto label_7F0618A8;
    case 0x7F0618ACu: goto label_7F0618AC;
    case 0x7F0618B0u: goto label_7F0618B0;
    case 0x7F0618B4u: goto label_7F0618B4;
    case 0x7F0618B8u: goto label_7F0618B8;
    case 0x7F0618BCu: goto label_7F0618BC;
    case 0x7F0618C0u: goto label_7F0618C0;
    case 0x7F0618C4u: goto label_7F0618C4;
    case 0x7F0618C8u: goto label_7F0618C8;
    case 0x7F0618CCu: goto label_7F0618CC;
    case 0x7F0618D0u: goto label_7F0618D0;
    case 0x7F0618D4u: goto label_7F0618D4;
    case 0x7F0618D8u: goto label_7F0618D8;
    case 0x7F0618DCu: goto label_7F0618DC;
    case 0x7F0618E0u: goto label_7F0618E0;
    case 0x7F0618E4u: goto label_7F0618E4;
    case 0x7F0618E8u: goto label_7F0618E8;
    case 0x7F0618ECu: goto label_7F0618EC;
    case 0x7F0618F0u: goto label_7F0618F0;
    case 0x7F0618F4u: goto label_7F0618F4;
    case 0x7F0618F8u: goto label_7F0618F8;
    case 0x7F0618FCu: goto label_7F0618FC;
    case 0x7F061900u: goto label_7F061900;
    case 0x7F061904u: goto label_7F061904;
    case 0x7F061908u: goto label_7F061908;
    case 0x7F06190Cu: goto label_7F06190C;
    case 0x7F061910u: goto label_7F061910;
    case 0x7F061914u: goto label_7F061914;
    case 0x7F061918u: goto label_7F061918;
    case 0x7F06191Cu: goto label_7F06191C;
    case 0x7F061920u: goto label_7F061920;
    case 0x7F061924u: goto label_7F061924;
    case 0x7F061928u: goto label_7F061928;
    case 0x7F06192Cu: goto label_7F06192C;
    case 0x7F061930u: goto label_7F061930;
    case 0x7F061934u: goto label_7F061934;
    case 0x7F061938u: goto label_7F061938;
    case 0x7F06193Cu: goto label_7F06193C;
    case 0x7F061940u: goto label_7F061940;
    case 0x7F061944u: goto label_7F061944;
    case 0x7F061948u: goto label_7F061948;
    case 0x7F06194Cu: goto label_7F06194C;
    case 0x7F061950u: goto label_7F061950;
    case 0x7F061954u: goto label_7F061954;
    case 0x7F061958u: goto label_7F061958;
    case 0x7F06195Cu: goto label_7F06195C;
    case 0x7F061960u: goto label_7F061960;
    case 0x7F061964u: goto label_7F061964;
    case 0x7F061968u: goto label_7F061968;
    case 0x7F06196Cu: goto label_7F06196C;
    case 0x7F061970u: goto label_7F061970;
    case 0x7F061974u: goto label_7F061974;
    case 0x7F061978u: goto label_7F061978;
    case 0x7F06197Cu: goto label_7F06197C;
    case 0x7F061980u: goto label_7F061980;
    case 0x7F061984u: goto label_7F061984;
    case 0x7F061988u: goto label_7F061988;
    case 0x7F06198Cu: goto label_7F06198C;
    case 0x7F061990u: goto label_7F061990;
    case 0x7F061994u: goto label_7F061994;
    case 0x7F061998u: goto label_7F061998;
    case 0x7F06199Cu: goto label_7F06199C;
    case 0x7F0619A0u: goto label_7F0619A0;
    case 0x7F0619A4u: goto label_7F0619A4;
    case 0x7F0619A8u: goto label_7F0619A8;
    case 0x7F0619ACu: goto label_7F0619AC;
    case 0x7F0619B0u: goto label_7F0619B0;
    case 0x7F0619B4u: goto label_7F0619B4;
    case 0x7F0619B8u: goto label_7F0619B8;
    case 0x7F0619BCu: goto label_7F0619BC;
    case 0x7F0619C0u: goto label_7F0619C0;
    case 0x7F0619C4u: goto label_7F0619C4;
    case 0x7F0619C8u: goto label_7F0619C8;
    case 0x7F0619CCu: goto label_7F0619CC;
    case 0x7F0619D0u: goto label_7F0619D0;
    case 0x7F0619D4u: goto label_7F0619D4;
    case 0x7F0619D8u: goto label_7F0619D8;
    case 0x7F0619DCu: goto label_7F0619DC;
    case 0x7F0619E0u: goto label_7F0619E0;
    case 0x7F0619E4u: goto label_7F0619E4;
    case 0x7F0619E8u: goto label_7F0619E8;
    case 0x7F0619ECu: goto label_7F0619EC;
    case 0x7F0619F0u: goto label_7F0619F0;
    case 0x7F0619F4u: goto label_7F0619F4;
    case 0x7F0619F8u: goto label_7F0619F8;
    case 0x7F0619FCu: goto label_7F0619FC;
    case 0x7F061A00u: goto label_7F061A00;
    case 0x7F061A04u: goto label_7F061A04;
    case 0x7F061A08u: goto label_7F061A08;
    case 0x7F061A0Cu: goto label_7F061A0C;
    case 0x7F061A10u: goto label_7F061A10;
    case 0x7F061A14u: goto label_7F061A14;
    case 0x7F061A18u: goto label_7F061A18;
    case 0x7F061A1Cu: goto label_7F061A1C;
    case 0x7F061A20u: goto label_7F061A20;
    case 0x7F061A24u: goto label_7F061A24;
    case 0x7F061A28u: goto label_7F061A28;
    case 0x7F061A2Cu: goto label_7F061A2C;
    case 0x7F061A30u: goto label_7F061A30;
    case 0x7F061A34u: goto label_7F061A34;
    case 0x7F061A38u: goto label_7F061A38;
    case 0x7F061A3Cu: goto label_7F061A3C;
    case 0x7F061A40u: goto label_7F061A40;
    case 0x7F061A44u: goto label_7F061A44;
    case 0x7F061A48u: goto label_7F061A48;
    case 0x7F061A4Cu: goto label_7F061A4C;
    case 0x7F061A50u: goto label_7F061A50;
    case 0x7F061A54u: goto label_7F061A54;
    case 0x7F061A58u: goto label_7F061A58;
    case 0x7F061A5Cu: goto label_7F061A5C;
    case 0x7F061A60u: goto label_7F061A60;
    case 0x7F061A64u: goto label_7F061A64;
    case 0x7F061A68u: goto label_7F061A68;
    case 0x7F061A6Cu: goto label_7F061A6C;
    case 0x7F061A70u: goto label_7F061A70;
    case 0x7F061A74u: goto label_7F061A74;
    case 0x7F061A78u: goto label_7F061A78;
    case 0x7F061A7Cu: goto label_7F061A7C;
    case 0x7F061A80u: goto label_7F061A80;
    case 0x7F061A84u: goto label_7F061A84;
    case 0x7F061A88u: goto label_7F061A88;
    case 0x7F061A8Cu: goto label_7F061A8C;
    case 0x7F061A90u: goto label_7F061A90;
    case 0x7F061A94u: goto label_7F061A94;
    case 0x7F061A98u: goto label_7F061A98;
    case 0x7F061A9Cu: goto label_7F061A9C;
    case 0x7F061AA0u: goto label_7F061AA0;
    case 0x7F061AA4u: goto label_7F061AA4;
    case 0x7F061AA8u: goto label_7F061AA8;
    case 0x7F061AACu: goto label_7F061AAC;
    case 0x7F061AB0u: goto label_7F061AB0;
    case 0x7F061AB4u: goto label_7F061AB4;
    case 0x7F061AB8u: goto label_7F061AB8;
    case 0x7F061ABCu: goto label_7F061ABC;
    case 0x7F061AC0u: goto label_7F061AC0;
    case 0x7F061AC4u: goto label_7F061AC4;
    case 0x7F061AC8u: goto label_7F061AC8;
    case 0x7F061ACCu: goto label_7F061ACC;
    case 0x7F061AD0u: goto label_7F061AD0;
    case 0x7F061AD4u: goto label_7F061AD4;
    case 0x7F061AD8u: goto label_7F061AD8;
    case 0x7F061ADCu: goto label_7F061ADC;
    case 0x7F061AE0u: goto label_7F061AE0;
    case 0x7F061AE4u: goto label_7F061AE4;
    case 0x7F061AE8u: goto label_7F061AE8;
    case 0x7F061AECu: goto label_7F061AEC;
    case 0x7F061AF0u: goto label_7F061AF0;
    case 0x7F061AF4u: goto label_7F061AF4;
    case 0x7F061AF8u: goto label_7F061AF8;
    case 0x7F061AFCu: goto label_7F061AFC;
    case 0x7F061B00u: goto label_7F061B00;
    case 0x7F061B04u: goto label_7F061B04;
    case 0x7F061B08u: goto label_7F061B08;
    case 0x7F061B0Cu: goto label_7F061B0C;
    case 0x7F061B10u: goto label_7F061B10;
    case 0x7F061B14u: goto label_7F061B14;
    case 0x7F061B18u: goto label_7F061B18;
    case 0x7F061B1Cu: goto label_7F061B1C;
    case 0x7F061B20u: goto label_7F061B20;
    case 0x7F061B24u: goto label_7F061B24;
    case 0x7F061B28u: goto label_7F061B28;
    case 0x7F061B2Cu: goto label_7F061B2C;
    case 0x7F061B30u: goto label_7F061B30;
    case 0x7F061B34u: goto label_7F061B34;
    case 0x7F061B38u: goto label_7F061B38;
    case 0x7F061B3Cu: goto label_7F061B3C;
    case 0x7F061B40u: goto label_7F061B40;
    case 0x7F061B44u: goto label_7F061B44;
    case 0x7F061B48u: goto label_7F061B48;
    case 0x7F061B4Cu: goto label_7F061B4C;
    case 0x7F061B50u: goto label_7F061B50;
    case 0x7F061B54u: goto label_7F061B54;
    case 0x7F061B58u: goto label_7F061B58;
    case 0x7F061B5Cu: goto label_7F061B5C;
    case 0x7F061B60u: goto label_7F061B60;
    case 0x7F061B64u: goto label_7F061B64;
    case 0x7F061B68u: goto label_7F061B68;
    case 0x7F061B6Cu: goto label_7F061B6C;
    case 0x7F061B70u: goto label_7F061B70;
    case 0x7F061B74u: goto label_7F061B74;
    case 0x7F061B78u: goto label_7F061B78;
    case 0x7F061B7Cu: goto label_7F061B7C;
    case 0x7F061B80u: goto label_7F061B80;
    case 0x7F061B84u: goto label_7F061B84;
    case 0x7F061B88u: goto label_7F061B88;
    case 0x7F061B8Cu: goto label_7F061B8C;
    case 0x7F061B90u: goto label_7F061B90;
    case 0x7F061B94u: goto label_7F061B94;
    case 0x7F061B98u: goto label_7F061B98;
    case 0x7F061B9Cu: goto label_7F061B9C;
    case 0x7F061BA0u: goto label_7F061BA0;
    case 0x7F061BA4u: goto label_7F061BA4;
    case 0x7F061BA8u: goto label_7F061BA8;
    case 0x7F061BACu: goto label_7F061BAC;
    case 0x7F061BB0u: goto label_7F061BB0;
    case 0x7F061BB4u: goto label_7F061BB4;
    case 0x7F061BB8u: goto label_7F061BB8;
    case 0x7F061BBCu: goto label_7F061BBC;
    case 0x7F061BC0u: goto label_7F061BC0;
    case 0x7F061BC4u: goto label_7F061BC4;
    case 0x7F061BC8u: goto label_7F061BC8;
    case 0x7F061BCCu: goto label_7F061BCC;
    case 0x7F061BD0u: goto label_7F061BD0;
    case 0x7F061BD4u: goto label_7F061BD4;
    case 0x7F061BD8u: goto label_7F061BD8;
    case 0x7F061BDCu: goto label_7F061BDC;
    case 0x7F061BE0u: goto label_7F061BE0;
    case 0x7F061BE4u: goto label_7F061BE4;
    case 0x7F061BE8u: goto label_7F061BE8;
    case 0x7F061BECu: goto label_7F061BEC;
    case 0x7F061BF0u: goto label_7F061BF0;
    case 0x7F061BF4u: goto label_7F061BF4;
    case 0x7F061BF8u: goto label_7F061BF8;
    case 0x7F061BFCu: goto label_7F061BFC;
    case 0x7F061C00u: goto label_7F061C00;
    case 0x7F061C04u: goto label_7F061C04;
    case 0x7F061C08u: goto label_7F061C08;
    case 0x7F061C0Cu: goto label_7F061C0C;
    case 0x7F061C10u: goto label_7F061C10;
    case 0x7F061C14u: goto label_7F061C14;
    case 0x7F061C18u: goto label_7F061C18;
    case 0x7F061C1Cu: goto label_7F061C1C;
    case 0x7F061C20u: goto label_7F061C20;
    case 0x7F061C24u: goto label_7F061C24;
    case 0x7F061C28u: goto label_7F061C28;
    case 0x7F061C2Cu: goto label_7F061C2C;
    case 0x7F061C30u: goto label_7F061C30;
    case 0x7F061C34u: goto label_7F061C34;
    case 0x7F061C38u: goto label_7F061C38;
    case 0x7F061C3Cu: goto label_7F061C3C;
    case 0x7F061C40u: goto label_7F061C40;
    case 0x7F061C44u: goto label_7F061C44;
    case 0x7F061C48u: goto label_7F061C48;
    case 0x7F061C4Cu: goto label_7F061C4C;
    case 0x7F061C50u: goto label_7F061C50;
    case 0x7F061C54u: goto label_7F061C54;
    case 0x7F061C58u: goto label_7F061C58;
    case 0x7F061C5Cu: goto label_7F061C5C;
    case 0x7F061C60u: goto label_7F061C60;
    case 0x7F061C64u: goto label_7F061C64;
    case 0x7F061C68u: goto label_7F061C68;
    case 0x7F061C6Cu: goto label_7F061C6C;
    case 0x7F061C70u: goto label_7F061C70;
    case 0x7F061C74u: goto label_7F061C74;
    case 0x7F061C78u: goto label_7F061C78;
    case 0x7F061C7Cu: goto label_7F061C7C;
    case 0x7F061C80u: goto label_7F061C80;
    case 0x7F061C84u: goto label_7F061C84;
    case 0x7F061C88u: goto label_7F061C88;
    case 0x7F061C8Cu: goto label_7F061C8C;
    case 0x7F061C90u: goto label_7F061C90;
    case 0x7F061C94u: goto label_7F061C94;
    case 0x7F061C98u: goto label_7F061C98;
    case 0x7F061C9Cu: goto label_7F061C9C;
    case 0x7F061CA0u: goto label_7F061CA0;
    case 0x7F061CA4u: goto label_7F061CA4;
    case 0x7F061CA8u: goto label_7F061CA8;
    case 0x7F061CACu: goto label_7F061CAC;
    case 0x7F061CB0u: goto label_7F061CB0;
    case 0x7F061CB4u: goto label_7F061CB4;
    case 0x7F061CB8u: goto label_7F061CB8;
    case 0x7F061CBCu: goto label_7F061CBC;
    case 0x7F061CC0u: goto label_7F061CC0;
    case 0x7F061CC4u: goto label_7F061CC4;
    case 0x7F061CC8u: goto label_7F061CC8;
    case 0x7F061CCCu: goto label_7F061CCC;
    case 0x7F061CD0u: goto label_7F061CD0;
    case 0x7F061CD4u: goto label_7F061CD4;
    case 0x7F061CD8u: goto label_7F061CD8;
    case 0x7F061CDCu: goto label_7F061CDC;
    case 0x7F061CE0u: goto label_7F061CE0;
    case 0x7F061CE4u: goto label_7F061CE4;
    case 0x7F061CE8u: goto label_7F061CE8;
    case 0x7F061CECu: goto label_7F061CEC;
    case 0x7F061CF0u: goto label_7F061CF0;
    case 0x7F061CF4u: goto label_7F061CF4;
    case 0x7F061CF8u: goto label_7F061CF8;
    case 0x7F061CFCu: goto label_7F061CFC;
    case 0x7F061D00u: goto label_7F061D00;
    case 0x7F061D04u: goto label_7F061D04;
    case 0x7F061D08u: goto label_7F061D08;
    case 0x7F061D0Cu: goto label_7F061D0C;
    case 0x7F061D10u: goto label_7F061D10;
    case 0x7F061D14u: goto label_7F061D14;
    case 0x7F061D18u: goto label_7F061D18;
    case 0x7F061D1Cu: goto label_7F061D1C;
    case 0x7F061D20u: goto label_7F061D20;
    case 0x7F061D24u: goto label_7F061D24;
    case 0x7F061D28u: goto label_7F061D28;
    case 0x7F061D2Cu: goto label_7F061D2C;
    case 0x7F061D30u: goto label_7F061D30;
    case 0x7F061D34u: goto label_7F061D34;
    case 0x7F061D38u: goto label_7F061D38;
    case 0x7F061D3Cu: goto label_7F061D3C;
    case 0x7F061D40u: goto label_7F061D40;
    case 0x7F061D44u: goto label_7F061D44;
    case 0x7F061D48u: goto label_7F061D48;
    case 0x7F061D4Cu: goto label_7F061D4C;
    case 0x7F061D50u: goto label_7F061D50;
    case 0x7F061D54u: goto label_7F061D54;
    case 0x7F061D58u: goto label_7F061D58;
    case 0x7F061D5Cu: goto label_7F061D5C;
    case 0x7F061D60u: goto label_7F061D60;
    case 0x7F061D64u: goto label_7F061D64;
    case 0x7F061D68u: goto label_7F061D68;
    case 0x7F061D6Cu: goto label_7F061D6C;
    case 0x7F061D70u: goto label_7F061D70;
    case 0x7F061D74u: goto label_7F061D74;
    case 0x7F061D78u: goto label_7F061D78;
    case 0x7F061D7Cu: goto label_7F061D7C;
    case 0x7F061D80u: goto label_7F061D80;
    case 0x7F061D84u: goto label_7F061D84;
    case 0x7F061D88u: goto label_7F061D88;
    case 0x7F061D8Cu: goto label_7F061D8C;
    case 0x7F061D90u: goto label_7F061D90;
    case 0x7F061D94u: goto label_7F061D94;
    case 0x7F061D98u: goto label_7F061D98;
    case 0x7F061D9Cu: goto label_7F061D9C;
    case 0x7F061DA0u: goto label_7F061DA0;
    case 0x7F061DA4u: goto label_7F061DA4;
    case 0x7F061DA8u: goto label_7F061DA8;
    case 0x7F061DACu: goto label_7F061DAC;
    case 0x7F061DB0u: goto label_7F061DB0;
    case 0x7F061DB4u: goto label_7F061DB4;
    case 0x7F061DB8u: goto label_7F061DB8;
    case 0x7F061DBCu: goto label_7F061DBC;
    case 0x7F061DC0u: goto label_7F061DC0;
    case 0x7F061DC4u: goto label_7F061DC4;
    case 0x7F061DC8u: goto label_7F061DC8;
    case 0x7F061DCCu: goto label_7F061DCC;
    case 0x7F061DD0u: goto label_7F061DD0;
    case 0x7F061DD4u: goto label_7F061DD4;
    case 0x7F061DD8u: goto label_7F061DD8;
    case 0x7F061DDCu: goto label_7F061DDC;
    case 0x7F061DE0u: goto label_7F061DE0;
    case 0x7F061DE4u: goto label_7F061DE4;
    case 0x7F061DE8u: goto label_7F061DE8;
    case 0x7F061DECu: goto label_7F061DEC;
    case 0x7F061DF0u: goto label_7F061DF0;
    case 0x7F061DF4u: goto label_7F061DF4;
    case 0x7F061DF8u: goto label_7F061DF8;
    case 0x7F061DFCu: goto label_7F061DFC;
    case 0x7F061E00u: goto label_7F061E00;
    case 0x7F061E04u: goto label_7F061E04;
    case 0x7F061E08u: goto label_7F061E08;
    case 0x7F061E0Cu: goto label_7F061E0C;
    case 0x7F061E10u: goto label_7F061E10;
    case 0x7F061E14u: goto label_7F061E14;
    case 0x7F061E18u: goto label_7F061E18;
    case 0x7F061E1Cu: goto label_7F061E1C;
    case 0x7F061E20u: goto label_7F061E20;
    case 0x7F061E24u: goto label_7F061E24;
    case 0x7F061E28u: goto label_7F061E28;
    case 0x7F061E2Cu: goto label_7F061E2C;
    case 0x7F061E30u: goto label_7F061E30;
    case 0x7F061E34u: goto label_7F061E34;
    case 0x7F061E38u: goto label_7F061E38;
    case 0x7F061E3Cu: goto label_7F061E3C;
    case 0x7F061E40u: goto label_7F061E40;
    case 0x7F061E44u: goto label_7F061E44;
    case 0x7F061E48u: goto label_7F061E48;
    case 0x7F061E4Cu: goto label_7F061E4C;
    case 0x7F061E50u: goto label_7F061E50;
    case 0x7F061E54u: goto label_7F061E54;
    case 0x7F061E58u: goto label_7F061E58;
    case 0x7F061E5Cu: goto label_7F061E5C;
    case 0x7F061E60u: goto label_7F061E60;
    case 0x7F061E64u: goto label_7F061E64;
    case 0x7F061E68u: goto label_7F061E68;
    case 0x7F061E6Cu: goto label_7F061E6C;
    case 0x7F061E70u: goto label_7F061E70;
    case 0x7F061E74u: goto label_7F061E74;
    case 0x7F061E78u: goto label_7F061E78;
    case 0x7F061E7Cu: goto label_7F061E7C;
    case 0x7F061E80u: goto label_7F061E80;
    case 0x7F061E84u: goto label_7F061E84;
    case 0x7F061E88u: goto label_7F061E88;
    case 0x7F061E8Cu: goto label_7F061E8C;
    case 0x7F061E90u: goto label_7F061E90;
    case 0x7F061E94u: goto label_7F061E94;
    case 0x7F061E98u: goto label_7F061E98;
    case 0x7F061E9Cu: goto label_7F061E9C;
    case 0x7F061EA0u: goto label_7F061EA0;
    case 0x7F061EA4u: goto label_7F061EA4;
    case 0x7F061EA8u: goto label_7F061EA8;
    case 0x7F061EACu: goto label_7F061EAC;
    case 0x7F061EB0u: goto label_7F061EB0;
    case 0x7F061EB4u: goto label_7F061EB4;
    case 0x7F061EB8u: goto label_7F061EB8;
    case 0x7F061EBCu: goto label_7F061EBC;
    case 0x7F061EC0u: goto label_7F061EC0;
    case 0x7F061EC4u: goto label_7F061EC4;
    case 0x7F061EC8u: goto label_7F061EC8;
    case 0x7F061ECCu: goto label_7F061ECC;
    case 0x7F061ED0u: goto label_7F061ED0;
    case 0x7F061ED4u: goto label_7F061ED4;
    case 0x7F061ED8u: goto label_7F061ED8;
    case 0x7F061EDCu: goto label_7F061EDC;
    case 0x7F061EE0u: goto label_7F061EE0;
    case 0x7F061EE4u: goto label_7F061EE4;
    case 0x7F061EE8u: goto label_7F061EE8;
    case 0x7F061EECu: goto label_7F061EEC;
    case 0x7F061EF0u: goto label_7F061EF0;
    case 0x7F061EF4u: goto label_7F061EF4;
    case 0x7F061EF8u: goto label_7F061EF8;
    case 0x7F061EFCu: goto label_7F061EFC;
    case 0x7F061F00u: goto label_7F061F00;
    case 0x7F061F04u: goto label_7F061F04;
    case 0x7F061F08u: goto label_7F061F08;
    case 0x7F061F0Cu: goto label_7F061F0C;
    case 0x7F061F10u: goto label_7F061F10;
    case 0x7F061F14u: goto label_7F061F14;
    case 0x7F061F18u: goto label_7F061F18;
    case 0x7F061F1Cu: goto label_7F061F1C;
    case 0x7F061F20u: goto label_7F061F20;
    case 0x7F061F24u: goto label_7F061F24;
    case 0x7F061F28u: goto label_7F061F28;
    case 0x7F061F2Cu: goto label_7F061F2C;
    case 0x7F061F30u: goto label_7F061F30;
    case 0x7F061F34u: goto label_7F061F34;
    case 0x7F061F38u: goto label_7F061F38;
    case 0x7F061F3Cu: goto label_7F061F3C;
    case 0x7F061F40u: goto label_7F061F40;
    case 0x7F061F44u: goto label_7F061F44;
    case 0x7F061F48u: goto label_7F061F48;
    case 0x7F061F4Cu: goto label_7F061F4C;
    case 0x7F061F50u: goto label_7F061F50;
    case 0x7F061F54u: goto label_7F061F54;
    case 0x7F061F58u: goto label_7F061F58;
    case 0x7F061F5Cu: goto label_7F061F5C;
    case 0x7F061F60u: goto label_7F061F60;
    case 0x7F061F64u: goto label_7F061F64;
    case 0x7F061F68u: goto label_7F061F68;
    case 0x7F061F6Cu: goto label_7F061F6C;
    case 0x7F061F70u: goto label_7F061F70;
    case 0x7F061F74u: goto label_7F061F74;
    case 0x7F061F78u: goto label_7F061F78;
    case 0x7F061F7Cu: goto label_7F061F7C;
    case 0x7F061F80u: goto label_7F061F80;
    case 0x7F061F84u: goto label_7F061F84;
    case 0x7F061F88u: goto label_7F061F88;
    case 0x7F061F8Cu: goto label_7F061F8C;
    case 0x7F061F90u: goto label_7F061F90;
    case 0x7F061F94u: goto label_7F061F94;
    case 0x7F061F98u: goto label_7F061F98;
    case 0x7F061F9Cu: goto label_7F061F9C;
    case 0x7F061FA0u: goto label_7F061FA0;
    case 0x7F061FA4u: goto label_7F061FA4;
    case 0x7F061FA8u: goto label_7F061FA8;
    case 0x7F061FACu: goto label_7F061FAC;
    case 0x7F061FB0u: goto label_7F061FB0;
    case 0x7F061FB4u: goto label_7F061FB4;
    case 0x7F061FB8u: goto label_7F061FB8;
    case 0x7F061FBCu: goto label_7F061FBC;
    case 0x7F061FC0u: goto label_7F061FC0;
    case 0x7F061FC4u: goto label_7F061FC4;
    case 0x7F061FC8u: goto label_7F061FC8;
    case 0x7F061FCCu: goto label_7F061FCC;
    case 0x7F061FD0u: goto label_7F061FD0;
    case 0x7F061FD4u: goto label_7F061FD4;
    case 0x7F061FD8u: goto label_7F061FD8;
    case 0x7F061FDCu: goto label_7F061FDC;
    case 0x7F061FE0u: goto label_7F061FE0;
    case 0x7F061FE4u: goto label_7F061FE4;
    case 0x7F061FE8u: goto label_7F061FE8;
    case 0x7F061FECu: goto label_7F061FEC;
    case 0x7F061FF0u: goto label_7F061FF0;
    case 0x7F061FF4u: goto label_7F061FF4;
    case 0x7F061FF8u: goto label_7F061FF8;
    case 0x7F061FFCu: goto label_7F061FFC;
    case 0x7F062000u: goto label_7F062000;
    case 0x7F062004u: goto label_7F062004;
    case 0x7F062008u: goto label_7F062008;
    case 0x7F06200Cu: goto label_7F06200C;
    case 0x7F062010u: goto label_7F062010;
    case 0x7F062014u: goto label_7F062014;
    case 0x7F062018u: goto label_7F062018;
    case 0x7F06201Cu: goto label_7F06201C;
    case 0x7F062020u: goto label_7F062020;
    case 0x7F062024u: goto label_7F062024;
    case 0x7F062028u: goto label_7F062028;
    case 0x7F06202Cu: goto label_7F06202C;
    case 0x7F062030u: goto label_7F062030;
    case 0x7F062034u: goto label_7F062034;
    case 0x7F062038u: goto label_7F062038;
    case 0x7F06203Cu: goto label_7F06203C;
    case 0x7F062040u: goto label_7F062040;
    case 0x7F062044u: goto label_7F062044;
    case 0x7F062048u: goto label_7F062048;
    case 0x7F06204Cu: goto label_7F06204C;
    case 0x7F062050u: goto label_7F062050;
    case 0x7F062054u: goto label_7F062054;
    case 0x7F062058u: goto label_7F062058;
    case 0x7F06205Cu: goto label_7F06205C;
    case 0x7F062060u: goto label_7F062060;
    case 0x7F062064u: goto label_7F062064;
    case 0x7F062068u: goto label_7F062068;
    case 0x7F06206Cu: goto label_7F06206C;
    case 0x7F062070u: goto label_7F062070;
    case 0x7F062074u: goto label_7F062074;
    case 0x7F062078u: goto label_7F062078;
    case 0x7F06207Cu: goto label_7F06207C;
    case 0x7F062080u: goto label_7F062080;
    case 0x7F062084u: goto label_7F062084;
    case 0x7F062088u: goto label_7F062088;
    case 0x7F06208Cu: goto label_7F06208C;
    case 0x7F062090u: goto label_7F062090;
    case 0x7F062094u: goto label_7F062094;
    case 0x7F062098u: goto label_7F062098;
    case 0x7F06209Cu: goto label_7F06209C;
    case 0x7F0620A0u: goto label_7F0620A0;
    case 0x7F0620A4u: goto label_7F0620A4;
    case 0x7F0620A8u: goto label_7F0620A8;
    case 0x7F0620ACu: goto label_7F0620AC;
    case 0x7F0620B0u: goto label_7F0620B0;
    case 0x7F0620B4u: goto label_7F0620B4;
    case 0x7F0620B8u: goto label_7F0620B8;
    case 0x7F0620BCu: goto label_7F0620BC;
    case 0x7F0620C0u: goto label_7F0620C0;
    case 0x7F0620C4u: goto label_7F0620C4;
    case 0x7F0620C8u: goto label_7F0620C8;
    case 0x7F0620CCu: goto label_7F0620CC;
    case 0x7F0620D0u: goto label_7F0620D0;
    case 0x7F0620D4u: goto label_7F0620D4;
    case 0x7F0620D8u: goto label_7F0620D8;
    case 0x7F0620DCu: goto label_7F0620DC;
    case 0x7F0620E0u: goto label_7F0620E0;
    case 0x7F0620E4u: goto label_7F0620E4;
    case 0x7F0620E8u: goto label_7F0620E8;
    case 0x7F0620ECu: goto label_7F0620EC;
    case 0x7F0620F0u: goto label_7F0620F0;
    case 0x7F0620F4u: goto label_7F0620F4;
    case 0x7F0620F8u: goto label_7F0620F8;
    case 0x7F0620FCu: goto label_7F0620FC;
    case 0x7F062100u: goto label_7F062100;
    case 0x7F062104u: goto label_7F062104;
    case 0x7F062108u: goto label_7F062108;
    case 0x7F06210Cu: goto label_7F06210C;
    case 0x7F062110u: goto label_7F062110;
    case 0x7F062114u: goto label_7F062114;
    case 0x7F062118u: goto label_7F062118;
    case 0x7F06211Cu: goto label_7F06211C;
    case 0x7F062120u: goto label_7F062120;
    case 0x7F062124u: goto label_7F062124;
    case 0x7F062128u: goto label_7F062128;
    case 0x7F06212Cu: goto label_7F06212C;
    case 0x7F062130u: goto label_7F062130;
    case 0x7F062134u: goto label_7F062134;
    case 0x7F062138u: goto label_7F062138;
    case 0x7F06213Cu: goto label_7F06213C;
    case 0x7F062140u: goto label_7F062140;
    case 0x7F062144u: goto label_7F062144;
    case 0x7F062148u: goto label_7F062148;
    case 0x7F06214Cu: goto label_7F06214C;
    case 0x7F062150u: goto label_7F062150;
    case 0x7F062154u: goto label_7F062154;
    case 0x7F062158u: goto label_7F062158;
    case 0x7F06215Cu: goto label_7F06215C;
    case 0x7F062160u: goto label_7F062160;
    case 0x7F062164u: goto label_7F062164;
    case 0x7F062168u: goto label_7F062168;
    case 0x7F06216Cu: goto label_7F06216C;
    case 0x7F062170u: goto label_7F062170;
    case 0x7F062174u: goto label_7F062174;
    case 0x7F062178u: goto label_7F062178;
    case 0x7F06217Cu: goto label_7F06217C;
    case 0x7F062180u: goto label_7F062180;
    case 0x7F062184u: goto label_7F062184;
    case 0x7F062188u: goto label_7F062188;
    case 0x7F06218Cu: goto label_7F06218C;
    case 0x7F062190u: goto label_7F062190;
    case 0x7F062194u: goto label_7F062194;
    case 0x7F062198u: goto label_7F062198;
    case 0x7F06219Cu: goto label_7F06219C;
    case 0x7F0621A0u: goto label_7F0621A0;
    case 0x7F0621A4u: goto label_7F0621A4;
    case 0x7F0621A8u: goto label_7F0621A8;
    case 0x7F0621ACu: goto label_7F0621AC;
    case 0x7F0621B0u: goto label_7F0621B0;
    case 0x7F0621B4u: goto label_7F0621B4;
    case 0x7F0621B8u: goto label_7F0621B8;
    case 0x7F0621BCu: goto label_7F0621BC;
    case 0x7F0621C0u: goto label_7F0621C0;
    case 0x7F0621C4u: goto label_7F0621C4;
    case 0x7F0621C8u: goto label_7F0621C8;
    case 0x7F0621CCu: goto label_7F0621CC;
    case 0x7F0621D0u: goto label_7F0621D0;
    case 0x7F0621D4u: goto label_7F0621D4;
    case 0x7F0621D8u: goto label_7F0621D8;
    case 0x7F0621DCu: goto label_7F0621DC;
    case 0x7F0621E0u: goto label_7F0621E0;
    case 0x7F0621E4u: goto label_7F0621E4;
    case 0x7F0621E8u: goto label_7F0621E8;
    case 0x7F0621ECu: goto label_7F0621EC;
    case 0x7F0621F0u: goto label_7F0621F0;
    case 0x7F0621F4u: goto label_7F0621F4;
    case 0x7F0621F8u: goto label_7F0621F8;
    case 0x7F0621FCu: goto label_7F0621FC;
    case 0x7F062200u: goto label_7F062200;
    case 0x7F062204u: goto label_7F062204;
    case 0x7F062208u: goto label_7F062208;
    case 0x7F06220Cu: goto label_7F06220C;
    case 0x7F062210u: goto label_7F062210;
    case 0x7F062214u: goto label_7F062214;
    case 0x7F062218u: goto label_7F062218;
    case 0x7F06221Cu: goto label_7F06221C;
    case 0x7F062220u: goto label_7F062220;
    case 0x7F062224u: goto label_7F062224;
    case 0x7F062228u: goto label_7F062228;
    case 0x7F06222Cu: goto label_7F06222C;
    case 0x7F062230u: goto label_7F062230;
    case 0x7F062234u: goto label_7F062234;
    case 0x7F062238u: goto label_7F062238;
    case 0x7F06223Cu: goto label_7F06223C;
    case 0x7F062240u: goto label_7F062240;
    case 0x7F062244u: goto label_7F062244;
    case 0x7F062248u: goto label_7F062248;
    case 0x7F06224Cu: goto label_7F06224C;
    case 0x7F062250u: goto label_7F062250;
    case 0x7F062254u: goto label_7F062254;
    case 0x7F062258u: goto label_7F062258;
    case 0x7F06225Cu: goto label_7F06225C;
    case 0x7F062260u: goto label_7F062260;
    case 0x7F062264u: goto label_7F062264;
    case 0x7F062268u: goto label_7F062268;
    case 0x7F06226Cu: goto label_7F06226C;
    case 0x7F062270u: goto label_7F062270;
    case 0x7F062274u: goto label_7F062274;
    case 0x7F062278u: goto label_7F062278;
    case 0x7F06227Cu: goto label_7F06227C;
    case 0x7F062280u: goto label_7F062280;
    case 0x7F062284u: goto label_7F062284;
    case 0x7F062288u: goto label_7F062288;
    case 0x7F06228Cu: goto label_7F06228C;
    case 0x7F062290u: goto label_7F062290;
    case 0x7F062294u: goto label_7F062294;
    case 0x7F062298u: goto label_7F062298;
    case 0x7F06229Cu: goto label_7F06229C;
    case 0x7F0622A0u: goto label_7F0622A0;
    case 0x7F0622A4u: goto label_7F0622A4;
    case 0x7F0622A8u: goto label_7F0622A8;
    case 0x7F0622ACu: goto label_7F0622AC;
    case 0x7F0622B0u: goto label_7F0622B0;
    case 0x7F0622B4u: goto label_7F0622B4;
    case 0x7F0622B8u: goto label_7F0622B8;
    case 0x7F0622BCu: goto label_7F0622BC;
    case 0x7F0622C0u: goto label_7F0622C0;
    case 0x7F0622C4u: goto label_7F0622C4;
    case 0x7F0622C8u: goto label_7F0622C8;
    case 0x7F0622CCu: goto label_7F0622CC;
    case 0x7F0622D0u: goto label_7F0622D0;
    case 0x7F0622D4u: goto label_7F0622D4;
    case 0x7F0622D8u: goto label_7F0622D8;
    case 0x7F0622DCu: goto label_7F0622DC;
    case 0x7F0622E0u: goto label_7F0622E0;
    case 0x7F0622E4u: goto label_7F0622E4;
    case 0x7F0622E8u: goto label_7F0622E8;
    case 0x7F0622ECu: goto label_7F0622EC;
    case 0x7F0622F0u: goto label_7F0622F0;
    case 0x7F0622F4u: goto label_7F0622F4;
    case 0x7F0622F8u: goto label_7F0622F8;
    case 0x7F0622FCu: goto label_7F0622FC;
    case 0x7F062300u: goto label_7F062300;
    case 0x7F062304u: goto label_7F062304;
    case 0x7F062308u: goto label_7F062308;
    case 0x7F06230Cu: goto label_7F06230C;
    case 0x7F062310u: goto label_7F062310;
    case 0x7F062314u: goto label_7F062314;
    case 0x7F062318u: goto label_7F062318;
    case 0x7F06231Cu: goto label_7F06231C;
    case 0x7F062320u: goto label_7F062320;
    case 0x7F062324u: goto label_7F062324;
    case 0x7F062328u: goto label_7F062328;
    case 0x7F06232Cu: goto label_7F06232C;
    case 0x7F062330u: goto label_7F062330;
    case 0x7F062334u: goto label_7F062334;
    case 0x7F062338u: goto label_7F062338;
    case 0x7F06233Cu: goto label_7F06233C;
    case 0x7F062340u: goto label_7F062340;
    case 0x7F062344u: goto label_7F062344;
    case 0x7F062348u: goto label_7F062348;
    case 0x7F06234Cu: goto label_7F06234C;
    case 0x7F062350u: goto label_7F062350;
    case 0x7F062354u: goto label_7F062354;
    case 0x7F062358u: goto label_7F062358;
    case 0x7F06235Cu: goto label_7F06235C;
    case 0x7F062360u: goto label_7F062360;
    case 0x7F062364u: goto label_7F062364;
    case 0x7F062368u: goto label_7F062368;
    case 0x7F06236Cu: goto label_7F06236C;
    case 0x7F062370u: goto label_7F062370;
    case 0x7F062374u: goto label_7F062374;
    case 0x7F062378u: goto label_7F062378;
    case 0x7F06237Cu: goto label_7F06237C;
    case 0x7F062380u: goto label_7F062380;
    case 0x7F062384u: goto label_7F062384;
    case 0x7F062388u: goto label_7F062388;
    case 0x7F06238Cu: goto label_7F06238C;
    case 0x7F062390u: goto label_7F062390;
    case 0x7F062394u: goto label_7F062394;
    case 0x7F062398u: goto label_7F062398;
    case 0x7F06239Cu: goto label_7F06239C;
    case 0x7F0623A0u: goto label_7F0623A0;
    case 0x7F0623A4u: goto label_7F0623A4;
    case 0x7F0623A8u: goto label_7F0623A8;
    case 0x7F0623ACu: goto label_7F0623AC;
    case 0x7F0623B0u: goto label_7F0623B0;
    case 0x7F0623B4u: goto label_7F0623B4;
    case 0x7F0623B8u: goto label_7F0623B8;
    case 0x7F0623BCu: goto label_7F0623BC;
    case 0x7F0623C0u: goto label_7F0623C0;
    case 0x7F0623C4u: goto label_7F0623C4;
    case 0x7F0623C8u: goto label_7F0623C8;
    case 0x7F0623CCu: goto label_7F0623CC;
    case 0x7F0623D0u: goto label_7F0623D0;
    case 0x7F0623D4u: goto label_7F0623D4;
    case 0x7F0623D8u: goto label_7F0623D8;
    case 0x7F0623DCu: goto label_7F0623DC;
    case 0x7F0623E0u: goto label_7F0623E0;
    case 0x7F0623E4u: goto label_7F0623E4;
    case 0x7F0623E8u: goto label_7F0623E8;
    case 0x7F0623ECu: goto label_7F0623EC;
    case 0x7F0623F0u: goto label_7F0623F0;
    case 0x7F0623F4u: goto label_7F0623F4;
    case 0x7F0623F8u: goto label_7F0623F8;
    case 0x7F0623FCu: goto label_7F0623FC;
    case 0x7F062400u: goto label_7F062400;
    case 0x7F062404u: goto label_7F062404;
    case 0x7F062408u: goto label_7F062408;
    case 0x7F06240Cu: goto label_7F06240C;
    case 0x7F062410u: goto label_7F062410;
    case 0x7F062414u: goto label_7F062414;
    case 0x7F062418u: goto label_7F062418;
    case 0x7F06241Cu: goto label_7F06241C;
    case 0x7F062420u: goto label_7F062420;
    case 0x7F062424u: goto label_7F062424;
    case 0x7F062428u: goto label_7F062428;
    case 0x7F06242Cu: goto label_7F06242C;
    case 0x7F062430u: goto label_7F062430;
    case 0x7F062434u: goto label_7F062434;
    case 0x7F062438u: goto label_7F062438;
    case 0x7F06243Cu: goto label_7F06243C;
    case 0x7F062440u: goto label_7F062440;
    case 0x7F062444u: goto label_7F062444;
    case 0x7F062448u: goto label_7F062448;
    case 0x7F06244Cu: goto label_7F06244C;
    case 0x7F062450u: goto label_7F062450;
    case 0x7F062454u: goto label_7F062454;
    case 0x7F062458u: goto label_7F062458;
    case 0x7F06245Cu: goto label_7F06245C;
    case 0x7F062460u: goto label_7F062460;
    case 0x7F062464u: goto label_7F062464;
    case 0x7F062468u: goto label_7F062468;
    case 0x7F06246Cu: goto label_7F06246C;
    case 0x7F062470u: goto label_7F062470;
    case 0x7F062474u: goto label_7F062474;
    case 0x7F062478u: goto label_7F062478;
    case 0x7F06247Cu: goto label_7F06247C;
    case 0x7F062480u: goto label_7F062480;
    case 0x7F062484u: goto label_7F062484;
    case 0x7F062488u: goto label_7F062488;
    case 0x7F06248Cu: goto label_7F06248C;
    case 0x7F062490u: goto label_7F062490;
    case 0x7F062494u: goto label_7F062494;
    case 0x7F062498u: goto label_7F062498;
    case 0x7F06249Cu: goto label_7F06249C;
    case 0x7F0624A0u: goto label_7F0624A0;
    case 0x7F0624A4u: goto label_7F0624A4;
    case 0x7F0624A8u: goto label_7F0624A8;
    case 0x7F0624ACu: goto label_7F0624AC;
    case 0x7F0624B0u: goto label_7F0624B0;
    case 0x7F0624B4u: goto label_7F0624B4;
    case 0x7F0624B8u: goto label_7F0624B8;
    case 0x7F0624BCu: goto label_7F0624BC;
    case 0x7F0624C0u: goto label_7F0624C0;
    case 0x7F0624C4u: goto label_7F0624C4;
    case 0x7F0624C8u: goto label_7F0624C8;
    case 0x7F0624CCu: goto label_7F0624CC;
    case 0x7F0624D0u: goto label_7F0624D0;
    case 0x7F0624D4u: goto label_7F0624D4;
    case 0x7F0624D8u: goto label_7F0624D8;
    case 0x7F0624DCu: goto label_7F0624DC;
    case 0x7F0624E0u: goto label_7F0624E0;
    case 0x7F0624E4u: goto label_7F0624E4;
    case 0x7F0624E8u: goto label_7F0624E8;
    case 0x7F0624ECu: goto label_7F0624EC;
    case 0x7F0624F0u: goto label_7F0624F0;
    case 0x7F0624F4u: goto label_7F0624F4;
    case 0x7F0624F8u: goto label_7F0624F8;
    case 0x7F0624FCu: goto label_7F0624FC;
    case 0x7F062500u: goto label_7F062500;
    case 0x7F062504u: goto label_7F062504;
    case 0x7F062508u: goto label_7F062508;
    case 0x7F06250Cu: goto label_7F06250C;
    case 0x7F062510u: goto label_7F062510;
    case 0x7F062514u: goto label_7F062514;
    case 0x7F062518u: goto label_7F062518;
    case 0x7F06251Cu: goto label_7F06251C;
    case 0x7F062520u: goto label_7F062520;
    case 0x7F062524u: goto label_7F062524;
    case 0x7F062528u: goto label_7F062528;
    case 0x7F06252Cu: goto label_7F06252C;
    case 0x7F062530u: goto label_7F062530;
    case 0x7F062534u: goto label_7F062534;
    case 0x7F062538u: goto label_7F062538;
    case 0x7F06253Cu: goto label_7F06253C;
    case 0x7F062540u: goto label_7F062540;
    case 0x7F062544u: goto label_7F062544;
    case 0x7F062548u: goto label_7F062548;
    case 0x7F06254Cu: goto label_7F06254C;
    case 0x7F062550u: goto label_7F062550;
    case 0x7F062554u: goto label_7F062554;
    case 0x7F062558u: goto label_7F062558;
    case 0x7F06255Cu: goto label_7F06255C;
    case 0x7F062560u: goto label_7F062560;
    case 0x7F062564u: goto label_7F062564;
    case 0x7F062568u: goto label_7F062568;
    case 0x7F06256Cu: goto label_7F06256C;
    case 0x7F062570u: goto label_7F062570;
    case 0x7F062574u: goto label_7F062574;
    case 0x7F062578u: goto label_7F062578;
    case 0x7F06257Cu: goto label_7F06257C;
    case 0x7F062580u: goto label_7F062580;
    case 0x7F062584u: goto label_7F062584;
    case 0x7F062588u: goto label_7F062588;
    case 0x7F06258Cu: goto label_7F06258C;
    case 0x7F062590u: goto label_7F062590;
    case 0x7F062594u: goto label_7F062594;
    case 0x7F062598u: goto label_7F062598;
    case 0x7F06259Cu: goto label_7F06259C;
    case 0x7F0625A0u: goto label_7F0625A0;
    case 0x7F0625A4u: goto label_7F0625A4;
    case 0x7F0625A8u: goto label_7F0625A8;
    case 0x7F0625ACu: goto label_7F0625AC;
    case 0x7F0625B0u: goto label_7F0625B0;
    case 0x7F0625B4u: goto label_7F0625B4;
    case 0x7F0625B8u: goto label_7F0625B8;
    case 0x7F0625BCu: goto label_7F0625BC;
    case 0x7F0625C0u: goto label_7F0625C0;
    case 0x7F0625C4u: goto label_7F0625C4;
    case 0x7F0625C8u: goto label_7F0625C8;
    case 0x7F0625CCu: goto label_7F0625CC;
    case 0x7F0625D0u: goto label_7F0625D0;
    case 0x7F0625D4u: goto label_7F0625D4;
    case 0x7F0625D8u: goto label_7F0625D8;
    case 0x7F0625DCu: goto label_7F0625DC;
    case 0x7F0625E0u: goto label_7F0625E0;
    case 0x7F0625E4u: goto label_7F0625E4;
    case 0x7F0625E8u: goto label_7F0625E8;
    case 0x7F0625ECu: goto label_7F0625EC;
    case 0x7F0625F0u: goto label_7F0625F0;
    case 0x7F0625F4u: goto label_7F0625F4;
    case 0x7F0625F8u: goto label_7F0625F8;
    case 0x7F0625FCu: goto label_7F0625FC;
    case 0x7F062600u: goto label_7F062600;
    case 0x7F062604u: goto label_7F062604;
    case 0x7F062608u: goto label_7F062608;
    case 0x7F06260Cu: goto label_7F06260C;
    case 0x7F062610u: goto label_7F062610;
    case 0x7F062614u: goto label_7F062614;
    case 0x7F062618u: goto label_7F062618;
    case 0x7F06261Cu: goto label_7F06261C;
    case 0x7F062620u: goto label_7F062620;
    case 0x7F062624u: goto label_7F062624;
    case 0x7F062628u: goto label_7F062628;
    case 0x7F06262Cu: goto label_7F06262C;
    case 0x7F062630u: goto label_7F062630;
    case 0x7F062634u: goto label_7F062634;
    case 0x7F062638u: goto label_7F062638;
    case 0x7F06263Cu: goto label_7F06263C;
    case 0x7F062640u: goto label_7F062640;
    case 0x7F062644u: goto label_7F062644;
    case 0x7F062648u: goto label_7F062648;
    case 0x7F06264Cu: goto label_7F06264C;
    case 0x7F062650u: goto label_7F062650;
    case 0x7F062654u: goto label_7F062654;
    case 0x7F062658u: goto label_7F062658;
    case 0x7F06265Cu: goto label_7F06265C;
    case 0x7F062660u: goto label_7F062660;
    case 0x7F062664u: goto label_7F062664;
    case 0x7F062668u: goto label_7F062668;
    case 0x7F06266Cu: goto label_7F06266C;
    case 0x7F062670u: goto label_7F062670;
    case 0x7F062674u: goto label_7F062674;
    case 0x7F062678u: goto label_7F062678;
    case 0x7F06267Cu: goto label_7F06267C;
    case 0x7F062680u: goto label_7F062680;
    case 0x7F062684u: goto label_7F062684;
    case 0x7F062688u: goto label_7F062688;
    case 0x7F06268Cu: goto label_7F06268C;
    case 0x7F062690u: goto label_7F062690;
    case 0x7F062694u: goto label_7F062694;
    case 0x7F062698u: goto label_7F062698;
    case 0x7F06269Cu: goto label_7F06269C;
    case 0x7F0626A0u: goto label_7F0626A0;
    case 0x7F0626A4u: goto label_7F0626A4;
    case 0x7F0626A8u: goto label_7F0626A8;
    case 0x7F0626ACu: goto label_7F0626AC;
    case 0x7F0626B0u: goto label_7F0626B0;
    case 0x7F0626B4u: goto label_7F0626B4;
    case 0x7F0626B8u: goto label_7F0626B8;
    case 0x7F0626BCu: goto label_7F0626BC;
    case 0x7F0626C0u: goto label_7F0626C0;
    case 0x7F0626C4u: goto label_7F0626C4;
    case 0x7F0626C8u: goto label_7F0626C8;
    case 0x7F0626CCu: goto label_7F0626CC;
    case 0x7F0626D0u: goto label_7F0626D0;
    case 0x7F0626D4u: goto label_7F0626D4;
    case 0x7F0626D8u: goto label_7F0626D8;
    case 0x7F0626DCu: goto label_7F0626DC;
    case 0x7F0626E0u: goto label_7F0626E0;
    case 0x7F0626E4u: goto label_7F0626E4;
    case 0x7F0626E8u: goto label_7F0626E8;
    case 0x7F0626ECu: goto label_7F0626EC;
    case 0x7F0626F0u: goto label_7F0626F0;
    case 0x7F0626F4u: goto label_7F0626F4;
    case 0x7F0626F8u: goto label_7F0626F8;
    case 0x7F0626FCu: goto label_7F0626FC;
    case 0x7F062700u: goto label_7F062700;
    case 0x7F062704u: goto label_7F062704;
    case 0x7F062708u: goto label_7F062708;
    case 0x7F06270Cu: goto label_7F06270C;
    case 0x7F062710u: goto label_7F062710;
    case 0x7F062714u: goto label_7F062714;
    case 0x7F062718u: goto label_7F062718;
    case 0x7F06271Cu: goto label_7F06271C;
    case 0x7F062720u: goto label_7F062720;
    case 0x7F062724u: goto label_7F062724;
    case 0x7F062728u: goto label_7F062728;
    case 0x7F06272Cu: goto label_7F06272C;
    case 0x7F062730u: goto label_7F062730;
    case 0x7F062734u: goto label_7F062734;
    case 0x7F062738u: goto label_7F062738;
    case 0x7F06273Cu: goto label_7F06273C;
    case 0x7F062740u: goto label_7F062740;
    case 0x7F062744u: goto label_7F062744;
    case 0x7F062748u: goto label_7F062748;
    case 0x7F06274Cu: goto label_7F06274C;
    case 0x7F062750u: goto label_7F062750;
    case 0x7F062754u: goto label_7F062754;
    case 0x7F062758u: goto label_7F062758;
    case 0x7F06275Cu: goto label_7F06275C;
    case 0x7F062760u: goto label_7F062760;
    case 0x7F062764u: goto label_7F062764;
    case 0x7F062768u: goto label_7F062768;
    case 0x7F06276Cu: goto label_7F06276C;
    case 0x7F062770u: goto label_7F062770;
    case 0x7F062774u: goto label_7F062774;
    case 0x7F062778u: goto label_7F062778;
    case 0x7F06277Cu: goto label_7F06277C;
    case 0x7F062780u: goto label_7F062780;
    case 0x7F062784u: goto label_7F062784;
    case 0x7F062788u: goto label_7F062788;
    case 0x7F06278Cu: goto label_7F06278C;
    case 0x7F062790u: goto label_7F062790;
    case 0x7F062794u: goto label_7F062794;
    case 0x7F062798u: goto label_7F062798;
    case 0x7F06279Cu: goto label_7F06279C;
    case 0x7F0627A0u: goto label_7F0627A0;
    case 0x7F0627A4u: goto label_7F0627A4;
    case 0x7F0627A8u: goto label_7F0627A8;
    case 0x7F0627ACu: goto label_7F0627AC;
    case 0x7F0627B0u: goto label_7F0627B0;
    case 0x7F0627B4u: goto label_7F0627B4;
    case 0x7F0627B8u: goto label_7F0627B8;
    case 0x7F0627BCu: goto label_7F0627BC;
    case 0x7F0627C0u: goto label_7F0627C0;
    case 0x7F0627C4u: goto label_7F0627C4;
    case 0x7F0627C8u: goto label_7F0627C8;
    case 0x7F0627CCu: goto label_7F0627CC;
    case 0x7F0627D0u: goto label_7F0627D0;
    case 0x7F0627D4u: goto label_7F0627D4;
    case 0x7F0627D8u: goto label_7F0627D8;
    case 0x7F0627DCu: goto label_7F0627DC;
    case 0x7F0627E0u: goto label_7F0627E0;
    case 0x7F0627E4u: goto label_7F0627E4;
    case 0x7F0627E8u: goto label_7F0627E8;
    case 0x7F0627ECu: goto label_7F0627EC;
    case 0x7F0627F0u: goto label_7F0627F0;
    case 0x7F0627F4u: goto label_7F0627F4;
    case 0x7F0627F8u: goto label_7F0627F8;
    case 0x7F0627FCu: goto label_7F0627FC;
    case 0x7F062800u: goto label_7F062800;
    case 0x7F062804u: goto label_7F062804;
    case 0x7F062808u: goto label_7F062808;
    case 0x7F06280Cu: goto label_7F06280C;
    case 0x7F062810u: goto label_7F062810;
    case 0x7F062814u: goto label_7F062814;
    case 0x7F062818u: goto label_7F062818;
    case 0x7F06281Cu: goto label_7F06281C;
    case 0x7F062820u: goto label_7F062820;
    case 0x7F062824u: goto label_7F062824;
    case 0x7F062828u: goto label_7F062828;
    case 0x7F06282Cu: goto label_7F06282C;
    case 0x7F062830u: goto label_7F062830;
    case 0x7F062834u: goto label_7F062834;
    case 0x7F062838u: goto label_7F062838;
    case 0x7F06283Cu: goto label_7F06283C;
    case 0x7F062840u: goto label_7F062840;
    case 0x7F062844u: goto label_7F062844;
    case 0x7F062848u: goto label_7F062848;
    case 0x7F06284Cu: goto label_7F06284C;
    case 0x7F062850u: goto label_7F062850;
    case 0x7F062854u: goto label_7F062854;
    case 0x7F062858u: goto label_7F062858;
    case 0x7F06285Cu: goto label_7F06285C;
    case 0x7F062860u: goto label_7F062860;
    case 0x7F062864u: goto label_7F062864;
    case 0x7F062868u: goto label_7F062868;
    case 0x7F06286Cu: goto label_7F06286C;
    case 0x7F062870u: goto label_7F062870;
    case 0x7F062874u: goto label_7F062874;
    case 0x7F062878u: goto label_7F062878;
    case 0x7F06287Cu: goto label_7F06287C;
    case 0x7F062880u: goto label_7F062880;
    case 0x7F062884u: goto label_7F062884;
    case 0x7F062888u: goto label_7F062888;
    case 0x7F06288Cu: goto label_7F06288C;
    case 0x7F062890u: goto label_7F062890;
    case 0x7F062894u: goto label_7F062894;
    case 0x7F062898u: goto label_7F062898;
    case 0x7F06289Cu: goto label_7F06289C;
    case 0x7F0628A0u: goto label_7F0628A0;
    case 0x7F0628A4u: goto label_7F0628A4;
    case 0x7F0628A8u: goto label_7F0628A8;
    case 0x7F0628ACu: goto label_7F0628AC;
    case 0x7F0628B0u: goto label_7F0628B0;
    case 0x7F0628B4u: goto label_7F0628B4;
    case 0x7F0628B8u: goto label_7F0628B8;
    case 0x7F0628BCu: goto label_7F0628BC;
    case 0x7F0628C0u: goto label_7F0628C0;
    case 0x7F0628C4u: goto label_7F0628C4;
    case 0x7F0628C8u: goto label_7F0628C8;
    case 0x7F0628CCu: goto label_7F0628CC;
    case 0x7F0628D0u: goto label_7F0628D0;
    case 0x7F0628D4u: goto label_7F0628D4;
    case 0x7F0628D8u: goto label_7F0628D8;
    case 0x7F0628DCu: goto label_7F0628DC;
    case 0x7F0628E0u: goto label_7F0628E0;
    case 0x7F0628E4u: goto label_7F0628E4;
    case 0x7F0628E8u: goto label_7F0628E8;
    case 0x7F0628ECu: goto label_7F0628EC;
    case 0x7F0628F0u: goto label_7F0628F0;
    case 0x7F0628F4u: goto label_7F0628F4;
    case 0x7F0628F8u: goto label_7F0628F8;
    case 0x7F0628FCu: goto label_7F0628FC;
    case 0x7F062900u: goto label_7F062900;
    case 0x7F062904u: goto label_7F062904;
    case 0x7F062908u: goto label_7F062908;
    case 0x7F06290Cu: goto label_7F06290C;
    case 0x7F062910u: goto label_7F062910;
    case 0x7F062914u: goto label_7F062914;
    case 0x7F062918u: goto label_7F062918;
    case 0x7F06291Cu: goto label_7F06291C;
    case 0x7F062920u: goto label_7F062920;
    case 0x7F062924u: goto label_7F062924;
    case 0x7F062928u: goto label_7F062928;
    case 0x7F06292Cu: goto label_7F06292C;
    case 0x7F062930u: goto label_7F062930;
    case 0x7F062934u: goto label_7F062934;
    case 0x7F062938u: goto label_7F062938;
    case 0x7F06293Cu: goto label_7F06293C;
    case 0x7F062940u: goto label_7F062940;
    case 0x7F062944u: goto label_7F062944;
    case 0x7F062948u: goto label_7F062948;
    case 0x7F06294Cu: goto label_7F06294C;
    case 0x7F062950u: goto label_7F062950;
    case 0x7F062954u: goto label_7F062954;
    case 0x7F062958u: goto label_7F062958;
    case 0x7F06295Cu: goto label_7F06295C;
    case 0x7F062960u: goto label_7F062960;
    case 0x7F062964u: goto label_7F062964;
    case 0x7F062968u: goto label_7F062968;
    case 0x7F06296Cu: goto label_7F06296C;
    case 0x7F062970u: goto label_7F062970;
    case 0x7F062974u: goto label_7F062974;
    case 0x7F062978u: goto label_7F062978;
    case 0x7F06297Cu: goto label_7F06297C;
    case 0x7F062980u: goto label_7F062980;
    case 0x7F062984u: goto label_7F062984;
    case 0x7F062988u: goto label_7F062988;
    case 0x7F06298Cu: goto label_7F06298C;
    case 0x7F062990u: goto label_7F062990;
    case 0x7F062994u: goto label_7F062994;
    case 0x7F062998u: goto label_7F062998;
    case 0x7F06299Cu: goto label_7F06299C;
    case 0x7F0629A0u: goto label_7F0629A0;
    case 0x7F0629A4u: goto label_7F0629A4;
    case 0x7F0629A8u: goto label_7F0629A8;
    case 0x7F0629ACu: goto label_7F0629AC;
    case 0x7F0629B0u: goto label_7F0629B0;
    case 0x7F0629B4u: goto label_7F0629B4;
    case 0x7F0629B8u: goto label_7F0629B8;
    case 0x7F0629BCu: goto label_7F0629BC;
    case 0x7F0629C0u: goto label_7F0629C0;
    case 0x7F0629C4u: goto label_7F0629C4;
    case 0x7F0629C8u: goto label_7F0629C8;
    case 0x7F0629CCu: goto label_7F0629CC;
    case 0x7F0629D0u: goto label_7F0629D0;
    case 0x7F0629D4u: goto label_7F0629D4;
    case 0x7F0629D8u: goto label_7F0629D8;
    case 0x7F0629DCu: goto label_7F0629DC;
    case 0x7F0629E0u: goto label_7F0629E0;
    case 0x7F0629E4u: goto label_7F0629E4;
    case 0x7F0629E8u: goto label_7F0629E8;
    case 0x7F0629ECu: goto label_7F0629EC;
    case 0x7F0629F0u: goto label_7F0629F0;
    case 0x7F0629F4u: goto label_7F0629F4;
    case 0x7F0629F8u: goto label_7F0629F8;
    case 0x7F0629FCu: goto label_7F0629FC;
    case 0x7F062A00u: goto label_7F062A00;
    case 0x7F062A04u: goto label_7F062A04;
    case 0x7F062A08u: goto label_7F062A08;
    case 0x7F062A0Cu: goto label_7F062A0C;
    case 0x7F062A10u: goto label_7F062A10;
    case 0x7F062A14u: goto label_7F062A14;
    case 0x7F062A18u: goto label_7F062A18;
    case 0x7F062A1Cu: goto label_7F062A1C;
    case 0x7F062A20u: goto label_7F062A20;
    case 0x7F062A24u: goto label_7F062A24;
    case 0x7F062A28u: goto label_7F062A28;
    case 0x7F062A2Cu: goto label_7F062A2C;
    case 0x7F062A30u: goto label_7F062A30;
    case 0x7F062A34u: goto label_7F062A34;
    case 0x7F062A38u: goto label_7F062A38;
    case 0x7F062A3Cu: goto label_7F062A3C;
    case 0x7F062A40u: goto label_7F062A40;
    case 0x7F062A44u: goto label_7F062A44;
    case 0x7F062A48u: goto label_7F062A48;
    case 0x7F062A4Cu: goto label_7F062A4C;
    case 0x7F062A50u: goto label_7F062A50;
    case 0x7F062A54u: goto label_7F062A54;
    case 0x7F062A58u: goto label_7F062A58;
    case 0x7F062A5Cu: goto label_7F062A5C;
    case 0x7F062A60u: goto label_7F062A60;
    case 0x7F062A64u: goto label_7F062A64;
    case 0x7F062A68u: goto label_7F062A68;
    case 0x7F062A6Cu: goto label_7F062A6C;
    case 0x7F062A70u: goto label_7F062A70;
    case 0x7F062A74u: goto label_7F062A74;
    case 0x7F062A78u: goto label_7F062A78;
    case 0x7F062A7Cu: goto label_7F062A7C;
    case 0x7F062A80u: goto label_7F062A80;
    case 0x7F062A84u: goto label_7F062A84;
    case 0x7F062A88u: goto label_7F062A88;
    case 0x7F062A8Cu: goto label_7F062A8C;
    case 0x7F062A90u: goto label_7F062A90;
    case 0x7F062A94u: goto label_7F062A94;
    case 0x7F062A98u: goto label_7F062A98;
    case 0x7F062A9Cu: goto label_7F062A9C;
    case 0x7F062AA0u: goto label_7F062AA0;
    case 0x7F062AA4u: goto label_7F062AA4;
    case 0x7F062AA8u: goto label_7F062AA8;
    case 0x7F062AACu: goto label_7F062AAC;
    case 0x7F062AB0u: goto label_7F062AB0;
    case 0x7F062AB4u: goto label_7F062AB4;
    case 0x7F062AB8u: goto label_7F062AB8;
    case 0x7F062ABCu: goto label_7F062ABC;
    case 0x7F062AC0u: goto label_7F062AC0;
    case 0x7F062AC4u: goto label_7F062AC4;
    case 0x7F062AC8u: goto label_7F062AC8;
    case 0x7F062ACCu: goto label_7F062ACC;
    case 0x7F062AD0u: goto label_7F062AD0;
    case 0x7F062AD4u: goto label_7F062AD4;
    case 0x7F062AD8u: goto label_7F062AD8;
    case 0x7F062ADCu: goto label_7F062ADC;
    case 0x7F062AE0u: goto label_7F062AE0;
    case 0x7F062AE4u: goto label_7F062AE4;
    case 0x7F062AE8u: goto label_7F062AE8;
    case 0x7F062AECu: goto label_7F062AEC;
    case 0x7F062AF0u: goto label_7F062AF0;
    case 0x7F062AF4u: goto label_7F062AF4;
    case 0x7F062AF8u: goto label_7F062AF8;
    case 0x7F062AFCu: goto label_7F062AFC;
    case 0x7F062B00u: goto label_7F062B00;
    case 0x7F062B04u: goto label_7F062B04;
    case 0x7F062B08u: goto label_7F062B08;
    case 0x7F062B0Cu: goto label_7F062B0C;
    case 0x7F062B10u: goto label_7F062B10;
    case 0x7F062B14u: goto label_7F062B14;
    case 0x7F062B18u: goto label_7F062B18;
    case 0x7F062B1Cu: goto label_7F062B1C;
    case 0x7F062B20u: goto label_7F062B20;
    case 0x7F062B24u: goto label_7F062B24;
    case 0x7F062B28u: goto label_7F062B28;
    case 0x7F062B2Cu: goto label_7F062B2C;
    case 0x7F062B30u: goto label_7F062B30;
    case 0x7F062B34u: goto label_7F062B34;
    case 0x7F062B38u: goto label_7F062B38;
    case 0x7F062B3Cu: goto label_7F062B3C;
    case 0x7F062B40u: goto label_7F062B40;
    case 0x7F062B44u: goto label_7F062B44;
    case 0x7F062B48u: goto label_7F062B48;
    case 0x7F062B4Cu: goto label_7F062B4C;
    case 0x7F062B50u: goto label_7F062B50;
    case 0x7F062B54u: goto label_7F062B54;
    case 0x7F062B58u: goto label_7F062B58;
    case 0x7F062B5Cu: goto label_7F062B5C;
    case 0x7F062B60u: goto label_7F062B60;
    case 0x7F062B64u: goto label_7F062B64;
    case 0x7F062B68u: goto label_7F062B68;
    case 0x7F062B6Cu: goto label_7F062B6C;
    case 0x7F062B70u: goto label_7F062B70;
    case 0x7F062B74u: goto label_7F062B74;
    case 0x7F062B78u: goto label_7F062B78;
    case 0x7F062B7Cu: goto label_7F062B7C;
    case 0x7F062B80u: goto label_7F062B80;
    case 0x7F062B84u: goto label_7F062B84;
    case 0x7F062B88u: goto label_7F062B88;
    case 0x7F062B8Cu: goto label_7F062B8C;
    case 0x7F062B90u: goto label_7F062B90;
    case 0x7F062B94u: goto label_7F062B94;
    case 0x7F062B98u: goto label_7F062B98;
    case 0x7F062B9Cu: goto label_7F062B9C;
    case 0x7F062BA0u: goto label_7F062BA0;
    case 0x7F062BA4u: goto label_7F062BA4;
    case 0x7F062BA8u: goto label_7F062BA8;
    case 0x7F062BACu: goto label_7F062BAC;
    case 0x7F062BB0u: goto label_7F062BB0;
    case 0x7F062BB4u: goto label_7F062BB4;
    case 0x7F062BB8u: goto label_7F062BB8;
    case 0x7F062BBCu: goto label_7F062BBC;
    case 0x7F062BC0u: goto label_7F062BC0;
    case 0x7F062BC4u: goto label_7F062BC4;
    case 0x7F062BC8u: goto label_7F062BC8;
    case 0x7F062BCCu: goto label_7F062BCC;
    case 0x7F062BD0u: goto label_7F062BD0;
    case 0x7F062BD4u: goto label_7F062BD4;
    case 0x7F062BD8u: goto label_7F062BD8;
    case 0x7F062BDCu: goto label_7F062BDC;
    case 0x7F062BE0u: goto label_7F062BE0;
    case 0x7F062BE4u: goto label_7F062BE4;
    case 0x7F062BE8u: goto label_7F062BE8;
    case 0x7F062BECu: goto label_7F062BEC;
    case 0x7F062BF0u: goto label_7F062BF0;
    case 0x7F062BF4u: goto label_7F062BF4;
    case 0x7F062BF8u: goto label_7F062BF8;
    case 0x7F062BFCu: goto label_7F062BFC;
    case 0x7F062C00u: goto label_7F062C00;
    case 0x7F062C04u: goto label_7F062C04;
    case 0x7F062C08u: goto label_7F062C08;
    case 0x7F062C0Cu: goto label_7F062C0C;
    case 0x7F062C10u: goto label_7F062C10;
    case 0x7F062C14u: goto label_7F062C14;
    case 0x7F062C18u: goto label_7F062C18;
    case 0x7F062C1Cu: goto label_7F062C1C;
    case 0x7F062C20u: goto label_7F062C20;
    case 0x7F062C24u: goto label_7F062C24;
    case 0x7F062C28u: goto label_7F062C28;
    case 0x7F062C2Cu: goto label_7F062C2C;
    case 0x7F062C30u: goto label_7F062C30;
    case 0x7F062C34u: goto label_7F062C34;
    case 0x7F062C38u: goto label_7F062C38;
    case 0x7F062C3Cu: goto label_7F062C3C;
    case 0x7F062C40u: goto label_7F062C40;
    case 0x7F062C44u: goto label_7F062C44;
    case 0x7F062C48u: goto label_7F062C48;
    case 0x7F062C4Cu: goto label_7F062C4C;
    case 0x7F062C50u: goto label_7F062C50;
    case 0x7F062C54u: goto label_7F062C54;
    case 0x7F062C58u: goto label_7F062C58;
    case 0x7F062C5Cu: goto label_7F062C5C;
    case 0x7F062C60u: goto label_7F062C60;
    case 0x7F062C64u: goto label_7F062C64;
    case 0x7F062C68u: goto label_7F062C68;
    case 0x7F062C6Cu: goto label_7F062C6C;
    case 0x7F062C70u: goto label_7F062C70;
    case 0x7F062C74u: goto label_7F062C74;
    case 0x7F062C78u: goto label_7F062C78;
    case 0x7F062C7Cu: goto label_7F062C7C;
    case 0x7F062C80u: goto label_7F062C80;
    case 0x7F062C84u: goto label_7F062C84;
    case 0x7F062C88u: goto label_7F062C88;
    case 0x7F062C8Cu: goto label_7F062C8C;
    case 0x7F062C90u: goto label_7F062C90;
    case 0x7F062C94u: goto label_7F062C94;
    case 0x7F062C98u: goto label_7F062C98;
    case 0x7F062C9Cu: goto label_7F062C9C;
    case 0x7F062CA0u: goto label_7F062CA0;
    case 0x7F062CA4u: goto label_7F062CA4;
    case 0x7F062CA8u: goto label_7F062CA8;
    case 0x7F062CACu: goto label_7F062CAC;
    case 0x7F062CB0u: goto label_7F062CB0;
    case 0x7F062CB4u: goto label_7F062CB4;
    case 0x7F062CB8u: goto label_7F062CB8;
    case 0x7F062CBCu: goto label_7F062CBC;
    case 0x7F062CC0u: goto label_7F062CC0;
    case 0x7F062CC4u: goto label_7F062CC4;
    case 0x7F062CC8u: goto label_7F062CC8;
    case 0x7F062CCCu: goto label_7F062CCC;
    case 0x7F062CD0u: goto label_7F062CD0;
    case 0x7F062CD4u: goto label_7F062CD4;
    case 0x7F062CD8u: goto label_7F062CD8;
    case 0x7F062CDCu: goto label_7F062CDC;
    case 0x7F062CE0u: goto label_7F062CE0;
    case 0x7F062CE4u: goto label_7F062CE4;
    case 0x7F062CE8u: goto label_7F062CE8;
    case 0x7F062CECu: goto label_7F062CEC;
    case 0x7F062CF0u: goto label_7F062CF0;
    case 0x7F062CF4u: goto label_7F062CF4;
    case 0x7F062CF8u: goto label_7F062CF8;
    case 0x7F062CFCu: goto label_7F062CFC;
    case 0x7F062D00u: goto label_7F062D00;
    case 0x7F062D04u: goto label_7F062D04;
    case 0x7F062D08u: goto label_7F062D08;
    case 0x7F062D0Cu: goto label_7F062D0C;
    case 0x7F062D10u: goto label_7F062D10;
    case 0x7F062D14u: goto label_7F062D14;
    case 0x7F062D18u: goto label_7F062D18;
    case 0x7F062D1Cu: goto label_7F062D1C;
    case 0x7F062D20u: goto label_7F062D20;
    case 0x7F062D24u: goto label_7F062D24;
    case 0x7F062D28u: goto label_7F062D28;
    case 0x7F062D2Cu: goto label_7F062D2C;
    case 0x7F062D30u: goto label_7F062D30;
    case 0x7F062D34u: goto label_7F062D34;
    case 0x7F062D38u: goto label_7F062D38;
    case 0x7F062D3Cu: goto label_7F062D3C;
    case 0x7F062D40u: goto label_7F062D40;
    case 0x7F062D44u: goto label_7F062D44;
    case 0x7F062D48u: goto label_7F062D48;
    case 0x7F062D4Cu: goto label_7F062D4C;
    case 0x7F062D50u: goto label_7F062D50;
    case 0x7F062D54u: goto label_7F062D54;
    case 0x7F062D58u: goto label_7F062D58;
    case 0x7F062D5Cu: goto label_7F062D5C;
    case 0x7F062D60u: goto label_7F062D60;
    case 0x7F062D64u: goto label_7F062D64;
    case 0x7F062D68u: goto label_7F062D68;
    case 0x7F062D6Cu: goto label_7F062D6C;
    case 0x7F062D70u: goto label_7F062D70;
    case 0x7F062D74u: goto label_7F062D74;
    case 0x7F062D78u: goto label_7F062D78;
    case 0x7F062D7Cu: goto label_7F062D7C;
    case 0x7F062D80u: goto label_7F062D80;
    case 0x7F062D84u: goto label_7F062D84;
    case 0x7F062D88u: goto label_7F062D88;
    case 0x7F062D8Cu: goto label_7F062D8C;
    case 0x7F062D90u: goto label_7F062D90;
    case 0x7F062D94u: goto label_7F062D94;
    case 0x7F062D98u: goto label_7F062D98;
    case 0x7F062D9Cu: goto label_7F062D9C;
    case 0x7F062DA0u: goto label_7F062DA0;
    case 0x7F062DA4u: goto label_7F062DA4;
    case 0x7F062DA8u: goto label_7F062DA8;
    case 0x7F062DACu: goto label_7F062DAC;
    case 0x7F062DB0u: goto label_7F062DB0;
    case 0x7F062DB4u: goto label_7F062DB4;
    case 0x7F062DB8u: goto label_7F062DB8;
    case 0x7F062DBCu: goto label_7F062DBC;
    case 0x7F062DC0u: goto label_7F062DC0;
    case 0x7F062DC4u: goto label_7F062DC4;
    case 0x7F062DC8u: goto label_7F062DC8;
    case 0x7F062DCCu: goto label_7F062DCC;
    case 0x7F062DD0u: goto label_7F062DD0;
    case 0x7F062DD4u: goto label_7F062DD4;
    case 0x7F062DD8u: goto label_7F062DD8;
    case 0x7F062DDCu: goto label_7F062DDC;
    case 0x7F062DE0u: goto label_7F062DE0;
    case 0x7F062DE4u: goto label_7F062DE4;
    case 0x7F062DE8u: goto label_7F062DE8;
    case 0x7F062DECu: goto label_7F062DEC;
    case 0x7F062DF0u: goto label_7F062DF0;
    case 0x7F062DF4u: goto label_7F062DF4;
    case 0x7F062DF8u: goto label_7F062DF8;
    case 0x7F062DFCu: goto label_7F062DFC;
    case 0x7F062E00u: goto label_7F062E00;
    case 0x7F062E04u: goto label_7F062E04;
    case 0x7F062E08u: goto label_7F062E08;
    case 0x7F062E0Cu: goto label_7F062E0C;
    case 0x7F062E10u: goto label_7F062E10;
    case 0x7F062E14u: goto label_7F062E14;
    case 0x7F062E18u: goto label_7F062E18;
    case 0x7F062E1Cu: goto label_7F062E1C;
    case 0x7F062E20u: goto label_7F062E20;
    case 0x7F062E24u: goto label_7F062E24;
    case 0x7F062E28u: goto label_7F062E28;
    case 0x7F062E2Cu: goto label_7F062E2C;
    case 0x7F062E30u: goto label_7F062E30;
    case 0x7F062E34u: goto label_7F062E34;
    case 0x7F062E38u: goto label_7F062E38;
    case 0x7F062E3Cu: goto label_7F062E3C;
    case 0x7F062E40u: goto label_7F062E40;
    case 0x7F062E44u: goto label_7F062E44;
    case 0x7F062E48u: goto label_7F062E48;
    case 0x7F062E4Cu: goto label_7F062E4C;
    case 0x7F062E50u: goto label_7F062E50;
    case 0x7F062E54u: goto label_7F062E54;
    case 0x7F062E58u: goto label_7F062E58;
    case 0x7F062E5Cu: goto label_7F062E5C;
    case 0x7F062E60u: goto label_7F062E60;
    case 0x7F062E64u: goto label_7F062E64;
    case 0x7F062E68u: goto label_7F062E68;
    case 0x7F062E6Cu: goto label_7F062E6C;
    case 0x7F062E70u: goto label_7F062E70;
    case 0x7F062E74u: goto label_7F062E74;
    case 0x7F062E78u: goto label_7F062E78;
    case 0x7F062E7Cu: goto label_7F062E7C;
    case 0x7F062E80u: goto label_7F062E80;
    case 0x7F062E84u: goto label_7F062E84;
    case 0x7F062E88u: goto label_7F062E88;
    case 0x7F062E8Cu: goto label_7F062E8C;
    case 0x7F062E90u: goto label_7F062E90;
    case 0x7F062E94u: goto label_7F062E94;
    case 0x7F062E98u: goto label_7F062E98;
    case 0x7F062E9Cu: goto label_7F062E9C;
    case 0x7F062EA0u: goto label_7F062EA0;
    case 0x7F062EA4u: goto label_7F062EA4;
    case 0x7F062EA8u: goto label_7F062EA8;
    case 0x7F062EACu: goto label_7F062EAC;
    case 0x7F062EB0u: goto label_7F062EB0;
    case 0x7F062EB4u: goto label_7F062EB4;
    case 0x7F062EB8u: goto label_7F062EB8;
    case 0x7F062EBCu: goto label_7F062EBC;
    case 0x7F062EC0u: goto label_7F062EC0;
    case 0x7F062EC4u: goto label_7F062EC4;
    case 0x7F062EC8u: goto label_7F062EC8;
    case 0x7F062ECCu: goto label_7F062ECC;
    case 0x7F062ED0u: goto label_7F062ED0;
    case 0x7F062ED4u: goto label_7F062ED4;
    case 0x7F062ED8u: goto label_7F062ED8;
    case 0x7F062EDCu: goto label_7F062EDC;
    case 0x7F062EE0u: goto label_7F062EE0;
    case 0x7F062EE4u: goto label_7F062EE4;
    case 0x7F062EE8u: goto label_7F062EE8;
    case 0x7F062EECu: goto label_7F062EEC;
    case 0x7F062EF0u: goto label_7F062EF0;
    case 0x7F062EF4u: goto label_7F062EF4;
    case 0x7F062EF8u: goto label_7F062EF8;
    case 0x7F062EFCu: goto label_7F062EFC;
    case 0x7F062F00u: goto label_7F062F00;
    case 0x7F062F04u: goto label_7F062F04;
    case 0x7F062F08u: goto label_7F062F08;
    case 0x7F062F0Cu: goto label_7F062F0C;
    case 0x7F062F10u: goto label_7F062F10;
    case 0x7F062F14u: goto label_7F062F14;
    case 0x7F062F18u: goto label_7F062F18;
    case 0x7F062F1Cu: goto label_7F062F1C;
    case 0x7F062F20u: goto label_7F062F20;
    case 0x7F062F24u: goto label_7F062F24;
    case 0x7F062F28u: goto label_7F062F28;
    case 0x7F062F2Cu: goto label_7F062F2C;
    case 0x7F062F30u: goto label_7F062F30;
    case 0x7F062F34u: goto label_7F062F34;
    case 0x7F062F38u: goto label_7F062F38;
    case 0x7F062F3Cu: goto label_7F062F3C;
    case 0x7F062F40u: goto label_7F062F40;
    case 0x7F062F44u: goto label_7F062F44;
    case 0x7F062F48u: goto label_7F062F48;
    case 0x7F062F4Cu: goto label_7F062F4C;
    case 0x7F062F50u: goto label_7F062F50;
    case 0x7F062F54u: goto label_7F062F54;
    case 0x7F062F58u: goto label_7F062F58;
    case 0x7F062F5Cu: goto label_7F062F5C;
    case 0x7F062F60u: goto label_7F062F60;
    case 0x7F062F64u: goto label_7F062F64;
    case 0x7F062F68u: goto label_7F062F68;
    case 0x7F062F6Cu: goto label_7F062F6C;
    case 0x7F062F70u: goto label_7F062F70;
    case 0x7F062F74u: goto label_7F062F74;
    case 0x7F062F78u: goto label_7F062F78;
    case 0x7F062F7Cu: goto label_7F062F7C;
    case 0x7F062F80u: goto label_7F062F80;
    case 0x7F062F84u: goto label_7F062F84;
    case 0x7F062F88u: goto label_7F062F88;
    case 0x7F062F8Cu: goto label_7F062F8C;
    case 0x7F062F90u: goto label_7F062F90;
    case 0x7F062F94u: goto label_7F062F94;
    case 0x7F062F98u: goto label_7F062F98;
    case 0x7F062F9Cu: goto label_7F062F9C;
    case 0x7F062FA0u: goto label_7F062FA0;
    case 0x7F062FA4u: goto label_7F062FA4;
    case 0x7F062FA8u: goto label_7F062FA8;
    case 0x7F062FACu: goto label_7F062FAC;
    case 0x7F062FB0u: goto label_7F062FB0;
    case 0x7F062FB4u: goto label_7F062FB4;
    case 0x7F062FB8u: goto label_7F062FB8;
    case 0x7F062FBCu: goto label_7F062FBC;
    case 0x7F062FC0u: goto label_7F062FC0;
    case 0x7F062FC4u: goto label_7F062FC4;
    case 0x7F062FC8u: goto label_7F062FC8;
    case 0x7F062FCCu: goto label_7F062FCC;
    case 0x7F062FD0u: goto label_7F062FD0;
    case 0x7F062FD4u: goto label_7F062FD4;
    case 0x7F062FD8u: goto label_7F062FD8;
    case 0x7F062FDCu: goto label_7F062FDC;
    case 0x7F062FE0u: goto label_7F062FE0;
    case 0x7F062FE4u: goto label_7F062FE4;
    case 0x7F062FE8u: goto label_7F062FE8;
    case 0x7F062FECu: goto label_7F062FEC;
    case 0x7F062FF0u: goto label_7F062FF0;
    case 0x7F062FF4u: goto label_7F062FF4;
    case 0x7F062FF8u: goto label_7F062FF8;
    case 0x7F062FFCu: goto label_7F062FFC;
    case 0x7F063000u: goto label_7F063000;
    case 0x7F063004u: goto label_7F063004;
    case 0x7F063008u: goto label_7F063008;
    case 0x7F06300Cu: goto label_7F06300C;
    case 0x7F063010u: goto label_7F063010;
    case 0x7F063014u: goto label_7F063014;
    case 0x7F063018u: goto label_7F063018;
    case 0x7F06301Cu: goto label_7F06301C;
    case 0x7F063020u: goto label_7F063020;
    case 0x7F063024u: goto label_7F063024;
    case 0x7F063028u: goto label_7F063028;
    case 0x7F06302Cu: goto label_7F06302C;
    case 0x7F063030u: goto label_7F063030;
    case 0x7F063034u: goto label_7F063034;
    case 0x7F063038u: goto label_7F063038;
    case 0x7F06303Cu: goto label_7F06303C;
    case 0x7F063040u: goto label_7F063040;
    case 0x7F063044u: goto label_7F063044;
    case 0x7F063048u: goto label_7F063048;
    case 0x7F06304Cu: goto label_7F06304C;
    case 0x7F063050u: goto label_7F063050;
    case 0x7F063054u: goto label_7F063054;
    case 0x7F063058u: goto label_7F063058;
    case 0x7F06305Cu: goto label_7F06305C;
    case 0x7F063060u: goto label_7F063060;
    case 0x7F063064u: goto label_7F063064;
    case 0x7F063068u: goto label_7F063068;
    case 0x7F06306Cu: goto label_7F06306C;
    case 0x7F063070u: goto label_7F063070;
    case 0x7F063074u: goto label_7F063074;
    case 0x7F063078u: goto label_7F063078;
    case 0x7F06307Cu: goto label_7F06307C;
    case 0x7F063080u: goto label_7F063080;
    case 0x7F063084u: goto label_7F063084;
    case 0x7F063088u: goto label_7F063088;
    case 0x7F06308Cu: goto label_7F06308C;
    case 0x7F063090u: goto label_7F063090;
    case 0x7F063094u: goto label_7F063094;
    case 0x7F063098u: goto label_7F063098;
    case 0x7F06309Cu: goto label_7F06309C;
    case 0x7F0630A0u: goto label_7F0630A0;
    case 0x7F0630A4u: goto label_7F0630A4;
    case 0x7F0630A8u: goto label_7F0630A8;
    case 0x7F0630ACu: goto label_7F0630AC;
    case 0x7F0630B0u: goto label_7F0630B0;
    case 0x7F0630B4u: goto label_7F0630B4;
    case 0x7F0630B8u: goto label_7F0630B8;
    case 0x7F0630BCu: goto label_7F0630BC;
    case 0x7F0630C0u: goto label_7F0630C0;
    case 0x7F0630C4u: goto label_7F0630C4;
    case 0x7F0630C8u: goto label_7F0630C8;
    case 0x7F0630CCu: goto label_7F0630CC;
    case 0x7F0630D0u: goto label_7F0630D0;
    case 0x7F0630D4u: goto label_7F0630D4;
    case 0x7F0630D8u: goto label_7F0630D8;
    case 0x7F0630DCu: goto label_7F0630DC;
    case 0x7F0630E0u: goto label_7F0630E0;
    case 0x7F0630E4u: goto label_7F0630E4;
    case 0x7F0630E8u: goto label_7F0630E8;
    case 0x7F0630ECu: goto label_7F0630EC;
    case 0x7F0630F0u: goto label_7F0630F0;
    case 0x7F0630F4u: goto label_7F0630F4;
    case 0x7F0630F8u: goto label_7F0630F8;
    case 0x7F0630FCu: goto label_7F0630FC;
    case 0x7F063100u: goto label_7F063100;
    case 0x7F063104u: goto label_7F063104;
    case 0x7F063108u: goto label_7F063108;
    case 0x7F06310Cu: goto label_7F06310C;
    case 0x7F063110u: goto label_7F063110;
    case 0x7F063114u: goto label_7F063114;
    case 0x7F063118u: goto label_7F063118;
    case 0x7F06311Cu: goto label_7F06311C;
    case 0x7F063120u: goto label_7F063120;
    case 0x7F063124u: goto label_7F063124;
    case 0x7F063128u: goto label_7F063128;
    case 0x7F06312Cu: goto label_7F06312C;
    case 0x7F063130u: goto label_7F063130;
    case 0x7F063134u: goto label_7F063134;
    case 0x7F063138u: goto label_7F063138;
    case 0x7F06313Cu: goto label_7F06313C;
    case 0x7F063140u: goto label_7F063140;
    case 0x7F063144u: goto label_7F063144;
    case 0x7F063148u: goto label_7F063148;
    case 0x7F06314Cu: goto label_7F06314C;
    case 0x7F063150u: goto label_7F063150;
    case 0x7F063154u: goto label_7F063154;
    case 0x7F063158u: goto label_7F063158;
    case 0x7F06315Cu: goto label_7F06315C;
    case 0x7F063160u: goto label_7F063160;
    case 0x7F063164u: goto label_7F063164;
    case 0x7F063168u: goto label_7F063168;
    case 0x7F06316Cu: goto label_7F06316C;
    case 0x7F063170u: goto label_7F063170;
    case 0x7F063174u: goto label_7F063174;
    case 0x7F063178u: goto label_7F063178;
    case 0x7F06317Cu: goto label_7F06317C;
    case 0x7F063180u: goto label_7F063180;
    case 0x7F063184u: goto label_7F063184;
    case 0x7F063188u: goto label_7F063188;
    case 0x7F06318Cu: goto label_7F06318C;
    case 0x7F063190u: goto label_7F063190;
    case 0x7F063194u: goto label_7F063194;
    case 0x7F063198u: goto label_7F063198;
    case 0x7F06319Cu: goto label_7F06319C;
    case 0x7F0631A0u: goto label_7F0631A0;
    case 0x7F0631A4u: goto label_7F0631A4;
    case 0x7F0631A8u: goto label_7F0631A8;
    case 0x7F0631ACu: goto label_7F0631AC;
    case 0x7F0631B0u: goto label_7F0631B0;
    case 0x7F0631B4u: goto label_7F0631B4;
    case 0x7F0631B8u: goto label_7F0631B8;
    case 0x7F0631BCu: goto label_7F0631BC;
    case 0x7F0631C0u: goto label_7F0631C0;
    case 0x7F0631C4u: goto label_7F0631C4;
    case 0x7F0631C8u: goto label_7F0631C8;
    case 0x7F0631CCu: goto label_7F0631CC;
    case 0x7F0631D0u: goto label_7F0631D0;
    case 0x7F0631D4u: goto label_7F0631D4;
    case 0x7F0631D8u: goto label_7F0631D8;
    case 0x7F0631DCu: goto label_7F0631DC;
    case 0x7F0631E0u: goto label_7F0631E0;
    case 0x7F0631E4u: goto label_7F0631E4;
    case 0x7F0631E8u: goto label_7F0631E8;
    case 0x7F0631ECu: goto label_7F0631EC;
    case 0x7F0631F0u: goto label_7F0631F0;
    case 0x7F0631F4u: goto label_7F0631F4;
    case 0x7F0631F8u: goto label_7F0631F8;
    case 0x7F0631FCu: goto label_7F0631FC;
    case 0x7F063200u: goto label_7F063200;
    case 0x7F063204u: goto label_7F063204;
    case 0x7F063208u: goto label_7F063208;
    case 0x7F06320Cu: goto label_7F06320C;
    case 0x7F063210u: goto label_7F063210;
    case 0x7F063214u: goto label_7F063214;
    case 0x7F063218u: goto label_7F063218;
    case 0x7F06321Cu: goto label_7F06321C;
    case 0x7F063220u: goto label_7F063220;
    case 0x7F063224u: goto label_7F063224;
    case 0x7F063228u: goto label_7F063228;
    case 0x7F06322Cu: goto label_7F06322C;
    case 0x7F063230u: goto label_7F063230;
    case 0x7F063234u: goto label_7F063234;
    case 0x7F063238u: goto label_7F063238;
    case 0x7F06323Cu: goto label_7F06323C;
    case 0x7F063240u: goto label_7F063240;
    case 0x7F063244u: goto label_7F063244;
    case 0x7F063248u: goto label_7F063248;
    case 0x7F06324Cu: goto label_7F06324C;
    case 0x7F063250u: goto label_7F063250;
    case 0x7F063254u: goto label_7F063254;
    case 0x7F063258u: goto label_7F063258;
    case 0x7F06325Cu: goto label_7F06325C;
    case 0x7F063260u: goto label_7F063260;
    case 0x7F063264u: goto label_7F063264;
    case 0x7F063268u: goto label_7F063268;
    case 0x7F06326Cu: goto label_7F06326C;
    case 0x7F063270u: goto label_7F063270;
    case 0x7F063274u: goto label_7F063274;
    case 0x7F063278u: goto label_7F063278;
    case 0x7F06327Cu: goto label_7F06327C;
    case 0x7F063280u: goto label_7F063280;
    case 0x7F063284u: goto label_7F063284;
    case 0x7F063288u: goto label_7F063288;
    case 0x7F06328Cu: goto label_7F06328C;
    case 0x7F063290u: goto label_7F063290;
    case 0x7F063294u: goto label_7F063294;
    case 0x7F063298u: goto label_7F063298;
    case 0x7F06329Cu: goto label_7F06329C;
    case 0x7F0632A0u: goto label_7F0632A0;
    case 0x7F0632A4u: goto label_7F0632A4;
    case 0x7F0632A8u: goto label_7F0632A8;
    case 0x7F0632ACu: goto label_7F0632AC;
    case 0x7F0632B0u: goto label_7F0632B0;
    case 0x7F0632B4u: goto label_7F0632B4;
    case 0x7F0632B8u: goto label_7F0632B8;
    case 0x7F0632BCu: goto label_7F0632BC;
    case 0x7F0632C0u: goto label_7F0632C0;
    case 0x7F0632C4u: goto label_7F0632C4;
    case 0x7F0632C8u: goto label_7F0632C8;
    case 0x7F0632CCu: goto label_7F0632CC;
    case 0x7F0632D0u: goto label_7F0632D0;
    case 0x7F0632D4u: goto label_7F0632D4;
    case 0x7F0632D8u: goto label_7F0632D8;
    case 0x7F0632DCu: goto label_7F0632DC;
    case 0x7F0632E0u: goto label_7F0632E0;
    case 0x7F0632E4u: goto label_7F0632E4;
    case 0x7F0632E8u: goto label_7F0632E8;
    case 0x7F0632ECu: goto label_7F0632EC;
    case 0x7F0632F0u: goto label_7F0632F0;
    case 0x7F0632F4u: goto label_7F0632F4;
    case 0x7F0632F8u: goto label_7F0632F8;
    case 0x7F0632FCu: goto label_7F0632FC;
    case 0x7F063300u: goto label_7F063300;
    case 0x7F063304u: goto label_7F063304;
    case 0x7F063308u: goto label_7F063308;
    case 0x7F06330Cu: goto label_7F06330C;
    case 0x7F063310u: goto label_7F063310;
    case 0x7F063314u: goto label_7F063314;
    case 0x7F063318u: goto label_7F063318;
    case 0x7F06331Cu: goto label_7F06331C;
    case 0x7F063320u: goto label_7F063320;
    case 0x7F063324u: goto label_7F063324;
    case 0x7F063328u: goto label_7F063328;
    case 0x7F06332Cu: goto label_7F06332C;
    case 0x7F063330u: goto label_7F063330;
    case 0x7F063334u: goto label_7F063334;
    case 0x7F063338u: goto label_7F063338;
    case 0x7F06333Cu: goto label_7F06333C;
    case 0x7F063340u: goto label_7F063340;
    case 0x7F063344u: goto label_7F063344;
    case 0x7F063348u: goto label_7F063348;
    case 0x7F06334Cu: goto label_7F06334C;
    case 0x7F063350u: goto label_7F063350;
    case 0x7F063354u: goto label_7F063354;
    case 0x7F063358u: goto label_7F063358;
    case 0x7F06335Cu: goto label_7F06335C;
    case 0x7F063360u: goto label_7F063360;
    case 0x7F063364u: goto label_7F063364;
    case 0x7F063368u: goto label_7F063368;
    case 0x7F06336Cu: goto label_7F06336C;
    case 0x7F063370u: goto label_7F063370;
    case 0x7F063374u: goto label_7F063374;
    case 0x7F063378u: goto label_7F063378;
    case 0x7F06337Cu: goto label_7F06337C;
    case 0x7F063380u: goto label_7F063380;
    case 0x7F063384u: goto label_7F063384;
    case 0x7F063388u: goto label_7F063388;
    case 0x7F06338Cu: goto label_7F06338C;
    case 0x7F063390u: goto label_7F063390;
    case 0x7F063394u: goto label_7F063394;
    case 0x7F063398u: goto label_7F063398;
    case 0x7F06339Cu: goto label_7F06339C;
    case 0x7F0633A0u: goto label_7F0633A0;
    case 0x7F0633A4u: goto label_7F0633A4;
    case 0x7F0633A8u: goto label_7F0633A8;
    case 0x7F0633ACu: goto label_7F0633AC;
    case 0x7F0633B0u: goto label_7F0633B0;
    case 0x7F0633B4u: goto label_7F0633B4;
    case 0x7F0633B8u: goto label_7F0633B8;
    case 0x7F0633BCu: goto label_7F0633BC;
    case 0x7F0633C0u: goto label_7F0633C0;
    case 0x7F0633C4u: goto label_7F0633C4;
    case 0x7F0633C8u: goto label_7F0633C8;
    case 0x7F0633CCu: goto label_7F0633CC;
    case 0x7F0633D0u: goto label_7F0633D0;
    case 0x7F0633D4u: goto label_7F0633D4;
    case 0x7F0633D8u: goto label_7F0633D8;
    case 0x7F0633DCu: goto label_7F0633DC;
    case 0x7F0633E0u: goto label_7F0633E0;
    case 0x7F0633E4u: goto label_7F0633E4;
    case 0x7F0633E8u: goto label_7F0633E8;
    case 0x7F0633ECu: goto label_7F0633EC;
    case 0x7F0633F0u: goto label_7F0633F0;
    case 0x7F0633F4u: goto label_7F0633F4;
    case 0x7F0633F8u: goto label_7F0633F8;
    case 0x7F0633FCu: goto label_7F0633FC;
    case 0x7F063400u: goto label_7F063400;
    case 0x7F063404u: goto label_7F063404;
    case 0x7F063408u: goto label_7F063408;
    case 0x7F06340Cu: goto label_7F06340C;
    case 0x7F063410u: goto label_7F063410;
    case 0x7F063414u: goto label_7F063414;
    case 0x7F063418u: goto label_7F063418;
    case 0x7F06341Cu: goto label_7F06341C;
    case 0x7F063420u: goto label_7F063420;
    case 0x7F063424u: goto label_7F063424;
    case 0x7F063428u: goto label_7F063428;
    case 0x7F06342Cu: goto label_7F06342C;
    case 0x7F063430u: goto label_7F063430;
    case 0x7F063434u: goto label_7F063434;
    case 0x7F063438u: goto label_7F063438;
    case 0x7F06343Cu: goto label_7F06343C;
    case 0x7F063440u: goto label_7F063440;
    case 0x7F063444u: goto label_7F063444;
    case 0x7F063448u: goto label_7F063448;
    case 0x7F06344Cu: goto label_7F06344C;
    case 0x7F063450u: goto label_7F063450;
    case 0x7F063454u: goto label_7F063454;
    case 0x7F063458u: goto label_7F063458;
    case 0x7F06345Cu: goto label_7F06345C;
    case 0x7F063460u: goto label_7F063460;
    case 0x7F063464u: goto label_7F063464;
    case 0x7F063468u: goto label_7F063468;
    case 0x7F06346Cu: goto label_7F06346C;
    case 0x7F063470u: goto label_7F063470;
    case 0x7F063474u: goto label_7F063474;
    case 0x7F063478u: goto label_7F063478;
    case 0x7F06347Cu: goto label_7F06347C;
    case 0x7F063480u: goto label_7F063480;
    case 0x7F063484u: goto label_7F063484;
    case 0x7F063488u: goto label_7F063488;
    case 0x7F06348Cu: goto label_7F06348C;
    case 0x7F063490u: goto label_7F063490;
    case 0x7F063494u: goto label_7F063494;
    case 0x7F063498u: goto label_7F063498;
    case 0x7F06349Cu: goto label_7F06349C;
    case 0x7F0634A0u: goto label_7F0634A0;
    case 0x7F0634A4u: goto label_7F0634A4;
    case 0x7F0634A8u: goto label_7F0634A8;
    case 0x7F0634ACu: goto label_7F0634AC;
    case 0x7F0634B0u: goto label_7F0634B0;
    case 0x7F0634B4u: goto label_7F0634B4;
    case 0x7F0634B8u: goto label_7F0634B8;
    case 0x7F0634BCu: goto label_7F0634BC;
    case 0x7F0634C0u: goto label_7F0634C0;
    case 0x7F0634C4u: goto label_7F0634C4;
    case 0x7F0634C8u: goto label_7F0634C8;
    case 0x7F0634CCu: goto label_7F0634CC;
    case 0x7F0634D0u: goto label_7F0634D0;
    case 0x7F0634D4u: goto label_7F0634D4;
    case 0x7F0634D8u: goto label_7F0634D8;
    case 0x7F0634DCu: goto label_7F0634DC;
    case 0x7F0634E0u: goto label_7F0634E0;
    case 0x7F0634E4u: goto label_7F0634E4;
    case 0x7F0634E8u: goto label_7F0634E8;
    case 0x7F0634ECu: goto label_7F0634EC;
    case 0x7F0634F0u: goto label_7F0634F0;
    case 0x7F0634F4u: goto label_7F0634F4;
    case 0x7F0634F8u: goto label_7F0634F8;
    case 0x7F0634FCu: goto label_7F0634FC;
    case 0x7F063500u: goto label_7F063500;
    case 0x7F063504u: goto label_7F063504;
    case 0x7F063508u: goto label_7F063508;
    case 0x7F06350Cu: goto label_7F06350C;
    case 0x7F063510u: goto label_7F063510;
    case 0x7F063514u: goto label_7F063514;
    case 0x7F063518u: goto label_7F063518;
    case 0x7F06351Cu: goto label_7F06351C;
    case 0x7F063520u: goto label_7F063520;
    case 0x7F063524u: goto label_7F063524;
    case 0x7F063528u: goto label_7F063528;
    case 0x7F06352Cu: goto label_7F06352C;
    case 0x7F063530u: goto label_7F063530;
    case 0x7F063534u: goto label_7F063534;
    case 0x7F063538u: goto label_7F063538;
    case 0x7F06353Cu: goto label_7F06353C;
    case 0x7F063540u: goto label_7F063540;
    case 0x7F063544u: goto label_7F063544;
    case 0x7F063548u: goto label_7F063548;
    case 0x7F06354Cu: goto label_7F06354C;
    case 0x7F063550u: goto label_7F063550;
    case 0x7F063554u: goto label_7F063554;
    case 0x7F063558u: goto label_7F063558;
    case 0x7F06355Cu: goto label_7F06355C;
    case 0x7F063560u: goto label_7F063560;
    case 0x7F063564u: goto label_7F063564;
    case 0x7F063568u: goto label_7F063568;
    case 0x7F06356Cu: goto label_7F06356C;
    case 0x7F063570u: goto label_7F063570;
    case 0x7F063574u: goto label_7F063574;
    case 0x7F063578u: goto label_7F063578;
    case 0x7F06357Cu: goto label_7F06357C;
    case 0x7F063580u: goto label_7F063580;
    case 0x7F063584u: goto label_7F063584;
    case 0x7F063588u: goto label_7F063588;
    case 0x7F06358Cu: goto label_7F06358C;
    case 0x7F063590u: goto label_7F063590;
    case 0x7F063594u: goto label_7F063594;
    case 0x7F063598u: goto label_7F063598;
    case 0x7F06359Cu: goto label_7F06359C;
    case 0x7F0635A0u: goto label_7F0635A0;
    case 0x7F0635A4u: goto label_7F0635A4;
    case 0x7F0635A8u: goto label_7F0635A8;
    case 0x7F0635ACu: goto label_7F0635AC;
    case 0x7F0635B0u: goto label_7F0635B0;
    case 0x7F0635B4u: goto label_7F0635B4;
    case 0x7F0635B8u: goto label_7F0635B8;
    case 0x7F0635BCu: goto label_7F0635BC;
    case 0x7F0635C0u: goto label_7F0635C0;
    case 0x7F0635C4u: goto label_7F0635C4;
    case 0x7F0635C8u: goto label_7F0635C8;
    case 0x7F0635CCu: goto label_7F0635CC;
    case 0x7F0635D0u: goto label_7F0635D0;
    case 0x7F0635D4u: goto label_7F0635D4;
    case 0x7F0635D8u: goto label_7F0635D8;
    case 0x7F0635DCu: goto label_7F0635DC;
    case 0x7F0635E0u: goto label_7F0635E0;
    case 0x7F0635E4u: goto label_7F0635E4;
    case 0x7F0635E8u: goto label_7F0635E8;
    case 0x7F0635ECu: goto label_7F0635EC;
    case 0x7F0635F0u: goto label_7F0635F0;
    case 0x7F0635F4u: goto label_7F0635F4;
    case 0x7F0635F8u: goto label_7F0635F8;
    case 0x7F0635FCu: goto label_7F0635FC;
    case 0x7F063600u: goto label_7F063600;
    case 0x7F063604u: goto label_7F063604;
    case 0x7F063608u: goto label_7F063608;
    case 0x7F06360Cu: goto label_7F06360C;
    case 0x7F063610u: goto label_7F063610;
    case 0x7F063614u: goto label_7F063614;
    case 0x7F063618u: goto label_7F063618;
    case 0x7F06361Cu: goto label_7F06361C;
    case 0x7F063620u: goto label_7F063620;
    case 0x7F063624u: goto label_7F063624;
    case 0x7F063628u: goto label_7F063628;
    case 0x7F06362Cu: goto label_7F06362C;
    case 0x7F063630u: goto label_7F063630;
    case 0x7F063634u: goto label_7F063634;
    case 0x7F063638u: goto label_7F063638;
    case 0x7F06363Cu: goto label_7F06363C;
    case 0x7F063640u: goto label_7F063640;
    case 0x7F063644u: goto label_7F063644;
    case 0x7F063648u: goto label_7F063648;
    case 0x7F06364Cu: goto label_7F06364C;
    case 0x7F063650u: goto label_7F063650;
    case 0x7F063654u: goto label_7F063654;
    case 0x7F063658u: goto label_7F063658;
    case 0x7F06365Cu: goto label_7F06365C;
    case 0x7F063660u: goto label_7F063660;
    case 0x7F063664u: goto label_7F063664;
    case 0x7F063668u: goto label_7F063668;
    case 0x7F06366Cu: goto label_7F06366C;
    case 0x7F063670u: goto label_7F063670;
    case 0x7F063674u: goto label_7F063674;
    case 0x7F063678u: goto label_7F063678;
    case 0x7F06367Cu: goto label_7F06367C;
    case 0x7F063680u: goto label_7F063680;
    case 0x7F063684u: goto label_7F063684;
    case 0x7F063688u: goto label_7F063688;
    case 0x7F06368Cu: goto label_7F06368C;
    case 0x7F063690u: goto label_7F063690;
    case 0x7F063694u: goto label_7F063694;
    case 0x7F063698u: goto label_7F063698;
    case 0x7F06369Cu: goto label_7F06369C;
    case 0x7F0636A0u: goto label_7F0636A0;
    case 0x7F0636A4u: goto label_7F0636A4;
    case 0x7F0636A8u: goto label_7F0636A8;
    case 0x7F0636ACu: goto label_7F0636AC;
    case 0x7F0636B0u: goto label_7F0636B0;
    case 0x7F0636B4u: goto label_7F0636B4;
    case 0x7F0636B8u: goto label_7F0636B8;
    case 0x7F0636BCu: goto label_7F0636BC;
    case 0x7F0636C0u: goto label_7F0636C0;
    case 0x7F0636C4u: goto label_7F0636C4;
    case 0x7F0636C8u: goto label_7F0636C8;
    case 0x7F0636CCu: goto label_7F0636CC;
    case 0x7F0636D0u: goto label_7F0636D0;
    case 0x7F0636D4u: goto label_7F0636D4;
    case 0x7F0636D8u: goto label_7F0636D8;
    case 0x7F0636DCu: goto label_7F0636DC;
    case 0x7F0636E0u: goto label_7F0636E0;
    case 0x7F0636E4u: goto label_7F0636E4;
    case 0x7F0636E8u: goto label_7F0636E8;
    case 0x7F0636ECu: goto label_7F0636EC;
    case 0x7F0636F0u: goto label_7F0636F0;
    case 0x7F0636F4u: goto label_7F0636F4;
    case 0x7F0636F8u: goto label_7F0636F8;
    case 0x7F0636FCu: goto label_7F0636FC;
    case 0x7F063700u: goto label_7F063700;
    case 0x7F063704u: goto label_7F063704;
    case 0x7F063708u: goto label_7F063708;
    case 0x7F06370Cu: goto label_7F06370C;
    case 0x7F063710u: goto label_7F063710;
    case 0x7F063714u: goto label_7F063714;
    case 0x7F063718u: goto label_7F063718;
    case 0x7F06371Cu: goto label_7F06371C;
    case 0x7F063720u: goto label_7F063720;
    case 0x7F063724u: goto label_7F063724;
    case 0x7F063728u: goto label_7F063728;
    case 0x7F06372Cu: goto label_7F06372C;
    case 0x7F063730u: goto label_7F063730;
    case 0x7F063734u: goto label_7F063734;
    case 0x7F063738u: goto label_7F063738;
    case 0x7F06373Cu: goto label_7F06373C;
    case 0x7F063740u: goto label_7F063740;
    case 0x7F063744u: goto label_7F063744;
    case 0x7F063748u: goto label_7F063748;
    case 0x7F06374Cu: goto label_7F06374C;
    case 0x7F063750u: goto label_7F063750;
    case 0x7F063754u: goto label_7F063754;
    case 0x7F063758u: goto label_7F063758;
    case 0x7F06375Cu: goto label_7F06375C;
    case 0x7F063760u: goto label_7F063760;
    case 0x7F063764u: goto label_7F063764;
    case 0x7F063768u: goto label_7F063768;
    case 0x7F06376Cu: goto label_7F06376C;
    case 0x7F063770u: goto label_7F063770;
    case 0x7F063774u: goto label_7F063774;
    case 0x7F063778u: goto label_7F063778;
    case 0x7F06377Cu: goto label_7F06377C;
    case 0x7F063780u: goto label_7F063780;
    case 0x7F063784u: goto label_7F063784;
    case 0x7F063788u: goto label_7F063788;
    case 0x7F06378Cu: goto label_7F06378C;
    case 0x7F063790u: goto label_7F063790;
    case 0x7F063794u: goto label_7F063794;
    case 0x7F063798u: goto label_7F063798;
    case 0x7F06379Cu: goto label_7F06379C;
    case 0x7F0637A0u: goto label_7F0637A0;
    case 0x7F0637A4u: goto label_7F0637A4;
    case 0x7F0637A8u: goto label_7F0637A8;
    case 0x7F0637ACu: goto label_7F0637AC;
    case 0x7F0637B0u: goto label_7F0637B0;
    case 0x7F0637B4u: goto label_7F0637B4;
    case 0x7F0637B8u: goto label_7F0637B8;
    case 0x7F0637BCu: goto label_7F0637BC;
    case 0x7F0637C0u: goto label_7F0637C0;
    case 0x7F0637C4u: goto label_7F0637C4;
    case 0x7F0637C8u: goto label_7F0637C8;
    case 0x7F0637CCu: goto label_7F0637CC;
    case 0x7F0637D0u: goto label_7F0637D0;
    case 0x7F0637D4u: goto label_7F0637D4;
    case 0x7F0637D8u: goto label_7F0637D8;
    case 0x7F0637DCu: goto label_7F0637DC;
    case 0x7F0637E0u: goto label_7F0637E0;
    case 0x7F0637E4u: goto label_7F0637E4;
    case 0x7F0637E8u: goto label_7F0637E8;
    case 0x7F0637ECu: goto label_7F0637EC;
    case 0x7F0637F0u: goto label_7F0637F0;
    case 0x7F0637F4u: goto label_7F0637F4;
    case 0x7F0637F8u: goto label_7F0637F8;
    case 0x7F0637FCu: goto label_7F0637FC;
    case 0x7F063800u: goto label_7F063800;
    case 0x7F063804u: goto label_7F063804;
    case 0x7F063808u: goto label_7F063808;
    case 0x7F06380Cu: goto label_7F06380C;
    case 0x7F063810u: goto label_7F063810;
    case 0x7F063814u: goto label_7F063814;
    case 0x7F063818u: goto label_7F063818;
    case 0x7F06381Cu: goto label_7F06381C;
    case 0x7F063820u: goto label_7F063820;
    case 0x7F063824u: goto label_7F063824;
    case 0x7F063828u: goto label_7F063828;
    case 0x7F06382Cu: goto label_7F06382C;
    case 0x7F063830u: goto label_7F063830;
    case 0x7F063834u: goto label_7F063834;
    case 0x7F063838u: goto label_7F063838;
    case 0x7F06383Cu: goto label_7F06383C;
    case 0x7F063840u: goto label_7F063840;
    case 0x7F063844u: goto label_7F063844;
    case 0x7F063848u: goto label_7F063848;
    case 0x7F06384Cu: goto label_7F06384C;
    case 0x7F063850u: goto label_7F063850;
    case 0x7F063854u: goto label_7F063854;
    case 0x7F063858u: goto label_7F063858;
    case 0x7F06385Cu: goto label_7F06385C;
    case 0x7F063860u: goto label_7F063860;
    case 0x7F063864u: goto label_7F063864;
    case 0x7F063868u: goto label_7F063868;
    case 0x7F06386Cu: goto label_7F06386C;
    case 0x7F063870u: goto label_7F063870;
    case 0x7F063874u: goto label_7F063874;
    case 0x7F063878u: goto label_7F063878;
    case 0x7F06387Cu: goto label_7F06387C;
    case 0x7F063880u: goto label_7F063880;
    case 0x7F063884u: goto label_7F063884;
    case 0x7F063888u: goto label_7F063888;
    case 0x7F06388Cu: goto label_7F06388C;
    case 0x7F063890u: goto label_7F063890;
    case 0x7F063894u: goto label_7F063894;
    case 0x7F063898u: goto label_7F063898;
    case 0x7F06389Cu: goto label_7F06389C;
    case 0x7F0638A0u: goto label_7F0638A0;
    case 0x7F0638A4u: goto label_7F0638A4;
    case 0x7F0638A8u: goto label_7F0638A8;
    case 0x7F0638ACu: goto label_7F0638AC;
    case 0x7F0638B0u: goto label_7F0638B0;
    case 0x7F0638B4u: goto label_7F0638B4;
    case 0x7F0638B8u: goto label_7F0638B8;
    case 0x7F0638BCu: goto label_7F0638BC;
    case 0x7F0638C0u: goto label_7F0638C0;
    case 0x7F0638C4u: goto label_7F0638C4;
    case 0x7F0638C8u: goto label_7F0638C8;
    case 0x7F0638CCu: goto label_7F0638CC;
    case 0x7F0638D0u: goto label_7F0638D0;
    case 0x7F0638D4u: goto label_7F0638D4;
    case 0x7F0638D8u: goto label_7F0638D8;
    case 0x7F0638DCu: goto label_7F0638DC;
    case 0x7F0638E0u: goto label_7F0638E0;
    case 0x7F0638E4u: goto label_7F0638E4;
    case 0x7F0638E8u: goto label_7F0638E8;
    case 0x7F0638ECu: goto label_7F0638EC;
    case 0x7F0638F0u: goto label_7F0638F0;
    case 0x7F0638F4u: goto label_7F0638F4;
    case 0x7F0638F8u: goto label_7F0638F8;
    case 0x7F0638FCu: goto label_7F0638FC;
    case 0x7F063900u: goto label_7F063900;
    case 0x7F063904u: goto label_7F063904;
    case 0x7F063908u: goto label_7F063908;
    case 0x7F06390Cu: goto label_7F06390C;
    case 0x7F063910u: goto label_7F063910;
    case 0x7F063914u: goto label_7F063914;
    case 0x7F063918u: goto label_7F063918;
    case 0x7F06391Cu: goto label_7F06391C;
    case 0x7F063920u: goto label_7F063920;
    case 0x7F063924u: goto label_7F063924;
    case 0x7F063928u: goto label_7F063928;
    case 0x7F06392Cu: goto label_7F06392C;
    case 0x7F063930u: goto label_7F063930;
    case 0x7F063934u: goto label_7F063934;
    case 0x7F063938u: goto label_7F063938;
    case 0x7F06393Cu: goto label_7F06393C;
    case 0x7F063940u: goto label_7F063940;
    case 0x7F063944u: goto label_7F063944;
    case 0x7F063948u: goto label_7F063948;
    case 0x7F06394Cu: goto label_7F06394C;
    case 0x7F063950u: goto label_7F063950;
    case 0x7F063954u: goto label_7F063954;
    case 0x7F063958u: goto label_7F063958;
    case 0x7F06395Cu: goto label_7F06395C;
    case 0x7F063960u: goto label_7F063960;
    case 0x7F063964u: goto label_7F063964;
    case 0x7F063968u: goto label_7F063968;
    case 0x7F06396Cu: goto label_7F06396C;
    case 0x7F063970u: goto label_7F063970;
    case 0x7F063974u: goto label_7F063974;
    case 0x7F063978u: goto label_7F063978;
    case 0x7F06397Cu: goto label_7F06397C;
    case 0x7F063980u: goto label_7F063980;
    case 0x7F063984u: goto label_7F063984;
    case 0x7F063988u: goto label_7F063988;
    case 0x7F06398Cu: goto label_7F06398C;
    case 0x7F063990u: goto label_7F063990;
    case 0x7F063994u: goto label_7F063994;
    case 0x7F063998u: goto label_7F063998;
    case 0x7F06399Cu: goto label_7F06399C;
    case 0x7F0639A0u: goto label_7F0639A0;
    case 0x7F0639A4u: goto label_7F0639A4;
    case 0x7F0639A8u: goto label_7F0639A8;
    case 0x7F0639ACu: goto label_7F0639AC;
    case 0x7F0639B0u: goto label_7F0639B0;
    case 0x7F0639B4u: goto label_7F0639B4;
    case 0x7F0639B8u: goto label_7F0639B8;
    case 0x7F0639BCu: goto label_7F0639BC;
    case 0x7F0639C0u: goto label_7F0639C0;
    case 0x7F0639C4u: goto label_7F0639C4;
    case 0x7F0639C8u: goto label_7F0639C8;
    case 0x7F0639CCu: goto label_7F0639CC;
    case 0x7F0639D0u: goto label_7F0639D0;
    case 0x7F0639D4u: goto label_7F0639D4;
    case 0x7F0639D8u: goto label_7F0639D8;
    case 0x7F0639DCu: goto label_7F0639DC;
    case 0x7F0639E0u: goto label_7F0639E0;
    case 0x7F0639E4u: goto label_7F0639E4;
    case 0x7F0639E8u: goto label_7F0639E8;
    case 0x7F0639ECu: goto label_7F0639EC;
    case 0x7F0639F0u: goto label_7F0639F0;
    case 0x7F0639F4u: goto label_7F0639F4;
    case 0x7F0639F8u: goto label_7F0639F8;
    case 0x7F0639FCu: goto label_7F0639FC;
    case 0x7F063A00u: goto label_7F063A00;
    case 0x7F063A04u: goto label_7F063A04;
    case 0x7F063A08u: goto label_7F063A08;
    case 0x7F063A0Cu: goto label_7F063A0C;
    case 0x7F063A10u: goto label_7F063A10;
    case 0x7F063A14u: goto label_7F063A14;
    case 0x7F063A18u: goto label_7F063A18;
    case 0x7F063A1Cu: goto label_7F063A1C;
    case 0x7F063A20u: goto label_7F063A20;
    case 0x7F063A24u: goto label_7F063A24;
    case 0x7F063A28u: goto label_7F063A28;
    case 0x7F063A2Cu: goto label_7F063A2C;
    case 0x7F063A30u: goto label_7F063A30;
    case 0x7F063A34u: goto label_7F063A34;
    case 0x7F063A38u: goto label_7F063A38;
    case 0x7F063A3Cu: goto label_7F063A3C;
    case 0x7F063A40u: goto label_7F063A40;
    case 0x7F063A44u: goto label_7F063A44;
    case 0x7F063A48u: goto label_7F063A48;
    case 0x7F063A4Cu: goto label_7F063A4C;
    case 0x7F063A50u: goto label_7F063A50;
    case 0x7F063A54u: goto label_7F063A54;
    case 0x7F063A58u: goto label_7F063A58;
    case 0x7F063A5Cu: goto label_7F063A5C;
    case 0x7F063A60u: goto label_7F063A60;
    case 0x7F063A64u: goto label_7F063A64;
    case 0x7F063A68u: goto label_7F063A68;
    case 0x7F063A6Cu: goto label_7F063A6C;
    case 0x7F063A70u: goto label_7F063A70;
    case 0x7F063A74u: goto label_7F063A74;
    case 0x7F063A78u: goto label_7F063A78;
    case 0x7F063A7Cu: goto label_7F063A7C;
    case 0x7F063A80u: goto label_7F063A80;
    case 0x7F063A84u: goto label_7F063A84;
    case 0x7F063A88u: goto label_7F063A88;
    case 0x7F063A8Cu: goto label_7F063A8C;
    case 0x7F063A90u: goto label_7F063A90;
    case 0x7F063A94u: goto label_7F063A94;
    case 0x7F063A98u: goto label_7F063A98;
    case 0x7F063A9Cu: goto label_7F063A9C;
    case 0x7F063AA0u: goto label_7F063AA0;
    case 0x7F063AA4u: goto label_7F063AA4;
    case 0x7F063AA8u: goto label_7F063AA8;
    case 0x7F063AACu: goto label_7F063AAC;
    case 0x7F063AB0u: goto label_7F063AB0;
    case 0x7F063AB4u: goto label_7F063AB4;
    case 0x7F063AB8u: goto label_7F063AB8;
    case 0x7F063ABCu: goto label_7F063ABC;
    case 0x7F063AC0u: goto label_7F063AC0;
    case 0x7F063AC4u: goto label_7F063AC4;
    case 0x7F063AC8u: goto label_7F063AC8;
    case 0x7F063ACCu: goto label_7F063ACC;
    case 0x7F063AD0u: goto label_7F063AD0;
    case 0x7F063AD4u: goto label_7F063AD4;
    case 0x7F063AD8u: goto label_7F063AD8;
    case 0x7F063ADCu: goto label_7F063ADC;
    case 0x7F063AE0u: goto label_7F063AE0;
    case 0x7F063AE4u: goto label_7F063AE4;
    case 0x7F063AE8u: goto label_7F063AE8;
    case 0x7F063AECu: goto label_7F063AEC;
    case 0x7F063AF0u: goto label_7F063AF0;
    case 0x7F063AF4u: goto label_7F063AF4;
    case 0x7F063AF8u: goto label_7F063AF8;
    case 0x7F063AFCu: goto label_7F063AFC;
    case 0x7F063B00u: goto label_7F063B00;
    case 0x7F063B04u: goto label_7F063B04;
    case 0x7F063B08u: goto label_7F063B08;
    case 0x7F063B0Cu: goto label_7F063B0C;
    case 0x7F063B10u: goto label_7F063B10;
    case 0x7F063B14u: goto label_7F063B14;
    case 0x7F063B18u: goto label_7F063B18;
    case 0x7F063B1Cu: goto label_7F063B1C;
    case 0x7F063B20u: goto label_7F063B20;
    case 0x7F063B24u: goto label_7F063B24;
    case 0x7F063B28u: goto label_7F063B28;
    case 0x7F063B2Cu: goto label_7F063B2C;
    case 0x7F063B30u: goto label_7F063B30;
    case 0x7F063B34u: goto label_7F063B34;
    case 0x7F063B38u: goto label_7F063B38;
    case 0x7F063B3Cu: goto label_7F063B3C;
    case 0x7F063B40u: goto label_7F063B40;
    case 0x7F063B44u: goto label_7F063B44;
    case 0x7F063B48u: goto label_7F063B48;
    case 0x7F063B4Cu: goto label_7F063B4C;
    case 0x7F063B50u: goto label_7F063B50;
    case 0x7F063B54u: goto label_7F063B54;
    case 0x7F063B58u: goto label_7F063B58;
    case 0x7F063B5Cu: goto label_7F063B5C;
    case 0x7F063B60u: goto label_7F063B60;
    case 0x7F063B64u: goto label_7F063B64;
    case 0x7F063B68u: goto label_7F063B68;
    case 0x7F063B6Cu: goto label_7F063B6C;
    case 0x7F063B70u: goto label_7F063B70;
    case 0x7F063B74u: goto label_7F063B74;
    case 0x7F063B78u: goto label_7F063B78;
    case 0x7F063B7Cu: goto label_7F063B7C;
    case 0x7F063B80u: goto label_7F063B80;
    case 0x7F063B84u: goto label_7F063B84;
    case 0x7F063B88u: goto label_7F063B88;
    case 0x7F063B8Cu: goto label_7F063B8C;
    case 0x7F063B90u: goto label_7F063B90;
    case 0x7F063B94u: goto label_7F063B94;
    case 0x7F063B98u: goto label_7F063B98;
    case 0x7F063B9Cu: goto label_7F063B9C;
    case 0x7F063BA0u: goto label_7F063BA0;
    case 0x7F063BA4u: goto label_7F063BA4;
    case 0x7F063BA8u: goto label_7F063BA8;
    case 0x7F063BACu: goto label_7F063BAC;
    case 0x7F063BB0u: goto label_7F063BB0;
    case 0x7F063BB4u: goto label_7F063BB4;
    case 0x7F063BB8u: goto label_7F063BB8;
    case 0x7F063BBCu: goto label_7F063BBC;
    case 0x7F063BC0u: goto label_7F063BC0;
    case 0x7F063BC4u: goto label_7F063BC4;
    case 0x7F063BC8u: goto label_7F063BC8;
    case 0x7F063BCCu: goto label_7F063BCC;
    case 0x7F063BD0u: goto label_7F063BD0;
    case 0x7F063BD4u: goto label_7F063BD4;
    case 0x7F063BD8u: goto label_7F063BD8;
    case 0x7F063BDCu: goto label_7F063BDC;
    case 0x7F063BE0u: goto label_7F063BE0;
    case 0x7F063BE4u: goto label_7F063BE4;
    case 0x7F063BE8u: goto label_7F063BE8;
    case 0x7F063BECu: goto label_7F063BEC;
    case 0x7F063BF0u: goto label_7F063BF0;
    case 0x7F063BF4u: goto label_7F063BF4;
    case 0x7F063BF8u: goto label_7F063BF8;
    case 0x7F063BFCu: goto label_7F063BFC;
    case 0x7F063C00u: goto label_7F063C00;
    case 0x7F063C04u: goto label_7F063C04;
    case 0x7F063C08u: goto label_7F063C08;
    case 0x7F063C0Cu: goto label_7F063C0C;
    case 0x7F063C10u: goto label_7F063C10;
    case 0x7F063C14u: goto label_7F063C14;
    case 0x7F063C18u: goto label_7F063C18;
    case 0x7F063C1Cu: goto label_7F063C1C;
    case 0x7F063C20u: goto label_7F063C20;
    case 0x7F063C24u: goto label_7F063C24;
    case 0x7F063C28u: goto label_7F063C28;
    case 0x7F063C2Cu: goto label_7F063C2C;
    case 0x7F063C30u: goto label_7F063C30;
    case 0x7F063C34u: goto label_7F063C34;
    case 0x7F063C38u: goto label_7F063C38;
    case 0x7F063C3Cu: goto label_7F063C3C;
    case 0x7F063C40u: goto label_7F063C40;
    case 0x7F063C44u: goto label_7F063C44;
    case 0x7F063C48u: goto label_7F063C48;
    case 0x7F063C4Cu: goto label_7F063C4C;
    case 0x7F063C50u: goto label_7F063C50;
    case 0x7F063C54u: goto label_7F063C54;
    case 0x7F063C58u: goto label_7F063C58;
    case 0x7F063C5Cu: goto label_7F063C5C;
    case 0x7F063C60u: goto label_7F063C60;
    case 0x7F063C64u: goto label_7F063C64;
    case 0x7F063C68u: goto label_7F063C68;
    case 0x7F063C6Cu: goto label_7F063C6C;
    case 0x7F063C70u: goto label_7F063C70;
    case 0x7F063C74u: goto label_7F063C74;
    case 0x7F063C78u: goto label_7F063C78;
    case 0x7F063C7Cu: goto label_7F063C7C;
    case 0x7F063C80u: goto label_7F063C80;
    case 0x7F063C84u: goto label_7F063C84;
    case 0x7F063C88u: goto label_7F063C88;
    case 0x7F063C8Cu: goto label_7F063C8C;
    case 0x7F063C90u: goto label_7F063C90;
    case 0x7F063C94u: goto label_7F063C94;
    case 0x7F063C98u: goto label_7F063C98;
    case 0x7F063C9Cu: goto label_7F063C9C;
    case 0x7F063CA0u: goto label_7F063CA0;
    case 0x7F063CA4u: goto label_7F063CA4;
    case 0x7F063CA8u: goto label_7F063CA8;
    case 0x7F063CACu: goto label_7F063CAC;
    case 0x7F063CB0u: goto label_7F063CB0;
    case 0x7F063CB4u: goto label_7F063CB4;
    case 0x7F063CB8u: goto label_7F063CB8;
    case 0x7F063CBCu: goto label_7F063CBC;
    case 0x7F063CC0u: goto label_7F063CC0;
    case 0x7F063CC4u: goto label_7F063CC4;
    case 0x7F063CC8u: goto label_7F063CC8;
    case 0x7F063CCCu: goto label_7F063CCC;
    case 0x7F063CD0u: goto label_7F063CD0;
    case 0x7F063CD4u: goto label_7F063CD4;
    case 0x7F063CD8u: goto label_7F063CD8;
    case 0x7F063CDCu: goto label_7F063CDC;
    case 0x7F063CE0u: goto label_7F063CE0;
    case 0x7F063CE4u: goto label_7F063CE4;
    case 0x7F063CE8u: goto label_7F063CE8;
    case 0x7F063CECu: goto label_7F063CEC;
    case 0x7F063CF0u: goto label_7F063CF0;
    case 0x7F063CF4u: goto label_7F063CF4;
    case 0x7F063CF8u: goto label_7F063CF8;
    case 0x7F063CFCu: goto label_7F063CFC;
    case 0x7F063D00u: goto label_7F063D00;
    case 0x7F063D04u: goto label_7F063D04;
    case 0x7F063D08u: goto label_7F063D08;
    case 0x7F063D0Cu: goto label_7F063D0C;
    case 0x7F063D10u: goto label_7F063D10;
    case 0x7F063D14u: goto label_7F063D14;
    case 0x7F063D18u: goto label_7F063D18;
    case 0x7F063D1Cu: goto label_7F063D1C;
    case 0x7F063D20u: goto label_7F063D20;
    case 0x7F063D24u: goto label_7F063D24;
    case 0x7F063D28u: goto label_7F063D28;
    case 0x7F063D2Cu: goto label_7F063D2C;
    case 0x7F063D30u: goto label_7F063D30;
    case 0x7F063D34u: goto label_7F063D34;
    case 0x7F063D38u: goto label_7F063D38;
    case 0x7F063D3Cu: goto label_7F063D3C;
    case 0x7F063D40u: goto label_7F063D40;
    case 0x7F063D44u: goto label_7F063D44;
    case 0x7F063D48u: goto label_7F063D48;
    case 0x7F063D4Cu: goto label_7F063D4C;
    case 0x7F063D50u: goto label_7F063D50;
    case 0x7F063D54u: goto label_7F063D54;
    case 0x7F063D58u: goto label_7F063D58;
    case 0x7F063D5Cu: goto label_7F063D5C;
    case 0x7F063D60u: goto label_7F063D60;
    case 0x7F063D64u: goto label_7F063D64;
    case 0x7F063D68u: goto label_7F063D68;
    case 0x7F063D6Cu: goto label_7F063D6C;
    case 0x7F063D70u: goto label_7F063D70;
    case 0x7F063D74u: goto label_7F063D74;
    case 0x7F063D78u: goto label_7F063D78;
    case 0x7F063D7Cu: goto label_7F063D7C;
    case 0x7F063D80u: goto label_7F063D80;
    case 0x7F063D84u: goto label_7F063D84;
    case 0x7F063D88u: goto label_7F063D88;
    case 0x7F063D8Cu: goto label_7F063D8C;
    case 0x7F063D90u: goto label_7F063D90;
    case 0x7F063D94u: goto label_7F063D94;
    case 0x7F063D98u: goto label_7F063D98;
    case 0x7F063D9Cu: goto label_7F063D9C;
    case 0x7F063DA0u: goto label_7F063DA0;
    case 0x7F063DA4u: goto label_7F063DA4;
    case 0x7F063DA8u: goto label_7F063DA8;
    case 0x7F063DACu: goto label_7F063DAC;
    case 0x7F063DB0u: goto label_7F063DB0;
    case 0x7F063DB4u: goto label_7F063DB4;
    case 0x7F063DB8u: goto label_7F063DB8;
    case 0x7F063DBCu: goto label_7F063DBC;
    case 0x7F063DC0u: goto label_7F063DC0;
    case 0x7F063DC4u: goto label_7F063DC4;
    case 0x7F063DC8u: goto label_7F063DC8;
    case 0x7F063DCCu: goto label_7F063DCC;
    case 0x7F063DD0u: goto label_7F063DD0;
    case 0x7F063DD4u: goto label_7F063DD4;
    case 0x7F063DD8u: goto label_7F063DD8;
    case 0x7F063DDCu: goto label_7F063DDC;
    case 0x7F063DE0u: goto label_7F063DE0;
    case 0x7F063DE4u: goto label_7F063DE4;
    case 0x7F063DE8u: goto label_7F063DE8;
    case 0x7F063DECu: goto label_7F063DEC;
    case 0x7F063DF0u: goto label_7F063DF0;
    case 0x7F063DF4u: goto label_7F063DF4;
    case 0x7F063DF8u: goto label_7F063DF8;
    case 0x7F063DFCu: goto label_7F063DFC;
    case 0x7F063E00u: goto label_7F063E00;
    case 0x7F063E04u: goto label_7F063E04;
    case 0x7F063E08u: goto label_7F063E08;
    case 0x7F063E0Cu: goto label_7F063E0C;
    case 0x7F063E10u: goto label_7F063E10;
    case 0x7F063E14u: goto label_7F063E14;
    case 0x7F063E18u: goto label_7F063E18;
    case 0x7F063E1Cu: goto label_7F063E1C;
    case 0x7F063E20u: goto label_7F063E20;
    case 0x7F063E24u: goto label_7F063E24;
    case 0x7F063E28u: goto label_7F063E28;
    case 0x7F063E2Cu: goto label_7F063E2C;
    case 0x7F063E30u: goto label_7F063E30;
    case 0x7F063E34u: goto label_7F063E34;
    case 0x7F063E38u: goto label_7F063E38;
    case 0x7F063E3Cu: goto label_7F063E3C;
    case 0x7F063E40u: goto label_7F063E40;
    case 0x7F063E44u: goto label_7F063E44;
    case 0x7F063E48u: goto label_7F063E48;
    case 0x7F063E4Cu: goto label_7F063E4C;
    case 0x7F063E50u: goto label_7F063E50;
    case 0x7F063E54u: goto label_7F063E54;
    case 0x7F063E58u: goto label_7F063E58;
    case 0x7F063E5Cu: goto label_7F063E5C;
    case 0x7F063E60u: goto label_7F063E60;
    case 0x7F063E64u: goto label_7F063E64;
    case 0x7F063E68u: goto label_7F063E68;
    case 0x7F063E6Cu: goto label_7F063E6C;
    case 0x7F063E70u: goto label_7F063E70;
    case 0x7F063E74u: goto label_7F063E74;
    case 0x7F063E78u: goto label_7F063E78;
    case 0x7F063E7Cu: goto label_7F063E7C;
    case 0x7F063E80u: goto label_7F063E80;
    case 0x7F063E84u: goto label_7F063E84;
    case 0x7F063E88u: goto label_7F063E88;
    case 0x7F063E8Cu: goto label_7F063E8C;
    case 0x7F063E90u: goto label_7F063E90;
    case 0x7F063E94u: goto label_7F063E94;
    case 0x7F063E98u: goto label_7F063E98;
    case 0x7F063E9Cu: goto label_7F063E9C;
    case 0x7F063EA0u: goto label_7F063EA0;
    case 0x7F063EA4u: goto label_7F063EA4;
    case 0x7F063EA8u: goto label_7F063EA8;
    case 0x7F063EACu: goto label_7F063EAC;
    case 0x7F063EB0u: goto label_7F063EB0;
    case 0x7F063EB4u: goto label_7F063EB4;
    case 0x7F063EB8u: goto label_7F063EB8;
    case 0x7F063EBCu: goto label_7F063EBC;
    case 0x7F063EC0u: goto label_7F063EC0;
    case 0x7F063EC4u: goto label_7F063EC4;
    case 0x7F063EC8u: goto label_7F063EC8;
    case 0x7F063ECCu: goto label_7F063ECC;
    case 0x7F063ED0u: goto label_7F063ED0;
    case 0x7F063ED4u: goto label_7F063ED4;
    case 0x7F063ED8u: goto label_7F063ED8;
    case 0x7F063EDCu: goto label_7F063EDC;
    case 0x7F063EE0u: goto label_7F063EE0;
    case 0x7F063EE4u: goto label_7F063EE4;
    case 0x7F063EE8u: goto label_7F063EE8;
    case 0x7F063EECu: goto label_7F063EEC;
    case 0x7F063EF0u: goto label_7F063EF0;
    case 0x7F063EF4u: goto label_7F063EF4;
    case 0x7F063EF8u: goto label_7F063EF8;
    case 0x7F063EFCu: goto label_7F063EFC;
    case 0x7F063F00u: goto label_7F063F00;
    case 0x7F063F04u: goto label_7F063F04;
    case 0x7F063F08u: goto label_7F063F08;
    case 0x7F063F0Cu: goto label_7F063F0C;
    case 0x7F063F10u: goto label_7F063F10;
    case 0x7F063F14u: goto label_7F063F14;
    case 0x7F063F18u: goto label_7F063F18;
    case 0x7F063F1Cu: goto label_7F063F1C;
    case 0x7F063F20u: goto label_7F063F20;
    case 0x7F063F24u: goto label_7F063F24;
    case 0x7F063F28u: goto label_7F063F28;
    case 0x7F063F2Cu: goto label_7F063F2C;
    case 0x7F063F30u: goto label_7F063F30;
    case 0x7F063F34u: goto label_7F063F34;
    case 0x7F063F38u: goto label_7F063F38;
    case 0x7F063F3Cu: goto label_7F063F3C;
    case 0x7F063F40u: goto label_7F063F40;
    case 0x7F063F44u: goto label_7F063F44;
    case 0x7F063F48u: goto label_7F063F48;
    case 0x7F063F4Cu: goto label_7F063F4C;
    case 0x7F063F50u: goto label_7F063F50;
    case 0x7F063F54u: goto label_7F063F54;
    case 0x7F063F58u: goto label_7F063F58;
    case 0x7F063F5Cu: goto label_7F063F5C;
    case 0x7F063F60u: goto label_7F063F60;
    case 0x7F063F64u: goto label_7F063F64;
    case 0x7F063F68u: goto label_7F063F68;
    case 0x7F063F6Cu: goto label_7F063F6C;
    case 0x7F063F70u: goto label_7F063F70;
    case 0x7F063F74u: goto label_7F063F74;
    case 0x7F063F78u: goto label_7F063F78;
    case 0x7F063F7Cu: goto label_7F063F7C;
    case 0x7F063F80u: goto label_7F063F80;
    case 0x7F063F84u: goto label_7F063F84;
    case 0x7F063F88u: goto label_7F063F88;
    case 0x7F063F8Cu: goto label_7F063F8C;
    case 0x7F063F90u: goto label_7F063F90;
    case 0x7F063F94u: goto label_7F063F94;
    case 0x7F063F98u: goto label_7F063F98;
    case 0x7F063F9Cu: goto label_7F063F9C;
    case 0x7F063FA0u: goto label_7F063FA0;
    case 0x7F063FA4u: goto label_7F063FA4;
    case 0x7F063FA8u: goto label_7F063FA8;
    case 0x7F063FACu: goto label_7F063FAC;
    case 0x7F063FB0u: goto label_7F063FB0;
    case 0x7F063FB4u: goto label_7F063FB4;
    case 0x7F063FB8u: goto label_7F063FB8;
    case 0x7F063FBCu: goto label_7F063FBC;
    case 0x7F063FC0u: goto label_7F063FC0;
    case 0x7F063FC4u: goto label_7F063FC4;
    case 0x7F063FC8u: goto label_7F063FC8;
    case 0x7F063FCCu: goto label_7F063FCC;
    case 0x7F063FD0u: goto label_7F063FD0;
    case 0x7F063FD4u: goto label_7F063FD4;
    case 0x7F063FD8u: goto label_7F063FD8;
    case 0x7F063FDCu: goto label_7F063FDC;
    case 0x7F063FE0u: goto label_7F063FE0;
    case 0x7F063FE4u: goto label_7F063FE4;
    case 0x7F063FE8u: goto label_7F063FE8;
    case 0x7F063FECu: goto label_7F063FEC;
    case 0x7F063FF0u: goto label_7F063FF0;
    case 0x7F063FF4u: goto label_7F063FF4;
    case 0x7F063FF8u: goto label_7F063FF8;
    case 0x7F063FFCu: goto label_7F063FFC;
    case 0x7F064000u: goto label_7F064000;
    case 0x7F064004u: goto label_7F064004;
    case 0x7F064008u: goto label_7F064008;
    case 0x7F06400Cu: goto label_7F06400C;
    case 0x7F064010u: goto label_7F064010;
    case 0x7F064014u: goto label_7F064014;
    case 0x7F064018u: goto label_7F064018;
    case 0x7F06401Cu: goto label_7F06401C;
    case 0x7F064020u: goto label_7F064020;
    case 0x7F064024u: goto label_7F064024;
    case 0x7F064028u: goto label_7F064028;
    case 0x7F06402Cu: goto label_7F06402C;
    case 0x7F064030u: goto label_7F064030;
    case 0x7F064034u: goto label_7F064034;
    case 0x7F064038u: goto label_7F064038;
    case 0x7F06403Cu: goto label_7F06403C;
    case 0x7F064040u: goto label_7F064040;
    case 0x7F064044u: goto label_7F064044;
    case 0x7F064048u: goto label_7F064048;
    case 0x7F06404Cu: goto label_7F06404C;
    case 0x7F064050u: goto label_7F064050;
    case 0x7F064054u: goto label_7F064054;
    case 0x7F064058u: goto label_7F064058;
    case 0x7F06405Cu: goto label_7F06405C;
    case 0x7F064060u: goto label_7F064060;
    case 0x7F064064u: goto label_7F064064;
    case 0x7F064068u: goto label_7F064068;
    case 0x7F06406Cu: goto label_7F06406C;
    case 0x7F064070u: goto label_7F064070;
    case 0x7F064074u: goto label_7F064074;
    case 0x7F064078u: goto label_7F064078;
    case 0x7F06407Cu: goto label_7F06407C;
    case 0x7F064080u: goto label_7F064080;
    case 0x7F064084u: goto label_7F064084;
    case 0x7F064088u: goto label_7F064088;
    case 0x7F06408Cu: goto label_7F06408C;
    case 0x7F064090u: goto label_7F064090;
    case 0x7F064094u: goto label_7F064094;
    case 0x7F064098u: goto label_7F064098;
    case 0x7F06409Cu: goto label_7F06409C;
    case 0x7F0640A0u: goto label_7F0640A0;
    case 0x7F0640A4u: goto label_7F0640A4;
    case 0x7F0640A8u: goto label_7F0640A8;
    case 0x7F0640ACu: goto label_7F0640AC;
    case 0x7F0640B0u: goto label_7F0640B0;
    case 0x7F0640B4u: goto label_7F0640B4;
    case 0x7F0640B8u: goto label_7F0640B8;
    case 0x7F0640BCu: goto label_7F0640BC;
    case 0x7F0640C0u: goto label_7F0640C0;
    case 0x7F0640C4u: goto label_7F0640C4;
    case 0x7F0640C8u: goto label_7F0640C8;
    case 0x7F0640CCu: goto label_7F0640CC;
    case 0x7F0640D0u: goto label_7F0640D0;
    case 0x7F0640D4u: goto label_7F0640D4;
    case 0x7F0640D8u: goto label_7F0640D8;
    case 0x7F0640DCu: goto label_7F0640DC;
    case 0x7F0640E0u: goto label_7F0640E0;
    case 0x7F0640E4u: goto label_7F0640E4;
    case 0x7F0640E8u: goto label_7F0640E8;
    default: return;
    }
label_7F0600EC:
    ctx->pc = 0x7F0600ECu;
    ctx->downcount -= 1;
    // 7F0600EC: bl      0x7F05F5DC
    {
            ctx->lr = 0x7F0600F0u;
            ctx->pc = 0x7F05F5DCu;
            return;
    }

label_7F0600F0:
    ctx->pc = 0x7F0600F0u;
    ctx->downcount -= 2;
    // 7F0600F0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0600F4:
    ctx->pc = 0x7F0600F4u;
    // 7F0600F4: bl      0x7F05F844
    {
            ctx->lr = 0x7F0600F8u;
            ctx->pc = 0x7F05F844u;
            return;
    }

label_7F0600F8:
    ctx->pc = 0x7F0600F8u;
    ctx->downcount -= 7;
    // 7F0600F8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F0600FC:
    ctx->pc = 0x7F0600FCu;
    // 7F0600FC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F060100:
    ctx->pc = 0x7F060100u;
    // 7F060100: addi    r20, r3, -5708
    ctx->gpr[20] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F060104:
    ctx->pc = 0x7F060104u;
    // 7F060104: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F060108:
    ctx->pc = 0x7F060108u;
    // 7F060108: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F06010C:
    ctx->pc = 0x7F06010Cu;
    // 7F06010C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F060110:
    ctx->pc = 0x7F060110u;
    // 7F060110: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F060114:
    ctx->downcount -= 5;
    // 7F060114: add   r22, r30, r26
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_7F060118:
    // 7F060118: addis   r24, r22, 1
    ctx->gpr[24] = ctx->gpr[22] + ((u32)(s32)(1) << 16);

label_7F06011C:
    ctx->pc = 0x7F06011Cu;
    // 7F06011C: lwz     r0, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060120:
    // 7F060120: cmpwi   r0, 0
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

label_7F060124:
    // 7F060124: bc    12, 2, 0x7F060C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060C08;
        }
    }

label_7F060128:
    ctx->pc = 0x7F060128u;
    ctx->downcount -= 3;
    // 7F060128: lwz     r0, -19824(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-19824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06012C:
    // 7F06012C: cmpwi   r0, 0
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

label_7F060130:
    // 7F060130: bc    4, 2, 0x7F060C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060C08;
        }
    }

label_7F060134:
    ctx->pc = 0x7F060134u;
    ctx->downcount -= 24;
    // 7F060134: lwz     r7, -21012(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-21012);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F060138:
    // 7F060138: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F06013C:
    // 7F06013C: addi    r4, r3, -5708
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F060140:
    // 7F060140: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F060144:
    // 7F060144: rlwinm r0, r7, 30, 0, 1
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 30u) & 0xC0000000u;
    }

label_7F060148:
    // 7F060148: rlwinm r6, r7, 1, 31, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[7], 1u) & 0x00000001u;
    }

label_7F06014C:
    // 7F06014C: subf   r3, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F060150:
    // 7F060150: srawi r0, r7, 2
    {
        u32 sh = 2u;
        u32 value = ctx->gpr[7];
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

label_7F060154:
    // 7F060154: rlwinm r3, r3, 2, 0, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFFu;
    }

label_7F060158:
    // 7F060158: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F06015C:
    // 7F06015C: add   r3, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F060160:
    // 7F060160: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F060164:
    // 7F060164: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F060168:
    // 7F060168: mulli   r0, r3, 480
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)480);

label_7F06016C:
    // 7F06016C: addi    r21, r3, 4
    ctx->gpr[21] = ctx->gpr[3] + (u32)(s32)(4);

label_7F060170:
    // 7F060170: mulli   r3, r21, 480
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[21] * (s64)(s32)480);

label_7F060174:
    // 7F060174: add   r19, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_7F060178:
    // 7F060178: add   r25, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F06017C:
    // 7F06017C: addi    r3, r19, 328
    ctx->gpr[3] = ctx->gpr[19] + (u32)(s32)(328);

label_7F060180:
    // 7F060180: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F060184u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F060184:
    ctx->downcount -= 17;
    // 7F060184: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F060188:
    // 7F060188: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F06018C:
    ctx->pc = 0x7F06018Cu;
    // 7F06018C: lfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F06018Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F060190:
    // 7F060190: or   r23, r24, r24
    {
        ctx->gpr[23] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F060194:
    ctx->pc = 0x7F060194u;
    // 7F060194: lfs     f3, -9140(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F060194u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F060198:
    ctx->pc = 0x7F060198u;
    // 7F060198: lfs     f0, -5708(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F060198u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5708);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F06019C:
    ctx->pc = 0x7F06019Cu;
    // 7F06019C: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F06019Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0601A0:
    ctx->pc = 0x7F0601A0u;
    // 7F0601A0: fmadds f2, f2, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0601A0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[3], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F0601A4:
    ctx->pc = 0x7F0601A4u;
    // 7F0601A4: lfs     f0, 8(r20)
    if (!ppc_fp_available_inline(ctx, 0x7F0601A4u)) return;
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0601A8:
    ctx->pc = 0x7F0601A8u;
    // 7F0601A8: fmadds f0, f1, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0601A8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[3], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F0601AC:
    ctx->pc = 0x7F0601ACu;
    // 7F0601AC: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0601ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0601B0:
    ctx->pc = 0x7F0601B0u;
    // 7F0601B0: lfs     f1, 332(r19)
    if (!ppc_fp_available_inline(ctx, 0x7F0601B0u)) return;
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0601B4:
    ctx->pc = 0x7F0601B4u;
    // 7F0601B4: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0601B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0601B8:
    ctx->pc = 0x7F0601B8u;
    // 7F0601B8: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0601B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0601BC:
    ctx->pc = 0x7F0601BCu;
    // 7F0601BC: lwz     r0, -20980(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0601C0:
    // 7F0601C0: cmpwi   r0, 3
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

label_7F0601C4:
    // 7F0601C4: bc    12, 2, 0x7F060760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060760;
        }
    }

label_7F0601C8:
    ctx->downcount -= 1;
    // 7F0601C8: bc    4, 0, 0x7F0601E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0601E4;
        }
    }

label_7F0601CC:
    ctx->downcount -= 2;
    // 7F0601CC: cmpwi   r0, 1
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

label_7F0601D0:
    // 7F0601D0: bc    12, 2, 0x7F060658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060658;
        }
    }

label_7F0601D4:
    ctx->downcount -= 1;
    // 7F0601D4: bc    4, 0, 0x7F060740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060740;
        }
    }

label_7F0601D8:
    ctx->downcount -= 2;
    // 7F0601D8: cmpwi   r0, 0
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

label_7F0601DC:
    // 7F0601DC: bc    4, 0, 0x7F0601F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0601F4;
        }
    }

label_7F0601E0:
    ctx->downcount -= 1;
    // 7F0601E0: b       0x7F060BD4
    {
            goto label_7F060BD4;
    }

label_7F0601E4:
    ctx->downcount -= 2;
    // 7F0601E4: cmpwi   r0, 5
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

label_7F0601E8:
    // 7F0601E8: bc    12, 2, 0x7F060B08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060B08;
        }
    }

label_7F0601EC:
    ctx->downcount -= 1;
    // 7F0601EC: bc    4, 0, 0x7F060BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060BD4;
        }
    }

label_7F0601F0:
    ctx->downcount -= 1;
    // 7F0601F0: b       0x7F0609B8
    {
            goto label_7F0609B8;
    }

label_7F0601F4:
    ctx->downcount -= 4;
    // 7F0601F4: addis   r6, r30, 1
    ctx->gpr[6] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F0601F8:
    ctx->pc = 0x7F0601F8u;
    // 7F0601F8: lwz     r0, -20096(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0601FC:
    // 7F0601FC: cmpwi   r0, 2
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

label_7F060200:
    // 7F060200: bc    4, 2, 0x7F0603EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0603EC;
        }
    }

label_7F060204:
    ctx->downcount -= 2;
    // 7F060204: cmpwi   r31, 2
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

label_7F060208:
    // 7F060208: bc    12, 2, 0x7F060300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060300;
        }
    }

label_7F06020C:
    ctx->downcount -= 1;
    // 7F06020C: bc    4, 0, 0x7F060220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060220;
        }
    }

label_7F060210:
    ctx->downcount -= 2;
    // 7F060210: cmpwi   r31, 0
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

label_7F060214:
    // 7F060214: bc    12, 2, 0x7F06022C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F06022C;
        }
    }

label_7F060218:
    ctx->downcount -= 1;
    // 7F060218: bc    4, 0, 0x7F060294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060294;
        }
    }

label_7F06021C:
    ctx->downcount -= 1;
    // 7F06021C: b       0x7F0603D4
    {
            goto label_7F0603D4;
    }

label_7F060220:
    ctx->downcount -= 2;
    // 7F060220: cmpwi   r31, 4
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

label_7F060224:
    // 7F060224: bc    4, 0, 0x7F0603D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0603D4;
        }
    }

label_7F060228:
    ctx->downcount -= 1;
    // 7F060228: b       0x7F06036C
    {
            goto label_7F06036C;
    }

label_7F06022C:
    ctx->downcount -= 19;
    // 7F06022C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F060230:
    // 7F060230: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F060234:
    // 7F060234: addi    r5, r3, -9116
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9116);

label_7F060238:
    ctx->pc = 0x7F060238u;
    // 7F060238: lfs     f1, -9112(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F060238u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F06023C:
    ctx->pc = 0x7F06023Cu;
    // 7F06023C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F06023Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F060240:
    // 7F060240: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F060244:
    // 7F060244: li      r6, 1023
    ctx->gpr[6] = (u32)(s32)(1023);

label_7F060248:
    // 7F060248: li      r0, -511
    ctx->gpr[0] = (u32)(s32)(-511);

label_7F06024C:
    ctx->pc = 0x7F06024Cu;
    // 7F06024C: stfs     f0, 3688(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F06024Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3688);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F060250:
    // 7F060250: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060254:
    ctx->pc = 0x7F060254u;
    // 7F060254: lfs     f0, -9184(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F060254u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F060258:
    // 7F060258: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06025C:
    ctx->pc = 0x7F06025Cu;
    // 7F06025C: stfs     f1, 3692(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F06025Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F060260:
    // 7F060260: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F060264:
    ctx->pc = 0x7F060264u;
    // 7F060264: stfs     f0, 3696(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F060264u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3696);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F060268:
    ctx->pc = 0x7F060268u;
    // 7F060268: sth     r6, 3704(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3704);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F06026C:
    ctx->pc = 0x7F06026Cu;
    // 7F06026C: sth     r6, 3706(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3706);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F060270:
    ctx->pc = 0x7F060270u;
    // 7F060270: sth     r0, 3708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3708);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F060274:
    // 7F060274: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F060278u;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F060278:
    ctx->downcount -= 4;
    // 7F060278: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06027C:
    // 7F06027C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060280:
    // 7F060280: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F060284:
    // 7F060284: bl      0x7F05E19C
    {
            ctx->lr = 0x7F060288u;
            ctx->pc = 0x7F05E19Cu;
            return;
    }

label_7F060288:
    ctx->downcount -= 3;
    // 7F060288: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F06028C:
    ctx->pc = 0x7F06028Cu;
    // 7F06028C: stw     r0, -20112(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060290:
    // 7F060290: b       0x7F0603D4
    {
            goto label_7F0603D4;
    }

label_7F060294:
    ctx->downcount -= 20;
    // 7F060294: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F060298:
    // 7F060298: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F06029C:
    // 7F06029C: addi    r5, r3, -9108
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9108);

label_7F0602A0:
    ctx->pc = 0x7F0602A0u;
    // 7F0602A0: lfs     f1, -9112(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0602A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0602A4:
    ctx->pc = 0x7F0602A4u;
    // 7F0602A4: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0602A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0602A8:
    // 7F0602A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0602AC:
    // 7F0602AC: li      r7, 1023
    ctx->gpr[7] = (u32)(s32)(1023);

label_7F0602B0:
    // 7F0602B0: li      r6, 2048
    ctx->gpr[6] = (u32)(s32)(2048);

label_7F0602B4:
    ctx->pc = 0x7F0602B4u;
    // 7F0602B4: stfs     f0, 21928(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0602B4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21928);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0602B8:
    // 7F0602B8: li      r0, -511
    ctx->gpr[0] = (u32)(s32)(-511);

label_7F0602BC:
    ctx->pc = 0x7F0602BCu;
    // 7F0602BC: lfs     f0, -9104(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0602BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0602C0:
    // 7F0602C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0602C4:
    ctx->pc = 0x7F0602C4u;
    // 7F0602C4: stfs     f1, 21932(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0602C4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21932);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0602C8:
    // 7F0602C8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0602CC:
    // 7F0602CC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F0602D0:
    ctx->pc = 0x7F0602D0u;
    // 7F0602D0: stfs     f0, 21936(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0602D0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21936);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0602D4:
    ctx->pc = 0x7F0602D4u;
    // 7F0602D4: sth     r7, 21944(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21944);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F0602D8:
    ctx->pc = 0x7F0602D8u;
    // 7F0602D8: sth     r6, 21946(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21946);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0602DC:
    ctx->pc = 0x7F0602DCu;
    // 7F0602DC: sth     r0, 21948(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21948);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0602E0:
    // 7F0602E0: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F0602E4u;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F0602E4:
    ctx->downcount -= 4;
    // 7F0602E4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0602E8:
    // 7F0602E8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0602EC:
    // 7F0602EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0602F0:
    // 7F0602F0: bl      0x7F05E19C
    {
            ctx->lr = 0x7F0602F4u;
            ctx->pc = 0x7F05E19Cu;
            return;
    }

label_7F0602F4:
    ctx->downcount -= 3;
    // 7F0602F4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0602F8:
    ctx->pc = 0x7F0602F8u;
    // 7F0602F8: stw     r0, -20112(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0602FC:
    // 7F0602FC: b       0x7F0603D4
    {
            goto label_7F0603D4;
    }

label_7F060300:
    ctx->downcount -= 20;
    // 7F060300: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F060304:
    // 7F060304: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F060308:
    // 7F060308: addi    r5, r3, -9100
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9100);

label_7F06030C:
    ctx->pc = 0x7F06030Cu;
    // 7F06030C: lfs     f1, -9112(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F06030Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F060310:
    ctx->pc = 0x7F060310u;
    // 7F060310: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F060310u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F060314:
    // 7F060314: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F060318:
    // 7F060318: li      r7, 1023
    ctx->gpr[7] = (u32)(s32)(1023);

label_7F06031C:
    // 7F06031C: li      r6, 1024
    ctx->gpr[6] = (u32)(s32)(1024);

label_7F060320:
    ctx->pc = 0x7F060320u;
    // 7F060320: stfs     f0, 25288(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F060320u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F060324:
    // 7F060324: li      r0, -511
    ctx->gpr[0] = (u32)(s32)(-511);

label_7F060328:
    ctx->pc = 0x7F060328u;
    // 7F060328: lfs     f0, -9096(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F060328u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F06032C:
    // 7F06032C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060330:
    ctx->pc = 0x7F060330u;
    // 7F060330: stfs     f1, 25292(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F060330u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25292);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F060334:
    // 7F060334: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060338:
    // 7F060338: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F06033C:
    ctx->pc = 0x7F06033Cu;
    // 7F06033C: stfs     f0, 25296(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F06033Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F060340:
    ctx->pc = 0x7F060340u;
    // 7F060340: sth     r7, 25304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25304);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F060344:
    ctx->pc = 0x7F060344u;
    // 7F060344: sth     r6, 25306(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25306);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F060348:
    ctx->pc = 0x7F060348u;
    // 7F060348: sth     r0, 25308(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25308);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F06034C:
    // 7F06034C: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F060350u;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F060350:
    ctx->downcount -= 4;
    // 7F060350: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060354:
    // 7F060354: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060358:
    // 7F060358: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F06035C:
    // 7F06035C: bl      0x7F05E19C
    {
            ctx->lr = 0x7F060360u;
            ctx->pc = 0x7F05E19Cu;
            return;
    }

label_7F060360:
    ctx->downcount -= 3;
    // 7F060360: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F060364:
    ctx->pc = 0x7F060364u;
    // 7F060364: stw     r0, -20112(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060368:
    // 7F060368: b       0x7F0603D4
    {
            goto label_7F0603D4;
    }

label_7F06036C:
    ctx->downcount -= 20;
    // 7F06036C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F060370:
    // 7F060370: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F060374:
    // 7F060374: addi    r5, r3, -9092
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9092);

label_7F060378:
    ctx->pc = 0x7F060378u;
    // 7F060378: lfs     f1, -9112(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F060378u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9112);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F06037C:
    ctx->pc = 0x7F06037Cu;
    // 7F06037C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F06037Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F060380:
    // 7F060380: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F060384:
    // 7F060384: li      r8, 1023
    ctx->gpr[8] = (u32)(s32)(1023);

label_7F060388:
    // 7F060388: li      r7, -1023
    ctx->gpr[7] = (u32)(s32)(-1023);

label_7F06038C:
    ctx->pc = 0x7F06038Cu;
    // 7F06038C: stfs     f0, -31608(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F06038Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31608);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F060390:
    // 7F060390: li      r0, 511
    ctx->gpr[0] = (u32)(s32)(511);

label_7F060394:
    ctx->pc = 0x7F060394u;
    // 7F060394: lfs     f0, -9108(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F060394u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9108);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F060398:
    // 7F060398: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06039C:
    ctx->pc = 0x7F06039Cu;
    // 7F06039C: stfs     f1, -31604(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F06039Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31604);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0603A0:
    // 7F0603A0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0603A4:
    // 7F0603A4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0603A8:
    ctx->pc = 0x7F0603A8u;
    // 7F0603A8: stfs     f0, -31600(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0603A8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31600);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0603AC:
    ctx->pc = 0x7F0603ACu;
    // 7F0603AC: sth     r8, -31592(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31592);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F0603B0:
    ctx->pc = 0x7F0603B0u;
    // 7F0603B0: sth     r7, -31590(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31590);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F0603B4:
    ctx->pc = 0x7F0603B4u;
    // 7F0603B4: sth     r0, -31588(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31588);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0603B8:
    // 7F0603B8: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F0603BCu;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F0603BC:
    ctx->downcount -= 4;
    // 7F0603BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0603C0:
    // 7F0603C0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0603C4:
    // 7F0603C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0603C8:
    // 7F0603C8: bl      0x7F05E19C
    {
            ctx->lr = 0x7F0603CCu;
            ctx->pc = 0x7F05E19Cu;
            return;
    }

label_7F0603CC:
    ctx->downcount -= 2;
    // 7F0603CC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0603D0:
    ctx->pc = 0x7F0603D0u;
    // 7F0603D0: stw     r0, -20112(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0603D4:
    ctx->downcount -= 5;
    // 7F0603D4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0603D8:
    // 7F0603D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0603DC:
    ctx->pc = 0x7F0603DCu;
    // 7F0603DC: stw     r0, -19824(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-19824);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0603E0:
    // 7F0603E0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0603E4:
    // 7F0603E4: bl      0x7F05FC50
    {
            ctx->lr = 0x7F0603E8u;
            ctx->pc = 0x7F05FC50u;
            return;
    }

label_7F0603E8:
    ctx->downcount -= 1;
    // 7F0603E8: b       0x7F060BD4
    {
            goto label_7F060BD4;
    }

label_7F0603EC:
    ctx->downcount -= 2;
    // 7F0603EC: cmpwi   r0, 3
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

label_7F0603F0:
    // 7F0603F0: bc    4, 2, 0x7F0605F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0605F0;
        }
    }

label_7F0603F4:
    ctx->downcount -= 2;
    // 7F0603F4: cmpwi   r31, 2
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

label_7F0603F8:
    // 7F0603F8: bc    12, 2, 0x7F060500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060500;
        }
    }

label_7F0603FC:
    ctx->downcount -= 1;
    // 7F0603FC: bc    4, 0, 0x7F060410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060410;
        }
    }

label_7F060400:
    ctx->downcount -= 2;
    // 7F060400: cmpwi   r31, 0
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

label_7F060404:
    // 7F060404: bc    12, 2, 0x7F06041C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F06041C;
        }
    }

label_7F060408:
    ctx->downcount -= 1;
    // 7F060408: bc    4, 0, 0x7F06048C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F06048C;
        }
    }

label_7F06040C:
    ctx->downcount -= 1;
    // 7F06040C: b       0x7F0605E4
    {
            goto label_7F0605E4;
    }

label_7F060410:
    ctx->downcount -= 2;
    // 7F060410: cmpwi   r31, 4
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

label_7F060414:
    // 7F060414: bc    4, 0, 0x7F0605E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0605E4;
        }
    }

label_7F060418:
    ctx->downcount -= 1;
    // 7F060418: b       0x7F060574
    {
            goto label_7F060574;
    }

label_7F06041C:
    ctx->downcount -= 14;
    // 7F06041C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F060420:
    // 7F060420: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F060424:
    // 7F060424: addi    r4, r3, -9088
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9088);

label_7F060428:
    // 7F060428: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06042C:
    ctx->pc = 0x7F06042Cu;
    // 7F06042C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F06042Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F060430:
    // 7F060430: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060434:
    // 7F060434: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F060438:
    ctx->pc = 0x7F060438u;
    // 7F060438: stfs     f0, 3688(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F060438u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3688);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F06043C:
    ctx->pc = 0x7F06043Cu;
    // 7F06043C: stfs     f0, 3692(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F06043Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F060440:
    ctx->pc = 0x7F060440u;
    // 7F060440: stfs     f0, 3696(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F060440u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3696);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F060444:
    ctx->pc = 0x7F060444u;
    // 7F060444: sth     r0, 3704(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3704);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F060448:
    ctx->pc = 0x7F060448u;
    // 7F060448: sth     r0, 3706(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3706);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F06044C:
    ctx->pc = 0x7F06044Cu;
    // 7F06044C: sth     r0, 3708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3708);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F060450:
    // 7F060450: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F060454u;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F060454:
    ctx->pc = 0x7F060454u;
    ctx->downcount -= 13;
    // 7F060454: lwz     r0, 480(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(480);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060458:
    // 7F060458: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06045C:
    // 7F06045C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060460:
    // 7F060460: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F060464:
    // 7F060464: mulli   r6, r0, 44
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)44);

label_7F060468:
    // 7F060468: addi    r0, r6, 240
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(240);

label_7F06046C:
    ctx->pc = 0x7F06046Cu;
    // 7F06046C: lwzx    r6, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F060470:
    ctx->pc = 0x7F060470u;
    // 7F060470: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060474:
    // 7F060474: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F060478:
    ctx->pc = 0x7F060478u;
    // 7F060478: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06047C:
    // 7F06047C: bl      0x7F05E19C
    {
            ctx->lr = 0x7F060480u;
            ctx->pc = 0x7F05E19Cu;
            return;
    }

label_7F060480:
    ctx->downcount -= 3;
    // 7F060480: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F060484:
    ctx->pc = 0x7F060484u;
    // 7F060484: stw     r0, -20112(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060488:
    // 7F060488: b       0x7F0605E4
    {
            goto label_7F0605E4;
    }

label_7F06048C:
    ctx->downcount -= 15;
    // 7F06048C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F060490:
    // 7F060490: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F060494:
    ctx->pc = 0x7F060494u;
    // 7F060494: lfs     f1, -9084(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F060494u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F060498:
    // 7F060498: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F06049C:
    ctx->pc = 0x7F06049Cu;
    // 7F06049C: lfs     f0, -9088(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F06049Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0604A0:
    // 7F0604A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0604A4:
    ctx->pc = 0x7F0604A4u;
    // 7F0604A4: stfs     f1, 21928(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0604A4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21928);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0604A8:
    // 7F0604A8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0604AC:
    // 7F0604AC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F0604B0:
    ctx->pc = 0x7F0604B0u;
    // 7F0604B0: stfs     f0, 21932(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0604B0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21932);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0604B4:
    ctx->pc = 0x7F0604B4u;
    // 7F0604B4: stfs     f0, 21936(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0604B4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21936);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0604B8:
    ctx->pc = 0x7F0604B8u;
    // 7F0604B8: sth     r0, 21944(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21944);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0604BC:
    ctx->pc = 0x7F0604BCu;
    // 7F0604BC: sth     r0, 21946(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21946);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0604C0:
    ctx->pc = 0x7F0604C0u;
    // 7F0604C0: sth     r0, 21948(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(21948);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0604C4:
    // 7F0604C4: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F0604C8u;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F0604C8:
    ctx->pc = 0x7F0604C8u;
    ctx->downcount -= 13;
    // 7F0604C8: lwz     r0, 480(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(480);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0604CC:
    // 7F0604CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0604D0:
    // 7F0604D0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0604D4:
    // 7F0604D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0604D8:
    // 7F0604D8: mulli   r6, r0, 44
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)44);

label_7F0604DC:
    // 7F0604DC: addi    r0, r6, 240
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(240);

label_7F0604E0:
    ctx->pc = 0x7F0604E0u;
    // 7F0604E0: lwzx    r6, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0604E4:
    ctx->pc = 0x7F0604E4u;
    // 7F0604E4: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0604E8:
    // 7F0604E8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0604EC:
    ctx->pc = 0x7F0604ECu;
    // 7F0604EC: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0604F0:
    // 7F0604F0: bl      0x7F05E19C
    {
            ctx->lr = 0x7F0604F4u;
            ctx->pc = 0x7F05E19Cu;
            return;
    }

label_7F0604F4:
    ctx->downcount -= 3;
    // 7F0604F4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0604F8:
    ctx->pc = 0x7F0604F8u;
    // 7F0604F8: stw     r0, -20112(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0604FC:
    // 7F0604FC: b       0x7F0605E4
    {
            goto label_7F0605E4;
    }

label_7F060500:
    ctx->downcount -= 15;
    // 7F060500: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F060504:
    // 7F060504: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F060508:
    ctx->pc = 0x7F060508u;
    // 7F060508: lfs     f1, -9088(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F060508u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F06050C:
    // 7F06050C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F060510:
    ctx->pc = 0x7F060510u;
    // 7F060510: lfs     f0, -9084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F060510u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F060514:
    // 7F060514: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060518:
    ctx->pc = 0x7F060518u;
    // 7F060518: stfs     f1, 25288(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F060518u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F06051C:
    // 7F06051C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060520:
    // 7F060520: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F060524:
    ctx->pc = 0x7F060524u;
    // 7F060524: stfs     f1, 25292(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F060524u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25292);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F060528:
    ctx->pc = 0x7F060528u;
    // 7F060528: stfs     f0, 25296(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F060528u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25296);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F06052C:
    ctx->pc = 0x7F06052Cu;
    // 7F06052C: sth     r0, 25304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25304);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F060530:
    ctx->pc = 0x7F060530u;
    // 7F060530: sth     r0, 25306(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25306);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F060534:
    ctx->pc = 0x7F060534u;
    // 7F060534: sth     r0, 25308(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(25308);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F060538:
    // 7F060538: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F06053Cu;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F06053C:
    ctx->pc = 0x7F06053Cu;
    ctx->downcount -= 13;
    // 7F06053C: lwz     r0, 480(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(480);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060540:
    // 7F060540: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060544:
    // 7F060544: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060548:
    // 7F060548: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F06054C:
    // 7F06054C: mulli   r6, r0, 44
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)44);

label_7F060550:
    // 7F060550: addi    r0, r6, 240
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(240);

label_7F060554:
    ctx->pc = 0x7F060554u;
    // 7F060554: lwzx    r6, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F060558:
    ctx->pc = 0x7F060558u;
    // 7F060558: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06055C:
    // 7F06055C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F060560:
    ctx->pc = 0x7F060560u;
    // 7F060560: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060564:
    // 7F060564: bl      0x7F05E19C
    {
            ctx->lr = 0x7F060568u;
            ctx->pc = 0x7F05E19Cu;
            return;
    }

label_7F060568:
    ctx->downcount -= 3;
    // 7F060568: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F06056C:
    ctx->pc = 0x7F06056Cu;
    // 7F06056C: stw     r0, -20112(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060570:
    // 7F060570: b       0x7F0605E4
    {
            goto label_7F0605E4;
    }

label_7F060574:
    ctx->downcount -= 15;
    // 7F060574: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F060578:
    // 7F060578: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F06057C:
    ctx->pc = 0x7F06057Cu;
    // 7F06057C: lfs     f1, -9084(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F06057Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F060580:
    // 7F060580: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F060584:
    ctx->pc = 0x7F060584u;
    // 7F060584: lfs     f0, -9088(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F060584u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F060588:
    // 7F060588: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06058C:
    ctx->pc = 0x7F06058Cu;
    // 7F06058C: stfs     f1, -31608(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F06058Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31608);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F060590:
    // 7F060590: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060594:
    // 7F060594: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F060598:
    ctx->pc = 0x7F060598u;
    // 7F060598: stfs     f0, -31604(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F060598u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31604);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F06059C:
    ctx->pc = 0x7F06059Cu;
    // 7F06059C: stfs     f1, -31600(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F06059Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31600);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0605A0:
    ctx->pc = 0x7F0605A0u;
    // 7F0605A0: sth     r0, -31592(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31592);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0605A4:
    ctx->pc = 0x7F0605A4u;
    // 7F0605A4: sth     r0, -31590(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31590);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0605A8:
    ctx->pc = 0x7F0605A8u;
    // 7F0605A8: sth     r0, -31588(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-31588);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0605AC:
    // 7F0605AC: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F0605B0u;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F0605B0:
    ctx->pc = 0x7F0605B0u;
    ctx->downcount -= 13;
    // 7F0605B0: lwz     r0, 480(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(480);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0605B4:
    // 7F0605B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0605B8:
    // 7F0605B8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0605BC:
    // 7F0605BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0605C0:
    // 7F0605C0: mulli   r6, r0, 44
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)44);

label_7F0605C4:
    // 7F0605C4: addi    r0, r6, 240
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(240);

label_7F0605C8:
    ctx->pc = 0x7F0605C8u;
    // 7F0605C8: lwzx    r6, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0605CC:
    ctx->pc = 0x7F0605CCu;
    // 7F0605CC: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0605D0:
    // 7F0605D0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0605D4:
    ctx->pc = 0x7F0605D4u;
    // 7F0605D4: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0605D8:
    // 7F0605D8: bl      0x7F05E19C
    {
            ctx->lr = 0x7F0605DCu;
            ctx->pc = 0x7F05E19Cu;
            return;
    }

label_7F0605DC:
    ctx->downcount -= 2;
    // 7F0605DC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0605E0:
    ctx->pc = 0x7F0605E0u;
    // 7F0605E0: stw     r0, -20112(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0605E4:
    ctx->downcount -= 3;
    // 7F0605E4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0605E8:
    ctx->pc = 0x7F0605E8u;
    // 7F0605E8: stw     r0, -19824(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-19824);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0605EC:
    // 7F0605EC: b       0x7F060BD4
    {
            goto label_7F060BD4;
    }

label_7F0605F0:
    ctx->downcount -= 2;
    // 7F0605F0: cmpwi   r0, 1
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

label_7F0605F4:
    // 7F0605F4: bc    4, 2, 0x7F060608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060608;
        }
    }

label_7F0605F8:
    ctx->downcount -= 4;
    // 7F0605F8: addis   r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_7F0605FC:
    // 7F0605FC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F060600:
    // 7F060600: addi    r3, r3, -28456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28456);

label_7F060604:
    ctx->pc = 0x7F060604u;
    // 7F060604: stwx    r0, r30, r3
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060608:
    ctx->downcount -= 4;
    // 7F060608: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F06060C:
    ctx->pc = 0x7F06060Cu;
    // 7F06060C: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060610:
    // 7F060610: cmpwi   r0, 1
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

label_7F060614:
    // 7F060614: bc    4, 2, 0x7F060638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060638;
        }
    }

label_7F060618:
    ctx->downcount -= 2;
    // 7F060618: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F06061C:
    // 7F06061C: bl      0x7F02A538
    {
            ctx->lr = 0x7F060620u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F060620:
    ctx->downcount -= 2;
    // 7F060620: cmpwi   r3, 0
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

label_7F060624:
    // 7F060624: bc    4, 2, 0x7F060638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060638;
        }
    }

label_7F060628:
    ctx->downcount -= 4;
    // 7F060628: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F06062C:
    // 7F06062C: li      r3, 1804
    ctx->gpr[3] = (u32)(s32)(1804);

label_7F060630:
    // 7F060630: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F060634:
    // 7F060634: bl      0x7F0117B8
    {
            ctx->lr = 0x7F060638u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F060638:
    ctx->downcount -= 4;
    // 7F060638: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06063C:
    // 7F06063C: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F060640:
    // 7F060640: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060644:
    // 7F060644: bl      0x7F05EDF4
    {
            ctx->lr = 0x7F060648u;
            ctx->pc = 0x7F05EDF4u;
            return;
    }

label_7F060648:
    ctx->downcount -= 3;
    // 7F060648: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06064C:
    // 7F06064C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060650:
    // 7F060650: bl      0x7F05EDC0
    {
            ctx->lr = 0x7F060654u;
            ctx->pc = 0x7F05EDC0u;
            return;
    }

label_7F060654:
    ctx->downcount -= 1;
    // 7F060654: b       0x7F060BD4
    {
            goto label_7F060BD4;
    }

label_7F060658:
    ctx->downcount -= 4;
    // 7F060658: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F06065C:
    ctx->pc = 0x7F06065Cu;
    // 7F06065C: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060660:
    // 7F060660: cmpwi   r0, 1
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

label_7F060664:
    // 7F060664: bc    4, 2, 0x7F060688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060688;
        }
    }

label_7F060668:
    ctx->downcount -= 2;
    // 7F060668: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F06066C:
    // 7F06066C: bl      0x7F02A538
    {
            ctx->lr = 0x7F060670u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F060670:
    ctx->downcount -= 2;
    // 7F060670: cmpwi   r3, 0
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

label_7F060674:
    // 7F060674: bc    4, 2, 0x7F060688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060688;
        }
    }

label_7F060678:
    ctx->downcount -= 4;
    // 7F060678: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F06067C:
    // 7F06067C: li      r3, 1804
    ctx->gpr[3] = (u32)(s32)(1804);

label_7F060680:
    // 7F060680: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F060684:
    // 7F060684: bl      0x7F0117B8
    {
            ctx->lr = 0x7F060688u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F060688:
    ctx->pc = 0x7F060688u;
    ctx->downcount -= 3;
    // 7F060688: lwz     r0, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06068C:
    // 7F06068C: cmpwi   r0, 32
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

label_7F060690:
    // 7F060690: bc    4, 2, 0x7F0606B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0606B4;
        }
    }

label_7F060694:
    ctx->downcount -= 4;
    // 7F060694: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060698:
    // 7F060698: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F06069C:
    // 7F06069C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0606A0:
    // 7F0606A0: bl      0x7F05E274
    {
            ctx->lr = 0x7F0606A4u;
            ctx->pc = 0x7F05E274u;
            return;
    }

label_7F0606A4:
    ctx->downcount -= 3;
    // 7F0606A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0606A8:
    // 7F0606A8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0606AC:
    // 7F0606AC: bl      0x7F05DB68
    {
            ctx->lr = 0x7F0606B0u;
            ctx->pc = 0x7F05DB68u;
            return;
    }

label_7F0606B0:
    ctx->downcount -= 1;
    // 7F0606B0: b       0x7F0606E4
    {
            goto label_7F0606E4;
    }

label_7F0606B4:
    ctx->downcount -= 3;
    // 7F0606B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0606B8:
    // 7F0606B8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0606BC:
    // 7F0606BC: bl      0x7F05DC30
    {
            ctx->lr = 0x7F0606C0u;
            ctx->pc = 0x7F05DC30u;
            return;
    }

label_7F0606C0:
    ctx->pc = 0x7F0606C0u;
    ctx->downcount -= 6;
    // 7F0606C0: lwz     r0, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0606C4:
    // 7F0606C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0606C8:
    // 7F0606C8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0606CC:
    // 7F0606CC: subfic  r0, r0, 32
    {
        u64 res = (u64)(u32)(s32)(32) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F0606D0:
    // 7F0606D0: rlwinm r5, r0, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F0606D4:
    // 7F0606D4: bl      0x7F05E274
    {
            ctx->lr = 0x7F0606D8u;
            ctx->pc = 0x7F05E274u;
            return;
    }

label_7F0606D8:
    ctx->downcount -= 3;
    // 7F0606D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0606DC:
    // 7F0606DC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0606E0:
    // 7F0606E0: bl      0x7F05DB68
    {
            ctx->lr = 0x7F0606E4u;
            ctx->pc = 0x7F05DB68u;
            return;
    }

label_7F0606E4:
    ctx->downcount -= 2;
    // 7F0606E4: cmpwi   r31, 0
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

label_7F0606E8:
    // 7F0606E8: bc    12, 2, 0x7F0606F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0606F4;
        }
    }

label_7F0606EC:
    ctx->downcount -= 2;
    // 7F0606EC: cmpwi   r31, 1
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

label_7F0606F0:
    // 7F0606F0: bc    4, 2, 0x7F060704
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060704;
        }
    }

label_7F0606F4:
    ctx->pc = 0x7F0606F4u;
    ctx->downcount -= 4;
    // 7F0606F4: lha     r3, 346(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(346);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0606F8:
    // 7F0606F8: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F0606FC:
    ctx->pc = 0x7F0606FCu;
    // 7F0606FC: sth     r0, 346(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(346);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F060700:
    // 7F060700: b       0x7F060710
    {
            goto label_7F060710;
    }

label_7F060704:
    ctx->pc = 0x7F060704u;
    ctx->downcount -= 3;
    // 7F060704: lha     r3, 346(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(346);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F060708:
    // 7F060708: addi    r0, r3, -16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16);

label_7F06070C:
    ctx->pc = 0x7F06070Cu;
    // 7F06070C: sth     r0, 346(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(346);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F060710:
    ctx->downcount -= 4;
    // 7F060710: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060714:
    // 7F060714: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F060718:
    // 7F060718: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F06071C:
    // 7F06071C: bl      0x7F05EDF4
    {
            ctx->lr = 0x7F060720u;
            ctx->pc = 0x7F05EDF4u;
            return;
    }

label_7F060720:
    ctx->downcount -= 3;
    // 7F060720: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060724:
    // 7F060724: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060728:
    // 7F060728: bl      0x7F05ED84
    {
            ctx->lr = 0x7F06072Cu;
            ctx->pc = 0x7F05ED84u;
            return;
    }

label_7F06072C:
    ctx->downcount -= 4;
    // 7F06072C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060730:
    // 7F060730: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060734:
    // 7F060734: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F060738:
    // 7F060738: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F06073Cu;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F06073C:
    ctx->downcount -= 1;
    // 7F06073C: b       0x7F060BD4
    {
            goto label_7F060BD4;
    }

label_7F060740:
    ctx->downcount -= 3;
    // 7F060740: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060744:
    // 7F060744: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060748:
    // 7F060748: bl      0x7F05ED84
    {
            ctx->lr = 0x7F06074Cu;
            ctx->pc = 0x7F05ED84u;
            return;
    }

label_7F06074C:
    ctx->downcount -= 4;
    // 7F06074C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060750:
    // 7F060750: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060754:
    // 7F060754: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F060758:
    // 7F060758: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F06075Cu;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F06075C:
    ctx->downcount -= 1;
    // 7F06075C: b       0x7F060BD4
    {
            goto label_7F060BD4;
    }

label_7F060760:
    ctx->downcount -= 6;
    // 7F060760: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F060764:
    ctx->pc = 0x7F060764u;
    // 7F060764: lwz     r4, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F060768:
    ctx->pc = 0x7F060768u;
    // 7F060768: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06076C:
    // 7F06076C: subfic  r22, r4, 32
    {
        u64 res = (u64)(u32)(s32)(32) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[22] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F060770:
    // 7F060770: cmpwi   r0, 1
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

label_7F060774:
    // 7F060774: bc    4, 2, 0x7F060798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060798;
        }
    }

label_7F060778:
    ctx->downcount -= 2;
    // 7F060778: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F06077C:
    // 7F06077C: bl      0x7F02A538
    {
            ctx->lr = 0x7F060780u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F060780:
    ctx->downcount -= 2;
    // 7F060780: cmpwi   r3, 0
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

label_7F060784:
    // 7F060784: bc    4, 2, 0x7F060798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060798;
        }
    }

label_7F060788:
    ctx->downcount -= 4;
    // 7F060788: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F06078C:
    // 7F06078C: li      r3, 1804
    ctx->gpr[3] = (u32)(s32)(1804);

label_7F060790:
    // 7F060790: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F060794:
    // 7F060794: bl      0x7F0117B8
    {
            ctx->lr = 0x7F060798u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F060798:
    ctx->downcount -= 5;
    // 7F060798: cmpwi   r31, 2
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

label_7F06079C:
    // 7F06079C: srawi r0, r22, 1
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

label_7F0607A0:
    // 7F0607A0: addze  r8, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[8] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F0607A4:
    // 7F0607A4: rlwinm r6, r22, 1, 0, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[22], 1u) & 0xFFFFFFFEu;
    }

label_7F0607A8:
    // 7F0607A8: bc    12, 2, 0x7F060834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060834;
        }
    }

label_7F0607AC:
    ctx->downcount -= 1;
    // 7F0607AC: bc    4, 0, 0x7F0607C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0607C0;
        }
    }

label_7F0607B0:
    ctx->downcount -= 2;
    // 7F0607B0: cmpwi   r31, 0
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

label_7F0607B4:
    // 7F0607B4: bc    12, 2, 0x7F0607CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0607CC;
        }
    }

label_7F0607B8:
    ctx->downcount -= 1;
    // 7F0607B8: bc    4, 0, 0x7F060800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060800;
        }
    }

label_7F0607BC:
    ctx->downcount -= 1;
    // 7F0607BC: b       0x7F060894
    {
            goto label_7F060894;
    }

label_7F0607C0:
    ctx->downcount -= 2;
    // 7F0607C0: cmpwi   r31, 4
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

label_7F0607C4:
    // 7F0607C4: bc    4, 0, 0x7F060894
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060894;
        }
    }

label_7F0607C8:
    ctx->downcount -= 1;
    // 7F0607C8: b       0x7F060868
    {
            goto label_7F060868;
    }

label_7F0607CC:
    ctx->downcount -= 12;
    // 7F0607CC: neg  r8, r8
    {
        u32 a = ctx->gpr[8];
        ctx->gpr[8] = (~a) + 1u;
    }

label_7F0607D0:
    // 7F0607D0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F0607D4:
    ctx->pc = 0x7F0607D4u;
    // 7F0607D4: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0607D8:
    // 7F0607D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0607DC:
    // 7F0607DC: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F0607E0:
    // 7F0607E0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0607E4:
    ctx->pc = 0x7F0607E4u;
    // 7F0607E4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0607E8:
    // 7F0607E8: or   r6, r22, r22
    {
        ctx->gpr[6] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F0607EC:
    // 7F0607EC: or   r7, r22, r22
    {
        ctx->gpr[7] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F0607F0:
    // 7F0607F0: or   r9, r22, r22
    {
        ctx->gpr[9] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F0607F4:
    // 7F0607F4: or   r10, r8, r8
    {
        ctx->gpr[10] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F0607F8:
    // 7F0607F8: bl      0x7F05ECB4
    {
            ctx->lr = 0x7F0607FCu;
            ctx->pc = 0x7F05ECB4u;
            return;
    }

label_7F0607FC:
    ctx->downcount -= 1;
    // 7F0607FC: b       0x7F060894
    {
            goto label_7F060894;
    }

label_7F060800:
    ctx->downcount -= 12;
    // 7F060800: neg  r0, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F060804:
    // 7F060804: neg  r9, r8
    {
        u32 a = ctx->gpr[8];
        ctx->gpr[9] = (~a) + 1u;
    }

label_7F060808:
    ctx->pc = 0x7F060808u;
    // 7F060808: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06080C:
    // 7F06080C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F060810:
    // 7F060810: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060814:
    // 7F060814: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F060818:
    ctx->pc = 0x7F060818u;
    // 7F060818: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06081C:
    // 7F06081C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060820:
    // 7F060820: or   r6, r22, r22
    {
        ctx->gpr[6] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F060824:
    // 7F060824: or   r7, r22, r22
    {
        ctx->gpr[7] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F060828:
    // 7F060828: or   r10, r9, r9
    {
        ctx->gpr[10] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F06082C:
    // 7F06082C: bl      0x7F05ECB4
    {
            ctx->lr = 0x7F060830u;
            ctx->pc = 0x7F05ECB4u;
            return;
    }

label_7F060830:
    ctx->downcount -= 1;
    // 7F060830: b       0x7F060894
    {
            goto label_7F060894;
    }

label_7F060834:
    ctx->downcount -= 12;
    // 7F060834: neg  r0, r6
    {
        u32 a = ctx->gpr[6];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F060838:
    // 7F060838: neg  r7, r8
    {
        u32 a = ctx->gpr[8];
        ctx->gpr[7] = (~a) + 1u;
    }

label_7F06083C:
    ctx->pc = 0x7F06083Cu;
    // 7F06083C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060840:
    // 7F060840: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F060844:
    // 7F060844: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060848:
    // 7F060848: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F06084C:
    ctx->pc = 0x7F06084Cu;
    // 7F06084C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060850:
    // 7F060850: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060854:
    // 7F060854: or   r8, r7, r7
    {
        ctx->gpr[8] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F060858:
    // 7F060858: or   r9, r22, r22
    {
        ctx->gpr[9] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F06085C:
    // 7F06085C: or   r10, r7, r7
    {
        ctx->gpr[10] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F060860:
    // 7F060860: bl      0x7F05ECB4
    {
            ctx->lr = 0x7F060864u;
            ctx->pc = 0x7F05ECB4u;
            return;
    }

label_7F060864:
    ctx->downcount -= 1;
    // 7F060864: b       0x7F060894
    {
            goto label_7F060894;
    }

label_7F060868:
    ctx->pc = 0x7F060868u;
    ctx->downcount -= 11;
    // 7F060868: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F06086C:
    // 7F06086C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F060870:
    // 7F060870: neg  r7, r22
    {
        u32 a = ctx->gpr[22];
        ctx->gpr[7] = (~a) + 1u;
    }

label_7F060874:
    // 7F060874: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060878:
    ctx->pc = 0x7F060878u;
    // 7F060878: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06087C:
    // 7F06087C: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F060880:
    // 7F060880: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060884:
    // 7F060884: or   r6, r22, r22
    {
        ctx->gpr[6] = ctx->gpr[22] | ctx->gpr[22];
    }

label_7F060888:
    // 7F060888: or   r9, r7, r7
    {
        ctx->gpr[9] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F06088C:
    // 7F06088C: neg  r10, r8
    {
        u32 a = ctx->gpr[8];
        ctx->gpr[10] = (~a) + 1u;
    }

label_7F060890:
    // 7F060890: bl      0x7F05ECB4
    {
            ctx->lr = 0x7F060894u;
            ctx->pc = 0x7F05ECB4u;
            return;
    }

label_7F060894:
    ctx->downcount -= 4;
    // 7F060894: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060898:
    // 7F060898: or   r4, r21, r21
    {
        ctx->gpr[4] = ctx->gpr[21] | ctx->gpr[21];
    }

label_7F06089C:
    // 7F06089C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0608A0:
    // 7F0608A0: bl      0x7F05EDF4
    {
            ctx->lr = 0x7F0608A4u;
            ctx->pc = 0x7F05EDF4u;
            return;
    }

label_7F0608A4:
    ctx->pc = 0x7F0608A4u;
    ctx->downcount -= 6;
    // 7F0608A4: lwz     r3, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0608A8:
    // 7F0608A8: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0608AC:
    ctx->pc = 0x7F0608ACu;
    // 7F0608AC: stw     r0, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0608B0:
    ctx->pc = 0x7F0608B0u;
    // 7F0608B0: lwz     r0, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0608B4:
    // 7F0608B4: cmpwi   r0, 0
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

label_7F0608B8:
    // 7F0608B8: bc    4, 2, 0x7F060BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060BD4;
        }
    }

label_7F0608BC:
    ctx->pc = 0x7F0608BCu;
    ctx->downcount -= 7;
    // 7F0608BC: lwz     r3, -20980(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(-20980);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0608C0:
    // 7F0608C0: cmpwi   r31, 2
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

label_7F0608C4:
    // 7F0608C4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0608C8:
    // 7F0608C8: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0608CC:
    ctx->pc = 0x7F0608CCu;
    // 7F0608CC: stw     r3, -20980(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(-20980);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0608D0:
    ctx->pc = 0x7F0608D0u;
    // 7F0608D0: stw     r0, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0608D4:
    // 7F0608D4: bc    12, 2, 0x7F060948
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060948;
        }
    }

label_7F0608D8:
    ctx->downcount -= 1;
    // 7F0608D8: bc    4, 0, 0x7F0608EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0608EC;
        }
    }

label_7F0608DC:
    ctx->downcount -= 2;
    // 7F0608DC: cmpwi   r31, 0
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

label_7F0608E0:
    // 7F0608E0: bc    12, 2, 0x7F0608F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0608F8;
        }
    }

label_7F0608E4:
    ctx->downcount -= 1;
    // 7F0608E4: bc    4, 0, 0x7F060920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060920;
        }
    }

label_7F0608E8:
    ctx->downcount -= 1;
    // 7F0608E8: b       0x7F060994
    {
            goto label_7F060994;
    }

label_7F0608EC:
    ctx->downcount -= 2;
    // 7F0608EC: cmpwi   r31, 4
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

label_7F0608F0:
    // 7F0608F0: bc    4, 0, 0x7F060994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060994;
        }
    }

label_7F0608F4:
    ctx->downcount -= 1;
    // 7F0608F4: b       0x7F060970
    {
            goto label_7F060970;
    }

label_7F0608F8:
    ctx->downcount -= 9;
    // 7F0608F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0608FC:
    // 7F0608FC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060900:
    // 7F060900: li      r5, 896
    ctx->gpr[5] = (u32)(s32)(896);

label_7F060904:
    // 7F060904: li      r6, 1024
    ctx->gpr[6] = (u32)(s32)(1024);

label_7F060908:
    // 7F060908: li      r7, -512
    ctx->gpr[7] = (u32)(s32)(-512);

label_7F06090C:
    // 7F06090C: li      r8, -4000
    ctx->gpr[8] = (u32)(s32)(-4000);

label_7F060910:
    // 7F060910: li      r9, 750
    ctx->gpr[9] = (u32)(s32)(750);

label_7F060914:
    // 7F060914: li      r10, -3500
    ctx->gpr[10] = (u32)(s32)(-3500);

label_7F060918:
    // 7F060918: bl      0x7F05EBA4
    {
            ctx->lr = 0x7F06091Cu;
            ctx->pc = 0x7F05EBA4u;
            return;
    }

label_7F06091C:
    ctx->downcount -= 1;
    // 7F06091C: b       0x7F060994
    {
            goto label_7F060994;
    }

label_7F060920:
    ctx->downcount -= 9;
    // 7F060920: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060924:
    // 7F060924: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060928:
    // 7F060928: li      r5, 896
    ctx->gpr[5] = (u32)(s32)(896);

label_7F06092C:
    // 7F06092C: li      r6, 2048
    ctx->gpr[6] = (u32)(s32)(2048);

label_7F060930:
    // 7F060930: li      r7, -512
    ctx->gpr[7] = (u32)(s32)(-512);

label_7F060934:
    // 7F060934: li      r8, 8000
    ctx->gpr[8] = (u32)(s32)(8000);

label_7F060938:
    // 7F060938: li      r9, 750
    ctx->gpr[9] = (u32)(s32)(750);

label_7F06093C:
    // 7F06093C: li      r10, -750
    ctx->gpr[10] = (u32)(s32)(-750);

label_7F060940:
    // 7F060940: bl      0x7F05EBA4
    {
            ctx->lr = 0x7F060944u;
            ctx->pc = 0x7F05EBA4u;
            return;
    }

label_7F060944:
    ctx->downcount -= 1;
    // 7F060944: b       0x7F060994
    {
            goto label_7F060994;
    }

label_7F060948:
    ctx->downcount -= 9;
    // 7F060948: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06094C:
    // 7F06094C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060950:
    // 7F060950: li      r5, 896
    ctx->gpr[5] = (u32)(s32)(896);

label_7F060954:
    // 7F060954: li      r6, 1024
    ctx->gpr[6] = (u32)(s32)(1024);

label_7F060958:
    // 7F060958: li      r7, -512
    ctx->gpr[7] = (u32)(s32)(-512);

label_7F06095C:
    // 7F06095C: li      r8, -8000
    ctx->gpr[8] = (u32)(s32)(-8000);

label_7F060960:
    // 7F060960: li      r9, 750
    ctx->gpr[9] = (u32)(s32)(750);

label_7F060964:
    // 7F060964: li      r10, 5000
    ctx->gpr[10] = (u32)(s32)(5000);

label_7F060968:
    // 7F060968: bl      0x7F05EBA4
    {
            ctx->lr = 0x7F06096Cu;
            ctx->pc = 0x7F05EBA4u;
            return;
    }

label_7F06096C:
    ctx->downcount -= 1;
    // 7F06096C: b       0x7F060994
    {
            goto label_7F060994;
    }

label_7F060970:
    ctx->downcount -= 9;
    // 7F060970: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060974:
    // 7F060974: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060978:
    // 7F060978: li      r5, 896
    ctx->gpr[5] = (u32)(s32)(896);

label_7F06097C:
    // 7F06097C: li      r6, -1024
    ctx->gpr[6] = (u32)(s32)(-1024);

label_7F060980:
    // 7F060980: li      r7, 512
    ctx->gpr[7] = (u32)(s32)(512);

label_7F060984:
    // 7F060984: li      r8, 4000
    ctx->gpr[8] = (u32)(s32)(4000);

label_7F060988:
    // 7F060988: li      r9, 750
    ctx->gpr[9] = (u32)(s32)(750);

label_7F06098C:
    // 7F06098C: li      r10, 8000
    ctx->gpr[10] = (u32)(s32)(8000);

label_7F060990:
    // 7F060990: bl      0x7F05EBA4
    {
            ctx->lr = 0x7F060994u;
            ctx->pc = 0x7F05EBA4u;
            return;
    }

label_7F060994:
    ctx->downcount -= 4;
    // 7F060994: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F060998:
    ctx->pc = 0x7F060998u;
    // 7F060998: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06099C:
    // 7F06099C: cmpwi   r0, 1
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

label_7F0609A0:
    // 7F0609A0: bc    4, 2, 0x7F060BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060BD4;
        }
    }

label_7F0609A4:
    ctx->downcount -= 4;
    // 7F0609A4: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0609A8:
    // 7F0609A8: li      r3, 1804
    ctx->gpr[3] = (u32)(s32)(1804);

label_7F0609AC:
    // 7F0609AC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0609B0:
    // 7F0609B0: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0609B4u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0609B4:
    ctx->downcount -= 1;
    // 7F0609B4: b       0x7F060BD4
    {
            goto label_7F060BD4;
    }

label_7F0609B8:
    ctx->downcount -= 4;
    // 7F0609B8: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F0609BC:
    ctx->pc = 0x7F0609BCu;
    // 7F0609BC: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0609C0:
    // 7F0609C0: cmpwi   r0, 1
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

label_7F0609C4:
    // 7F0609C4: bc    4, 2, 0x7F0609E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0609E8;
        }
    }

label_7F0609C8:
    ctx->downcount -= 2;
    // 7F0609C8: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F0609CC:
    // 7F0609CC: bl      0x7F02A538
    {
            ctx->lr = 0x7F0609D0u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F0609D0:
    ctx->downcount -= 2;
    // 7F0609D0: cmpwi   r3, 0
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

label_7F0609D4:
    // 7F0609D4: bc    4, 2, 0x7F0609E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0609E8;
        }
    }

label_7F0609D8:
    ctx->downcount -= 4;
    // 7F0609D8: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0609DC:
    // 7F0609DC: li      r3, 1804
    ctx->gpr[3] = (u32)(s32)(1804);

label_7F0609E0:
    // 7F0609E0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0609E4:
    // 7F0609E4: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0609E8u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0609E8:
    ctx->pc = 0x7F0609E8u;
    ctx->downcount -= 9;
    // 7F0609E8: lwz     r5, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0609EC:
    // 7F0609EC: addis   r4, r28, 1
    ctx->gpr[4] = ctx->gpr[28] + ((u32)(s32)(1) << 16);

label_7F0609F0:
    // 7F0609F0: addi    r4, r4, -20948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20948);

label_7F0609F4:
    // 7F0609F4: addi    r3, r25, 328
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(328);

label_7F0609F8:
    // 7F0609F8: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F0609FC:
    // 7F0609FC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F060A00:
    ctx->pc = 0x7F060A00u;
    // 7F060A00: stw     r0, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060A04:
    // 7F060A04: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F060A08:
    // 7F060A08: bl      0x7F05EAE4
    {
            ctx->lr = 0x7F060A0Cu;
            ctx->pc = 0x7F05EAE4u;
            return;
    }

label_7F060A0C:
    ctx->downcount -= 6;
    // 7F060A0C: add   r19, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_7F060A10:
    // 7F060A10: addi    r3, r25, 344
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(344);

label_7F060A14:
    // 7F060A14: addis   r4, r19, 1
    ctx->gpr[4] = ctx->gpr[19] + ((u32)(s32)(1) << 16);

label_7F060A18:
    // 7F060A18: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F060A1C:
    // 7F060A1C: addi    r4, r4, -20884
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20884);

label_7F060A20:
    // 7F060A20: bl      0x7F05EA94
    {
            ctx->lr = 0x7F060A24u;
            ctx->pc = 0x7F05EA94u;
            return;
    }

label_7F060A24:
    ctx->downcount -= 2;
    // 7F060A24: cmpwi   r31, 2
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

label_7F060A28:
    // 7F060A28: bc    12, 2, 0x7F060A74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060A74;
        }
    }

label_7F060A2C:
    ctx->downcount -= 1;
    // 7F060A2C: bc    4, 0, 0x7F060A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060A40;
        }
    }

label_7F060A30:
    ctx->downcount -= 2;
    // 7F060A30: cmpwi   r31, 0
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

label_7F060A34:
    // 7F060A34: bc    12, 2, 0x7F060A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060A4C;
        }
    }

label_7F060A38:
    ctx->downcount -= 1;
    // 7F060A38: bc    4, 0, 0x7F060A60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060A60;
        }
    }

label_7F060A3C:
    ctx->downcount -= 1;
    // 7F060A3C: b       0x7F060A98
    {
            goto label_7F060A98;
    }

label_7F060A40:
    ctx->downcount -= 2;
    // 7F060A40: cmpwi   r31, 4
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

label_7F060A44:
    // 7F060A44: bc    4, 0, 0x7F060A98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060A98;
        }
    }

label_7F060A48:
    ctx->downcount -= 1;
    // 7F060A48: b       0x7F060A88
    {
            goto label_7F060A88;
    }

label_7F060A4C:
    ctx->downcount -= 4;
    // 7F060A4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060A50:
    // 7F060A50: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060A54:
    // 7F060A54: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F060A58:
    // 7F060A58: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F060A5Cu;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F060A5C:
    ctx->downcount -= 1;
    // 7F060A5C: b       0x7F060A98
    {
            goto label_7F060A98;
    }

label_7F060A60:
    ctx->downcount -= 4;
    // 7F060A60: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060A64:
    // 7F060A64: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060A68:
    // 7F060A68: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F060A6C:
    // 7F060A6C: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F060A70u;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F060A70:
    ctx->downcount -= 1;
    // 7F060A70: b       0x7F060A98
    {
            goto label_7F060A98;
    }

label_7F060A74:
    ctx->downcount -= 4;
    // 7F060A74: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060A78:
    // 7F060A78: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060A7C:
    // 7F060A7C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F060A80:
    // 7F060A80: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F060A84u;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F060A84:
    ctx->downcount -= 1;
    // 7F060A84: b       0x7F060A98
    {
            goto label_7F060A98;
    }

label_7F060A88:
    ctx->downcount -= 4;
    // 7F060A88: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060A8C:
    // 7F060A8C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060A90:
    // 7F060A90: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F060A94:
    // 7F060A94: bl      0x7F05EC2C
    {
            ctx->lr = 0x7F060A98u;
            ctx->pc = 0x7F05EC2Cu;
            return;
    }

label_7F060A98:
    ctx->pc = 0x7F060A98u;
    ctx->downcount -= 3;
    // 7F060A98: lwz     r0, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060A9C:
    // 7F060A9C: cmpwi   r0, 0
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

label_7F060AA0:
    // 7F060AA0: bc    4, 2, 0x7F060BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060BD4;
        }
    }

label_7F060AA4:
    ctx->pc = 0x7F060AA4u;
    ctx->downcount -= 12;
    // 7F060AA4: lwz     r3, -20980(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(-20980);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F060AA8:
    // 7F060AA8: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F060AAC:
    // 7F060AAC: addis   r4, r19, 1
    ctx->gpr[4] = ctx->gpr[19] + ((u32)(s32)(1) << 16);

label_7F060AB0:
    // 7F060AB0: li      r0, 1024
    ctx->gpr[0] = (u32)(s32)(1024);

label_7F060AB4:
    // 7F060AB4: addi    r6, r3, 1
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(1);

label_7F060AB8:
    // 7F060AB8: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F060ABC:
    ctx->pc = 0x7F060ABCu;
    // 7F060ABC: stw     r6, -20980(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(-20980);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F060AC0:
    ctx->pc = 0x7F060AC0u;
    // 7F060AC0: stw     r5, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F060AC4:
    ctx->pc = 0x7F060AC4u;
    // 7F060AC4: sth     r0, -20884(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20884);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F060AC8:
    ctx->pc = 0x7F060AC8u;
    // 7F060AC8: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060ACC:
    // 7F060ACC: cmpwi   r0, 1
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

label_7F060AD0:
    // 7F060AD0: bc    4, 2, 0x7F060AE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060AE4;
        }
    }

label_7F060AD4:
    ctx->downcount -= 4;
    // 7F060AD4: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F060AD8:
    // 7F060AD8: li      r3, 1803
    ctx->gpr[3] = (u32)(s32)(1803);

label_7F060ADC:
    // 7F060ADC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F060AE0:
    // 7F060AE0: bl      0x7F0117B8
    {
            ctx->lr = 0x7F060AE4u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F060AE4:
    ctx->downcount -= 4;
    // 7F060AE4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F060AE8:
    // 7F060AE8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F060AEC:
    // 7F060AEC: addi    r3, r3, 6560
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6560);

label_7F060AF0:
    // 7F060AF0: bl      0x7F013B6C
    {
            ctx->lr = 0x7F060AF4u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F060AF4:
    ctx->downcount -= 4;
    // 7F060AF4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F060AF8:
    // 7F060AF8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F060AFC:
    // 7F060AFC: addi    r3, r3, 6572
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6572);

label_7F060B00:
    // 7F060B00: bl      0x7F013B6C
    {
            ctx->lr = 0x7F060B04u;
            ctx->pc = 0x7F013B6Cu;
            return;
    }

label_7F060B04:
    ctx->downcount -= 1;
    // 7F060B04: b       0x7F060BD4
    {
            goto label_7F060BD4;
    }

label_7F060B08:
    ctx->downcount -= 3;
    // 7F060B08: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060B0C:
    // 7F060B0C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060B10:
    // 7F060B10: bl      0x7F05FC50
    {
            ctx->lr = 0x7F060B14u;
            ctx->pc = 0x7F05FC50u;
            return;
    }

label_7F060B14:
    ctx->pc = 0x7F060B14u;
    ctx->downcount -= 9;
    // 7F060B14: lwz     r5, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F060B18:
    // 7F060B18: addis   r4, r28, 1
    ctx->gpr[4] = ctx->gpr[28] + ((u32)(s32)(1) << 16);

label_7F060B1C:
    // 7F060B1C: addi    r4, r4, -20948
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20948);

label_7F060B20:
    // 7F060B20: addi    r3, r25, 328
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(328);

label_7F060B24:
    // 7F060B24: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F060B28:
    // 7F060B28: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F060B2C:
    ctx->pc = 0x7F060B2Cu;
    // 7F060B2C: stw     r0, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060B30:
    // 7F060B30: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F060B34:
    // 7F060B34: bl      0x7F05EAE4
    {
            ctx->lr = 0x7F060B38u;
            ctx->pc = 0x7F05EAE4u;
            return;
    }

label_7F060B38:
    ctx->downcount -= 6;
    // 7F060B38: addis   r4, r29, 1
    ctx->gpr[4] = ctx->gpr[29] + ((u32)(s32)(1) << 16);

label_7F060B3C:
    // 7F060B3C: addi    r3, r25, 344
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(344);

label_7F060B40:
    // 7F060B40: addi    r4, r4, -20884
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20884);

label_7F060B44:
    // 7F060B44: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F060B48:
    // 7F060B48: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F060B4C:
    // 7F060B4C: bl      0x7F05EA94
    {
            ctx->lr = 0x7F060B50u;
            ctx->pc = 0x7F05EA94u;
            return;
    }

label_7F060B50:
    ctx->pc = 0x7F060B50u;
    ctx->downcount -= 3;
    // 7F060B50: lwz     r0, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060B54:
    // 7F060B54: cmpwi   r0, 0
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

label_7F060B58:
    // 7F060B58: bc    4, 2, 0x7F060BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060BD4;
        }
    }

label_7F060B5C:
    ctx->downcount -= 4;
    // 7F060B5C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060B60:
    // 7F060B60: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060B64:
    // 7F060B64: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F060B68:
    // 7F060B68: bl      0x7F05E19C
    {
            ctx->lr = 0x7F060B6Cu;
            ctx->pc = 0x7F05E19Cu;
            return;
    }

label_7F060B6C:
    ctx->downcount -= 5;
    // 7F060B6C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F060B70:
    // 7F060B70: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F060B74:
    ctx->pc = 0x7F060B74u;
    // 7F060B74: stw     r0, -20112(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060B78:
    // 7F060B78: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F060B7C:
    // 7F060B7C: bl      0x7F05DC30
    {
            ctx->lr = 0x7F060B80u;
            ctx->pc = 0x7F05DC30u;
            return;
    }

label_7F060B80:
    ctx->downcount -= 4;
    // 7F060B80: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F060B84:
    ctx->pc = 0x7F060B84u;
    // 7F060B84: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060B88:
    // 7F060B88: cmpwi   r0, 1
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

label_7F060B8C:
    // 7F060B8C: bc    4, 2, 0x7F060BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060BA0;
        }
    }

label_7F060B90:
    ctx->downcount -= 4;
    // 7F060B90: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F060B94:
    // 7F060B94: li      r3, 1803
    ctx->gpr[3] = (u32)(s32)(1803);

label_7F060B98:
    // 7F060B98: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F060B9C:
    // 7F060B9C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F060BA0u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F060BA0:
    ctx->pc = 0x7F060BA0u;
    ctx->downcount -= 9;
    // 7F060BA0: lwz     r4, -20980(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(-20980);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F060BA4:
    // 7F060BA4: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F060BA8:
    // 7F060BA8: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F060BAC:
    // 7F060BAC: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F060BB0:
    ctx->pc = 0x7F060BB0u;
    // 7F060BB0: stw     r4, -20980(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(-20980);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F060BB4:
    ctx->pc = 0x7F060BB4u;
    // 7F060BB4: stw     r0, -20996(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(-20996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060BB8:
    ctx->pc = 0x7F060BB8u;
    // 7F060BB8: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060BBC:
    // 7F060BBC: cmpwi   r0, 1
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

label_7F060BC0:
    // 7F060BC0: bc    4, 2, 0x7F060BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060BD4;
        }
    }

label_7F060BC4:
    ctx->downcount -= 4;
    // 7F060BC4: addis   r3, r27, 1
    ctx->gpr[3] = ctx->gpr[27] + ((u32)(s32)(1) << 16);

label_7F060BC8:
    // 7F060BC8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F060BCC:
    // 7F060BCC: addi    r3, r3, -28456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28456);

label_7F060BD0:
    ctx->pc = 0x7F060BD0u;
    // 7F060BD0: stwx    r0, r30, r3
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060BD4:
    ctx->pc = 0x7F060BD4u;
    ctx->downcount -= 9;
    // 7F060BD4: lwz     r0, 480(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(480);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060BD8:
    // 7F060BD8: addi    r3, r25, 328
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(328);

label_7F060BDC:
    // 7F060BDC: addi    r4, r25, 344
    ctx->gpr[4] = ctx->gpr[25] + (u32)(s32)(344);

label_7F060BE0:
    // 7F060BE0: mulli   r5, r0, 44
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)44);

label_7F060BE4:
    // 7F060BE4: addi    r19, r5, 240
    ctx->gpr[19] = ctx->gpr[5] + (u32)(s32)(240);

label_7F060BE8:
    // 7F060BE8: add   r19, r25, r19
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[19];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_7F060BEC:
    // 7F060BEC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F060BF0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F060BF0:
    ctx->downcount -= 2;
    // 7F060BF0: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F060BF4:
    // 7F060BF4: bl      0x7F0427FC
    {
            ctx->lr = 0x7F060BF8u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F060BF8:
    ctx->downcount -= 4;
    // 7F060BF8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F060BFC:
    ctx->pc = 0x7F060BFCu;
    // 7F060BFC: lwz     r0, -20980(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(-20980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060C00:
    // 7F060C00: addi    r3, r3, 27828
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(27828);

label_7F060C04:
    ctx->pc = 0x7F060C04u;
    // 7F060C04: stwx    r0, r3, r26
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[26];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060C08:
    ctx->downcount -= 7;
    // 7F060C08: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F060C0C:
    // 7F060C0C: addi    r28, r28, 16
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(16);

label_7F060C10:
    // 7F060C10: cmpwi   r31, 4
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

label_7F060C14:
    // 7F060C14: addi    r27, r27, 252
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(252);

label_7F060C18:
    // 7F060C18: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_7F060C1C:
    // 7F060C1C: addi    r29, r29, 8
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(8);

label_7F060C20:
    // 7F060C20: bc    12, 0, 0x7F060114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F060114u;
                return;
            }
            goto label_7F060114;
        }
    }

label_7F060C24:
    ctx->pc = 0x7F060C24u;
    ctx->downcount -= 16;
    // 7F060C24: lmw     r19, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        for (u32 r = 19; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F060C28:
    ctx->pc = 0x7F060C28u;
    // 7F060C28: lwz     r0, 244(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060C2C:
    ctx->pc = 0x7F060C2Cu;
    // 7F060C2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F060C30:
    ctx->pc = 0x7F060C30u;
    // 7F060C30: addi    r1, r1, 240
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(240);

label_7F060C34:
    ctx->pc = 0x7F060C34u;
    // 7F060C34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F060C38:
    ctx->pc = 0x7F060C38u;
    ctx->downcount -= 3;
    // 7F060C38: lwz     r0, 468(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(468);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060C3C:
    ctx->pc = 0x7F060C3Cu;
    // 7F060C3C: cmpw    r0, r6
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

label_7F060C40:
    ctx->pc = 0x7F060C40u;
    // 7F060C40: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F060C44:
    ctx->pc = 0x7F060C44u;
    ctx->downcount -= 2;
    // 7F060C44: stw     r6, 468(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F060C48:
    ctx->pc = 0x7F060C48u;
    // 7F060C48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F060C4C:
    ctx->pc = 0x7F060C4Cu;
    ctx->downcount -= 9;
    // 7F060C4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F060C50:
    ctx->pc = 0x7F060C50u;
    // 7F060C50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F060C54:
    ctx->pc = 0x7F060C54u;
    // 7F060C54: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F060C58:
    ctx->pc = 0x7F060C58u;
    // 7F060C58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F060C5C:
    ctx->pc = 0x7F060C5Cu;
    // 7F060C5C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060C60:
    ctx->pc = 0x7F060C60u;
    // 7F060C60: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F060C64:
    ctx->pc = 0x7F060C64u;
    // 7F060C64: lwz     r8, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F060C68:
    ctx->pc = 0x7F060C68u;
    // 7F060C68: rlwinm. r3, r8, 0, 30, 30
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F060C6C:
    ctx->pc = 0x7F060C6Cu;
    // 7F060C6C: bc    12, 2, 0x7F060CE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060CE0;
        }
    }

label_7F060C70:
    ctx->pc = 0x7F060C70u;
    ctx->downcount -= 10;
    // 7F060C70: lwz     r4, 144(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F060C74:
    ctx->pc = 0x7F060C74u;
    // 7F060C74: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F060C78:
    ctx->pc = 0x7F060C78u;
    // 7F060C78: lwz     r10, 148(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(148);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F060C7C:
    ctx->pc = 0x7F060C7Cu;
    // 7F060C7C: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_7F060C80:
    ctx->pc = 0x7F060C80u;
    // 7F060C80: and   r8, r4, r9
    {
        ctx->gpr[8] = ctx->gpr[4] & ctx->gpr[9];
    }

label_7F060C84:
    ctx->pc = 0x7F060C84u;
    // 7F060C84: and   r3, r10, r3
    {
        ctx->gpr[3] = ctx->gpr[10] & ctx->gpr[3];
    }

label_7F060C88:
    ctx->pc = 0x7F060C88u;
    // 7F060C88: xor   r4, r3, r9
    {
        ctx->gpr[4] = ctx->gpr[3] ^ ctx->gpr[9];
    }

label_7F060C8C:
    ctx->pc = 0x7F060C8Cu;
    // 7F060C8C: xor   r3, r8, r9
    {
        ctx->gpr[3] = ctx->gpr[8] ^ ctx->gpr[9];
    }

label_7F060C90:
    ctx->pc = 0x7F060C90u;
    // 7F060C90: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F060C94:
    ctx->pc = 0x7F060C94u;
    // 7F060C94: bc    12, 2, 0x7F060CA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060CA0;
        }
    }

label_7F060C98:
    ctx->pc = 0x7F060C98u;
    ctx->downcount -= 2;
    // 7F060C98: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F060C9C:
    ctx->pc = 0x7F060C9Cu;
    // 7F060C9C: b       0x7F060D14
    {
            goto label_7F060D14;
    }

label_7F060CA0:
    ctx->pc = 0x7F060CA0u;
    ctx->downcount -= 6;
    // 7F060CA0: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F060CA4:
    ctx->pc = 0x7F060CA4u;
    // 7F060CA4: xor   r3, r8, r9
    {
        ctx->gpr[3] = ctx->gpr[8] ^ ctx->gpr[9];
    }

label_7F060CA8:
    ctx->pc = 0x7F060CA8u;
    // 7F060CA8: and   r4, r10, r4
    {
        ctx->gpr[4] = ctx->gpr[10] & ctx->gpr[4];
    }

label_7F060CAC:
    ctx->pc = 0x7F060CACu;
    // 7F060CAC: xor   r4, r4, r9
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[9];
    }

label_7F060CB0:
    ctx->pc = 0x7F060CB0u;
    // 7F060CB0: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F060CB4:
    ctx->pc = 0x7F060CB4u;
    // 7F060CB4: bc    12, 2, 0x7F060CC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060CC0;
        }
    }

label_7F060CB8:
    ctx->pc = 0x7F060CB8u;
    ctx->downcount -= 2;
    // 7F060CB8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F060CBC:
    ctx->pc = 0x7F060CBCu;
    // 7F060CBC: b       0x7F060D14
    {
            goto label_7F060D14;
    }

label_7F060CC0:
    ctx->pc = 0x7F060CC0u;
    ctx->downcount -= 6;
    // 7F060CC0: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F060CC4:
    ctx->pc = 0x7F060CC4u;
    // 7F060CC4: xor   r3, r8, r9
    {
        ctx->gpr[3] = ctx->gpr[8] ^ ctx->gpr[9];
    }

label_7F060CC8:
    ctx->pc = 0x7F060CC8u;
    // 7F060CC8: and   r4, r10, r4
    {
        ctx->gpr[4] = ctx->gpr[10] & ctx->gpr[4];
    }

label_7F060CCC:
    ctx->pc = 0x7F060CCCu;
    // 7F060CCC: xor   r4, r4, r9
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[9];
    }

label_7F060CD0:
    ctx->pc = 0x7F060CD0u;
    // 7F060CD0: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F060CD4:
    ctx->pc = 0x7F060CD4u;
    // 7F060CD4: bc    12, 2, 0x7F060D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060D14;
        }
    }

label_7F060CD8:
    ctx->pc = 0x7F060CD8u;
    ctx->downcount -= 2;
    // 7F060CD8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F060CDC:
    ctx->pc = 0x7F060CDCu;
    // 7F060CDC: b       0x7F060D14
    {
            goto label_7F060D14;
    }

label_7F060CE0:
    ctx->pc = 0x7F060CE0u;
    ctx->downcount -= 2;
    // 7F060CE0: rlwinm. r3, r8, 0, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[8], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F060CE4:
    ctx->pc = 0x7F060CE4u;
    // 7F060CE4: bc    12, 2, 0x7F060D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060D14;
        }
    }

label_7F060CE8:
    ctx->pc = 0x7F060CE8u;
    ctx->downcount -= 10;
    // 7F060CE8: lwz     r3, 144(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F060CEC:
    ctx->pc = 0x7F060CECu;
    // 7F060CEC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F060CF0:
    ctx->pc = 0x7F060CF0u;
    // 7F060CF0: lwz     r9, 148(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(148);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F060CF4:
    ctx->pc = 0x7F060CF4u;
    // 7F060CF4: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F060CF8:
    ctx->pc = 0x7F060CF8u;
    // 7F060CF8: and   r3, r3, r8
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[8];
    }

label_7F060CFC:
    ctx->pc = 0x7F060CFCu;
    // 7F060CFC: and   r4, r9, r4
    {
        ctx->gpr[4] = ctx->gpr[9] & ctx->gpr[4];
    }

label_7F060D00:
    ctx->pc = 0x7F060D00u;
    // 7F060D00: xor   r4, r4, r8
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[8];
    }

label_7F060D04:
    ctx->pc = 0x7F060D04u;
    // 7F060D04: xor   r3, r3, r8
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[8];
    }

label_7F060D08:
    ctx->pc = 0x7F060D08u;
    // 7F060D08: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F060D0C:
    ctx->pc = 0x7F060D0Cu;
    // 7F060D0C: bc    12, 2, 0x7F060D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F060D14;
        }
    }

label_7F060D10:
    ctx->pc = 0x7F060D10u;
    ctx->downcount -= 1;
    // 7F060D10: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F060D14:
    ctx->pc = 0x7F060D14u;
    ctx->downcount -= 2;
    // 7F060D14: cmpwi   r6, 0
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

label_7F060D18:
    ctx->pc = 0x7F060D18u;
    // 7F060D18: bc    4, 1, 0x7F060D2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060D2C;
        }
    }

label_7F060D1C:
    ctx->pc = 0x7F060D1Cu;
    ctx->downcount -= 4;
    // 7F060D1C: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F060D20:
    ctx->pc = 0x7F060D20u;
    // 7F060D20: or   r4, r7, r7
    {
        ctx->gpr[4] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F060D24:
    ctx->pc = 0x7F060D24u;
    // 7F060D24: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F060D28:
    ctx->pc = 0x7F060D28u;
    // 7F060D28: bl      0x7F060C38
    {
            ctx->lr = 0x7F060D2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F060C38u;
                return;
            }
            goto label_7F060C38;
    }

label_7F060D2C:
    ctx->pc = 0x7F060D2Cu;
    ctx->downcount -= 5;
    // 7F060D2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060D30:
    ctx->pc = 0x7F060D30u;
    // 7F060D30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F060D34:
    ctx->pc = 0x7F060D34u;
    // 7F060D34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F060D38:
    ctx->pc = 0x7F060D38u;
    // 7F060D38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F060D3C:
    ctx->pc = 0x7F060D3Cu;
    ctx->downcount -= 29;
    // 7F060D3C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F060D40:
    ctx->pc = 0x7F060D40u;
    // 7F060D40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F060D44:
    ctx->pc = 0x7F060D44u;
    // 7F060D44: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F060D48:
    ctx->pc = 0x7F060D48u;
    // 7F060D48: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F060D4C:
    ctx->pc = 0x7F060D4Cu;
    // 7F060D4C: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060D50:
    ctx->pc = 0x7F060D50u;
    // 7F060D50: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F060D54:
    ctx->pc = 0x7F060D54u;
    // 7F060D54: lfs     f2, -9080(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F060D54u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-9080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F060D58:
    ctx->pc = 0x7F060D58u;
    // 7F060D58: stmw     r21, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F060D5C:
    ctx->pc = 0x7F060D5Cu;
    // 7F060D5C: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F060D60:
    ctx->pc = 0x7F060D60u;
    // 7F060D60: lfs     f1, -9076(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F060D60u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9076);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F060D64:
    ctx->pc = 0x7F060D64u;
    // 7F060D64: addi    r31, r1, 12
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(12);

label_7F060D68:
    ctx->pc = 0x7F060D68u;
    // 7F060D68: lfs     f0, -9072(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F060D68u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F060D6C:
    ctx->pc = 0x7F060D6Cu;
    // 7F060D6C: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F060D70:
    ctx->pc = 0x7F060D70u;
    // 7F060D70: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F060D74:
    ctx->pc = 0x7F060D74u;
    // 7F060D74: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F060D78:
    ctx->pc = 0x7F060D78u;
    // 7F060D78: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F060D7C:
    ctx->pc = 0x7F060D7Cu;
    // 7F060D7C: stfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F060D7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F060D80:
    ctx->pc = 0x7F060D80u;
    // 7F060D80: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F060D80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F060D84:
    ctx->pc = 0x7F060D84u;
    // 7F060D84: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F060D84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F060D88:
    ctx->downcount -= 1;
    // 7F060D88: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F060D8C:
    ctx->downcount -= 1;
    // 7F060D8C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F060D90:
    ctx->downcount -= 1;
    // 7F060D90: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F060D94:
    ctx->downcount -= 1;
    // 7F060D94: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F060D98:
    ctx->downcount -= 2;
    // 7F060D98: cmpwi   r26, 0
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

label_7F060D9C:
    // 7F060D9C: bc    4, 2, 0x7F060EAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060EAC;
        }
    }

label_7F060DA0:
    ctx->downcount -= 4;
    // 7F060DA0: addis   r3, r23, 1
    ctx->gpr[3] = ctx->gpr[23] + ((u32)(s32)(1) << 16);

label_7F060DA4:
    ctx->pc = 0x7F060DA4u;
    // 7F060DA4: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060DA8:
    // 7F060DA8: cmpwi   r0, 1
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

label_7F060DAC:
    // 7F060DAC: bc    4, 2, 0x7F060E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060E70;
        }
    }

label_7F060DB0:
    ctx->downcount -= 3;
    // 7F060DB0: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F060DB4:
    // 7F060DB4: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F060DB8:
    // 7F060DB8: bl      0x7F05F524
    {
            ctx->lr = 0x7F060DBCu;
            ctx->pc = 0x7F05F524u;
            return;
    }

label_7F060DBC:
    ctx->downcount -= 9;
    // 7F060DBC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F060DC0:
    ctx->pc = 0x7F060DC0u;
    // 7F060DC0: lwz     r5, 36(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F060DC4:
    // 7F060DC4: addi    r8, r4, 12832
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F060DC8:
    // 7F060DC8: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F060DCC:
    // 7F060DCC: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F060DD0:
    // 7F060DD0: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F060DD4:
    // 7F060DD4: addi    r4, r4, 4113
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4113);

label_7F060DD8:
    // 7F060DD8: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F060DDC:
    // 7F060DDC: bl      0x7F014788
    {
            ctx->lr = 0x7F060DE0u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F060DE0:
    ctx->downcount -= 5;
    // 7F060DE0: lis     r4, 32518
    ctx->gpr[4] = ((u32)(s32)(32518) << 16);

label_7F060DE4:
    // 7F060DE4: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F060DE8:
    // 7F060DE8: addi    r4, r4, 3148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3148);

label_7F060DEC:
    // 7F060DEC: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F060DF0:
    // 7F060DF0: bl      0x7F014B6C
    {
            ctx->lr = 0x7F060DF4u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F060DF4:
    ctx->downcount -= 4;
    // 7F060DF4: lis     r4, 28
    ctx->gpr[4] = ((u32)(s32)(28) << 16);

label_7F060DF8:
    // 7F060DF8: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F060DFC:
    // 7F060DFC: addi    r4, r4, -17466
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17466);

label_7F060E00:
    // 7F060E00: bl      0x7F01488C
    {
            ctx->lr = 0x7F060E04u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F060E04:
    ctx->downcount -= 4;
    // 7F060E04: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F060E08:
    // 7F060E08: li      r6, 704
    ctx->gpr[6] = (u32)(s32)(704);

label_7F060E0C:
    // 7F060E0C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F060E10:
    // 7F060E10: bl      0x7F014B60
    {
            ctx->lr = 0x7F060E14u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F060E14:
    ctx->downcount -= 2;
    // 7F060E14: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F060E18:
    // 7F060E18: bl      0x7F0148A0
    {
            ctx->lr = 0x7F060E1Cu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F060E1C:
    ctx->downcount -= 21;
    // 7F060E1C: addi    r0, r21, 328
    ctx->gpr[0] = ctx->gpr[21] + (u32)(s32)(328);

label_7F060E20:
    // 7F060E20: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F060E24:
    // 7F060E24: add   r7, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F060E28:
    ctx->pc = 0x7F060E28u;
    // 7F060E28: lfs     f1, -9068(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F060E28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9068);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F060E2C:
    ctx->pc = 0x7F060E2Cu;
    // 7F060E2C: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F060E30:
    // 7F060E30: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F060E34:
    ctx->pc = 0x7F060E34u;
    // 7F060E34: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060E38:
    // 7F060E38: addi    r5, r3, 18312
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F060E3C:
    ctx->pc = 0x7F060E3Cu;
    // 7F060E3C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F060E40:
    // 7F060E40: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F060E44:
    ctx->pc = 0x7F060E44u;
    // 7F060E44: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060E48:
    // 7F060E48: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F060E4C:
    ctx->pc = 0x7F060E4Cu;
    // 7F060E4C: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F060E50:
    ctx->pc = 0x7F060E50u;
    // 7F060E50: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F060E50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F060E54:
    ctx->pc = 0x7F060E54u;
    // 7F060E54: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F060E58:
    ctx->pc = 0x7F060E58u;
    // 7F060E58: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060E5C:
    ctx->pc = 0x7F060E5Cu;
    // 7F060E5C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F060E5Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F060E60:
    ctx->pc = 0x7F060E60u;
    // 7F060E60: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F060E64:
    ctx->pc = 0x7F060E64u;
    // 7F060E64: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060E68:
    ctx->pc = 0x7F060E68u;
    // 7F060E68: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F060E68u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F060E6C:
    // 7F060E6C: bl      0x7F014944
    {
            ctx->lr = 0x7F060E70u;
            ctx->pc = 0x7F014944u;
            return;
    }

label_7F060E70:
    ctx->downcount -= 8;
    // 7F060E70: add   r3, r23, r22
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F060E74:
    // 7F060E74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F060E78:
    // 7F060E78: addis   r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + ((u32)(s32)(1) << 16);

label_7F060E7C:
    // 7F060E7C: cmpw    r30, r29
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

label_7F060E80:
    ctx->pc = 0x7F060E80u;
    // 7F060E80: stw     r0, -21880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21880);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060E84:
    ctx->pc = 0x7F060E84u;
    // 7F060E84: stw     r0, -21736(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21736);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060E88:
    ctx->pc = 0x7F060E88u;
    // 7F060E88: stw     r0, -21592(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21592);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060E8C:
    // 7F060E8C: bc    4, 2, 0x7F060E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F060E9C;
        }
    }

label_7F060E90:
    ctx->downcount -= 3;
    // 7F060E90: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F060E94:
    ctx->pc = 0x7F060E94u;
    // 7F060E94: stw     r0, -21156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060E98:
    // 7F060E98: b       0x7F060EA4
    {
            goto label_7F060EA4;
    }

label_7F060E9C:
    ctx->downcount -= 2;
    // 7F060E9C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F060EA0:
    ctx->pc = 0x7F060EA0u;
    // 7F060EA0: stw     r0, -21156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060EA4:
    ctx->downcount -= 2;
    // 7F060EA4: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F060EA8:
    // 7F060EA8: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_7F060EAC:
    ctx->downcount -= 4;
    // 7F060EAC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F060EB0:
    // 7F060EB0: addi    r21, r21, 480
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(480);

label_7F060EB4:
    // 7F060EB4: cmpwi   r30, 2
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

label_7F060EB8:
    // 7F060EB8: bc    12, 0, 0x7F060D98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F060D98u;
                return;
            }
            goto label_7F060D98;
        }
    }

label_7F060EBC:
    ctx->downcount -= 3;
    // 7F060EBC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F060EC0:
    // 7F060EC0: cmpwi   r29, 2
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

label_7F060EC4:
    // 7F060EC4: bc    12, 0, 0x7F060D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F060D94u;
                return;
            }
            goto label_7F060D94;
        }
    }

label_7F060EC8:
    ctx->downcount -= 3;
    // 7F060EC8: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F060ECC:
    // 7F060ECC: cmpwi   r26, 2
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

label_7F060ED0:
    // 7F060ED0: bc    12, 0, 0x7F060D90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F060D90u;
                return;
            }
            goto label_7F060D90;
        }
    }

label_7F060ED4:
    ctx->downcount -= 3;
    // 7F060ED4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F060ED8:
    // 7F060ED8: cmpwi   r28, 3
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

label_7F060EDC:
    // 7F060EDC: bc    12, 0, 0x7F060D8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F060D8Cu;
                return;
            }
            goto label_7F060D8C;
        }
    }

label_7F060EE0:
    ctx->downcount -= 3;
    // 7F060EE0: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F060EE4:
    // 7F060EE4: cmpwi   r27, 3
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

label_7F060EE8:
    // 7F060EE8: bc    12, 0, 0x7F060D88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F060D88u;
                return;
            }
            goto label_7F060D88;
        }
    }

label_7F060EEC:
    ctx->pc = 0x7F060EECu;
    ctx->downcount -= 15;
    // 7F060EEC: addis   r6, r23, 1
    ctx->gpr[6] = ctx->gpr[23] + ((u32)(s32)(1) << 16);

label_7F060EF0:
    ctx->pc = 0x7F060EF0u;
    // 7F060EF0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F060EF4:
    ctx->pc = 0x7F060EF4u;
    // 7F060EF4: stw     r0, -21012(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-21012);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060EF8:
    ctx->pc = 0x7F060EF8u;
    // 7F060EF8: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_7F060EFC:
    ctx->pc = 0x7F060EFCu;
    // 7F060EFC: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_7F060F00:
    ctx->pc = 0x7F060F00u;
    // 7F060F00: li      r5, 34
    ctx->gpr[5] = (u32)(s32)(34);

label_7F060F04:
    ctx->pc = 0x7F060F04u;
    // 7F060F04: stw     r0, -21008(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-21008);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060F08:
    ctx->pc = 0x7F060F08u;
    // 7F060F08: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F060F0C:
    ctx->pc = 0x7F060F0Cu;
    // 7F060F0C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F060F10:
    ctx->pc = 0x7F060F10u;
    // 7F060F10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F060F14:
    ctx->pc = 0x7F060F14u;
    // 7F060F14: stw     r4, -21004(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-21004);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F060F18:
    ctx->pc = 0x7F060F18u;
    // 7F060F18: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F060F1C:
    ctx->pc = 0x7F060F1Cu;
    // 7F060F1C: stw     r5, -21000(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-21000);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F060F20:
    ctx->pc = 0x7F060F20u;
    // 7F060F20: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F060F24:
    loop_7F060F24(ctx);
    if (ctx->pc == 0x7F060F40u) goto label_7F060F40;
    return;
label_7F060F28:
    // 7F060F28: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F060F2C:
    // 7F060F2C: addis   r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + ((u32)(s32)(1) << 16);

label_7F060F30:
    ctx->pc = 0x7F060F30u;
    // 7F060F30: stw     r7, -20996(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20996);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F060F34:
    ctx->pc = 0x7F060F34u;
    // 7F060F34: stw     r7, -20980(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20980);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F060F38:
    ctx->pc = 0x7F060F38u;
    // 7F060F38: stw     r4, -20964(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20964);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F060F3C:
    // 7F060F3C: bc    16, 0, 0x7F060F24
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F060F24u;
                return;
            }
            goto label_7F060F24;
        }
    }

label_7F060F40:
    ctx->pc = 0x7F060F40u;
    ctx->downcount -= 42;
    // 7F060F40: addis   r7, r23, 1
    ctx->gpr[7] = ctx->gpr[23] + ((u32)(s32)(1) << 16);

label_7F060F44:
    ctx->pc = 0x7F060F44u;
    // 7F060F44: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F060F48:
    ctx->pc = 0x7F060F48u;
    // 7F060F48: lwz     r3, -21012(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-21012);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F060F4C:
    ctx->pc = 0x7F060F4Cu;
    // 7F060F4C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F060F50:
    ctx->pc = 0x7F060F50u;
    // 7F060F50: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F060F54:
    ctx->pc = 0x7F060F54u;
    // 7F060F54: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F060F58:
    ctx->pc = 0x7F060F58u;
    // 7F060F58: rlwinm r5, r3, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F060F5C:
    ctx->pc = 0x7F060F5Cu;
    // 7F060F5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F060F60:
    ctx->pc = 0x7F060F60u;
    // 7F060F60: add   r5, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F060F64:
    ctx->pc = 0x7F060F64u;
    // 7F060F64: stw     r8, -21156(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-21156);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F060F68:
    ctx->pc = 0x7F060F68u;
    // 7F060F68: lwz     r5, -21008(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-21008);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F060F6C:
    ctx->pc = 0x7F060F6Cu;
    // 7F060F6C: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F060F70:
    ctx->pc = 0x7F060F70u;
    // 7F060F70: add   r5, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F060F74:
    ctx->pc = 0x7F060F74u;
    // 7F060F74: stw     r6, -21156(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-21156);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F060F78:
    ctx->pc = 0x7F060F78u;
    // 7F060F78: lwz     r5, -21004(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-21004);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F060F7C:
    ctx->pc = 0x7F060F7Cu;
    // 7F060F7C: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F060F80:
    ctx->pc = 0x7F060F80u;
    // 7F060F80: add   r5, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F060F84:
    ctx->pc = 0x7F060F84u;
    // 7F060F84: stw     r8, -21156(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-21156);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F060F88:
    ctx->pc = 0x7F060F88u;
    // 7F060F88: lwz     r5, -21000(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-21000);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F060F8C:
    ctx->pc = 0x7F060F8Cu;
    // 7F060F8C: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F060F90:
    ctx->pc = 0x7F060F90u;
    // 7F060F90: add   r5, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F060F94:
    ctx->pc = 0x7F060F94u;
    // 7F060F94: stw     r6, -21156(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-21156);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F060F98:
    ctx->pc = 0x7F060F98u;
    // 7F060F98: stw     r4, -21044(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-21044);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F060F9C:
    ctx->pc = 0x7F060F9Cu;
    // 7F060F9C: stw     r0, -21040(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-21040);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060FA0:
    ctx->pc = 0x7F060FA0u;
    // 7F060FA0: stw     r0, -21036(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-21036);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060FA4:
    ctx->pc = 0x7F060FA4u;
    // 7F060FA4: stw     r4, -21032(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-21032);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F060FA8:
    ctx->pc = 0x7F060FA8u;
    // 7F060FA8: lmw     r21, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F060FAC:
    ctx->pc = 0x7F060FACu;
    // 7F060FAC: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F060FB0:
    ctx->pc = 0x7F060FB0u;
    // 7F060FB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F060FB4:
    ctx->pc = 0x7F060FB4u;
    // 7F060FB4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F060FB8:
    ctx->pc = 0x7F060FB8u;
    // 7F060FB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F060FBC:
    ctx->pc = 0x7F060FBCu;
    ctx->downcount -= 17;
    // 7F060FBC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F060FC0:
    ctx->pc = 0x7F060FC0u;
    // 7F060FC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F060FC4:
    ctx->pc = 0x7F060FC4u;
    // 7F060FC4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060FC8:
    ctx->pc = 0x7F060FC8u;
    // 7F060FC8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F060FCC:
    ctx->pc = 0x7F060FCCu;
    // 7F060FCC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F060FD0:
    ctx->pc = 0x7F060FD0u;
    // 7F060FD0: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F060FD4:
    ctx->pc = 0x7F060FD4u;
    // 7F060FD4: bl      0x7F062000
    {
            ctx->lr = 0x7F060FD8u;
            goto label_7F062000;
    }

label_7F060FD8:
    ctx->pc = 0x7F060FD8u;
    ctx->downcount -= 22;
    // 7F060FD8: addis   r9, r29, 1
    ctx->gpr[9] = ctx->gpr[29] + ((u32)(s32)(1) << 16);

label_7F060FDC:
    ctx->pc = 0x7F060FDCu;
    // 7F060FDC: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F060FE0:
    ctx->pc = 0x7F060FE0u;
    // 7F060FE0: stw     r0, -27696(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-27696);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F060FE4:
    ctx->pc = 0x7F060FE4u;
    // 7F060FE4: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F060FE8:
    ctx->pc = 0x7F060FE8u;
    // 7F060FE8: li      r0, 41
    ctx->gpr[0] = (u32)(s32)(41);

label_7F060FEC:
    ctx->pc = 0x7F060FECu;
    // 7F060FEC: li      r8, 45
    ctx->gpr[8] = (u32)(s32)(45);

label_7F060FF0:
    ctx->pc = 0x7F060FF0u;
    // 7F060FF0: stw     r3, -27692(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-27692);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F060FF4:
    ctx->pc = 0x7F060FF4u;
    // 7F060FF4: li      r7, 48
    ctx->gpr[7] = (u32)(s32)(48);

label_7F060FF8:
    ctx->pc = 0x7F060FF8u;
    // 7F060FF8: li      r6, 52
    ctx->gpr[6] = (u32)(s32)(52);

label_7F060FFC:
    ctx->pc = 0x7F060FFCu;
    // 7F060FFC: li      r5, 66
    ctx->gpr[5] = (u32)(s32)(66);

label_7F061000:
    ctx->pc = 0x7F061000u;
    // 7F061000: stw     r0, -27688(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-27688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061004:
    ctx->pc = 0x7F061004u;
    // 7F061004: li      r4, 70
    ctx->gpr[4] = (u32)(s32)(70);

label_7F061008:
    ctx->pc = 0x7F061008u;
    // 7F061008: li      r3, 37
    ctx->gpr[3] = (u32)(s32)(37);

label_7F06100C:
    ctx->pc = 0x7F06100Cu;
    // 7F06100C: li      r0, 39
    ctx->gpr[0] = (u32)(s32)(39);

label_7F061010:
    ctx->pc = 0x7F061010u;
    // 7F061010: stw     r8, -27684(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-27684);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F061014:
    ctx->pc = 0x7F061014u;
    // 7F061014: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F061018:
    ctx->pc = 0x7F061018u;
    // 7F061018: stw     r7, -27680(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-27680);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F06101C:
    ctx->pc = 0x7F06101Cu;
    // 7F06101C: stw     r6, -27676(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-27676);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F061020:
    ctx->pc = 0x7F061020u;
    // 7F061020: stw     r5, -27672(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-27672);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061024:
    ctx->pc = 0x7F061024u;
    // 7F061024: stw     r4, -27668(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-27668);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F061028:
    ctx->pc = 0x7F061028u;
    // 7F061028: stw     r3, -27664(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-27664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F06102C:
    ctx->pc = 0x7F06102Cu;
    // 7F06102C: stw     r0, -27660(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-27660);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061030:
    ctx->downcount -= 1;
    // 7F061030: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F061034:
    ctx->downcount -= 2;
    // 7F061034: cmpwi   r31, 4
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

label_7F061038:
    // 7F061038: bc    12, 2, 0x7F061060
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061060;
        }
    }

label_7F06103C:
    ctx->downcount -= 5;
    // 7F06103C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F061040:
    // 7F061040: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061044:
    // 7F061044: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F061048:
    // 7F061048: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F06104C:
    // 7F06104C: bl      0x7F05E498
    {
            ctx->lr = 0x7F061050u;
            ctx->pc = 0x7F05E498u;
            return;
    }

label_7F061050:
    ctx->downcount -= 4;
    // 7F061050: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F061054:
    // 7F061054: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061058:
    // 7F061058: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06105C:
    // 7F06105C: bl      0x7F05DC9C
    {
            ctx->lr = 0x7F061060u;
            ctx->pc = 0x7F05DC9Cu;
            return;
    }

label_7F061060:
    ctx->downcount -= 3;
    // 7F061060: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F061064:
    // 7F061064: cmpwi   r30, 2
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

label_7F061068:
    // 7F061068: bc    12, 0, 0x7F061034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061034u;
                return;
            }
            goto label_7F061034;
        }
    }

label_7F06106C:
    ctx->downcount -= 3;
    // 7F06106C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F061070:
    // 7F061070: cmpwi   r31, 5
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

label_7F061074:
    // 7F061074: bc    12, 0, 0x7F061030
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061030u;
                return;
            }
            goto label_7F061030;
        }
    }

label_7F061078:
    ctx->pc = 0x7F061078u;
    ctx->downcount -= 17;
    // 7F061078: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F06107C:
    ctx->pc = 0x7F06107Cu;
    // 7F06107C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F061080:
    ctx->pc = 0x7F061080u;
    // 7F061080: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061084:
    ctx->pc = 0x7F061084u;
    // 7F061084: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F061088:
    ctx->pc = 0x7F061088u;
    // 7F061088: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F06108C:
    ctx->pc = 0x7F06108Cu;
    // 7F06108C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F061090:
    ctx->pc = 0x7F061090u;
    ctx->downcount -= 1;
    // 7F061090: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F061094:
    ctx->pc = 0x7F061094u;
    ctx->downcount -= 32;
    // 7F061094: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F061098:
    ctx->pc = 0x7F061098u;
    // 7F061098: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F06109C:
    ctx->pc = 0x7F06109Cu;
    // 7F06109C: mulli   r4, r4, 480
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)480);

label_7F0610A0:
    ctx->pc = 0x7F0610A0u;
    // 7F0610A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0610A4:
    ctx->pc = 0x7F0610A4u;
    // 7F0610A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0610A8:
    ctx->pc = 0x7F0610A8u;
    // 7F0610A8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0610AC:
    ctx->pc = 0x7F0610ACu;
    // 7F0610AC: addi    r6, r4, 48
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(48);

label_7F0610B0:
    ctx->pc = 0x7F0610B0u;
    // 7F0610B0: add   r6, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F0610B4:
    ctx->pc = 0x7F0610B4u;
    // 7F0610B4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0610B8:
    ctx->pc = 0x7F0610B8u;
    // 7F0610B8: addi    r3, r6, 280
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(280);

label_7F0610BC:
    ctx->pc = 0x7F0610BCu;
    // 7F0610BC: addi    r4, r6, 296
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(296);

label_7F0610C0:
    ctx->pc = 0x7F0610C0u;
    // 7F0610C0: stw     r0, 432(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0610C4:
    ctx->pc = 0x7F0610C4u;
    // 7F0610C4: stw     r30, 436(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0610C8:
    ctx->pc = 0x7F0610C8u;
    // 7F0610C8: lwz     r0, 432(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(432);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0610CC:
    ctx->pc = 0x7F0610CCu;
    // 7F0610CC: mulli   r5, r0, 44
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)44);

label_7F0610D0:
    ctx->pc = 0x7F0610D0u;
    // 7F0610D0: addi    r31, r5, 192
    ctx->gpr[31] = ctx->gpr[5] + (u32)(s32)(192);

label_7F0610D4:
    ctx->pc = 0x7F0610D4u;
    // 7F0610D4: add   r31, r6, r31
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F0610D8:
    ctx->pc = 0x7F0610D8u;
    // 7F0610D8: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0610DCu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0610DC:
    ctx->pc = 0x7F0610DCu;
    ctx->downcount -= 4;
    // 7F0610DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0610E0:
    ctx->pc = 0x7F0610E0u;
    // 7F0610E0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0610E4:
    ctx->pc = 0x7F0610E4u;
    // 7F0610E4: li      r5, 17
    ctx->gpr[5] = (u32)(s32)(17);

label_7F0610E8:
    ctx->pc = 0x7F0610E8u;
    // 7F0610E8: bl      0x7F05CC80
    {
            ctx->lr = 0x7F0610ECu;
            ctx->pc = 0x7F05CC80u;
            return;
    }

label_7F0610EC:
    ctx->pc = 0x7F0610ECu;
    ctx->downcount -= 2;
    // 7F0610EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0610F0:
    ctx->pc = 0x7F0610F0u;
    // 7F0610F0: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0610F4u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0610F4:
    ctx->pc = 0x7F0610F4u;
    ctx->downcount -= 16;
    // 7F0610F4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0610F8:
    ctx->pc = 0x7F0610F8u;
    // 7F0610F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0610FC:
    ctx->pc = 0x7F0610FCu;
    // 7F0610FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F061100:
    ctx->pc = 0x7F061100u;
    // 7F061100: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F061104:
    ctx->pc = 0x7F061104u;
    // 7F061104: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F061108:
    ctx->pc = 0x7F061108u;
    ctx->downcount -= 22;
    // 7F061108: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F06110C:
    ctx->pc = 0x7F06110Cu;
    // 7F06110C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F061110:
    ctx->pc = 0x7F061110u;
    // 7F061110: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F061114:
    ctx->pc = 0x7F061114u;
    // 7F061114: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_7F061118:
    ctx->pc = 0x7F061118u;
    // 7F061118: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06111C:
    ctx->pc = 0x7F06111Cu;
    // 7F06111C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F061120:
    ctx->pc = 0x7F061120u;
    // 7F061120: lfd     f3, -9192(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F061120u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9192);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F061124:
    ctx->pc = 0x7F061124u;
    // 7F061124: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F061128:
    ctx->pc = 0x7F061128u;
    // 7F061128: stmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F06112C:
    ctx->pc = 0x7F06112Cu;
    // 7F06112C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F061130:
    ctx->pc = 0x7F061130u;
    // 7F061130: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F061134:
    ctx->pc = 0x7F061134u;
    // 7F061134: lis     r25, 17200
    ctx->gpr[25] = ((u32)(s32)(17200) << 16);

label_7F061138:
    ctx->downcount -= 3;
    // 7F061138: addi    r23, r8, -4500
    ctx->gpr[23] = ctx->gpr[8] + (u32)(s32)(-4500);

label_7F06113C:
    // 7F06113C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F061140:
    // 7F061140: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F061144:
    ctx->downcount -= 3;
    // 7F061144: addi    r24, r9, -7000
    ctx->gpr[24] = ctx->gpr[9] + (u32)(s32)(-7000);

label_7F061148:
    // 7F061148: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F06114C:
    // 7F06114C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F061150:
    ctx->downcount -= 3;
    // 7F061150: xoris   r30, r10, 0x8000
    ctx->gpr[30] = ctx->gpr[10] ^ (0x8000u << 16);

label_7F061154:
    // 7F061154: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F061158:
    // 7F061158: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F06115C:
    ctx->downcount -= 8;
    // 7F06115C: add   r28, r11, r23
    {
        u32 a = ctx->gpr[11];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_7F061160:
    // 7F061160: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F061164:
    // 7F061164: addi    r28, r28, -750
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-750);

label_7F061168:
    // 7F061168: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F06116C:
    // 7F06116C: xoris   r29, r28, 0x8000
    ctx->gpr[29] = ctx->gpr[28] ^ (0x8000u << 16);

label_7F061170:
    // 7F061170: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F061174:
    ctx->pc = 0x7F061174u;
    // 7F061174: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F061178:
    ctx->downcount -= 24;
    // 7F061178: add   r31, r28, r24
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F06117C:
    // 7F06117C: addi    r22, r12, 48
    ctx->gpr[22] = ctx->gpr[12] + (u32)(s32)(48);

label_7F061180:
    // 7F061180: addi    r31, r31, -1000
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-1000);

label_7F061184:
    // 7F061184: rlwinm. r0, r3, 0, 31, 31
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

label_7F061188:
    // 7F061188: xoris   r31, r31, 0x8000
    ctx->gpr[31] = ctx->gpr[31] ^ (0x8000u << 16);

label_7F06118C:
    ctx->pc = 0x7F06118Cu;
    // 7F06118C: stw     r25, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F061190:
    // 7F061190: add   r22, r26, r22
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_7F061194:
    // 7F061194: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F061198:
    ctx->pc = 0x7F061198u;
    // 7F061198: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F06119C:
    ctx->pc = 0x7F06119Cu;
    // 7F06119C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F06119Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0611A0:
    ctx->pc = 0x7F0611A0u;
    // 7F0611A0: stw     r30, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0611A4:
    ctx->pc = 0x7F0611A4u;
    // 7F0611A4: fsubs   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0611A4u)) return;
    ppc_fsubs(ctx, 2, 0, 3);

label_7F0611A8:
    ctx->pc = 0x7F0611A8u;
    // 7F0611A8: stw     r25, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F0611AC:
    ctx->pc = 0x7F0611ACu;
    // 7F0611AC: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0611ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0611B0:
    ctx->pc = 0x7F0611B0u;
    // 7F0611B0: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0611B4:
    ctx->pc = 0x7F0611B4u;
    // 7F0611B4: fsubs   f1, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0611B4u)) return;
    ppc_fsubs(ctx, 1, 0, 3);

label_7F0611B8:
    ctx->pc = 0x7F0611B8u;
    // 7F0611B8: stw     r25, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F0611BC:
    ctx->pc = 0x7F0611BCu;
    // 7F0611BC: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0611BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0611C0:
    ctx->pc = 0x7F0611C0u;
    // 7F0611C0: stfs     f2, 280(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F0611C0u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(280);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0611C4:
    ctx->pc = 0x7F0611C4u;
    // 7F0611C4: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F0611C4u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F0611C8:
    ctx->pc = 0x7F0611C8u;
    // 7F0611C8: stfs     f1, 284(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F0611C8u)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(284);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0611CC:
    ctx->pc = 0x7F0611CCu;
    // 7F0611CC: stfs     f0, 288(r22)
    if (!ppc_fp_available_inline(ctx, 0x7F0611CCu)) return;
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0611D0:
    ctx->pc = 0x7F0611D0u;
    // 7F0611D0: sth     r0, 296(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0611D4:
    // 7F0611D4: bc    4, 2, 0x7F0611E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0611E4;
        }
    }

label_7F0611D8:
    ctx->downcount -= 3;
    // 7F0611D8: li      r0, 2048
    ctx->gpr[0] = (u32)(s32)(2048);

label_7F0611DC:
    ctx->pc = 0x7F0611DCu;
    // 7F0611DC: sth     r0, 298(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(298);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0611E0:
    // 7F0611E0: b       0x7F0611E8
    {
            goto label_7F0611E8;
    }

label_7F0611E4:
    ctx->pc = 0x7F0611E4u;
    ctx->downcount -= 1;
    // 7F0611E4: sth     r0, 298(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(298);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0611E8:
    ctx->downcount -= 6;
    // 7F0611E8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0611EC:
    // 7F0611EC: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0611F0:
    ctx->pc = 0x7F0611F0u;
    // 7F0611F0: sth     r31, 300(r22)
    {
        u32 ea = ctx->gpr[22] + (u32)(s32)(300);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_7F0611F4:
    // 7F0611F4: addi    r28, r28, 2000
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(2000);

label_7F0611F8:
    // 7F0611F8: addi    r12, r12, 480
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(480);

label_7F0611FC:
    // 7F0611FC: bc    16, 0, 0x7F061178
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061178u;
                return;
            }
            goto label_7F061178;
        }
    }

label_7F061200:
    ctx->downcount -= 4;
    // 7F061200: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_7F061204:
    // 7F061204: addi    r11, r11, 1500
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1500);

label_7F061208:
    // 7F061208: cmpwi   r4, 2
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

label_7F06120C:
    // 7F06120C: bc    12, 0, 0x7F06115C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06115Cu;
                return;
            }
            goto label_7F06115C;
        }
    }

label_7F061210:
    ctx->downcount -= 4;
    // 7F061210: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F061214:
    // 7F061214: addi    r10, r10, 1750
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1750);

label_7F061218:
    // 7F061218: cmpwi   r7, 2
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

label_7F06121C:
    // 7F06121C: bc    12, 0, 0x7F061150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061150u;
                return;
            }
            goto label_7F061150;
        }
    }

label_7F061220:
    ctx->downcount -= 4;
    // 7F061220: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F061224:
    // 7F061224: addi    r9, r9, 7000
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(7000);

label_7F061228:
    // 7F061228: cmpwi   r5, 3
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F06122C:
    // 7F06122C: bc    12, 0, 0x7F061144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061144u;
                return;
            }
            goto label_7F061144;
        }
    }

label_7F061230:
    ctx->downcount -= 4;
    // 7F061230: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F061234:
    // 7F061234: addi    r8, r8, 6000
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(6000);

label_7F061238:
    // 7F061238: cmpwi   r6, 3
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F06123C:
    // 7F06123C: bc    12, 0, 0x7F061138
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061138u;
                return;
            }
            goto label_7F061138;
        }
    }

label_7F061240:
    ctx->pc = 0x7F061240u;
    ctx->downcount -= 2;
    // 7F061240: or   r30, r31, r31
    {
        ctx->gpr[30] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061244:
    ctx->pc = 0x7F061244u;
    // 7F061244: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F061248:
    ctx->downcount -= 1;
    // 7F061248: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F06124C:
    ctx->downcount -= 2;
    // 7F06124C: cmpwi   r29, 1
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

label_7F061250:
    // 7F061250: bc    4, 2, 0x7F061304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F061304;
        }
    }

label_7F061254:
    ctx->downcount -= 2;
    // 7F061254: cmpwi   r30, 1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F061258:
    // 7F061258: bc    4, 2, 0x7F061304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F061304;
        }
    }

label_7F06125C:
    ctx->downcount -= 5;
    // 7F06125C: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F061260:
    // 7F061260: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061264:
    // 7F061264: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061268:
    // 7F061268: addi    r5, r5, 27994
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27994);

label_7F06126C:
    // 7F06126C: bl      0x7F061094
    {
            ctx->lr = 0x7F061270u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F061270:
    ctx->downcount -= 5;
    // 7F061270: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F061274:
    // 7F061274: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061278:
    // 7F061278: addi    r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1);

label_7F06127C:
    // 7F06127C: addi    r5, r5, 29018
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29018);

label_7F061280:
    // 7F061280: bl      0x7F061094
    {
            ctx->lr = 0x7F061284u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F061284:
    ctx->downcount -= 2;
    // 7F061284: cmpwi   r27, 4
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F061288:
    // 7F061288: bc    4, 0, 0x7F0612AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0612AC;
        }
    }

label_7F06128C:
    ctx->downcount -= 2;
    // 7F06128C: cmpwi   r27, 1
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

label_7F061290:
    // 7F061290: bc    4, 0, 0x7F061298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F061298;
        }
    }

label_7F061294:
    ctx->downcount -= 1;
    // 7F061294: b       0x7F0612AC
    {
            goto label_7F0612AC;
    }

label_7F061298:
    ctx->downcount -= 5;
    // 7F061298: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F06129C:
    // 7F06129C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0612A0:
    // 7F0612A0: addi    r4, r31, 2
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2);

label_7F0612A4:
    // 7F0612A4: addi    r5, r5, 29018
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29018);

label_7F0612A8:
    // 7F0612A8: bl      0x7F061094
    {
            ctx->lr = 0x7F0612ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F0612AC:
    ctx->downcount -= 5;
    // 7F0612AC: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F0612B0:
    // 7F0612B0: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0612B4:
    // 7F0612B4: addi    r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3);

label_7F0612B8:
    // 7F0612B8: addi    r5, r5, 27994
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27994);

label_7F0612BC:
    // 7F0612BC: bl      0x7F061094
    {
            ctx->lr = 0x7F0612C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F0612C0:
    ctx->downcount -= 5;
    // 7F0612C0: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F0612C4:
    // 7F0612C4: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0612C8:
    // 7F0612C8: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F0612CC:
    // 7F0612CC: addi    r5, r5, 27994
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27994);

label_7F0612D0:
    // 7F0612D0: bl      0x7F061094
    {
            ctx->lr = 0x7F0612D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F0612D4:
    ctx->downcount -= 5;
    // 7F0612D4: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F0612D8:
    // 7F0612D8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0612DC:
    // 7F0612DC: addi    r4, r31, 5
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(5);

label_7F0612E0:
    // 7F0612E0: addi    r5, r5, 29018
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29018);

label_7F0612E4:
    // 7F0612E4: bl      0x7F061094
    {
            ctx->lr = 0x7F0612E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F0612E8:
    ctx->downcount -= 5;
    // 7F0612E8: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F0612EC:
    // 7F0612EC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0612F0:
    // 7F0612F0: addi    r4, r31, 7
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(7);

label_7F0612F4:
    // 7F0612F4: addi    r5, r5, 27994
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27994);

label_7F0612F8:
    // 7F0612F8: bl      0x7F061094
    {
            ctx->lr = 0x7F0612FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F0612FC:
    ctx->downcount -= 2;
    // 7F0612FC: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_7F061300:
    // 7F061300: b       0x7F061474
    {
            goto label_7F061474;
    }

label_7F061304:
    ctx->downcount -= 2;
    // 7F061304: cmpwi   r29, 1
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

label_7F061308:
    // 7F061308: bc    4, 2, 0x7F0613D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0613D0;
        }
    }

label_7F06130C:
    ctx->downcount -= 2;
    // 7F06130C: cmpwi   r30, 2
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

label_7F061310:
    // 7F061310: bc    4, 2, 0x7F0613D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0613D0;
        }
    }

label_7F061314:
    ctx->downcount -= 5;
    // 7F061314: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F061318:
    // 7F061318: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F06131C:
    // 7F06131C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061320:
    // 7F061320: addi    r5, r5, 27994
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27994);

label_7F061324:
    // 7F061324: bl      0x7F061094
    {
            ctx->lr = 0x7F061328u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F061328:
    ctx->downcount -= 6;
    // 7F061328: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F06132C:
    // 7F06132C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061330:
    // 7F061330: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F061334:
    // 7F061334: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061338:
    // 7F061338: addi    r6, r6, -11132
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11132);

label_7F06133C:
    // 7F06133C: bl      0x7F061090
    {
            ctx->lr = 0x7F061340u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061090u;
                return;
            }
            goto label_7F061090;
    }

label_7F061340:
    ctx->downcount -= 5;
    // 7F061340: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F061344:
    // 7F061344: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061348:
    // 7F061348: addi    r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1);

label_7F06134C:
    // 7F06134C: addi    r5, r5, 29018
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29018);

label_7F061350:
    // 7F061350: bl      0x7F061094
    {
            ctx->lr = 0x7F061354u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F061354:
    ctx->downcount -= 6;
    // 7F061354: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F061358:
    // 7F061358: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F06135C:
    // 7F06135C: addi    r4, r28, 1
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(1);

label_7F061360:
    // 7F061360: addi    r5, r31, 1
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(1);

label_7F061364:
    // 7F061364: addi    r6, r6, -11132
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11132);

label_7F061368:
    // 7F061368: bl      0x7F061090
    {
            ctx->lr = 0x7F06136Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061090u;
                return;
            }
            goto label_7F061090;
    }

label_7F06136C:
    ctx->downcount -= 5;
    // 7F06136C: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F061370:
    // 7F061370: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061374:
    // 7F061374: addi    r4, r31, 2
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2);

label_7F061378:
    // 7F061378: addi    r5, r5, 29018
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29018);

label_7F06137C:
    // 7F06137C: bl      0x7F061094
    {
            ctx->lr = 0x7F061380u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F061380:
    ctx->downcount -= 6;
    // 7F061380: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F061384:
    // 7F061384: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061388:
    // 7F061388: addi    r4, r28, 2
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(2);

label_7F06138C:
    // 7F06138C: addi    r5, r31, 2
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(2);

label_7F061390:
    // 7F061390: addi    r6, r6, -11132
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11132);

label_7F061394:
    // 7F061394: bl      0x7F061090
    {
            ctx->lr = 0x7F061398u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061090u;
                return;
            }
            goto label_7F061090;
    }

label_7F061398:
    ctx->downcount -= 5;
    // 7F061398: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F06139C:
    // 7F06139C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0613A0:
    // 7F0613A0: addi    r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3);

label_7F0613A4:
    // 7F0613A4: addi    r5, r5, 27994
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27994);

label_7F0613A8:
    // 7F0613A8: bl      0x7F061094
    {
            ctx->lr = 0x7F0613ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F0613AC:
    ctx->downcount -= 6;
    // 7F0613AC: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F0613B0:
    // 7F0613B0: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0613B4:
    // 7F0613B4: addi    r4, r28, 3
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(3);

label_7F0613B8:
    // 7F0613B8: addi    r5, r31, 3
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(3);

label_7F0613BC:
    // 7F0613BC: addi    r6, r6, -11132
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-11132);

label_7F0613C0:
    // 7F0613C0: bl      0x7F061090
    {
            ctx->lr = 0x7F0613C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061090u;
                return;
            }
            goto label_7F061090;
    }

label_7F0613C4:
    ctx->downcount -= 3;
    // 7F0613C4: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F0613C8:
    // 7F0613C8: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_7F0613CC:
    // 7F0613CC: b       0x7F061474
    {
            goto label_7F061474;
    }

label_7F0613D0:
    ctx->downcount -= 5;
    // 7F0613D0: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F0613D4:
    // 7F0613D4: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0613D8:
    // 7F0613D8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0613DC:
    // 7F0613DC: addi    r5, r5, 27994
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27994);

label_7F0613E0:
    // 7F0613E0: bl      0x7F061094
    {
            ctx->lr = 0x7F0613E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F0613E4:
    ctx->downcount -= 5;
    // 7F0613E4: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F0613E8:
    // 7F0613E8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0613EC:
    // 7F0613EC: addi    r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1);

label_7F0613F0:
    // 7F0613F0: addi    r5, r5, 29018
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29018);

label_7F0613F4:
    // 7F0613F4: bl      0x7F061094
    {
            ctx->lr = 0x7F0613F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F0613F8:
    ctx->downcount -= 5;
    // 7F0613F8: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F0613FC:
    // 7F0613FC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061400:
    // 7F061400: addi    r4, r31, 2
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2);

label_7F061404:
    // 7F061404: addi    r5, r5, 29018
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29018);

label_7F061408:
    // 7F061408: bl      0x7F061094
    {
            ctx->lr = 0x7F06140Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F06140C:
    ctx->downcount -= 5;
    // 7F06140C: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F061410:
    // 7F061410: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061414:
    // 7F061414: addi    r4, r31, 3
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3);

label_7F061418:
    // 7F061418: addi    r5, r5, 27994
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27994);

label_7F06141C:
    // 7F06141C: bl      0x7F061094
    {
            ctx->lr = 0x7F061420u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F061420:
    ctx->downcount -= 5;
    // 7F061420: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F061424:
    // 7F061424: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061428:
    // 7F061428: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_7F06142C:
    // 7F06142C: addi    r5, r5, 27994
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27994);

label_7F061430:
    // 7F061430: bl      0x7F061094
    {
            ctx->lr = 0x7F061434u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F061434:
    ctx->downcount -= 5;
    // 7F061434: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F061438:
    // 7F061438: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F06143C:
    // 7F06143C: addi    r4, r31, 5
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(5);

label_7F061440:
    // 7F061440: addi    r5, r5, 29018
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29018);

label_7F061444:
    // 7F061444: bl      0x7F061094
    {
            ctx->lr = 0x7F061448u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F061448:
    ctx->downcount -= 5;
    // 7F061448: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F06144C:
    // 7F06144C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061450:
    // 7F061450: addi    r4, r31, 6
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(6);

label_7F061454:
    // 7F061454: addi    r5, r5, 29018
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29018);

label_7F061458:
    // 7F061458: bl      0x7F061094
    {
            ctx->lr = 0x7F06145Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F06145C:
    ctx->downcount -= 5;
    // 7F06145C: lis     r5, 171
    ctx->gpr[5] = ((u32)(s32)(171) << 16);

label_7F061460:
    // 7F061460: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061464:
    // 7F061464: addi    r4, r31, 7
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(7);

label_7F061468:
    // 7F061468: addi    r5, r5, 27994
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27994);

label_7F06146C:
    // 7F06146C: bl      0x7F061094
    {
            ctx->lr = 0x7F061470u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061094u;
                return;
            }
            goto label_7F061094;
    }

label_7F061470:
    ctx->downcount -= 1;
    // 7F061470: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_7F061474:
    ctx->downcount -= 3;
    // 7F061474: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F061478:
    // 7F061478: cmpwi   r29, 3
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

label_7F06147C:
    // 7F06147C: bc    12, 0, 0x7F06124C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06124Cu;
                return;
            }
            goto label_7F06124C;
        }
    }

label_7F061480:
    ctx->downcount -= 3;
    // 7F061480: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F061484:
    // 7F061484: cmpwi   r30, 3
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

label_7F061488:
    // 7F061488: bc    12, 0, 0x7F061248
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061248u;
                return;
            }
            goto label_7F061248;
        }
    }

label_7F06148C:
    ctx->pc = 0x7F06148Cu;
    ctx->downcount -= 16;
    // 7F06148C: lmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F061490:
    ctx->pc = 0x7F061490u;
    // 7F061490: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061494:
    ctx->pc = 0x7F061494u;
    // 7F061494: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F061498:
    ctx->pc = 0x7F061498u;
    // 7F061498: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F06149C:
    ctx->pc = 0x7F06149Cu;
    // 7F06149C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0614A0:
    ctx->pc = 0x7F0614A0u;
    ctx->downcount -= 17;
    // 7F0614A0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0614A4:
    ctx->pc = 0x7F0614A4u;
    // 7F0614A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0614A8:
    ctx->pc = 0x7F0614A8u;
    // 7F0614A8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0614AC:
    ctx->pc = 0x7F0614ACu;
    // 7F0614AC: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0614B0:
    ctx->pc = 0x7F0614B0u;
    // 7F0614B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0614B4:
    ctx->pc = 0x7F0614B4u;
    // 7F0614B4: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F0614B8:
    ctx->pc = 0x7F0614B8u;
    // 7F0614B8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F0614BC:
    ctx->downcount -= 5;
    // 7F0614BC: addi    r27, r29, 48
    ctx->gpr[27] = ctx->gpr[29] + (u32)(s32)(48);

label_7F0614C0:
    // 7F0614C0: add   r27, r31, r27
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F0614C4:
    ctx->pc = 0x7F0614C4u;
    // 7F0614C4: lwz     r0, 192(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0614C8:
    // 7F0614C8: cmplwi  r0, 0x0000
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

label_7F0614CC:
    // 7F0614CC: bc    12, 2, 0x7F0614D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0614D8;
        }
    }

label_7F0614D0:
    ctx->downcount -= 2;
    // 7F0614D0: addi    r3, r27, 192
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(192);

label_7F0614D4:
    // 7F0614D4: bl      0x7F05CBE8
    {
            ctx->lr = 0x7F0614D8u;
            ctx->pc = 0x7F05CBE8u;
            return;
    }

label_7F0614D8:
    ctx->pc = 0x7F0614D8u;
    ctx->downcount -= 3;
    // 7F0614D8: lwz     r0, 236(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0614DC:
    // 7F0614DC: cmplwi  r0, 0x0000
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

label_7F0614E0:
    // 7F0614E0: bc    12, 2, 0x7F0614EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0614EC;
        }
    }

label_7F0614E4:
    ctx->downcount -= 2;
    // 7F0614E4: addi    r3, r27, 236
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(236);

label_7F0614E8:
    // 7F0614E8: bl      0x7F05CBE8
    {
            ctx->lr = 0x7F0614ECu;
            ctx->pc = 0x7F05CBE8u;
            return;
    }

label_7F0614EC:
    ctx->downcount -= 4;
    // 7F0614EC: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F0614F0:
    // 7F0614F0: addi    r29, r29, 480
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(480);

label_7F0614F4:
    // 7F0614F4: cmpwi   r26, 72
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(72);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0614F8:
    // 7F0614F8: bc    12, 0, 0x7F0614BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0614BCu;
                return;
            }
            goto label_7F0614BC;
        }
    }

label_7F0614FC:
    ctx->pc = 0x7F0614FCu;
    ctx->downcount -= 4;
    // 7F0614FC: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F061500:
    ctx->pc = 0x7F061500u;
    // 7F061500: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F061504:
    ctx->pc = 0x7F061504u;
    // 7F061504: or   r28, r26, r26
    {
        ctx->gpr[28] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F061508:
    ctx->pc = 0x7F061508u;
    // 7F061508: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F06150C:
    ctx->downcount -= 5;
    // 7F06150C: addis   r27, r29, 1
    ctx->gpr[27] = ctx->gpr[29] + ((u32)(s32)(1) << 16);

label_7F061510:
    // 7F061510: addi    r27, r27, -29424
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-29424);

label_7F061514:
    ctx->pc = 0x7F061514u;
    // 7F061514: lwzx    r0, r31, r27
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[27];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061518:
    // 7F061518: cmpwi   r0, 1
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

label_7F06151C:
    // 7F06151C: bc    4, 2, 0x7F061534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F061534;
        }
    }

label_7F061520:
    ctx->downcount -= 4;
    // 7F061520: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F061524:
    // 7F061524: addi    r3, r3, -30928
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30928);

label_7F061528:
    // 7F061528: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F06152C:
    // 7F06152C: bl      0x7F05CBE8
    {
            ctx->lr = 0x7F061530u;
            ctx->pc = 0x7F05CBE8u;
            return;
    }

label_7F061530:
    ctx->pc = 0x7F061530u;
    ctx->downcount -= 1;
    // 7F061530: stwx    r28, r31, r27
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[27];
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F061534:
    ctx->downcount -= 5;
    // 7F061534: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F061538:
    // 7F061538: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F06153C:
    // 7F06153C: cmpwi   r26, 8
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

label_7F061540:
    // 7F061540: addi    r30, r30, 188
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(188);

label_7F061544:
    // 7F061544: bc    12, 0, 0x7F06150C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06150Cu;
                return;
            }
            goto label_7F06150C;
        }
    }

label_7F061548:
    ctx->pc = 0x7F061548u;
    ctx->downcount -= 2;
    // 7F061548: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F06154C:
    ctx->pc = 0x7F06154Cu;
    // 7F06154C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F061550:
    ctx->downcount -= 4;
    // 7F061550: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F061554:
    // 7F061554: addi    r3, r3, -29392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29392);

label_7F061558:
    // 7F061558: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F06155C:
    // 7F06155C: bl      0x7F05CBE8
    {
            ctx->lr = 0x7F061560u;
            ctx->pc = 0x7F05CBE8u;
            return;
    }

label_7F061560:
    ctx->downcount -= 4;
    // 7F061560: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F061564:
    // 7F061564: addi    r30, r30, 172
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(172);

label_7F061568:
    // 7F061568: cmpwi   r27, 4
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F06156C:
    // 7F06156C: bc    12, 0, 0x7F061550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061550u;
                return;
            }
            goto label_7F061550;
        }
    }

label_7F061570:
    ctx->pc = 0x7F061570u;
    ctx->downcount -= 4;
    // 7F061570: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061574:
    ctx->pc = 0x7F061574u;
    // 7F061574: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061578:
    ctx->pc = 0x7F061578u;
    // 7F061578: cmpwi   r0, 0
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

label_7F06157C:
    ctx->pc = 0x7F06157Cu;
    // 7F06157C: bc    12, 2, 0x7F061614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061614;
        }
    }

label_7F061580:
    ctx->pc = 0x7F061580u;
    ctx->downcount -= 2;
    // 7F061580: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F061584:
    ctx->pc = 0x7F061584u;
    // 7F061584: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F061588:
    ctx->downcount -= 3;
    // 7F061588: addis   r28, r30, 1
    ctx->gpr[28] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F06158C:
    // 7F06158C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F061590:
    // 7F061590: addi    r28, r28, -20112
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-20112);

label_7F061594:
    ctx->downcount -= 2;
    // 7F061594: cmpwi   r27, 4
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F061598:
    // 7F061598: bc    12, 2, 0x7F0615C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0615C0;
        }
    }

label_7F06159C:
    ctx->downcount -= 2;
    // 7F06159C: cmpwi   r26, 0
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

label_7F0615A0:
    // 7F0615A0: bc    4, 2, 0x7F0615C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0615C0;
        }
    }

label_7F0615A4:
    ctx->pc = 0x7F0615A4u;
    ctx->downcount -= 3;
    // 7F0615A4: lwzx    r0, r31, r28
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[28];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0615A8:
    // 7F0615A8: cmpwi   r0, 0
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

label_7F0615AC:
    // 7F0615AC: bc    4, 2, 0x7F0615C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0615C0;
        }
    }

label_7F0615B0:
    ctx->downcount -= 4;
    // 7F0615B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0615B4:
    // 7F0615B4: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F0615B8:
    // 7F0615B8: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0615BC:
    // 7F0615BC: bl      0x7F05E19C
    {
            ctx->lr = 0x7F0615C0u;
            ctx->pc = 0x7F05E19Cu;
            return;
    }

label_7F0615C0:
    ctx->downcount -= 3;
    // 7F0615C0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_7F0615C4:
    // 7F0615C4: cmpwi   r26, 2
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

label_7F0615C8:
    // 7F0615C8: bc    12, 0, 0x7F061594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061594u;
                return;
            }
            goto label_7F061594;
        }
    }

label_7F0615CC:
    ctx->downcount -= 4;
    // 7F0615CC: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F0615D0:
    // 7F0615D0: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F0615D4:
    // 7F0615D4: cmpwi   r27, 5
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0615D8:
    // 7F0615D8: bc    12, 0, 0x7F061588
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061588u;
                return;
            }
            goto label_7F061588;
        }
    }

label_7F0615DC:
    ctx->pc = 0x7F0615DCu;
    ctx->downcount -= 2;
    // 7F0615DC: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F0615E0:
    ctx->pc = 0x7F0615E0u;
    // 7F0615E0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0615E4:
    ctx->downcount -= 5;
    // 7F0615E4: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F0615E8:
    // 7F0615E8: addi    r3, r3, -20144
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20144);

label_7F0615EC:
    ctx->pc = 0x7F0615ECu;
    // 7F0615EC: lwzx    r0, r31, r3
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0615F0:
    // 7F0615F0: cmpwi   r0, 1
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

label_7F0615F4:
    // 7F0615F4: bc    4, 2, 0x7F061604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F061604;
        }
    }

label_7F0615F8:
    ctx->downcount -= 3;
    // 7F0615F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0615FC:
    // 7F0615FC: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F061600:
    // 7F061600: bl      0x7F05DC30
    {
            ctx->lr = 0x7F061604u;
            ctx->pc = 0x7F05DC30u;
            return;
    }

label_7F061604:
    ctx->downcount -= 4;
    // 7F061604: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F061608:
    // 7F061608: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F06160C:
    // 7F06160C: cmpwi   r27, 4
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F061610:
    // 7F061610: bc    12, 0, 0x7F0615E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0615E4u;
                return;
            }
            goto label_7F0615E4;
        }
    }

label_7F061614:
    ctx->pc = 0x7F061614u;
    ctx->downcount -= 4;
    // 7F061614: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061618:
    ctx->pc = 0x7F061618u;
    // 7F061618: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06161C:
    ctx->pc = 0x7F06161Cu;
    // 7F06161C: cmpwi   r0, 1
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

label_7F061620:
    ctx->pc = 0x7F061620u;
    // 7F061620: bc    4, 2, 0x7F061690
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F061690;
        }
    }

label_7F061624:
    ctx->pc = 0x7F061624u;
    ctx->downcount -= 2;
    // 7F061624: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F061628:
    ctx->pc = 0x7F061628u;
    // 7F061628: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F06162C:
    ctx->downcount -= 3;
    // 7F06162C: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F061630:
    // 7F061630: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F061634:
    // 7F061634: bl      0x7F0146B0
    {
            ctx->lr = 0x7F061638u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F061638:
    ctx->downcount -= 4;
    // 7F061638: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F06163C:
    // 7F06163C: addi    r30, r30, 480
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(480);

label_7F061640:
    // 7F061640: cmpwi   r27, 36
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(36);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F061644:
    // 7F061644: bc    12, 0, 0x7F06162C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06162Cu;
                return;
            }
            goto label_7F06162C;
        }
    }

label_7F061648:
    ctx->pc = 0x7F061648u;
    ctx->downcount -= 3;
    // 7F061648: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F06164C:
    ctx->pc = 0x7F06164Cu;
    // 7F06164C: addi    r3, r3, -28704
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28704);

label_7F061650:
    ctx->pc = 0x7F061650u;
    // 7F061650: bl      0x7F05CBE8
    {
            ctx->lr = 0x7F061654u;
            ctx->pc = 0x7F05CBE8u;
            return;
    }

label_7F061654:
    ctx->pc = 0x7F061654u;
    ctx->downcount -= 3;
    // 7F061654: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061658:
    ctx->pc = 0x7F061658u;
    // 7F061658: addi    r3, r3, -28452
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28452);

label_7F06165C:
    ctx->pc = 0x7F06165Cu;
    // 7F06165C: bl      0x7F05CBE8
    {
            ctx->lr = 0x7F061660u;
            ctx->pc = 0x7F05CBE8u;
            return;
    }

label_7F061660:
    ctx->pc = 0x7F061660u;
    ctx->downcount -= 3;
    // 7F061660: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061664:
    ctx->pc = 0x7F061664u;
    // 7F061664: addi    r3, r3, -28200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28200);

label_7F061668:
    ctx->pc = 0x7F061668u;
    // 7F061668: bl      0x7F05CBE8
    {
            ctx->lr = 0x7F06166Cu;
            ctx->pc = 0x7F05CBE8u;
            return;
    }

label_7F06166C:
    ctx->pc = 0x7F06166Cu;
    ctx->downcount -= 3;
    // 7F06166C: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061670:
    ctx->pc = 0x7F061670u;
    // 7F061670: addi    r3, r3, -27948
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27948);

label_7F061674:
    ctx->pc = 0x7F061674u;
    // 7F061674: bl      0x7F05CBE8
    {
            ctx->lr = 0x7F061678u;
            ctx->pc = 0x7F05CBE8u;
            return;
    }

label_7F061678:
    ctx->pc = 0x7F061678u;
    ctx->downcount -= 3;
    // 7F061678: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F06167C:
    ctx->pc = 0x7F06167Cu;
    // 7F06167C: addi    r3, r3, -28660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28660);

label_7F061680:
    ctx->pc = 0x7F061680u;
    // 7F061680: bl      0x7F05CBE8
    {
            ctx->lr = 0x7F061684u;
            ctx->pc = 0x7F05CBE8u;
            return;
    }

label_7F061684:
    ctx->pc = 0x7F061684u;
    ctx->downcount -= 3;
    // 7F061684: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061688:
    ctx->pc = 0x7F061688u;
    // 7F061688: addi    r3, r3, -28156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28156);

label_7F06168C:
    ctx->pc = 0x7F06168Cu;
    // 7F06168C: bl      0x7F05CBE8
    {
            ctx->lr = 0x7F061690u;
            ctx->pc = 0x7F05CBE8u;
            return;
    }

label_7F061690:
    ctx->pc = 0x7F061690u;
    ctx->downcount -= 16;
    // 7F061690: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F061694:
    ctx->pc = 0x7F061694u;
    // 7F061694: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061698:
    ctx->pc = 0x7F061698u;
    // 7F061698: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F06169C:
    ctx->pc = 0x7F06169Cu;
    // 7F06169C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0616A0:
    ctx->pc = 0x7F0616A0u;
    // 7F0616A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0616A4:
    ctx->pc = 0x7F0616A4u;
    ctx->downcount -= 20;
    // 7F0616A4: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0616A8:
    ctx->pc = 0x7F0616A8u;
    // 7F0616A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0616AC:
    ctx->pc = 0x7F0616ACu;
    // 7F0616AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0616B0:
    ctx->pc = 0x7F0616B0u;
    // 7F0616B0: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0616B4:
    ctx->pc = 0x7F0616B4u;
    // 7F0616B4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0616B8:
    ctx->pc = 0x7F0616B8u;
    // 7F0616B8: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0616BC:
    ctx->pc = 0x7F0616BCu;
    // 7F0616BC: stmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0616C0:
    ctx->pc = 0x7F0616C0u;
    // 7F0616C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0616C4:
    ctx->pc = 0x7F0616C4u;
    // 7F0616C4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0616C8:
    loop_7F0616C8(ctx);
    if (ctx->pc == 0x7F0616DCu) goto label_7F0616DC;
    return;
label_7F0616CC:
    // 7F0616CC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0616D0:
    // 7F0616D0: addi    r3, r3, -29424
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29424);

label_7F0616D4:
    ctx->pc = 0x7F0616D4u;
    // 7F0616D4: stwx    r5, r31, r3
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0616D8:
    // 7F0616D8: bc    16, 0, 0x7F0616C8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0616C8u;
                return;
            }
            goto label_7F0616C8;
        }
    }

label_7F0616DC:
    ctx->pc = 0x7F0616DCu;
    ctx->downcount -= 7;
    // 7F0616DC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0616E0:
    ctx->pc = 0x7F0616E0u;
    // 7F0616E0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F0616E4:
    ctx->pc = 0x7F0616E4u;
    // 7F0616E4: addi    r4, r3, 27828
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(27828);

label_7F0616E8:
    ctx->pc = 0x7F0616E8u;
    // 7F0616E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0616EC:
    ctx->pc = 0x7F0616ECu;
    // 7F0616EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0616F0:
    ctx->pc = 0x7F0616F0u;
    // 7F0616F0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0616F4:
    loop_7F0616F4(ctx);
    if (ctx->pc == 0x7F061710u) goto label_7F061710;
    return;
label_7F0616F8:
    // 7F0616F8: addis   r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + ((u32)(s32)(1) << 16);

label_7F0616FC:
    ctx->pc = 0x7F0616FCu;
    // 7F0616FC: stw     r6, -20144(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20144);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F061700:
    ctx->pc = 0x7F061700u;
    // 7F061700: stwx    r6, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F061704:
    // 7F061704: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F061708:
    ctx->pc = 0x7F061708u;
    // 7F061708: stw     r6, -20980(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20980);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F06170C:
    // 7F06170C: bc    16, 0, 0x7F0616F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0616F4u;
                return;
            }
            goto label_7F0616F4;
        }
    }

label_7F061710:
    ctx->pc = 0x7F061710u;
    ctx->downcount -= 5;
    // 7F061710: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F061714:
    ctx->pc = 0x7F061714u;
    // 7F061714: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F061718:
    ctx->pc = 0x7F061718u;
    // 7F061718: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F06171C:
    ctx->pc = 0x7F06171Cu;
    // 7F06171C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F061720:
    loop_7F061720(ctx);
    if (ctx->pc == 0x7F06173Cu) goto label_7F06173C;
    return;
label_7F061724:
    // 7F061724: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F061728:
    // 7F061728: addis   r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + ((u32)(s32)(1) << 16);

label_7F06172C:
    ctx->pc = 0x7F06172Cu;
    // 7F06172C: stw     r5, -19808(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19808);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061730:
    ctx->pc = 0x7F061730u;
    // 7F061730: lwz     r0, -19808(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061734:
    ctx->pc = 0x7F061734u;
    // 7F061734: stw     r0, -19520(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19520);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061738:
    // 7F061738: bc    16, 0, 0x7F061720
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061720u;
                return;
            }
            goto label_7F061720;
        }
    }

label_7F06173C:
    ctx->pc = 0x7F06173Cu;
    ctx->downcount -= 160;
    // 7F06173C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F061740:
    ctx->pc = 0x7F061740u;
    // 7F061740: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F061744:
    ctx->pc = 0x7F061744u;
    // 7F061744: addi    r4, r3, -9064
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9064);

label_7F061748:
    ctx->pc = 0x7F061748u;
    // 7F061748: li      r21, -5000
    ctx->gpr[21] = (u32)(s32)(-5000);

label_7F06174C:
    ctx->pc = 0x7F06174Cu;
    // 7F06174C: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F06174Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F061750:
    ctx->pc = 0x7F061750u;
    // 7F061750: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061754:
    ctx->pc = 0x7F061754u;
    // 7F061754: addi    r6, r5, -9208
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-9208);

label_7F061758:
    ctx->pc = 0x7F061758u;
    // 7F061758: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F06175C:
    ctx->pc = 0x7F06175Cu;
    // 7F06175C: stfs     f5, -21944(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F06175Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21944);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F061760:
    ctx->pc = 0x7F061760u;
    // 7F061760: addi    r5, r3, -9104
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9104);

label_7F061764:
    ctx->pc = 0x7F061764u;
    // 7F061764: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F061764u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F061768:
    ctx->pc = 0x7F061768u;
    // 7F061768: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F06176C:
    ctx->pc = 0x7F06176Cu;
    // 7F06176C: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F06176Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F061770:
    ctx->pc = 0x7F061770u;
    // 7F061770: addi    r6, r3, -9060
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-9060);

label_7F061774:
    ctx->pc = 0x7F061774u;
    // 7F061774: stfs     f4, -21940(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F061774u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21940);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F061778:
    ctx->pc = 0x7F061778u;
    // 7F061778: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F06177C:
    ctx->pc = 0x7F06177Cu;
    // 7F06177C: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F06177Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F061780:
    ctx->pc = 0x7F061780u;
    // 7F061780: addi    r5, r3, -9056
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9056);

label_7F061784:
    ctx->pc = 0x7F061784u;
    // 7F061784: stfs     f3, -21936(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F061784u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21936);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F061788:
    ctx->pc = 0x7F061788u;
    // 7F061788: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F06178C:
    ctx->pc = 0x7F06178Cu;
    // 7F06178C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F06178Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F061790:
    ctx->pc = 0x7F061790u;
    // 7F061790: li      r12, -5500
    ctx->gpr[12] = (u32)(s32)(-5500);

label_7F061794:
    ctx->pc = 0x7F061794u;
    // 7F061794: stfs     f2, -21928(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F061794u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21928);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F061798:
    ctx->pc = 0x7F061798u;
    // 7F061798: li      r11, -2000
    ctx->gpr[11] = (u32)(s32)(-2000);

label_7F06179C:
    ctx->pc = 0x7F06179Cu;
    // 7F06179C: lfs     f0, -9052(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F06179Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9052);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0617A0:
    ctx->pc = 0x7F0617A0u;
    // 7F0617A0: li      r9, -3000
    ctx->gpr[9] = (u32)(s32)(-3000);

label_7F0617A4:
    ctx->pc = 0x7F0617A4u;
    // 7F0617A4: stfs     f1, -21924(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0617A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21924);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0617A8:
    ctx->pc = 0x7F0617A8u;
    // 7F0617A8: li      r8, 5000
    ctx->gpr[8] = (u32)(s32)(5000);

label_7F0617AC:
    ctx->pc = 0x7F0617ACu;
    // 7F0617AC: li      r10, 9000
    ctx->gpr[10] = (u32)(s32)(9000);

label_7F0617B0:
    ctx->pc = 0x7F0617B0u;
    // 7F0617B0: li      r7, 500
    ctx->gpr[7] = (u32)(s32)(500);

label_7F0617B4:
    ctx->pc = 0x7F0617B4u;
    // 7F0617B4: stfs     f0, -21920(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0617B4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21920);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0617B8:
    ctx->pc = 0x7F0617B8u;
    // 7F0617B8: li      r6, -9000
    ctx->gpr[6] = (u32)(s32)(-9000);

label_7F0617BC:
    ctx->pc = 0x7F0617BCu;
    // 7F0617BC: li      r5, 3000
    ctx->gpr[5] = (u32)(s32)(3000);

label_7F0617C0:
    ctx->pc = 0x7F0617C0u;
    // 7F0617C0: li      r3, 6000
    ctx->gpr[3] = (u32)(s32)(6000);

label_7F0617C4:
    ctx->pc = 0x7F0617C4u;
    // 7F0617C4: stfs     f5, -21912(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0617C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21912);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F0617C8:
    ctx->pc = 0x7F0617C8u;
    // 7F0617C8: li      r0, 2000
    ctx->gpr[0] = (u32)(s32)(2000);

label_7F0617CC:
    ctx->pc = 0x7F0617CCu;
    // 7F0617CC: stfs     f3, -21908(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0617CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21908);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F0617D0:
    ctx->pc = 0x7F0617D0u;
    // 7F0617D0: stfs     f4, -21904(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0617D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21904);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F0617D4:
    ctx->pc = 0x7F0617D4u;
    // 7F0617D4: stfs     f2, -21896(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0617D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21896);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0617D8:
    ctx->pc = 0x7F0617D8u;
    // 7F0617D8: stfs     f0, -21892(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0617D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21892);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0617DC:
    ctx->pc = 0x7F0617DCu;
    // 7F0617DC: stfs     f1, -21888(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0617DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21888);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0617E0:
    ctx->pc = 0x7F0617E0u;
    // 7F0617E0: sth     r21, -20848(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20848);
        mem_write16(ctx, ea, (u16)ctx->gpr[21]);
    }

label_7F0617E4:
    ctx->pc = 0x7F0617E4u;
    // 7F0617E4: sth     r12, -20846(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20846);
        mem_write16(ctx, ea, (u16)ctx->gpr[12]);
    }

label_7F0617E8:
    ctx->pc = 0x7F0617E8u;
    // 7F0617E8: sth     r11, -20844(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20844);
        mem_write16(ctx, ea, (u16)ctx->gpr[11]);
    }

label_7F0617EC:
    ctx->pc = 0x7F0617ECu;
    // 7F0617EC: sth     r9, -20842(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20842);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F0617F0:
    ctx->pc = 0x7F0617F0u;
    // 7F0617F0: sth     r8, -20840(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20840);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F0617F4:
    ctx->pc = 0x7F0617F4u;
    // 7F0617F4: sth     r9, -20838(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20838);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F0617F8:
    ctx->pc = 0x7F0617F8u;
    // 7F0617F8: sth     r10, -20836(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20836);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F0617FC:
    ctx->pc = 0x7F0617FCu;
    // 7F0617FC: sth     r7, -20834(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20834);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F061800:
    ctx->pc = 0x7F061800u;
    // 7F061800: sth     r6, -20832(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20832);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F061804:
    ctx->pc = 0x7F061804u;
    // 7F061804: sth     r5, -20830(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20830);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F061808:
    ctx->pc = 0x7F061808u;
    // 7F061808: sth     r21, -20828(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20828);
        mem_write16(ctx, ea, (u16)ctx->gpr[21]);
    }

label_7F06180C:
    ctx->pc = 0x7F06180Cu;
    // 7F06180C: sth     r3, -20826(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20826);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F061810:
    ctx->pc = 0x7F061810u;
    // 7F061810: sth     r0, -20824(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20824);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F061814:
    ctx->pc = 0x7F061814u;
    // 7F061814: sth     r3, -20822(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20822);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F061818:
    ctx->pc = 0x7F061818u;
    // 7F061818: sth     r8, -20820(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20820);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F06181C:
    ctx->pc = 0x7F06181Cu;
    // 7F06181C: lis     r21, 171
    ctx->gpr[21] = ((u32)(s32)(171) << 16);

label_7F061820:
    ctx->pc = 0x7F061820u;
    // 7F061820: lis     r9, 70
    ctx->gpr[9] = ((u32)(s32)(70) << 16);

label_7F061824:
    ctx->pc = 0x7F061824u;
    // 7F061824: lis     r8, 220
    ctx->gpr[8] = ((u32)(s32)(220) << 16);

label_7F061828:
    ctx->pc = 0x7F061828u;
    // 7F061828: sth     r10, -20818(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20818);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F06182C:
    ctx->pc = 0x7F06182Cu;
    // 7F06182C: lis     r7, 236
    ctx->gpr[7] = ((u32)(s32)(236) << 16);

label_7F061830:
    ctx->pc = 0x7F061830u;
    // 7F061830: addi    r0, r21, 27994
    ctx->gpr[0] = ctx->gpr[21] + (u32)(s32)(27994);

label_7F061834:
    ctx->pc = 0x7F061834u;
    // 7F061834: lis     r6, 252
    ctx->gpr[6] = ((u32)(s32)(252) << 16);

label_7F061838:
    ctx->pc = 0x7F061838u;
    // 7F061838: stw     r0, -21444(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21444);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06183C:
    ctx->pc = 0x7F06183Cu;
    // 7F06183C: lis     r29, 12
    ctx->gpr[29] = ((u32)(s32)(12) << 16);

label_7F061840:
    ctx->pc = 0x7F061840u;
    // 7F061840: addi    r22, r21, 27995
    ctx->gpr[22] = ctx->gpr[21] + (u32)(s32)(27995);

label_7F061844:
    ctx->pc = 0x7F061844u;
    // 7F061844: lis     r5, 182
    ctx->gpr[5] = ((u32)(s32)(182) << 16);

label_7F061848:
    ctx->pc = 0x7F061848u;
    // 7F061848: stw     r22, -21436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21436);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F06184C:
    ctx->pc = 0x7F06184Cu;
    // 7F06184C: addi    r23, r21, 27996
    ctx->gpr[23] = ctx->gpr[21] + (u32)(s32)(27996);

label_7F061850:
    ctx->pc = 0x7F061850u;
    // 7F061850: lis     r3, 198
    ctx->gpr[3] = ((u32)(s32)(198) << 16);

label_7F061854:
    ctx->pc = 0x7F061854u;
    // 7F061854: addi    r24, r21, 27997
    ctx->gpr[24] = ctx->gpr[21] + (u32)(s32)(27997);

label_7F061858:
    ctx->pc = 0x7F061858u;
    // 7F061858: stw     r23, -21428(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21428);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F06185C:
    ctx->pc = 0x7F06185Cu;
    // 7F06185C: addi    r10, r9, 27384
    ctx->gpr[10] = ctx->gpr[9] + (u32)(s32)(27384);

label_7F061860:
    ctx->pc = 0x7F061860u;
    // 7F061860: addi    r9, r9, 27385
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(27385);

label_7F061864:
    ctx->pc = 0x7F061864u;
    // 7F061864: addi    r25, r8, -5
    ctx->gpr[25] = ctx->gpr[8] + (u32)(s32)(-5);

label_7F061868:
    ctx->pc = 0x7F061868u;
    // 7F061868: stw     r24, -21420(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21420);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F06186C:
    ctx->pc = 0x7F06186Cu;
    // 7F06186C: addi    r26, r7, -5
    ctx->gpr[26] = ctx->gpr[7] + (u32)(s32)(-5);

label_7F061870:
    ctx->pc = 0x7F061870u;
    // 7F061870: addi    r27, r6, -5
    ctx->gpr[27] = ctx->gpr[6] + (u32)(s32)(-5);

label_7F061874:
    ctx->pc = 0x7F061874u;
    // 7F061874: addi    r28, r29, -4
    ctx->gpr[28] = ctx->gpr[29] + (u32)(s32)(-4);

label_7F061878:
    ctx->pc = 0x7F061878u;
    // 7F061878: stw     r10, -21412(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21412);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F06187C:
    ctx->pc = 0x7F06187Cu;
    // 7F06187C: addi    r30, r5, -20523
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(-20523);

label_7F061880:
    ctx->pc = 0x7F061880u;
    // 7F061880: addi    r3, r3, -20523
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20523);

label_7F061884:
    ctx->pc = 0x7F061884u;
    // 7F061884: addi    r12, r21, 29018
    ctx->gpr[12] = ctx->gpr[21] + (u32)(s32)(29018);

label_7F061888:
    ctx->pc = 0x7F061888u;
    // 7F061888: stw     r9, -21404(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21404);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F06188C:
    ctx->pc = 0x7F06188Cu;
    // 7F06188C: addi    r11, r21, 29019
    ctx->gpr[11] = ctx->gpr[21] + (u32)(s32)(29019);

label_7F061890:
    ctx->pc = 0x7F061890u;
    // 7F061890: addi    r10, r21, 29020
    ctx->gpr[10] = ctx->gpr[21] + (u32)(s32)(29020);

label_7F061894:
    ctx->pc = 0x7F061894u;
    // 7F061894: addi    r9, r21, 29021
    ctx->gpr[9] = ctx->gpr[21] + (u32)(s32)(29021);

label_7F061898:
    ctx->pc = 0x7F061898u;
    // 7F061898: stw     r25, -21440(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21440);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F06189C:
    ctx->pc = 0x7F06189Cu;
    // 7F06189C: addi    r8, r8, 59
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(59);

label_7F0618A0:
    ctx->pc = 0x7F0618A0u;
    // 7F0618A0: addi    r7, r7, 59
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(59);

label_7F0618A4:
    ctx->pc = 0x7F0618A4u;
    // 7F0618A4: addi    r6, r6, 59
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(59);

label_7F0618A8:
    ctx->pc = 0x7F0618A8u;
    // 7F0618A8: stw     r26, -21432(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21432);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F0618AC:
    ctx->pc = 0x7F0618ACu;
    // 7F0618AC: addi    r5, r29, 60
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(60);

label_7F0618B0:
    ctx->pc = 0x7F0618B0u;
    // 7F0618B0: stw     r27, -21424(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21424);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F0618B4:
    ctx->pc = 0x7F0618B4u;
    // 7F0618B4: stw     r28, -21416(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21416);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F0618B8:
    ctx->pc = 0x7F0618B8u;
    // 7F0618B8: stw     r30, -21408(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21408);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0618BC:
    ctx->pc = 0x7F0618BCu;
    // 7F0618BC: stw     r3, -21400(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21400);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0618C0:
    ctx->pc = 0x7F0618C0u;
    // 7F0618C0: stw     r12, -21396(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21396);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F0618C4:
    ctx->pc = 0x7F0618C4u;
    // 7F0618C4: stw     r11, -21388(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21388);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F0618C8:
    ctx->pc = 0x7F0618C8u;
    // 7F0618C8: stw     r10, -21380(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21380);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0618CC:
    ctx->pc = 0x7F0618CCu;
    // 7F0618CC: stw     r9, -21372(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21372);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0618D0:
    ctx->pc = 0x7F0618D0u;
    // 7F0618D0: stw     r9, -21364(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21364);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0618D4:
    ctx->pc = 0x7F0618D4u;
    // 7F0618D4: stw     r9, -21356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21356);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0618D8:
    ctx->pc = 0x7F0618D8u;
    // 7F0618D8: stw     r8, -21392(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21392);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0618DC:
    ctx->pc = 0x7F0618DCu;
    // 7F0618DC: stw     r7, -21384(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21384);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0618E0:
    ctx->pc = 0x7F0618E0u;
    // 7F0618E0: stw     r6, -21376(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21376);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0618E4:
    ctx->pc = 0x7F0618E4u;
    // 7F0618E4: stw     r5, -21368(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21368);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0618E8:
    ctx->pc = 0x7F0618E8u;
    // 7F0618E8: stw     r5, -21360(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21360);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0618EC:
    ctx->pc = 0x7F0618ECu;
    // 7F0618EC: stw     r5, -21352(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21352);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0618F0:
    ctx->pc = 0x7F0618F0u;
    // 7F0618F0: stw     r0, -21348(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0618F4:
    ctx->pc = 0x7F0618F4u;
    // 7F0618F4: stw     r22, -21340(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21340);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F0618F8:
    ctx->pc = 0x7F0618F8u;
    // 7F0618F8: stw     r23, -21332(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21332);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F0618FC:
    ctx->pc = 0x7F0618FCu;
    // 7F0618FC: stw     r24, -21324(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21324);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F061900:
    ctx->pc = 0x7F061900u;
    // 7F061900: stw     r24, -21316(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21316);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F061904:
    ctx->pc = 0x7F061904u;
    // 7F061904: stw     r24, -21308(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21308);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F061908:
    ctx->pc = 0x7F061908u;
    // 7F061908: stw     r25, -21344(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21344);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F06190C:
    ctx->pc = 0x7F06190Cu;
    // 7F06190C: stw     r26, -21336(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21336);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F061910:
    ctx->pc = 0x7F061910u;
    // 7F061910: stw     r27, -21328(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21328);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F061914:
    ctx->pc = 0x7F061914u;
    // 7F061914: stw     r28, -21320(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21320);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F061918:
    ctx->pc = 0x7F061918u;
    // 7F061918: stw     r28, -21312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21312);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F06191C:
    ctx->pc = 0x7F06191Cu;
    // 7F06191C: stw     r28, -21304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21304);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F061920:
    ctx->pc = 0x7F061920u;
    // 7F061920: stw     r12, -21300(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21300);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F061924:
    ctx->pc = 0x7F061924u;
    // 7F061924: stw     r11, -21292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21292);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F061928:
    ctx->pc = 0x7F061928u;
    // 7F061928: stw     r10, -21284(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21284);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F06192C:
    ctx->pc = 0x7F06192Cu;
    // 7F06192C: stw     r9, -21276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21276);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F061930:
    ctx->pc = 0x7F061930u;
    // 7F061930: stw     r9, -21268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21268);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F061934:
    ctx->pc = 0x7F061934u;
    // 7F061934: stw     r9, -21260(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21260);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F061938:
    ctx->pc = 0x7F061938u;
    // 7F061938: stw     r8, -21296(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21296);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F06193C:
    ctx->pc = 0x7F06193Cu;
    // 7F06193C: stw     r7, -21288(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21288);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F061940:
    ctx->pc = 0x7F061940u;
    // 7F061940: stw     r6, -21280(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21280);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F061944:
    ctx->pc = 0x7F061944u;
    // 7F061944: stw     r5, -21272(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21272);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061948:
    ctx->pc = 0x7F061948u;
    // 7F061948: stw     r5, -21264(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21264);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F06194C:
    ctx->pc = 0x7F06194Cu;
    // 7F06194C: stw     r5, -21256(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21256);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061950:
    ctx->pc = 0x7F061950u;
    // 7F061950: stw     r0, -21252(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061954:
    ctx->pc = 0x7F061954u;
    // 7F061954: stw     r22, -21244(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21244);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F061958:
    ctx->pc = 0x7F061958u;
    // 7F061958: stw     r23, -21236(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21236);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F06195C:
    ctx->pc = 0x7F06195Cu;
    // 7F06195C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061960:
    ctx->pc = 0x7F061960u;
    // 7F061960: stw     r24, -21228(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21228);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F061964:
    ctx->pc = 0x7F061964u;
    // 7F061964: stw     r24, -21220(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21220);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F061968:
    ctx->pc = 0x7F061968u;
    // 7F061968: stw     r24, -21212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21212);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F06196C:
    ctx->pc = 0x7F06196Cu;
    // 7F06196C: stw     r25, -21248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21248);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F061970:
    ctx->pc = 0x7F061970u;
    // 7F061970: stw     r26, -21240(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21240);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F061974:
    ctx->pc = 0x7F061974u;
    // 7F061974: stw     r27, -21232(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21232);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F061978:
    ctx->pc = 0x7F061978u;
    // 7F061978: stw     r28, -21224(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21224);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F06197C:
    ctx->pc = 0x7F06197Cu;
    // 7F06197C: stw     r28, -21216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21216);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F061980:
    ctx->pc = 0x7F061980u;
    // 7F061980: stw     r28, -21208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21208);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F061984:
    ctx->pc = 0x7F061984u;
    // 7F061984: stw     r12, -21204(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21204);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F061988:
    ctx->pc = 0x7F061988u;
    // 7F061988: stw     r11, -21196(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21196);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F06198C:
    ctx->pc = 0x7F06198Cu;
    // 7F06198C: stw     r10, -21188(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21188);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F061990:
    ctx->pc = 0x7F061990u;
    // 7F061990: stw     r9, -21180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21180);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F061994:
    ctx->pc = 0x7F061994u;
    // 7F061994: stw     r9, -21172(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21172);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F061998:
    ctx->pc = 0x7F061998u;
    // 7F061998: stw     r9, -21164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21164);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F06199C:
    ctx->pc = 0x7F06199Cu;
    // 7F06199C: stw     r8, -21200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21200);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0619A0:
    ctx->pc = 0x7F0619A0u;
    // 7F0619A0: stw     r7, -21192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21192);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0619A4:
    ctx->pc = 0x7F0619A4u;
    // 7F0619A4: stw     r6, -21184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21184);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0619A8:
    ctx->pc = 0x7F0619A8u;
    // 7F0619A8: stw     r5, -21176(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21176);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0619AC:
    ctx->pc = 0x7F0619ACu;
    // 7F0619AC: stw     r5, -21168(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21168);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0619B0:
    ctx->pc = 0x7F0619B0u;
    // 7F0619B0: stw     r5, -21160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21160);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0619B4:
    ctx->pc = 0x7F0619B4u;
    // 7F0619B4: lwz     r4, -20096(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20096);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0619B8:
    ctx->pc = 0x7F0619B8u;
    // 7F0619B8: bl      0x7F061108
    {
            ctx->lr = 0x7F0619BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061108u;
                return;
            }
            goto label_7F061108;
    }

label_7F0619BC:
    ctx->pc = 0x7F0619BCu;
    ctx->downcount -= 4;
    // 7F0619BC: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F0619C0:
    ctx->pc = 0x7F0619C0u;
    // 7F0619C0: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0619C4:
    ctx->pc = 0x7F0619C4u;
    // 7F0619C4: cmpwi   r0, 0
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

label_7F0619C8:
    ctx->pc = 0x7F0619C8u;
    // 7F0619C8: bc    12, 2, 0x7F0619FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0619FC;
        }
    }

label_7F0619CC:
    ctx->pc = 0x7F0619CCu;
    ctx->downcount -= 2;
    // 7F0619CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0619D0:
    ctx->pc = 0x7F0619D0u;
    // 7F0619D0: bl      0x7F060FBC
    {
            ctx->lr = 0x7F0619D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F060FBCu;
                return;
            }
            goto label_7F060FBC;
    }

label_7F0619D4:
    ctx->pc = 0x7F0619D4u;
    ctx->downcount -= 2;
    // 7F0619D4: cmpwi   r3, 0
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

label_7F0619D8:
    ctx->pc = 0x7F0619D8u;
    // 7F0619D8: bc    4, 0, 0x7F0619E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0619E4;
        }
    }

label_7F0619DC:
    ctx->pc = 0x7F0619DCu;
    ctx->downcount -= 2;
    // 7F0619DC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0619E0:
    ctx->pc = 0x7F0619E0u;
    // 7F0619E0: b       0x7F061A00
    {
            goto label_7F061A00;
    }

label_7F0619E4:
    ctx->pc = 0x7F0619E4u;
    ctx->downcount -= 2;
    // 7F0619E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0619E8:
    ctx->pc = 0x7F0619E8u;
    // 7F0619E8: bl      0x7F060D3C
    {
            ctx->lr = 0x7F0619ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F060D3Cu;
                return;
            }
            goto label_7F060D3C;
    }

label_7F0619EC:
    ctx->pc = 0x7F0619ECu;
    ctx->downcount -= 2;
    // 7F0619EC: cmpwi   r3, 0
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

label_7F0619F0:
    ctx->pc = 0x7F0619F0u;
    // 7F0619F0: bc    4, 0, 0x7F0619FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0619FC;
        }
    }

label_7F0619F4:
    ctx->pc = 0x7F0619F4u;
    ctx->downcount -= 2;
    // 7F0619F4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0619F8:
    ctx->pc = 0x7F0619F8u;
    // 7F0619F8: b       0x7F061A00
    {
            goto label_7F061A00;
    }

label_7F0619FC:
    ctx->pc = 0x7F0619FCu;
    ctx->downcount -= 1;
    // 7F0619FC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F061A00:
    ctx->pc = 0x7F061A00u;
    ctx->downcount -= 16;
    // 7F061A00: lmw     r21, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F061A04:
    ctx->pc = 0x7F061A04u;
    // 7F061A04: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061A08:
    ctx->pc = 0x7F061A08u;
    // 7F061A08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F061A0C:
    ctx->pc = 0x7F061A0Cu;
    // 7F061A0C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F061A10:
    ctx->pc = 0x7F061A10u;
    // 7F061A10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F061A14:
    ctx->pc = 0x7F061A14u;
    ctx->downcount -= 11;
    // 7F061A14: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F061A18:
    ctx->pc = 0x7F061A18u;
    // 7F061A18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F061A1C:
    ctx->pc = 0x7F061A1Cu;
    // 7F061A1C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F061A20:
    ctx->pc = 0x7F061A20u;
    // 7F061A20: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061A24:
    ctx->pc = 0x7F061A24u;
    // 7F061A24: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F061A28:
    ctx->pc = 0x7F061A28u;
    // 7F061A28: addi    r8, r1, 16
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(16);

label_7F061A2C:
    ctx->pc = 0x7F061A2Cu;
    // 7F061A2C: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F061A30:
    ctx->pc = 0x7F061A30u;
    // 7F061A30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F061A34:
    ctx->pc = 0x7F061A34u;
    // 7F061A34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F061A38:
    ctx->pc = 0x7F061A38u;
    // 7F061A38: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F061A3C:
    loop_7F061A3C(ctx);
    if (ctx->pc == 0x7F061A68u) goto label_7F061A68;
    return;
label_7F061A40:
    // 7F061A40: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F061A44:
    // 7F061A44: addis   r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + ((u32)(s32)(1) << 16);

label_7F061A48:
    // 7F061A48: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_7F061A4C:
    ctx->pc = 0x7F061A4Cu;
    // 7F061A4C: lwz     r0, -21732(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21732);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061A50:
    ctx->pc = 0x7F061A50u;
    // 7F061A50: lwz     r4, -21736(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21736);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F061A54:
    // 7F061A54: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F061A58:
    // 7F061A58: rlwimi r0, r4, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 8u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_7F061A5C:
    ctx->pc = 0x7F061A5Cu;
    // 7F061A5C: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061A60:
    // 7F061A60: addi    r8, r8, 4
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(4);

label_7F061A64:
    // 7F061A64: bc    16, 0, 0x7F061A3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061A3Cu;
                return;
            }
            goto label_7F061A3C;
        }
    }

label_7F061A68:
    ctx->pc = 0x7F061A68u;
    ctx->downcount -= 18;
    // 7F061A68: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F061A6C:
    ctx->pc = 0x7F061A6Cu;
    // 7F061A6C: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F061A70:
    ctx->pc = 0x7F061A70u;
    // 7F061A70: addi    r4, r3, 27828
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(27828);

label_7F061A74:
    ctx->pc = 0x7F061A74u;
    // 7F061A74: add   r6, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F061A78:
    ctx->pc = 0x7F061A78u;
    // 7F061A78: lwzx    r7, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F061A7C:
    ctx->pc = 0x7F061A7Cu;
    // 7F061A7C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061A80:
    ctx->pc = 0x7F061A80u;
    // 7F061A80: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061A84:
    ctx->pc = 0x7F061A84u;
    // 7F061A84: lwz     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F061A88:
    ctx->pc = 0x7F061A88u;
    // 7F061A88: rlwinm r5, r0, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F061A8C:
    ctx->pc = 0x7F061A8Cu;
    // 7F061A8C: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061A90:
    ctx->pc = 0x7F061A90u;
    // 7F061A90: rlwimi r5, r7, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 8u);
        ctx->gpr[5] = (ctx->gpr[5] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_7F061A94:
    ctx->pc = 0x7F061A94u;
    // 7F061A94: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F061A98:
    ctx->pc = 0x7F061A98u;
    // 7F061A98: stw     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061A9C:
    ctx->pc = 0x7F061A9Cu;
    // 7F061A9C: rlwimi r0, r4, 8, 16, 23
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 8u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x0000FF00u) | (rot & 0x0000FF00u);
    }

label_7F061AA0:
    ctx->pc = 0x7F061AA0u;
    // 7F061AA0: stw     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061AA4:
    ctx->pc = 0x7F061AA4u;
    // 7F061AA4: lwz     r3, -20092(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20092);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F061AA8:
    ctx->pc = 0x7F061AA8u;
    // 7F061AA8: cmpwi   r3, 0
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

label_7F061AAC:
    ctx->pc = 0x7F061AACu;
    // 7F061AAC: bc    12, 0, 0x7F061AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061AC8;
        }
    }

label_7F061AB0:
    ctx->pc = 0x7F061AB0u;
    ctx->downcount -= 6;
    // 7F061AB0: addi    r0, r1, 16
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(16);

label_7F061AB4:
    ctx->pc = 0x7F061AB4u;
    // 7F061AB4: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F061AB8:
    ctx->pc = 0x7F061AB8u;
    // 7F061AB8: sth     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F061ABC:
    ctx->pc = 0x7F061ABCu;
    // 7F061ABC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F061AC0:
    ctx->pc = 0x7F061AC0u;
    // 7F061AC0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061AC4:
    ctx->pc = 0x7F061AC4u;
    // 7F061AC4: bl      0x7F3C7728
    {
            ctx->lr = 0x7F061AC8u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F061AC8:
    ctx->pc = 0x7F061AC8u;
    ctx->downcount -= 4;
    // 7F061AC8: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061ACC:
    ctx->pc = 0x7F061ACCu;
    // 7F061ACC: lwz     r3, -20088(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20088);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F061AD0:
    ctx->pc = 0x7F061AD0u;
    // 7F061AD0: cmpwi   r3, 0
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

label_7F061AD4:
    ctx->pc = 0x7F061AD4u;
    // 7F061AD4: bc    12, 0, 0x7F061AF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061AF0;
        }
    }

label_7F061AD8:
    ctx->pc = 0x7F061AD8u;
    ctx->downcount -= 6;
    // 7F061AD8: addi    r0, r1, 48
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(48);

label_7F061ADC:
    ctx->pc = 0x7F061ADCu;
    // 7F061ADC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F061AE0:
    ctx->pc = 0x7F061AE0u;
    // 7F061AE0: sth     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F061AE4:
    ctx->pc = 0x7F061AE4u;
    // 7F061AE4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F061AE8:
    ctx->pc = 0x7F061AE8u;
    // 7F061AE8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061AEC:
    ctx->pc = 0x7F061AECu;
    // 7F061AEC: bl      0x7F3C7728
    {
            ctx->lr = 0x7F061AF0u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F061AF0:
    ctx->pc = 0x7F061AF0u;
    ctx->downcount -= 4;
    // 7F061AF0: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061AF4:
    ctx->pc = 0x7F061AF4u;
    // 7F061AF4: lwz     r3, -20084(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20084);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F061AF8:
    ctx->pc = 0x7F061AF8u;
    // 7F061AF8: cmpwi   r3, 0
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

label_7F061AFC:
    ctx->pc = 0x7F061AFCu;
    // 7F061AFC: bc    12, 0, 0x7F061B18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061B18;
        }
    }

label_7F061B00:
    ctx->pc = 0x7F061B00u;
    ctx->downcount -= 6;
    // 7F061B00: addi    r0, r1, 80
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(80);

label_7F061B04:
    ctx->pc = 0x7F061B04u;
    // 7F061B04: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F061B08:
    ctx->pc = 0x7F061B08u;
    // 7F061B08: sth     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F061B0C:
    ctx->pc = 0x7F061B0Cu;
    // 7F061B0C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F061B10:
    ctx->pc = 0x7F061B10u;
    // 7F061B10: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061B14:
    ctx->pc = 0x7F061B14u;
    // 7F061B14: bl      0x7F3C7728
    {
            ctx->lr = 0x7F061B18u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F061B18:
    ctx->pc = 0x7F061B18u;
    ctx->downcount -= 6;
    // 7F061B18: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061B1C:
    ctx->pc = 0x7F061B1Cu;
    // 7F061B1C: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F061B20:
    ctx->pc = 0x7F061B20u;
    // 7F061B20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F061B24:
    ctx->pc = 0x7F061B24u;
    // 7F061B24: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F061B28:
    ctx->pc = 0x7F061B28u;
    // 7F061B28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F061B2C:
    ctx->pc = 0x7F061B2Cu;
    ctx->downcount -= 16;
    // 7F061B2C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F061B30:
    ctx->pc = 0x7F061B30u;
    // 7F061B30: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F061B34:
    ctx->pc = 0x7F061B34u;
    // 7F061B34: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061B38:
    ctx->pc = 0x7F061B38u;
    // 7F061B38: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F061B3C:
    ctx->pc = 0x7F061B3Cu;
    // 7F061B3C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F061B40:
    ctx->pc = 0x7F061B40u;
    // 7F061B40: bl      0x7F0614A0
    {
            ctx->lr = 0x7F061B44u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0614A0u;
                return;
            }
            goto label_7F0614A0;
    }

label_7F061B44:
    ctx->pc = 0x7F061B44u;
    ctx->downcount -= 4;
    // 7F061B44: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061B48:
    ctx->pc = 0x7F061B48u;
    // 7F061B48: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061B4C:
    ctx->pc = 0x7F061B4Cu;
    // 7F061B4C: cmpwi   r0, 1
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

label_7F061B50:
    ctx->pc = 0x7F061B50u;
    // 7F061B50: bc    4, 2, 0x7F061B5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F061B5C;
        }
    }

label_7F061B54:
    ctx->pc = 0x7F061B54u;
    ctx->downcount -= 2;
    // 7F061B54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061B58:
    ctx->pc = 0x7F061B58u;
    // 7F061B58: bl      0x7F061A14
    {
            ctx->lr = 0x7F061B5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061A14u;
                return;
            }
            goto label_7F061A14;
    }

label_7F061B5C:
    ctx->pc = 0x7F061B5Cu;
    ctx->downcount -= 2;
    // 7F061B5C: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F061B60:
    ctx->pc = 0x7F061B60u;
    // 7F061B60: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F061B64:
    ctx->downcount -= 3;
    // 7F061B64: add   r26, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F061B68:
    // 7F061B68: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F061B6C:
    // 7F061B6C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F061B70:
    ctx->downcount -= 3;
    // 7F061B70: add   r27, r26, r29
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F061B74:
    // 7F061B74: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F061B78:
    // 7F061B78: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F061B7C:
    ctx->downcount -= 5;
    // 7F061B7C: addis   r3, r30, 1
    ctx->gpr[3] = ctx->gpr[30] + ((u32)(s32)(1) << 16);

label_7F061B80:
    // 7F061B80: addi    r3, r3, -24456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24456);

label_7F061B84:
    ctx->pc = 0x7F061B84u;
    // 7F061B84: lwzx    r3, r27, r3
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F061B88:
    // 7F061B88: cmplwi  r3, 0x0000
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

label_7F061B8C:
    // 7F061B8C: bc    12, 2, 0x7F061B94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061B94;
        }
    }

label_7F061B90:
    ctx->downcount -= 1;
    // 7F061B90: bl      0x7F10C3F0
    {
            ctx->lr = 0x7F061B94u;
            ctx->pc = 0x7F10C3F0u;
            return;
    }

label_7F061B94:
    ctx->downcount -= 4;
    // 7F061B94: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F061B98:
    // 7F061B98: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F061B9C:
    // 7F061B9C: cmpwi   r25, 4
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

label_7F061BA0:
    // 7F061BA0: bc    12, 0, 0x7F061B7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061B7Cu;
                return;
            }
            goto label_7F061B7C;
        }
    }

label_7F061BA4:
    ctx->downcount -= 4;
    // 7F061BA4: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F061BA8:
    // 7F061BA8: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F061BAC:
    // 7F061BAC: cmpwi   r24, 2
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F061BB0:
    // 7F061BB0: bc    12, 0, 0x7F061B70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061B70u;
                return;
            }
            goto label_7F061B70;
        }
    }

label_7F061BB4:
    ctx->downcount -= 4;
    // 7F061BB4: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F061BB8:
    // 7F061BB8: addi    r28, r28, 32
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(32);

label_7F061BBC:
    // 7F061BBC: cmpwi   r23, 5
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F061BC0:
    // 7F061BC0: bc    12, 0, 0x7F061B64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061B64u;
                return;
            }
            goto label_7F061B64;
        }
    }

label_7F061BC4:
    ctx->pc = 0x7F061BC4u;
    ctx->downcount -= 2;
    // 7F061BC4: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F061BC8:
    ctx->pc = 0x7F061BC8u;
    // 7F061BC8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F061BCC:
    ctx->downcount -= 5;
    // 7F061BCC: addis   r3, r28, 1
    ctx->gpr[3] = ctx->gpr[28] + ((u32)(s32)(1) << 16);

label_7F061BD0:
    // 7F061BD0: addi    r3, r3, -24296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24296);

label_7F061BD4:
    ctx->pc = 0x7F061BD4u;
    // 7F061BD4: lwzx    r3, r31, r3
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F061BD8:
    // 7F061BD8: cmplwi  r3, 0x0000
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

label_7F061BDC:
    // 7F061BDC: bc    12, 2, 0x7F061BE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061BE4;
        }
    }

label_7F061BE0:
    ctx->downcount -= 1;
    // 7F061BE0: bl      0x7F10C3F0
    {
            ctx->lr = 0x7F061BE4u;
            ctx->pc = 0x7F10C3F0u;
            return;
    }

label_7F061BE4:
    ctx->downcount -= 4;
    // 7F061BE4: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F061BE8:
    // 7F061BE8: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F061BEC:
    // 7F061BEC: cmpwi   r25, 4
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

label_7F061BF0:
    // 7F061BF0: bc    12, 0, 0x7F061BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061BCCu;
                return;
            }
            goto label_7F061BCC;
        }
    }

label_7F061BF4:
    ctx->pc = 0x7F061BF4u;
    ctx->downcount -= 2;
    // 7F061BF4: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F061BF8:
    ctx->pc = 0x7F061BF8u;
    // 7F061BF8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F061BFC:
    ctx->downcount -= 3;
    // 7F061BFC: add   r27, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F061C00:
    // 7F061C00: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F061C04:
    // 7F061C04: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F061C08:
    ctx->downcount -= 3;
    // 7F061C08: add   r26, r27, r30
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F061C0C:
    // 7F061C0C: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F061C10:
    // 7F061C10: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F061C14:
    ctx->downcount -= 5;
    // 7F061C14: addis   r3, r28, 1
    ctx->gpr[3] = ctx->gpr[28] + ((u32)(s32)(1) << 16);

label_7F061C18:
    // 7F061C18: addi    r3, r3, -22040
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-22040);

label_7F061C1C:
    ctx->pc = 0x7F061C1Cu;
    // 7F061C1C: lwzx    r3, r26, r3
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F061C20:
    // 7F061C20: cmplwi  r3, 0x0000
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

label_7F061C24:
    // 7F061C24: bc    12, 2, 0x7F061C2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061C2C;
        }
    }

label_7F061C28:
    ctx->downcount -= 1;
    // 7F061C28: bl      0x7F10D51C
    {
            ctx->lr = 0x7F061C2Cu;
            ctx->pc = 0x7F10D51Cu;
            return;
    }

label_7F061C2C:
    ctx->downcount -= 4;
    // 7F061C2C: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F061C30:
    // 7F061C30: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F061C34:
    // 7F061C34: cmpwi   r23, 2
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

label_7F061C38:
    // 7F061C38: bc    12, 0, 0x7F061C14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061C14u;
                return;
            }
            goto label_7F061C14;
        }
    }

label_7F061C3C:
    ctx->downcount -= 4;
    // 7F061C3C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F061C40:
    // 7F061C40: addi    r30, r30, 8
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(8);

label_7F061C44:
    // 7F061C44: cmpwi   r24, 2
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F061C48:
    // 7F061C48: bc    12, 0, 0x7F061C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061C08u;
                return;
            }
            goto label_7F061C08;
        }
    }

label_7F061C4C:
    ctx->downcount -= 4;
    // 7F061C4C: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F061C50:
    // 7F061C50: addi    r29, r29, 16
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16);

label_7F061C54:
    // 7F061C54: cmpwi   r25, 5
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F061C58:
    // 7F061C58: bc    12, 0, 0x7F061BFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061BFCu;
                return;
            }
            goto label_7F061BFC;
        }
    }

label_7F061C5C:
    ctx->pc = 0x7F061C5Cu;
    ctx->downcount -= 2;
    // 7F061C5C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F061C60:
    ctx->pc = 0x7F061C60u;
    // 7F061C60: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F061C64:
    ctx->downcount -= 3;
    // 7F061C64: add   r26, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F061C68:
    // 7F061C68: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F061C6C:
    // 7F061C6C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F061C70:
    ctx->downcount -= 5;
    // 7F061C70: addis   r3, r29, 1
    ctx->gpr[3] = ctx->gpr[29] + ((u32)(s32)(1) << 16);

label_7F061C74:
    // 7F061C74: addi    r3, r3, -20176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-20176);

label_7F061C78:
    ctx->pc = 0x7F061C78u;
    // 7F061C78: lwzx    r3, r26, r3
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[3];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F061C7C:
    // 7F061C7C: cmplwi  r3, 0x0000
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

label_7F061C80:
    // 7F061C80: bc    12, 2, 0x7F061C88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061C88;
        }
    }

label_7F061C84:
    ctx->downcount -= 1;
    // 7F061C84: bl      0x7F10C3F0
    {
            ctx->lr = 0x7F061C88u;
            ctx->pc = 0x7F10C3F0u;
            return;
    }

label_7F061C88:
    ctx->downcount -= 4;
    // 7F061C88: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_7F061C8C:
    // 7F061C8C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F061C90:
    // 7F061C90: cmpwi   r25, 2
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

label_7F061C94:
    // 7F061C94: bc    12, 0, 0x7F061C70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061C70u;
                return;
            }
            goto label_7F061C70;
        }
    }

label_7F061C98:
    ctx->downcount -= 4;
    // 7F061C98: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F061C9C:
    // 7F061C9C: addi    r30, r30, 8
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(8);

label_7F061CA0:
    // 7F061CA0: cmpwi   r27, 4
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F061CA4:
    // 7F061CA4: bc    12, 0, 0x7F061C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061C64u;
                return;
            }
            goto label_7F061C64;
        }
    }

label_7F061CA8:
    ctx->pc = 0x7F061CA8u;
    ctx->downcount -= 16;
    // 7F061CA8: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F061CAC:
    ctx->pc = 0x7F061CACu;
    // 7F061CAC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061CB0:
    ctx->pc = 0x7F061CB0u;
    // 7F061CB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F061CB4:
    ctx->pc = 0x7F061CB4u;
    // 7F061CB4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F061CB8:
    ctx->pc = 0x7F061CB8u;
    // 7F061CB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F061CBC:
    ctx->pc = 0x7F061CBCu;
    ctx->downcount -= 18;
    // 7F061CBC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F061CC0:
    ctx->pc = 0x7F061CC0u;
    // 7F061CC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F061CC4:
    ctx->pc = 0x7F061CC4u;
    // 7F061CC4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061CC8:
    ctx->pc = 0x7F061CC8u;
    // 7F061CC8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F061CCC:
    ctx->pc = 0x7F061CCCu;
    // 7F061CCC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F061CD0:
    ctx->pc = 0x7F061CD0u;
    // 7F061CD0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F061CD4:
    ctx->pc = 0x7F061CD4u;
    // 7F061CD4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F061CD8:
    ctx->pc = 0x7F061CD8u;
    // 7F061CD8: b       0x7F061CF8
    {
            goto label_7F061CF8;
    }

label_7F061CDC:
    ctx->downcount -= 1;
    // 7F061CDC: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F061CE0u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F061CE0:
    ctx->downcount -= 2;
    // 7F061CE0: cmplwi  r3, 0x0000
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

label_7F061CE4:
    // 7F061CE4: bc    12, 2, 0x7F061D00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061D00;
        }
    }

label_7F061CE8:
    ctx->downcount -= 1;
    // 7F061CE8: bl      0x7F3C674C
    {
            ctx->lr = 0x7F061CECu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F061CEC:
    ctx->pc = 0x7F061CECu;
    ctx->downcount -= 3;
    // 7F061CEC: sth     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F061CF0:
    // 7F061CF0: addi    r29, r29, 2
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(2);

label_7F061CF4:
    // 7F061CF4: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F061CF8:
    ctx->downcount -= 2;
    // 7F061CF8: cmpw    r31, r30
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

label_7F061CFC:
    // 7F061CFC: bc    12, 0, 0x7F061CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061CDCu;
                return;
            }
            goto label_7F061CDC;
        }
    }

label_7F061D00:
    ctx->pc = 0x7F061D00u;
    ctx->downcount -= 16;
    // 7F061D00: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F061D04:
    ctx->pc = 0x7F061D04u;
    // 7F061D04: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061D08:
    ctx->pc = 0x7F061D08u;
    // 7F061D08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F061D0C:
    ctx->pc = 0x7F061D0Cu;
    // 7F061D0C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F061D10:
    ctx->pc = 0x7F061D10u;
    // 7F061D10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F061D14:
    ctx->pc = 0x7F061D14u;
    ctx->downcount -= 19;
    // 7F061D14: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F061D18:
    ctx->pc = 0x7F061D18u;
    // 7F061D18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F061D1C:
    ctx->pc = 0x7F061D1Cu;
    // 7F061D1C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061D20:
    ctx->pc = 0x7F061D20u;
    // 7F061D20: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F061D24:
    ctx->pc = 0x7F061D24u;
    // 7F061D24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F061D28:
    ctx->pc = 0x7F061D28u;
    // 7F061D28: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F061D2C:
    ctx->pc = 0x7F061D2Cu;
    // 7F061D2C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F061D30:
    ctx->pc = 0x7F061D30u;
    // 7F061D30: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F061D34:
    ctx->pc = 0x7F061D34u;
    // 7F061D34: bl      0x7F3C664C
    {
            ctx->lr = 0x7F061D38u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F061D38:
    ctx->pc = 0x7F061D38u;
    ctx->downcount -= 2;
    // 7F061D38: cmplwi  r3, 0x0000
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

label_7F061D3C:
    ctx->pc = 0x7F061D3Cu;
    // 7F061D3C: bc    12, 2, 0x7F061D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061D50;
        }
    }

label_7F061D40:
    ctx->pc = 0x7F061D40u;
    ctx->downcount -= 1;
    // 7F061D40: bl      0x7F3C674C
    {
            ctx->lr = 0x7F061D44u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F061D44:
    ctx->pc = 0x7F061D44u;
    ctx->downcount -= 3;
    // 7F061D44: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061D48:
    ctx->pc = 0x7F061D48u;
    // 7F061D48: stw     r3, -20096(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20096);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F061D4C:
    ctx->pc = 0x7F061D4Cu;
    // 7F061D4C: b       0x7F061D5C
    {
            goto label_7F061D5C;
    }

label_7F061D50:
    ctx->pc = 0x7F061D50u;
    ctx->downcount -= 3;
    // 7F061D50: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061D54:
    ctx->pc = 0x7F061D54u;
    // 7F061D54: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F061D58:
    ctx->pc = 0x7F061D58u;
    // 7F061D58: stw     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061D5C:
    ctx->pc = 0x7F061D5Cu;
    ctx->downcount -= 5;
    // 7F061D5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F061D60:
    ctx->pc = 0x7F061D60u;
    // 7F061D60: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F061D64:
    ctx->pc = 0x7F061D64u;
    // 7F061D64: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F061D68:
    ctx->pc = 0x7F061D68u;
    // 7F061D68: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F061D6C:
    loop_7F061D6C(ctx);
    if (ctx->pc == 0x7F061D80u) goto label_7F061D80;
    return;
label_7F061D70:
    // 7F061D70: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F061D74:
    // 7F061D74: addi    r4, r4, -24296
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24296);

label_7F061D78:
    ctx->pc = 0x7F061D78u;
    // 7F061D78: stwx    r5, r31, r4
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061D7C:
    // 7F061D7C: bc    16, 0, 0x7F061D6C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061D6Cu;
                return;
            }
            goto label_7F061D6C;
        }
    }

label_7F061D80:
    ctx->pc = 0x7F061D80u;
    ctx->downcount -= 2;
    // 7F061D80: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F061D84:
    ctx->pc = 0x7F061D84u;
    // 7F061D84: bl      0x7F3C664C
    {
            ctx->lr = 0x7F061D88u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F061D88:
    ctx->pc = 0x7F061D88u;
    ctx->downcount -= 2;
    // 7F061D88: cmplwi  r3, 0x0000
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

label_7F061D8C:
    ctx->pc = 0x7F061D8Cu;
    // 7F061D8C: bc    12, 2, 0x7F061DB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061DB4;
        }
    }

label_7F061D90:
    ctx->pc = 0x7F061D90u;
    ctx->downcount -= 1;
    // 7F061D90: bl      0x7F3C674C
    {
            ctx->lr = 0x7F061D94u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F061D94:
    ctx->pc = 0x7F061D94u;
    ctx->downcount -= 5;
    // 7F061D94: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061D98:
    ctx->pc = 0x7F061D98u;
    // 7F061D98: stw     r3, -21448(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21448);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F061D9C:
    ctx->pc = 0x7F061D9Cu;
    // 7F061D9C: lwz     r0, -21448(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21448);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061DA0:
    ctx->pc = 0x7F061DA0u;
    // 7F061DA0: cmpwi   r0, 0
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

label_7F061DA4:
    ctx->pc = 0x7F061DA4u;
    // 7F061DA4: bc    12, 1, 0x7F061DC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061DC0;
        }
    }

label_7F061DA8:
    ctx->pc = 0x7F061DA8u;
    ctx->downcount -= 3;
    // 7F061DA8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F061DAC:
    ctx->pc = 0x7F061DACu;
    // 7F061DAC: stw     r0, -21448(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-21448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061DB0:
    ctx->pc = 0x7F061DB0u;
    // 7F061DB0: b       0x7F061DC0
    {
            goto label_7F061DC0;
    }

label_7F061DB4:
    ctx->pc = 0x7F061DB4u;
    ctx->downcount -= 3;
    // 7F061DB4: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061DB8:
    ctx->pc = 0x7F061DB8u;
    // 7F061DB8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F061DBC:
    ctx->pc = 0x7F061DBCu;
    // 7F061DBC: stw     r0, -21448(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-21448);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061DC0:
    ctx->pc = 0x7F061DC0u;
    ctx->downcount -= 4;
    // 7F061DC0: stw     r29, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F061DC4:
    ctx->pc = 0x7F061DC4u;
    // 7F061DC4: stw     r30, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F061DC8:
    ctx->pc = 0x7F061DC8u;
    // 7F061DC8: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F061DCC:
    ctx->pc = 0x7F061DCCu;
    // 7F061DCC: bl      0x7F062000
    {
            ctx->lr = 0x7F061DD0u;
            goto label_7F062000;
    }

label_7F061DD0:
    ctx->pc = 0x7F061DD0u;
    ctx->downcount -= 2;
    // 7F061DD0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061DD4:
    ctx->pc = 0x7F061DD4u;
    // 7F061DD4: bl      0x7F0616A4
    {
            ctx->lr = 0x7F061DD8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0616A4u;
                return;
            }
            goto label_7F0616A4;
    }

label_7F061DD8:
    ctx->pc = 0x7F061DD8u;
    ctx->downcount -= 2;
    // 7F061DD8: cmpwi   r3, 0
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

label_7F061DDC:
    ctx->pc = 0x7F061DDCu;
    // 7F061DDC: bc    4, 0, 0x7F061DE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F061DE8;
        }
    }

label_7F061DE0:
    ctx->pc = 0x7F061DE0u;
    ctx->downcount -= 2;
    // 7F061DE0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F061DE4:
    ctx->pc = 0x7F061DE4u;
    // 7F061DE4: b       0x7F061F60
    {
            goto label_7F061F60;
    }

label_7F061DE8:
    ctx->pc = 0x7F061DE8u;
    ctx->downcount -= 4;
    // 7F061DE8: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061DEC:
    ctx->pc = 0x7F061DECu;
    // 7F061DEC: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061DF0:
    ctx->pc = 0x7F061DF0u;
    // 7F061DF0: cmpwi   r0, 1
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

label_7F061DF4:
    ctx->pc = 0x7F061DF4u;
    // 7F061DF4: bc    4, 2, 0x7F061E84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F061E84;
        }
    }

label_7F061DF8:
    ctx->pc = 0x7F061DF8u;
    ctx->downcount -= 2;
    // 7F061DF8: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F061DFC:
    ctx->pc = 0x7F061DFCu;
    // 7F061DFC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F061E00u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F061E00:
    ctx->pc = 0x7F061E00u;
    ctx->downcount -= 2;
    // 7F061E00: cmplwi  r3, 0x0000
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

label_7F061E04:
    ctx->pc = 0x7F061E04u;
    // 7F061E04: bc    12, 2, 0x7F061E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061E18;
        }
    }

label_7F061E08:
    ctx->pc = 0x7F061E08u;
    ctx->downcount -= 1;
    // 7F061E08: bl      0x7F3C674C
    {
            ctx->lr = 0x7F061E0Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F061E0C:
    ctx->pc = 0x7F061E0Cu;
    ctx->downcount -= 3;
    // 7F061E0C: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061E10:
    ctx->pc = 0x7F061E10u;
    // 7F061E10: stw     r3, -20092(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20092);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F061E14:
    ctx->pc = 0x7F061E14u;
    // 7F061E14: b       0x7F061E24
    {
            goto label_7F061E24;
    }

label_7F061E18:
    ctx->pc = 0x7F061E18u;
    ctx->downcount -= 3;
    // 7F061E18: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061E1C:
    ctx->pc = 0x7F061E1Cu;
    // 7F061E1C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F061E20:
    ctx->pc = 0x7F061E20u;
    // 7F061E20: stw     r0, -20092(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20092);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061E24:
    ctx->pc = 0x7F061E24u;
    ctx->downcount -= 2;
    // 7F061E24: li      r3, 103
    ctx->gpr[3] = (u32)(s32)(103);

label_7F061E28:
    ctx->pc = 0x7F061E28u;
    // 7F061E28: bl      0x7F3C664C
    {
            ctx->lr = 0x7F061E2Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F061E2C:
    ctx->pc = 0x7F061E2Cu;
    ctx->downcount -= 2;
    // 7F061E2C: cmplwi  r3, 0x0000
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

label_7F061E30:
    ctx->pc = 0x7F061E30u;
    // 7F061E30: bc    12, 2, 0x7F061E44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061E44;
        }
    }

label_7F061E34:
    ctx->pc = 0x7F061E34u;
    ctx->downcount -= 1;
    // 7F061E34: bl      0x7F3C674C
    {
            ctx->lr = 0x7F061E38u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F061E38:
    ctx->pc = 0x7F061E38u;
    ctx->downcount -= 3;
    // 7F061E38: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061E3C:
    ctx->pc = 0x7F061E3Cu;
    // 7F061E3C: stw     r3, -20088(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20088);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F061E40:
    ctx->pc = 0x7F061E40u;
    // 7F061E40: b       0x7F061E50
    {
            goto label_7F061E50;
    }

label_7F061E44:
    ctx->pc = 0x7F061E44u;
    ctx->downcount -= 3;
    // 7F061E44: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061E48:
    ctx->pc = 0x7F061E48u;
    // 7F061E48: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F061E4C:
    ctx->pc = 0x7F061E4Cu;
    // 7F061E4C: stw     r0, -20088(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20088);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061E50:
    ctx->pc = 0x7F061E50u;
    ctx->downcount -= 2;
    // 7F061E50: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F061E54:
    ctx->pc = 0x7F061E54u;
    // 7F061E54: bl      0x7F3C664C
    {
            ctx->lr = 0x7F061E58u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F061E58:
    ctx->pc = 0x7F061E58u;
    ctx->downcount -= 2;
    // 7F061E58: cmplwi  r3, 0x0000
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

label_7F061E5C:
    ctx->pc = 0x7F061E5Cu;
    // 7F061E5C: bc    12, 2, 0x7F061E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061E70;
        }
    }

label_7F061E60:
    ctx->pc = 0x7F061E60u;
    ctx->downcount -= 1;
    // 7F061E60: bl      0x7F3C674C
    {
            ctx->lr = 0x7F061E64u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F061E64:
    ctx->pc = 0x7F061E64u;
    ctx->downcount -= 3;
    // 7F061E64: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061E68:
    ctx->pc = 0x7F061E68u;
    // 7F061E68: stw     r3, -20084(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20084);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F061E6C:
    ctx->pc = 0x7F061E6Cu;
    // 7F061E6C: b       0x7F061E7C
    {
            goto label_7F061E7C;
    }

label_7F061E70:
    ctx->pc = 0x7F061E70u;
    ctx->downcount -= 3;
    // 7F061E70: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061E74:
    ctx->pc = 0x7F061E74u;
    // 7F061E74: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F061E78:
    ctx->pc = 0x7F061E78u;
    // 7F061E78: stw     r0, -20084(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20084);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061E7C:
    ctx->pc = 0x7F061E7Cu;
    ctx->downcount -= 2;
    // 7F061E7C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061E80:
    ctx->pc = 0x7F061E80u;
    // 7F061E80: bl      0x7F05F0E0
    {
            ctx->lr = 0x7F061E84u;
            ctx->pc = 0x7F05F0E0u;
            return;
    }

label_7F061E84:
    ctx->pc = 0x7F061E84u;
    ctx->downcount -= 4;
    // 7F061E84: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061E88:
    ctx->pc = 0x7F061E88u;
    // 7F061E88: lwz     r0, -20096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-20096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061E8C:
    ctx->pc = 0x7F061E8Cu;
    // 7F061E8C: cmpwi   r0, 2
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

label_7F061E90:
    ctx->pc = 0x7F061E90u;
    // 7F061E90: bc    12, 2, 0x7F061E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061E9C;
        }
    }

label_7F061E94:
    ctx->pc = 0x7F061E94u;
    ctx->downcount -= 2;
    // 7F061E94: cmpwi   r0, 3
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

label_7F061E98:
    ctx->pc = 0x7F061E98u;
    // 7F061E98: bc    4, 2, 0x7F061F30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F061F30;
        }
    }

label_7F061E9C:
    ctx->pc = 0x7F061E9Cu;
    ctx->downcount -= 2;
    // 7F061E9C: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F061EA0:
    ctx->pc = 0x7F061EA0u;
    // 7F061EA0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F061EA4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F061EA4:
    ctx->pc = 0x7F061EA4u;
    ctx->downcount -= 2;
    // 7F061EA4: cmplwi  r3, 0x0000
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

label_7F061EA8:
    ctx->pc = 0x7F061EA8u;
    // 7F061EA8: bc    12, 2, 0x7F061EB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061EB8;
        }
    }

label_7F061EAC:
    ctx->pc = 0x7F061EACu;
    ctx->downcount -= 3;
    // 7F061EAC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F061EB0:
    ctx->pc = 0x7F061EB0u;
    // 7F061EB0: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F061EB4:
    ctx->pc = 0x7F061EB4u;
    // 7F061EB4: bl      0x7F061CBC
    {
            ctx->lr = 0x7F061EB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061CBCu;
                return;
            }
            goto label_7F061CBC;
    }

label_7F061EB8:
    ctx->pc = 0x7F061EB8u;
    ctx->downcount -= 2;
    // 7F061EB8: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F061EBC:
    ctx->pc = 0x7F061EBCu;
    // 7F061EBC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F061EC0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F061EC0:
    ctx->pc = 0x7F061EC0u;
    ctx->downcount -= 2;
    // 7F061EC0: cmplwi  r3, 0x0000
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

label_7F061EC4:
    ctx->pc = 0x7F061EC4u;
    // 7F061EC4: bc    12, 2, 0x7F061ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061ED4;
        }
    }

label_7F061EC8:
    ctx->pc = 0x7F061EC8u;
    ctx->downcount -= 3;
    // 7F061EC8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F061ECC:
    ctx->pc = 0x7F061ECCu;
    // 7F061ECC: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F061ED0:
    ctx->pc = 0x7F061ED0u;
    // 7F061ED0: bl      0x7F061CBC
    {
            ctx->lr = 0x7F061ED4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061CBCu;
                return;
            }
            goto label_7F061CBC;
    }

label_7F061ED4:
    ctx->pc = 0x7F061ED4u;
    ctx->downcount -= 2;
    // 7F061ED4: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F061ED8:
    ctx->pc = 0x7F061ED8u;
    // 7F061ED8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F061EDCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F061EDC:
    ctx->pc = 0x7F061EDCu;
    ctx->downcount -= 2;
    // 7F061EDC: cmplwi  r3, 0x0000
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

label_7F061EE0:
    ctx->pc = 0x7F061EE0u;
    // 7F061EE0: bc    12, 2, 0x7F061EF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061EF0;
        }
    }

label_7F061EE4:
    ctx->pc = 0x7F061EE4u;
    ctx->downcount -= 3;
    // 7F061EE4: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F061EE8:
    ctx->pc = 0x7F061EE8u;
    // 7F061EE8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F061EEC:
    ctx->pc = 0x7F061EECu;
    // 7F061EEC: bl      0x7F061CBC
    {
            ctx->lr = 0x7F061EF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061CBCu;
                return;
            }
            goto label_7F061CBC;
    }

label_7F061EF0:
    ctx->pc = 0x7F061EF0u;
    ctx->downcount -= 6;
    // 7F061EF0: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F061EF4:
    ctx->pc = 0x7F061EF4u;
    // 7F061EF4: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_7F061EF8:
    ctx->pc = 0x7F061EF8u;
    // 7F061EF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F061EFC:
    ctx->pc = 0x7F061EFCu;
    // 7F061EFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F061F00:
    ctx->pc = 0x7F061F00u;
    // 7F061F00: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F061F04:
    loop_7F061F04(ctx);
    if (ctx->pc == 0x7F061F30u) goto label_7F061F30;
    return;
label_7F061F08:
    // 7F061F08: add   r5, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F061F0C:
    // 7F061F0C: addis   r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + ((u32)(s32)(1) << 16);

label_7F061F10:
    // 7F061F10: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_7F061F14:
    // 7F061F14: rlwinm r0, r0, 24, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0x000000FFu;
    }

label_7F061F18:
    ctx->pc = 0x7F061F18u;
    // 7F061F18: stw     r0, -20080(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20080);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061F1C:
    ctx->pc = 0x7F061F1Cu;
    // 7F061F1C: lhax    r0, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F061F20:
    // 7F061F20: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

label_7F061F24:
    // 7F061F24: rlwinm r0, r0, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_7F061F28:
    ctx->pc = 0x7F061F28u;
    // 7F061F28: stw     r0, -20076(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-20076);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061F2C:
    // 7F061F2C: bc    16, 0, 0x7F061F04
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061F04u;
                return;
            }
            goto label_7F061F04;
        }
    }

label_7F061F30:
    ctx->pc = 0x7F061F30u;
    ctx->downcount -= 12;
    // 7F061F30: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F061F34:
    ctx->pc = 0x7F061F34u;
    // 7F061F34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F061F38:
    ctx->pc = 0x7F061F38u;
    // 7F061F38: stw     r5, -19824(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19824);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061F3C:
    ctx->pc = 0x7F061F3Cu;
    // 7F061F3C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F061F40:
    ctx->pc = 0x7F061F40u;
    // 7F061F40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F061F44:
    ctx->pc = 0x7F061F44u;
    // 7F061F44: stw     r0, -19820(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19820);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061F48:
    ctx->pc = 0x7F061F48u;
    // 7F061F48: stw     r5, -19816(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19816);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061F4C:
    ctx->pc = 0x7F061F4Cu;
    // 7F061F4C: stw     r0, -19812(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-19812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061F50:
    ctx->pc = 0x7F061F50u;
    // 7F061F50: stw     r5, -20112(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20112);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061F54:
    ctx->pc = 0x7F061F54u;
    // 7F061F54: stw     r5, -20108(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20108);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061F58:
    ctx->pc = 0x7F061F58u;
    // 7F061F58: stw     r5, -20104(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20104);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061F5C:
    ctx->pc = 0x7F061F5Cu;
    // 7F061F5C: stw     r5, -20100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20100);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F061F60:
    ctx->pc = 0x7F061F60u;
    ctx->downcount -= 16;
    // 7F061F60: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F061F64:
    ctx->pc = 0x7F061F64u;
    // 7F061F64: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061F68:
    ctx->pc = 0x7F061F68u;
    // 7F061F68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F061F6C:
    ctx->pc = 0x7F061F6Cu;
    // 7F061F6C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F061F70:
    ctx->pc = 0x7F061F70u;
    // 7F061F70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F061F74:
    ctx->pc = 0x7F061F74u;
    ctx->downcount -= 22;
    // 7F061F74: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F061F78:
    ctx->pc = 0x7F061F78u;
    // 7F061F78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F061F7C:
    ctx->pc = 0x7F061F7Cu;
    // 7F061F7C: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F061F80:
    ctx->pc = 0x7F061F80u;
    // 7F061F80: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F061F84:
    ctx->pc = 0x7F061F84u;
    // 7F061F84: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F061F88:
    ctx->pc = 0x7F061F88u;
    // 7F061F88: addi    r5, r5, -19232
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19232);

label_7F061F8C:
    ctx->pc = 0x7F061F8Cu;
    // 7F061F8C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F061F90:
    ctx->pc = 0x7F061F90u;
    // 7F061F90: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F061F94:
    ctx->pc = 0x7F061F94u;
    // 7F061F94: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F061F98:
    ctx->pc = 0x7F061F98u;
    // 7F061F98: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F061F9C:
    ctx->pc = 0x7F061F9Cu;
    // 7F061F9C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F061FA0:
    ctx->pc = 0x7F061FA0u;
    // 7F061FA0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F061FA4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F061FA4:
    ctx->pc = 0x7F061FA4u;
    ctx->downcount -= 2;
    // 7F061FA4: or.   r31, r3, r3
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

label_7F061FA8:
    ctx->pc = 0x7F061FA8u;
    // 7F061FA8: bc    12, 2, 0x7F061FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F061FE8;
        }
    }

label_7F061FAC:
    ctx->pc = 0x7F061FACu;
    ctx->downcount -= 5;
    // 7F061FAC: lis     r4, 32518
    ctx->gpr[4] = ((u32)(s32)(32518) << 16);

label_7F061FB0:
    ctx->pc = 0x7F061FB0u;
    // 7F061FB0: lis     r5, 32518
    ctx->gpr[5] = ((u32)(s32)(32518) << 16);

label_7F061FB4:
    ctx->pc = 0x7F061FB4u;
    // 7F061FB4: addi    r4, r4, -504
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-504);

label_7F061FB8:
    ctx->pc = 0x7F061FB8u;
    // 7F061FB8: addi    r5, r5, 6956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6956);

label_7F061FBC:
    ctx->pc = 0x7F061FBCu;
    // 7F061FBC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F061FC0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F061FC0:
    ctx->pc = 0x7F061FC0u;
    ctx->downcount -= 4;
    // 7F061FC0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061FC4:
    ctx->pc = 0x7F061FC4u;
    // 7F061FC4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F061FC8:
    ctx->pc = 0x7F061FC8u;
    // 7F061FC8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F061FCC:
    ctx->pc = 0x7F061FCCu;
    // 7F061FCC: bl      0x7F061D14
    {
            ctx->lr = 0x7F061FD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F061D14u;
                return;
            }
            goto label_7F061D14;
    }

label_7F061FD0:
    ctx->pc = 0x7F061FD0u;
    ctx->downcount -= 2;
    // 7F061FD0: cmpwi   r3, 0
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

label_7F061FD4:
    ctx->pc = 0x7F061FD4u;
    // 7F061FD4: bc    4, 0, 0x7F061FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F061FE8;
        }
    }

label_7F061FD8:
    ctx->pc = 0x7F061FD8u;
    ctx->downcount -= 2;
    // 7F061FD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061FDC:
    ctx->pc = 0x7F061FDCu;
    // 7F061FDC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F061FE0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F061FE0:
    ctx->pc = 0x7F061FE0u;
    ctx->downcount -= 2;
    // 7F061FE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F061FE4:
    ctx->pc = 0x7F061FE4u;
    // 7F061FE4: b       0x7F061FEC
    {
            goto label_7F061FEC;
    }

label_7F061FE8:
    ctx->pc = 0x7F061FE8u;
    ctx->downcount -= 1;
    // 7F061FE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F061FEC:
    ctx->pc = 0x7F061FECu;
    ctx->downcount -= 16;
    // 7F061FEC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F061FF0:
    ctx->pc = 0x7F061FF0u;
    // 7F061FF0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F061FF4:
    ctx->pc = 0x7F061FF4u;
    // 7F061FF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F061FF8:
    ctx->pc = 0x7F061FF8u;
    // 7F061FF8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F061FFC:
    ctx->pc = 0x7F061FFCu;
    // 7F061FFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F062000:
    ctx->pc = 0x7F062000u;
    ctx->downcount -= 3;
    // 7F062000: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F062004:
    ctx->pc = 0x7F062004u;
    // 7F062004: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F062008:
    ctx->pc = 0x7F062008u;
    // 7F062008: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F06200C:
    ctx->pc = 0x7F06200Cu;
    ctx->downcount -= 5;
    // 7F06200C: lwz     r0, 5560(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062010:
    ctx->pc = 0x7F062010u;
    // 7F062010: sth     r0, 5480(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5480);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062014:
    ctx->pc = 0x7F062014u;
    // 7F062014: lha     r0, 5480(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5480);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062018:
    ctx->pc = 0x7F062018u;
    // 7F062018: cmpwi   r0, 0
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

label_7F06201C:
    ctx->pc = 0x7F06201Cu;
    // 7F06201C: bc    4, 0, 0x7F062028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062028;
        }
    }

label_7F062020:
    ctx->pc = 0x7F062020u;
    ctx->downcount -= 2;
    // 7F062020: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F062024:
    ctx->pc = 0x7F062024u;
    // 7F062024: sth     r0, 5480(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5480);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062028:
    ctx->pc = 0x7F062028u;
    ctx->downcount -= 6;
    // 7F062028: lwz     r4, 1556(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1556);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F06202C:
    ctx->pc = 0x7F06202Cu;
    // 7F06202C: lha     r0, 22(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062030:
    ctx->pc = 0x7F062030u;
    // 7F062030: sth     r0, 5496(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5496);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062034:
    ctx->pc = 0x7F062034u;
    // 7F062034: lha     r0, 5496(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5496);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062038:
    ctx->pc = 0x7F062038u;
    // 7F062038: cmpwi   r0, 0
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

label_7F06203C:
    ctx->pc = 0x7F06203Cu;
    // 7F06203C: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F062040:
    ctx->pc = 0x7F062040u;
    ctx->downcount -= 3;
    // 7F062040: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F062044:
    ctx->pc = 0x7F062044u;
    // 7F062044: sth     r0, 5496(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5496);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062048:
    ctx->pc = 0x7F062048u;
    // 7F062048: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F06204C:
    ctx->pc = 0x7F06204Cu;
    ctx->downcount -= 18;
    // 7F06204C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F062050:
    ctx->pc = 0x7F062050u;
    // 7F062050: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F062054:
    ctx->pc = 0x7F062054u;
    // 7F062054: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F062058:
    ctx->pc = 0x7F062058u;
    // 7F062058: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06205C:
    ctx->pc = 0x7F06205Cu;
    // 7F06205C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F062060:
    ctx->pc = 0x7F062060u;
    // 7F062060: lwz     r4, 5884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5884);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062064:
    ctx->pc = 0x7F062064u;
    // 7F062064: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F062068:
    ctx->pc = 0x7F062068u;
    // 7F062068: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06206C:
    ctx->pc = 0x7F06206Cu;
    // 7F06206C: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F062070:
    ctx->pc = 0x7F062070u;
    // 7F062070: lfd     f1, -9048(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F062070u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9048);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F062074:
    ctx->pc = 0x7F062074u;
    // 7F062074: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062078:
    ctx->pc = 0x7F062078u;
    // 7F062078: addi    r3, r6, 6292
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(6292);

label_7F06207C:
    ctx->pc = 0x7F06207Cu;
    // 7F06207C: lha     r4, 98(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(98);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062080:
    ctx->pc = 0x7F062080u;
    // 7F062080: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062080u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F062084:
    ctx->pc = 0x7F062084u;
    // 7F062084: lwz     r5, 5888(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5888);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F062088:
    ctx->pc = 0x7F062088u;
    // 7F062088: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F062088u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F06208C:
    ctx->pc = 0x7F06208Cu;
    // 7F06208C: lwz     r6, 5900(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(5900);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F062090:
    ctx->pc = 0x7F062090u;
    // 7F062090: bl      0x7F041A9C
    {
            ctx->lr = 0x7F062094u;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F062094:
    ctx->pc = 0x7F062094u;
    ctx->downcount -= 5;
    // 7F062094: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062098:
    ctx->pc = 0x7F062098u;
    // 7F062098: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F06209C:
    ctx->pc = 0x7F06209Cu;
    // 7F06209C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0620A0:
    ctx->pc = 0x7F0620A0u;
    // 7F0620A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0620A4:
    ctx->pc = 0x7F0620A4u;
    ctx->downcount -= 30;
    // 7F0620A4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0620A8:
    ctx->pc = 0x7F0620A8u;
    // 7F0620A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0620AC:
    ctx->pc = 0x7F0620ACu;
    // 7F0620AC: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F0620B0:
    ctx->pc = 0x7F0620B0u;
    // 7F0620B0: li      r6, 180
    ctx->gpr[6] = (u32)(s32)(180);

label_7F0620B4:
    ctx->pc = 0x7F0620B4u;
    // 7F0620B4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0620B8:
    ctx->pc = 0x7F0620B8u;
    // 7F0620B8: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F0620BC:
    ctx->pc = 0x7F0620BCu;
    // 7F0620BC: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F0620C0:
    ctx->pc = 0x7F0620C0u;
    // 7F0620C0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0620C4:
    ctx->pc = 0x7F0620C4u;
    // 7F0620C4: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0620C8:
    ctx->pc = 0x7F0620C8u;
    // 7F0620C8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0620CC:
    ctx->pc = 0x7F0620CCu;
    // 7F0620CC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F0620D0:
    ctx->pc = 0x7F0620D0u;
    // 7F0620D0: addi    r31, r30, 5456
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(5456);

label_7F0620D4:
    ctx->pc = 0x7F0620D4u;
    // 7F0620D4: addi    r4, r3, 6584
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(6584);

label_7F0620D8:
    ctx->pc = 0x7F0620D8u;
    // 7F0620D8: lwz     r8, 4796(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4796);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0620DC:
    ctx->pc = 0x7F0620DCu;
    // 7F0620DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0620E0:
    ctx->pc = 0x7F0620E0u;
    // 7F0620E0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0620E4:
    ctx->pc = 0x7F0620E4u;
    // 7F0620E4: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F0620E8:
    ctx->pc = 0x7F0620E8u;
    // 7F0620E8: or   r9, r8, r8
    {
        ctx->gpr[9] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F0620EC:
    ctx->pc = 0x7F0620ECu;
    // 7F0620EC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0620F0:
    ctx->pc = 0x7F0620F0u;
    // 7F0620F0: bl      0x7F27E314
    {
            ctx->lr = 0x7F0620F4u;
            ctx->pc = 0x7F27E314u;
            return;
    }

label_7F0620F4:
    ctx->pc = 0x7F0620F4u;
    ctx->downcount -= 3;
    // 7F0620F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0620F8:
    ctx->pc = 0x7F0620F8u;
    // 7F0620F8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0620FC:
    ctx->pc = 0x7F0620FCu;
    // 7F0620FC: bl      0x7F27E4C4
    {
            ctx->lr = 0x7F062100u;
            ctx->pc = 0x7F27E4C4u;
            return;
    }

label_7F062100:
    ctx->pc = 0x7F062100u;
    ctx->downcount -= 6;
    // 7F062100: lwz     r4, 4800(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4800);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062104:
    ctx->pc = 0x7F062104u;
    // 7F062104: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062108:
    ctx->pc = 0x7F062108u;
    // 7F062108: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F06210C:
    ctx->pc = 0x7F06210Cu;
    // 7F06210C: li      r7, 30
    ctx->gpr[7] = (u32)(s32)(30);

label_7F062110:
    ctx->pc = 0x7F062110u;
    // 7F062110: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F062114:
    ctx->pc = 0x7F062114u;
    // 7F062114: bl      0x7F27E598
    {
            ctx->lr = 0x7F062118u;
            ctx->pc = 0x7F27E598u;
            return;
    }

label_7F062118:
    ctx->pc = 0x7F062118u;
    ctx->downcount -= 2;
    // 7F062118: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F06211C:
    ctx->pc = 0x7F06211Cu;
    // 7F06211C: bl      0x7F27E0C8
    {
            ctx->lr = 0x7F062120u;
            ctx->pc = 0x7F27E0C8u;
            return;
    }

label_7F062120:
    ctx->pc = 0x7F062120u;
    ctx->downcount -= 2;
    // 7F062120: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062124:
    ctx->pc = 0x7F062124u;
    // 7F062124: bl      0x7F27E638
    {
            ctx->lr = 0x7F062128u;
            ctx->pc = 0x7F27E638u;
            return;
    }

label_7F062128:
    ctx->pc = 0x7F062128u;
    ctx->downcount -= 16;
    // 7F062128: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F06212C:
    ctx->pc = 0x7F06212Cu;
    // 7F06212C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062130:
    ctx->pc = 0x7F062130u;
    // 7F062130: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F062134:
    ctx->pc = 0x7F062134u;
    // 7F062134: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F062138:
    ctx->pc = 0x7F062138u;
    // 7F062138: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F06213C:
    ctx->pc = 0x7F06213Cu;
    ctx->downcount -= 10;
    // 7F06213C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F062140:
    ctx->pc = 0x7F062140u;
    // 7F062140: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F062144:
    ctx->pc = 0x7F062144u;
    // 7F062144: li      r4, 450
    ctx->gpr[4] = (u32)(s32)(450);

label_7F062148:
    ctx->pc = 0x7F062148u;
    // 7F062148: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06214C:
    ctx->pc = 0x7F06214Cu;
    // 7F06214C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F062150:
    ctx->pc = 0x7F062150u;
    // 7F062150: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F062154:
    ctx->pc = 0x7F062154u;
    // 7F062154: lfs     f0, 476(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F062154u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F062158:
    ctx->pc = 0x7F062158u;
    // 7F062158: stfs     f0, 116(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F062158u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F06215C:
    ctx->pc = 0x7F06215Cu;
    // 7F06215C: lha     r3, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062160:
    ctx->pc = 0x7F062160u;
    // 7F062160: bl      0x7F3C9798
    {
            ctx->lr = 0x7F062164u;
            ctx->pc = 0x7F3C9798u;
            return;
    }

label_7F062164:
    ctx->pc = 0x7F062164u;
    ctx->downcount -= 4;
    // 7F062164: sth     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F062168:
    ctx->pc = 0x7F062168u;
    // 7F062168: lwz     r0, 4736(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4736);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06216C:
    ctx->pc = 0x7F06216Cu;
    // 7F06216C: cmpwi   r0, 0
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

label_7F062170:
    ctx->pc = 0x7F062170u;
    // 7F062170: bc    4, 0, 0x7F062188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062188;
        }
    }

label_7F062174:
    ctx->pc = 0x7F062174u;
    ctx->downcount -= 3;
    // 7F062174: lbz     r0, 218(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(218);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F062178:
    ctx->pc = 0x7F062178u;
    // 7F062178: extsb. r0, r0
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

label_7F06217C:
    ctx->pc = 0x7F06217Cu;
    // 7F06217C: bc    12, 2, 0x7F062188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062188;
        }
    }

label_7F062180:
    ctx->pc = 0x7F062180u;
    ctx->downcount -= 2;
    // 7F062180: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F062184:
    ctx->pc = 0x7F062184u;
    // 7F062184: stw     r0, 4736(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4736);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062188:
    ctx->pc = 0x7F062188u;
    ctx->downcount -= 19;
    // 7F062188: lwz     r4, 4736(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4736);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F06218C:
    ctx->pc = 0x7F06218Cu;
    // 7F06218C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F062190:
    ctx->pc = 0x7F062190u;
    // 7F062190: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062194:
    ctx->pc = 0x7F062194u;
    // 7F062194: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F062198:
    ctx->pc = 0x7F062198u;
    // 7F062198: addi    r0, r4, -16
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-16);

label_7F06219C:
    ctx->pc = 0x7F06219Cu;
    // 7F06219C: lfd     f1, -9048(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F06219Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9048);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0621A0:
    ctx->pc = 0x7F0621A0u;
    // 7F0621A0: stw     r0, 4736(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4736);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0621A4:
    ctx->pc = 0x7F0621A4u;
    // 7F0621A4: lwz     r0, 4736(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4736);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0621A8:
    ctx->pc = 0x7F0621A8u;
    // 7F0621A8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0621AC:
    ctx->pc = 0x7F0621ACu;
    // 7F0621AC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0621B0:
    ctx->pc = 0x7F0621B0u;
    // 7F0621B0: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0621B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0621B4:
    ctx->pc = 0x7F0621B4u;
    // 7F0621B4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0621B4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0621B8:
    ctx->pc = 0x7F0621B8u;
    // 7F0621B8: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0621B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0621BC:
    ctx->pc = 0x7F0621BCu;
    // 7F0621BC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0621C0:
    ctx->pc = 0x7F0621C0u;
    // 7F0621C0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0621C4:
    ctx->pc = 0x7F0621C4u;
    // 7F0621C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0621C8:
    ctx->pc = 0x7F0621C8u;
    // 7F0621C8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0621CC:
    ctx->pc = 0x7F0621CCu;
    // 7F0621CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0621D0:
    ctx->pc = 0x7F0621D0u;
    ctx->downcount -= 4;
    // 7F0621D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0621D4:
    ctx->pc = 0x7F0621D4u;
    // 7F0621D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0621D8:
    ctx->pc = 0x7F0621D8u;
    // 7F0621D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0621DC:
    ctx->pc = 0x7F0621DCu;
    // 7F0621DC: bl      0x7F067E3C
    {
            ctx->lr = 0x7F0621E0u;
            ctx->pc = 0x7F067E3Cu;
            return;
    }

label_7F0621E0:
    ctx->pc = 0x7F0621E0u;
    ctx->downcount -= 5;
    // 7F0621E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0621E4:
    ctx->pc = 0x7F0621E4u;
    // 7F0621E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0621E8:
    ctx->pc = 0x7F0621E8u;
    // 7F0621E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0621EC:
    ctx->pc = 0x7F0621ECu;
    // 7F0621EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0621F0:
    ctx->pc = 0x7F0621F0u;
    ctx->downcount -= 6;
    // 7F0621F0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0621F4:
    ctx->pc = 0x7F0621F4u;
    // 7F0621F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0621F8:
    ctx->pc = 0x7F0621F8u;
    // 7F0621F8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0621FC:
    ctx->pc = 0x7F0621FCu;
    // 7F0621FC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F062200:
    ctx->pc = 0x7F062200u;
    // 7F062200: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F062204:
    ctx->pc = 0x7F062204u;
    // 7F062204: bl      0x7F067A98
    {
            ctx->lr = 0x7F062208u;
            ctx->pc = 0x7F067A98u;
            return;
    }

label_7F062208:
    ctx->pc = 0x7F062208u;
    ctx->downcount -= 3;
    // 7F062208: lwz     r0, 5576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5576);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06220C:
    ctx->pc = 0x7F06220Cu;
    // 7F06220C: cmpwi   r0, 1
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

label_7F062210:
    ctx->pc = 0x7F062210u;
    // 7F062210: bc    12, 2, 0x7F06223C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F06223C;
        }
    }

label_7F062214:
    ctx->pc = 0x7F062214u;
    ctx->downcount -= 1;
    // 7F062214: bc    4, 0, 0x7F062224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062224;
        }
    }

label_7F062218:
    ctx->pc = 0x7F062218u;
    ctx->downcount -= 2;
    // 7F062218: cmpwi   r0, 0
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

label_7F06221C:
    ctx->pc = 0x7F06221Cu;
    // 7F06221C: bc    4, 0, 0x7F062230
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062230;
        }
    }

label_7F062220:
    ctx->pc = 0x7F062220u;
    ctx->downcount -= 1;
    // 7F062220: b       0x7F062270
    {
            goto label_7F062270;
    }

label_7F062224:
    ctx->pc = 0x7F062224u;
    ctx->downcount -= 2;
    // 7F062224: cmpwi   r0, 3
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

label_7F062228:
    ctx->pc = 0x7F062228u;
    // 7F062228: bc    4, 0, 0x7F062270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062270;
        }
    }

label_7F06222C:
    ctx->pc = 0x7F06222Cu;
    ctx->downcount -= 1;
    // 7F06222C: b       0x7F062260
    {
            goto label_7F062260;
    }

label_7F062230:
    ctx->pc = 0x7F062230u;
    ctx->downcount -= 3;
    // 7F062230: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F062234:
    ctx->pc = 0x7F062234u;
    // 7F062234: stw     r0, 5576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062238:
    ctx->pc = 0x7F062238u;
    // 7F062238: b       0x7F062270
    {
            goto label_7F062270;
    }

label_7F06223C:
    ctx->pc = 0x7F06223Cu;
    ctx->downcount -= 4;
    // 7F06223C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F062240:
    ctx->pc = 0x7F062240u;
    // 7F062240: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062244:
    ctx->pc = 0x7F062244u;
    // 7F062244: stw     r0, 5576(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5576);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062248:
    ctx->pc = 0x7F062248u;
    // 7F062248: bl      0x7F0620A4
    {
            ctx->lr = 0x7F06224Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0620A4u;
                return;
            }
            goto label_7F0620A4;
    }

label_7F06224C:
    ctx->pc = 0x7F06224Cu;
    ctx->downcount -= 2;
    // 7F06224C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062250:
    ctx->pc = 0x7F062250u;
    // 7F062250: bl      0x7F06200C
    {
            ctx->lr = 0x7F062254u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06200Cu;
                return;
            }
            goto label_7F06200C;
    }

label_7F062254:
    ctx->pc = 0x7F062254u;
    ctx->downcount -= 2;
    // 7F062254: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062258:
    ctx->pc = 0x7F062258u;
    // 7F062258: bl      0x7F06204C
    {
            ctx->lr = 0x7F06225Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06204Cu;
                return;
            }
            goto label_7F06204C;
    }

label_7F06225C:
    ctx->pc = 0x7F06225Cu;
    ctx->downcount -= 1;
    // 7F06225C: b       0x7F062270
    {
            goto label_7F062270;
    }

label_7F062260:
    ctx->pc = 0x7F062260u;
    ctx->downcount -= 2;
    // 7F062260: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062264:
    ctx->pc = 0x7F062264u;
    // 7F062264: bl      0x7F06200C
    {
            ctx->lr = 0x7F062268u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06200Cu;
                return;
            }
            goto label_7F06200C;
    }

label_7F062268:
    ctx->pc = 0x7F062268u;
    ctx->downcount -= 2;
    // 7F062268: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F06226C:
    ctx->pc = 0x7F06226Cu;
    // 7F06226C: bl      0x7F06204C
    {
            ctx->lr = 0x7F062270u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06204Cu;
                return;
            }
            goto label_7F06204C;
    }

label_7F062270:
    ctx->pc = 0x7F062270u;
    ctx->downcount -= 2;
    // 7F062270: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062274:
    ctx->pc = 0x7F062274u;
    // 7F062274: bl      0x7F06213C
    {
            ctx->lr = 0x7F062278u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06213Cu;
                return;
            }
            goto label_7F06213C;
    }

label_7F062278:
    ctx->pc = 0x7F062278u;
    ctx->downcount -= 6;
    // 7F062278: lwz     r5, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F06227C:
    ctx->pc = 0x7F06227Cu;
    // 7F06227C: addi    r3, r31, 680
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(680);

label_7F062280:
    ctx->pc = 0x7F062280u;
    // 7F062280: lwz     r4, 680(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(680);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062284:
    ctx->pc = 0x7F062284u;
    // 7F062284: addi    r0, r5, 2388
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(2388);

label_7F062288:
    ctx->pc = 0x7F062288u;
    // 7F062288: stw     r0, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06228C:
    ctx->pc = 0x7F06228Cu;
    // 7F06228C: bl      0x7F0427FC
    {
            ctx->lr = 0x7F062290u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F062290:
    ctx->pc = 0x7F062290u;
    ctx->downcount -= 3;
    // 7F062290: lwz     r0, 5600(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5600);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062294:
    ctx->pc = 0x7F062294u;
    // 7F062294: cmpwi   r0, 2
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

label_7F062298:
    ctx->pc = 0x7F062298u;
    // 7F062298: bc    12, 2, 0x7F06234C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F06234C;
        }
    }

label_7F06229C:
    ctx->pc = 0x7F06229Cu;
    ctx->downcount -= 1;
    // 7F06229C: bc    4, 0, 0x7F0622AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0622AC;
        }
    }

label_7F0622A0:
    ctx->pc = 0x7F0622A0u;
    ctx->downcount -= 2;
    // 7F0622A0: cmpwi   r0, 1
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

label_7F0622A4:
    ctx->pc = 0x7F0622A4u;
    // 7F0622A4: bc    4, 0, 0x7F0622B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0622B8;
        }
    }

label_7F0622A8:
    ctx->pc = 0x7F0622A8u;
    ctx->downcount -= 1;
    // 7F0622A8: b       0x7F0623C4
    {
            goto label_7F0623C4;
    }

label_7F0622AC:
    ctx->pc = 0x7F0622ACu;
    ctx->downcount -= 2;
    // 7F0622AC: cmpwi   r0, 4
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

label_7F0622B0:
    ctx->pc = 0x7F0622B0u;
    // 7F0622B0: bc    4, 0, 0x7F0623C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0623C4;
        }
    }

label_7F0622B4:
    ctx->pc = 0x7F0622B4u;
    ctx->downcount -= 1;
    // 7F0622B4: b       0x7F062388
    {
            goto label_7F062388;
    }

label_7F0622B8:
    ctx->pc = 0x7F0622B8u;
    ctx->downcount -= 5;
    // 7F0622B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0622BC:
    ctx->pc = 0x7F0622BCu;
    // 7F0622BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0622C0:
    ctx->pc = 0x7F0622C0u;
    // 7F0622C0: stw     r0, 4812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0622C4:
    ctx->pc = 0x7F0622C4u;
    // 7F0622C4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0622C8:
    ctx->pc = 0x7F0622C8u;
    // 7F0622C8: bl      0x7F063790
    {
            ctx->lr = 0x7F0622CCu;
            goto label_7F063790;
    }

label_7F0622CC:
    ctx->pc = 0x7F0622CCu;
    ctx->downcount -= 6;
    // 7F0622CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0622D0:
    ctx->pc = 0x7F0622D0u;
    // 7F0622D0: addi    r4, r31, 5580
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(5580);

label_7F0622D4:
    ctx->pc = 0x7F0622D4u;
    // 7F0622D4: stw     r0, 5596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5596);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0622D8:
    ctx->pc = 0x7F0622D8u;
    // 7F0622D8: li      r3, 1806
    ctx->gpr[3] = (u32)(s32)(1806);

label_7F0622DC:
    ctx->pc = 0x7F0622DCu;
    // 7F0622DC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0622E0:
    ctx->pc = 0x7F0622E0u;
    // 7F0622E0: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0622E4u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0622E4:
    ctx->pc = 0x7F0622E4u;
    ctx->downcount -= 4;
    // 7F0622E4: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0622E8:
    ctx->pc = 0x7F0622E8u;
    // 7F0622E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0622EC:
    ctx->pc = 0x7F0622ECu;
    // 7F0622EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0622F0:
    ctx->pc = 0x7F0622F0u;
    // 7F0622F0: bl      0x80051BB0
    {
            ctx->lr = 0x7F0622F4u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0622F4:
    ctx->pc = 0x7F0622F4u;
    ctx->downcount -= 2;
    // 7F0622F4: cmpwi   r3, 0
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

label_7F0622F8:
    ctx->pc = 0x7F0622F8u;
    // 7F0622F8: bc    12, 2, 0x7F062310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062310;
        }
    }

label_7F0622FC:
    ctx->pc = 0x7F0622FCu;
    ctx->downcount -= 3;
    // 7F0622FC: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F062300:
    ctx->pc = 0x7F062300u;
    // 7F062300: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F062304:
    ctx->pc = 0x7F062304u;
    // 7F062304: bl      0x80050B54
    {
            ctx->lr = 0x7F062308u;
            ctx->pc = 0x80050B54u;
            return;
    }

label_7F062308:
    ctx->pc = 0x7F062308u;
    ctx->downcount -= 2;
    // 7F062308: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F06230C:
    ctx->pc = 0x7F06230Cu;
    // 7F06230C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062310:
    ctx->pc = 0x7F062310u;
    ctx->downcount -= 6;
    // 7F062310: addi    r5, r31, 4840
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(4840);

label_7F062314:
    ctx->pc = 0x7F062314u;
    // 7F062314: li      r3, 1805
    ctx->gpr[3] = (u32)(s32)(1805);

label_7F062318:
    ctx->pc = 0x7F062318u;
    // 7F062318: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F06231C:
    ctx->pc = 0x7F06231Cu;
    // 7F06231C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F062320:
    ctx->pc = 0x7F062320u;
    // 7F062320: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F062324:
    ctx->pc = 0x7F062324u;
    // 7F062324: bl      0x8004F994
    {
            ctx->lr = 0x7F062328u;
            ctx->pc = 0x8004F994u;
            return;
    }

label_7F062328:
    ctx->pc = 0x7F062328u;
    ctx->downcount -= 2;
    // 7F062328: rlwinm. r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F06232C:
    ctx->pc = 0x7F06232Cu;
    // 7F06232C: bc    12, 2, 0x7F06234C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F06234C;
        }
    }

label_7F062330:
    ctx->pc = 0x7F062330u;
    ctx->downcount -= 6;
    // 7F062330: lbz     r4, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F062334:
    ctx->pc = 0x7F062334u;
    // 7F062334: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F062338:
    ctx->pc = 0x7F062338u;
    // 7F062338: li      r6, 37
    ctx->gpr[6] = (u32)(s32)(37);

label_7F06233C:
    ctx->pc = 0x7F06233Cu;
    // 7F06233C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F062340:
    ctx->pc = 0x7F062340u;
    // 7F062340: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F062344:
    ctx->pc = 0x7F062344u;
    // 7F062344: bl      0x80050158
    {
            ctx->lr = 0x7F062348u;
            ctx->pc = 0x80050158u;
            return;
    }

label_7F062348:
    ctx->pc = 0x7F062348u;
    ctx->downcount -= 1;
    // 7F062348: stw     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F06234C:
    ctx->pc = 0x7F06234Cu;
    ctx->downcount -= 9;
    // 7F06234C: lwz     r3, 5596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5596);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F062350:
    ctx->pc = 0x7F062350u;
    // 7F062350: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F062354:
    ctx->pc = 0x7F062354u;
    // 7F062354: stw     r0, 5596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5596);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062358:
    ctx->pc = 0x7F062358u;
    // 7F062358: lwz     r3, 4812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4812);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F06235C:
    ctx->pc = 0x7F06235Cu;
    // 7F06235C: addi    r0, r3, 20
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20);

label_7F062360:
    ctx->pc = 0x7F062360u;
    // 7F062360: stw     r0, 4812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062364:
    ctx->pc = 0x7F062364u;
    // 7F062364: lwz     r0, 5596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5596);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062368:
    ctx->pc = 0x7F062368u;
    // 7F062368: cmpwi   r0, 15
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F06236C:
    ctx->pc = 0x7F06236Cu;
    // 7F06236C: bc    4, 1, 0x7F062450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062450;
        }
    }

label_7F062370:
    ctx->pc = 0x7F062370u;
    ctx->downcount -= 3;
    // 7F062370: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062374:
    ctx->pc = 0x7F062374u;
    // 7F062374: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F062378:
    ctx->pc = 0x7F062378u;
    // 7F062378: bl      0x7F063790
    {
            ctx->lr = 0x7F06237Cu;
            goto label_7F063790;
    }

label_7F06237C:
    ctx->pc = 0x7F06237Cu;
    ctx->downcount -= 3;
    // 7F06237C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F062380:
    ctx->pc = 0x7F062380u;
    // 7F062380: stw     r0, 5596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5596);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062384:
    ctx->pc = 0x7F062384u;
    // 7F062384: b       0x7F062450
    {
            goto label_7F062450;
    }

label_7F062388:
    ctx->pc = 0x7F062388u;
    ctx->downcount -= 3;
    // 7F062388: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F06238C:
    ctx->pc = 0x7F06238Cu;
    // 7F06238C: cmplwi  r3, 0x0000
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

label_7F062390:
    ctx->pc = 0x7F062390u;
    // 7F062390: bc    12, 2, 0x7F062450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062450;
        }
    }

label_7F062394:
    ctx->pc = 0x7F062394u;
    ctx->downcount -= 3;
    // 7F062394: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F062398:
    ctx->pc = 0x7F062398u;
    // 7F062398: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F06239C:
    ctx->pc = 0x7F06239Cu;
    // 7F06239C: bl      0x80051BB0
    {
            ctx->lr = 0x7F0623A0u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0623A0:
    ctx->pc = 0x7F0623A0u;
    ctx->downcount -= 2;
    // 7F0623A0: cmpwi   r3, 0
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

label_7F0623A4:
    ctx->pc = 0x7F0623A4u;
    // 7F0623A4: bc    12, 2, 0x7F062450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062450;
        }
    }

label_7F0623A8:
    ctx->pc = 0x7F0623A8u;
    ctx->downcount -= 6;
    // 7F0623A8: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0623AC:
    ctx->pc = 0x7F0623ACu;
    // 7F0623AC: addi    r5, r31, 5580
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(5580);

label_7F0623B0:
    ctx->pc = 0x7F0623B0u;
    // 7F0623B0: lbz     r7, 4840(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4840);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_7F0623B4:
    ctx->pc = 0x7F0623B4u;
    // 7F0623B4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0623B8:
    ctx->pc = 0x7F0623B8u;
    // 7F0623B8: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F0623BC:
    ctx->pc = 0x7F0623BCu;
    // 7F0623BC: bl      0x7F176740
    {
            ctx->lr = 0x7F0623C0u;
            ctx->pc = 0x7F176740u;
            return;
    }

label_7F0623C0:
    ctx->pc = 0x7F0623C0u;
    ctx->downcount -= 1;
    // 7F0623C0: b       0x7F062450
    {
            goto label_7F062450;
    }

label_7F0623C4:
    ctx->pc = 0x7F0623C4u;
    ctx->downcount -= 6;
    // 7F0623C4: lwz     r3, 4812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4812);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0623C8:
    ctx->pc = 0x7F0623C8u;
    // 7F0623C8: addi    r0, r3, -6
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-6);

label_7F0623CC:
    ctx->pc = 0x7F0623CCu;
    // 7F0623CC: stw     r0, 4812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0623D0:
    ctx->pc = 0x7F0623D0u;
    // 7F0623D0: lwz     r0, 4812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4812);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0623D4:
    ctx->pc = 0x7F0623D4u;
    // 7F0623D4: cmpwi   r0, 0
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

label_7F0623D8:
    ctx->pc = 0x7F0623D8u;
    // 7F0623D8: bc    4, 0, 0x7F0623E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0623E8;
        }
    }

label_7F0623DC:
    ctx->pc = 0x7F0623DCu;
    ctx->downcount -= 3;
    // 7F0623DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0623E0:
    ctx->pc = 0x7F0623E0u;
    // 7F0623E0: stw     r0, 4812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0623E4:
    ctx->pc = 0x7F0623E4u;
    // 7F0623E4: b       0x7F062414
    {
            goto label_7F062414;
    }

label_7F0623E8:
    ctx->pc = 0x7F0623E8u;
    ctx->downcount -= 1;
    // 7F0623E8: bl      0x7F0688B8
    {
            ctx->lr = 0x7F0623ECu;
            ctx->pc = 0x7F0688B8u;
            return;
    }

label_7F0623EC:
    ctx->pc = 0x7F0623ECu;
    ctx->downcount -= 6;
    // 7F0623EC: lwz     r0, 4824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0623F0:
    ctx->pc = 0x7F0623F0u;
    // 7F0623F0: lwz     r4, 5596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5596);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0623F4:
    ctx->pc = 0x7F0623F4u;
    // 7F0623F4: subf   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F0623F8:
    ctx->pc = 0x7F0623F8u;
    // 7F0623F8: addi    r0, r4, 4
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0623FC:
    ctx->pc = 0x7F0623FCu;
    // 7F0623FC: cmpw    r3, r0
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

label_7F062400:
    ctx->pc = 0x7F062400u;
    // 7F062400: bc    4, 1, 0x7F062414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062414;
        }
    }

label_7F062404:
    ctx->pc = 0x7F062404u;
    ctx->downcount -= 3;
    // 7F062404: addi    r0, r4, 6
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(6);

label_7F062408:
    ctx->pc = 0x7F062408u;
    // 7F062408: stw     r0, 5596(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5596);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06240C:
    ctx->pc = 0x7F06240Cu;
    // 7F06240C: bl      0x7F0688B8
    {
            ctx->lr = 0x7F062410u;
            ctx->pc = 0x7F0688B8u;
            return;
    }

label_7F062410:
    ctx->pc = 0x7F062410u;
    ctx->downcount -= 1;
    // 7F062410: stw     r3, 4824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4824);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F062414:
    ctx->pc = 0x7F062414u;
    ctx->downcount -= 3;
    // 7F062414: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F062418:
    ctx->pc = 0x7F062418u;
    // 7F062418: cmplwi  r3, 0x0000
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

label_7F06241C:
    ctx->pc = 0x7F06241Cu;
    // 7F06241C: bc    12, 2, 0x7F062450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062450;
        }
    }

label_7F062420:
    ctx->pc = 0x7F062420u;
    ctx->downcount -= 3;
    // 7F062420: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F062424:
    ctx->pc = 0x7F062424u;
    // 7F062424: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F062428:
    ctx->pc = 0x7F062428u;
    // 7F062428: bl      0x80051BB0
    {
            ctx->lr = 0x7F06242Cu;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F06242C:
    ctx->pc = 0x7F06242Cu;
    ctx->downcount -= 2;
    // 7F06242C: cmpwi   r3, 0
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

label_7F062430:
    ctx->pc = 0x7F062430u;
    // 7F062430: bc    12, 2, 0x7F062450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062450;
        }
    }

label_7F062434:
    ctx->pc = 0x7F062434u;
    ctx->downcount -= 5;
    // 7F062434: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F062438:
    ctx->pc = 0x7F062438u;
    // 7F062438: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F06243C:
    ctx->pc = 0x7F06243Cu;
    // 7F06243C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F062440:
    ctx->pc = 0x7F062440u;
    // 7F062440: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F062444:
    ctx->pc = 0x7F062444u;
    // 7F062444: bl      0x80051688
    {
            ctx->lr = 0x7F062448u;
            ctx->pc = 0x80051688u;
            return;
    }

label_7F062448:
    ctx->pc = 0x7F062448u;
    ctx->downcount -= 2;
    // 7F062448: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F06244C:
    ctx->pc = 0x7F06244Cu;
    // 7F06244C: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062450:
    ctx->pc = 0x7F062450u;
    ctx->downcount -= 18;
    // 7F062450: lwz     r4, 4812(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4812);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062454:
    ctx->pc = 0x7F062454u;
    // 7F062454: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F062458:
    ctx->pc = 0x7F062458u;
    // 7F062458: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06245C:
    ctx->pc = 0x7F06245Cu;
    // 7F06245C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F062460:
    ctx->pc = 0x7F062460u;
    // 7F062460: xoris   r0, r4, 0x8000
    ctx->gpr[0] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F062464:
    ctx->pc = 0x7F062464u;
    // 7F062464: lfd     f1, -9048(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F062464u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9048);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F062468:
    ctx->pc = 0x7F062468u;
    // 7F062468: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06246C:
    ctx->pc = 0x7F06246Cu;
    // 7F06246C: lfs     f2, 6276(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F06246Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F062470:
    ctx->pc = 0x7F062470u;
    // 7F062470: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062470u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F062474:
    ctx->pc = 0x7F062474u;
    // 7F062474: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F062474u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F062478:
    ctx->pc = 0x7F062478u;
    // 7F062478: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F062478u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F06247C:
    ctx->pc = 0x7F06247Cu;
    // 7F06247C: stfs     f0, 6276(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F06247Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F062480:
    ctx->pc = 0x7F062480u;
    // 7F062480: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062484:
    ctx->pc = 0x7F062484u;
    // 7F062484: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F062488:
    ctx->pc = 0x7F062488u;
    // 7F062488: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F06248C:
    ctx->pc = 0x7F06248Cu;
    // 7F06248C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F062490:
    ctx->pc = 0x7F062490u;
    // 7F062490: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F062494:
    ctx->pc = 0x7F062494u;
    ctx->downcount -= 8;
    // 7F062494: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F062498:
    ctx->pc = 0x7F062498u;
    // 7F062498: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F06249C:
    ctx->pc = 0x7F06249Cu;
    // 7F06249C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0624A0:
    ctx->pc = 0x7F0624A0u;
    // 7F0624A0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0624A4:
    ctx->pc = 0x7F0624A4u;
    // 7F0624A4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0624A8:
    ctx->pc = 0x7F0624A8u;
    // 7F0624A8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0624AC:
    ctx->pc = 0x7F0624ACu;
    // 7F0624AC: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0624B0:
    ctx->pc = 0x7F0624B0u;
    // 7F0624B0: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F0624B4u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F0624B4:
    ctx->pc = 0x7F0624B4u;
    ctx->downcount -= 9;
    // 7F0624B4: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0624B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0624B8:
    ctx->pc = 0x7F0624B8u;
    // 7F0624B8: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0624B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0624BC:
    ctx->pc = 0x7F0624BCu;
    // 7F0624BC: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0624BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F0624C0:
    ctx->pc = 0x7F0624C0u;
    // 7F0624C0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0624C0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0624C4:
    ctx->pc = 0x7F0624C4u;
    // 7F0624C4: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0624C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F0624C8:
    ctx->pc = 0x7F0624C8u;
    // 7F0624C8: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0624C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0624CC:
    ctx->pc = 0x7F0624CCu;
    // 7F0624CC: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0624D0:
    ctx->pc = 0x7F0624D0u;
    // 7F0624D0: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0624D4:
    ctx->pc = 0x7F0624D4u;
    // 7F0624D4: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F0624D8u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F0624D8:
    ctx->pc = 0x7F0624D8u;
    ctx->downcount -= 6;
    // 7F0624D8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0624DC:
    ctx->pc = 0x7F0624DCu;
    // 7F0624DC: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F0624E0:
    ctx->pc = 0x7F0624E0u;
    // 7F0624E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0624E4:
    ctx->pc = 0x7F0624E4u;
    // 7F0624E4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0624E8:
    ctx->pc = 0x7F0624E8u;
    // 7F0624E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0624EC:
    ctx->pc = 0x7F0624ECu;
    ctx->downcount -= 1;
    // 7F0624EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0624F0:
    ctx->pc = 0x7F0624F0u;
    ctx->downcount -= 1;
    // 7F0624F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0624F4:
    ctx->pc = 0x7F0624F4u;
    ctx->downcount -= 22;
    // 7F0624F4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0624F8:
    ctx->pc = 0x7F0624F8u;
    // 7F0624F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0624FC:
    ctx->pc = 0x7F0624FCu;
    // 7F0624FC: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F062500:
    ctx->pc = 0x7F062500u;
    // 7F062500: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F062504:
    ctx->pc = 0x7F062504u;
    // 7F062504: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062508:
    ctx->pc = 0x7F062508u;
    // 7F062508: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F06250C:
    ctx->pc = 0x7F06250Cu;
    // 7F06250C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F062510:
    ctx->pc = 0x7F062510u;
    // 7F062510: lfs     f2, -9036(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F062510u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-9036);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F062514:
    ctx->pc = 0x7F062514u;
    // 7F062514: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F062518:
    ctx->pc = 0x7F062518u;
    // 7F062518: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F06251C:
    ctx->pc = 0x7F06251Cu;
    // 7F06251C: lfs     f1, -9032(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F06251Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-9032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F062520:
    ctx->pc = 0x7F062520u;
    // 7F062520: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F062524:
    ctx->pc = 0x7F062524u;
    // 7F062524: lfs     f0, -9028(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F062524u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9028);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F062528:
    ctx->pc = 0x7F062528u;
    // 7F062528: addi    r4, r3, 32
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32);

label_7F06252C:
    ctx->pc = 0x7F06252Cu;
    // 7F06252C: lfs     f3, -9040(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F06252Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-9040);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F062530:
    ctx->pc = 0x7F062530u;
    // 7F062530: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062530u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F062534:
    ctx->pc = 0x7F062534u;
    // 7F062534: stfs     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062534u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F062538:
    ctx->pc = 0x7F062538u;
    // 7F062538: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062538u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F06253C:
    ctx->pc = 0x7F06253Cu;
    // 7F06253C: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F06253Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F062540:
    ctx->pc = 0x7F062540u;
    // 7F062540: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062540u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F062544:
    ctx->pc = 0x7F062544u;
    // 7F062544: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062544u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F062548:
    ctx->pc = 0x7F062548u;
    // 7F062548: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F06254Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F06254C:
    ctx->pc = 0x7F06254Cu;
    ctx->downcount -= 4;
    // 7F06254C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F062550:
    ctx->pc = 0x7F062550u;
    // 7F062550: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F062554:
    ctx->pc = 0x7F062554u;
    // 7F062554: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F062558:
    ctx->pc = 0x7F062558u;
    // 7F062558: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F06255Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F06255C:
    ctx->pc = 0x7F06255Cu;
    ctx->downcount -= 29;
    // 7F06255C: li      r5, 500
    ctx->gpr[5] = (u32)(s32)(500);

label_7F062560:
    ctx->pc = 0x7F062560u;
    // 7F062560: addi    r3, r31, 5616
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(5616);

label_7F062564:
    ctx->pc = 0x7F062564u;
    // 7F062564: stw     r5, 5652(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5652);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F062568:
    ctx->pc = 0x7F062568u;
    // 7F062568: li      r0, 1500
    ctx->gpr[0] = (u32)(s32)(1500);

label_7F06256C:
    ctx->pc = 0x7F06256Cu;
    // 7F06256C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F062570:
    ctx->pc = 0x7F062570u;
    // 7F062570: stw     r0, 5648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062574:
    ctx->pc = 0x7F062574u;
    // 7F062574: stw     r5, 5668(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5668);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F062578:
    ctx->pc = 0x7F062578u;
    // 7F062578: stw     r0, 5664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06257C:
    ctx->pc = 0x7F06257Cu;
    // 7F06257C: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F06257Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F062580:
    ctx->pc = 0x7F062580u;
    // 7F062580: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F062580u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F062584:
    ctx->pc = 0x7F062584u;
    // 7F062584: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062584u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F062588:
    ctx->pc = 0x7F062588u;
    // 7F062588: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06258C:
    ctx->pc = 0x7F06258Cu;
    // 7F06258C: stw     r0, 5648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5648);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062590:
    ctx->pc = 0x7F062590u;
    // 7F062590: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062590u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F062594:
    ctx->pc = 0x7F062594u;
    // 7F062594: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F062594u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F062598:
    ctx->pc = 0x7F062598u;
    // 7F062598: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062598u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F06259C:
    ctx->pc = 0x7F06259Cu;
    // 7F06259C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0625A0:
    ctx->pc = 0x7F0625A0u;
    // 7F0625A0: stw     r0, 5664(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0625A4:
    ctx->pc = 0x7F0625A4u;
    // 7F0625A4: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0625A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0625A8:
    ctx->pc = 0x7F0625A8u;
    // 7F0625A8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0625A8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0625AC:
    ctx->pc = 0x7F0625ACu;
    // 7F0625AC: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0625ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0625B0:
    ctx->pc = 0x7F0625B0u;
    // 7F0625B0: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0625B4:
    ctx->pc = 0x7F0625B4u;
    // 7F0625B4: stw     r0, 5656(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0625B8:
    ctx->pc = 0x7F0625B8u;
    // 7F0625B8: lfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0625B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0625BC:
    ctx->pc = 0x7F0625BCu;
    // 7F0625BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0625BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0625C0:
    ctx->pc = 0x7F0625C0u;
    // 7F0625C0: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0625C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0625C4:
    ctx->pc = 0x7F0625C4u;
    // 7F0625C4: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0625C8:
    ctx->pc = 0x7F0625C8u;
    // 7F0625C8: stw     r0, 5672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0625CC:
    ctx->pc = 0x7F0625CCu;
    // 7F0625CC: bl      0x7F0688B4
    {
            ctx->lr = 0x7F0625D0u;
            ctx->pc = 0x7F0688B4u;
            return;
    }

label_7F0625D0:
    ctx->pc = 0x7F0625D0u;
    ctx->downcount -= 6;
    // 7F0625D0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0625D4:
    ctx->pc = 0x7F0625D4u;
    // 7F0625D4: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0625D8:
    ctx->pc = 0x7F0625D8u;
    // 7F0625D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0625DC:
    ctx->pc = 0x7F0625DCu;
    // 7F0625DC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0625E0:
    ctx->pc = 0x7F0625E0u;
    // 7F0625E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0625E4:
    ctx->pc = 0x7F0625E4u;
    ctx->downcount -= 16;
    // 7F0625E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0625E8:
    ctx->pc = 0x7F0625E8u;
    // 7F0625E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0625EC:
    ctx->pc = 0x7F0625ECu;
    // 7F0625EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0625F0:
    ctx->pc = 0x7F0625F0u;
    // 7F0625F0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0625F4:
    ctx->pc = 0x7F0625F4u;
    // 7F0625F4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0625F8:
    ctx->pc = 0x7F0625F8u;
    // 7F0625F8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0625FC:
    ctx->downcount -= 1;
    // 7F0625FC: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F062600u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F062600:
    ctx->downcount -= 2;
    // 7F062600: cmplwi  r3, 0x0000
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

label_7F062604:
    // 7F062604: bc    12, 2, 0x7F062618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062618;
        }
    }

label_7F062608:
    ctx->downcount -= 1;
    // 7F062608: bl      0x7F3C674C
    {
            ctx->lr = 0x7F06260Cu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F06260C:
    ctx->pc = 0x7F06260Cu;
    ctx->downcount -= 3;
    // 7F06260C: stwx    r3, r30, r31
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F062610:
    // 7F062610: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F062614:
    // 7F062614: b       0x7F0625FC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0625FCu;
                return;
            }
            goto label_7F0625FC;
    }

label_7F062618:
    ctx->pc = 0x7F062618u;
    ctx->downcount -= 16;
    // 7F062618: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F06261C:
    ctx->pc = 0x7F06261Cu;
    // 7F06261C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062620:
    ctx->pc = 0x7F062620u;
    // 7F062620: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F062624:
    ctx->pc = 0x7F062624u;
    // 7F062624: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F062628:
    ctx->pc = 0x7F062628u;
    // 7F062628: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F06262C:
    ctx->pc = 0x7F06262Cu;
    ctx->downcount -= 10;
    // 7F06262C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F062630:
    ctx->pc = 0x7F062630u;
    // 7F062630: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F062634:
    ctx->pc = 0x7F062634u;
    // 7F062634: li      r5, 11
    ctx->gpr[5] = (u32)(s32)(11);

label_7F062638:
    ctx->pc = 0x7F062638u;
    // 7F062638: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06263C:
    ctx->pc = 0x7F06263Cu;
    // 7F06263C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F062640:
    ctx->pc = 0x7F062640u;
    // 7F062640: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F062644:
    ctx->pc = 0x7F062644u;
    // 7F062644: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F062648:
    ctx->pc = 0x7F062648u;
    // 7F062648: lwz     r6, 224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(224);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F06264C:
    ctx->pc = 0x7F06264Cu;
    // 7F06264C: addi    r3, r31, 6292
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(6292);

label_7F062650:
    ctx->pc = 0x7F062650u;
    // 7F062650: bl      0x7F0120F4
    {
            ctx->lr = 0x7F062654u;
            ctx->pc = 0x7F0120F4u;
            return;
    }

label_7F062654:
    ctx->pc = 0x7F062654u;
    ctx->downcount -= 7;
    // 7F062654: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F062658:
    ctx->pc = 0x7F062658u;
    // 7F062658: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F06265C:
    ctx->pc = 0x7F06265Cu;
    // 7F06265C: addi    r5, r3, -9024
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9024);

label_7F062660:
    ctx->pc = 0x7F062660u;
    // 7F062660: lfs     f2, -9020(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F062660u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9020);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F062664:
    ctx->pc = 0x7F062664u;
    // 7F062664: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F062664u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F062668:
    ctx->pc = 0x7F062668u;
    // 7F062668: addi    r3, r31, 6292
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(6292);

label_7F06266C:
    ctx->pc = 0x7F06266Cu;
    // 7F06266C: bl      0x7F03C1DC
    {
            ctx->lr = 0x7F062670u;
            ctx->pc = 0x7F03C1DCu;
            return;
    }

label_7F062670:
    ctx->pc = 0x7F062670u;
    ctx->downcount -= 8;
    // 7F062670: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F062674:
    ctx->pc = 0x7F062674u;
    // 7F062674: lha     r4, 98(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(98);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062678:
    ctx->pc = 0x7F062678u;
    // 7F062678: addi    r5, r3, -9016
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9016);

label_7F06267C:
    ctx->pc = 0x7F06267Cu;
    // 7F06267C: addi    r3, r31, 6292
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(6292);

label_7F062680:
    ctx->pc = 0x7F062680u;
    // 7F062680: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F062680u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F062684:
    ctx->pc = 0x7F062684u;
    // 7F062684: li      r5, 1024
    ctx->gpr[5] = (u32)(s32)(1024);

label_7F062688:
    ctx->pc = 0x7F062688u;
    // 7F062688: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F06268C:
    ctx->pc = 0x7F06268Cu;
    // 7F06268C: bl      0x7F041A9C
    {
            ctx->lr = 0x7F062690u;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F062690:
    ctx->pc = 0x7F062690u;
    ctx->downcount -= 6;
    // 7F062690: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062694:
    ctx->pc = 0x7F062694u;
    // 7F062694: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F062698:
    ctx->pc = 0x7F062698u;
    // 7F062698: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F06269C:
    ctx->pc = 0x7F06269Cu;
    // 7F06269C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0626A0:
    ctx->pc = 0x7F0626A0u;
    // 7F0626A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0626A4:
    ctx->pc = 0x7F0626A4u;
    ctx->downcount -= 12;
    // 7F0626A4: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0626A8:
    ctx->pc = 0x7F0626A8u;
    // 7F0626A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0626AC:
    ctx->pc = 0x7F0626ACu;
    // 7F0626AC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F0626B0:
    ctx->pc = 0x7F0626B0u;
    // 7F0626B0: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0626B4:
    ctx->pc = 0x7F0626B4u;
    // 7F0626B4: addi    r4, r4, 7312
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7312);

label_7F0626B8:
    ctx->pc = 0x7F0626B8u;
    // 7F0626B8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0626BC:
    ctx->pc = 0x7F0626BCu;
    // 7F0626BC: addi    r5, r1, 36
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(36);

label_7F0626C0:
    ctx->pc = 0x7F0626C0u;
    // 7F0626C0: stw     r31, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0626C4:
    ctx->pc = 0x7F0626C4u;
    // 7F0626C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0626C8:
    ctx->pc = 0x7F0626C8u;
    // 7F0626C8: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_7F0626CC:
    ctx->pc = 0x7F0626CCu;
    // 7F0626CC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0626D0:
    loop_7F0626D0(ctx);
    if (ctx->pc == 0x7F0626E4u) goto label_7F0626E4;
    return;
label_7F0626D4:
    ctx->pc = 0x7F0626D4u;
    // 7F0626D4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0626D8:
    ctx->pc = 0x7F0626D8u;
    // 7F0626D8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0626DC:
    ctx->pc = 0x7F0626DCu;
    // 7F0626DC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F0626E0:
    // 7F0626E0: bc    16, 0, 0x7F0626D0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0626D0u;
                return;
            }
            goto label_7F0626D0;
        }
    }

label_7F0626E4:
    ctx->pc = 0x7F0626E4u;
    ctx->downcount -= 4;
    // 7F0626E4: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0626E8:
    ctx->pc = 0x7F0626E8u;
    // 7F0626E8: lfs     f1, 4868(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0626E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4868);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0626EC:
    ctx->pc = 0x7F0626ECu;
    // 7F0626EC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0626F0:
    ctx->pc = 0x7F0626F0u;
    // 7F0626F0: bl      0x7F1148AC
    {
            ctx->lr = 0x7F0626F4u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F0626F4:
    ctx->pc = 0x7F0626F4u;
    ctx->downcount -= 4;
    // 7F0626F4: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F0626F8:
    ctx->pc = 0x7F0626F8u;
    // 7F0626F8: lfs     f1, 4864(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0626F8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0626FC:
    ctx->pc = 0x7F0626FCu;
    // 7F0626FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F062700:
    ctx->pc = 0x7F062700u;
    // 7F062700: bl      0x7F1147E8
    {
            ctx->lr = 0x7F062704u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F062704:
    ctx->pc = 0x7F062704u;
    ctx->downcount -= 4;
    // 7F062704: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F062708:
    ctx->pc = 0x7F062708u;
    // 7F062708: lfs     f1, 4860(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F062708u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4860);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F06270C:
    ctx->pc = 0x7F06270Cu;
    // 7F06270C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F062710:
    ctx->pc = 0x7F062710u;
    // 7F062710: bl      0x7F114738
    {
            ctx->lr = 0x7F062714u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F062714:
    ctx->pc = 0x7F062714u;
    ctx->downcount -= 2;
    // 7F062714: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F062718:
    ctx->pc = 0x7F062718u;
    // 7F062718: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F06271Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F06271C:
    ctx->pc = 0x7F06271Cu;
    ctx->downcount -= 5;
    // 7F06271C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F062720:
    ctx->pc = 0x7F062720u;
    // 7F062720: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F062724:
    ctx->pc = 0x7F062724u;
    // 7F062724: addi    r3, r3, 6592
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6592);

label_7F062728:
    ctx->pc = 0x7F062728u;
    // 7F062728: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F06272C:
    ctx->pc = 0x7F06272Cu;
    // 7F06272C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F062730u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F062730:
    ctx->pc = 0x7F062730u;
    ctx->downcount -= 72;
    // 7F062730: lfs     f1, 4844(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F062730u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F062734:
    ctx->pc = 0x7F062734u;
    // 7F062734: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062734u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F062738:
    ctx->pc = 0x7F062738u;
    // 7F062738: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F062738u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F06273C:
    ctx->pc = 0x7F06273Cu;
    // 7F06273C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F06273Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F062740:
    ctx->pc = 0x7F062740u;
    // 7F062740: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062740u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F062744:
    ctx->pc = 0x7F062744u;
    // 7F062744: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062748:
    ctx->pc = 0x7F062748u;
    // 7F062748: sth     r0, 4868(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4868);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F06274C:
    ctx->pc = 0x7F06274Cu;
    // 7F06274C: lfs     f1, 4844(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F06274Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F062750:
    ctx->pc = 0x7F062750u;
    // 7F062750: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062750u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F062754:
    ctx->pc = 0x7F062754u;
    // 7F062754: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F062754u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F062758:
    ctx->pc = 0x7F062758u;
    // 7F062758: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F062758u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F06275C:
    ctx->pc = 0x7F06275Cu;
    // 7F06275C: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F06275Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F062760:
    ctx->pc = 0x7F062760u;
    // 7F062760: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062764:
    ctx->pc = 0x7F062764u;
    // 7F062764: sth     r0, 4892(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4892);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062768:
    ctx->pc = 0x7F062768u;
    // 7F062768: lfs     f1, 4852(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F062768u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4852);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F06276C:
    ctx->pc = 0x7F06276Cu;
    // 7F06276C: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F06276Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F062770:
    ctx->pc = 0x7F062770u;
    // 7F062770: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F062770u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F062774:
    ctx->pc = 0x7F062774u;
    // 7F062774: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F062774u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F062778:
    ctx->pc = 0x7F062778u;
    // 7F062778: stfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062778u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F06277C:
    ctx->pc = 0x7F06277Cu;
    // 7F06277C: lwz     r0, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062780:
    ctx->pc = 0x7F062780u;
    // 7F062780: sth     r0, 4872(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4872);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062784:
    ctx->pc = 0x7F062784u;
    // 7F062784: lfs     f1, 4852(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F062784u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4852);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F062788:
    ctx->pc = 0x7F062788u;
    // 7F062788: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062788u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F06278C:
    ctx->pc = 0x7F06278Cu;
    // 7F06278C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F06278Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F062790:
    ctx->pc = 0x7F062790u;
    // 7F062790: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F062790u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F062794:
    ctx->pc = 0x7F062794u;
    // 7F062794: stfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062794u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F062798:
    ctx->pc = 0x7F062798u;
    // 7F062798: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06279C:
    ctx->pc = 0x7F06279Cu;
    // 7F06279C: sth     r0, 4896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4896);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0627A0:
    ctx->pc = 0x7F0627A0u;
    // 7F0627A0: lfs     f1, 4844(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0627A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0627A4:
    ctx->pc = 0x7F0627A4u;
    // 7F0627A4: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0627A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0627A8:
    ctx->pc = 0x7F0627A8u;
    // 7F0627A8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0627A8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F0627AC:
    ctx->pc = 0x7F0627ACu;
    // 7F0627AC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0627ACu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0627B0:
    ctx->pc = 0x7F0627B0u;
    // 7F0627B0: stfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0627B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0627B4:
    ctx->pc = 0x7F0627B4u;
    // 7F0627B4: lwz     r0, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0627B8:
    ctx->pc = 0x7F0627B8u;
    // 7F0627B8: sth     r0, 4876(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4876);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0627BC:
    ctx->pc = 0x7F0627BCu;
    // 7F0627BC: lfs     f1, 4844(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0627BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4844);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0627C0:
    ctx->pc = 0x7F0627C0u;
    // 7F0627C0: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0627C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0627C4:
    ctx->pc = 0x7F0627C4u;
    // 7F0627C4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0627C4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0627C8:
    ctx->pc = 0x7F0627C8u;
    // 7F0627C8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0627C8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0627CC:
    ctx->pc = 0x7F0627CCu;
    // 7F0627CC: stfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0627CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0627D0:
    ctx->pc = 0x7F0627D0u;
    // 7F0627D0: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0627D4:
    ctx->pc = 0x7F0627D4u;
    // 7F0627D4: sth     r0, 4884(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4884);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0627D8:
    ctx->pc = 0x7F0627D8u;
    // 7F0627D8: lfs     f1, 4852(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0627D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4852);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0627DC:
    ctx->pc = 0x7F0627DCu;
    // 7F0627DC: lfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0627DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0627E0:
    ctx->pc = 0x7F0627E0u;
    // 7F0627E0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0627E0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F0627E4:
    ctx->pc = 0x7F0627E4u;
    // 7F0627E4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0627E4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0627E8:
    ctx->pc = 0x7F0627E8u;
    // 7F0627E8: stfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0627E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0627EC:
    ctx->pc = 0x7F0627ECu;
    // 7F0627EC: lwz     r0, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0627F0:
    ctx->pc = 0x7F0627F0u;
    // 7F0627F0: sth     r0, 4880(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4880);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0627F4:
    ctx->pc = 0x7F0627F4u;
    // 7F0627F4: lfs     f1, 4852(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0627F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4852);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0627F8:
    ctx->pc = 0x7F0627F8u;
    // 7F0627F8: lfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0627F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0627FC:
    ctx->pc = 0x7F0627FCu;
    // 7F0627FC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0627FCu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F062800:
    ctx->pc = 0x7F062800u;
    // 7F062800: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F062800u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F062804:
    ctx->pc = 0x7F062804u;
    // 7F062804: stfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062804u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F062808:
    ctx->pc = 0x7F062808u;
    // 7F062808: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06280C:
    ctx->pc = 0x7F06280Cu;
    // 7F06280C: sth     r0, 4888(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4888);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062810:
    ctx->pc = 0x7F062810u;
    // 7F062810: lfs     f1, 4848(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F062810u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F062814:
    ctx->pc = 0x7F062814u;
    // 7F062814: lfs     f0, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F062814u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F062818:
    ctx->pc = 0x7F062818u;
    // 7F062818: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F062818u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F06281C:
    ctx->pc = 0x7F06281Cu;
    // 7F06281C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F06281Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F062820:
    ctx->pc = 0x7F062820u;
    // 7F062820: stfd     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062820u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F062824:
    ctx->pc = 0x7F062824u;
    // 7F062824: lwz     r0, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062828:
    ctx->pc = 0x7F062828u;
    // 7F062828: sth     r0, 4894(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4894);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F06282C:
    ctx->pc = 0x7F06282Cu;
    // 7F06282C: sth     r0, 4886(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4886);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062830:
    ctx->pc = 0x7F062830u;
    // 7F062830: sth     r0, 4878(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4878);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062834:
    ctx->pc = 0x7F062834u;
    // 7F062834: sth     r0, 4870(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4870);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062838:
    ctx->pc = 0x7F062838u;
    // 7F062838: lwz     r31, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F06283C:
    ctx->pc = 0x7F06283Cu;
    // 7F06283C: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062840:
    ctx->pc = 0x7F062840u;
    // 7F062840: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F062844:
    ctx->pc = 0x7F062844u;
    // 7F062844: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_7F062848:
    ctx->pc = 0x7F062848u;
    // 7F062848: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F06284C:
    ctx->pc = 0x7F06284Cu;
    ctx->downcount -= 6;
    // 7F06284C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F062850:
    ctx->pc = 0x7F062850u;
    // 7F062850: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F062854:
    ctx->pc = 0x7F062854u;
    // 7F062854: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062858:
    ctx->pc = 0x7F062858u;
    // 7F062858: lwz     r0, 5560(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06285C:
    ctx->pc = 0x7F06285Cu;
    // 7F06285C: cmpwi   r0, 0
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

label_7F062860:
    ctx->pc = 0x7F062860u;
    // 7F062860: bc    12, 1, 0x7F062878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062878;
        }
    }

label_7F062864:
    ctx->pc = 0x7F062864u;
    ctx->downcount -= 5;
    // 7F062864: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F062868:
    ctx->pc = 0x7F062868u;
    // 7F062868: lwz     r5, 13880(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13880);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F06286C:
    ctx->pc = 0x7F06286Cu;
    // 7F06286C: lha     r4, 364(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(364);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062870:
    ctx->pc = 0x7F062870u;
    // 7F062870: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F062874:
    ctx->pc = 0x7F062874u;
    // 7F062874: sth     r0, 364(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(364);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062878:
    ctx->pc = 0x7F062878u;
    ctx->downcount -= 3;
    // 7F062878: lwz     r0, 5560(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06287C:
    ctx->pc = 0x7F06287Cu;
    // 7F06287C: cmpwi   r0, 0
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

label_7F062880:
    ctx->pc = 0x7F062880u;
    // 7F062880: bc    4, 1, 0x7F062890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062890;
        }
    }

label_7F062884:
    ctx->pc = 0x7F062884u;
    ctx->downcount -= 3;
    // 7F062884: lwz     r0, 5572(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5572);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062888:
    ctx->pc = 0x7F062888u;
    // 7F062888: cmpwi   r0, 0
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

label_7F06288C:
    ctx->pc = 0x7F06288Cu;
    // 7F06288C: bc    12, 1, 0x7F06289C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F06289C;
        }
    }

label_7F062890:
    ctx->pc = 0x7F062890u;
    ctx->downcount -= 3;
    // 7F062890: lwz     r3, 5416(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5416);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F062894:
    ctx->pc = 0x7F062894u;
    // 7F062894: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F062898:
    ctx->pc = 0x7F062898u;
    // 7F062898: bl      0x7F3C7728
    {
            ctx->lr = 0x7F06289Cu;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F06289C:
    ctx->pc = 0x7F06289Cu;
    ctx->downcount -= 5;
    // 7F06289C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0628A0:
    ctx->pc = 0x7F0628A0u;
    // 7F0628A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0628A4:
    ctx->pc = 0x7F0628A4u;
    // 7F0628A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0628A8:
    ctx->pc = 0x7F0628A8u;
    // 7F0628A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0628AC:
    ctx->pc = 0x7F0628ACu;
    ctx->downcount -= 18;
    // 7F0628AC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0628B0:
    ctx->pc = 0x7F0628B0u;
    // 7F0628B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0628B4:
    ctx->pc = 0x7F0628B4u;
    // 7F0628B4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0628B8:
    ctx->pc = 0x7F0628B8u;
    // 7F0628B8: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0628BC:
    ctx->pc = 0x7F0628BCu;
    // 7F0628BC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0628C0:
    ctx->pc = 0x7F0628C0u;
    // 7F0628C0: lwz     r3, 4816(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4816);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0628C4:
    ctx->pc = 0x7F0628C4u;
    // 7F0628C4: cmpwi   r3, 0
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

label_7F0628C8:
    ctx->pc = 0x7F0628C8u;
    // 7F0628C8: bc    12, 2, 0x7F0628D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0628D4;
        }
    }

label_7F0628CC:
    ctx->pc = 0x7F0628CCu;
    ctx->downcount -= 2;
    // 7F0628CC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F0628D0:
    ctx->pc = 0x7F0628D0u;
    // 7F0628D0: stw     r0, 4816(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4816);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0628D4:
    ctx->pc = 0x7F0628D4u;
    ctx->downcount -= 9;
    // 7F0628D4: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F0628D8:
    ctx->pc = 0x7F0628D8u;
    // 7F0628D8: addi    r3, r3, 32304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32304);

label_7F0628DC:
    ctx->pc = 0x7F0628DCu;
    // 7F0628DC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0628E0:
    ctx->pc = 0x7F0628E0u;
    // 7F0628E0: rlwinm r0, r3, 30, 0, 1
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 30u) & 0xC0000000u;
    }

label_7F0628E4:
    ctx->pc = 0x7F0628E4u;
    // 7F0628E4: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F0628E8:
    ctx->pc = 0x7F0628E8u;
    // 7F0628E8: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0628EC:
    ctx->pc = 0x7F0628ECu;
    // 7F0628EC: rlwinm r0, r0, 2, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFFu;
    }

label_7F0628F0:
    ctx->pc = 0x7F0628F0u;
    // 7F0628F0: add.   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0628F4:
    ctx->pc = 0x7F0628F4u;
    // 7F0628F4: bc    4, 2, 0x7F062904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062904;
        }
    }

label_7F0628F8:
    ctx->pc = 0x7F0628F8u;
    ctx->downcount -= 3;
    // 7F0628F8: lwz     r3, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0628FC:
    ctx->pc = 0x7F0628FCu;
    // 7F0628FC: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F062900:
    ctx->pc = 0x7F062900u;
    // 7F062900: bl      0x7F0688AC
    {
            ctx->lr = 0x7F062904u;
            ctx->pc = 0x7F0688ACu;
            return;
    }

label_7F062904:
    ctx->pc = 0x7F062904u;
    ctx->downcount -= 3;
    // 7F062904: lwz     r0, 5164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062908:
    ctx->pc = 0x7F062908u;
    // 7F062908: cmpwi   r0, 2
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

label_7F06290C:
    ctx->pc = 0x7F06290Cu;
    // 7F06290C: bc    12, 2, 0x7F062A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062A30;
        }
    }

label_7F062910:
    ctx->pc = 0x7F062910u;
    ctx->downcount -= 3;
    // 7F062910: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F062914:
    ctx->pc = 0x7F062914u;
    // 7F062914: addi    r31, r30, 64
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(64);

label_7F062918:
    ctx->pc = 0x7F062918u;
    // 7F062918: bl      0x7F063F58
    {
            ctx->lr = 0x7F06291Cu;
            goto label_7F063F58;
    }

label_7F06291C:
    ctx->pc = 0x7F06291Cu;
    ctx->downcount -= 2;
    // 7F06291C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062920:
    ctx->pc = 0x7F062920u;
    // 7F062920: bl      0x7F0621F0
    {
            ctx->lr = 0x7F062924u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0621F0u;
                return;
            }
            goto label_7F0621F0;
    }

label_7F062924:
    ctx->pc = 0x7F062924u;
    ctx->downcount -= 3;
    // 7F062924: lwz     r0, 5236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062928:
    ctx->pc = 0x7F062928u;
    // 7F062928: cmpwi   r0, 0
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

label_7F06292C:
    ctx->pc = 0x7F06292Cu;
    // 7F06292C: bc    4, 2, 0x7F062A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062A30;
        }
    }

label_7F062930:
    ctx->pc = 0x7F062930u;
    ctx->downcount -= 2;
    // 7F062930: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F062934:
    ctx->pc = 0x7F062934u;
    // 7F062934: bl      0x7F04291C
    {
            ctx->lr = 0x7F062938u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F062938:
    ctx->pc = 0x7F062938u;
    ctx->downcount -= 2;
    // 7F062938: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F06293C:
    ctx->pc = 0x7F06293Cu;
    // 7F06293C: bl      0x7F023170
    {
            ctx->lr = 0x7F062940u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F062940:
    ctx->pc = 0x7F062940u;
    ctx->downcount -= 2;
    // 7F062940: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F062944:
    ctx->pc = 0x7F062944u;
    // 7F062944: bl      0x7F0429C4
    {
            ctx->lr = 0x7F062948u;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F062948:
    ctx->pc = 0x7F062948u;
    ctx->downcount -= 3;
    // 7F062948: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F06294C:
    ctx->pc = 0x7F06294Cu;
    // 7F06294C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F062950:
    ctx->pc = 0x7F062950u;
    // 7F062950: b       0x7F0629C4
    {
            goto label_7F0629C4;
    }

label_7F062954:
    ctx->downcount -= 5;
    // 7F062954: addi    r10, r3, 444
    ctx->gpr[10] = ctx->gpr[3] + (u32)(s32)(444);

label_7F062958:
    // 7F062958: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F06295C:
    // 7F06295C: add   r10, r4, r10
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[10];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_7F062960:
    // 7F062960: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F062964:
    // 7F062964: b       0x7F0629AC
    {
            goto label_7F0629AC;
    }

label_7F062968:
    ctx->downcount -= 8;
    // 7F062968: addi    r11, r3, 444
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(444);

label_7F06296C:
    ctx->pc = 0x7F06296Cu;
    // 7F06296C: lwz     r4, 216(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062970:
    // 7F062970: add   r11, r6, r11
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[11];
        u32 res = a + b;
        ctx->gpr[11] = res;
    }

label_7F062974:
    ctx->pc = 0x7F062974u;
    // 7F062974: lwz     r6, 216(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(216);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F062978:
    ctx->pc = 0x7F062978u;
    // 7F062978: lwz     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06297C:
    ctx->pc = 0x7F06297Cu;
    // 7F06297C: lwz     r4, 60(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062980:
    // 7F062980: cmpw    r4, r0
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

label_7F062984:
    // 7F062984: bc    4, 2, 0x7F0629A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0629A8;
        }
    }

label_7F062988:
    ctx->downcount -= 4;
    // 7F062988: addi    r7, r10, -4
    ctx->gpr[7] = ctx->gpr[10] + (u32)(s32)(-4);

label_7F06298C:
    // 7F06298C: addi    r6, r11, -4
    ctx->gpr[6] = ctx->gpr[11] + (u32)(s32)(-4);

label_7F062990:
    ctx->pc = 0x7F062990u;
    // 7F062990: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_7F062994:
    loop_7F062994(ctx);
    if (ctx->pc == 0x7F0629A8u) goto label_7F0629A8;
    return;
label_7F062998:
    ctx->pc = 0x7F062998u;
    // 7F062998: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

label_7F06299C:
    ctx->pc = 0x7F06299Cu;
    // 7F06299C: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0629A0:
    ctx->pc = 0x7F0629A0u;
    // 7F0629A0: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

label_7F0629A4:
    // 7F0629A4: bc    16, 0, 0x7F062994
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F062994u;
                return;
            }
            goto label_7F062994;
        }
    }

label_7F0629A8:
    ctx->downcount -= 1;
    // 7F0629A8: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_7F0629AC:
    ctx->pc = 0x7F0629ACu;
    ctx->downcount -= 4;
    // 7F0629AC: lwz     r6, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0629B0:
    ctx->pc = 0x7F0629B0u;
    // 7F0629B0: lha     r0, 92(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0629B4:
    // 7F0629B4: cmpw    r9, r0
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

label_7F0629B8:
    // 7F0629B8: bc    12, 0, 0x7F062968
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F062968u;
                return;
            }
            goto label_7F062968;
        }
    }

label_7F0629BC:
    ctx->downcount -= 2;
    // 7F0629BC: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F0629C0:
    // 7F0629C0: addi    r3, r3, 324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(324);

label_7F0629C4:
    ctx->pc = 0x7F0629C4u;
    ctx->downcount -= 4;
    // 7F0629C4: lwz     r4, 3936(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0629C8:
    ctx->pc = 0x7F0629C8u;
    // 7F0629C8: lha     r0, 92(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0629CC:
    // 7F0629CC: cmpw    r8, r0
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

label_7F0629D0:
    // 7F0629D0: bc    12, 0, 0x7F062954
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F062954u;
                return;
            }
            goto label_7F062954;
        }
    }

label_7F0629D4:
    ctx->pc = 0x7F0629D4u;
    ctx->downcount -= 2;
    // 7F0629D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0629D8:
    ctx->pc = 0x7F0629D8u;
    // 7F0629D8: bl      0x7F0639CC
    {
            ctx->lr = 0x7F0629DCu;
            goto label_7F0639CC;
    }

label_7F0629DC:
    ctx->pc = 0x7F0629DCu;
    ctx->downcount -= 2;
    // 7F0629DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0629E0:
    ctx->pc = 0x7F0629E0u;
    // 7F0629E0: bl      0x7F06329C
    {
            ctx->lr = 0x7F0629E4u;
            goto label_7F06329C;
    }

label_7F0629E4:
    ctx->pc = 0x7F0629E4u;
    ctx->downcount -= 4;
    // 7F0629E4: lwz     r4, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0629E8:
    ctx->pc = 0x7F0629E8u;
    // 7F0629E8: addi    r3, r30, 3892
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(3892);

label_7F0629EC:
    ctx->pc = 0x7F0629ECu;
    // 7F0629EC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0629F0:
    ctx->pc = 0x7F0629F0u;
    // 7F0629F0: bl      0x7F03F67C
    {
            ctx->lr = 0x7F0629F4u;
            ctx->pc = 0x7F03F67Cu;
            return;
    }

label_7F0629F4:
    ctx->pc = 0x7F0629F4u;
    ctx->downcount -= 5;
    // 7F0629F4: lwz     r5, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0629F8:
    ctx->pc = 0x7F0629F8u;
    // 7F0629F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0629FC:
    ctx->pc = 0x7F0629FCu;
    // 7F0629FC: addi    r4, r30, 508
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(508);

label_7F062A00:
    ctx->pc = 0x7F062A00u;
    // 7F062A00: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F062A04:
    ctx->pc = 0x7F062A04u;
    // 7F062A04: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F062A08u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F062A08:
    ctx->pc = 0x7F062A08u;
    ctx->downcount -= 5;
    // 7F062A08: lwz     r5, 680(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(680);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F062A0C:
    ctx->pc = 0x7F062A0Cu;
    // 7F062A0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062A10:
    ctx->pc = 0x7F062A10u;
    // 7F062A10: addi    r4, r30, 724
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(724);

label_7F062A14:
    ctx->pc = 0x7F062A14u;
    // 7F062A14: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F062A18:
    ctx->pc = 0x7F062A18u;
    // 7F062A18: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F062A1Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F062A1C:
    ctx->pc = 0x7F062A1Cu;
    ctx->downcount -= 5;
    // 7F062A1C: lwz     r5, 3936(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3936);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F062A20:
    ctx->pc = 0x7F062A20u;
    // 7F062A20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062A24:
    ctx->pc = 0x7F062A24u;
    // 7F062A24: addi    r4, r30, 3980
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(3980);

label_7F062A28:
    ctx->pc = 0x7F062A28u;
    // 7F062A28: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F062A2C:
    ctx->pc = 0x7F062A2Cu;
    // 7F062A2C: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F062A30u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F062A30:
    ctx->pc = 0x7F062A30u;
    ctx->downcount -= 16;
    // 7F062A30: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F062A34:
    ctx->pc = 0x7F062A34u;
    // 7F062A34: lwz     r4, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062A38:
    ctx->pc = 0x7F062A38u;
    // 7F062A38: lwz     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062A3C:
    ctx->pc = 0x7F062A3Cu;
    // 7F062A3C: addi    r5, r3, 27868
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(27868);

label_7F062A40:
    ctx->pc = 0x7F062A40u;
    // 7F062A40: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F062A44:
    ctx->pc = 0x7F062A44u;
    // 7F062A44: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F062A48:
    ctx->pc = 0x7F062A48u;
    // 7F062A48: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F062A4C:
    ctx->pc = 0x7F062A4Cu;
    // 7F062A4C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F062A50:
    ctx->pc = 0x7F062A50u;
    // 7F062A50: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062A54:
    ctx->pc = 0x7F062A54u;
    // 7F062A54: lwz     r4, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062A58:
    ctx->pc = 0x7F062A58u;
    // 7F062A58: lwz     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062A5C:
    ctx->pc = 0x7F062A5Cu;
    // 7F062A5C: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F062A60:
    ctx->pc = 0x7F062A60u;
    // 7F062A60: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062A64:
    ctx->pc = 0x7F062A64u;
    // 7F062A64: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062A68:
    ctx->pc = 0x7F062A68u;
    // 7F062A68: cmpwi   r0, 0
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

label_7F062A6C:
    ctx->pc = 0x7F062A6Cu;
    // 7F062A6C: bc    4, 1, 0x7F062B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062B40;
        }
    }

label_7F062A70:
    ctx->pc = 0x7F062A70u;
    ctx->downcount -= 4;
    // 7F062A70: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F062A74:
    ctx->pc = 0x7F062A74u;
    // 7F062A74: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062A78:
    ctx->pc = 0x7F062A78u;
    // 7F062A78: cmpwi   r0, 0
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

label_7F062A7C:
    ctx->pc = 0x7F062A7Cu;
    // 7F062A7C: bc    4, 2, 0x7F062B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062B40;
        }
    }

label_7F062A80:
    ctx->pc = 0x7F062A80u;
    ctx->downcount -= 3;
    // 7F062A80: lwz     r0, 5236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062A84:
    ctx->pc = 0x7F062A84u;
    // 7F062A84: cmpwi   r0, 1
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

label_7F062A88:
    ctx->pc = 0x7F062A88u;
    // 7F062A88: bc    4, 2, 0x7F062A94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062A94;
        }
    }

label_7F062A8C:
    ctx->pc = 0x7F062A8Cu;
    ctx->downcount -= 2;
    // 7F062A8C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F062A90:
    ctx->pc = 0x7F062A90u;
    // 7F062A90: stw     r0, 5236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062A94:
    ctx->pc = 0x7F062A94u;
    ctx->downcount -= 3;
    // 7F062A94: lwz     r0, 5236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062A98:
    ctx->pc = 0x7F062A98u;
    // 7F062A98: cmpwi   r0, 2
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

label_7F062A9C:
    ctx->pc = 0x7F062A9Cu;
    // 7F062A9C: bc    4, 2, 0x7F062B08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062B08;
        }
    }

label_7F062AA0:
    ctx->pc = 0x7F062AA0u;
    ctx->downcount -= 2;
    // 7F062AA0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062AA4:
    ctx->pc = 0x7F062AA4u;
    // 7F062AA4: bl      0x7F0630AC
    {
            ctx->lr = 0x7F062AA8u;
            goto label_7F0630AC;
    }

label_7F062AA8:
    ctx->pc = 0x7F062AA8u;
    ctx->downcount -= 7;
    // 7F062AA8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F062AAC:
    ctx->pc = 0x7F062AACu;
    // 7F062AAC: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F062AB0:
    ctx->pc = 0x7F062AB0u;
    // 7F062AB0: stw     r3, 5236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5236);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F062AB4:
    ctx->pc = 0x7F062AB4u;
    // 7F062AB4: stw     r0, 5424(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062AB8:
    ctx->pc = 0x7F062AB8u;
    // 7F062AB8: lwz     r0, 6348(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(6348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062ABC:
    ctx->pc = 0x7F062ABCu;
    // 7F062ABC: cmpwi   r0, 0
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

label_7F062AC0:
    ctx->pc = 0x7F062AC0u;
    // 7F062AC0: bc    4, 2, 0x7F062B08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062B08;
        }
    }

label_7F062AC4:
    ctx->pc = 0x7F062AC4u;
    ctx->downcount -= 3;
    // 7F062AC4: lis     r3, 7
    ctx->gpr[3] = ((u32)(s32)(7) << 16);

label_7F062AC8:
    ctx->pc = 0x7F062AC8u;
    // 7F062AC8: addi    r3, r3, 831
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(831);

label_7F062ACC:
    ctx->pc = 0x7F062ACCu;
    // 7F062ACC: bl      0x7F0180A0
    {
            ctx->lr = 0x7F062AD0u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F062AD0:
    ctx->pc = 0x7F062AD0u;
    ctx->downcount -= 2;
    // 7F062AD0: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F062AD4:
    ctx->pc = 0x7F062AD4u;
    // 7F062AD4: bl      0x7F02090C
    {
            ctx->lr = 0x7F062AD8u;
            ctx->pc = 0x7F02090Cu;
            return;
    }

label_7F062AD8:
    ctx->pc = 0x7F062AD8u;
    ctx->downcount -= 12;
    // 7F062AD8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F062ADC:
    ctx->pc = 0x7F062ADCu;
    // 7F062ADC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F062AE0:
    ctx->pc = 0x7F062AE0u;
    // 7F062AE0: addi    r0, r4, 12832
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F062AE4:
    ctx->pc = 0x7F062AE4u;
    // 7F062AE4: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_7F062AE8:
    ctx->pc = 0x7F062AE8u;
    // 7F062AE8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062AEC:
    ctx->pc = 0x7F062AECu;
    // 7F062AEC: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F062AF0:
    ctx->pc = 0x7F062AF0u;
    // 7F062AF0: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F062AF4:
    ctx->pc = 0x7F062AF4u;
    // 7F062AF4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F062AF8:
    ctx->pc = 0x7F062AF8u;
    // 7F062AF8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F062AFC:
    ctx->pc = 0x7F062AFCu;
    // 7F062AFC: li      r9, 20
    ctx->gpr[9] = (u32)(s32)(20);

label_7F062B00:
    ctx->pc = 0x7F062B00u;
    // 7F062B00: li      r10, -1
    ctx->gpr[10] = (u32)(s32)(-1);

label_7F062B04:
    ctx->pc = 0x7F062B04u;
    // 7F062B04: bl      0x7F1F3158
    {
            ctx->lr = 0x7F062B08u;
            ctx->pc = 0x7F1F3158u;
            return;
    }

label_7F062B08:
    ctx->pc = 0x7F062B08u;
    ctx->downcount -= 3;
    // 7F062B08: lwz     r0, 5236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062B0C:
    ctx->pc = 0x7F062B0Cu;
    // 7F062B0C: cmpwi   r0, 3
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

label_7F062B10:
    ctx->pc = 0x7F062B10u;
    // 7F062B10: bc    4, 2, 0x7F062B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062B40;
        }
    }

label_7F062B14:
    ctx->pc = 0x7F062B14u;
    ctx->downcount -= 5;
    // 7F062B14: lwz     r3, 5424(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F062B18:
    ctx->pc = 0x7F062B18u;
    // 7F062B18: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F062B1C:
    ctx->pc = 0x7F062B1Cu;
    // 7F062B1C: cmpwi   r3, 0
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

label_7F062B20:
    ctx->pc = 0x7F062B20u;
    // 7F062B20: stw     r0, 5424(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5424);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062B24:
    ctx->pc = 0x7F062B24u;
    // 7F062B24: bc    4, 0, 0x7F062B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062B40;
        }
    }

label_7F062B28:
    ctx->pc = 0x7F062B28u;
    ctx->downcount -= 6;
    // 7F062B28: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F062B2C:
    ctx->pc = 0x7F062B2Cu;
    // 7F062B2C: lwz     r0, 5236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(5236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062B30:
    ctx->pc = 0x7F062B30u;
    // 7F062B30: addi    r4, r3, 27864
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(27864);

label_7F062B34:
    ctx->pc = 0x7F062B34u;
    // 7F062B34: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062B38:
    ctx->pc = 0x7F062B38u;
    // 7F062B38: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062B3C:
    ctx->pc = 0x7F062B3Cu;
    // 7F062B3C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F062B40u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F062B40:
    ctx->pc = 0x7F062B40u;
    ctx->downcount -= 2;
    // 7F062B40: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062B44:
    ctx->pc = 0x7F062B44u;
    // 7F062B44: bl      0x7F0624F0
    {
            ctx->lr = 0x7F062B48u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0624F0u;
                return;
            }
            goto label_7F0624F0;
    }

label_7F062B48:
    ctx->pc = 0x7F062B48u;
    ctx->downcount -= 2;
    // 7F062B48: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062B4C:
    ctx->pc = 0x7F062B4Cu;
    // 7F062B4C: bl      0x7F0624F4
    {
            ctx->lr = 0x7F062B50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0624F4u;
                return;
            }
            goto label_7F0624F4;
    }

label_7F062B50:
    ctx->pc = 0x7F062B50u;
    ctx->downcount -= 4;
    // 7F062B50: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F062B54:
    ctx->pc = 0x7F062B54u;
    // 7F062B54: addi    r3, r30, 64
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(64);

label_7F062B58:
    ctx->pc = 0x7F062B58u;
    // 7F062B58: addi    r4, r4, -5872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5872);

label_7F062B5C:
    ctx->pc = 0x7F062B5Cu;
    // 7F062B5C: bl      0x7F062494
    {
            ctx->lr = 0x7F062B60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F062494u;
                return;
            }
            goto label_7F062494;
    }

label_7F062B60:
    ctx->pc = 0x7F062B60u;
    ctx->downcount -= 3;
    // 7F062B60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F062B64:
    ctx->pc = 0x7F062B64u;
    // 7F062B64: lha     r3, 98(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(98);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062B68:
    ctx->pc = 0x7F062B68u;
    // 7F062B68: bl      0x7F3CC924
    {
            ctx->lr = 0x7F062B6Cu;
            ctx->pc = 0x7F3CC924u;
            return;
    }

label_7F062B6C:
    ctx->pc = 0x7F062B6Cu;
    ctx->downcount -= 2;
    // 7F062B6C: cmpwi   r3, 1024
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

label_7F062B70:
    ctx->pc = 0x7F062B70u;
    // 7F062B70: bc    4, 0, 0x7F062B84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062B84;
        }
    }

label_7F062B74:
    ctx->pc = 0x7F062B74u;
    ctx->downcount -= 3;
    // 7F062B74: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062B78:
    ctx->pc = 0x7F062B78u;
    // 7F062B78: li      r4, 3568
    ctx->gpr[4] = (u32)(s32)(3568);

label_7F062B7C:
    ctx->pc = 0x7F062B7Cu;
    // 7F062B7C: bl      0x7F0624EC
    {
            ctx->lr = 0x7F062B80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0624ECu;
                return;
            }
            goto label_7F0624EC;
    }

label_7F062B80:
    ctx->pc = 0x7F062B80u;
    ctx->downcount -= 1;
    // 7F062B80: b       0x7F062B90
    {
            goto label_7F062B90;
    }

label_7F062B84:
    ctx->pc = 0x7F062B84u;
    ctx->downcount -= 3;
    // 7F062B84: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062B88:
    ctx->pc = 0x7F062B88u;
    // 7F062B88: li      r4, 3504
    ctx->gpr[4] = (u32)(s32)(3504);

label_7F062B8C:
    ctx->pc = 0x7F062B8Cu;
    // 7F062B8C: bl      0x7F0624EC
    {
            ctx->lr = 0x7F062B90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0624ECu;
                return;
            }
            goto label_7F0624EC;
    }

label_7F062B90:
    ctx->pc = 0x7F062B90u;
    ctx->downcount -= 16;
    // 7F062B90: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F062B94:
    ctx->pc = 0x7F062B94u;
    // 7F062B94: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062B98:
    ctx->pc = 0x7F062B98u;
    // 7F062B98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F062B9C:
    ctx->pc = 0x7F062B9Cu;
    // 7F062B9C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F062BA0:
    ctx->pc = 0x7F062BA0u;
    // 7F062BA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F062BA4:
    ctx->pc = 0x7F062BA4u;
    ctx->downcount -= 17;
    // 7F062BA4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F062BA8:
    ctx->pc = 0x7F062BA8u;
    // 7F062BA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F062BAC:
    ctx->pc = 0x7F062BACu;
    // 7F062BAC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F062BB0:
    ctx->pc = 0x7F062BB0u;
    // 7F062BB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062BB4:
    ctx->pc = 0x7F062BB4u;
    // 7F062BB4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F062BB8:
    ctx->pc = 0x7F062BB8u;
    // 7F062BB8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F062BBC:
    ctx->pc = 0x7F062BBCu;
    // 7F062BBC: bl      0x7F022FB4
    {
            ctx->lr = 0x7F062BC0u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F062BC0:
    ctx->pc = 0x7F062BC0u;
    ctx->downcount -= 2;
    // 7F062BC0: or.   r31, r3, r3
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

label_7F062BC4:
    ctx->pc = 0x7F062BC4u;
    // 7F062BC4: bc    12, 0, 0x7F062C48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062C48;
        }
    }

label_7F062BC8:
    ctx->pc = 0x7F062BC8u;
    ctx->downcount -= 12;
    // 7F062BC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F062BCC:
    ctx->pc = 0x7F062BCCu;
    // 7F062BCC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F062BD0:
    ctx->pc = 0x7F062BD0u;
    // 7F062BD0: addi    r5, r3, -9012
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-9012);

label_7F062BD4:
    ctx->pc = 0x7F062BD4u;
    // 7F062BD4: lfs     f0, -9008(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F062BD4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F062BD8:
    ctx->pc = 0x7F062BD8u;
    // 7F062BD8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F062BD8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F062BDC:
    ctx->pc = 0x7F062BDCu;
    // 7F062BDC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062BE0:
    ctx->pc = 0x7F062BE0u;
    // 7F062BE0: li      r4, 1200
    ctx->gpr[4] = (u32)(s32)(1200);

label_7F062BE4:
    ctx->pc = 0x7F062BE4u;
    // 7F062BE4: li      r5, 450
    ctx->gpr[5] = (u32)(s32)(450);

label_7F062BE8:
    ctx->pc = 0x7F062BE8u;
    // 7F062BE8: stfs     f1, 56(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F062BE8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F062BEC:
    ctx->pc = 0x7F062BECu;
    // 7F062BEC: li      r6, 500
    ctx->gpr[6] = (u32)(s32)(500);

label_7F062BF0:
    ctx->pc = 0x7F062BF0u;
    // 7F062BF0: stfs     f0, 52(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F062BF0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F062BF4:
    ctx->pc = 0x7F062BF4u;
    // 7F062BF4: bl      0x7F023F7C
    {
            ctx->lr = 0x7F062BF8u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F062BF8:
    ctx->pc = 0x7F062BF8u;
    ctx->downcount -= 2;
    // 7F062BF8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062BFC:
    ctx->pc = 0x7F062BFCu;
    // 7F062BFC: bl      0x7F023FEC
    {
            ctx->lr = 0x7F062C00u;
            ctx->pc = 0x7F023FECu;
            return;
    }

label_7F062C00:
    ctx->pc = 0x7F062C00u;
    ctx->downcount -= 2;
    // 7F062C00: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062C04:
    ctx->pc = 0x7F062C04u;
    // 7F062C04: bl      0x7F024034
    {
            ctx->lr = 0x7F062C08u;
            ctx->pc = 0x7F024034u;
            return;
    }

label_7F062C08:
    ctx->pc = 0x7F062C08u;
    ctx->downcount -= 2;
    // 7F062C08: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062C0C:
    ctx->pc = 0x7F062C0Cu;
    // 7F062C0C: bl      0x7F023FDC
    {
            ctx->lr = 0x7F062C10u;
            ctx->pc = 0x7F023FDCu;
            return;
    }

label_7F062C10:
    ctx->pc = 0x7F062C10u;
    ctx->downcount -= 2;
    // 7F062C10: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062C14:
    ctx->pc = 0x7F062C14u;
    // 7F062C14: bl      0x7F023FCC
    {
            ctx->lr = 0x7F062C18u;
            ctx->pc = 0x7F023FCCu;
            return;
    }

label_7F062C18:
    ctx->pc = 0x7F062C18u;
    ctx->downcount -= 12;
    // 7F062C18: lwz     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062C1C:
    ctx->pc = 0x7F062C1Cu;
    // 7F062C1C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062C20:
    ctx->pc = 0x7F062C20u;
    // 7F062C20: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F062C24:
    ctx->pc = 0x7F062C24u;
    // 7F062C24: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F062C28:
    ctx->pc = 0x7F062C28u;
    // 7F062C28: stw     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062C2C:
    ctx->pc = 0x7F062C2Cu;
    // 7F062C2C: lhz     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F062C30:
    ctx->pc = 0x7F062C30u;
    // 7F062C30: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F062C34:
    ctx->pc = 0x7F062C34u;
    // 7F062C34: sth     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062C38:
    ctx->pc = 0x7F062C38u;
    // 7F062C38: lwz     r0, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062C3C:
    ctx->pc = 0x7F062C3Cu;
    // 7F062C3C: oris    r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | (0x0200u << 16);

label_7F062C40:
    ctx->pc = 0x7F062C40u;
    // 7F062C40: stw     r0, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062C44:
    ctx->pc = 0x7F062C44u;
    // 7F062C44: bl      0x7F024060
    {
            ctx->lr = 0x7F062C48u;
            ctx->pc = 0x7F024060u;
            return;
    }

label_7F062C48:
    ctx->pc = 0x7F062C48u;
    ctx->downcount -= 17;
    // 7F062C48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062C4C:
    ctx->pc = 0x7F062C4Cu;
    // 7F062C4C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F062C50:
    ctx->pc = 0x7F062C50u;
    // 7F062C50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062C54:
    ctx->pc = 0x7F062C54u;
    // 7F062C54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F062C58:
    ctx->pc = 0x7F062C58u;
    // 7F062C58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F062C5C:
    ctx->pc = 0x7F062C5Cu;
    // 7F062C5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F062C60:
    ctx->pc = 0x7F062C60u;
    ctx->downcount -= 20;
    // 7F062C60: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F062C64:
    ctx->pc = 0x7F062C64u;
    // 7F062C64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F062C68:
    ctx->pc = 0x7F062C68u;
    // 7F062C68: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062C6C:
    ctx->pc = 0x7F062C6Cu;
    // 7F062C6C: stmw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F062C70:
    ctx->pc = 0x7F062C70u;
    // 7F062C70: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F062C74:
    ctx->pc = 0x7F062C74u;
    // 7F062C74: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F062C78:
    ctx->pc = 0x7F062C78u;
    // 7F062C78: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F062C7C:
    ctx->pc = 0x7F062C7Cu;
    // 7F062C7C: stw     r30, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F062C80:
    ctx->pc = 0x7F062C80u;
    // 7F062C80: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F062C84:
    ctx->pc = 0x7F062C84u;
    // 7F062C84: bl      0x7F063F58
    {
            ctx->lr = 0x7F062C88u;
            goto label_7F063F58;
    }

label_7F062C88:
    ctx->pc = 0x7F062C88u;
    ctx->downcount -= 6;
    // 7F062C88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F062C8C:
    ctx->pc = 0x7F062C8Cu;
    // 7F062C8C: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F062C90:
    ctx->pc = 0x7F062C90u;
    // 7F062C90: stw     r0, 4836(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062C94:
    ctx->pc = 0x7F062C94u;
    // 7F062C94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F062C98:
    ctx->pc = 0x7F062C98u;
    // 7F062C98: stw     r0, 4816(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4816);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062C9C:
    ctx->pc = 0x7F062C9Cu;
    // 7F062C9C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F062CA0u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F062CA0:
    ctx->pc = 0x7F062CA0u;
    ctx->downcount -= 3;
    // 7F062CA0: stw     r3, 6348(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(6348);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F062CA4:
    ctx->pc = 0x7F062CA4u;
    // 7F062CA4: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F062CA8:
    ctx->pc = 0x7F062CA8u;
    // 7F062CA8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F062CACu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F062CAC:
    ctx->pc = 0x7F062CACu;
    ctx->downcount -= 2;
    // 7F062CAC: cmplwi  r3, 0x0000
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

label_7F062CB0:
    ctx->pc = 0x7F062CB0u;
    // 7F062CB0: bc    12, 2, 0x7F062CC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062CC0;
        }
    }

label_7F062CB4:
    ctx->pc = 0x7F062CB4u;
    ctx->downcount -= 1;
    // 7F062CB4: bl      0x7F3C674C
    {
            ctx->lr = 0x7F062CB8u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F062CB8:
    ctx->pc = 0x7F062CB8u;
    ctx->downcount -= 2;
    // 7F062CB8: stw     r3, 5164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F062CBC:
    ctx->pc = 0x7F062CBCu;
    // 7F062CBC: b       0x7F062CC8
    {
            goto label_7F062CC8;
    }

label_7F062CC0:
    ctx->pc = 0x7F062CC0u;
    ctx->downcount -= 2;
    // 7F062CC0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F062CC4:
    ctx->pc = 0x7F062CC4u;
    // 7F062CC4: stw     r0, 5164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062CC8:
    ctx->pc = 0x7F062CC8u;
    ctx->downcount -= 3;
    // 7F062CC8: lwz     r0, 5164(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062CCC:
    ctx->pc = 0x7F062CCCu;
    // 7F062CCC: cmpwi   r0, 2
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

label_7F062CD0:
    ctx->pc = 0x7F062CD0u;
    // 7F062CD0: bc    12, 2, 0x7F063080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F063080;
        }
    }

label_7F062CD4:
    ctx->pc = 0x7F062CD4u;
    ctx->downcount -= 6;
    // 7F062CD4: addi    r31, r29, 64
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(64);

label_7F062CD8:
    ctx->pc = 0x7F062CD8u;
    // 7F062CD8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F062CDC:
    ctx->pc = 0x7F062CDCu;
    // 7F062CDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062CE0:
    ctx->pc = 0x7F062CE0u;
    // 7F062CE0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062CE4:
    ctx->pc = 0x7F062CE4u;
    // 7F062CE4: addi    r30, r29, 464
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(464);

label_7F062CE8:
    ctx->pc = 0x7F062CE8u;
    // 7F062CE8: bl      0x7F062BA4
    {
            ctx->lr = 0x7F062CECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F062BA4u;
                return;
            }
            goto label_7F062BA4;
    }

label_7F062CEC:
    ctx->pc = 0x7F062CECu;
    ctx->downcount -= 2;
    // 7F062CEC: cmpwi   r3, 0
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

label_7F062CF0:
    ctx->pc = 0x7F062CF0u;
    // 7F062CF0: bc    4, 0, 0x7F062CFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F062CFC;
        }
    }

label_7F062CF4:
    ctx->pc = 0x7F062CF4u;
    ctx->downcount -= 2;
    // 7F062CF4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F062CF8:
    ctx->pc = 0x7F062CF8u;
    // 7F062CF8: b       0x7F063098
    {
            goto label_7F063098;
    }

label_7F062CFC:
    ctx->pc = 0x7F062CFCu;
    ctx->downcount -= 3;
    // 7F062CFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062D00:
    ctx->pc = 0x7F062D00u;
    // 7F062D00: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F062D04:
    ctx->pc = 0x7F062D04u;
    // 7F062D04: bl      0x7F024060
    {
            ctx->lr = 0x7F062D08u;
            ctx->pc = 0x7F024060u;
            return;
    }

label_7F062D08:
    ctx->pc = 0x7F062D08u;
    ctx->downcount -= 5;
    // 7F062D08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062D0C:
    ctx->pc = 0x7F062D0Cu;
    // 7F062D0C: li      r4, 1200
    ctx->gpr[4] = (u32)(s32)(1200);

label_7F062D10:
    ctx->pc = 0x7F062D10u;
    // 7F062D10: li      r5, 450
    ctx->gpr[5] = (u32)(s32)(450);

label_7F062D14:
    ctx->pc = 0x7F062D14u;
    // 7F062D14: li      r6, 500
    ctx->gpr[6] = (u32)(s32)(500);

label_7F062D18:
    ctx->pc = 0x7F062D18u;
    // 7F062D18: bl      0x7F023F7C
    {
            ctx->lr = 0x7F062D1Cu;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F062D1C:
    ctx->pc = 0x7F062D1Cu;
    ctx->downcount -= 3;
    // 7F062D1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062D20:
    ctx->pc = 0x7F062D20u;
    // 7F062D20: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F062D24:
    ctx->pc = 0x7F062D24u;
    // 7F062D24: bl      0x7F0688B0
    {
            ctx->lr = 0x7F062D28u;
            ctx->pc = 0x7F0688B0u;
            return;
    }

label_7F062D28:
    ctx->pc = 0x7F062D28u;
    ctx->downcount -= 2;
    // 7F062D28: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062D2C:
    ctx->pc = 0x7F062D2Cu;
    // 7F062D2C: bl      0x7F023FEC
    {
            ctx->lr = 0x7F062D30u;
            ctx->pc = 0x7F023FECu;
            return;
    }

label_7F062D30:
    ctx->pc = 0x7F062D30u;
    ctx->downcount -= 2;
    // 7F062D30: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F062D34:
    ctx->pc = 0x7F062D34u;
    // 7F062D34: bl      0x7F3C664C
    {
            ctx->lr = 0x7F062D38u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F062D38:
    ctx->pc = 0x7F062D38u;
    ctx->downcount -= 2;
    // 7F062D38: cmplwi  r3, 0x0000
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

label_7F062D3C:
    ctx->pc = 0x7F062D3Cu;
    // 7F062D3C: bc    12, 2, 0x7F062D4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062D4C;
        }
    }

label_7F062D40:
    ctx->pc = 0x7F062D40u;
    ctx->downcount -= 1;
    // 7F062D40: bl      0x7F3C674C
    {
            ctx->lr = 0x7F062D44u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F062D44:
    ctx->pc = 0x7F062D44u;
    ctx->downcount -= 2;
    // 7F062D44: stw     r3, 4796(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4796);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F062D48:
    ctx->pc = 0x7F062D48u;
    // 7F062D48: b       0x7F062D54
    {
            goto label_7F062D54;
    }

label_7F062D4C:
    ctx->pc = 0x7F062D4Cu;
    ctx->downcount -= 2;
    // 7F062D4C: li      r0, 90
    ctx->gpr[0] = (u32)(s32)(90);

label_7F062D50:
    ctx->pc = 0x7F062D50u;
    // 7F062D50: stw     r0, 4796(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4796);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062D54:
    ctx->pc = 0x7F062D54u;
    ctx->downcount -= 5;
    // 7F062D54: lwz     r0, 4796(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4796);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062D58:
    ctx->pc = 0x7F062D58u;
    // 7F062D58: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F062D5C:
    ctx->pc = 0x7F062D5Cu;
    // 7F062D5C: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_7F062D60:
    ctx->pc = 0x7F062D60u;
    // 7F062D60: stw     r0, 5560(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5560);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062D64:
    ctx->pc = 0x7F062D64u;
    // 7F062D64: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F062D68u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F062D68:
    ctx->pc = 0x7F062D68u;
    ctx->downcount -= 7;
    // 7F062D68: stw     r3, 4800(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4800);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F062D6C:
    ctx->pc = 0x7F062D6Cu;
    // 7F062D6C: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_7F062D70:
    ctx->pc = 0x7F062D70u;
    // 7F062D70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F062D74:
    ctx->pc = 0x7F062D74u;
    // 7F062D74: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F062D78:
    ctx->pc = 0x7F062D78u;
    // 7F062D78: lwz     r5, 4800(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4800);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F062D7C:
    ctx->pc = 0x7F062D7Cu;
    // 7F062D7C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F062D80:
    ctx->pc = 0x7F062D80u;
    // 7F062D80: stw     r5, 5572(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5572);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F062D84:
    ctx->downcount -= 6;
    // 7F062D84: addi    r9, r3, -7500
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(-7500);

label_7F062D88:
    // 7F062D88: add   r8, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F062D8C:
    // 7F062D8C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F062D90:
    // 7F062D90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F062D94:
    ctx->pc = 0x7F062D94u;
    // 7F062D94: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F062D98:
    loop_7F062D98(ctx);
    if (ctx->pc == 0x7F062DB4u) goto label_7F062DB4;
    return;
label_7F062D9C:
    // 7F062D9C: add   r10, r8, r5
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_7F062DA0:
    ctx->pc = 0x7F062DA0u;
    // 7F062DA0: sth     r7, 4912(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4912);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F062DA4:
    // 7F062DA4: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F062DA8:
    // 7F062DA8: addi    r6, r6, 7000
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(7000);

label_7F062DAC:
    ctx->pc = 0x7F062DACu;
    // 7F062DAC: sth     r9, 4914(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4914);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F062DB0:
    // 7F062DB0: bc    16, 0, 0x7F062D98
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F062D98u;
                return;
            }
            goto label_7F062D98;
        }
    }

label_7F062DB4:
    ctx->downcount -= 5;
    // 7F062DB4: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

label_7F062DB8:
    // 7F062DB8: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F062DBC:
    // 7F062DBC: cmpwi   r11, 4
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F062DC0:
    // 7F062DC0: addi    r3, r3, 6000
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6000);

label_7F062DC4:
    // 7F062DC4: bc    12, 0, 0x7F062D84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F062D84u;
                return;
            }
            goto label_7F062D84;
        }
    }

label_7F062DC8:
    ctx->pc = 0x7F062DC8u;
    ctx->downcount -= 2;
    // 7F062DC8: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F062DCC:
    ctx->pc = 0x7F062DCCu;
    // 7F062DCC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F062DD0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F062DD0:
    ctx->pc = 0x7F062DD0u;
    ctx->downcount -= 2;
    // 7F062DD0: cmplwi  r3, 0x0000
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

label_7F062DD4:
    ctx->pc = 0x7F062DD4u;
    // 7F062DD4: bc    12, 2, 0x7F062DE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062DE0;
        }
    }

label_7F062DD8:
    ctx->pc = 0x7F062DD8u;
    ctx->downcount -= 2;
    // 7F062DD8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F062DDC:
    ctx->pc = 0x7F062DDCu;
    // 7F062DDC: bl      0x7F0625E4
    {
            ctx->lr = 0x7F062DE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0625E4u;
                return;
            }
            goto label_7F0625E4;
    }

label_7F062DE0:
    ctx->pc = 0x7F062DE0u;
    ctx->downcount -= 40;
    // 7F062DE0: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F062DE4:
    ctx->pc = 0x7F062DE4u;
    // 7F062DE4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F062DE8:
    ctx->pc = 0x7F062DE8u;
    // 7F062DE8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F062DEC:
    ctx->pc = 0x7F062DECu;
    // 7F062DEC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F062DF0:
    ctx->pc = 0x7F062DF0u;
    // 7F062DF0: sth     r5, 4976(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4976);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F062DF4:
    ctx->pc = 0x7F062DF4u;
    // 7F062DF4: addi    r5, r4, -9000
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9000);

label_7F062DF8:
    ctx->pc = 0x7F062DF8u;
    // 7F062DF8: addi    r4, r3, -9004
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9004);

label_7F062DFC:
    ctx->pc = 0x7F062DFCu;
    // 7F062DFC: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F062DFCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F062E00:
    ctx->pc = 0x7F062E00u;
    // 7F062E00: lwz     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F062E04:
    ctx->pc = 0x7F062E04u;
    // 7F062E04: li      r3, 113
    ctx->gpr[3] = (u32)(s32)(113);

label_7F062E08:
    ctx->pc = 0x7F062E08u;
    // 7F062E08: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F062E08u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F062E0C:
    ctx->pc = 0x7F062E0Cu;
    // 7F062E0C: sth     r5, 4978(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4978);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F062E10:
    ctx->pc = 0x7F062E10u;
    // 7F062E10: lha     r5, 4976(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4976);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062E14:
    ctx->pc = 0x7F062E14u;
    // 7F062E14: lha     r4, 4978(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4978);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062E18:
    ctx->pc = 0x7F062E18u;
    // 7F062E18: rlwinm r5, r5, 4, 0, 27
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_7F062E1C:
    ctx->pc = 0x7F062E1Cu;
    // 7F062E1C: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062E20:
    ctx->pc = 0x7F062E20u;
    // 7F062E20: add   r5, r29, r5
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F062E24:
    ctx->pc = 0x7F062E24u;
    // 7F062E24: stw     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062E28:
    ctx->pc = 0x7F062E28u;
    // 7F062E28: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F062E2C:
    ctx->pc = 0x7F062E2Cu;
    // 7F062E2C: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F062E30:
    ctx->pc = 0x7F062E30u;
    // 7F062E30: lha     r0, 4912(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4912);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062E34:
    ctx->pc = 0x7F062E34u;
    // 7F062E34: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F062E38:
    ctx->pc = 0x7F062E38u;
    // 7F062E38: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062E3C:
    ctx->pc = 0x7F062E3Cu;
    // 7F062E3C: lfd     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062E3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F062E40:
    ctx->pc = 0x7F062E40u;
    // 7F062E40: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F062E40u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F062E44:
    ctx->pc = 0x7F062E44u;
    // 7F062E44: stfs     f1, 64(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F062E44u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F062E48:
    ctx->pc = 0x7F062E48u;
    // 7F062E48: stfs     f0, 68(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F062E48u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F062E4C:
    ctx->pc = 0x7F062E4Cu;
    // 7F062E4C: lha     r4, 4976(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4976);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062E50:
    ctx->pc = 0x7F062E50u;
    // 7F062E50: lha     r0, 4978(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4978);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062E54:
    ctx->pc = 0x7F062E54u;
    // 7F062E54: rlwinm r4, r4, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F062E58:
    ctx->pc = 0x7F062E58u;
    // 7F062E58: add   r4, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F062E5C:
    ctx->pc = 0x7F062E5Cu;
    // 7F062E5C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F062E60:
    ctx->pc = 0x7F062E60u;
    // 7F062E60: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F062E64:
    ctx->pc = 0x7F062E64u;
    // 7F062E64: lha     r0, 4914(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4914);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F062E68:
    ctx->pc = 0x7F062E68u;
    // 7F062E68: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F062E6C:
    ctx->pc = 0x7F062E6Cu;
    // 7F062E6C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062E70:
    ctx->pc = 0x7F062E70u;
    // 7F062E70: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F062E70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F062E74:
    ctx->pc = 0x7F062E74u;
    // 7F062E74: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F062E74u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F062E78:
    ctx->pc = 0x7F062E78u;
    // 7F062E78: stfs     f0, 72(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F062E78u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F062E7C:
    ctx->pc = 0x7F062E7Cu;
    // 7F062E7C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F062E80u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F062E80:
    ctx->pc = 0x7F062E80u;
    ctx->downcount -= 2;
    // 7F062E80: cmplwi  r3, 0x0000
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

label_7F062E84:
    ctx->pc = 0x7F062E84u;
    // 7F062E84: bc    12, 2, 0x7F062E90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062E90;
        }
    }

label_7F062E88:
    ctx->pc = 0x7F062E88u;
    ctx->downcount -= 2;
    // 7F062E88: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F062E8C:
    ctx->pc = 0x7F062E8Cu;
    // 7F062E8C: bl      0x7F0625E4
    {
            ctx->lr = 0x7F062E90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0625E4u;
                return;
            }
            goto label_7F0625E4;
    }

label_7F062E90:
    ctx->pc = 0x7F062E90u;
    ctx->downcount -= 18;
    // 7F062E90: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062E94:
    ctx->pc = 0x7F062E94u;
    // 7F062E94: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F062E98:
    ctx->pc = 0x7F062E98u;
    // 7F062E98: sth     r0, 4992(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4992);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062E9C:
    ctx->pc = 0x7F062E9Cu;
    // 7F062E9C: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062EA0:
    ctx->pc = 0x7F062EA0u;
    // 7F062EA0: sth     r0, 4994(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4994);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F062EA4:
    ctx->pc = 0x7F062EA4u;
    // 7F062EA4: lwz     r4, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062EA8:
    ctx->pc = 0x7F062EA8u;
    // 7F062EA8: lwz     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062EAC:
    ctx->pc = 0x7F062EACu;
    // 7F062EAC: stw     r4, 4844(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4844);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F062EB0:
    ctx->pc = 0x7F062EB0u;
    // 7F062EB0: stw     r0, 4848(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062EB4:
    ctx->pc = 0x7F062EB4u;
    // 7F062EB4: lwz     r4, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062EB8:
    ctx->pc = 0x7F062EB8u;
    // 7F062EB8: lwz     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062EBC:
    ctx->pc = 0x7F062EBCu;
    // 7F062EBC: stw     r4, 4852(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4852);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F062EC0:
    ctx->pc = 0x7F062EC0u;
    // 7F062EC0: stw     r0, 4856(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062EC4:
    ctx->pc = 0x7F062EC4u;
    // 7F062EC4: lwz     r4, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062EC8:
    ctx->pc = 0x7F062EC8u;
    // 7F062EC8: lwz     r0, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F062ECC:
    ctx->pc = 0x7F062ECCu;
    // 7F062ECC: stw     r4, 4860(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4860);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F062ED0:
    ctx->pc = 0x7F062ED0u;
    // 7F062ED0: stw     r0, 4864(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4864);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F062ED4:
    ctx->pc = 0x7F062ED4u;
    // 7F062ED4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F062ED8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F062ED8:
    ctx->pc = 0x7F062ED8u;
    ctx->downcount -= 2;
    // 7F062ED8: cmplwi  r3, 0x0000
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

label_7F062EDC:
    ctx->pc = 0x7F062EDCu;
    // 7F062EDC: bc    12, 2, 0x7F062EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062EE8;
        }
    }

label_7F062EE0:
    ctx->pc = 0x7F062EE0u;
    ctx->downcount -= 1;
    // 7F062EE0: bl      0x7F3C674C
    {
            ctx->lr = 0x7F062EE4u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F062EE4:
    ctx->pc = 0x7F062EE4u;
    ctx->downcount -= 1;
    // 7F062EE4: stw     r3, 5416(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5416);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F062EE8:
    ctx->pc = 0x7F062EE8u;
    ctx->downcount -= 2;
    // 7F062EE8: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F062EEC:
    ctx->pc = 0x7F062EECu;
    // 7F062EEC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F062EF0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F062EF0:
    ctx->pc = 0x7F062EF0u;
    ctx->downcount -= 2;
    // 7F062EF0: cmplwi  r3, 0x0000
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

label_7F062EF4:
    ctx->pc = 0x7F062EF4u;
    // 7F062EF4: bc    12, 2, 0x7F062F00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F062F00;
        }
    }

label_7F062EF8:
    ctx->pc = 0x7F062EF8u;
    ctx->downcount -= 1;
    // 7F062EF8: bl      0x7F3C674C
    {
            ctx->lr = 0x7F062EFCu;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F062EFC:
    ctx->pc = 0x7F062EFCu;
    ctx->downcount -= 1;
    // 7F062EFC: stw     r3, 5420(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(5420);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F062F00:
    ctx->pc = 0x7F062F00u;
    ctx->downcount -= 6;
    // 7F062F00: lis     r4, 241
    ctx->gpr[4] = ((u32)(s32)(241) << 16);

label_7F062F04:
    ctx->pc = 0x7F062F04u;
    // 7F062F04: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F062F08:
    ctx->pc = 0x7F062F08u;
    // 7F062F08: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062F0C:
    ctx->pc = 0x7F062F0Cu;
    // 7F062F0C: addi    r4, r4, 15222
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15222);

label_7F062F10:
    ctx->pc = 0x7F062F10u;
    // 7F062F10: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F062F14:
    ctx->pc = 0x7F062F14u;
    // 7F062F14: bl      0x7F04272C
    {
            ctx->lr = 0x7F062F18u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F062F18:
    ctx->pc = 0x7F062F18u;
    ctx->downcount -= 3;
    // 7F062F18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062F1C:
    ctx->pc = 0x7F062F1Cu;
    // 7F062F1C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062F20:
    ctx->pc = 0x7F062F20u;
    // 7F062F20: bl      0x7F023E5C
    {
            ctx->lr = 0x7F062F24u;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F062F24:
    ctx->pc = 0x7F062F24u;
    ctx->downcount -= 3;
    // 7F062F24: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062F28:
    ctx->pc = 0x7F062F28u;
    // 7F062F28: addi    r4, r29, 5904
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(5904);

label_7F062F2C:
    ctx->pc = 0x7F062F2Cu;
    // 7F062F2C: bl      0x7F042C1C
    {
            ctx->lr = 0x7F062F30u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F062F30:
    ctx->pc = 0x7F062F30u;
    ctx->downcount -= 6;
    // 7F062F30: lis     r4, 240
    ctx->gpr[4] = ((u32)(s32)(240) << 16);

label_7F062F34:
    ctx->pc = 0x7F062F34u;
    // 7F062F34: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062F38:
    ctx->pc = 0x7F062F38u;
    // 7F062F38: addi    r5, r4, 26953
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(26953);

label_7F062F3C:
    ctx->pc = 0x7F062F3Cu;
    // 7F062F3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F062F40:
    ctx->pc = 0x7F062F40u;
    // 7F062F40: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F062F44:
    ctx->pc = 0x7F062F44u;
    // 7F062F44: bl      0x7F042C2C
    {
            ctx->lr = 0x7F062F48u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F062F48:
    ctx->pc = 0x7F062F48u;
    ctx->downcount -= 3;
    // 7F062F48: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062F4C:
    ctx->pc = 0x7F062F4Cu;
    // 7F062F4C: addi    r4, r31, 16
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16);

label_7F062F50:
    ctx->pc = 0x7F062F50u;
    // 7F062F50: bl      0x7F042B6C
    {
            ctx->lr = 0x7F062F54u;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F062F54:
    ctx->pc = 0x7F062F54u;
    ctx->downcount -= 3;
    // 7F062F54: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062F58:
    ctx->pc = 0x7F062F58u;
    // 7F062F58: addi    r4, r29, 508
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(508);

label_7F062F5C:
    ctx->pc = 0x7F062F5Cu;
    // 7F062F5C: bl      0x7F042B20
    {
            ctx->lr = 0x7F062F60u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F062F60:
    ctx->pc = 0x7F062F60u;
    ctx->downcount -= 7;
    // 7F062F60: addi    r31, r29, 680
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(680);

label_7F062F64:
    ctx->pc = 0x7F062F64u;
    // 7F062F64: lis     r4, 241
    ctx->gpr[4] = ((u32)(s32)(241) << 16);

label_7F062F68:
    ctx->pc = 0x7F062F68u;
    // 7F062F68: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F062F6C:
    ctx->pc = 0x7F062F6Cu;
    // 7F062F6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062F70:
    ctx->pc = 0x7F062F70u;
    // 7F062F70: addi    r4, r4, 18814
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18814);

label_7F062F74:
    ctx->pc = 0x7F062F74u;
    // 7F062F74: addi    r5, r5, 2
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(2);

label_7F062F78:
    ctx->pc = 0x7F062F78u;
    // 7F062F78: bl      0x7F04272C
    {
            ctx->lr = 0x7F062F7Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F062F7C:
    ctx->pc = 0x7F062F7Cu;
    ctx->downcount -= 3;
    // 7F062F7C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062F80:
    ctx->pc = 0x7F062F80u;
    // 7F062F80: addi    r4, r29, 724
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(724);

label_7F062F84:
    ctx->pc = 0x7F062F84u;
    // 7F062F84: bl      0x7F042B20
    {
            ctx->lr = 0x7F062F88u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F062F88:
    ctx->pc = 0x7F062F88u;
    ctx->downcount -= 4;
    // 7F062F88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062F8C:
    ctx->pc = 0x7F062F8Cu;
    // 7F062F8C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062F90:
    ctx->pc = 0x7F062F90u;
    // 7F062F90: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F062F94:
    ctx->pc = 0x7F062F94u;
    // 7F062F94: bl      0x7F042B74
    {
            ctx->lr = 0x7F062F98u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F062F98:
    ctx->pc = 0x7F062F98u;
    ctx->downcount -= 3;
    // 7F062F98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F062F9C:
    ctx->pc = 0x7F062F9Cu;
    // 7F062F9C: addi    r4, r29, 6256
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(6256);

label_7F062FA0:
    ctx->pc = 0x7F062FA0u;
    // 7F062FA0: bl      0x7F042C1C
    {
            ctx->lr = 0x7F062FA4u;
            ctx->pc = 0x7F042C1Cu;
            return;
    }

label_7F062FA4:
    ctx->pc = 0x7F062FA4u;
    ctx->downcount -= 3;
    // 7F062FA4: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F062FA8:
    ctx->pc = 0x7F062FA8u;
    // 7F062FA8: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062FAC:
    ctx->pc = 0x7F062FACu;
    // 7F062FAC: bl      0x7F3B0938
    {
            ctx->lr = 0x7F062FB0u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F062FB0:
    ctx->pc = 0x7F062FB0u;
    ctx->downcount -= 6;
    // 7F062FB0: lis     r4, 180
    ctx->gpr[4] = ((u32)(s32)(180) << 16);

label_7F062FB4:
    ctx->pc = 0x7F062FB4u;
    // 7F062FB4: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F062FB8:
    ctx->pc = 0x7F062FB8u;
    // 7F062FB8: addi    r3, r29, 3936
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(3936);

label_7F062FBC:
    ctx->pc = 0x7F062FBCu;
    // 7F062FBC: addi    r4, r4, 18328
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18328);

label_7F062FC0:
    ctx->pc = 0x7F062FC0u;
    // 7F062FC0: addi    r5, r5, 34
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(34);

label_7F062FC4:
    ctx->pc = 0x7F062FC4u;
    // 7F062FC4: bl      0x7F04272C
    {
            ctx->lr = 0x7F062FC8u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F062FC8:
    ctx->pc = 0x7F062FC8u;
    ctx->downcount -= 3;
    // 7F062FC8: addi    r3, r29, 3936
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(3936);

label_7F062FCC:
    ctx->pc = 0x7F062FCCu;
    // 7F062FCC: addi    r4, r29, 3980
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(3980);

label_7F062FD0:
    ctx->pc = 0x7F062FD0u;
    // 7F062FD0: bl      0x7F042B20
    {
            ctx->lr = 0x7F062FD4u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F062FD4:
    ctx->pc = 0x7F062FD4u;
    ctx->downcount -= 4;
    // 7F062FD4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F062FD8:
    ctx->pc = 0x7F062FD8u;
    // 7F062FD8: addi    r3, r29, 3936
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(3936);

label_7F062FDC:
    ctx->pc = 0x7F062FDCu;
    // 7F062FDC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F062FE0:
    ctx->pc = 0x7F062FE0u;
    // 7F062FE0: bl      0x7F042B74
    {
            ctx->lr = 0x7F062FE4u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F062FE4:
    ctx->pc = 0x7F062FE4u;
    ctx->downcount -= 3;
    // 7F062FE4: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F062FE8:
    ctx->pc = 0x7F062FE8u;
    // 7F062FE8: lwz     r4, 3936(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F062FEC:
    ctx->pc = 0x7F062FECu;
    // 7F062FEC: bl      0x7F3B0938
    {
            ctx->lr = 0x7F062FF0u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F062FF0:
    ctx->pc = 0x7F062FF0u;
    ctx->downcount -= 2;
    // 7F062FF0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F062FF4:
    ctx->pc = 0x7F062FF4u;
    // 7F062FF4: bl      0x7F0621D0
    {
            ctx->lr = 0x7F062FF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0621D0u;
                return;
            }
            goto label_7F0621D0;
    }

label_7F062FF8:
    ctx->pc = 0x7F062FF8u;
    ctx->downcount -= 6;
    // 7F062FF8: lis     r4, 111
    ctx->gpr[4] = ((u32)(s32)(111) << 16);

label_7F062FFC:
    ctx->pc = 0x7F062FFCu;
    // 7F062FFC: lis     r5, -32512
    ctx->gpr[5] = ((u32)(s32)(-32512) << 16);

label_7F063000:
    ctx->pc = 0x7F063000u;
    // 7F063000: addi    r3, r29, 636
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(636);

label_7F063004:
    ctx->pc = 0x7F063004u;
    // 7F063004: addi    r4, r4, -15788
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15788);

label_7F063008:
    ctx->pc = 0x7F063008u;
    // 7F063008: addi    r5, r5, 34
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(34);

label_7F06300C:
    ctx->pc = 0x7F06300Cu;
    // 7F06300C: bl      0x7F04272C
    {
            ctx->lr = 0x7F063010u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F063010:
    ctx->pc = 0x7F063010u;
    ctx->downcount -= 3;
    // 7F063010: addi    r3, r29, 636
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(636);

label_7F063014:
    ctx->pc = 0x7F063014u;
    // 7F063014: addi    r4, r29, 3980
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(3980);

label_7F063018:
    ctx->pc = 0x7F063018u;
    // 7F063018: bl      0x7F042B20
    {
            ctx->lr = 0x7F06301Cu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F06301C:
    ctx->pc = 0x7F06301Cu;
    ctx->downcount -= 2;
    // 7F06301C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F063020:
    ctx->pc = 0x7F063020u;
    // 7F063020: bl      0x7F0626A4
    {
            ctx->lr = 0x7F063024u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0626A4u;
                return;
            }
            goto label_7F0626A4;
    }

label_7F063024:
    ctx->pc = 0x7F063024u;
    ctx->downcount -= 4;
    // 7F063024: lis     r3, 66
    ctx->gpr[3] = ((u32)(s32)(66) << 16);

label_7F063028:
    ctx->pc = 0x7F063028u;
    // 7F063028: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F06302C:
    ctx->pc = 0x7F06302Cu;
    // 7F06302C: addi    r3, r3, -31898
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31898);

label_7F063030:
    ctx->pc = 0x7F063030u;
    // 7F063030: bl      0x7F3C8470
    {
            ctx->lr = 0x7F063034u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F063034:
    ctx->pc = 0x7F063034u;
    ctx->downcount -= 1;
    // 7F063034: bl      0x7F3C8480
    {
            ctx->lr = 0x7F063038u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F063038:
    ctx->pc = 0x7F063038u;
    ctx->downcount -= 3;
    // 7F063038: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F06303C:
    ctx->pc = 0x7F06303Cu;
    // 7F06303C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F063040:
    ctx->pc = 0x7F063040u;
    // 7F063040: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F063044u;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F063044:
    ctx->pc = 0x7F063044u;
    ctx->downcount -= 4;
    // 7F063044: stw     r3, 1388(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1388);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F063048:
    ctx->pc = 0x7F063048u;
    // 7F063048: lwz     r3, 464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F06304C:
    ctx->pc = 0x7F06304Cu;
    // 7F06304C: lwz     r4, 1388(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1388);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F063050:
    ctx->pc = 0x7F063050u;
    // 7F063050: bl      0x7F3B09C0
    {
            ctx->lr = 0x7F063054u;
            ctx->pc = 0x7F3B09C0u;
            return;
    }

label_7F063054:
    ctx->pc = 0x7F063054u;
    ctx->downcount -= 11;
    // 7F063054: lha     r3, 128(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(128);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F063058:
    ctx->pc = 0x7F063058u;
    // 7F063058: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F06305C:
    ctx->pc = 0x7F06305Cu;
    // 7F06305C: stw     r0, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063060:
    ctx->pc = 0x7F063060u;
    // 7F063060: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F063064:
    ctx->pc = 0x7F063064u;
    // 7F063064: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F063068:
    ctx->pc = 0x7F063068u;
    // 7F063068: lfd     f1, -9000(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F063068u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-9000);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F06306C:
    ctx->pc = 0x7F06306Cu;
    // 7F06306C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063070:
    ctx->pc = 0x7F063070u;
    // 7F063070: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F063074:
    ctx->pc = 0x7F063074u;
    // 7F063074: lfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063074u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F063078:
    ctx->pc = 0x7F063078u;
    // 7F063078: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063078u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F06307C:
    ctx->pc = 0x7F06307Cu;
    // 7F06307C: bl      0x7F00F070
    {
            ctx->lr = 0x7F063080u;
            ctx->pc = 0x7F00F070u;
            return;
    }

label_7F063080:
    ctx->pc = 0x7F063080u;
    ctx->downcount -= 3;
    // 7F063080: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F063084:
    ctx->pc = 0x7F063084u;
    // 7F063084: li      r4, 3568
    ctx->gpr[4] = (u32)(s32)(3568);

label_7F063088:
    ctx->pc = 0x7F063088u;
    // 7F063088: bl      0x7F0624EC
    {
            ctx->lr = 0x7F06308Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0624ECu;
                return;
            }
            goto label_7F0624EC;
    }

label_7F06308C:
    ctx->pc = 0x7F06308Cu;
    ctx->downcount -= 2;
    // 7F06308C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F063090:
    ctx->pc = 0x7F063090u;
    // 7F063090: bl      0x7F06262C
    {
            ctx->lr = 0x7F063094u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06262Cu;
                return;
            }
            goto label_7F06262C;
    }

label_7F063094:
    ctx->pc = 0x7F063094u;
    ctx->downcount -= 1;
    // 7F063094: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F063098:
    ctx->pc = 0x7F063098u;
    ctx->downcount -= 16;
    // 7F063098: lmw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F06309C:
    ctx->pc = 0x7F06309Cu;
    // 7F06309C: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0630A0:
    ctx->pc = 0x7F0630A0u;
    // 7F0630A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0630A4:
    ctx->pc = 0x7F0630A4u;
    // 7F0630A4: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F0630A8:
    ctx->pc = 0x7F0630A8u;
    // 7F0630A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0630AC:
    ctx->pc = 0x7F0630ACu;
    ctx->downcount -= 9;
    // 7F0630AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0630B0:
    ctx->pc = 0x7F0630B0u;
    // 7F0630B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0630B4:
    ctx->pc = 0x7F0630B4u;
    // 7F0630B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0630B8:
    ctx->pc = 0x7F0630B8u;
    // 7F0630B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0630BC:
    ctx->pc = 0x7F0630BCu;
    // 7F0630BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0630C0:
    ctx->pc = 0x7F0630C0u;
    // 7F0630C0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0630C4:
    ctx->pc = 0x7F0630C4u;
    // 7F0630C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0630C8:
    ctx->pc = 0x7F0630C8u;
    // 7F0630C8: lwz     r3, 4832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0630CC:
    ctx->pc = 0x7F0630CCu;
    // 7F0630CC: bl      0x80051BB0
    {
            ctx->lr = 0x7F0630D0u;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0630D0:
    ctx->pc = 0x7F0630D0u;
    ctx->downcount -= 2;
    // 7F0630D0: cmpwi   r3, 0
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

label_7F0630D4:
    ctx->pc = 0x7F0630D4u;
    // 7F0630D4: bc    12, 2, 0x7F0630EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0630EC;
        }
    }

label_7F0630D8:
    ctx->pc = 0x7F0630D8u;
    ctx->downcount -= 3;
    // 7F0630D8: lwz     r3, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0630DC:
    ctx->pc = 0x7F0630DCu;
    // 7F0630DC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0630E0:
    ctx->pc = 0x7F0630E0u;
    // 7F0630E0: bl      0x80050B54
    {
            ctx->lr = 0x7F0630E4u;
            ctx->pc = 0x80050B54u;
            return;
    }

label_7F0630E4:
    ctx->pc = 0x7F0630E4u;
    ctx->downcount -= 2;
    // 7F0630E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0630E8:
    ctx->pc = 0x7F0630E8u;
    // 7F0630E8: stw     r0, 4832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0630EC:
    ctx->pc = 0x7F0630ECu;
    ctx->downcount -= 4;
    // 7F0630EC: lwz     r3, 4836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4836);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0630F0:
    ctx->pc = 0x7F0630F0u;
    // 7F0630F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0630F4:
    ctx->pc = 0x7F0630F4u;
    // 7F0630F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0630F8:
    ctx->pc = 0x7F0630F8u;
    // 7F0630F8: bl      0x80051BB0
    {
            ctx->lr = 0x7F0630FCu;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0630FC:
    ctx->pc = 0x7F0630FCu;
    ctx->downcount -= 2;
    // 7F0630FC: cmpwi   r3, 0
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

label_7F063100:
    ctx->pc = 0x7F063100u;
    // 7F063100: bc    12, 2, 0x7F063118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F063118;
        }
    }

label_7F063104:
    ctx->pc = 0x7F063104u;
    ctx->downcount -= 3;
    // 7F063104: lwz     r3, 4836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4836);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F063108:
    ctx->pc = 0x7F063108u;
    // 7F063108: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F06310C:
    ctx->pc = 0x7F06310Cu;
    // 7F06310C: bl      0x80050B54
    {
            ctx->lr = 0x7F063110u;
            ctx->pc = 0x80050B54u;
            return;
    }

label_7F063110:
    ctx->pc = 0x7F063110u;
    ctx->downcount -= 2;
    // 7F063110: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F063114:
    ctx->pc = 0x7F063114u;
    // 7F063114: stw     r0, 4836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063118:
    ctx->pc = 0x7F063118u;
    ctx->downcount -= 6;
    // 7F063118: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06311C:
    ctx->pc = 0x7F06311Cu;
    // 7F06311C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F063120:
    ctx->pc = 0x7F063120u;
    // 7F063120: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F063124:
    ctx->pc = 0x7F063124u;
    // 7F063124: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F063128:
    ctx->pc = 0x7F063128u;
    // 7F063128: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F06312C:
    ctx->pc = 0x7F06312Cu;
    ctx->downcount -= 5;
    // 7F06312C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F063130:
    ctx->pc = 0x7F063130u;
    // 7F063130: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F063134:
    ctx->pc = 0x7F063134u;
    // 7F063134: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_7F063138:
    ctx->pc = 0x7F063138u;
    // 7F063138: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06313C:
    ctx->pc = 0x7F06313Cu;
    // 7F06313C: bl      0x7F0146B0
    {
            ctx->lr = 0x7F063140u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F063140:
    ctx->pc = 0x7F063140u;
    ctx->downcount -= 5;
    // 7F063140: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063144:
    ctx->pc = 0x7F063144u;
    // 7F063144: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F063148:
    ctx->pc = 0x7F063148u;
    // 7F063148: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F06314C:
    ctx->pc = 0x7F06314Cu;
    // 7F06314C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063150:
    ctx->pc = 0x7F063150u;
    ctx->downcount -= 17;
    // 7F063150: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F063154:
    ctx->pc = 0x7F063154u;
    // 7F063154: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F063158:
    ctx->pc = 0x7F063158u;
    // 7F063158: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06315C:
    ctx->pc = 0x7F06315Cu;
    // 7F06315C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F063160:
    ctx->pc = 0x7F063160u;
    // 7F063160: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063164:
    ctx->pc = 0x7F063164u;
    // 7F063164: addi    r3, r29, 464
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(464);

label_7F063168:
    ctx->pc = 0x7F063168u;
    // 7F063168: bl      0x7F2F6F10
    {
            ctx->lr = 0x7F06316Cu;
            ctx->pc = 0x7F2F6F10u;
            return;
    }

label_7F06316C:
    ctx->pc = 0x7F06316Cu;
    ctx->downcount -= 2;
    // 7F06316C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F063170:
    ctx->pc = 0x7F063170u;
    // 7F063170: bl      0x7F0630AC
    {
            ctx->lr = 0x7F063174u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0630ACu;
                return;
            }
            goto label_7F0630AC;
    }

label_7F063174:
    ctx->pc = 0x7F063174u;
    ctx->downcount -= 2;
    // 7F063174: addi    r3, r29, 6292
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(6292);

label_7F063178:
    ctx->pc = 0x7F063178u;
    // 7F063178: bl      0x7F012144
    {
            ctx->lr = 0x7F06317Cu;
            ctx->pc = 0x7F012144u;
            return;
    }

label_7F06317C:
    ctx->pc = 0x7F06317Cu;
    ctx->downcount -= 2;
    // 7F06317C: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F063180:
    ctx->pc = 0x7F063180u;
    // 7F063180: bl      0x7F023E10
    {
            ctx->lr = 0x7F063184u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F063184:
    ctx->pc = 0x7F063184u;
    ctx->downcount -= 2;
    // 7F063184: addi    r3, r29, 464
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(464);

label_7F063188:
    ctx->pc = 0x7F063188u;
    // 7F063188: bl      0x7F042AAC
    {
            ctx->lr = 0x7F06318Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F06318C:
    ctx->pc = 0x7F06318Cu;
    ctx->downcount -= 2;
    // 7F06318C: addi    r3, r29, 680
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(680);

label_7F063190:
    ctx->pc = 0x7F063190u;
    // 7F063190: bl      0x7F042AAC
    {
            ctx->lr = 0x7F063194u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F063194:
    ctx->pc = 0x7F063194u;
    ctx->downcount -= 2;
    // 7F063194: addi    r3, r29, 636
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(636);

label_7F063198:
    ctx->pc = 0x7F063198u;
    // 7F063198: bl      0x7F042AAC
    {
            ctx->lr = 0x7F06319Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F06319C:
    ctx->pc = 0x7F06319Cu;
    ctx->downcount -= 2;
    // 7F06319C: addi    r3, r29, 3936
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(3936);

label_7F0631A0:
    ctx->pc = 0x7F0631A0u;
    // 7F0631A0: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0631A4u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0631A4:
    ctx->pc = 0x7F0631A4u;
    ctx->downcount -= 2;
    // 7F0631A4: addi    r3, r29, 5456
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(5456);

label_7F0631A8:
    ctx->pc = 0x7F0631A8u;
    // 7F0631A8: bl      0x7F27E1C0
    {
            ctx->lr = 0x7F0631ACu;
            ctx->pc = 0x7F27E1C0u;
            return;
    }

label_7F0631AC:
    ctx->pc = 0x7F0631ACu;
    ctx->downcount -= 2;
    // 7F0631AC: addi    r3, r29, 1584
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1584);

label_7F0631B0:
    ctx->pc = 0x7F0631B0u;
    // 7F0631B0: bl      0x7F01D540
    {
            ctx->lr = 0x7F0631B4u;
            ctx->pc = 0x7F01D540u;
            return;
    }

label_7F0631B4:
    ctx->pc = 0x7F0631B4u;
    ctx->downcount -= 2;
    // 7F0631B4: addi    r3, r29, 1392
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1392);

label_7F0631B8:
    ctx->pc = 0x7F0631B8u;
    // 7F0631B8: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0631BCu;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0631BC:
    ctx->pc = 0x7F0631BCu;
    ctx->downcount -= 2;
    // 7F0631BC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0631C0:
    ctx->pc = 0x7F0631C0u;
    // 7F0631C0: bl      0x7F06284C
    {
            ctx->lr = 0x7F0631C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06284Cu;
                return;
            }
            goto label_7F06284C;
    }

label_7F0631C4:
    ctx->pc = 0x7F0631C4u;
    ctx->downcount -= 2;
    // 7F0631C4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0631C8:
    ctx->pc = 0x7F0631C8u;
    // 7F0631C8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0631CC:
    ctx->downcount -= 4;
    // 7F0631CC: addi    r0, r31, 3892
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(3892);

label_7F0631D0:
    ctx->pc = 0x7F0631D0u;
    // 7F0631D0: lwzx    r3, r29, r0
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0631D4:
    // 7F0631D4: cmplwi  r3, 0x0000
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

label_7F0631D8:
    // 7F0631D8: bc    12, 2, 0x7F0631E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0631E0;
        }
    }

label_7F0631DC:
    ctx->downcount -= 1;
    // 7F0631DC: bl      0x7F10C3F0
    {
            ctx->lr = 0x7F0631E0u;
            ctx->pc = 0x7F10C3F0u;
            return;
    }

label_7F0631E0:
    ctx->downcount -= 4;
    // 7F0631E0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F0631E4:
    // 7F0631E4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_7F0631E8:
    // 7F0631E8: cmplwi  r30, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0631EC:
    // 7F0631EC: bc    12, 0, 0x7F0631CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0631CCu;
                return;
            }
            goto label_7F0631CC;
        }
    }

label_7F0631F0:
    ctx->pc = 0x7F0631F0u;
    ctx->downcount -= 2;
    // 7F0631F0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0631F4:
    ctx->pc = 0x7F0631F4u;
    // 7F0631F4: bl      0x7F0624F0
    {
            ctx->lr = 0x7F0631F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0624F0u;
                return;
            }
            goto label_7F0624F0;
    }

label_7F0631F8:
    ctx->pc = 0x7F0631F8u;
    ctx->downcount -= 2;
    // 7F0631F8: addi    r3, r29, 3936
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(3936);

label_7F0631FC:
    ctx->pc = 0x7F0631FCu;
    // 7F0631FC: bl      0x7F06312C
    {
            ctx->lr = 0x7F063200u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06312Cu;
                return;
            }
            goto label_7F06312C;
    }

label_7F063200:
    ctx->pc = 0x7F063200u;
    ctx->downcount -= 16;
    // 7F063200: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F063204:
    ctx->pc = 0x7F063204u;
    // 7F063204: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063208:
    ctx->pc = 0x7F063208u;
    // 7F063208: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F06320C:
    ctx->pc = 0x7F06320Cu;
    // 7F06320C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F063210:
    ctx->pc = 0x7F063210u;
    // 7F063210: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063214:
    ctx->pc = 0x7F063214u;
    ctx->downcount -= 21;
    // 7F063214: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F063218:
    ctx->pc = 0x7F063218u;
    // 7F063218: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F06321C:
    ctx->pc = 0x7F06321Cu;
    // 7F06321C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F063220:
    ctx->pc = 0x7F063220u;
    // 7F063220: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063224:
    ctx->pc = 0x7F063224u;
    // 7F063224: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F063228:
    ctx->pc = 0x7F063228u;
    // 7F063228: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F06322C:
    ctx->pc = 0x7F06322Cu;
    // 7F06322C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F063230:
    ctx->pc = 0x7F063230u;
    // 7F063230: li      r4, 122
    ctx->gpr[4] = (u32)(s32)(122);

label_7F063234:
    ctx->pc = 0x7F063234u;
    // 7F063234: addi    r3, r30, 400
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(400);

label_7F063238:
    ctx->pc = 0x7F063238u;
    // 7F063238: lfs     f1, 6624(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F063238u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(6624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F06323C:
    ctx->pc = 0x7F06323Cu;
    // 7F06323C: bl      0x8002536C
    {
            ctx->lr = 0x7F063240u;
            ctx->pc = 0x8002536Cu;
            return;
    }

label_7F063240:
    ctx->pc = 0x7F063240u;
    ctx->downcount -= 5;
    // 7F063240: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F063244:
    ctx->pc = 0x7F063244u;
    // 7F063244: addi    r3, r30, 400
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(400);

label_7F063248:
    ctx->pc = 0x7F063248u;
    // 7F063248: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F06324C:
    ctx->pc = 0x7F06324Cu;
    // 7F06324C: addi    r4, r4, 1092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1092);

label_7F063250:
    ctx->pc = 0x7F063250u;
    // 7F063250: bl      0x80025090
    {
            ctx->lr = 0x7F063254u;
            ctx->pc = 0x80025090u;
            return;
    }

label_7F063254:
    ctx->pc = 0x7F063254u;
    ctx->downcount -= 13;
    // 7F063254: lwz     r7, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F063258:
    ctx->pc = 0x7F063258u;
    // 7F063258: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F06325C:
    ctx->pc = 0x7F06325Cu;
    // 7F06325C: addi    r3, r30, 176
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(176);

label_7F063260:
    ctx->pc = 0x7F063260u;
    // 7F063260: addi    r4, r30, 400
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(400);

label_7F063264:
    ctx->pc = 0x7F063264u;
    // 7F063264: lwz     r6, 1140(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1140);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F063268:
    ctx->pc = 0x7F063268u;
    // 7F063268: lwz     r0, 1144(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06326C:
    ctx->pc = 0x7F06326Cu;
    // 7F06326C: stw     r6, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F063270:
    ctx->pc = 0x7F063270u;
    // 7F063270: stw     r0, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063274:
    ctx->pc = 0x7F063274u;
    // 7F063274: lwz     r6, 1148(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F063278:
    ctx->pc = 0x7F063278u;
    // 7F063278: lwz     r0, 1152(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06327C:
    ctx->pc = 0x7F06327Cu;
    // 7F06327C: stw     r6, 456(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(456);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F063280:
    ctx->pc = 0x7F063280u;
    // 7F063280: stw     r0, 460(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(460);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063284:
    ctx->pc = 0x7F063284u;
    // 7F063284: bl      0x7F014964
    {
            ctx->lr = 0x7F063288u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F063288:
    ctx->pc = 0x7F063288u;
    ctx->downcount -= 16;
    // 7F063288: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F06328C:
    ctx->pc = 0x7F06328Cu;
    // 7F06328C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063290:
    ctx->pc = 0x7F063290u;
    // 7F063290: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F063294:
    ctx->pc = 0x7F063294u;
    // 7F063294: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F063298:
    ctx->pc = 0x7F063298u;
    // 7F063298: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F06329C:
    ctx->pc = 0x7F06329Cu;
    ctx->downcount -= 22;
    // 7F06329C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0632A0:
    ctx->pc = 0x7F0632A0u;
    // 7F0632A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0632A4:
    ctx->pc = 0x7F0632A4u;
    // 7F0632A4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0632A8:
    ctx->pc = 0x7F0632A8u;
    // 7F0632A8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0632AC:
    ctx->pc = 0x7F0632ACu;
    // 7F0632AC: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0632B0:
    ctx->pc = 0x7F0632B0u;
    // 7F0632B0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0632B4:
    ctx->pc = 0x7F0632B4u;
    // 7F0632B4: addi    r30, r27, 3760
    ctx->gpr[30] = ctx->gpr[27] + (u32)(s32)(3760);

label_7F0632B8:
    ctx->pc = 0x7F0632B8u;
    // 7F0632B8: addi    r29, r27, 1648
    ctx->gpr[29] = ctx->gpr[27] + (u32)(s32)(1648);

label_7F0632BC:
    ctx->pc = 0x7F0632BCu;
    // 7F0632BC: addi    r3, r27, 1392
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(1392);

label_7F0632C0:
    ctx->pc = 0x7F0632C0u;
    // 7F0632C0: lwz     r5, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0632C4:
    ctx->pc = 0x7F0632C4u;
    // 7F0632C4: addi    r4, r27, 64
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(64);

label_7F0632C8:
    ctx->pc = 0x7F0632C8u;
    // 7F0632C8: bl      0x7F014944
    {
            ctx->lr = 0x7F0632CCu;
            ctx->pc = 0x7F014944u;
            return;
    }

label_7F0632CC:
    ctx->pc = 0x7F0632CCu;
    ctx->downcount -= 3;
    // 7F0632CC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0632D0:
    ctx->pc = 0x7F0632D0u;
    // 7F0632D0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F0632D4:
    ctx->pc = 0x7F0632D4u;
    // 7F0632D4: addi    r31, r3, 18312
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F0632D8:
    ctx->pc = 0x7F0632D8u;
    ctx->downcount -= 4;
    // 7F0632D8: lwz     r4, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0632DC:
    // 7F0632DC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0632E0:
    ctx->pc = 0x7F0632E0u;
    // 7F0632E0: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0632E4:
    // 7F0632E4: bl      0x7F014964
    {
            ctx->lr = 0x7F0632E8u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F0632E8:
    ctx->downcount -= 5;
    // 7F0632E8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F0632EC:
    // 7F0632EC: addi    r30, r30, 12
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(12);

label_7F0632F0:
    // 7F0632F0: cmpwi   r28, 11
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0632F4:
    // 7F0632F4: addi    r29, r29, 192
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(192);

label_7F0632F8:
    // 7F0632F8: bc    12, 0, 0x7F0632D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0632D8u;
                return;
            }
            goto label_7F0632D8;
        }
    }

label_7F0632FC:
    ctx->pc = 0x7F0632FCu;
    ctx->downcount -= 3;
    // 7F0632FC: lwz     r4, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F063300:
    ctx->pc = 0x7F063300u;
    // 7F063300: addi    r3, r27, 3936
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(3936);

label_7F063304:
    ctx->pc = 0x7F063304u;
    // 7F063304: bl      0x7F063214
    {
            ctx->lr = 0x7F063308u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F063214u;
                return;
            }
            goto label_7F063214;
    }

label_7F063308:
    ctx->pc = 0x7F063308u;
    ctx->downcount -= 2;
    // 7F063308: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F06330C:
    ctx->pc = 0x7F06330Cu;
    // 7F06330C: bl      0x7F06341C
    {
            ctx->lr = 0x7F063310u;
            goto label_7F06341C;
    }

label_7F063310:
    ctx->pc = 0x7F063310u;
    ctx->downcount -= 16;
    // 7F063310: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F063314:
    ctx->pc = 0x7F063314u;
    // 7F063314: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063318:
    ctx->pc = 0x7F063318u;
    // 7F063318: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F06331C:
    ctx->pc = 0x7F06331Cu;
    // 7F06331C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F063320:
    ctx->pc = 0x7F063320u;
    // 7F063320: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063324:
    ctx->pc = 0x7F063324u;
    ctx->downcount -= 13;
    // 7F063324: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F063328:
    ctx->pc = 0x7F063328u;
    // 7F063328: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F06332C:
    ctx->pc = 0x7F06332Cu;
    // 7F06332C: li      r8, 2
    ctx->gpr[8] = (u32)(s32)(2);

label_7F063330:
    ctx->pc = 0x7F063330u;
    // 7F063330: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063334:
    ctx->pc = 0x7F063334u;
    // 7F063334: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F063338:
    ctx->pc = 0x7F063338u;
    // 7F063338: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F06333C:
    ctx->pc = 0x7F06333Cu;
    // 7F06333C: addi    r5, r31, 464
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(464);

label_7F063340:
    ctx->pc = 0x7F063340u;
    // 7F063340: lwz     r4, 464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F063344:
    ctx->pc = 0x7F063344u;
    // 7F063344: addi    r3, r31, 1584
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1584);

label_7F063348:
    ctx->pc = 0x7F063348u;
    // 7F063348: addi    r6, r31, 228
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(228);

label_7F06334C:
    ctx->pc = 0x7F06334Cu;
    // 7F06334C: addi    r7, r31, 64
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(64);

label_7F063350:
    ctx->pc = 0x7F063350u;
    // 7F063350: addi    r4, r4, 1092
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1092);

label_7F063354:
    ctx->pc = 0x7F063354u;
    // 7F063354: bl      0x7F01D42C
    {
            ctx->lr = 0x7F063358u;
            ctx->pc = 0x7F01D42Cu;
            return;
    }

label_7F063358:
    ctx->pc = 0x7F063358u;
    ctx->downcount -= 3;
    // 7F063358: addi    r3, r31, 1584
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1584);

label_7F06335C:
    ctx->pc = 0x7F06335Cu;
    // 7F06335C: addi    r4, r31, 1392
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1392);

label_7F063360:
    ctx->pc = 0x7F063360u;
    // 7F063360: bl      0x7F01D46C
    {
            ctx->lr = 0x7F063364u;
            ctx->pc = 0x7F01D46Cu;
            return;
    }

label_7F063364:
    ctx->pc = 0x7F063364u;
    ctx->downcount -= 2;
    // 7F063364: addi    r3, r31, 1584
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1584);

label_7F063368:
    ctx->pc = 0x7F063368u;
    // 7F063368: bl      0x7F01D474
    {
            ctx->lr = 0x7F06336Cu;
            ctx->pc = 0x7F01D474u;
            return;
    }

label_7F06336C:
    ctx->pc = 0x7F06336Cu;
    ctx->downcount -= 6;
    // 7F06336C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063370:
    ctx->pc = 0x7F063370u;
    // 7F063370: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F063374:
    ctx->pc = 0x7F063374u;
    // 7F063374: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F063378:
    ctx->pc = 0x7F063378u;
    // 7F063378: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F06337C:
    ctx->pc = 0x7F06337Cu;
    // 7F06337C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063380:
    ctx->pc = 0x7F063380u;
    ctx->downcount -= 25;
    // 7F063380: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F063384:
    ctx->pc = 0x7F063384u;
    // 7F063384: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F063388:
    ctx->pc = 0x7F063388u;
    // 7F063388: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F06338C:
    ctx->pc = 0x7F06338Cu;
    // 7F06338C: lis     r6, 513
    ctx->gpr[6] = ((u32)(s32)(513) << 16);

label_7F063390:
    ctx->pc = 0x7F063390u;
    // 7F063390: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063394:
    ctx->pc = 0x7F063394u;
    // 7F063394: addi    r7, r4, 6628
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(6628);

label_7F063398:
    ctx->pc = 0x7F063398u;
    // 7F063398: addi    r4, r6, 16401
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(16401);

label_7F06339C:
    ctx->pc = 0x7F06339Cu;
    // 7F06339C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F0633A0:
    ctx->pc = 0x7F0633A0u;
    // 7F0633A0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0633A4:
    ctx->pc = 0x7F0633A4u;
    // 7F0633A4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0633A8:
    ctx->pc = 0x7F0633A8u;
    // 7F0633A8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F0633AC:
    ctx->pc = 0x7F0633ACu;
    // 7F0633AC: addi    r31, r30, 4112
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(4112);

label_7F0633B0:
    ctx->pc = 0x7F0633B0u;
    // 7F0633B0: addi    r8, r3, 6644
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(6644);

label_7F0633B4:
    ctx->pc = 0x7F0633B4u;
    // 7F0633B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0633B8:
    ctx->pc = 0x7F0633B8u;
    // 7F0633B8: bl      0x7F014788
    {
            ctx->lr = 0x7F0633BCu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F0633BC:
    ctx->pc = 0x7F0633BCu;
    ctx->downcount -= 11;
    // 7F0633BC: lwz     r5, 4796(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4796);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0633C0:
    ctx->pc = 0x7F0633C0u;
    // 7F0633C0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0633C4:
    ctx->pc = 0x7F0633C4u;
    // 7F0633C4: lwz     r0, 4800(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4800);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0633C8:
    ctx->pc = 0x7F0633C8u;
    // 7F0633C8: addi    r9, r3, 12832
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0633CC:
    ctx->pc = 0x7F0633CCu;
    // 7F0633CC: rlwinm r6, r5, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFFu;
    }

label_7F0633D0:
    ctx->pc = 0x7F0633D0u;
    // 7F0633D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0633D4:
    ctx->pc = 0x7F0633D4u;
    // 7F0633D4: addi    r4, r30, 4304
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(4304);

label_7F0633D8:
    ctx->pc = 0x7F0633D8u;
    // 7F0633D8: rlwinm r7, r0, 0, 16, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0633DC:
    ctx->pc = 0x7F0633DCu;
    // 7F0633DC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0633E0:
    ctx->pc = 0x7F0633E0u;
    // 7F0633E0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0633E4:
    ctx->pc = 0x7F0633E4u;
    // 7F0633E4: bl      0x7F014B78
    {
            ctx->lr = 0x7F0633E8u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0633E8:
    ctx->pc = 0x7F0633E8u;
    ctx->downcount -= 5;
    // 7F0633E8: lis     r4, 32519
    ctx->gpr[4] = ((u32)(s32)(32519) << 16);

label_7F0633EC:
    ctx->pc = 0x7F0633ECu;
    // 7F0633EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0633F0:
    ctx->pc = 0x7F0633F0u;
    // 7F0633F0: addi    r4, r4, -31152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31152);

label_7F0633F4:
    ctx->pc = 0x7F0633F4u;
    // 7F0633F4: addi    r5, r30, 3936
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(3936);

label_7F0633F8:
    ctx->pc = 0x7F0633F8u;
    // 7F0633F8: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0633FCu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0633FC:
    ctx->pc = 0x7F0633FCu;
    ctx->downcount -= 2;
    // 7F0633FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F063400:
    ctx->pc = 0x7F063400u;
    // 7F063400: bl      0x7F0148A0
    {
            ctx->lr = 0x7F063404u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F063404:
    ctx->pc = 0x7F063404u;
    ctx->downcount -= 17;
    // 7F063404: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F063408:
    ctx->pc = 0x7F063408u;
    // 7F063408: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F06340C:
    ctx->pc = 0x7F06340Cu;
    // 7F06340C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063410:
    ctx->pc = 0x7F063410u;
    // 7F063410: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F063414:
    ctx->pc = 0x7F063414u;
    // 7F063414: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F063418:
    ctx->pc = 0x7F063418u;
    // 7F063418: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F06341C:
    ctx->pc = 0x7F06341Cu;
    ctx->downcount -= 1;
    // 7F06341C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063420:
    ctx->pc = 0x7F063420u;
    ctx->downcount -= 2;
    // 7F063420: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F063424:
    ctx->pc = 0x7F063424u;
    // 7F063424: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063428:
    ctx->pc = 0x7F063428u;
    ctx->downcount -= 29;
    // 7F063428: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F06342C:
    ctx->pc = 0x7F06342Cu;
    // 7F06342C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F063430:
    ctx->pc = 0x7F063430u;
    // 7F063430: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F063434:
    ctx->pc = 0x7F063434u;
    // 7F063434: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F063438:
    ctx->pc = 0x7F063438u;
    // 7F063438: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06343C:
    ctx->pc = 0x7F06343Cu;
    // 7F06343C: addi    r0, r6, 6660
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(6660);

label_7F063440:
    ctx->pc = 0x7F063440u;
    // 7F063440: addi    r7, r4, 7012
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(7012);

label_7F063444:
    ctx->pc = 0x7F063444u;
    // 7F063444: lis     r4, 549
    ctx->gpr[4] = ((u32)(s32)(549) << 16);

label_7F063448:
    ctx->pc = 0x7F063448u;
    // 7F063448: stmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F06344C:
    ctx->pc = 0x7F06344Cu;
    // 7F06344C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063450:
    ctx->pc = 0x7F063450u;
    // 7F063450: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F063454:
    ctx->pc = 0x7F063454u;
    // 7F063454: or   r28, r0, r0
    {
        ctx->gpr[28] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F063458:
    ctx->pc = 0x7F063458u;
    // 7F063458: addi    r30, r26, 1392
    ctx->gpr[30] = ctx->gpr[26] + (u32)(s32)(1392);

label_7F06345C:
    ctx->pc = 0x7F06345Cu;
    // 7F06345C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F063460:
    ctx->pc = 0x7F063460u;
    // 7F063460: addi    r8, r3, 7028
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(7028);

label_7F063464:
    ctx->pc = 0x7F063464u;
    // 7F063464: addi    r4, r4, 533
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(533);

label_7F063468:
    ctx->pc = 0x7F063468u;
    // 7F063468: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06346C:
    ctx->pc = 0x7F06346Cu;
    // 7F06346C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F063470:
    ctx->pc = 0x7F063470u;
    // 7F063470: bl      0x7F014788
    {
            ctx->lr = 0x7F063474u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F063474:
    ctx->pc = 0x7F063474u;
    ctx->downcount -= 11;
    // 7F063474: lwz     r5, 4796(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4796);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F063478:
    ctx->pc = 0x7F063478u;
    // 7F063478: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F06347C:
    ctx->pc = 0x7F06347Cu;
    // 7F06347C: lwz     r0, 4800(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4800);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063480:
    ctx->pc = 0x7F063480u;
    // 7F063480: addi    r9, r3, 12832
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F063484:
    ctx->pc = 0x7F063484u;
    // 7F063484: rlwinm r6, r5, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFFu;
    }

label_7F063488:
    ctx->pc = 0x7F063488u;
    // 7F063488: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06348C:
    ctx->pc = 0x7F06348Cu;
    // 7F06348C: addi    r4, r26, 1616
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(1616);

label_7F063490:
    ctx->pc = 0x7F063490u;
    // 7F063490: rlwinm r7, r0, 0, 16, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F063494:
    ctx->pc = 0x7F063494u;
    // 7F063494: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F063498:
    ctx->pc = 0x7F063498u;
    // 7F063498: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F06349C:
    ctx->pc = 0x7F06349Cu;
    // 7F06349C: bl      0x7F014B78
    {
            ctx->lr = 0x7F0634A0u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F0634A0:
    ctx->pc = 0x7F0634A0u;
    ctx->downcount -= 5;
    // 7F0634A0: lis     r4, 32519
    ctx->gpr[4] = ((u32)(s32)(32519) << 16);

label_7F0634A4:
    ctx->pc = 0x7F0634A4u;
    // 7F0634A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0634A8:
    ctx->pc = 0x7F0634A8u;
    // 7F0634A8: addi    r4, r4, -31264
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31264);

label_7F0634AC:
    ctx->pc = 0x7F0634ACu;
    // 7F0634AC: addi    r5, r26, 3880
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(3880);

label_7F0634B0:
    ctx->pc = 0x7F0634B0u;
    // 7F0634B0: bl      0x7F014B6C
    {
            ctx->lr = 0x7F0634B4u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F0634B4:
    ctx->pc = 0x7F0634B4u;
    ctx->downcount -= 2;
    // 7F0634B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0634B8:
    ctx->pc = 0x7F0634B8u;
    // 7F0634B8: bl      0x7F0148A0
    {
            ctx->lr = 0x7F0634BCu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F0634BC:
    ctx->pc = 0x7F0634BCu;
    ctx->downcount -= 2;
    // 7F0634BC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0634C0:
    ctx->pc = 0x7F0634C0u;
    // 7F0634C0: bl      0x7F063420
    {
            ctx->lr = 0x7F0634C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F063420u;
                return;
            }
            goto label_7F063420;
    }

label_7F0634C4:
    ctx->pc = 0x7F0634C4u;
    ctx->downcount -= 7;
    // 7F0634C4: addi    r29, r26, 1648
    ctx->gpr[29] = ctx->gpr[26] + (u32)(s32)(1648);

label_7F0634C8:
    ctx->pc = 0x7F0634C8u;
    // 7F0634C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0634CC:
    ctx->pc = 0x7F0634CCu;
    // 7F0634CC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0634D0:
    ctx->pc = 0x7F0634D0u;
    // 7F0634D0: addi    r30, r26, 3760
    ctx->gpr[30] = ctx->gpr[26] + (u32)(s32)(3760);

label_7F0634D4:
    ctx->pc = 0x7F0634D4u;
    // 7F0634D4: li      r5, 11
    ctx->gpr[5] = (u32)(s32)(11);

label_7F0634D8:
    ctx->pc = 0x7F0634D8u;
    // 7F0634D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0634DC:
    ctx->pc = 0x7F0634DCu;
    // 7F0634DC: bl      0x7F014A50
    {
            ctx->lr = 0x7F0634E0u;
            ctx->pc = 0x7F014A50u;
            return;
    }

label_7F0634E0:
    ctx->pc = 0x7F0634E0u;
    ctx->downcount -= 6;
    // 7F0634E0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0634E4:
    ctx->pc = 0x7F0634E4u;
    // 7F0634E4: lis     r3, 32519
    ctx->gpr[3] = ((u32)(s32)(32519) << 16);

label_7F0634E8:
    ctx->pc = 0x7F0634E8u;
    // 7F0634E8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F0634EC:
    ctx->pc = 0x7F0634ECu;
    // 7F0634EC: lis     r23, 513
    ctx->gpr[23] = ((u32)(s32)(513) << 16);

label_7F0634F0:
    ctx->pc = 0x7F0634F0u;
    // 7F0634F0: addi    r24, r4, 12832
    ctx->gpr[24] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F0634F4:
    ctx->pc = 0x7F0634F4u;
    // 7F0634F4: addi    r25, r3, -31076
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(-31076);

label_7F0634F8:
    ctx->pc = 0x7F0634F8u;
    ctx->downcount -= 24;
    // 7F0634F8: lfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F0634F8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0634FC:
    // 7F0634FC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F063500:
    ctx->pc = 0x7F063500u;
    // 7F063500: lwz     r10, 464(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(464);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F063504:
    // 7F063504: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F063508:
    ctx->pc = 0x7F063508u;
    // 7F063508: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063508u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F06350C:
    // 7F06350C: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F063510:
    // 7F063510: addi    r4, r23, 16401
    ctx->gpr[4] = ctx->gpr[23] + (u32)(s32)(16401);

label_7F063514:
    // 7F063514: addi    r8, r28, 16
    ctx->gpr[8] = ctx->gpr[28] + (u32)(s32)(16);

label_7F063518:
    // 7F063518: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F06351C:
    ctx->pc = 0x7F06351Cu;
    // 7F06351C: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F06351Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F063520:
    ctx->pc = 0x7F063520u;
    // 7F063520: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063524:
    // 7F063524: mulli   r9, r0, 324
    ctx->gpr[9] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F063528:
    // 7F063528: addi    r0, r9, 444
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(444);

label_7F06352C:
    // 7F06352C: add   r0, r10, r0
    {
        u32 a = ctx->gpr[10];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F063530:
    ctx->pc = 0x7F063530u;
    // 7F063530: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063534:
    ctx->pc = 0x7F063534u;
    // 7F063534: stw     r26, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F063538:
    ctx->pc = 0x7F063538u;
    // 7F063538: lfs     f0, 12(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F063538u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F06353C:
    ctx->pc = 0x7F06353Cu;
    // 7F06353C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F06353Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F063540:
    ctx->pc = 0x7F063540u;
    // 7F063540: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063540u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F063544:
    ctx->pc = 0x7F063544u;
    // 7F063544: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063548:
    ctx->pc = 0x7F063548u;
    // 7F063548: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06354C:
    // 7F06354C: bl      0x7F014788
    {
            ctx->lr = 0x7F063550u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F063550:
    ctx->downcount -= 4;
    // 7F063550: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F063554:
    // 7F063554: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F063558:
    // 7F063558: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F06355C:
    // 7F06355C: bl      0x7F014B60
    {
            ctx->lr = 0x7F063560u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F063560:
    ctx->pc = 0x7F063560u;
    ctx->downcount -= 10;
    // 7F063560: lwz     r5, 4796(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4796);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F063564:
    // 7F063564: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F063568:
    ctx->pc = 0x7F063568u;
    // 7F063568: lwz     r0, 4800(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4800);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06356C:
    // 7F06356C: or   r9, r24, r24
    {
        ctx->gpr[9] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F063570:
    // 7F063570: addi    r4, r26, 1616
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(1616);

label_7F063574:
    // 7F063574: rlwinm r6, r5, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0000FFFFu;
    }

label_7F063578:
    // 7F063578: rlwinm r7, r0, 0, 16, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F06357C:
    // 7F06357C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F063580:
    // 7F063580: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F063584:
    // 7F063584: bl      0x7F014B78
    {
            ctx->lr = 0x7F063588u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F063588:
    ctx->downcount -= 4;
    // 7F063588: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F06358C:
    // 7F06358C: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F063590:
    // 7F063590: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F063594:
    // 7F063594: bl      0x7F014B6C
    {
            ctx->lr = 0x7F063598u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F063598:
    ctx->downcount -= 6;
    // 7F063598: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_7F06359C:
    // 7F06359C: addi    r28, r28, 32
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(32);

label_7F0635A0:
    // 7F0635A0: cmpwi   r27, 11
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0635A4:
    // 7F0635A4: addi    r30, r30, 12
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(12);

label_7F0635A8:
    // 7F0635A8: addi    r29, r29, 192
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(192);

label_7F0635AC:
    // 7F0635AC: bc    12, 0, 0x7F0634F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0634F8u;
                return;
            }
            goto label_7F0634F8;
        }
    }

label_7F0635B0:
    ctx->pc = 0x7F0635B0u;
    ctx->downcount -= 17;
    // 7F0635B0: lmw     r23, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0635B4:
    ctx->pc = 0x7F0635B4u;
    // 7F0635B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0635B8:
    ctx->pc = 0x7F0635B8u;
    // 7F0635B8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0635BC:
    ctx->pc = 0x7F0635BCu;
    // 7F0635BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0635C0:
    ctx->pc = 0x7F0635C0u;
    // 7F0635C0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0635C4:
    ctx->pc = 0x7F0635C4u;
    // 7F0635C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0635C8:
    ctx->pc = 0x7F0635C8u;
    ctx->downcount -= 18;
    // 7F0635C8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0635CC:
    ctx->pc = 0x7F0635CCu;
    // 7F0635CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0635D0:
    ctx->pc = 0x7F0635D0u;
    // 7F0635D0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0635D4:
    ctx->pc = 0x7F0635D4u;
    // 7F0635D4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0635D8:
    ctx->pc = 0x7F0635D8u;
    // 7F0635D8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0635DC:
    ctx->pc = 0x7F0635DCu;
    // 7F0635DC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0635E0:
    ctx->pc = 0x7F0635E0u;
    // 7F0635E0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0635E4:
    ctx->pc = 0x7F0635E4u;
    // 7F0635E4: bl      0x7F063428
    {
            ctx->lr = 0x7F0635E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F063428u;
                return;
            }
            goto label_7F063428;
    }

label_7F0635E8:
    ctx->pc = 0x7F0635E8u;
    ctx->downcount -= 6;
    // 7F0635E8: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0635EC:
    ctx->pc = 0x7F0635ECu;
    // 7F0635EC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0635F0:
    ctx->pc = 0x7F0635F0u;
    // 7F0635F0: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0635F4:
    ctx->pc = 0x7F0635F4u;
    // 7F0635F4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0635F8:
    ctx->pc = 0x7F0635F8u;
    // 7F0635F8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0635FC:
    ctx->pc = 0x7F0635FCu;
    // 7F0635FC: bl      0x7F063380
    {
            ctx->lr = 0x7F063600u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F063380u;
                return;
            }
            goto label_7F063380;
    }

label_7F063600:
    ctx->pc = 0x7F063600u;
    ctx->downcount -= 2;
    // 7F063600: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F063604:
    ctx->pc = 0x7F063604u;
    // 7F063604: bl      0x7F063324
    {
            ctx->lr = 0x7F063608u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F063324u;
                return;
            }
            goto label_7F063324;
    }

label_7F063608:
    ctx->pc = 0x7F063608u;
    ctx->downcount -= 3;
    // 7F063608: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F06360C:
    ctx->pc = 0x7F06360Cu;
    // 7F06360C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F063610:
    ctx->pc = 0x7F063610u;
    // 7F063610: bl      0x7F0637A0
    {
            ctx->lr = 0x7F063614u;
            goto label_7F0637A0;
    }

label_7F063614:
    ctx->pc = 0x7F063614u;
    ctx->downcount -= 17;
    // 7F063614: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F063618:
    ctx->pc = 0x7F063618u;
    // 7F063618: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F06361C:
    ctx->pc = 0x7F06361Cu;
    // 7F06361C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063620:
    ctx->pc = 0x7F063620u;
    // 7F063620: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F063624:
    ctx->pc = 0x7F063624u;
    // 7F063624: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F063628:
    ctx->pc = 0x7F063628u;
    // 7F063628: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F06362C:
    ctx->pc = 0x7F06362Cu;
    ctx->downcount -= 7;
    // 7F06362C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F063630:
    ctx->pc = 0x7F063630u;
    // 7F063630: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F063634:
    ctx->pc = 0x7F063634u;
    // 7F063634: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F063638:
    ctx->pc = 0x7F063638u;
    // 7F063638: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F06363C:
    ctx->pc = 0x7F06363Cu;
    // 7F06363C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F063640:
    ctx->pc = 0x7F063640u;
    // 7F063640: stw     r0, 27864(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(27864);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063644:
    ctx->pc = 0x7F063644u;
    // 7F063644: bl      0x7F062C60
    {
            ctx->lr = 0x7F063648u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F062C60u;
                return;
            }
            goto label_7F062C60;
    }

label_7F063648:
    ctx->pc = 0x7F063648u;
    ctx->downcount -= 6;
    // 7F063648: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F06364C:
    ctx->pc = 0x7F06364Cu;
    // 7F06364C: srawi r3, r3, 31
    {
        u32 sh = 31u;
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

label_7F063650:
    ctx->pc = 0x7F063650u;
    // 7F063650: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F063654:
    ctx->pc = 0x7F063654u;
    // 7F063654: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F063658:
    ctx->pc = 0x7F063658u;
    // 7F063658: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F06365C:
    ctx->pc = 0x7F06365Cu;
    ctx->downcount -= 21;
    // 7F06365C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F063660:
    ctx->pc = 0x7F063660u;
    // 7F063660: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F063664:
    ctx->pc = 0x7F063664u;
    // 7F063664: li      r5, 6352
    ctx->gpr[5] = (u32)(s32)(6352);

label_7F063668:
    ctx->pc = 0x7F063668u;
    // 7F063668: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F06366C:
    ctx->pc = 0x7F06366Cu;
    // 7F06366C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063670:
    ctx->pc = 0x7F063670u;
    // 7F063670: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F063674:
    ctx->pc = 0x7F063674u;
    // 7F063674: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063678:
    ctx->pc = 0x7F063678u;
    // 7F063678: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F06367C:
    ctx->pc = 0x7F06367Cu;
    // 7F06367C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F063680:
    ctx->pc = 0x7F063680u;
    // 7F063680: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F063684:
    ctx->pc = 0x7F063684u;
    // 7F063684: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F063688u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F063688:
    ctx->pc = 0x7F063688u;
    ctx->downcount -= 2;
    // 7F063688: or.   r31, r3, r3
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

label_7F06368C:
    ctx->pc = 0x7F06368Cu;
    // 7F06368C: bc    12, 2, 0x7F063714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F063714;
        }
    }

label_7F063690:
    ctx->pc = 0x7F063690u;
    ctx->downcount -= 5;
    // 7F063690: lis     r4, 32518
    ctx->gpr[4] = ((u32)(s32)(32518) << 16);

label_7F063694:
    ctx->pc = 0x7F063694u;
    // 7F063694: lis     r5, 32518
    ctx->gpr[5] = ((u32)(s32)(32518) << 16);

label_7F063698:
    ctx->pc = 0x7F063698u;
    // 7F063698: addi    r4, r4, 10412
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10412);

label_7F06369C:
    ctx->pc = 0x7F06369Cu;
    // 7F06369C: addi    r5, r5, 12624
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12624);

label_7F0636A0:
    ctx->pc = 0x7F0636A0u;
    // 7F0636A0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F0636A4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F0636A4:
    ctx->pc = 0x7F0636A4u;
    ctx->downcount -= 14;
    // 7F0636A4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0636A8:
    ctx->pc = 0x7F0636A8u;
    // 7F0636A8: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F0636AC:
    ctx->pc = 0x7F0636ACu;
    // 7F0636AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0636B0:
    ctx->pc = 0x7F0636B0u;
    // 7F0636B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0636B4:
    ctx->pc = 0x7F0636B4u;
    // 7F0636B4: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F0636B8:
    ctx->pc = 0x7F0636B8u;
    // 7F0636B8: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F0636BC:
    ctx->pc = 0x7F0636BCu;
    // 7F0636BC: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0636C0:
    ctx->pc = 0x7F0636C0u;
    // 7F0636C0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0636C4:
    ctx->pc = 0x7F0636C4u;
    // 7F0636C4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0636C8:
    ctx->pc = 0x7F0636C8u;
    // 7F0636C8: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0636CC:
    ctx->pc = 0x7F0636CCu;
    // 7F0636CC: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0636D0:
    ctx->pc = 0x7F0636D0u;
    // 7F0636D0: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0636D4:
    ctx->pc = 0x7F0636D4u;
    // 7F0636D4: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0636D8:
    ctx->pc = 0x7F0636D8u;
    // 7F0636D8: bl      0x7F06362C
    {
            ctx->lr = 0x7F0636DCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F06362Cu;
                return;
            }
            goto label_7F06362C;
    }

label_7F0636DC:
    ctx->pc = 0x7F0636DCu;
    ctx->downcount -= 2;
    // 7F0636DC: cmpwi   r3, 0
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

label_7F0636E0:
    ctx->pc = 0x7F0636E0u;
    // 7F0636E0: bc    4, 0, 0x7F0636F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0636F4;
        }
    }

label_7F0636E4:
    ctx->pc = 0x7F0636E4u;
    ctx->downcount -= 2;
    // 7F0636E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0636E8:
    ctx->pc = 0x7F0636E8u;
    // 7F0636E8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0636ECu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0636EC:
    ctx->pc = 0x7F0636ECu;
    ctx->downcount -= 2;
    // 7F0636EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0636F0:
    ctx->pc = 0x7F0636F0u;
    // 7F0636F0: b       0x7F06377C
    {
            goto label_7F06377C;
    }

label_7F0636F4:
    ctx->pc = 0x7F0636F4u;
    ctx->downcount -= 4;
    // 7F0636F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0636F8:
    ctx->pc = 0x7F0636F8u;
    // 7F0636F8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0636FC:
    ctx->pc = 0x7F0636FCu;
    // 7F0636FC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F063700:
    ctx->pc = 0x7F063700u;
    // 7F063700: bl      0x7F0635C8
    {
            ctx->lr = 0x7F063704u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0635C8u;
                return;
            }
            goto label_7F0635C8;
    }

label_7F063704:
    ctx->pc = 0x7F063704u;
    ctx->downcount -= 2;
    // 7F063704: cmpwi   r3, 0
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

label_7F063708:
    ctx->pc = 0x7F063708u;
    // 7F063708: bc    4, 0, 0x7F063714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F063714;
        }
    }

label_7F06370C:
    ctx->pc = 0x7F06370Cu;
    ctx->downcount -= 2;
    // 7F06370C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F063710:
    ctx->pc = 0x7F063710u;
    // 7F063710: b       0x7F06377C
    {
            goto label_7F06377C;
    }

label_7F063714:
    ctx->pc = 0x7F063714u;
    ctx->downcount -= 25;
    // 7F063714: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F063718:
    ctx->pc = 0x7F063718u;
    // 7F063718: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F06371C:
    ctx->pc = 0x7F06371Cu;
    // 7F06371C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F063720:
    ctx->pc = 0x7F063720u;
    // 7F063720: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F063724:
    ctx->pc = 0x7F063724u;
    // 7F063724: addi    r8, r6, -9036
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(-9036);

label_7F063728:
    ctx->pc = 0x7F063728u;
    // 7F063728: addi    r7, r5, -8992
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-8992);

label_7F06372C:
    ctx->pc = 0x7F06372Cu;
    // 7F06372C: addi    r6, r4, -8988
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-8988);

label_7F063730:
    ctx->pc = 0x7F063730u;
    // 7F063730: addi    r5, r3, -8984
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8984);

label_7F063734:
    ctx->pc = 0x7F063734u;
    // 7F063734: lfs     f3, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F063734u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F063738:
    ctx->pc = 0x7F063738u;
    // 7F063738: lis     r4, 58
    ctx->gpr[4] = ((u32)(s32)(58) << 16);

label_7F06373C:
    ctx->pc = 0x7F06373Cu;
    // 7F06373C: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F06373Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F063740:
    ctx->pc = 0x7F063740u;
    // 7F063740: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F063744:
    ctx->pc = 0x7F063744u;
    // 7F063744: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F063744u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F063748:
    ctx->pc = 0x7F063748u;
    // 7F063748: addi    r4, r4, 25557
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25557);

label_7F06374C:
    ctx->pc = 0x7F06374Cu;
    // 7F06374C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F06374Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063750:
    ctx->pc = 0x7F063750u;
    // 7F063750: addi    r5, r31, 464
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(464);

label_7F063754:
    ctx->pc = 0x7F063754u;
    // 7F063754: stfs     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063754u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F063758:
    ctx->pc = 0x7F063758u;
    // 7F063758: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F06375C:
    ctx->pc = 0x7F06375Cu;
    // 7F06375C: li      r6, 12
    ctx->gpr[6] = (u32)(s32)(12);

label_7F063760:
    ctx->pc = 0x7F063760u;
    // 7F063760: li      r8, 200
    ctx->gpr[8] = (u32)(s32)(200);

label_7F063764:
    ctx->pc = 0x7F063764u;
    // 7F063764: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063764u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F063768:
    ctx->pc = 0x7F063768u;
    // 7F063768: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F06376C:
    ctx->pc = 0x7F06376Cu;
    // 7F06376C: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F06376Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F063770:
    ctx->pc = 0x7F063770u;
    // 7F063770: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063770u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F063774:
    ctx->pc = 0x7F063774u;
    // 7F063774: bl      0x7F2C5C9C
    {
            ctx->lr = 0x7F063778u;
            ctx->pc = 0x7F2C5C9Cu;
            return;
    }

label_7F063778:
    ctx->pc = 0x7F063778u;
    ctx->downcount -= 1;
    // 7F063778: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F06377C:
    ctx->pc = 0x7F06377Cu;
    ctx->downcount -= 16;
    // 7F06377C: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F063780:
    ctx->pc = 0x7F063780u;
    // 7F063780: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063784:
    ctx->pc = 0x7F063784u;
    // 7F063784: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F063788:
    ctx->pc = 0x7F063788u;
    // 7F063788: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F06378C:
    ctx->pc = 0x7F06378Cu;
    // 7F06378C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063790:
    ctx->pc = 0x7F063790u;
    ctx->downcount -= 4;
    // 7F063790: lwz     r0, 5600(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5600);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063794:
    ctx->pc = 0x7F063794u;
    // 7F063794: stw     r4, 5600(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5600);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F063798:
    ctx->pc = 0x7F063798u;
    // 7F063798: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F06379C:
    ctx->pc = 0x7F06379Cu;
    // 7F06379C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0637A0:
    ctx->pc = 0x7F0637A0u;
    ctx->downcount -= 17;
    // 7F0637A0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0637A4:
    ctx->pc = 0x7F0637A4u;
    // 7F0637A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0637A8:
    ctx->pc = 0x7F0637A8u;
    // 7F0637A8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0637AC:
    ctx->pc = 0x7F0637ACu;
    // 7F0637AC: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0637B0:
    ctx->pc = 0x7F0637B0u;
    // 7F0637B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0637B4:
    ctx->pc = 0x7F0637B4u;
    // 7F0637B4: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0637B8:
    ctx->pc = 0x7F0637B8u;
    // 7F0637B8: bl      0x7F01B1CC
    {
            ctx->lr = 0x7F0637BCu;
            ctx->pc = 0x7F01B1CCu;
            return;
    }

label_7F0637BC:
    ctx->pc = 0x7F0637BCu;
    ctx->downcount -= 18;
    // 7F0637BC: li      r0, 150
    ctx->gpr[0] = (u32)(s32)(150);

label_7F0637C0:
    ctx->pc = 0x7F0637C0u;
    // 7F0637C0: li      r9, -825
    ctx->gpr[9] = (u32)(s32)(-825);

label_7F0637C4:
    ctx->pc = 0x7F0637C4u;
    // 7F0637C4: li      r8, 1550
    ctx->gpr[8] = (u32)(s32)(1550);

label_7F0637C8:
    ctx->pc = 0x7F0637C8u;
    // 7F0637C8: li      r7, -150
    ctx->gpr[7] = (u32)(s32)(-150);

label_7F0637CC:
    ctx->pc = 0x7F0637CCu;
    // 7F0637CC: lis     r6, 3
    ctx->gpr[6] = ((u32)(s32)(3) << 16);

label_7F0637D0:
    ctx->pc = 0x7F0637D0u;
    // 7F0637D0: stw     r9, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0637D4:
    ctx->pc = 0x7F0637D4u;
    // 7F0637D4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0637D8:
    ctx->pc = 0x7F0637D8u;
    // 7F0637D8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0637DC:
    ctx->pc = 0x7F0637DCu;
    // 7F0637DC: stw     r8, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0637E0:
    ctx->pc = 0x7F0637E0u;
    // 7F0637E0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0637E4:
    ctx->pc = 0x7F0637E4u;
    // 7F0637E4: addi    r6, r6, 32480
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32480);

label_7F0637E8:
    ctx->pc = 0x7F0637E8u;
    // 7F0637E8: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0637EC:
    ctx->pc = 0x7F0637ECu;
    // 7F0637EC: stw     r8, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0637F0:
    ctx->pc = 0x7F0637F0u;
    // 7F0637F0: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0637F4:
    ctx->pc = 0x7F0637F4u;
    // 7F0637F4: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0637F8:
    ctx->pc = 0x7F0637F8u;
    // 7F0637F8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0637FC:
    ctx->pc = 0x7F0637FCu;
    // 7F0637FC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063800:
    ctx->pc = 0x7F063800u;
    // 7F063800: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F063804u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F063804:
    ctx->pc = 0x7F063804u;
    ctx->downcount -= 13;
    // 7F063804: stw     r3, 3892(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3892);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F063808:
    ctx->pc = 0x7F063808u;
    // 7F063808: li      r7, -150
    ctx->gpr[7] = (u32)(s32)(-150);

label_7F06380C:
    ctx->pc = 0x7F06380Cu;
    // 7F06380C: li      r0, 150
    ctx->gpr[0] = (u32)(s32)(150);

label_7F063810:
    ctx->pc = 0x7F063810u;
    // 7F063810: lis     r6, 3
    ctx->gpr[6] = ((u32)(s32)(3) << 16);

label_7F063814:
    ctx->pc = 0x7F063814u;
    // 7F063814: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F063818:
    ctx->pc = 0x7F063818u;
    // 7F063818: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F06381C:
    ctx->pc = 0x7F06381Cu;
    // 7F06381C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F063820:
    ctx->pc = 0x7F063820u;
    // 7F063820: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F063824:
    ctx->pc = 0x7F063824u;
    // 7F063824: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063828:
    ctx->pc = 0x7F063828u;
    // 7F063828: addi    r6, r6, 32480
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32480);

label_7F06382C:
    ctx->pc = 0x7F06382Cu;
    // 7F06382C: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F063830:
    ctx->pc = 0x7F063830u;
    // 7F063830: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F063834:
    ctx->pc = 0x7F063834u;
    // 7F063834: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F063838u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F063838:
    ctx->pc = 0x7F063838u;
    ctx->downcount -= 13;
    // 7F063838: stw     r3, 3896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3896);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F06383C:
    ctx->pc = 0x7F06383Cu;
    // 7F06383C: li      r7, -150
    ctx->gpr[7] = (u32)(s32)(-150);

label_7F063840:
    ctx->pc = 0x7F063840u;
    // 7F063840: li      r0, 150
    ctx->gpr[0] = (u32)(s32)(150);

label_7F063844:
    ctx->pc = 0x7F063844u;
    // 7F063844: lis     r6, 3
    ctx->gpr[6] = ((u32)(s32)(3) << 16);

label_7F063848:
    ctx->pc = 0x7F063848u;
    // 7F063848: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F06384C:
    ctx->pc = 0x7F06384Cu;
    // 7F06384C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F063850:
    ctx->pc = 0x7F063850u;
    // 7F063850: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F063854:
    ctx->pc = 0x7F063854u;
    // 7F063854: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F063858:
    ctx->pc = 0x7F063858u;
    // 7F063858: stw     r7, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F06385C:
    ctx->pc = 0x7F06385Cu;
    // 7F06385C: addi    r6, r6, 32480
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32480);

label_7F063860:
    ctx->pc = 0x7F063860u;
    // 7F063860: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063864:
    ctx->pc = 0x7F063864u;
    // 7F063864: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F063868:
    ctx->pc = 0x7F063868u;
    // 7F063868: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F06386Cu;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F06386C:
    ctx->pc = 0x7F06386Cu;
    ctx->downcount -= 13;
    // 7F06386C: stw     r3, 3900(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3900);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F063870:
    ctx->pc = 0x7F063870u;
    // 7F063870: li      r7, 150
    ctx->gpr[7] = (u32)(s32)(150);

label_7F063874:
    ctx->pc = 0x7F063874u;
    // 7F063874: li      r0, -150
    ctx->gpr[0] = (u32)(s32)(-150);

label_7F063878:
    ctx->pc = 0x7F063878u;
    // 7F063878: lis     r6, 3
    ctx->gpr[6] = ((u32)(s32)(3) << 16);

label_7F06387C:
    ctx->pc = 0x7F06387Cu;
    // 7F06387C: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F063880:
    ctx->pc = 0x7F063880u;
    // 7F063880: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F063884:
    ctx->pc = 0x7F063884u;
    // 7F063884: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F063888:
    ctx->pc = 0x7F063888u;
    // 7F063888: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F06388C:
    ctx->pc = 0x7F06388Cu;
    // 7F06388C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063890:
    ctx->pc = 0x7F063890u;
    // 7F063890: addi    r6, r6, 32480
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32480);

label_7F063894:
    ctx->pc = 0x7F063894u;
    // 7F063894: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F063898:
    ctx->pc = 0x7F063898u;
    // 7F063898: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F06389C:
    ctx->pc = 0x7F06389Cu;
    // 7F06389C: bl      0x7F10C1C8
    {
            ctx->lr = 0x7F0638A0u;
            ctx->pc = 0x7F10C1C8u;
            return;
    }

label_7F0638A0:
    ctx->pc = 0x7F0638A0u;
    ctx->downcount -= 5;
    // 7F0638A0: stw     r3, 3904(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3904);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0638A4:
    ctx->pc = 0x7F0638A4u;
    // 7F0638A4: addi    r3, r31, 3892
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3892);

label_7F0638A8:
    ctx->pc = 0x7F0638A8u;
    // 7F0638A8: lwz     r4, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0638AC:
    ctx->pc = 0x7F0638ACu;
    // 7F0638AC: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F0638B0:
    ctx->pc = 0x7F0638B0u;
    // 7F0638B0: bl      0x7F03F67C
    {
            ctx->lr = 0x7F0638B4u;
            ctx->pc = 0x7F03F67Cu;
            return;
    }

label_7F0638B4:
    ctx->pc = 0x7F0638B4u;
    ctx->downcount -= 16;
    // 7F0638B4: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0638B8:
    ctx->pc = 0x7F0638B8u;
    // 7F0638B8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0638BC:
    ctx->pc = 0x7F0638BCu;
    // 7F0638BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0638C0:
    ctx->pc = 0x7F0638C0u;
    // 7F0638C0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0638C4:
    ctx->pc = 0x7F0638C4u;
    // 7F0638C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0638C8:
    ctx->pc = 0x7F0638C8u;
    ctx->downcount -= 16;
    // 7F0638C8: lfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0638C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0638CC:
    ctx->pc = 0x7F0638CCu;
    // 7F0638CC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0638CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0638D0:
    ctx->pc = 0x7F0638D0u;
    // 7F0638D0: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0638D0u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F0638D4:
    ctx->pc = 0x7F0638D4u;
    // 7F0638D4: fmadds f0, f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0638D4u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F0638D8:
    ctx->pc = 0x7F0638D8u;
    // 7F0638D8: stfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0638D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0638DC:
    ctx->pc = 0x7F0638DCu;
    // 7F0638DC: lfs     f2, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0638DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0638E0:
    ctx->pc = 0x7F0638E0u;
    // 7F0638E0: lfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0638E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0638E4:
    ctx->pc = 0x7F0638E4u;
    // 7F0638E4: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0638E4u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F0638E8:
    ctx->pc = 0x7F0638E8u;
    // 7F0638E8: fmadds f0, f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0638E8u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F0638EC:
    ctx->pc = 0x7F0638ECu;
    // 7F0638EC: stfs     f0, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0638ECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0638F0:
    ctx->pc = 0x7F0638F0u;
    // 7F0638F0: lfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0638F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0638F4:
    ctx->pc = 0x7F0638F4u;
    // 7F0638F4: lfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0638F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0638F8:
    ctx->pc = 0x7F0638F8u;
    // 7F0638F8: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0638F8u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F0638FC:
    ctx->pc = 0x7F0638FCu;
    // 7F0638FC: fmadds f0, f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0638FCu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[0], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F063900:
    ctx->pc = 0x7F063900u;
    // 7F063900: stfs     f0, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F063900u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F063904:
    ctx->pc = 0x7F063904u;
    // 7F063904: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063908:
    ctx->pc = 0x7F063908u;
    ctx->downcount -= 24;
    // 7F063908: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F06390C:
    ctx->pc = 0x7F06390Cu;
    // 7F06390C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F063910:
    ctx->pc = 0x7F063910u;
    // 7F063910: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063914:
    ctx->pc = 0x7F063914u;
    // 7F063914: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063914u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F063918:
    ctx->pc = 0x7F063918u;
    // 7F063918: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F063918u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F063918u);
        if (ctx->exception) return;
    }

label_7F06391C:
    ctx->pc = 0x7F06391Cu;
    // 7F06391C: stmw     r28, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F063920:
    ctx->pc = 0x7F063920u;
    // 7F063920: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063920u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F063924:
    ctx->pc = 0x7F063924u;
    // 7F063924: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F063928:
    ctx->pc = 0x7F063928u;
    // 7F063928: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F06392C:
    ctx->pc = 0x7F06392Cu;
    // 7F06392C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F063930:
    ctx->pc = 0x7F063930u;
    // 7F063930: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F063934:
    ctx->pc = 0x7F063934u;
    // 7F063934: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F063938:
    ctx->pc = 0x7F063938u;
    // 7F063938: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F06393C:
    ctx->pc = 0x7F06393Cu;
    // 7F06393C: bl      0x7F0638C8
    {
            ctx->lr = 0x7F063940u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0638C8u;
                return;
            }
            goto label_7F0638C8;
    }

label_7F063940:
    ctx->pc = 0x7F063940u;
    ctx->downcount -= 5;
    // 7F063940: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063940u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F063944:
    ctx->pc = 0x7F063944u;
    // 7F063944: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F063948:
    ctx->pc = 0x7F063948u;
    // 7F063948: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F06394C:
    ctx->pc = 0x7F06394Cu;
    // 7F06394C: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F063950:
    ctx->pc = 0x7F063950u;
    // 7F063950: bl      0x7F0638C8
    {
            ctx->lr = 0x7F063954u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0638C8u;
                return;
            }
            goto label_7F0638C8;
    }

label_7F063954:
    ctx->pc = 0x7F063954u;
    ctx->downcount -= 5;
    // 7F063954: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063954u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F063958:
    ctx->pc = 0x7F063958u;
    // 7F063958: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F06395C:
    ctx->pc = 0x7F06395Cu;
    // 7F06395C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F063960:
    ctx->pc = 0x7F063960u;
    // 7F063960: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F063964:
    ctx->pc = 0x7F063964u;
    // 7F063964: bl      0x7F0638C8
    {
            ctx->lr = 0x7F063968u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0638C8u;
                return;
            }
            goto label_7F0638C8;
    }

label_7F063968:
    ctx->pc = 0x7F063968u;
    ctx->downcount -= 5;
    // 7F063968: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063968u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F06396C:
    ctx->pc = 0x7F06396Cu;
    // 7F06396C: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F063970:
    ctx->pc = 0x7F063970u;
    // 7F063970: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063974:
    ctx->pc = 0x7F063974u;
    // 7F063974: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F063978:
    ctx->pc = 0x7F063978u;
    // 7F063978: bl      0x7F0638C8
    {
            ctx->lr = 0x7F06397Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0638C8u;
                return;
            }
            goto label_7F0638C8;
    }

label_7F06397C:
    ctx->pc = 0x7F06397Cu;
    ctx->downcount -= 5;
    // 7F06397C: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F06397Cu)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F063980:
    ctx->pc = 0x7F063980u;
    // 7F063980: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F063984:
    ctx->pc = 0x7F063984u;
    // 7F063984: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F063988:
    ctx->pc = 0x7F063988u;
    // 7F063988: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F06398C:
    ctx->pc = 0x7F06398Cu;
    // 7F06398C: bl      0x7F0638C8
    {
            ctx->lr = 0x7F063990u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0638C8u;
                return;
            }
            goto label_7F0638C8;
    }

label_7F063990:
    ctx->pc = 0x7F063990u;
    ctx->downcount -= 5;
    // 7F063990: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063990u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_7F063994:
    ctx->pc = 0x7F063994u;
    // 7F063994: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F063998:
    ctx->pc = 0x7F063998u;
    // 7F063998: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F06399C:
    ctx->pc = 0x7F06399Cu;
    // 7F06399C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0639A0:
    ctx->pc = 0x7F0639A0u;
    // 7F0639A0: bl      0x7F0638C8
    {
            ctx->lr = 0x7F0639A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0638C8u;
                return;
            }
            goto label_7F0638C8;
    }

label_7F0639A4:
    ctx->pc = 0x7F0639A4u;
    ctx->downcount -= 21;
    // 7F0639A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0639A8:
    ctx->pc = 0x7F0639A8u;
    // 7F0639A8: lfs     f0, -8984(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0639A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0639AC:
    ctx->pc = 0x7F0639ACu;
    // 7F0639AC: stfs     f0, 12(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0639ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0639B0:
    ctx->pc = 0x7F0639B0u;
    // 7F0639B0: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0639B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F0639B0u);
        if (ctx->exception) return;
    }

label_7F0639B4:
    ctx->pc = 0x7F0639B4u;
    // 7F0639B4: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0639B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0639B8:
    ctx->pc = 0x7F0639B8u;
    // 7F0639B8: lmw     r28, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0639BC:
    ctx->pc = 0x7F0639BCu;
    // 7F0639BC: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0639C0:
    ctx->pc = 0x7F0639C0u;
    // 7F0639C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0639C4:
    ctx->pc = 0x7F0639C4u;
    // 7F0639C4: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F0639C8:
    ctx->pc = 0x7F0639C8u;
    // 7F0639C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0639CC:
    ctx->pc = 0x7F0639CCu;
    ctx->downcount -= 63;
    // 7F0639CC: stwu     r1, -480(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-480);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0639D0:
    ctx->pc = 0x7F0639D0u;
    // 7F0639D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0639D4:
    ctx->pc = 0x7F0639D4u;
    // 7F0639D4: stw     r0, 484(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0639D8:
    ctx->pc = 0x7F0639D8u;
    // 7F0639D8: stfd     f31, 464(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0639D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(464);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F0639DC:
    ctx->pc = 0x7F0639DCu;
    // 7F0639DC: psq_st   f31, 472(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0639DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(472);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F0639DCu);
        if (ctx->exception) return;
    }

label_7F0639E0:
    ctx->pc = 0x7F0639E0u;
    // 7F0639E0: stfd     f30, 448(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0639E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(448);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F0639E4:
    ctx->pc = 0x7F0639E4u;
    // 7F0639E4: psq_st   f30, 456(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0639E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(456);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F0639E4u);
        if (ctx->exception) return;
    }

label_7F0639E8:
    ctx->pc = 0x7F0639E8u;
    // 7F0639E8: stfd     f29, 432(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0639E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F0639EC:
    ctx->pc = 0x7F0639ECu;
    // 7F0639EC: psq_st   f29, 440(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F0639ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(440);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F0639ECu);
        if (ctx->exception) return;
    }

label_7F0639F0:
    ctx->pc = 0x7F0639F0u;
    // 7F0639F0: stmw     r28, 416(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0639F4:
    ctx->pc = 0x7F0639F4u;
    // 7F0639F4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F0639F8:
    ctx->pc = 0x7F0639F8u;
    // 7F0639F8: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F0639FC:
    ctx->pc = 0x7F0639FCu;
    // 7F0639FC: addi    r11, r4, 7076
    ctx->gpr[11] = ctx->gpr[4] + (u32)(s32)(7076);

label_7F063A00:
    ctx->pc = 0x7F063A00u;
    // 7F063A00: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063A04:
    ctx->pc = 0x7F063A04u;
    // 7F063A04: lwz     r8, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F063A08:
    ctx->pc = 0x7F063A08u;
    // 7F063A08: addi    r7, r5, 7092
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(7092);

label_7F063A0C:
    ctx->pc = 0x7F063A0Cu;
    // 7F063A0C: lwz     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F063A10:
    ctx->pc = 0x7F063A10u;
    // 7F063A10: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F063A14:
    ctx->pc = 0x7F063A14u;
    // 7F063A14: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F063A18:
    ctx->pc = 0x7F063A18u;
    // 7F063A18: stw     r8, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F063A1C:
    ctx->pc = 0x7F063A1Cu;
    // 7F063A1C: lfs     f3, -8980(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F063A1Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F063A20:
    ctx->pc = 0x7F063A20u;
    // 7F063A20: stw     r6, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F063A24:
    ctx->pc = 0x7F063A24u;
    // 7F063A24: lfs     f0, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063A24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063A28:
    ctx->pc = 0x7F063A28u;
    // 7F063A28: lfs     f1, 164(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063A28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F063A2C:
    ctx->pc = 0x7F063A2Cu;
    // 7F063A2C: fadds   f2, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F063A2Cu)) return;
    ppc_fadds(ctx, 2, 0, 3);

label_7F063A30:
    ctx->pc = 0x7F063A30u;
    // 7F063A30: stw     r5, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F063A34:
    ctx->pc = 0x7F063A34u;
    // 7F063A34: lwz     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F063A38:
    ctx->pc = 0x7F063A38u;
    // 7F063A38: fadds   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F063A38u)) return;
    ppc_fadds(ctx, 1, 1, 3);

label_7F063A3C:
    ctx->pc = 0x7F063A3Cu;
    // 7F063A3C: lwz     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F063A40:
    ctx->pc = 0x7F063A40u;
    // 7F063A40: lwz     r4, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F063A44:
    ctx->pc = 0x7F063A44u;
    // 7F063A44: lwz     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F063A48:
    ctx->pc = 0x7F063A48u;
    // 7F063A48: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063A4C:
    ctx->pc = 0x7F063A4Cu;
    // 7F063A4C: lfs     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063A4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063A50:
    ctx->pc = 0x7F063A50u;
    // 7F063A50: stw     r10, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F063A54:
    ctx->pc = 0x7F063A54u;
    // 7F063A54: fadds   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F063A54u)) return;
    ppc_fadds(ctx, 0, 0, 3);

label_7F063A58:
    ctx->pc = 0x7F063A58u;
    // 7F063A58: stw     r9, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F063A5C:
    ctx->pc = 0x7F063A5Cu;
    // 7F063A5C: stw     r8, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F063A60:
    ctx->pc = 0x7F063A60u;
    // 7F063A60: stw     r4, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F063A64:
    ctx->pc = 0x7F063A64u;
    // 7F063A64: stw     r6, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F063A68:
    ctx->pc = 0x7F063A68u;
    // 7F063A68: stw     r5, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F063A6C:
    ctx->pc = 0x7F063A6Cu;
    // 7F063A6C: stw     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F063A70:
    ctx->pc = 0x7F063A70u;
    // 7F063A70: stw     r0, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063A74:
    ctx->pc = 0x7F063A74u;
    // 7F063A74: stw     r10, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F063A78:
    ctx->pc = 0x7F063A78u;
    // 7F063A78: stw     r9, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F063A7C:
    ctx->pc = 0x7F063A7Cu;
    // 7F063A7C: stw     r4, 192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F063A80:
    ctx->pc = 0x7F063A80u;
    // 7F063A80: stw     r3, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F063A84:
    ctx->pc = 0x7F063A84u;
    // 7F063A84: stw     r0, 176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063A88:
    ctx->pc = 0x7F063A88u;
    // 7F063A88: stfs     f2, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063A88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F063A8C:
    ctx->pc = 0x7F063A8Cu;
    // 7F063A8C: stfs     f1, 164(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063A8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F063A90:
    ctx->pc = 0x7F063A90u;
    // 7F063A90: stfs     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063A90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F063A94:
    ctx->pc = 0x7F063A94u;
    // 7F063A94: lwz     r3, 464(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F063A98:
    ctx->pc = 0x7F063A98u;
    // 7F063A98: addi    r3, r3, 5304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5304);

label_7F063A9C:
    ctx->pc = 0x7F063A9Cu;
    // 7F063A9C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F063AA0u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F063AA0:
    ctx->pc = 0x7F063AA0u;
    ctx->downcount -= 5;
    // 7F063AA0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F063AA4:
    ctx->pc = 0x7F063AA4u;
    // 7F063AA4: addi    r4, r1, 196
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(196);

label_7F063AA8:
    ctx->pc = 0x7F063AA8u;
    // 7F063AA8: addi    r3, r3, 7108
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7108);

label_7F063AAC:
    ctx->pc = 0x7F063AACu;
    // 7F063AAC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F063AB0:
    ctx->pc = 0x7F063AB0u;
    // 7F063AB0: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F063AB4u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F063AB4:
    ctx->pc = 0x7F063AB4u;
    ctx->downcount -= 51;
    // 7F063AB4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F063AB8:
    ctx->pc = 0x7F063AB8u;
    // 7F063AB8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F063ABC:
    ctx->pc = 0x7F063ABCu;
    // 7F063ABC: addi    r6, r4, 7044
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(7044);

label_7F063AC0:
    ctx->pc = 0x7F063AC0u;
    // 7F063AC0: lfs     f0, 180(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063AC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063AC4:
    ctx->pc = 0x7F063AC4u;
    // 7F063AC4: addi    r5, r3, 7076
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7076);

label_7F063AC8:
    ctx->pc = 0x7F063AC8u;
    // 7F063AC8: lfs     f2, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F063AC8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F063ACC:
    ctx->pc = 0x7F063ACCu;
    // 7F063ACC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F063ACCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F063AD0:
    ctx->pc = 0x7F063AD0u;
    // 7F063AD0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F063AD4:
    ctx->pc = 0x7F063AD4u;
    // 7F063AD4: fadds   f5, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063AD4u)) return;
    ppc_fadds(ctx, 5, 2, 0);

label_7F063AD8:
    ctx->pc = 0x7F063AD8u;
    // 7F063AD8: lfs     f3, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F063AD8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F063ADC:
    ctx->pc = 0x7F063ADCu;
    // 7F063ADC: fadds   f11, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063ADCu)) return;
    ppc_fadds(ctx, 11, 2, 1);

label_7F063AE0:
    ctx->pc = 0x7F063AE0u;
    // 7F063AE0: lfs     f1, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F063AE0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F063AE4:
    ctx->pc = 0x7F063AE4u;
    // 7F063AE4: lfs     f0, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063AE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063AE8:
    ctx->pc = 0x7F063AE8u;
    // 7F063AE8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F063AEC:
    ctx->pc = 0x7F063AECu;
    // 7F063AEC: fadds   f10, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063AECu)) return;
    ppc_fadds(ctx, 10, 3, 1);

label_7F063AF0:
    ctx->pc = 0x7F063AF0u;
    // 7F063AF0: lfsu     f6, 7060(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F063AF0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7060);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
        ctx->gpr[4] = ea;
    }

label_7F063AF4:
    ctx->pc = 0x7F063AF4u;
    // 7F063AF4: fadds   f4, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063AF4u)) return;
    ppc_fadds(ctx, 4, 3, 0);

label_7F063AF8:
    ctx->pc = 0x7F063AF8u;
    // 7F063AF8: lfs     f2, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F063AF8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F063AFC:
    ctx->pc = 0x7F063AFCu;
    // 7F063AFC: lfs     f1, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F063AFCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F063B00:
    ctx->pc = 0x7F063B00u;
    // 7F063B00: lfs     f0, 188(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063B04:
    ctx->pc = 0x7F063B04u;
    // 7F063B04: fadds   f9, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063B04u)) return;
    ppc_fadds(ctx, 9, 2, 1);

label_7F063B08:
    ctx->pc = 0x7F063B08u;
    // 7F063B08: lfsu     f1, 7092(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F063B08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7092);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
        ctx->gpr[3] = ea;
    }

label_7F063B0C:
    ctx->pc = 0x7F063B0Cu;
    // 7F063B0C: fadds   f3, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063B0Cu)) return;
    ppc_fadds(ctx, 3, 2, 0);

label_7F063B10:
    ctx->pc = 0x7F063B10u;
    // 7F063B10: lfs     f0, 164(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063B14:
    ctx->pc = 0x7F063B14u;
    // 7F063B14: fadds   f8, f6, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063B14u)) return;
    ppc_fadds(ctx, 8, 6, 1);

label_7F063B18:
    ctx->pc = 0x7F063B18u;
    // 7F063B18: lfs     f12, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F063B18u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[12] = value;
        ctx->ps1[12] = value;
    }

label_7F063B1C:
    ctx->pc = 0x7F063B1Cu;
    // 7F063B1C: fadds   f2, f6, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063B1Cu)) return;
    ppc_fadds(ctx, 2, 6, 0);

label_7F063B20:
    ctx->pc = 0x7F063B20u;
    // 7F063B20: lfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F063B20u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F063B24:
    ctx->pc = 0x7F063B24u;
    // 7F063B24: lfs     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063B28:
    ctx->pc = 0x7F063B28u;
    // 7F063B28: fadds   f7, f12, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063B28u)) return;
    ppc_fadds(ctx, 7, 12, 1);

label_7F063B2C:
    ctx->pc = 0x7F063B2Cu;
    // 7F063B2C: lfs     f13, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F063B2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[13] = value;
        ctx->ps1[13] = value;
    }

label_7F063B30:
    ctx->pc = 0x7F063B30u;
    // 7F063B30: fadds   f1, f12, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063B30u)) return;
    ppc_fadds(ctx, 1, 12, 0);

label_7F063B34:
    ctx->pc = 0x7F063B34u;
    // 7F063B34: lfs     f6, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F063B34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F063B38:
    ctx->pc = 0x7F063B38u;
    // 7F063B38: lfs     f0, 172(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063B3C:
    ctx->pc = 0x7F063B3Cu;
    // 7F063B3C: fadds   f6, f13, f6
    if (!ppc_fp_available_inline(ctx, 0x7F063B3Cu)) return;
    ppc_fadds(ctx, 6, 13, 6);

label_7F063B40:
    ctx->pc = 0x7F063B40u;
    // 7F063B40: stfs     f11, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[11]));
    }

label_7F063B44:
    ctx->pc = 0x7F063B44u;
    // 7F063B44: fadds   f0, f13, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063B44u)) return;
    ppc_fadds(ctx, 0, 13, 0);

label_7F063B48:
    ctx->pc = 0x7F063B48u;
    // 7F063B48: stfs     f10, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[10]));
    }

label_7F063B4C:
    ctx->pc = 0x7F063B4Cu;
    // 7F063B4C: stfs     f9, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

label_7F063B50:
    ctx->pc = 0x7F063B50u;
    // 7F063B50: stfs     f8, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

label_7F063B54:
    ctx->pc = 0x7F063B54u;
    // 7F063B54: stfs     f7, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_7F063B58:
    ctx->pc = 0x7F063B58u;
    // 7F063B58: stfs     f6, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F063B5C:
    ctx->pc = 0x7F063B5Cu;
    // 7F063B5C: stfs     f5, 148(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F063B60:
    ctx->pc = 0x7F063B60u;
    // 7F063B60: stfs     f4, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F063B64:
    ctx->pc = 0x7F063B64u;
    // 7F063B64: stfs     f3, 156(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F063B68:
    ctx->pc = 0x7F063B68u;
    // 7F063B68: stfs     f2, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F063B6C:
    ctx->pc = 0x7F063B6Cu;
    // 7F063B6C: stfs     f1, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F063B70:
    ctx->pc = 0x7F063B70u;
    // 7F063B70: stfs     f0, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063B70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F063B74:
    ctx->pc = 0x7F063B74u;
    // 7F063B74: lwz     r3, 464(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F063B78:
    ctx->pc = 0x7F063B78u;
    // 7F063B78: addi    r3, r3, 2388
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2388);

label_7F063B7C:
    ctx->pc = 0x7F063B7Cu;
    // 7F063B7C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F063B80u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F063B80:
    ctx->pc = 0x7F063B80u;
    ctx->downcount -= 4;
    // 7F063B80: addi    r3, r1, 36
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(36);

label_7F063B84:
    ctx->pc = 0x7F063B84u;
    // 7F063B84: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F063B88:
    ctx->pc = 0x7F063B88u;
    // 7F063B88: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063B8C:
    ctx->pc = 0x7F063B8Cu;
    // 7F063B8C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F063B90u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F063B90:
    ctx->pc = 0x7F063B90u;
    ctx->downcount -= 4;
    // 7F063B90: addi    r3, r1, 100
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(100);

label_7F063B94:
    ctx->pc = 0x7F063B94u;
    // 7F063B94: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F063B98:
    ctx->pc = 0x7F063B98u;
    // 7F063B98: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063B9C:
    ctx->pc = 0x7F063B9Cu;
    // 7F063B9C: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F063BA0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F063BA0:
    ctx->pc = 0x7F063BA0u;
    ctx->downcount -= 4;
    // 7F063BA0: addi    r3, r1, 148
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(148);

label_7F063BA4:
    ctx->pc = 0x7F063BA4u;
    // 7F063BA4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F063BA8:
    ctx->pc = 0x7F063BA8u;
    // 7F063BA8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063BAC:
    ctx->pc = 0x7F063BACu;
    // 7F063BAC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F063BB0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F063BB0:
    ctx->pc = 0x7F063BB0u;
    ctx->downcount -= 4;
    // 7F063BB0: addi    r3, r1, 180
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(180);

label_7F063BB4:
    ctx->pc = 0x7F063BB4u;
    // 7F063BB4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F063BB8:
    ctx->pc = 0x7F063BB8u;
    // 7F063BB8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063BBC:
    ctx->pc = 0x7F063BBCu;
    // 7F063BBC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F063BC0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F063BC0:
    ctx->pc = 0x7F063BC0u;
    ctx->downcount -= 3;
    // 7F063BC0: lwz     r3, 3936(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F063BC4:
    ctx->pc = 0x7F063BC4u;
    // 7F063BC4: addi    r3, r3, 1092
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1092);

label_7F063BC8:
    ctx->pc = 0x7F063BC8u;
    // 7F063BC8: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F063BCCu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F063BCC:
    ctx->pc = 0x7F063BCCu;
    ctx->downcount -= 4;
    // 7F063BCC: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_7F063BD0:
    ctx->pc = 0x7F063BD0u;
    // 7F063BD0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F063BD4:
    ctx->pc = 0x7F063BD4u;
    // 7F063BD4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063BD8:
    ctx->pc = 0x7F063BD8u;
    // 7F063BD8: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F063BDCu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F063BDC:
    ctx->pc = 0x7F063BDCu;
    ctx->downcount -= 4;
    // 7F063BDC: addi    r3, r1, 84
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(84);

label_7F063BE0:
    ctx->pc = 0x7F063BE0u;
    // 7F063BE0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F063BE4:
    ctx->pc = 0x7F063BE4u;
    // 7F063BE4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063BE8:
    ctx->pc = 0x7F063BE8u;
    // 7F063BE8: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F063BECu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F063BEC:
    ctx->pc = 0x7F063BECu;
    ctx->downcount -= 4;
    // 7F063BEC: addi    r3, r1, 132
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(132);

label_7F063BF0:
    ctx->pc = 0x7F063BF0u;
    // 7F063BF0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F063BF4:
    ctx->pc = 0x7F063BF4u;
    // 7F063BF4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063BF8:
    ctx->pc = 0x7F063BF8u;
    // 7F063BF8: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F063BFCu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F063BFC:
    ctx->pc = 0x7F063BFCu;
    ctx->downcount -= 4;
    // 7F063BFC: addi    r3, r1, 164
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(164);

label_7F063C00:
    ctx->pc = 0x7F063C00u;
    // 7F063C00: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F063C04:
    ctx->pc = 0x7F063C04u;
    // 7F063C04: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F063C08:
    ctx->pc = 0x7F063C08u;
    // 7F063C08: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F063C0Cu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F063C0C:
    ctx->pc = 0x7F063C0Cu;
    ctx->downcount -= 13;
    // 7F063C0C: lfs     f1, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F063C10:
    ctx->pc = 0x7F063C10u;
    // 7F063C10: lfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063C14:
    ctx->pc = 0x7F063C14u;
    // 7F063C14: lfs     f3, 196(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F063C18:
    ctx->pc = 0x7F063C18u;
    // 7F063C18: fsubs   f30, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063C18u)) return;
    ppc_fsubs(ctx, 30, 1, 0);

label_7F063C1C:
    ctx->pc = 0x7F063C1Cu;
    // 7F063C1C: lfs     f0, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063C20:
    ctx->pc = 0x7F063C20u;
    // 7F063C20: lfs     f2, 204(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F063C24:
    ctx->pc = 0x7F063C24u;
    // 7F063C24: fsubs   f31, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063C24u)) return;
    ppc_fsubs(ctx, 31, 3, 0);

label_7F063C28:
    ctx->pc = 0x7F063C28u;
    // 7F063C28: lfs     f1, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F063C2C:
    ctx->pc = 0x7F063C2Cu;
    // 7F063C2C: fmuls   f0, f30, f30
    if (!ppc_fp_available_inline(ctx, 0x7F063C2Cu)) return;
    ppc_fmuls(ctx, 0, 30, 30);

label_7F063C30:
    ctx->pc = 0x7F063C30u;
    // 7F063C30: fsubs   f29, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063C30u)) return;
    ppc_fsubs(ctx, 29, 2, 1);

label_7F063C34:
    ctx->pc = 0x7F063C34u;
    // 7F063C34: fmadds f0, f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063C34u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[31], ctx->fpr[31], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F063C38:
    ctx->pc = 0x7F063C38u;
    // 7F063C38: fmadds f1, f29, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063C38u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[29], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F063C3C:
    ctx->pc = 0x7F063C3Cu;
    // 7F063C3C: bl      0x80006668
    {
            ctx->lr = 0x7F063C40u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F063C40:
    ctx->pc = 0x7F063C40u;
    ctx->downcount -= 90;
    // 7F063C40: fdivs   f31, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063C40u)) return;
    ppc_fdivs(ctx, 31, 31, 1);

label_7F063C44:
    ctx->pc = 0x7F063C44u;
    // 7F063C44: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F063C48:
    ctx->pc = 0x7F063C48u;
    // 7F063C48: lfs     f11, 7124(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F063C48u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[11] = value;
        ctx->ps1[11] = value;
    }

label_7F063C4C:
    ctx->pc = 0x7F063C4Cu;
    // 7F063C4C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F063C50:
    ctx->pc = 0x7F063C50u;
    // 7F063C50: lfs     f3, -8976(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F063C50u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8976);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F063C54:
    ctx->pc = 0x7F063C54u;
    // 7F063C54: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F063C58:
    ctx->pc = 0x7F063C58u;
    // 7F063C58: fdivs   f30, f30, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063C58u)) return;
    ppc_fdivs(ctx, 30, 30, 1);

label_7F063C5C:
    ctx->pc = 0x7F063C5Cu;
    // 7F063C5C: lfs     f4, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F063C60:
    ctx->pc = 0x7F063C60u;
    // 7F063C60: lfs     f10, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[10] = value;
        ctx->ps1[10] = value;
    }

label_7F063C64:
    ctx->pc = 0x7F063C64u;
    // 7F063C64: addi    r5, r3, -8972
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-8972);

label_7F063C68:
    ctx->pc = 0x7F063C68u;
    // 7F063C68: lfs     f9, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[9] = value;
        ctx->ps1[9] = value;
    }

label_7F063C6C:
    ctx->pc = 0x7F063C6Cu;
    // 7F063C6C: addi    r3, r1, 308
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(308);

label_7F063C70:
    ctx->pc = 0x7F063C70u;
    // 7F063C70: fdivs   f29, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063C70u)) return;
    ppc_fdivs(ctx, 29, 29, 1);

label_7F063C74:
    ctx->pc = 0x7F063C74u;
    // 7F063C74: lfs     f8, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[8] = value;
        ctx->ps1[8] = value;
    }

label_7F063C78:
    ctx->pc = 0x7F063C78u;
    // 7F063C78: lfs     f7, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[7] = value;
        ctx->ps1[7] = value;
    }

label_7F063C7C:
    ctx->pc = 0x7F063C7Cu;
    // 7F063C7C: li      r4, 89
    ctx->gpr[4] = (u32)(s32)(89);

label_7F063C80:
    ctx->pc = 0x7F063C80u;
    // 7F063C80: lfs     f6, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F063C84:
    ctx->pc = 0x7F063C84u;
    // 7F063C84: lfs     f5, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C84u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F063C88:
    ctx->pc = 0x7F063C88u;
    // 7F063C88: fmuls   f31, f31, f11
    if (!ppc_fp_available_inline(ctx, 0x7F063C88u)) return;
    ppc_fmuls(ctx, 31, 31, 11);

label_7F063C8C:
    ctx->pc = 0x7F063C8Cu;
    // 7F063C8C: lfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F063C90:
    ctx->pc = 0x7F063C90u;
    // 7F063C90: fmuls   f30, f30, f11
    if (!ppc_fp_available_inline(ctx, 0x7F063C90u)) return;
    ppc_fmuls(ctx, 30, 30, 11);

label_7F063C94:
    ctx->pc = 0x7F063C94u;
    // 7F063C94: lfs     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063C94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063C98:
    ctx->pc = 0x7F063C98u;
    // 7F063C98: fmuls   f29, f29, f11
    if (!ppc_fp_available_inline(ctx, 0x7F063C98u)) return;
    ppc_fmuls(ctx, 29, 29, 11);

label_7F063C9C:
    ctx->pc = 0x7F063C9Cu;
    // 7F063C9C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F063C9Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F063CA0:
    ctx->pc = 0x7F063CA0u;
    // 7F063CA0: fsubs   f11, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F063CA0u)) return;
    ppc_fsubs(ctx, 11, 4, 3);

label_7F063CA4:
    ctx->pc = 0x7F063CA4u;
    // 7F063CA4: fadds   f3, f10, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063CA4u)) return;
    ppc_fadds(ctx, 3, 10, 31);

label_7F063CA8:
    ctx->pc = 0x7F063CA8u;
    // 7F063CA8: fadds   f9, f9, f30
    if (!ppc_fp_available_inline(ctx, 0x7F063CA8u)) return;
    ppc_fadds(ctx, 9, 9, 30);

label_7F063CAC:
    ctx->pc = 0x7F063CACu;
    // 7F063CAC: fadds   f8, f8, f29
    if (!ppc_fp_available_inline(ctx, 0x7F063CACu)) return;
    ppc_fadds(ctx, 8, 8, 29);

label_7F063CB0:
    ctx->pc = 0x7F063CB0u;
    // 7F063CB0: fadds   f7, f7, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063CB0u)) return;
    ppc_fadds(ctx, 7, 7, 31);

label_7F063CB4:
    ctx->pc = 0x7F063CB4u;
    // 7F063CB4: stfs     f3, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063CB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F063CB8:
    ctx->pc = 0x7F063CB8u;
    // 7F063CB8: fadds   f4, f6, f30
    if (!ppc_fp_available_inline(ctx, 0x7F063CB8u)) return;
    ppc_fadds(ctx, 4, 6, 30);

label_7F063CBC:
    ctx->pc = 0x7F063CBCu;
    // 7F063CBC: fadds   f3, f5, f29
    if (!ppc_fp_available_inline(ctx, 0x7F063CBCu)) return;
    ppc_fadds(ctx, 3, 5, 29);

label_7F063CC0:
    ctx->pc = 0x7F063CC0u;
    // 7F063CC0: stfs     f9, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063CC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[9]));
    }

label_7F063CC4:
    ctx->pc = 0x7F063CC4u;
    // 7F063CC4: fsubs   f2, f2, f11
    if (!ppc_fp_available_inline(ctx, 0x7F063CC4u)) return;
    ppc_fsubs(ctx, 2, 2, 11);

label_7F063CC8:
    ctx->pc = 0x7F063CC8u;
    // 7F063CC8: fsubs   f0, f0, f11
    if (!ppc_fp_available_inline(ctx, 0x7F063CC8u)) return;
    ppc_fsubs(ctx, 0, 0, 11);

label_7F063CCC:
    ctx->pc = 0x7F063CCCu;
    // 7F063CCC: stfs     f8, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063CCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[8]));
    }

label_7F063CD0:
    ctx->pc = 0x7F063CD0u;
    // 7F063CD0: stfs     f7, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063CD0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_7F063CD4:
    ctx->pc = 0x7F063CD4u;
    // 7F063CD4: stfs     f4, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063CD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F063CD8:
    ctx->pc = 0x7F063CD8u;
    // 7F063CD8: stfs     f3, 140(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063CD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F063CDC:
    ctx->pc = 0x7F063CDCu;
    // 7F063CDC: stfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063CDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F063CE0:
    ctx->pc = 0x7F063CE0u;
    // 7F063CE0: stfs     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063CE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F063CE4:
    ctx->pc = 0x7F063CE4u;
    // 7F063CE4: bl      0x8002536C
    {
            ctx->lr = 0x7F063CE8u;
            ctx->pc = 0x8002536Cu;
            return;
    }

label_7F063CE8:
    ctx->pc = 0x7F063CE8u;
    ctx->downcount -= 10;
    // 7F063CE8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F063CEC:
    ctx->pc = 0x7F063CECu;
    // 7F063CEC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F063CF0:
    ctx->pc = 0x7F063CF0u;
    // 7F063CF0: addi    r5, r4, -9000
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-9000);

label_7F063CF4:
    ctx->pc = 0x7F063CF4u;
    // 7F063CF4: lfs     f29, -9036(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F063CF4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9036);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F063CF8:
    ctx->pc = 0x7F063CF8u;
    // 7F063CF8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F063CFC:
    ctx->pc = 0x7F063CFCu;
    // 7F063CFC: lfd     f31, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F063CFCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F063D00:
    ctx->pc = 0x7F063D00u;
    // 7F063D00: addi    r31, r4, 7128
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(7128);

label_7F063D04:
    ctx->pc = 0x7F063D04u;
    // 7F063D04: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F063D08:
    ctx->pc = 0x7F063D08u;
    // 7F063D08: lis     r30, 17200
    ctx->gpr[30] = ((u32)(s32)(17200) << 16);

label_7F063D0C:
    ctx->pc = 0x7F063D0Cu;
    // 7F063D0C: b       0x7F063EF0
    {
            goto label_7F063EF0;
    }

label_7F063D10:
    ctx->downcount -= 33;
    // 7F063D10: xoris   r3, r29, 0x8000
    ctx->gpr[3] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F063D14:
    // 7F063D14: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F063D18:
    ctx->pc = 0x7F063D18u;
    // 7F063D18: stw     r3, 364(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F063D1C:
    // 7F063D1C: addi    r3, r1, 100
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(100);

label_7F063D20:
    // 7F063D20: addi    r4, r1, 84
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(84);

label_7F063D24:
    // 7F063D24: addi    r5, r1, 36
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(36);

label_7F063D28:
    ctx->pc = 0x7F063D28u;
    // 7F063D28: stw     r30, 360(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F063D2C:
    // 7F063D2C: addi    r6, r1, 20
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(20);

label_7F063D30:
    // 7F063D30: addi    r7, r1, 68
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(68);

label_7F063D34:
    ctx->pc = 0x7F063D34u;
    // 7F063D34: lfd     f0, 360(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063D34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F063D38:
    ctx->pc = 0x7F063D38u;
    // 7F063D38: stw     r0, 372(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063D3C:
    ctx->pc = 0x7F063D3Cu;
    // 7F063D3C: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063D3Cu)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_7F063D40:
    ctx->pc = 0x7F063D40u;
    // 7F063D40: stw     r30, 368(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F063D44:
    ctx->pc = 0x7F063D44u;
    // 7F063D44: lfd     f0, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063D44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F063D48:
    ctx->pc = 0x7F063D48u;
    // 7F063D48: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063D48u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F063D4C:
    ctx->pc = 0x7F063D4Cu;
    // 7F063D4C: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063D4Cu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F063D50:
    // 7F063D50: bl      0x7F063908
    {
            ctx->lr = 0x7F063D54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F063908u;
                return;
            }
            goto label_7F063908;
    }

label_7F063D54:
    ctx->pc = 0x7F063D54u;
    ctx->downcount -= 35;
    // 7F063D54: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063D58:
    // 7F063D58: addi    r3, r29, 1
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(1);

label_7F063D5C:
    // 7F063D5C: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F063D60:
    ctx->pc = 0x7F063D60u;
    // 7F063D60: stw     r30, 376(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F063D64:
    // 7F063D64: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F063D68:
    // 7F063D68: addi    r3, r1, 100
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(100);

label_7F063D6C:
    ctx->pc = 0x7F063D6Cu;
    // 7F063D6C: stw     r4, 380(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(380);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F063D70:
    // 7F063D70: addi    r4, r1, 84
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(84);

label_7F063D74:
    // 7F063D74: addi    r5, r1, 36
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(36);

label_7F063D78:
    // 7F063D78: addi    r6, r1, 20
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(20);

label_7F063D7C:
    ctx->pc = 0x7F063D7Cu;
    // 7F063D7C: lfd     f0, 376(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063D7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F063D80:
    // 7F063D80: addi    r7, r1, 52
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(52);

label_7F063D84:
    ctx->pc = 0x7F063D84u;
    // 7F063D84: stw     r0, 388(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063D88:
    ctx->pc = 0x7F063D88u;
    // 7F063D88: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063D88u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_7F063D8C:
    ctx->pc = 0x7F063D8Cu;
    // 7F063D8C: stw     r30, 384(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F063D90:
    ctx->pc = 0x7F063D90u;
    // 7F063D90: lfd     f0, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063D90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F063D94:
    ctx->pc = 0x7F063D94u;
    // 7F063D94: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063D94u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F063D98:
    ctx->pc = 0x7F063D98u;
    // 7F063D98: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063D98u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F063D9C:
    // 7F063D9C: bl      0x7F063908
    {
            ctx->lr = 0x7F063DA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F063908u;
                return;
            }
            goto label_7F063908;
    }

label_7F063DA0:
    ctx->pc = 0x7F063DA0u;
    ctx->downcount -= 34;
    // 7F063DA0: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063DA4:
    // 7F063DA4: xoris   r3, r29, 0x8000
    ctx->gpr[3] = ctx->gpr[29] ^ (0x8000u << 16);

label_7F063DA8:
    ctx->pc = 0x7F063DA8u;
    // 7F063DA8: stw     r3, 396(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(396);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F063DAC:
    // 7F063DAC: addi    r3, r1, 180
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(180);

label_7F063DB0:
    // 7F063DB0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F063DB4:
    // 7F063DB4: addi    r4, r1, 164
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(164);

label_7F063DB8:
    ctx->pc = 0x7F063DB8u;
    // 7F063DB8: stw     r30, 392(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F063DBC:
    // 7F063DBC: addi    r5, r1, 148
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(148);

label_7F063DC0:
    // 7F063DC0: addi    r6, r1, 132
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(132);

label_7F063DC4:
    // 7F063DC4: addi    r7, r1, 116
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(116);

label_7F063DC8:
    ctx->pc = 0x7F063DC8u;
    // 7F063DC8: lfd     f0, 392(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063DC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F063DCC:
    ctx->pc = 0x7F063DCCu;
    // 7F063DCC: stw     r0, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063DD0:
    ctx->pc = 0x7F063DD0u;
    // 7F063DD0: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063DD0u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_7F063DD4:
    ctx->pc = 0x7F063DD4u;
    // 7F063DD4: stw     r30, 400(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F063DD8:
    ctx->pc = 0x7F063DD8u;
    // 7F063DD8: lfd     f0, 400(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063DD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(400);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F063DDC:
    ctx->pc = 0x7F063DDCu;
    // 7F063DDC: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F063DDCu)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F063DE0:
    ctx->pc = 0x7F063DE0u;
    // 7F063DE0: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063DE0u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F063DE4:
    // 7F063DE4: bl      0x7F063908
    {
            ctx->lr = 0x7F063DE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F063908u;
                return;
            }
            goto label_7F063908;
    }

label_7F063DE8:
    ctx->pc = 0x7F063DE8u;
    ctx->downcount -= 14;
    // 7F063DE8: lfs     f0, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063DE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063DEC:
    ctx->pc = 0x7F063DECu;
    // 7F063DEC: lfs     f5, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063DECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F063DF0:
    ctx->pc = 0x7F063DF0u;
    // 7F063DF0: lfs     f3, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063DF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F063DF4:
    ctx->pc = 0x7F063DF4u;
    // 7F063DF4: fsubs   f4, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x7F063DF4u)) return;
    ppc_fsubs(ctx, 4, 0, 5);

label_7F063DF8:
    ctx->pc = 0x7F063DF8u;
    // 7F063DF8: lfs     f2, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063DF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F063DFC:
    ctx->pc = 0x7F063DFCu;
    // 7F063DFC: lfs     f1, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063DFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F063E00:
    ctx->pc = 0x7F063E00u;
    // 7F063E00: lfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063E00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063E04:
    ctx->pc = 0x7F063E04u;
    // 7F063E04: fsubs   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F063E04u)) return;
    ppc_fsubs(ctx, 2, 3, 2);

label_7F063E08:
    ctx->pc = 0x7F063E08u;
    // 7F063E08: fcmpu   cr0, f29, f4
    if (!ppc_fp_available_inline(ctx, 0x7F063E08u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[29], ctx->fpr[4], false);

label_7F063E0C:
    ctx->pc = 0x7F063E0Cu;
    // 7F063E0C: fsubs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F063E0Cu)) return;
    ppc_fsubs(ctx, 1, 1, 0);

label_7F063E10:
    ctx->pc = 0x7F063E10u;
    // 7F063E10: stfs     f4, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063E10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F063E14:
    ctx->pc = 0x7F063E14u;
    // 7F063E14: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063E14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F063E18:
    ctx->pc = 0x7F063E18u;
    // 7F063E18: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063E18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F063E1C:
    // 7F063E1C: bc    4, 2, 0x7F063E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F063E38;
        }
    }

label_7F063E20:
    ctx->downcount -= 4;
    // 7F063E20: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F063E24:
    ctx->pc = 0x7F063E24u;
    // 7F063E24: lfs     f0, -9036(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F063E24u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-9036);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063E28:
    ctx->pc = 0x7F063E28u;
    // 7F063E28: fcmpu   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F063E28u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], false);

label_7F063E2C:
    // 7F063E2C: bc    4, 2, 0x7F063E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F063E38;
        }
    }

label_7F063E30:
    ctx->pc = 0x7F063E30u;
    ctx->downcount -= 2;
    // 7F063E30: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F063E30u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F063E34:
    // 7F063E34: bc    12, 2, 0x7F063E94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F063E94;
        }
    }

label_7F063E38:
    ctx->downcount -= 5;
    // 7F063E38: addi    r3, r1, 260
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(260);

label_7F063E3C:
    // 7F063E3C: addi    r4, r1, 68
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(68);

label_7F063E40:
    // 7F063E40: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F063E44:
    // 7F063E44: addi    r6, r1, 52
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(52);

label_7F063E48:
    // 7F063E48: bl      0x80025630
    {
            ctx->lr = 0x7F063E4Cu;
            ctx->pc = 0x80025630u;
            return;
    }

label_7F063E4C:
    ctx->downcount -= 3;
    // 7F063E4C: addi    r3, r1, 260
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(260);

label_7F063E50:
    // 7F063E50: addi    r4, r1, 212
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(212);

label_7F063E54:
    // 7F063E54: bl      0x800251AC
    {
            ctx->lr = 0x7F063E58u;
            ctx->pc = 0x800251ACu;
            return;
    }

label_7F063E58:
    ctx->downcount -= 4;
    // 7F063E58: addi    r3, r1, 212
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(212);

label_7F063E5C:
    // 7F063E5C: addi    r4, r1, 308
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(308);

label_7F063E60:
    // 7F063E60: addi    r5, r1, 260
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(260);

label_7F063E64:
    // 7F063E64: bl      0x80025090
    {
            ctx->lr = 0x7F063E68u;
            ctx->pc = 0x80025090u;
            return;
    }

label_7F063E68:
    ctx->downcount -= 12;
    // 7F063E68: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F063E6C:
    ctx->pc = 0x7F063E6Cu;
    // 7F063E6C: lwz     r5, 636(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(636);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F063E70:
    // 7F063E70: addi    r4, r3, 7128
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(7128);

label_7F063E74:
    // 7F063E74: addi    r3, r1, 260
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(260);

label_7F063E78:
    ctx->pc = 0x7F063E78u;
    // 7F063E78: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063E7C:
    // 7F063E7C: subf   r0, r29, r0
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F063E80:
    // 7F063E80: mulli   r4, r0, 324
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F063E84:
    // 7F063E84: addi    r4, r4, 444
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(444);

label_7F063E88:
    // 7F063E88: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F063E8C:
    // 7F063E8C: bl      0x7F114E84
    {
            ctx->lr = 0x7F063E90u;
            ctx->pc = 0x7F114E84u;
            return;
    }

label_7F063E90:
    ctx->downcount -= 1;
    // 7F063E90: b       0x7F063EEC
    {
            goto label_7F063EEC;
    }

label_7F063E94:
    ctx->downcount -= 28;
    // 7F063E94: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F063E98:
    ctx->pc = 0x7F063E98u;
    // 7F063E98: lwz     r4, 636(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(636);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F063E9C:
    // 7F063E9C: addi    r5, r3, 7128
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7128);

label_7F063EA0:
    ctx->pc = 0x7F063EA0u;
    // 7F063EA0: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063EA4:
    // 7F063EA4: subf   r0, r29, r0
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F063EA8:
    // 7F063EA8: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F063EAC:
    // 7F063EAC: addi    r0, r3, 492
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(492);

label_7F063EB0:
    ctx->pc = 0x7F063EB0u;
    // 7F063EB0: stfsx    f5, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x7F063EB0u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F063EB4:
    ctx->pc = 0x7F063EB4u;
    // 7F063EB4: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063EB8:
    ctx->pc = 0x7F063EB8u;
    // 7F063EB8: lfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063EB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063EBC:
    // 7F063EBC: subf   r0, r29, r0
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F063EC0:
    ctx->pc = 0x7F063EC0u;
    // 7F063EC0: lwz     r4, 636(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(636);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F063EC4:
    // 7F063EC4: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F063EC8:
    // 7F063EC8: addi    r0, r3, 496
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(496);

label_7F063ECC:
    ctx->pc = 0x7F063ECCu;
    // 7F063ECC: stfsx    f0, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x7F063ECCu)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F063ED0:
    ctx->pc = 0x7F063ED0u;
    // 7F063ED0: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063ED4:
    ctx->pc = 0x7F063ED4u;
    // 7F063ED4: lfs     f0, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063ED4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F063ED8:
    // 7F063ED8: subf   r0, r29, r0
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F063EDC:
    ctx->pc = 0x7F063EDCu;
    // 7F063EDC: lwz     r4, 636(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(636);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F063EE0:
    // 7F063EE0: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F063EE4:
    // 7F063EE4: addi    r0, r3, 500
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(500);

label_7F063EE8:
    ctx->pc = 0x7F063EE8u;
    // 7F063EE8: stfsx    f0, r4, r0
    if (!ppc_fp_available_inline(ctx, 0x7F063EE8u)) return;
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F063EEC:
    ctx->downcount -= 1;
    // 7F063EEC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F063EF0:
    ctx->pc = 0x7F063EF0u;
    ctx->downcount -= 3;
    // 7F063EF0: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063EF4:
    // 7F063EF4: cmpw    r29, r0
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

label_7F063EF8:
    // 7F063EF8: bc    4, 1, 0x7F063D10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F063D10u;
                return;
            }
            goto label_7F063D10;
        }
    }

label_7F063EFC:
    ctx->pc = 0x7F063EFCu;
    ctx->downcount -= 22;
    // 7F063EFC: psq_l   f31, 472(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F063EFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(472);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F063EFCu);
        if (ctx->exception) return;
    }

label_7F063F00:
    ctx->pc = 0x7F063F00u;
    // 7F063F00: lfd     f31, 464(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063F00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(464);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F063F04:
    ctx->pc = 0x7F063F04u;
    // 7F063F04: psq_l   f30, 456(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F063F04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(456);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F063F04u);
        if (ctx->exception) return;
    }

label_7F063F08:
    ctx->pc = 0x7F063F08u;
    // 7F063F08: lfd     f30, 448(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063F08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(448);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F063F0C:
    ctx->pc = 0x7F063F0Cu;
    // 7F063F0C: psq_l   f29, 440(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F063F0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(440);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F063F0Cu);
        if (ctx->exception) return;
    }

label_7F063F10:
    ctx->pc = 0x7F063F10u;
    // 7F063F10: lfd     f29, 432(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063F10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F063F14:
    ctx->pc = 0x7F063F14u;
    // 7F063F14: lmw     r28, 416(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(416);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F063F18:
    ctx->pc = 0x7F063F18u;
    // 7F063F18: lwz     r0, 484(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063F1C:
    ctx->pc = 0x7F063F1Cu;
    // 7F063F1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F063F20:
    ctx->pc = 0x7F063F20u;
    // 7F063F20: addi    r1, r1, 480
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(480);

label_7F063F24:
    ctx->pc = 0x7F063F24u;
    // 7F063F24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063F28:
    ctx->pc = 0x7F063F28u;
    ctx->downcount -= 8;
    // 7F063F28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F063F2C:
    ctx->pc = 0x7F063F2Cu;
    // 7F063F2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F063F30:
    ctx->pc = 0x7F063F30u;
    // 7F063F30: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F063F34:
    ctx->pc = 0x7F063F34u;
    // 7F063F34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F063F38:
    ctx->pc = 0x7F063F38u;
    // 7F063F38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063F3C:
    ctx->pc = 0x7F063F3Cu;
    // 7F063F3C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F063F40:
    ctx->pc = 0x7F063F40u;
    // 7F063F40: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F063F44:
    ctx->pc = 0x7F063F44u;
    // 7F063F44: bl      0x7F011848
    {
            ctx->lr = 0x7F063F48u;
            ctx->pc = 0x7F011848u;
            return;
    }

label_7F063F48:
    ctx->pc = 0x7F063F48u;
    ctx->downcount -= 5;
    // 7F063F48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063F4C:
    ctx->pc = 0x7F063F4Cu;
    // 7F063F4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F063F50:
    ctx->pc = 0x7F063F50u;
    // 7F063F50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F063F54:
    ctx->pc = 0x7F063F54u;
    // 7F063F54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063F58:
    ctx->pc = 0x7F063F58u;
    ctx->downcount -= 3;
    // 7F063F58: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F063F5C:
    ctx->pc = 0x7F063F5Cu;
    // 7F063F5C: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F063F60:
    ctx->pc = 0x7F063F60u;
    // 7F063F60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063F64:
    ctx->pc = 0x7F063F64u;
    ctx->downcount -= 1;
    // 7F063F64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F063F68:
    ctx->pc = 0x7F063F68u;
    ctx->downcount -= 9;
    // 7F063F68: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F063F6C:
    ctx->pc = 0x7F063F6Cu;
    // 7F063F6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F063F70:
    ctx->pc = 0x7F063F70u;
    // 7F063F70: cmpwi   r4, 0
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

label_7F063F74:
    ctx->pc = 0x7F063F74u;
    // 7F063F74: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063F78:
    ctx->pc = 0x7F063F78u;
    // 7F063F78: lwz     r5, 464(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F063F7C:
    ctx->pc = 0x7F063F7Cu;
    // 7F063F7C: lfs     f4, 2436(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F063F7Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2436);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F063F80:
    ctx->pc = 0x7F063F80u;
    // 7F063F80: lfs     f2, 2440(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F063F80u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F063F84:
    ctx->pc = 0x7F063F84u;
    // 7F063F84: lfs     f5, 2444(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F063F84u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2444);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F063F88:
    ctx->pc = 0x7F063F88u;
    // 7F063F88: bc    12, 2, 0x7F063FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F063FB8;
        }
    }

label_7F063F8C:
    ctx->pc = 0x7F063F8Cu;
    ctx->downcount -= 11;
    // 7F063F8C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F063F90:
    ctx->pc = 0x7F063F90u;
    // 7F063F90: addi    r6, r3, -5872
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-5872);

label_7F063F94:
    ctx->pc = 0x7F063F94u;
    // 7F063F94: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F063F98:
    ctx->pc = 0x7F063F98u;
    // 7F063F98: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F063F9C:
    ctx->pc = 0x7F063F9Cu;
    // 7F063F9C: lwz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F063FA0:
    ctx->pc = 0x7F063FA0u;
    // 7F063FA0: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063FA4:
    ctx->pc = 0x7F063FA4u;
    // 7F063FA4: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F063FA8:
    ctx->pc = 0x7F063FA8u;
    // 7F063FA8: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F063FAC:
    ctx->pc = 0x7F063FACu;
    // 7F063FAC: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F063FB0:
    ctx->pc = 0x7F063FB0u;
    // 7F063FB0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063FB4:
    ctx->pc = 0x7F063FB4u;
    // 7F063FB4: b       0x7F063FD8
    {
            goto label_7F063FD8;
    }

label_7F063FB8:
    ctx->pc = 0x7F063FB8u;
    ctx->downcount -= 8;
    // 7F063FB8: lwz     r6, 1036(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1036);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F063FBC:
    ctx->pc = 0x7F063FBCu;
    // 7F063FBC: lwz     r5, 1040(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1040);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F063FC0:
    ctx->pc = 0x7F063FC0u;
    // 7F063FC0: lwz     r4, 1044(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1044);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F063FC4:
    ctx->pc = 0x7F063FC4u;
    // 7F063FC4: lwz     r0, 1048(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1048);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F063FC8:
    ctx->pc = 0x7F063FC8u;
    // 7F063FC8: stw     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F063FCC:
    ctx->pc = 0x7F063FCCu;
    // 7F063FCC: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F063FD0:
    ctx->pc = 0x7F063FD0u;
    // 7F063FD0: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F063FD4:
    ctx->pc = 0x7F063FD4u;
    // 7F063FD4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F063FD8:
    ctx->pc = 0x7F063FD8u;
    ctx->downcount -= 55;
    // 7F063FD8: lwz     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F063FDC:
    ctx->pc = 0x7F063FDCu;
    // 7F063FDC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F063FE0:
    ctx->pc = 0x7F063FE0u;
    // 7F063FE0: lwz     r6, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F063FE4:
    ctx->pc = 0x7F063FE4u;
    // 7F063FE4: addi    r4, r3, -8952
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-8952);

label_7F063FE8:
    ctx->pc = 0x7F063FE8u;
    // 7F063FE8: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F063FEC:
    ctx->pc = 0x7F063FECu;
    // 7F063FEC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F063FF0:
    ctx->pc = 0x7F063FF0u;
    // 7F063FF0: lwz     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F063FF4:
    ctx->pc = 0x7F063FF4u;
    // 7F063FF4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F063FF8:
    ctx->pc = 0x7F063FF8u;
    // 7F063FF8: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F063FFC:
    ctx->pc = 0x7F063FFCu;
    // 7F063FFC: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F063FFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F064000:
    ctx->pc = 0x7F064000u;
    // 7F064000: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F064000u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F064004:
    ctx->pc = 0x7F064004u;
    // 7F064004: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F064008:
    ctx->pc = 0x7F064008u;
    // 7F064008: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F064008u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F06400C:
    ctx->pc = 0x7F06400Cu;
    // 7F06400C: fsubs   f0, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x7F06400Cu)) return;
    ppc_fsubs(ctx, 0, 5, 0);

label_7F064010:
    ctx->pc = 0x7F064010u;
    // 7F064010: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F064010u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F064014:
    ctx->pc = 0x7F064014u;
    // 7F064014: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F064014u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F064018:
    ctx->pc = 0x7F064018u;
    // 7F064018: lwz     r5, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F06401C:
    ctx->pc = 0x7F06401Cu;
    // 7F06401C: fsubs   f4, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F06401Cu)) return;
    ppc_fsubs(ctx, 4, 4, 2);

label_7F064020:
    ctx->pc = 0x7F064020u;
    // 7F064020: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F064024:
    ctx->pc = 0x7F064024u;
    // 7F064024: fmuls   f2, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F064024u)) return;
    ppc_fmuls(ctx, 2, 1, 3);

label_7F064028:
    ctx->pc = 0x7F064028u;
    // 7F064028: lfd     f1, -8960(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F064028u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8960);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F06402C:
    ctx->pc = 0x7F06402Cu;
    // 7F06402C: fmuls   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F06402Cu)) return;
    ppc_fmuls(ctx, 0, 0, 3);

label_7F064030:
    ctx->pc = 0x7F064030u;
    // 7F064030: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F064034:
    ctx->pc = 0x7F064034u;
    // 7F064034: fmuls   f3, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F064034u)) return;
    ppc_fmuls(ctx, 3, 4, 3);

label_7F064038:
    ctx->pc = 0x7F064038u;
    // 7F064038: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F064038u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F06403C:
    ctx->pc = 0x7F06403Cu;
    // 7F06403C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F06403Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F064040:
    ctx->pc = 0x7F064040u;
    // 7F064040: fctiwz    f3, f3
    if (!ppc_fp_available_inline(ctx, 0x7F064040u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[3], true, &result)) ctx->fpr[3] = dolrecomp_f64_from_bits(result); }

label_7F064044:
    ctx->pc = 0x7F064044u;
    // 7F064044: stfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F064044u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F064048:
    ctx->pc = 0x7F064048u;
    // 7F064048: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F064048u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F06404C:
    ctx->pc = 0x7F06404Cu;
    // 7F06404C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F064050:
    ctx->pc = 0x7F064050u;
    // 7F064050: stfd     f3, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F064050u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_7F064054:
    ctx->pc = 0x7F064054u;
    // 7F064054: lwz     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F064058:
    ctx->pc = 0x7F064058u;
    // 7F064058: mullw   r0, r0, r0
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_7F06405C:
    ctx->pc = 0x7F06405Cu;
    // 7F06405C: lwz     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F064060:
    ctx->pc = 0x7F064060u;
    // 7F064060: mullw   r4, r4, r4
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[4] = (u32)product;
    }

label_7F064064:
    ctx->pc = 0x7F064064u;
    // 7F064064: mullw   r3, r3, r3
    {
        s64 product = (s64)(s32)ctx->gpr[3] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[3] = (u32)product;
    }

label_7F064068:
    ctx->pc = 0x7F064068u;
    // 7F064068: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F06406C:
    ctx->pc = 0x7F06406Cu;
    // 7F06406C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F064070:
    ctx->pc = 0x7F064070u;
    // 7F064070: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F064074:
    ctx->pc = 0x7F064074u;
    // 7F064074: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F064078:
    ctx->pc = 0x7F064078u;
    // 7F064078: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F064078u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F06407C:
    ctx->pc = 0x7F06407Cu;
    // 7F06407C: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F06407Cu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F064080:
    ctx->pc = 0x7F064080u;
    // 7F064080: bl      0x80006668
    {
            ctx->lr = 0x7F064084u;
            ctx->pc = 0x80006668u;
            return;
    }

label_7F064084:
    ctx->pc = 0x7F064084u;
    ctx->downcount -= 9;
    // 7F064084: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F064084u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F064088:
    ctx->pc = 0x7F064088u;
    // 7F064088: stfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F064088u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F06408C:
    ctx->pc = 0x7F06408Cu;
    // 7F06408C: lwz     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F064090:
    ctx->pc = 0x7F064090u;
    // 7F064090: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F064094:
    ctx->pc = 0x7F064094u;
    // 7F064094: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F064098:
    ctx->pc = 0x7F064098u;
    // 7F064098: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F06409C:
    ctx->pc = 0x7F06409Cu;
    // 7F06409C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0640A0:
    ctx->pc = 0x7F0640A0u;
    // 7F0640A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0600EC;
        }
    }

label_7F0640A4:
    ctx->pc = 0x7F0640A4u;
    ctx->downcount -= 28;
    // 7F0640A4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0640A8:
    ctx->pc = 0x7F0640A8u;
    // 7F0640A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0640AC:
    ctx->pc = 0x7F0640ACu;
    // 7F0640AC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0640B0:
    ctx->pc = 0x7F0640B0u;
    // 7F0640B0: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0640B4:
    ctx->pc = 0x7F0640B4u;
    // 7F0640B4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0640B8:
    ctx->pc = 0x7F0640B8u;
    // 7F0640B8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0640B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0640BC:
    ctx->pc = 0x7F0640BCu;
    // 7F0640BC: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0640BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0640C0:
    ctx->pc = 0x7F0640C0u;
    // 7F0640C0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0640C0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0640C4:
    ctx->pc = 0x7F0640C4u;
    // 7F0640C4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0640C4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0640C8:
    ctx->pc = 0x7F0640C8u;
    // 7F0640C8: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0640C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0640CC:
    ctx->pc = 0x7F0640CCu;
    // 7F0640CC: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0640D0:
    ctx->pc = 0x7F0640D0u;
    // 7F0640D0: sth     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0640D4:
    ctx->pc = 0x7F0640D4u;
    // 7F0640D4: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0640D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0640D8:
    ctx->pc = 0x7F0640D8u;
    // 7F0640D8: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0640D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0640DC:
    ctx->pc = 0x7F0640DCu;
    // 7F0640DC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0640DCu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0640E0:
    ctx->pc = 0x7F0640E0u;
    // 7F0640E0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0640E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0640E4:
    ctx->pc = 0x7F0640E4u;
    // 7F0640E4: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0640E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0640E8:
    ctx->pc = 0x7F0640E8u;
    // 7F0640E8: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0640ECu;
    return;
return_dispatch_7F0600EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F0600F0u: goto label_7F0600F0;
    case 0x7F0600F8u: goto label_7F0600F8;
    case 0x7F060184u: goto label_7F060184;
    case 0x7F060278u: goto label_7F060278;
    case 0x7F060288u: goto label_7F060288;
    case 0x7F0602E4u: goto label_7F0602E4;
    case 0x7F0602F4u: goto label_7F0602F4;
    case 0x7F060350u: goto label_7F060350;
    case 0x7F060360u: goto label_7F060360;
    case 0x7F0603BCu: goto label_7F0603BC;
    case 0x7F0603CCu: goto label_7F0603CC;
    case 0x7F0603E8u: goto label_7F0603E8;
    case 0x7F060454u: goto label_7F060454;
    case 0x7F060480u: goto label_7F060480;
    case 0x7F0604C8u: goto label_7F0604C8;
    case 0x7F0604F4u: goto label_7F0604F4;
    case 0x7F06053Cu: goto label_7F06053C;
    case 0x7F060568u: goto label_7F060568;
    case 0x7F0605B0u: goto label_7F0605B0;
    case 0x7F0605DCu: goto label_7F0605DC;
    case 0x7F060620u: goto label_7F060620;
    case 0x7F060638u: goto label_7F060638;
    case 0x7F060648u: goto label_7F060648;
    case 0x7F060654u: goto label_7F060654;
    case 0x7F060670u: goto label_7F060670;
    case 0x7F060688u: goto label_7F060688;
    case 0x7F0606A4u: goto label_7F0606A4;
    case 0x7F0606B0u: goto label_7F0606B0;
    case 0x7F0606C0u: goto label_7F0606C0;
    case 0x7F0606D8u: goto label_7F0606D8;
    case 0x7F0606E4u: goto label_7F0606E4;
    case 0x7F060720u: goto label_7F060720;
    case 0x7F06072Cu: goto label_7F06072C;
    case 0x7F06073Cu: goto label_7F06073C;
    case 0x7F06074Cu: goto label_7F06074C;
    case 0x7F06075Cu: goto label_7F06075C;
    case 0x7F060780u: goto label_7F060780;
    case 0x7F060798u: goto label_7F060798;
    case 0x7F0607FCu: goto label_7F0607FC;
    case 0x7F060830u: goto label_7F060830;
    case 0x7F060864u: goto label_7F060864;
    case 0x7F060894u: goto label_7F060894;
    case 0x7F0608A4u: goto label_7F0608A4;
    case 0x7F06091Cu: goto label_7F06091C;
    case 0x7F060944u: goto label_7F060944;
    case 0x7F06096Cu: goto label_7F06096C;
    case 0x7F060994u: goto label_7F060994;
    case 0x7F0609B4u: goto label_7F0609B4;
    case 0x7F0609D0u: goto label_7F0609D0;
    case 0x7F0609E8u: goto label_7F0609E8;
    case 0x7F060A0Cu: goto label_7F060A0C;
    case 0x7F060A24u: goto label_7F060A24;
    case 0x7F060A5Cu: goto label_7F060A5C;
    case 0x7F060A70u: goto label_7F060A70;
    case 0x7F060A84u: goto label_7F060A84;
    case 0x7F060A98u: goto label_7F060A98;
    case 0x7F060AE4u: goto label_7F060AE4;
    case 0x7F060AF4u: goto label_7F060AF4;
    case 0x7F060B04u: goto label_7F060B04;
    case 0x7F060B14u: goto label_7F060B14;
    case 0x7F060B38u: goto label_7F060B38;
    case 0x7F060B50u: goto label_7F060B50;
    case 0x7F060B6Cu: goto label_7F060B6C;
    case 0x7F060B80u: goto label_7F060B80;
    case 0x7F060BA0u: goto label_7F060BA0;
    case 0x7F060BF0u: goto label_7F060BF0;
    case 0x7F060BF8u: goto label_7F060BF8;
    case 0x7F060D2Cu: goto label_7F060D2C;
    case 0x7F060DBCu: goto label_7F060DBC;
    case 0x7F060DE0u: goto label_7F060DE0;
    case 0x7F060DF4u: goto label_7F060DF4;
    case 0x7F060E04u: goto label_7F060E04;
    case 0x7F060E14u: goto label_7F060E14;
    case 0x7F060E1Cu: goto label_7F060E1C;
    case 0x7F060E70u: goto label_7F060E70;
    case 0x7F060FD8u: goto label_7F060FD8;
    case 0x7F061050u: goto label_7F061050;
    case 0x7F061060u: goto label_7F061060;
    case 0x7F0610DCu: goto label_7F0610DC;
    case 0x7F0610ECu: goto label_7F0610EC;
    case 0x7F0610F4u: goto label_7F0610F4;
    case 0x7F061270u: goto label_7F061270;
    case 0x7F061284u: goto label_7F061284;
    case 0x7F0612ACu: goto label_7F0612AC;
    case 0x7F0612C0u: goto label_7F0612C0;
    case 0x7F0612D4u: goto label_7F0612D4;
    case 0x7F0612E8u: goto label_7F0612E8;
    case 0x7F0612FCu: goto label_7F0612FC;
    case 0x7F061328u: goto label_7F061328;
    case 0x7F061340u: goto label_7F061340;
    case 0x7F061354u: goto label_7F061354;
    case 0x7F06136Cu: goto label_7F06136C;
    case 0x7F061380u: goto label_7F061380;
    case 0x7F061398u: goto label_7F061398;
    case 0x7F0613ACu: goto label_7F0613AC;
    case 0x7F0613C4u: goto label_7F0613C4;
    case 0x7F0613E4u: goto label_7F0613E4;
    case 0x7F0613F8u: goto label_7F0613F8;
    case 0x7F06140Cu: goto label_7F06140C;
    case 0x7F061420u: goto label_7F061420;
    case 0x7F061434u: goto label_7F061434;
    case 0x7F061448u: goto label_7F061448;
    case 0x7F06145Cu: goto label_7F06145C;
    case 0x7F061470u: goto label_7F061470;
    case 0x7F0614D8u: goto label_7F0614D8;
    case 0x7F0614ECu: goto label_7F0614EC;
    case 0x7F061530u: goto label_7F061530;
    case 0x7F061560u: goto label_7F061560;
    case 0x7F0615C0u: goto label_7F0615C0;
    case 0x7F061604u: goto label_7F061604;
    case 0x7F061638u: goto label_7F061638;
    case 0x7F061654u: goto label_7F061654;
    case 0x7F061660u: goto label_7F061660;
    case 0x7F06166Cu: goto label_7F06166C;
    case 0x7F061678u: goto label_7F061678;
    case 0x7F061684u: goto label_7F061684;
    case 0x7F061690u: goto label_7F061690;
    case 0x7F0619BCu: goto label_7F0619BC;
    case 0x7F0619D4u: goto label_7F0619D4;
    case 0x7F0619ECu: goto label_7F0619EC;
    case 0x7F061AC8u: goto label_7F061AC8;
    case 0x7F061AF0u: goto label_7F061AF0;
    case 0x7F061B18u: goto label_7F061B18;
    case 0x7F061B44u: goto label_7F061B44;
    case 0x7F061B5Cu: goto label_7F061B5C;
    case 0x7F061B94u: goto label_7F061B94;
    case 0x7F061BE4u: goto label_7F061BE4;
    case 0x7F061C2Cu: goto label_7F061C2C;
    case 0x7F061C88u: goto label_7F061C88;
    case 0x7F061CE0u: goto label_7F061CE0;
    case 0x7F061CECu: goto label_7F061CEC;
    case 0x7F061D38u: goto label_7F061D38;
    case 0x7F061D44u: goto label_7F061D44;
    case 0x7F061D88u: goto label_7F061D88;
    case 0x7F061D94u: goto label_7F061D94;
    case 0x7F061DD0u: goto label_7F061DD0;
    case 0x7F061DD8u: goto label_7F061DD8;
    case 0x7F061E00u: goto label_7F061E00;
    case 0x7F061E0Cu: goto label_7F061E0C;
    case 0x7F061E2Cu: goto label_7F061E2C;
    case 0x7F061E38u: goto label_7F061E38;
    case 0x7F061E58u: goto label_7F061E58;
    case 0x7F061E64u: goto label_7F061E64;
    case 0x7F061E84u: goto label_7F061E84;
    case 0x7F061EA4u: goto label_7F061EA4;
    case 0x7F061EB8u: goto label_7F061EB8;
    case 0x7F061EC0u: goto label_7F061EC0;
    case 0x7F061ED4u: goto label_7F061ED4;
    case 0x7F061EDCu: goto label_7F061EDC;
    case 0x7F061EF0u: goto label_7F061EF0;
    case 0x7F061FA4u: goto label_7F061FA4;
    case 0x7F061FC0u: goto label_7F061FC0;
    case 0x7F061FD0u: goto label_7F061FD0;
    case 0x7F061FE0u: goto label_7F061FE0;
    case 0x7F062094u: goto label_7F062094;
    case 0x7F0620F4u: goto label_7F0620F4;
    case 0x7F062100u: goto label_7F062100;
    case 0x7F062118u: goto label_7F062118;
    case 0x7F062120u: goto label_7F062120;
    case 0x7F062128u: goto label_7F062128;
    case 0x7F062164u: goto label_7F062164;
    case 0x7F0621E0u: goto label_7F0621E0;
    case 0x7F062208u: goto label_7F062208;
    case 0x7F06224Cu: goto label_7F06224C;
    case 0x7F062254u: goto label_7F062254;
    case 0x7F06225Cu: goto label_7F06225C;
    case 0x7F062268u: goto label_7F062268;
    case 0x7F062270u: goto label_7F062270;
    case 0x7F062278u: goto label_7F062278;
    case 0x7F062290u: goto label_7F062290;
    case 0x7F0622CCu: goto label_7F0622CC;
    case 0x7F0622E4u: goto label_7F0622E4;
    case 0x7F0622F4u: goto label_7F0622F4;
    case 0x7F062308u: goto label_7F062308;
    case 0x7F062328u: goto label_7F062328;
    case 0x7F062348u: goto label_7F062348;
    case 0x7F06237Cu: goto label_7F06237C;
    case 0x7F0623A0u: goto label_7F0623A0;
    case 0x7F0623C0u: goto label_7F0623C0;
    case 0x7F0623ECu: goto label_7F0623EC;
    case 0x7F062410u: goto label_7F062410;
    case 0x7F06242Cu: goto label_7F06242C;
    case 0x7F062448u: goto label_7F062448;
    case 0x7F0624B4u: goto label_7F0624B4;
    case 0x7F0624D8u: goto label_7F0624D8;
    case 0x7F06254Cu: goto label_7F06254C;
    case 0x7F06255Cu: goto label_7F06255C;
    case 0x7F0625D0u: goto label_7F0625D0;
    case 0x7F062600u: goto label_7F062600;
    case 0x7F06260Cu: goto label_7F06260C;
    case 0x7F062654u: goto label_7F062654;
    case 0x7F062670u: goto label_7F062670;
    case 0x7F062690u: goto label_7F062690;
    case 0x7F0626F4u: goto label_7F0626F4;
    case 0x7F062704u: goto label_7F062704;
    case 0x7F062714u: goto label_7F062714;
    case 0x7F06271Cu: goto label_7F06271C;
    case 0x7F062730u: goto label_7F062730;
    case 0x7F06289Cu: goto label_7F06289C;
    case 0x7F062904u: goto label_7F062904;
    case 0x7F06291Cu: goto label_7F06291C;
    case 0x7F062924u: goto label_7F062924;
    case 0x7F062938u: goto label_7F062938;
    case 0x7F062940u: goto label_7F062940;
    case 0x7F062948u: goto label_7F062948;
    case 0x7F0629DCu: goto label_7F0629DC;
    case 0x7F0629E4u: goto label_7F0629E4;
    case 0x7F0629F4u: goto label_7F0629F4;
    case 0x7F062A08u: goto label_7F062A08;
    case 0x7F062A1Cu: goto label_7F062A1C;
    case 0x7F062A30u: goto label_7F062A30;
    case 0x7F062AA8u: goto label_7F062AA8;
    case 0x7F062AD0u: goto label_7F062AD0;
    case 0x7F062AD8u: goto label_7F062AD8;
    case 0x7F062B08u: goto label_7F062B08;
    case 0x7F062B40u: goto label_7F062B40;
    case 0x7F062B48u: goto label_7F062B48;
    case 0x7F062B50u: goto label_7F062B50;
    case 0x7F062B60u: goto label_7F062B60;
    case 0x7F062B6Cu: goto label_7F062B6C;
    case 0x7F062B80u: goto label_7F062B80;
    case 0x7F062B90u: goto label_7F062B90;
    case 0x7F062BC0u: goto label_7F062BC0;
    case 0x7F062BF8u: goto label_7F062BF8;
    case 0x7F062C00u: goto label_7F062C00;
    case 0x7F062C08u: goto label_7F062C08;
    case 0x7F062C10u: goto label_7F062C10;
    case 0x7F062C18u: goto label_7F062C18;
    case 0x7F062C48u: goto label_7F062C48;
    case 0x7F062C88u: goto label_7F062C88;
    case 0x7F062CA0u: goto label_7F062CA0;
    case 0x7F062CACu: goto label_7F062CAC;
    case 0x7F062CB8u: goto label_7F062CB8;
    case 0x7F062CECu: goto label_7F062CEC;
    case 0x7F062D08u: goto label_7F062D08;
    case 0x7F062D1Cu: goto label_7F062D1C;
    case 0x7F062D28u: goto label_7F062D28;
    case 0x7F062D30u: goto label_7F062D30;
    case 0x7F062D38u: goto label_7F062D38;
    case 0x7F062D44u: goto label_7F062D44;
    case 0x7F062D68u: goto label_7F062D68;
    case 0x7F062DD0u: goto label_7F062DD0;
    case 0x7F062DE0u: goto label_7F062DE0;
    case 0x7F062E80u: goto label_7F062E80;
    case 0x7F062E90u: goto label_7F062E90;
    case 0x7F062ED8u: goto label_7F062ED8;
    case 0x7F062EE4u: goto label_7F062EE4;
    case 0x7F062EF0u: goto label_7F062EF0;
    case 0x7F062EFCu: goto label_7F062EFC;
    case 0x7F062F18u: goto label_7F062F18;
    case 0x7F062F24u: goto label_7F062F24;
    case 0x7F062F30u: goto label_7F062F30;
    case 0x7F062F48u: goto label_7F062F48;
    case 0x7F062F54u: goto label_7F062F54;
    case 0x7F062F60u: goto label_7F062F60;
    case 0x7F062F7Cu: goto label_7F062F7C;
    case 0x7F062F88u: goto label_7F062F88;
    case 0x7F062F98u: goto label_7F062F98;
    case 0x7F062FA4u: goto label_7F062FA4;
    case 0x7F062FB0u: goto label_7F062FB0;
    case 0x7F062FC8u: goto label_7F062FC8;
    case 0x7F062FD4u: goto label_7F062FD4;
    case 0x7F062FE4u: goto label_7F062FE4;
    case 0x7F062FF0u: goto label_7F062FF0;
    case 0x7F062FF8u: goto label_7F062FF8;
    case 0x7F063010u: goto label_7F063010;
    case 0x7F06301Cu: goto label_7F06301C;
    case 0x7F063024u: goto label_7F063024;
    case 0x7F063034u: goto label_7F063034;
    case 0x7F063038u: goto label_7F063038;
    case 0x7F063044u: goto label_7F063044;
    case 0x7F063054u: goto label_7F063054;
    case 0x7F063080u: goto label_7F063080;
    case 0x7F06308Cu: goto label_7F06308C;
    case 0x7F063094u: goto label_7F063094;
    case 0x7F0630D0u: goto label_7F0630D0;
    case 0x7F0630E4u: goto label_7F0630E4;
    case 0x7F0630FCu: goto label_7F0630FC;
    case 0x7F063110u: goto label_7F063110;
    case 0x7F063140u: goto label_7F063140;
    case 0x7F06316Cu: goto label_7F06316C;
    case 0x7F063174u: goto label_7F063174;
    case 0x7F06317Cu: goto label_7F06317C;
    case 0x7F063184u: goto label_7F063184;
    case 0x7F06318Cu: goto label_7F06318C;
    case 0x7F063194u: goto label_7F063194;
    case 0x7F06319Cu: goto label_7F06319C;
    case 0x7F0631A4u: goto label_7F0631A4;
    case 0x7F0631ACu: goto label_7F0631AC;
    case 0x7F0631B4u: goto label_7F0631B4;
    case 0x7F0631BCu: goto label_7F0631BC;
    case 0x7F0631C4u: goto label_7F0631C4;
    case 0x7F0631E0u: goto label_7F0631E0;
    case 0x7F0631F8u: goto label_7F0631F8;
    case 0x7F063200u: goto label_7F063200;
    case 0x7F063240u: goto label_7F063240;
    case 0x7F063254u: goto label_7F063254;
    case 0x7F063288u: goto label_7F063288;
    case 0x7F0632CCu: goto label_7F0632CC;
    case 0x7F0632E8u: goto label_7F0632E8;
    case 0x7F063308u: goto label_7F063308;
    case 0x7F063310u: goto label_7F063310;
    case 0x7F063358u: goto label_7F063358;
    case 0x7F063364u: goto label_7F063364;
    case 0x7F06336Cu: goto label_7F06336C;
    case 0x7F0633BCu: goto label_7F0633BC;
    case 0x7F0633E8u: goto label_7F0633E8;
    case 0x7F0633FCu: goto label_7F0633FC;
    case 0x7F063404u: goto label_7F063404;
    case 0x7F063474u: goto label_7F063474;
    case 0x7F0634A0u: goto label_7F0634A0;
    case 0x7F0634B4u: goto label_7F0634B4;
    case 0x7F0634BCu: goto label_7F0634BC;
    case 0x7F0634C4u: goto label_7F0634C4;
    case 0x7F0634E0u: goto label_7F0634E0;
    case 0x7F063550u: goto label_7F063550;
    case 0x7F063560u: goto label_7F063560;
    case 0x7F063588u: goto label_7F063588;
    case 0x7F063598u: goto label_7F063598;
    case 0x7F0635E8u: goto label_7F0635E8;
    case 0x7F063600u: goto label_7F063600;
    case 0x7F063608u: goto label_7F063608;
    case 0x7F063614u: goto label_7F063614;
    case 0x7F063648u: goto label_7F063648;
    case 0x7F063688u: goto label_7F063688;
    case 0x7F0636A4u: goto label_7F0636A4;
    case 0x7F0636DCu: goto label_7F0636DC;
    case 0x7F0636ECu: goto label_7F0636EC;
    case 0x7F063704u: goto label_7F063704;
    case 0x7F063778u: goto label_7F063778;
    case 0x7F0637BCu: goto label_7F0637BC;
    case 0x7F063804u: goto label_7F063804;
    case 0x7F063838u: goto label_7F063838;
    case 0x7F06386Cu: goto label_7F06386C;
    case 0x7F0638A0u: goto label_7F0638A0;
    case 0x7F0638B4u: goto label_7F0638B4;
    case 0x7F063940u: goto label_7F063940;
    case 0x7F063954u: goto label_7F063954;
    case 0x7F063968u: goto label_7F063968;
    case 0x7F06397Cu: goto label_7F06397C;
    case 0x7F063990u: goto label_7F063990;
    case 0x7F0639A4u: goto label_7F0639A4;
    case 0x7F063AA0u: goto label_7F063AA0;
    case 0x7F063AB4u: goto label_7F063AB4;
    case 0x7F063B80u: goto label_7F063B80;
    case 0x7F063B90u: goto label_7F063B90;
    case 0x7F063BA0u: goto label_7F063BA0;
    case 0x7F063BB0u: goto label_7F063BB0;
    case 0x7F063BC0u: goto label_7F063BC0;
    case 0x7F063BCCu: goto label_7F063BCC;
    case 0x7F063BDCu: goto label_7F063BDC;
    case 0x7F063BECu: goto label_7F063BEC;
    case 0x7F063BFCu: goto label_7F063BFC;
    case 0x7F063C0Cu: goto label_7F063C0C;
    case 0x7F063C40u: goto label_7F063C40;
    case 0x7F063CE8u: goto label_7F063CE8;
    case 0x7F063D54u: goto label_7F063D54;
    case 0x7F063DA0u: goto label_7F063DA0;
    case 0x7F063DE8u: goto label_7F063DE8;
    case 0x7F063E4Cu: goto label_7F063E4C;
    case 0x7F063E58u: goto label_7F063E58;
    case 0x7F063E68u: goto label_7F063E68;
    case 0x7F063E90u: goto label_7F063E90;
    case 0x7F063F48u: goto label_7F063F48;
    case 0x7F064084u: goto label_7F064084;
    default: return;
    }
}

